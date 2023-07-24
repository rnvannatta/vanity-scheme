/* Copyright 2023 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Compiler.
 *
 * The Vanity Scheme Compiler is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 3 of the
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
 * This work is published with additional permission under GNU GPL
 * Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
 * should have been included with the Vanity Scheme Compiler.
 *
 * If not, visit <https://github.com/rnvannatta>
 */
#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vscheme/vinlines.h"
#include <stdarg.h>
static struct { VBlob sym; char bytes[21]; } _V10string_D1694 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1693 = { { VSTRING, 6 }, "utils" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1692 = { { VSTRING, 6 }, "match" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1691 = { { VSTRING, 10 }, "variables" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1690 = { { VSTRING, 10 }, "transpile" };
static struct { VBlob sym; char bytes[19]; } _V0open__output__string = { { VSYMBOL, 19 }, "open-output-string" };
static struct { VBlob sym; char bytes[18]; } _V0get__output__string = { { VSYMBOL, 18 }, "get-output-string" };
static struct { VBlob sym; char bytes[11]; } _V0close__port = { { VSYMBOL, 11 }, "close-port" };
static struct { VBlob sym; char bytes[2]; } _V0_L = { { VSYMBOL, 2 }, "<" };
static struct { VBlob sym; char bytes[11]; } _V0string__ref = { { VSYMBOL, 11 }, "string-ref" };
static struct { VBlob sym; char bytes[5]; } _V0eqv_Q = { { VSYMBOL, 5 }, "eqv\?" };
static struct { VBlob sym; char bytes[4]; } _V0eq_Q = { { VSYMBOL, 4 }, "eq\?" };
static struct { VBlob sym; char bytes[6]; } _V0char_Q = { { VSYMBOL, 6 }, "char\?" };
static struct { VBlob sym; char bytes[8]; } _V0number_Q = { { VSYMBOL, 8 }, "number\?" };
static struct { VBlob sym; char bytes[9]; } _V0integer_Q = { { VSYMBOL, 9 }, "integer\?" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[14]; } _V0string__length = { { VSYMBOL, 14 }, "string-length" };
static struct { VBlob sym; char bytes[14]; } _V0mangle__symbol = { { VSYMBOL, 14 }, "mangle-symbol" };
static struct { VBlob sym; char bytes[15]; } _V0symbol___Gstring = { { VSYMBOL, 15 }, "symbol->string" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[18]; } _V0lookup__intrinsic2 = { { VSYMBOL, 18 }, "lookup-intrinsic2" };
static struct { VBlob sym; char bytes[17]; } _V0call__with__values = { { VSYMBOL, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[2]; } _V0_E = { { VSYMBOL, 2 }, "=" };
static struct { VBlob sym; char bytes[8]; } _V0display = { { VSYMBOL, 8 }, "display" };
static struct { VBlob sym; char bytes[14]; } _V0lookup__inline = { { VSYMBOL, 14 }, "lookup-inline" };
static struct { VBlob sym; char bytes[7]; } _V0append = { { VSYMBOL, 7 }, "append" };
static struct { VBlob sym; char bytes[9]; } _V0list__ref = { { VSYMBOL, 9 }, "list-ref" };
static struct { VBlob sym; char bytes[2]; } _V0__ = { { VSYMBOL, 2 }, "-" };
static struct { VBlob sym; char bytes[5]; } _V0cddr = { { VSYMBOL, 5 }, "cddr" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[8]; } _V0sprintf = { { VSYMBOL, 8 }, "sprintf" };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[8]; } _V0call_Wcc = { { VSYMBOL, 8 }, "call/cc" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[7]; } _V0printf = { { VSYMBOL, 7 }, "printf" };
static struct { VBlob sym; char bytes[7]; } _V0length = { { VSYMBOL, 7 }, "length" };
static struct { VBlob sym; char bytes[5]; } _V0iota = { { VSYMBOL, 5 }, "iota" };
static struct { VBlob sym; char bytes[10]; } _V0displayln = { { VSYMBOL, 10 }, "displayln" };
static struct { VBlob sym; char bytes[9]; } _V0for__each = { { VSYMBOL, 9 }, "for-each" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[8]; } _V0reverse = { { VSYMBOL, 8 }, "reverse" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[5]; } _V0assv = { { VSYMBOL, 5 }, "assv" };
static struct { VBlob sym; char bytes[7]; } _V0gensym = { { VSYMBOL, 7 }, "gensym" };
static struct { VBlob sym; char bytes[5]; } _V0cdar = { { VSYMBOL, 5 }, "cdar" };
static struct { VBlob sym; char bytes[6]; } _V0assoc = { { VSYMBOL, 6 }, "assoc" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[9]; } _V0set__car_B = { { VSYMBOL, 9 }, "set-car!" };
static struct { VBlob sym; char bytes[7]; } _V0values = { { VSYMBOL, 7 }, "values" };
static struct { VBlob sym; char bytes[6]; } _V0apply = { { VSYMBOL, 6 }, "apply" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1689 = { { VSTRING, 17 }, "No matching case" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1688 = { { VSTRING, 12 }, "~A_lambda~A" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1687 = { { VSTRING, 7 }, "~A_k~A" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1686 = { { VSTRING, 7 }, "string" };
static struct { VBlob sym; char bytes[13]; } _V0continuation = { { VSYMBOL, 13 }, "continuation" };
static struct { VBlob sym; char bytes[12]; } _V0case__lambda = { { VSYMBOL, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[7]; } _V0lambda = { { VSYMBOL, 7 }, "lambda" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1685 = { { VSTRING, 7 }, "global" };
static struct { VBlob sym; char bytes[16]; } _V10vcore_Ddeclare = { { VSYMBOL, 16 }, "##vcore.declare" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1684 = { { VSTRING, 27 }, "VLookupGlobalVarFast(\"~A\")" };
static struct { VBlob sym; char bytes[60]; } _V10string_D1683 = { { VSTRING, 60 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A,NULL)})" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1682 = { { VSTRING, 3 }, "\\\?" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1681 = { { VSTRING, 3 }, "\\b" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1680 = { { VSTRING, 3 }, "\\'" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1679 = { { VSTRING, 3 }, "\\\\" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1678 = { { VSTRING, 3 }, "\\r" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1677 = { { VSTRING, 3 }, "\\n" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1676 = { { VSTRING, 3 }, "\\t" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1675 = { { VSTRING, 3 }, "\\a" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1674 = { { VSTRING, 21 }, "Unknown literal type" };
static struct { VBlob sym; char bytes[40]; } _V10string_D1673 = { { VSTRING, 40 }, "VEncodePointer(&~A.sym, VPOINTER_OTHER)" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1672 = { { VSTRING, 19 }, "VEncodeBool(false)" };
static struct { VBlob sym; char bytes[18]; } _V10string_D1671 = { { VSTRING, 18 }, "VEncodeBool(true)" };
static struct { VBlob sym; char bytes[18]; } _V10string_D1670 = { { VSTRING, 18 }, "VEncodeChar('~A')" };
static struct { VBlob sym; char bytes[18]; } _V10string_D1669 = { { VSTRING, 18 }, "VEncodeNumber(~A)" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1668 = { { VSTRING, 16 }, "VEncodeInt(~Al)" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1667 = { { VSTRING, 31 }, "unknown entry in literal table" };
static struct { VBlob sym; char bytes[79]; } _V10string_D1666 = { { VSTRING, 79 }, "static struct { VBlob sym; char bytes[~A]; } ~A = { { VSTRING, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[79]; } _V10string_D1665 = { { VSTRING, 79 }, "static struct { VBlob sym; char bytes[~A]; } ~A = { { VSYMBOL, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[34]; } _V10string_D1664 = { { VSTRING, 34 }, "    V_CALL_FUNC(~A, NULL, runtime" };
static struct { VBlob sym; char bytes[8]; } _V10string_D1663 = { { VSTRING, 8 }, "V_CALL(" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1662 = { { VSTRING, 20 }, "V_CALL_FUNC(~A, env" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1661 = { { VSTRING, 10 }, ", runtime" };
static struct { VBlob sym; char bytes[57]; } _V10string_D1660 = { { VSTRING, 57 }, "    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,~N      " };
static struct { VBlob sym; char bytes[38]; } _V10string_D1659 = { { VSTRING, 38 }, "set!'s first argument is not a symbol" };
static struct { VBlob sym; char bytes[54]; } _V10string_D1658 = { { VSTRING, 54 }, "    V_CALL_FUNC(VSetGlobalVar2, env, runtime,~N      " };
static struct { VBlob sym; char bytes[51]; } _V10string_D1657 = { { VSTRING, 51 }, "    V_CALL_FUNC(VSetEnvVar2, env, runtime,~N      " };
static struct { VBlob sym; char bytes[51]; } _V10string_D1656 = { { VSTRING, 51 }, ",~N      VEncodeInt(~Al), VEncodeInt(~Al),~N      " };
static struct { VBlob sym; char bytes[11]; } _V10string_D1655 = { { VSTRING, 11 }, "~N    );~N" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1654 = { { VSTRING, 6 }, "~A(~N" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1653 = { { VSTRING, 10 }, "~N    )~N" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1652 = { { VSTRING, 10 }, ",~N      " };
static struct { VBlob sym; char bytes[15]; } _V10string_D1651 = { { VSTRING, 15 }, "unknown inline" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1650 = { { VSTRING, 21 }, "malformed expression" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1649 = { { VSTRING, 5 }, "fugg" };
static struct { VBlob sym; char bytes[9]; } _V10inline = { { VSYMBOL, 9 }, "##inline" };
static struct { VBlob sym; char bytes[7]; } _V0define = { { VSYMBOL, 7 }, "define" };
static struct { VBlob sym; char bytes[5]; } _V0set_B = { { VSYMBOL, 5 }, "set!" };
static struct { VBlob sym; char bytes[3]; } _V0if = { { VSYMBOL, 3 }, "if" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1648 = { { VSTRING, 16 }, "if(VDecodeBool(" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1647 = { { VSTRING, 5 }, ")) {" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1646 = { { VSTRING, 9 }, "} else {" };
static struct { VBlob sym; char bytes[7]; } _V0bruijn = { { VSYMBOL, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1645 = { { VSTRING, 25 }, "VGetArg(upenv, ~A-1, ~A)" };
static struct { VBlob sym; char bytes[28]; } _V10string_D1644 = { { VSTRING, 28 }, "upenv->up->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1643 = { { VSTRING, 24 }, "upenv->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1642 = { { VSTRING, 20 }, "upenv->up->vars[~A]" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1641 = { { VSTRING, 16 }, "upenv->vars[~A]" };
static struct { VBlob sym; char bytes[6]; } _V0close = { { VSYMBOL, 6 }, "close" };
static struct { VBlob sym; char bytes[60]; } _V10string_D1640 = { { VSTRING, 60 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, env)})" };
static struct { VBlob sym; char bytes[9]; } _V10string = { { VSYMBOL, 9 }, "##string" };
static struct { VBlob sym; char bytes[6]; } _V0quote = { { VSYMBOL, 6 }, "quote" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1639 = { { VSTRING, 6 }, "VNULL" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1638 = { { VSTRING, 7 }, "_var~A" };
static struct { VBlob sym; char bytes[58]; } _V10string_D1637 = { { VSTRING, 58 }, "static void ~A(VRuntime * runtime, VEnv * upenv, int argc" };
static struct { VBlob sym; char bytes[11]; } _V10string_D1636 = { { VSTRING, 11 }, ", VWORD ~A" };
static struct { VBlob sym; char bytes[57]; } _V10string_D1635 = { { VSTRING, 57 }, " V_GC_CHECK2_VARARGS((VFunc)~A, runtime, upenv, ~A, argc" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1634 = { { VSTRING, 5 }, ", ~A" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1633 = { { VSTRING, 10 }, "  // ~S~N" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1632 = { { VSTRING, 9 }, "_varargs" };
static struct { VBlob sym; char bytes[52]; } _V10string_D1631 = { { VSTRING, 52 }, "  struct { VEnv env; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1630 = { { VSTRING, 33 }, "  VEnv * env = &container.env;~N" };
static struct { VBlob sym; char bytes[77]; } _V10string_D1629 = { { VSTRING, 77 }, "  env->tag = VENV; env->num_vars = ~A; env->var_len = ~A; env->up = upenv;~N" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1628 = { { VSTRING, 24 }, "  env->vars[~A] = ~A;~N" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1627 = { { VSTRING, 30 }, "  env->vars[~A] = _varargs;~N" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1626 = { { VSTRING, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1625 = { { VSTRING, 16 }, ", _varargs) {~N" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1624 = { { VSTRING, 27 }, " VWORD _varargs = VNULL;~N" };
static struct { VBlob sym; char bytes[55]; } _V10string_D1623 = { { VSTRING, 55 }, " V_GATHER_VARARGS_VARIADIC(&_varargs, ~A, argc, ~A);~N" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1622 = { { VSTRING, 20 }, " if(argc != ~A) {~N" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1621 = { { VSTRING, 24 }, "  \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1620 = { { VSTRING, 19 }, " if(argc < ~A) {~N" };
static struct { VBlob sym; char bytes[52]; } _V10string_D1619 = { { VSTRING, 52 }, "  VError(\"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[32]; } _V10string_D1618 = { { VSTRING, 32 }, "  \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[13]; } _V10string_D1617 = { { VSTRING, 13 }, "  , argc);~N" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1616 = { { VSTRING, 5 }, " }~N" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1615 = { { VSTRING, 37 }, " static VDebugInfo dbg = { \"~A\" };~N" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1614 = { { VSTRING, 22 }, " VRecordCall(&dbg);~N" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1613 = { { VSTRING, 6 }, ", ..." };
static struct { VBlob sym; char bytes[23]; } _V10string_D1612 = { { VSTRING, 23 }, "__attribute__((used)) " };
static struct { VBlob sym; char bytes[14]; } _V10string_D1611 = { { VSTRING, 14 }, "_V20Case~A_~A" };
static struct { VBlob sym; char bytes[104]; } _V10string_D1610 = { { VSTRING, 104 }, "__attribute__((used)) static void _V20CaseError_~A(VRuntime * runtime, VEnv * upenv, int argc, ...) {~N" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1609 = { { VSTRING, 9 }, " // ~S~N" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1608 = { { VSTRING, 51 }, " VError(\"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[23]; } _V10string_D1607 = { { VSTRING, 23 }, " \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1606 = { { VSTRING, 31 }, " \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1605 = { { VSTRING, 12 }, " , argc);~N" };
static struct { VBlob sym; char bytes[4]; } _V10string_D1604 = { { VSTRING, 4 }, "}~N" };
static struct { VBlob sym; char bytes[60]; } _V10string_D1603 = { { VSTRING, 60 }, "void ~A(VRuntime * runtime, VEnv * upenv, int argc, ...);~N" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1602 = { { VSTRING, 7 }, "asm(~N" };
static struct { VBlob sym; char bytes[29]; } _V10string_D1601 = { { VSTRING, 29 }, "\".intel_syntax noprefix\\n\"~N" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1600 = { { VSTRING, 10 }, "\"~A:\\n\"~N" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1599 = { { VSTRING, 17 }, "no matching case" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1598 = { { VSTRING, 16 }, "\"    je ~A\\n\"~N" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1597 = { { VSTRING, 22 }, "\"    cmp edx, ~A\\n\"~N" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1596 = { { VSTRING, 17 }, "\"    jge ~A\\n\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1595 = { { VSTRING, 31 }, "\"    jmp _V20CaseError_~A\\n\"~N" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1594 = { { VSTRING, 5 }, ");~N" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1593 = { { VSTRING, 22 }, "void toplevel~A() {~N" };
static struct { VBlob sym; char bytes[23]; } _V10string_D1592 = { { VSTRING, 23 }, "    VEnv * env = NULL;" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1591 = { { VSTRING, 31 }, "    VRuntime * runtime = NULL;" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1590 = { { VSTRING, 24 }, "VFunc ~A = (VFunc)~A;~N" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1589 = { { VSTRING, 37 }, "int main(int argc, char ** argv) {~N" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1588 = { { VSTRING, 30 }, "  void (*toplevels[])() = {~N" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1587 = { { VSTRING, 16 }, "    toplevel~A," };
static struct { VBlob sym; char bytes[9]; } _V10string_D1586 = { { VSTRING, 9 }, "  ~N};~N" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1585 = { { VSTRING, 30 }, "  VArgc = argc; VArgv = argv;" };
static struct { VBlob sym; char bytes[68]; } _V10string_D1584 = { { VSTRING, 68 }, "  return VStart(sizeof toplevels / sizeof *toplevels, toplevels);~N" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1583 = { { VSTRING, 2 }, "}" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1582 = { { VSTRING, 30 }, "#include \"vscheme/vruntime.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1581 = { { VSTRING, 30 }, "#include \"vscheme/vlibrary.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1580 = { { VSTRING, 30 }, "#include \"vscheme/vinlines.h\"" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1579 = { { VSTRING, 20 }, "#include <stdarg.h>" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1578 = { { VSTRING, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[10]; } _V0printout2 = { { VSYMBOL, 10 }, "printout2" };
static struct { VBlob sym; char bytes[13]; } _V0to__functions = { { VSYMBOL, 13 }, "to-functions" };
static struct { VBlob sym; char bytes[11]; } _V0bruijn__ify = { { VSYMBOL, 11 }, "bruijn-ify" };
static void transpile_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k63, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.246 6 0) (##inline ##sys.cons (##inline ##sys.cons (quote bruijn-ify) (bruijn bruijn-ify 6 2)) (##inline ##sys.cons (##inline ##sys.cons (quote to-functions) (bruijn to-functions 6 5)) (##inline ##sys.cons (##inline ##sys.cons (quote printout2) (bruijn printout2 6 6)) (quote ())))))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0bruijn__ify.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 2)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0to__functions.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 5)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0printout2.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 6)
    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0printout2_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k89, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn shared? 28 2) ((bruijn ##k.288 0 0) (bruijn print-main? 8 1)) ((bruijn ##k.288 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 28-1, 2))) {
V_CALL(_var0, runtime,
      VGetArg(upenv, 8-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0printout2_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k91, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.286 1 0) ((bruijn error 36 37) (bruijn ##k.287 0 0) (##string ##string.1578)) ((bruijn ##k.287 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 36-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1578.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0printout2_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k93, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn print-main? 10 1) ((bruijn print-main 29 15) (bruijn ##k.285 0 0) (bruijn toplevels 30 6)) ((bruijn ##k.285 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 10-1, 1))) {
V_CALL(VGetArg(upenv, 29-1, 15), runtime,
      _var0,
      VGetArg(upenv, 30-1, 6)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0printout2_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k94, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.275 10 0) (bruijn print-main? 10 1))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0printout2_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0printout2_k93) (close _V0printout2_k94))
V_CALL_FUNC(_V0printout2_k93, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k94, env)})
    );
 }
}
static void _V0printout2_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0printout2_k91) (close _V0printout2_k92))
V_CALL_FUNC(_V0printout2_k91, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k92, env)})
    );
 }
}
static void _V0printout2_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0printout2_k89) (close _V0printout2_k90))
V_CALL_FUNC(_V0printout2_k89, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k90, env)})
    );
 }
}
static void _V0printout2_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 33 36) (close _V0printout2_k88) (bruijn print-declare 25 14) (bruijn declares 26 5))
V_CALL(VGetArg(upenv, 33-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k88, env)}),
      VGetArg(upenv, 25-1, 14),
      VGetArg(upenv, 26-1, 5)
    );
 }
}
static void _V0printout2_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 32 36) (close _V0printout2_k87) (bruijn print-fun 24 12) (bruijn functions 5 2))
V_CALL(VGetArg(upenv, 32-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k87, env)}),
      VGetArg(upenv, 24-1, 12),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0printout2_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 31 36) (close _V0printout2_k86) (bruijn print-literal-declaration 23 7) (bruijn literal-table 24 3))
V_CALL(VGetArg(upenv, 31-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k86, env)}),
      VGetArg(upenv, 23-1, 7),
      VGetArg(upenv, 24-1, 3)
    );
 }
}
static void _V0printout2_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn displayln 30 35) (close _V0printout2_k85) (##string ##string.1579))
V_CALL(VGetArg(upenv, 30-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k85, env)}),
      VEncodePointer(&_V10string_D1579.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0printout2_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn displayln 29 35) (close _V0printout2_k84) (##string ##string.1580))
V_CALL(VGetArg(upenv, 29-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k84, env)}),
      VEncodePointer(&_V10string_D1580.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0printout2_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn displayln 28 35) (close _V0printout2_k83) (##string ##string.1581))
V_CALL(VGetArg(upenv, 28-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k83, env)}),
      VEncodePointer(&_V10string_D1581.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0printout2_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_lambda6, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn displayln 27 35) (close _V0printout2_k82) (##string ##string.1582))
V_CALL(VGetArg(upenv, 27-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k82, env)}),
      VEncodePointer(&_V10string_D1582.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0printout2_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0printout2_lambda6) (bruijn ##k.259 18 0) (bruijn ##x.289 1 0) (bruijn ##x.290 0 0))
V_CALL_FUNC(_V0printout2_lambda6, env, runtime,
      VGetArg(upenv, 18-1, 0),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0printout2_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 25 40) (close _V0printout2_k81) (bruijn functions 18 4))
V_CALL(VGetArg(upenv, 25-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k81, env)}),
      VGetArg(upenv, 18-1, 4)
    );
 }
}
static void _V0printout2_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 24 39) (close _V0printout2_k80) (bruijn ##x.291 0 0))
V_CALL(VGetArg(upenv, 24-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k80, env)}),
      _var0
    );
 }
}
static void _V0printout2_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 23 38) (close _V0printout2_k79) (bruijn toplevels 16 6))
V_CALL(VGetArg(upenv, 23-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k79, env)}),
      VGetArg(upenv, 16-1, 6)
    );
 }
}
static void _V0print__main_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k105, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 34 35) (bruijn ##k.292 11 0) (##string ##string.1583))
V_CALL(VGetArg(upenv, 34-1, 35), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D1583.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__main_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 33 32) (close _V0print__main_k105) (##string ##string.1584))
V_CALL(VGetArg(upenv, 33-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k105, env)}),
      VEncodePointer(&_V10string_D1584.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__main_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 32 32) (close _V0print__main_k104) (##string ##string.1585))
V_CALL(VGetArg(upenv, 32-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k104, env)}),
      VEncodePointer(&_V10string_D1585.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__main_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 31 32) (close _V0print__main_k103) (##string ##string.1586))
V_CALL(VGetArg(upenv, 31-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k103, env)}),
      VEncodePointer(&_V10string_D1586.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__main_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__main_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 31 32) (bruijn ##k.300 0 0) (##string ##string.1587) (bruijn i 0 1))
V_CALL(VGetArg(upenv, 31-1, 32), runtime,
      _var0,
      VEncodePointer(&_V10string_D1587.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0print__main_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 30 36) (close _V0print__main_k102) (close _V0print__main_lambda8) (bruijn ##x.301 0 0))
V_CALL(VGetArg(upenv, 30-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k102, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_lambda8, env)}),
      _var0
    );
 }
}
static void _V0print__main_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iota 29 34) (close _V0print__main_k101) (bruijn ##x.302 0 0))
V_CALL(VGetArg(upenv, 29-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k101, env)}),
      _var0
    );
 }
}
static void _V0print__main_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 28 33) (close _V0print__main_k100) (bruijn toplevels 5 1))
V_CALL(VGetArg(upenv, 28-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k100, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0print__main_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 27 32) (close _V0print__main_k99) (##string ##string.1588))
V_CALL(VGetArg(upenv, 27-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k99, env)}),
      VEncodePointer(&_V10string_D1588.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__main_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 26 32) (close _V0print__main_k98) (##string ##string.1589))
V_CALL(VGetArg(upenv, 26-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k98, env)}),
      VEncodePointer(&_V10string_D1589.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__main_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 25 36) (close _V0print__main_k97) (bruijn print-toplevel 17 13) (bruijn ##x.304 0 0) (bruijn toplevels 2 1))
V_CALL(VGetArg(upenv, 25-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k97, env)}),
      VGetArg(upenv, 17-1, 13),
      _var0,
      upenv->up->vars[1]
    );
 }
}
static void _V0print__main_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iota 24 34) (close _V0print__main_k96) (bruijn ##x.305 0 0))
V_CALL(VGetArg(upenv, 24-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k96, env)}),
      _var0
    );
 }
}
static void _V0print__main_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__main_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn length 23 33) (close _V0print__main_k95) (bruijn toplevels 0 1))
V_CALL(VGetArg(upenv, 23-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k95, env)}),
      _var1
    );
 }
}
static void _V0printout2_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k78) (bruijn print-main 14 15) (close _V0print__main_lambda7))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k78, env)}),
      VEncodeInt(14l), VEncodeInt(15l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_lambda7, env)})
    );
 }
}
static void _V0print__declare_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k107, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 24 32) (bruijn ##k.306 2 0) (##string ##string.1590) (bruijn ##x.307 1 0) (bruijn ##x.308 0 0))
V_CALL(VGetArg(upenv, 24-1, 32), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1590.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0print__declare_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 23 30) (close _V0print__declare_k107) (bruijn declare 1 1))
V_CALL(VGetArg(upenv, 23-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_k107, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__declare_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__declare_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 22 31) (close _V0print__declare_k106) (bruijn declare 0 1))
V_CALL(VGetArg(upenv, 22-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_k106, env)}),
      _var1
    );
 }
}
static void _V0printout2_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k77) (bruijn print-declare 13 14) (close _V0print__declare_lambda9))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k77, env)}),
      VEncodeInt(13l), VEncodeInt(14l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_lambda9, env)})
    );
 }
}
static void _V0print__toplevel_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__toplevel_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__toplevel_k111, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 25 35) (bruijn ##k.309 4 0) (##string ##string.1583))
V_CALL(VGetArg(upenv, 25-1, 35), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1583.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__toplevel_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__toplevel_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__toplevel_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 16 9) (close _V0print__toplevel_k111) (bruijn expr 3 2) (quote ()))
V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__toplevel_k111, env)}),
      upenv->up->up->vars[2],
      VNULL
    );
 }
}
static void _V0print__toplevel_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__toplevel_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__toplevel_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn displayln 23 35) (close _V0print__toplevel_k110) (##string ##string.1591))
V_CALL(VGetArg(upenv, 23-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__toplevel_k110, env)}),
      VEncodePointer(&_V10string_D1591.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__toplevel_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__toplevel_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__toplevel_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn displayln 22 35) (close _V0print__toplevel_k109) (##string ##string.1592))
V_CALL(VGetArg(upenv, 22-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__toplevel_k109, env)}),
      VEncodePointer(&_V10string_D1592.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__toplevel_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0print__toplevel_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__toplevel_lambda10, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn printf 21 32) (close _V0print__toplevel_k108) (##string ##string.1593) (bruijn i 0 1))
V_CALL(VGetArg(upenv, 21-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__toplevel_k108, env)}),
      VEncodePointer(&_V10string_D1593.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0printout2_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k76) (bruijn print-toplevel 12 13) (close _V0print__toplevel_lambda10))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k76, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__toplevel_lambda10, env)})
    );
 }
}
static void _V0print__fun_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k116, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.229 7 1) (bruijn ##k.334 5 0) (bruijn ##x.342 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0print__fun_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.235 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.235 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.233 2 0))) ((bruijn print-fun-single 19 10) (close _V0print__fun_k116) (##inline ##sys.car (bruijn ##expr.231 4 1)) (##inline ##sys.car (bruijn ##expr.232 3 0)) (##inline ##sys.car (bruijn ##expr.234 1 0)) #f (##inline ##sys.car (bruijn ##expr.235 0 0)) #f) ((bruijn ##k.334 4 0) #f)) ((bruijn ##k.334 4 0) #f)) ((bruijn ##k.334 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 19-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k116, env)}),
      VInlineCar(
upenv->up->up->up->vars[1]
    )
,
      VInlineCar(
upenv->up->up->vars[0]
    )
,
      VInlineCar(
upenv->vars[0]
    )
,
      VEncodeBool(false),
      VInlineCar(
_var0
    )
,
      VEncodeBool(false)
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.234 0 0)) ((close _V0print__fun_k115) (##inline ##sys.cdr (bruijn ##expr.234 0 0))) ((bruijn ##k.334 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun_k115, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.233 0 0)) ((close _V0print__fun_k114) (##inline ##sys.car (bruijn ##expr.233 0 0))) ((bruijn ##k.334 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun_k114, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.232 0 0)) ((close _V0print__fun_k113) (##inline ##sys.cdr (bruijn ##expr.232 0 0))) ((bruijn ##k.334 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun_k113, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.231 0 1)) ((close _V0print__fun_k112) (##inline ##sys.cdr (bruijn ##expr.231 0 1))) ((bruijn ##k.334 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun_k112, env, runtime,
      VInlineCdr(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k124, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.229 10 1) (bruijn ##k.320 7 0) (bruijn ##x.330 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0print__fun_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.241 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.241 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.238 4 0))) ((bruijn print-fun-single 22 10) (close _V0print__fun_k124) (##inline ##sys.car (bruijn ##expr.236 6 1)) (##inline ##sys.car (bruijn ##expr.237 5 0)) (##inline ##sys.car (bruijn ##expr.239 3 0)) #t (##inline ##sys.car (bruijn ##expr.241 0 0)) #f) ((bruijn ##k.320 6 0) #f)) ((bruijn ##k.320 6 0) #f)) ((bruijn ##k.320 6 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->up->up->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 22-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k124, env)}),
      VInlineCar(
VGetArg(upenv, 6-1, 1)
    )
,
      VInlineCar(
VGetArg(upenv, 5-1, 0)
    )
,
      VInlineCar(
upenv->up->up->vars[0]
    )
,
      VEncodeBool(true),
      VInlineCar(
_var0
    )
,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.326 0 0) ((close _V0print__fun_k123) (##inline ##sys.cdr (bruijn ##expr.240 1 0))) ((bruijn ##k.320 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__fun_k123, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.240 0 0)) ((bruijn equal? 28 28) (close _V0print__fun_k122) (quote +) (##inline ##sys.car (bruijn ##expr.240 0 0))) ((bruijn ##k.320 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 28-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k122, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.239 0 0)) ((close _V0print__fun_k121) (##inline ##sys.cdr (bruijn ##expr.239 0 0))) ((bruijn ##k.320 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun_k121, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.238 0 0)) ((close _V0print__fun_k120) (##inline ##sys.car (bruijn ##expr.238 0 0))) ((bruijn ##k.320 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun_k120, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.237 0 0)) ((close _V0print__fun_k119) (##inline ##sys.cdr (bruijn ##expr.237 0 0))) ((bruijn ##k.320 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun_k119, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.236 0 1)) ((close _V0print__fun_k118) (##inline ##sys.cdr (bruijn ##expr.236 0 1))) ((bruijn ##k.320 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun_k118, env, runtime,
      VInlineCdr(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k126, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.229 4 1) (bruijn ##k.316 3 0) (bruijn ##x.319 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__fun_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-fun-case 16 11) (close _V0print__fun_k126) (bruijn fun 4 1))
V_CALL(VGetArg(upenv, 16-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k126, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0print__fun_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun_lambda15) (close _V0print__fun_k125) (bruijn ##input.230 1 1))
V_CALL_FUNC(_V0print__fun_lambda15, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k125, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__fun_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun_lambda14) (close _V0print__fun_k117) (bruijn ##input.230 0 1))
V_CALL_FUNC(_V0print__fun_lambda14, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k117, env)}),
      _var1
    );
 }
}
static void _V0print__fun_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun_lambda13) (bruijn ##k.315 0 0) (bruijn fun 1 1))
V_CALL_FUNC(_V0print__fun_lambda13, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0print__fun_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 20 29) (bruijn ##k.314 0 0) (close _V0print__fun_lambda12))
V_CALL(VGetArg(upenv, 20-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_lambda12, env)})
    );
 }
}
static void _V0printout2_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k75) (bruijn print-fun 11 12) (close _V0print__fun_lambda11))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k75, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_lambda11, env)})
    );
 }
}
static void _V0print__fun__case_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k144, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 37 32) (bruijn ##k.345 18 0) (##string ##string.1594))
V_CALL(VGetArg(upenv, 37-1, 32), runtime,
      VGetArg(upenv, 18-1, 0),
      VEncodePointer(&_V10string_D1594.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 36 32) (close _V0print__fun__case_k144) (##string ##string.1595) (bruijn name 16 0))
V_CALL(VGetArg(upenv, 36-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k144, env)}),
      VEncodePointer(&_V10string_D1595.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 0)
    );
 }
}
static void _V0print__fun__case_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k152, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.216 10 1) (bruijn ##k.376 8 0) (bruijn ##x.386 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0print__fun__case_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 46 32) (close _V0print__fun__case_k152) (##string ##string.1596) (##inline ##sys.car (bruijn ##expr.218 7 1)))
V_CALL(VGetArg(upenv, 46-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k152, env)}),
      VEncodePointer(&_V10string_D1596.sym, VPOINTER_OTHER),
      VInlineCar(
VGetArg(upenv, 7-1, 1)
    )

    );
 }
}
static void _V0print__fun__case_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.223 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.223 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.220 4 0))) ((bruijn printf 45 32) (close _V0print__fun__case_k151) (##string ##string.1597) (##inline ##sys.car (bruijn ##expr.221 3 0))) ((bruijn ##k.376 6 0) #f)) ((bruijn ##k.376 6 0) #f)) ((bruijn ##k.376 6 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->up->up->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 45-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k151, env)}),
      VEncodePointer(&_V10string_D1597.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->up->up->vars[0]
    )

    );
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.382 0 0) ((close _V0print__fun__case_k150) (##inline ##sys.cdr (bruijn ##expr.222 1 0))) ((bruijn ##k.376 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__fun__case_k150, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.222 0 0)) ((bruijn equal? 43 28) (close _V0print__fun__case_k149) (quote +) (##inline ##sys.car (bruijn ##expr.222 0 0))) ((bruijn ##k.376 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 43-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k149, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.221 0 0)) ((close _V0print__fun__case_k148) (##inline ##sys.cdr (bruijn ##expr.221 0 0))) ((bruijn ##k.376 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k148, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.220 0 0)) ((close _V0print__fun__case_k147) (##inline ##sys.car (bruijn ##expr.220 0 0))) ((bruijn ##k.376 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k147, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.219 0 0)) ((close _V0print__fun__case_k146) (##inline ##sys.cdr (bruijn ##expr.219 0 0))) ((bruijn ##k.376 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k146, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.218 0 1)) ((close _V0print__fun__case_k145) (##inline ##sys.cdr (bruijn ##expr.218 0 1))) ((bruijn ##k.376 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k145, env, runtime,
      VInlineCdr(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k159, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.216 9 1) (bruijn ##k.364 6 0) (bruijn ##x.372 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0print__fun__case_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 45 32) (close _V0print__fun__case_k159) (##string ##string.1598) (##inline ##sys.car (bruijn ##expr.224 5 1)))
V_CALL(VGetArg(upenv, 45-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k159, env)}),
      VEncodePointer(&_V10string_D1598.sym, VPOINTER_OTHER),
      VInlineCar(
VGetArg(upenv, 5-1, 1)
    )

    );
 }
}
static void _V0print__fun__case_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.228 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.228 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.226 2 0))) ((bruijn printf 44 32) (close _V0print__fun__case_k158) (##string ##string.1597) (##inline ##sys.car (bruijn ##expr.227 1 0))) ((bruijn ##k.364 4 0) #f)) ((bruijn ##k.364 4 0) #f)) ((bruijn ##k.364 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 44-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k158, env)}),
      VEncodePointer(&_V10string_D1597.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->vars[0]
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.227 0 0)) ((close _V0print__fun__case_k157) (##inline ##sys.cdr (bruijn ##expr.227 0 0))) ((bruijn ##k.364 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k157, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.226 0 0)) ((close _V0print__fun__case_k156) (##inline ##sys.car (bruijn ##expr.226 0 0))) ((bruijn ##k.364 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k156, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.225 0 0)) ((close _V0print__fun__case_k155) (##inline ##sys.cdr (bruijn ##expr.225 0 0))) ((bruijn ##k.364 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k155, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.224 0 1)) ((close _V0print__fun__case_k154) (##inline ##sys.cdr (bruijn ##expr.224 0 1))) ((bruijn ##k.364 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k154, env, runtime,
      VInlineCdr(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k160, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 40 37) (bruijn ##k.361 2 0) (##string ##string.1599))
V_CALL(VGetArg(upenv, 40-1, 37), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1599.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__case_lambda21) (close _V0print__fun__case_k160) (bruijn ##input.217 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda21, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k160, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda20) (close _V0print__fun__case_k153) (bruijn ##input.217 0 1))
V_CALL_FUNC(_V0print__fun__case_lambda20, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k153, env)}),
      _var1
    );
 }
}
static void _V0print__fun__case_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda19) (bruijn ##k.360 0 0) (bruijn e 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda19, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 36 29) (bruijn ##k.359 0 0) (close _V0print__fun__case_lambda18))
V_CALL(VGetArg(upenv, 36-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda18, env)})
    );
 }
}
static void _V0print__fun__case_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 35 36) (close _V0print__fun__case_k143) (close _V0print__fun__case_lambda17) (bruijn cases 11 0))
V_CALL(VGetArg(upenv, 35-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k143, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda17, env)}),
      VGetArg(upenv, 11-1, 0)
    );
 }
}
static void _V0print__fun__case_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 34 32) (close _V0print__fun__case_k142) (##string ##string.1600) (bruijn name 14 0))
V_CALL(VGetArg(upenv, 34-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k142, env)}),
      VEncodePointer(&_V10string_D1600.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 0)
    );
 }
}
static void _V0print__fun__case_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 33 32) (close _V0print__fun__case_k141) (##string ##string.1601))
V_CALL(VGetArg(upenv, 33-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k141, env)}),
      VEncodePointer(&_V10string_D1601.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 32 32) (close _V0print__fun__case_k140) (##string ##string.1602))
V_CALL(VGetArg(upenv, 32-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k140, env)}),
      VEncodePointer(&_V10string_D1602.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 31 32) (close _V0print__fun__case_k139) (##string ##string.1603) (bruijn name 11 0))
V_CALL(VGetArg(upenv, 31-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k139, env)}),
      VEncodePointer(&_V10string_D1603.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 0)
    );
 }
}
static void _V0print__fun__case_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k167, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.203 9 1) (bruijn ##k.407 7 0) (bruijn ##x.417 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0print__fun__case_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.210 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.210 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.207 4 0))) ((bruijn print-fun-single 32 10) (close _V0print__fun__case_k167) (##inline ##sys.car (bruijn ##expr.205 6 1)) #f (##inline ##sys.car (bruijn ##expr.208 3 0)) #t (##inline ##sys.car (bruijn ##expr.210 0 0)) #t) ((bruijn ##k.407 6 0) #f)) ((bruijn ##k.407 6 0) #f)) ((bruijn ##k.407 6 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->up->up->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 32-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k167, env)}),
      VInlineCar(
VGetArg(upenv, 6-1, 1)
    )
,
      VEncodeBool(false),
      VInlineCar(
upenv->up->up->vars[0]
    )
,
      VEncodeBool(true),
      VInlineCar(
_var0
    )
,
      VEncodeBool(true)
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.413 0 0) ((close _V0print__fun__case_k166) (##inline ##sys.cdr (bruijn ##expr.209 1 0))) ((bruijn ##k.407 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__fun__case_k166, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.209 0 0)) ((bruijn equal? 38 28) (close _V0print__fun__case_k165) (quote +) (##inline ##sys.car (bruijn ##expr.209 0 0))) ((bruijn ##k.407 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 38-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k165, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.208 0 0)) ((close _V0print__fun__case_k164) (##inline ##sys.cdr (bruijn ##expr.208 0 0))) ((bruijn ##k.407 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k164, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.207 0 0)) ((close _V0print__fun__case_k163) (##inline ##sys.car (bruijn ##expr.207 0 0))) ((bruijn ##k.407 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k163, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.206 0 0)) ((close _V0print__fun__case_k162) (##inline ##sys.cdr (bruijn ##expr.206 0 0))) ((bruijn ##k.407 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k162, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.205 0 1)) ((close _V0print__fun__case_k161) (##inline ##sys.cdr (bruijn ##expr.205 0 1))) ((bruijn ##k.407 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k161, env, runtime,
      VInlineCdr(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k173, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.203 8 1) (bruijn ##k.396 5 0) (bruijn ##x.404 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0print__fun__case_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.215 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.215 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.213 2 0))) ((bruijn print-fun-single 31 10) (close _V0print__fun__case_k173) (##inline ##sys.car (bruijn ##expr.211 4 1)) #f (##inline ##sys.car (bruijn ##expr.214 1 0)) #f (##inline ##sys.car (bruijn ##expr.215 0 0)) #t) ((bruijn ##k.396 4 0) #f)) ((bruijn ##k.396 4 0) #f)) ((bruijn ##k.396 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 31-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k173, env)}),
      VInlineCar(
upenv->up->up->up->vars[1]
    )
,
      VEncodeBool(false),
      VInlineCar(
upenv->vars[0]
    )
,
      VEncodeBool(false),
      VInlineCar(
_var0
    )
,
      VEncodeBool(true)
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.214 0 0)) ((close _V0print__fun__case_k172) (##inline ##sys.cdr (bruijn ##expr.214 0 0))) ((bruijn ##k.396 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k172, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.213 0 0)) ((close _V0print__fun__case_k171) (##inline ##sys.car (bruijn ##expr.213 0 0))) ((bruijn ##k.396 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k171, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.212 0 0)) ((close _V0print__fun__case_k170) (##inline ##sys.cdr (bruijn ##expr.212 0 0))) ((bruijn ##k.396 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k170, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.211 0 1)) ((close _V0print__fun__case_k169) (##inline ##sys.cdr (bruijn ##expr.211 0 1))) ((bruijn ##k.396 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k169, env, runtime,
      VInlineCdr(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k174, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 35 37) (bruijn ##k.393 2 0) (##string ##string.1599))
V_CALL(VGetArg(upenv, 35-1, 37), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1599.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__case_lambda26) (close _V0print__fun__case_k174) (bruijn ##input.204 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda26, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k174, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda25) (close _V0print__fun__case_k168) (bruijn ##input.204 0 1))
V_CALL_FUNC(_V0print__fun__case_lambda25, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k168, env)}),
      _var1
    );
 }
}
static void _V0print__fun__case_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda24) (bruijn ##k.392 0 0) (bruijn e 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda24, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 31 29) (bruijn ##k.391 0 0) (close _V0print__fun__case_lambda23))
V_CALL(VGetArg(upenv, 31-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda23, env)})
    );
 }
}
static void _V0print__fun__case_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 30 36) (close _V0print__fun__case_k138) (close _V0print__fun__case_lambda22) (bruijn cases 6 0))
V_CALL(VGetArg(upenv, 30-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k138, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda22, env)}),
      VGetArg(upenv, 6-1, 0)
    );
 }
}
static void _V0print__fun__case_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 29 32) (close _V0print__fun__case_k137) (##string ##string.1604))
V_CALL(VGetArg(upenv, 29-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k137, env)}),
      VEncodePointer(&_V10string_D1604.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 28 32) (close _V0print__fun__case_k136) (##string ##string.1605))
V_CALL(VGetArg(upenv, 28-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k136, env)}),
      VEncodePointer(&_V10string_D1605.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k181, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.190 9 1) (bruijn ##k.437 7 0) (bruijn ##x.447 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0print__fun__case_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.197 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.197 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.194 4 0))) ((bruijn printf 37 32) (close _V0print__fun__case_k181) (##string ##string.1606) (##inline ##sys.car (bruijn ##expr.195 3 0))) ((bruijn ##k.437 6 0) #f)) ((bruijn ##k.437 6 0) #f)) ((bruijn ##k.437 6 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->up->up->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 37-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k181, env)}),
      VEncodePointer(&_V10string_D1606.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->up->up->vars[0]
    )

    );
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.443 0 0) ((close _V0print__fun__case_k180) (##inline ##sys.cdr (bruijn ##expr.196 1 0))) ((bruijn ##k.437 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__fun__case_k180, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.196 0 0)) ((bruijn equal? 35 28) (close _V0print__fun__case_k179) (quote +) (##inline ##sys.car (bruijn ##expr.196 0 0))) ((bruijn ##k.437 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 35-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k179, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.195 0 0)) ((close _V0print__fun__case_k178) (##inline ##sys.cdr (bruijn ##expr.195 0 0))) ((bruijn ##k.437 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k178, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.194 0 0)) ((close _V0print__fun__case_k177) (##inline ##sys.car (bruijn ##expr.194 0 0))) ((bruijn ##k.437 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k177, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.193 0 0)) ((close _V0print__fun__case_k176) (##inline ##sys.cdr (bruijn ##expr.193 0 0))) ((bruijn ##k.437 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k176, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.192 0 1)) ((close _V0print__fun__case_k175) (##inline ##sys.cdr (bruijn ##expr.192 0 1))) ((bruijn ##k.437 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k175, env, runtime,
      VInlineCdr(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k187, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.190 8 1) (bruijn ##k.426 5 0) (bruijn ##x.434 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0print__fun__case_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.202 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.202 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.200 2 0))) ((bruijn printf 36 32) (close _V0print__fun__case_k187) (##string ##string.1607) (##inline ##sys.car (bruijn ##expr.201 1 0))) ((bruijn ##k.426 4 0) #f)) ((bruijn ##k.426 4 0) #f)) ((bruijn ##k.426 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 36-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k187, env)}),
      VEncodePointer(&_V10string_D1607.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->vars[0]
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.201 0 0)) ((close _V0print__fun__case_k186) (##inline ##sys.cdr (bruijn ##expr.201 0 0))) ((bruijn ##k.426 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k186, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.200 0 0)) ((close _V0print__fun__case_k185) (##inline ##sys.car (bruijn ##expr.200 0 0))) ((bruijn ##k.426 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k185, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.199 0 0)) ((close _V0print__fun__case_k184) (##inline ##sys.cdr (bruijn ##expr.199 0 0))) ((bruijn ##k.426 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k184, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.198 0 1)) ((close _V0print__fun__case_k183) (##inline ##sys.cdr (bruijn ##expr.198 0 1))) ((bruijn ##k.426 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k183, env, runtime,
      VInlineCdr(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k188, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 32 37) (bruijn ##k.423 2 0) (##string ##string.1599))
V_CALL(VGetArg(upenv, 32-1, 37), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1599.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__case_lambda31) (close _V0print__fun__case_k188) (bruijn ##input.191 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda31, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k188, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda30) (close _V0print__fun__case_k182) (bruijn ##input.191 0 1))
V_CALL_FUNC(_V0print__fun__case_lambda30, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k182, env)}),
      _var1
    );
 }
}
static void _V0print__fun__case_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda29) (bruijn ##k.422 0 0) (bruijn e 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda29, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 28 29) (bruijn ##k.421 0 0) (close _V0print__fun__case_lambda28))
V_CALL(VGetArg(upenv, 28-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda28, env)})
    );
 }
}
static void _V0print__fun__case_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 27 36) (close _V0print__fun__case_k135) (close _V0print__fun__case_lambda27) (bruijn cases 3 0))
V_CALL(VGetArg(upenv, 27-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k135, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda27, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0print__fun__case_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 26 32) (close _V0print__fun__case_k134) (##string ##string.1608) (bruijn name 6 0))
V_CALL(VGetArg(upenv, 26-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k134, env)}),
      VEncodePointer(&_V10string_D1608.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0)
    );
 }
}
static void _V0print__fun__case_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 25 32) (close _V0print__fun__case_k133) (##string ##string.1609) (bruijn fun 6 1))
V_CALL(VGetArg(upenv, 25-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k133, env)}),
      VEncodePointer(&_V10string_D1609.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0print__fun__case_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 24 32) (close _V0print__fun__case_k132) (##string ##string.1610) (bruijn name 4 0))
V_CALL(VGetArg(upenv, 24-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k132, env)}),
      VEncodePointer(&_V10string_D1610.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0print__fun__case_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k189, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.451 1 0) (##inline ##sys.cons (bruijn ##x.452 0 0) (##inline ##sys.cons (quote #f) (##inline ##sys.cons (bruijn e 1 2) (quote ())))))
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
_var0,
      VInlineCons(
VEncodeBool(false),
      VInlineCons(
upenv->vars[2],
      VNULL
    )

    )

    )

    );
 }
}
static void _V0print__fun__case_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0print__fun__case_lambda32, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda32, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn sprintf 24 27) (close _V0print__fun__case_k189) (##string ##string.1611) (bruijn i 0 1) (bruijn name 4 0))
V_CALL(VGetArg(upenv, 24-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k189, env)}),
      VEncodePointer(&_V10string_D1611.sym, VPOINTER_OTHER),
      _var1,
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0print__fun__case_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 23 26) (close _V0print__fun__case_k131) (close _V0print__fun__case_lambda32) (bruijn ##x.455 0 0) (bruijn cases 2 0))
V_CALL(VGetArg(upenv, 23-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k131, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda32, env)}),
      _var0,
      upenv->up->vars[0]
    );
 }
}
static void _V0print__fun__case_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iota 22 34) (close _V0print__fun__case_k130) (bruijn ##x.456 0 0))
V_CALL(VGetArg(upenv, 22-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k130, env)}),
      _var0
    );
 }
}
static void _V0print__fun__case_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 21 33) (close _V0print__fun__case_k129) (bruijn cases 0 0))
V_CALL(VGetArg(upenv, 21-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k129, env)}),
      _var0
    );
 }
}
static void _V0print__fun__case_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 20 25) (close _V0print__fun__case_k128) (bruijn fun 1 1))
V_CALL(VGetArg(upenv, 20-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k128, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 19 31) (close _V0print__fun__case_k127) (bruijn fun 0 1))
V_CALL(VGetArg(upenv, 19-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k127, env)}),
      _var1
    );
 }
}
static void _V0printout2_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k74) (bruijn print-fun-case 10 11) (close _V0print__fun__case_lambda16))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k74, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda16, env)})
    );
 }
}
static void _V0print__fun__single_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k192, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn needs-used? 4 6) ((bruijn printf 22 32) (bruijn ##k.508 0 0) (##string ##string.1612)) ((bruijn ##k.508 0 0) #f))
if(VDecodeBool(
upenv->up->up->up->vars[6])) {
V_CALL(VGetArg(upenv, 22-1, 32), runtime,
      _var0,
      VEncodePointer(&_V10string_D1612.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__single_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k196, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 7 4) ((bruijn printf 25 32) (bruijn ##k.506 0 0) (##string ##string.1613)) ((bruijn ##k.506 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 7-1, 4))) {
V_CALL(VGetArg(upenv, 25-1, 32), runtime,
      _var0,
      VEncodePointer(&_V10string_D1613.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__single_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k200, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 28 32) (bruijn ##k.504 1 0) (##string ##string.1614))
V_CALL(VGetArg(upenv, 28-1, 32), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1614.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn debug? 20 1) ((bruijn printf 27 32) (close _V0print__fun__single_k200) (##string ##string.1615) (bruijn name 9 1)) ((bruijn ##k.504 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 20-1, 1))) {
V_CALL(VGetArg(upenv, 27-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k200, env)}),
      VEncodePointer(&_V10string_D1615.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__single_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k206, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 32 32) (bruijn ##k.495 4 0) (##string ##string.1616))
V_CALL(VGetArg(upenv, 32-1, 32), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1616.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 31 32) (close _V0print__fun__single_k206) (##string ##string.1617))
V_CALL(VGetArg(upenv, 31-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k206, env)}),
      VEncodePointer(&_V10string_D1617.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 30 32) (close _V0print__fun__single_k205) (##string ##string.1618) (bruijn num 12 3))
V_CALL(VGetArg(upenv, 30-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k205, env)}),
      VEncodePointer(&_V10string_D1618.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 3)
    );
 }
}
static void _V0print__fun__single_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 29 32) (close _V0print__fun__single_k204) (##string ##string.1619) (bruijn name 11 1))
V_CALL(VGetArg(upenv, 29-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k204, env)}),
      VEncodePointer(&_V10string_D1619.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0print__fun__single_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k210, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 32 32) (bruijn ##k.495 4 0) (##string ##string.1616))
V_CALL(VGetArg(upenv, 32-1, 32), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1616.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 31 32) (close _V0print__fun__single_k210) (##string ##string.1617))
V_CALL(VGetArg(upenv, 31-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k210, env)}),
      VEncodePointer(&_V10string_D1617.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 30 32) (close _V0print__fun__single_k209) (##string ##string.1621) (bruijn num 12 3))
V_CALL(VGetArg(upenv, 30-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k209, env)}),
      VEncodePointer(&_V10string_D1621.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 3)
    );
 }
}
static void _V0print__fun__single_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 29 32) (close _V0print__fun__single_k208) (##string ##string.1619) (bruijn name 11 1))
V_CALL(VGetArg(upenv, 29-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k208, env)}),
      VEncodePointer(&_V10string_D1619.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0print__fun__single_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn check-args? 10 2) (if (bruijn variadic? 10 4) ((bruijn printf 28 32) (close _V0print__fun__single_k203) (##string ##string.1620) (bruijn num 10 3)) ((bruijn printf 28 32) (close _V0print__fun__single_k207) (##string ##string.1622) (bruijn num 10 3))) ((bruijn ##k.495 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 10-1, 2))) {
if(VDecodeBool(
VGetArg(upenv, 10-1, 4))) {
V_CALL(VGetArg(upenv, 28-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k203, env)}),
      VEncodePointer(&_V10string_D1620.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 3)
    );
} else {
V_CALL(VGetArg(upenv, 28-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k207, env)}),
      VEncodePointer(&_V10string_D1622.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 3)
    );
}
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__single_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k215, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 32 32) (bruijn ##k.491 3 0) (##string ##string.1623) (bruijn num 14 3) (bruijn ##x.493 0 0))
V_CALL(VGetArg(upenv, 32-1, 32), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1623.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 3),
      _var0
    );
 }
}
static void _V0print__fun__single_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list-ref 31 23) (close _V0print__fun__single_k215) (bruijn args 10 0) (bruijn ##x.494 0 0))
V_CALL(VGetArg(upenv, 31-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k215, env)}),
      VGetArg(upenv, 10-1, 0),
      _var0
    );
 }
}
static void _V0print__fun__single_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 30 24) (close _V0print__fun__single_k214) (bruijn num 12 3) 1)
V_CALL(VGetArg(upenv, 30-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k214, env)}),
      VGetArg(upenv, 12-1, 3),
      VEncodeInt(1l)
    );
 }
}
static void _V0print__fun__single_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn variadic? 11 4) ((bruijn printf 29 32) (close _V0print__fun__single_k213) (##string ##string.1624)) ((bruijn ##k.491 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 11-1, 4))) {
V_CALL(VGetArg(upenv, 29-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k213, env)}),
      VEncodePointer(&_V10string_D1624.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__single_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k219, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 14 4) ((bruijn printf 32 32) (bruijn ##k.489 0 0) (##string ##string.1625)) ((bruijn printf 32 32) (bruijn ##k.489 0 0) (##string ##string.1626)))
if(VDecodeBool(
VGetArg(upenv, 14-1, 4))) {
V_CALL(VGetArg(upenv, 32-1, 32), runtime,
      _var0,
      VEncodePointer(&_V10string_D1625.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 32-1, 32), runtime,
      _var0,
      VEncodePointer(&_V10string_D1626.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0print__fun__single_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k223, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 17 4) ((bruijn + 35 22) (bruijn ##k.488 0 0) (bruijn num 17 3) 1) ((bruijn ##k.488 0 0) (bruijn num 17 3)))
if(VDecodeBool(
VGetArg(upenv, 17-1, 4))) {
V_CALL(VGetArg(upenv, 35-1, 22), runtime,
      _var0,
      VGetArg(upenv, 17-1, 3),
      VEncodeInt(1l)
    );
} else {
V_CALL(_var0, runtime,
      VGetArg(upenv, 17-1, 3)
    );
}
 }
}
static void _V0print__fun__single_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k227, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 20 4) ((bruijn + 38 22) (bruijn ##k.486 0 0) (bruijn num 20 3) 1) ((bruijn ##k.486 0 0) (bruijn num 20 3)))
if(VDecodeBool(
VGetArg(upenv, 20-1, 4))) {
V_CALL(VGetArg(upenv, 38-1, 22), runtime,
      _var0,
      VGetArg(upenv, 20-1, 3),
      VEncodeInt(1l)
    );
} else {
V_CALL(_var0, runtime,
      VGetArg(upenv, 20-1, 3)
    );
}
 }
}
static void _V0print__fun__single_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k231, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 23 4) ((bruijn printf 41 32) (bruijn ##k.479 7 0) (##string ##string.1627) (bruijn num 23 3)) ((bruijn ##k.479 7 0) #f))
if(VDecodeBool(
VGetArg(upenv, 23-1, 4))) {
V_CALL(VGetArg(upenv, 41-1, 32), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1627.sym, VPOINTER_OTHER),
      VGetArg(upenv, 23-1, 3)
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__single_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0print__fun__single_lambda35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda35, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn printf 41 32) (bruijn ##k.484 0 0) (##string ##string.1628) (bruijn i 0 1) (bruijn arg 0 2))
V_CALL(VGetArg(upenv, 41-1, 32), runtime,
      _var0,
      VEncodePointer(&_V10string_D1628.sym, VPOINTER_OTHER),
      _var1,
      _var2
    );
 }
}
static void _V0print__fun__single_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 40 36) (close _V0print__fun__single_k231) (close _V0print__fun__single_lambda35) (bruijn ##x.485 0 0) (bruijn args 19 0))
V_CALL(VGetArg(upenv, 40-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k231, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_lambda35, env)}),
      _var0,
      VGetArg(upenv, 19-1, 0)
    );
 }
}
static void _V0print__fun__single_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iota 39 34) (close _V0print__fun__single_k230) (bruijn num 21 3))
V_CALL(VGetArg(upenv, 39-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k230, env)}),
      VGetArg(upenv, 21-1, 3)
    );
 }
}
static void _V0print__fun__single_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 38 32) (close _V0print__fun__single_k229) (##string ##string.1629) (bruijn nargs 0 0) (bruijn nargs 0 0))
V_CALL(VGetArg(upenv, 38-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k229, env)}),
      VEncodePointer(&_V10string_D1629.sym, VPOINTER_OTHER),
      _var0,
      _var0
    );
 }
}
static void _V0print__fun__single_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k227) (close _V0print__fun__single_k228))
V_CALL_FUNC(_V0print__fun__single_k227, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k228, env)})
    );
 }
}
static void _V0print__fun__single_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 36 32) (close _V0print__fun__single_k226) (##string ##string.1630))
V_CALL(VGetArg(upenv, 36-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k226, env)}),
      VEncodePointer(&_V10string_D1630.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 35 32) (close _V0print__fun__single_k225) (##string ##string.1631) (bruijn ##x.487 0 0))
V_CALL(VGetArg(upenv, 35-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k225, env)}),
      VEncodePointer(&_V10string_D1631.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0print__fun__single_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.478 1 0) ((close _V0print__fun__single_k223) (close _V0print__fun__single_k224)) ((bruijn ##k.479 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL_FUNC(_V0print__fun__single_k223, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k224, env)})
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__single_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k234, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 18 4) ((bruijn append 36 21) (bruijn ##k.476 0 0) (bruijn args 15 0) (##inline ##sys.qcons (quote (##string ##string.1632)) (quote ()))) ((bruijn ##k.476 0 0) (bruijn args 15 0)))
if(VDecodeBool(
VGetArg(upenv, 18-1, 4))) {
V_CALL(VGetArg(upenv, 36-1, 21), runtime,
      _var0,
      VGetArg(upenv, 15-1, 0),
      VInlineCons(
VEncodePointer(&_V10string_D1632.sym, VPOINTER_OTHER),
      VNULL
    )

    );
} else {
V_CALL(_var0, runtime,
      VGetArg(upenv, 15-1, 0)
    );
}
 }
}
static void _V0print__fun__single_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k237, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 38 32) (bruijn ##k.458 19 0) (##string ##string.1604))
V_CALL(VGetArg(upenv, 38-1, 32), runtime,
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V10string_D1604.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 37 32) (close _V0print__fun__single_k237) (##string ##string.1616))
V_CALL(VGetArg(upenv, 37-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k237, env)}),
      VEncodePointer(&_V10string_D1616.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 28 9) (close _V0print__fun__single_k236) (bruijn body 18 5) (bruijn ##x.475 0 0))
V_CALL(VGetArg(upenv, 28-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k236, env)}),
      VGetArg(upenv, 18-1, 5),
      _var0
    );
 }
}
static void _V0print__fun__single_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k234) (close _V0print__fun__single_k235))
V_CALL_FUNC(_V0print__fun__single_k234, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k235, env)})
    );
 }
}
static void _V0print__fun__single_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 34 32) (close _V0print__fun__single_k233) (##string ##string.1633) (bruijn body 16 5))
V_CALL(VGetArg(upenv, 34-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k233, env)}),
      VEncodePointer(&_V10string_D1633.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 5)
    );
 }
}
static void _V0print__fun__single_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k222) (close _V0print__fun__single_k232))
V_CALL_FUNC(_V0print__fun__single_k222, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k232, env)})
    );
 }
}
static void _V0print__fun__single_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn closes? 24 8) (close _V0print__fun__single_k221) (bruijn body 14 5))
V_CALL(VGetArg(upenv, 24-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k221, env)}),
      VGetArg(upenv, 14-1, 5)
    );
 }
}
static void _V0print__fun__single_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k219) (close _V0print__fun__single_k220))
V_CALL_FUNC(_V0print__fun__single_k219, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k220, env)})
    );
 }
}
static void _V0print__fun__single_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__single_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 31 32) (bruijn ##k.490 0 0) (##string ##string.1634) (bruijn arg 0 1))
V_CALL(VGetArg(upenv, 31-1, 32), runtime,
      _var0,
      VEncodePointer(&_V10string_D1634.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0print__fun__single_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 30 36) (close _V0print__fun__single_k218) (close _V0print__fun__single_lambda36) (bruijn args 9 0))
V_CALL(VGetArg(upenv, 30-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k218, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_lambda36, env)}),
      VGetArg(upenv, 9-1, 0)
    );
 }
}
static void _V0print__fun__single_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 29 32) (close _V0print__fun__single_k217) (##string ##string.1635) (bruijn name 11 1) (bruijn num 11 3))
V_CALL(VGetArg(upenv, 29-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k217, env)}),
      VEncodePointer(&_V10string_D1635.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 1),
      VGetArg(upenv, 11-1, 3)
    );
 }
}
static void _V0print__fun__single_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k212) (close _V0print__fun__single_k216))
V_CALL_FUNC(_V0print__fun__single_k212, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k216, env)})
    );
 }
}
static void _V0print__fun__single_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k202) (close _V0print__fun__single_k211))
V_CALL_FUNC(_V0print__fun__single_k202, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k211, env)})
    );
 }
}
static void _V0print__fun__single_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k199) (close _V0print__fun__single_k201))
V_CALL_FUNC(_V0print__fun__single_k199, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k201, env)})
    );
 }
}
static void _V0print__fun__single_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 25 32) (close _V0print__fun__single_k198) (##string ##string.1626))
V_CALL(VGetArg(upenv, 25-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k198, env)}),
      VEncodePointer(&_V10string_D1626.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k196) (close _V0print__fun__single_k197))
V_CALL_FUNC(_V0print__fun__single_k196, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k197, env)})
    );
 }
}
static void _V0print__fun__single_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__single_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 24 32) (bruijn ##k.507 0 0) (##string ##string.1636) (bruijn arg 0 1))
V_CALL(VGetArg(upenv, 24-1, 32), runtime,
      _var0,
      VEncodePointer(&_V10string_D1636.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0print__fun__single_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 23 36) (close _V0print__fun__single_k195) (close _V0print__fun__single_lambda37) (bruijn args 2 0))
V_CALL(VGetArg(upenv, 23-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k195, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_lambda37, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0print__fun__single_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 22 32) (close _V0print__fun__single_k194) (##string ##string.1637) (bruijn name 4 1))
V_CALL(VGetArg(upenv, 22-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k194, env)}),
      VEncodePointer(&_V10string_D1637.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0print__fun__single_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k192) (close _V0print__fun__single_k193))
V_CALL_FUNC(_V0print__fun__single_k192, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k193, env)})
    );
 }
}
static void _V0print__fun__single_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gen-args 1 1) (close _V0print__fun__single_k191) (bruijn num 2 3))
V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k191, env)}),
      upenv->up->vars[3]
    );
 }
}
static void _V0gen__args_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__args_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__args_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 22 27) (bruijn ##k.510 0 0) (##string ##string.1638) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 22-1, 27), runtime,
      _var0,
      VEncodePointer(&_V10string_D1638.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0gen__args_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__args_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__args_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 21 26) (bruijn ##k.509 1 0) (close _V0gen__args_lambda39) (bruijn ##x.511 0 0))
V_CALL(VGetArg(upenv, 21-1, 26), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__args_lambda39, env)}),
      _var0
    );
 }
}
static void _V0gen__args_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__args_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__args_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn iota 20 34) (close _V0gen__args_k238) (bruijn num 0 1))
V_CALL(VGetArg(upenv, 20-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__args_k238, env)}),
      _var1
    );
 }
}
static void _V0print__fun__single_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0print__fun__single_k190) (bruijn gen-args 0 1) (close _V0gen__args_lambda38))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k190, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__args_lambda38, env)})
    );
 }
}
static void _V0print__fun__single_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 if(argc != 7) {
  VError("Not enough arguments to _V0print__fun__single_lambda33, got ~D~N"
  "-- expected 7~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda33, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
  struct { VEnv env; VWORD argv[7]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 7; env->var_len = 7; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  // ((close _V0print__fun__single_lambda34) (bruijn ##k.457 0 0) #f)
V_CALL_FUNC(_V0print__fun__single_lambda34, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0printout2_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k73) (bruijn print-fun-single 9 10) (close _V0print__fun__single_lambda33))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k73, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_lambda33, env)})
    );
 }
}
static void _V0print__expr_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k246, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.152 5 1) (bruijn ##k.661 3 0) (bruijn ##x.667 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.155 0 0)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.155 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.155 0 0))) ((bruijn display 28 19) (close _V0print__expr_k246) (##string ##string.1639)) ((bruijn ##k.661 2 0) #f)) ((bruijn ##k.661 2 0) #f)) ((bruijn ##k.661 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCar(
_var0
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 28-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k246, env)}),
      VEncodePointer(&_V10string_D1639.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.663 0 0) ((close _V0print__expr_k245) (##inline ##sys.cdr (bruijn ##expr.154 1 1))) ((bruijn ##k.661 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k245, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.154 0 1)) ((bruijn equal? 26 28) (close _V0print__expr_k244) (quote quote) (##inline ##sys.car (bruijn ##expr.154 0 1))) ((bruijn ##k.661 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 26-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k244, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k253, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.152 9 1) (bruijn ##k.647 6 0) (bruijn ##x.656 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0print__expr_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.159 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.159 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.157 3 0))) ((bruijn print-literal-string 24 5) (close _V0print__expr_k253) (##inline ##sys.car (bruijn ##expr.159 0 0))) ((bruijn ##k.647 5 0) #f)) ((bruijn ##k.647 5 0) #f)) ((bruijn ##k.647 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->up->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k253, env)}),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.652 0 0) ((close _V0print__expr_k252) (##inline ##sys.cdr (bruijn ##expr.158 1 0))) ((bruijn ##k.647 4 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k252, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.158 0 0)) ((bruijn equal? 30 28) (close _V0print__expr_k251) (quote ##string) (##inline ##sys.car (bruijn ##expr.158 0 0))) ((bruijn ##k.647 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 30-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k251, env)}),
      VEncodePointer(&_V10string.sym, VPOINTER_OTHER),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.157 0 0)) ((close _V0print__expr_k250) (##inline ##sys.car (bruijn ##expr.157 0 0))) ((bruijn ##k.647 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k250, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.649 0 0) ((close _V0print__expr_k249) (##inline ##sys.cdr (bruijn ##expr.156 1 1))) ((bruijn ##k.647 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k249, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.156 0 1)) ((bruijn equal? 27 28) (close _V0print__expr_k248) (quote quote) (##inline ##sys.car (bruijn ##expr.156 0 1))) ((bruijn ##k.647 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 27-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k248, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k257, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.152 7 1) (bruijn ##k.639 3 0) (bruijn ##x.644 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.161 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.161 0 0))) ((bruijn print-literal 22 6) (close _V0print__expr_k257) (##inline ##sys.car (bruijn ##expr.161 0 0))) ((bruijn ##k.639 2 0) #f)) ((bruijn ##k.639 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 22-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k257, env)}),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.641 0 0) ((close _V0print__expr_k256) (##inline ##sys.cdr (bruijn ##expr.160 1 1))) ((bruijn ##k.639 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k256, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.160 0 1)) ((bruijn equal? 28 28) (close _V0print__expr_k255) (quote quote) (##inline ##sys.car (bruijn ##expr.160 0 1))) ((bruijn ##k.639 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 28-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k255, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k261, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.152 8 1) (bruijn ##k.631 3 0) (bruijn ##x.636 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.163 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.163 0 0))) ((bruijn printf 31 32) (close _V0print__expr_k261) (##string ##string.1640) (##inline ##sys.car (bruijn ##expr.163 0 0))) ((bruijn ##k.631 2 0) #f)) ((bruijn ##k.631 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 31-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k261, env)}),
      VEncodePointer(&_V10string_D1640.sym, VPOINTER_OTHER),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.633 0 0) ((close _V0print__expr_k260) (##inline ##sys.cdr (bruijn ##expr.162 1 1))) ((bruijn ##k.631 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k260, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.162 0 1)) ((bruijn equal? 29 28) (close _V0print__expr_k259) (quote close) (##inline ##sys.car (bruijn ##expr.162 0 1))) ((bruijn ##k.631 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 29-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k259, env)}),
      VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k271, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 39 19) (bruijn ##k.623 1 0) (bruijn ##x.624 0 0))
V_CALL(VGetArg(upenv, 39-1, 19), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k275, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.628 0 0) ((bruijn printf 42 32) (bruijn ##k.623 4 0) (##string ##string.1644) (bruijn right 6 0)) ((bruijn printf 42 32) (bruijn ##k.623 4 0) (##string ##string.1645) (bruijn up 8 0) (bruijn right 6 0)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 42-1, 32), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1644.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0)
    );
} else {
V_CALL(VGetArg(upenv, 42-1, 32), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1645.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 6-1, 0)
    );
}
 }
}
static void _V0print__expr_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.627 0 0) ((bruijn printf 41 32) (bruijn ##k.623 3 0) (##string ##string.1643) (bruijn right 5 0)) ((bruijn = 41 18) (close _V0print__expr_k275) (bruijn up 7 0) 4))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 41-1, 32), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1643.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0)
    );
} else {
V_CALL(VGetArg(upenv, 41-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k275, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeInt(4l)
    );
}
 }
}
static void _V0print__expr_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.626 0 0) ((bruijn printf 40 32) (bruijn ##k.623 2 0) (##string ##string.1642) (bruijn right 4 0)) ((bruijn = 40 18) (close _V0print__expr_k274) (bruijn up 6 0) 3))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 40-1, 32), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1642.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 40-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k274, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(3l)
    );
}
 }
}
static void _V0print__expr_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.625 0 0) ((bruijn printf 39 32) (bruijn ##k.623 1 0) (##string ##string.1641) (bruijn right 3 0)) ((bruijn = 39 18) (close _V0print__expr_k273) (bruijn up 5 0) 2))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 39-1, 32), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1641.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 39-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k273, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(2l)
    );
}
 }
}
static void _V0print__expr_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.622 1 0) ((bruijn list-ref 38 23) (close _V0print__expr_k271) (bruijn args 21 2) (bruijn right 2 0)) ((bruijn = 38 18) (close _V0print__expr_k272) (bruijn up 4 0) 1))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 38-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k271, env)}),
      VGetArg(upenv, 21-1, 2),
      upenv->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 38-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k272, env)}),
      upenv->up->up->up->vars[0],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0print__expr_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k276, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.152 14 1) (bruijn ##k.614 8 0) (bruijn ##x.621 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0print__expr_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_k270) (close _V0print__expr_k276))
V_CALL_FUNC(_V0print__expr_k270, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k276, env)})
    );
 }
}
static void _V0print__expr_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.167 1 0))) ((bruijn = 36 18) (close _V0print__expr_k269) (bruijn up 2 0) 0) ((bruijn ##k.614 6 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 36-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k269, env)}),
      upenv->up->vars[0],
      VEncodeInt(0l)
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.167 0 0)) ((close _V0print__expr_k268) (##inline ##sys.car (bruijn ##expr.167 0 0))) ((bruijn ##k.614 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k268, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_k267) (##inline ##sys.cdr (bruijn ##expr.166 1 0)))
V_CALL_FUNC(_V0print__expr_k267, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0print__expr_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.166 0 0)) ((close _V0print__expr_k266) (##inline ##sys.car (bruijn ##expr.166 0 0))) ((bruijn ##k.614 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k266, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.165 0 0)) ((close _V0print__expr_k265) (##inline ##sys.cdr (bruijn ##expr.165 0 0))) ((bruijn ##k.614 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k265, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.616 0 0) ((close _V0print__expr_k264) (##inline ##sys.cdr (bruijn ##expr.164 1 1))) ((bruijn ##k.614 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k264, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.164 0 1)) ((bruijn equal? 30 28) (close _V0print__expr_k263) (quote bruijn) (##inline ##sys.car (bruijn ##expr.164 0 1))) ((bruijn ##k.614 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 30-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k263, env)}),
      VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k288, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.152 18 1) (bruijn ##k.598 11 0) (bruijn ##x.605 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0
    );
 }
}
static void _V0print__expr_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn displayln 41 35) (close _V0print__expr_k288) (##string ##string.1583))
V_CALL(VGetArg(upenv, 41-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k288, env)}),
      VEncodePointer(&_V10string_D1583.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__expr_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 32 9) (close _V0print__expr_k287) (##inline ##sys.car (bruijn ##expr.171 5 0)) (bruijn args 23 2))
V_CALL(VGetArg(upenv, 32-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k287, env)}),
      VInlineCar(
VGetArg(upenv, 5-1, 0)
    )
,
      VGetArg(upenv, 23-1, 2)
    );
 }
}
static void _V0print__expr_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn displayln 39 35) (close _V0print__expr_k286) (##string ##string.1646))
V_CALL(VGetArg(upenv, 39-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k286, env)}),
      VEncodePointer(&_V10string_D1646.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__expr_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 30 9) (close _V0print__expr_k285) (##inline ##sys.car (bruijn ##expr.170 4 0)) (bruijn args 21 2))
V_CALL(VGetArg(upenv, 30-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k285, env)}),
      VInlineCar(
upenv->up->up->up->vars[0]
    )
,
      VGetArg(upenv, 21-1, 2)
    );
 }
}
static void _V0print__expr_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn displayln 37 35) (close _V0print__expr_k284) (##string ##string.1647))
V_CALL(VGetArg(upenv, 37-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k284, env)}),
      VEncodePointer(&_V10string_D1647.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__expr_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 28 9) (close _V0print__expr_k283) (##inline ##sys.car (bruijn ##expr.169 3 0)) (bruijn args 19 2))
V_CALL(VGetArg(upenv, 28-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k283, env)}),
      VInlineCar(
upenv->up->up->vars[0]
    )
,
      VGetArg(upenv, 19-1, 2)
    );
 }
}
static void _V0print__expr_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.171 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.171 0 0))) ((bruijn displayln 35 35) (close _V0print__expr_k282) (##string ##string.1648)) ((bruijn ##k.598 4 0) #f)) ((bruijn ##k.598 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 35-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k282, env)}),
      VEncodePointer(&_V10string_D1648.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.170 0 0)) ((close _V0print__expr_k281) (##inline ##sys.cdr (bruijn ##expr.170 0 0))) ((bruijn ##k.598 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k281, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.169 0 0)) ((close _V0print__expr_k280) (##inline ##sys.cdr (bruijn ##expr.169 0 0))) ((bruijn ##k.598 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k280, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.600 0 0) ((close _V0print__expr_k279) (##inline ##sys.cdr (bruijn ##expr.168 1 1))) ((bruijn ##k.598 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k279, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.168 0 1)) ((bruijn equal? 31 28) (close _V0print__expr_k278) (quote if) (##inline ##sys.car (bruijn ##expr.168 0 1))) ((bruijn ##k.598 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 31-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k278, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k294, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.152 13 1) (bruijn ##k.588 5 0) (bruijn ##x.595 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0print__expr_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.175 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.175 0 0))) ((bruijn print-set 18 4) (close _V0print__expr_k294) (##inline ##sys.car (bruijn ##expr.173 2 0)) (##inline ##sys.car (bruijn ##expr.174 1 0)) (##inline ##sys.car (bruijn ##expr.175 0 0)) #f) ((bruijn ##k.588 4 0) #f)) ((bruijn ##k.588 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 18-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k294, env)}),
      VInlineCar(
upenv->up->vars[0]
    )
,
      VInlineCar(
upenv->vars[0]
    )
,
      VInlineCar(
_var0
    )
,
      VEncodeBool(false)
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.174 0 0)) ((close _V0print__expr_k293) (##inline ##sys.cdr (bruijn ##expr.174 0 0))) ((bruijn ##k.588 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k293, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.173 0 0)) ((close _V0print__expr_k292) (##inline ##sys.cdr (bruijn ##expr.173 0 0))) ((bruijn ##k.588 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k292, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.590 0 0) ((close _V0print__expr_k291) (##inline ##sys.cdr (bruijn ##expr.172 1 1))) ((bruijn ##k.588 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k291, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.172 0 1)) ((bruijn equal? 32 28) (close _V0print__expr_k290) (quote set!) (##inline ##sys.car (bruijn ##expr.172 0 1))) ((bruijn ##k.588 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 32-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k290, env)}),
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k300, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.152 14 1) (bruijn ##k.578 5 0) (bruijn ##x.585 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0print__expr_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.179 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.179 0 0))) ((bruijn print-define-global 19 3) (close _V0print__expr_k300) (##inline ##sys.car (bruijn ##expr.177 2 0)) (##inline ##sys.car (bruijn ##expr.178 1 0)) (##inline ##sys.car (bruijn ##expr.179 0 0)) #f) ((bruijn ##k.578 4 0) #f)) ((bruijn ##k.578 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 19-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k300, env)}),
      VInlineCar(
upenv->up->vars[0]
    )
,
      VInlineCar(
upenv->vars[0]
    )
,
      VInlineCar(
_var0
    )
,
      VEncodeBool(false)
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.178 0 0)) ((close _V0print__expr_k299) (##inline ##sys.cdr (bruijn ##expr.178 0 0))) ((bruijn ##k.578 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k299, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.177 0 0)) ((close _V0print__expr_k298) (##inline ##sys.cdr (bruijn ##expr.177 0 0))) ((bruijn ##k.578 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k298, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.580 0 0) ((close _V0print__expr_k297) (##inline ##sys.cdr (bruijn ##expr.176 1 1))) ((bruijn ##k.578 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k297, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.176 0 1)) ((bruijn equal? 33 28) (close _V0print__expr_k296) (quote define) (##inline ##sys.car (bruijn ##expr.176 0 1))) ((bruijn ##k.578 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 33-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k296, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k304, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.152 13 1) (bruijn ##k.572 3 0) (bruijn ##x.576 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.181 0 0)) ((bruijn print-inline 18 5) (close _V0print__expr_k304) (##inline ##sys.car (bruijn ##expr.181 0 0)) (##inline ##sys.cdr (bruijn ##expr.181 0 0))) ((bruijn ##k.572 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k304, env)}),
      VInlineCar(
_var0
    )
,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.574 0 0) ((close _V0print__expr_k303) (##inline ##sys.cdr (bruijn ##expr.180 1 1))) ((bruijn ##k.572 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k303, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.180 0 1)) ((bruijn equal? 34 28) (close _V0print__expr_k302) (quote ##inline) (##inline ##sys.car (bruijn ##expr.180 0 1))) ((bruijn ##k.572 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 34-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k302, env)}),
      VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k310, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.568 1 0) ((bruijn error 40 37) (bruijn ##k.569 0 0) (##string ##string.1649) (bruijn literal-table 33 3)) ((bruijn ##k.569 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 40-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1649.sym, VPOINTER_OTHER),
      VGetArg(upenv, 33-1, 3)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k312, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.152 17 1) (bruijn ##k.561 6 0) (bruijn ##x.566 0 0))
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0print__expr_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-literal-string 32 5) (close _V0print__expr_k312) (bruijn x 2 0))
V_CALL(VGetArg(upenv, 32-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k312, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0print__expr_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_k310) (close _V0print__expr_k311))
V_CALL_FUNC(_V0print__expr_k310, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k311, env)})
    );
 }
}
static void _V0print__expr_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.183 1 0))) ((bruijn null? 38 38) (close _V0print__expr_k309) (bruijn x 0 0)) ((bruijn ##k.561 3 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 38-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k309, env)}),
      _var0
    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.183 0 0)) ((close _V0print__expr_k308) (##inline ##sys.car (bruijn ##expr.183 0 0))) ((bruijn ##k.561 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k308, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.563 0 0) ((close _V0print__expr_k307) (##inline ##sys.cdr (bruijn ##expr.182 1 1))) ((bruijn ##k.561 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k307, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.182 0 1)) ((bruijn equal? 35 28) (close _V0print__expr_k306) (quote ##string) (##inline ##sys.car (bruijn ##expr.182 0 1))) ((bruijn ##k.561 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 35-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k306, env)}),
      VEncodePointer(&_V10string.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k315, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.542 1 0) (##inline ##sys.cdr (bruijn ##expr.184 5 1)) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
VGetArg(upenv, 5-1, 1)
    )
,
      VNULL
    );
 }
}
static void _V0loop_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k317, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.187 4 1) (bruijn ##k.553 1 0) (bruijn ##expr.189 2 1) (bruijn ##x.554 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.189 1 1))) ((bruijn reverse 42 40) (close _V0loop_k317) (bruijn ##xs.186 1 2)) ((bruijn ##k.553 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 42-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k317, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k320, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.187 7 1) (bruijn ##k.547 2 0) (bruijn ##expr.189 5 1) (bruijn ##x.549 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 45 40) (close _V0loop_k320) (bruijn ##xs.186 4 2))
V_CALL(VGetArg(upenv, 45-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k320, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.188 0 1) (close _V0loop_k319) (##inline ##sys.cdr (bruijn ##expr.189 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.189 3 1)) (bruijn ##xs.186 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k319, env)}),
      VInlineCdr(
upenv->up->up->vars[1]
    )
,
      VInlineCons(
VInlineCar(
upenv->up->up->vars[1]
    )
,
      upenv->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 43 29) (bruijn ##k.546 0 0) (close _V0loop_lambda60))
V_CALL(VGetArg(upenv, 43-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda60, env)})
    );
 }
}
static void _V0loop_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 42 17) (bruijn ##k.544 1 0) (close _V0loop_lambda59) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 42-1, 17), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda59, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda58, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda58, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k316) (close _V0loop_k318))
V_CALL_FUNC(_V0loop_k316, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k318, env)})
    );
 }
}
static void _V0print__expr_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0print__expr_k315) (bruijn loop 0 1) (close _V0loop_lambda58))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k315, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda58, env)})
    );
 }
}
static void _V0print__expr_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__expr_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda56, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__expr_lambda57) (bruijn ##k.541 0 0) #f)
V_CALL_FUNC(_V0print__expr_lambda57, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0print__expr_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 38 29) (bruijn ##k.540 0 0) (close _V0print__expr_lambda56))
V_CALL(VGetArg(upenv, 38-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda56, env)})
    );
 }
}
static void _V0print__expr_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k322, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.559 1 0) ((bruijn print-builtin-apply 22 1) (bruijn ##k.560 0 0) (bruijn f 3 0) (bruijn xs 2 2) #f) ((bruijn print-closure-apply 22 2) (bruijn ##k.560 0 0) (bruijn f 3 0) (bruijn xs 2 2) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      _var0,
      upenv->up->up->vars[0],
      upenv->up->vars[2],
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 2), runtime,
      _var0,
      upenv->up->up->vars[0],
      upenv->up->vars[2],
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k323, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.152 16 1) (bruijn ##k.556 2 0) (bruijn ##x.558 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_k322) (close _V0print__expr_k323))
V_CALL_FUNC(_V0print__expr_k322, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k323, env)})
    );
 }
}
static void _V0print__expr_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0print__expr_lambda61, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda61, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn lookup-intrinsic2 38 16) (close _V0print__expr_k321) (bruijn f 1 0)) ((bruijn ##k.556 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 38-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k321, env)}),
      upenv->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k314, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 37 17) (bruijn ##k.538 1 0) (close _V0print__expr_lambda55) (close _V0print__expr_lambda61))
V_CALL(VGetArg(upenv, 37-1, 17), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda55, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda61, env)})
    );
 }
}
static void _V0print__expr_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 1)) ((close _V0print__expr_k314) (##inline ##sys.car (bruijn ##expr.184 0 1))) ((bruijn ##k.538 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__expr_k314, env, runtime,
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k326, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.536 1 0) ((bruijn print-global 31 1) (bruijn ##k.537 0 0) (bruijn x 2 1)) ((bruijn print-literal 31 6) (bruijn ##k.537 0 0) (bruijn x 2 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 31-1, 1), runtime,
      _var0,
      upenv->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 31-1, 6), runtime,
      _var0,
      upenv->up->vars[1]
    );
}
 }
}
static void _V0print__expr_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k327, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.152 15 1) (bruijn ##k.534 2 0) (bruijn ##x.535 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_k326) (close _V0print__expr_k327))
V_CALL_FUNC(_V0print__expr_k326, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k327, env)})
    );
 }
}
static void _V0print__expr_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda62, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 37 15) (close _V0print__expr_k325) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 37-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k325, env)}),
      _var1
    );
 }
}
static void _V0print__expr_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k329, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.152 14 1) (bruijn ##k.520 13 0) (bruijn ##x.533 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      _var0
    );
 }
}
static void _V0print__expr_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 37 37) (close _V0print__expr_k329) (##string ##string.1650) (bruijn expr 20 1))
V_CALL(VGetArg(upenv, 37-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k329, env)}),
      VEncodePointer(&_V10string_D1650.sym, VPOINTER_OTHER),
      VGetArg(upenv, 20-1, 1)
    );
 }
}
static void _V0print__expr_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda62) (close _V0print__expr_k328) (bruijn ##input.153 11 1))
V_CALL_FUNC(_V0print__expr_lambda62, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k328, env)}),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0print__expr_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda54) (close _V0print__expr_k324) (bruijn ##input.153 10 1))
V_CALL_FUNC(_V0print__expr_lambda54, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k324, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0print__expr_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda53) (close _V0print__expr_k313) (bruijn ##input.153 9 1))
V_CALL_FUNC(_V0print__expr_lambda53, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k313, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0print__expr_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda52) (close _V0print__expr_k305) (bruijn ##input.153 8 1))
V_CALL_FUNC(_V0print__expr_lambda52, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k305, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0print__expr_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda51) (close _V0print__expr_k301) (bruijn ##input.153 7 1))
V_CALL_FUNC(_V0print__expr_lambda51, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k301, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0print__expr_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda50) (close _V0print__expr_k295) (bruijn ##input.153 6 1))
V_CALL_FUNC(_V0print__expr_lambda50, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k295, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0print__expr_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda49) (close _V0print__expr_k289) (bruijn ##input.153 5 1))
V_CALL_FUNC(_V0print__expr_lambda49, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k289, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0print__expr_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda48) (close _V0print__expr_k277) (bruijn ##input.153 4 1))
V_CALL_FUNC(_V0print__expr_lambda48, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k277, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0print__expr_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda47) (close _V0print__expr_k262) (bruijn ##input.153 3 1))
V_CALL_FUNC(_V0print__expr_lambda47, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k262, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0print__expr_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda46) (close _V0print__expr_k258) (bruijn ##input.153 2 1))
V_CALL_FUNC(_V0print__expr_lambda46, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k258, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0print__expr_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda45) (close _V0print__expr_k254) (bruijn ##input.153 1 1))
V_CALL_FUNC(_V0print__expr_lambda45, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k254, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__expr_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__expr_lambda44) (close _V0print__expr_k247) (bruijn ##input.153 0 1))
V_CALL_FUNC(_V0print__expr_lambda44, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k247, env)}),
      _var1
    );
 }
}
static void _V0print__expr_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__expr_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__expr_lambda43) (bruijn ##k.519 0 0) (bruijn expr 7 1))
V_CALL_FUNC(_V0print__expr_lambda43, env, runtime,
      _var0,
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0print__expr_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 23 29) (bruijn ##k.513 5 0) (close _V0print__expr_lambda42))
V_CALL(VGetArg(upenv, 23-1, 29), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda42, env)})
    );
 }
}
static void _V0print__inline_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k332, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.683 1 0) ((bruijn error 26 37) (bruijn ##k.684 0 0) (##string ##string.1651) (bruijn f 3 1)) ((bruijn ##k.684 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 26-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1651.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__inline_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k341, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-expr 27 9) (bruijn ##k.678 1 0) (bruijn x 1 1) (bruijn args 18 2))
V_CALL(VGetArg(upenv, 27-1, 9), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 18-1, 2)
    );
 }
}
static void _V0print__inline_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__inline_lambda64, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_lambda64, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn printf 34 32) (close _V0print__inline_k341) (##string ##string.1652))
V_CALL(VGetArg(upenv, 34-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k341, env)}),
      VEncodePointer(&_V10string_D1652.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__inline_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 33 36) (bruijn ##k.676 3 0) (close _V0print__inline_lambda64) (bruijn ##x.680 0 0))
V_CALL(VGetArg(upenv, 33-1, 36), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_lambda64, env)}),
      _var0
    );
 }
}
static void _V0print__inline_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 32 30) (close _V0print__inline_k340) (bruijn xs 9 2))
V_CALL(VGetArg(upenv, 32-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k340, env)}),
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0print__inline_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 23 9) (close _V0print__inline_k339) (bruijn ##x.681 0 0) (bruijn args 14 2))
V_CALL(VGetArg(upenv, 23-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k339, env)}),
      _var0,
      VGetArg(upenv, 14-1, 2)
    );
 }
}
static void _V0print__inline_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.675 1 0) ((bruijn car 30 31) (close _V0print__inline_k338) (bruijn xs 7 2)) ((bruijn ##k.676 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 30-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k338, env)}),
      VGetArg(upenv, 7-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__inline_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k342, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 30 32) (bruijn ##k.671 7 0) (##string ##string.1653))
V_CALL(VGetArg(upenv, 30-1, 32), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1653.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__inline_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__inline_k337) (close _V0print__inline_k342))
V_CALL_FUNC(_V0print__inline_k337, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k342, env)})
    );
 }
}
static void _V0print__inline_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 28 39) (close _V0print__inline_k336) (bruijn ##x.682 0 0))
V_CALL(VGetArg(upenv, 28-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k336, env)}),
      _var0
    );
 }
}
static void _V0print__inline_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 27 38) (close _V0print__inline_k335) (bruijn xs 4 2))
V_CALL(VGetArg(upenv, 27-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k335, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0print__inline_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 26 32) (close _V0print__inline_k334) (##string ##string.1654) (bruijn inline 2 0))
V_CALL(VGetArg(upenv, 26-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k334, env)}),
      VEncodePointer(&_V10string_D1654.sym, VPOINTER_OTHER),
      upenv->up->vars[0]
    );
 }
}
static void _V0print__inline_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__inline_k332) (close _V0print__inline_k333))
V_CALL_FUNC(_V0print__inline_k332, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k333, env)})
    );
 }
}
static void _V0print__inline_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 24 39) (close _V0print__inline_k331) (bruijn inline 0 0))
V_CALL(VGetArg(upenv, 24-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k331, env)}),
      _var0
    );
 }
}
static void _V0print__inline_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0print__inline_lambda63, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_lambda63, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn lookup-inline 23 20) (close _V0print__inline_k330) (bruijn f 0 1))
V_CALL(VGetArg(upenv, 23-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k330, env)}),
      _var1
    );
 }
}
static void _V0print__expr_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0print__expr_k243) (bruijn print-inline 4 5) (close _V0print__inline_lambda63))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k243, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_lambda63, env)})
    );
 }
}
static void _V0print__set_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k351, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.146 11 1) (bruijn ##k.700 9 0) (bruijn ##x.707 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0
    );
 }
}
static void _V0print__set_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 33 32) (close _V0print__set_k351) (##string ##string.1655))
V_CALL(VGetArg(upenv, 33-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k351, env)}),
      VEncodePointer(&_V10string_D1655.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__set_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 24 9) (close _V0print__set_k350) (bruijn x 10 3) (bruijn args 15 2))
V_CALL(VGetArg(upenv, 24-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k350, env)}),
      VGetArg(upenv, 10-1, 3),
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0print__set_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 31 32) (close _V0print__set_k349) (##string ##string.1656) (##inline ##sys.car (bruijn ##expr.150 3 0)) (##inline ##sys.car (bruijn ##expr.151 2 0)))
V_CALL(VGetArg(upenv, 31-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k349, env)}),
      VEncodePointer(&_V10string_D1656.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->up->up->vars[0]
    )
,
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0print__set_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 22 9) (close _V0print__set_k348) (bruijn k 8 1) (bruijn args 13 2))
V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k348, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 13-1, 2)
    );
 }
}
static void _V0print__set_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.151 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.151 0 0))) ((bruijn printf 29 32) (close _V0print__set_k347) (##string ##string.1657)) ((bruijn ##k.700 4 0) #f)) ((bruijn ##k.700 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 29-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k347, env)}),
      VEncodePointer(&_V10string_D1657.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__set_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.150 0 0)) ((close _V0print__set_k346) (##inline ##sys.cdr (bruijn ##expr.150 0 0))) ((bruijn ##k.700 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__set_k346, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__set_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.149 0 0)) ((close _V0print__set_k345) (##inline ##sys.cdr (bruijn ##expr.149 0 0))) ((bruijn ##k.700 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__set_k345, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__set_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.702 0 0) ((close _V0print__set_k344) (##inline ##sys.cdr (bruijn ##expr.148 1 1))) ((bruijn ##k.700 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__set_k344, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__set_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda68, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.148 0 1)) ((bruijn equal? 25 28) (close _V0print__set_k343) (quote bruijn) (##inline ##sys.car (bruijn ##expr.148 0 1))) ((bruijn ##k.700 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k343, env)}),
      VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__set_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k360, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 34 32) (bruijn ##k.693 6 0) (##string ##string.1655))
V_CALL(VGetArg(upenv, 34-1, 32), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1655.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__set_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 25 9) (close _V0print__set_k360) (bruijn x 11 3) (bruijn args 16 2))
V_CALL(VGetArg(upenv, 25-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k360, env)}),
      VGetArg(upenv, 11-1, 3),
      VGetArg(upenv, 16-1, 2)
    );
 }
}
static void _V0print__set_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 32 32) (close _V0print__set_k359) (##string ##string.1652))
V_CALL(VGetArg(upenv, 32-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k359, env)}),
      VEncodePointer(&_V10string_D1652.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__set_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-literal 23 6) (close _V0print__set_k358) (bruijn sym 5 1))
V_CALL(VGetArg(upenv, 23-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k358, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0print__set_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 30 32) (close _V0print__set_k357) (##string ##string.1652))
V_CALL(VGetArg(upenv, 30-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k357, env)}),
      VEncodePointer(&_V10string_D1652.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__set_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 21 9) (close _V0print__set_k356) (bruijn k 7 1) (bruijn args 12 2))
V_CALL(VGetArg(upenv, 21-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k356, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 12-1, 2)
    );
 }
}
static void _V0print__set_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.692 1 0) ((bruijn printf 28 32) (close _V0print__set_k355) (##string ##string.1658)) ((bruijn error 28 37) (bruijn ##k.693 0 0) (##string ##string.1659)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 28-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k355, env)}),
      VEncodePointer(&_V10string_D1658.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 28-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1659.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0print__set_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k361, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.146 5 1) (bruijn ##k.690 2 0) (bruijn ##x.691 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0print__set_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__set_k354) (close _V0print__set_k361))
V_CALL_FUNC(_V0print__set_k354, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k361, env)})
    );
 }
}
static void _V0print__set_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda69, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 26 15) (close _V0print__set_k353) (bruijn sym 0 1))
V_CALL(VGetArg(upenv, 26-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k353, env)}),
      _var1
    );
 }
}
static void _V0print__set_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k362, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 26 37) (bruijn ##k.687 2 0) (##string ##string.1599))
V_CALL(VGetArg(upenv, 26-1, 37), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1599.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__set_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__set_lambda69) (close _V0print__set_k362) (bruijn ##input.147 1 1))
V_CALL_FUNC(_V0print__set_lambda69, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k362, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__set_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__set_lambda68) (close _V0print__set_k352) (bruijn ##input.147 0 1))
V_CALL_FUNC(_V0print__set_lambda68, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k352, env)}),
      _var1
    );
 }
}
static void _V0print__set_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__set_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda66, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__set_lambda67) (bruijn ##k.686 0 0) (bruijn y 1 2))
V_CALL_FUNC(_V0print__set_lambda67, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0print__set_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VError("Not enough arguments to _V0print__set_lambda65, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda65, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn call/cc 22 29) (bruijn ##k.685 0 0) (close _V0print__set_lambda66))
V_CALL(VGetArg(upenv, 22-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_lambda66, env)})
    );
 }
}
static void _V0print__expr_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0print__expr_k242) (bruijn print-set 3 4) (close _V0print__set_lambda65))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k242, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_lambda65, env)})
    );
 }
}
static void _V0print__define__global_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k368, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 27 32) (bruijn ##k.714 6 0) (##string ##string.1655))
V_CALL(VGetArg(upenv, 27-1, 32), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1655.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__define__global_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 18 9) (close _V0print__define__global_k368) (bruijn x 5 3) (bruijn args 9 2))
V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k368, env)}),
      VGetArg(upenv, 5-1, 3),
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0print__define__global_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 25 32) (close _V0print__define__global_k367) (##string ##string.1652))
V_CALL(VGetArg(upenv, 25-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k367, env)}),
      VEncodePointer(&_V10string_D1652.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__define__global_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-literal 16 6) (close _V0print__define__global_k366) (bruijn y 3 2))
V_CALL(VGetArg(upenv, 16-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k366, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0print__define__global_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 23 32) (close _V0print__define__global_k365) (##string ##string.1652))
V_CALL(VGetArg(upenv, 23-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k365, env)}),
      VEncodePointer(&_V10string_D1652.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__define__global_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 14 9) (close _V0print__define__global_k364) (bruijn k 1 1) (bruijn args 5 2))
V_CALL(VGetArg(upenv, 14-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k364, env)}),
      upenv->vars[1],
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0print__define__global_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VError("Not enough arguments to _V0print__define__global_lambda70, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_lambda70, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn printf 21 32) (close _V0print__define__global_k363) (##string ##string.1660))
V_CALL(VGetArg(upenv, 21-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k363, env)}),
      VEncodePointer(&_V10string_D1660.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__expr_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0print__expr_k241) (bruijn print-define-global 2 3) (close _V0print__define__global_lambda70))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k241, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_lambda70, env)})
    );
 }
}
static void _V0print__closure__apply_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k371, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 23 32) (bruijn ##k.721 3 0) (##string ##string.1655))
V_CALL(VGetArg(upenv, 23-1, 32), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1655.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__closure__apply_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k372, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-expr 16 9) (bruijn ##k.725 1 0) (bruijn x 1 1) (bruijn args 7 2))
V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 7-1, 2)
    );
 }
}
static void _V0print__closure__apply_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__closure__apply_lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda72, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn printf 23 32) (close _V0print__closure__apply_k372) (##string ##string.1652))
V_CALL(VGetArg(upenv, 23-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k372, env)}),
      VEncodePointer(&_V10string_D1652.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__closure__apply_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 22 36) (close _V0print__closure__apply_k371) (close _V0print__closure__apply_lambda72) (bruijn xs 2 2))
V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k371, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_lambda72, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0print__closure__apply_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 21 32) (close _V0print__closure__apply_k370) (##string ##string.1661))
V_CALL(VGetArg(upenv, 21-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k370, env)}),
      VEncodePointer(&_V10string_D1661.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__closure__apply_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k375, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.142 5 1) (bruijn ##k.732 3 0) (bruijn ##x.737 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__closure__apply_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.145 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.145 0 0))) ((bruijn printf 25 32) (close _V0print__closure__apply_k375) (##string ##string.1662) (##inline ##sys.car (bruijn ##expr.145 0 0))) ((bruijn ##k.732 2 0) #f)) ((bruijn ##k.732 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 25-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k375, env)}),
      VEncodePointer(&_V10string_D1662.sym, VPOINTER_OTHER),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__closure__apply_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.734 0 0) ((close _V0print__closure__apply_k374) (##inline ##sys.cdr (bruijn ##expr.144 1 1))) ((bruijn ##k.732 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__closure__apply_k374, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__closure__apply_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda75, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.144 0 1)) ((bruijn equal? 23 28) (close _V0print__closure__apply_k373) (quote close) (##inline ##sys.car (bruijn ##expr.144 0 1))) ((bruijn ##k.732 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k373, env)}),
      VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__closure__apply_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k378, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.142 4 1) (bruijn ##k.728 3 0) (bruijn ##x.730 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__closure__apply_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 16 9) (close _V0print__closure__apply_k378) (bruijn f 4 1) (bruijn args 7 2))
V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k378, env)}),
      upenv->up->up->up->vars[1],
      VGetArg(upenv, 7-1, 2)
    );
 }
}
static void _V0print__closure__apply_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn display 23 19) (close _V0print__closure__apply_k377) (##string ##string.1663))
V_CALL(VGetArg(upenv, 23-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k377, env)}),
      VEncodePointer(&_V10string_D1663.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__closure__apply_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda74, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__closure__apply_lambda75) (close _V0print__closure__apply_k376) (bruijn ##input.143 0 1))
V_CALL_FUNC(_V0print__closure__apply_lambda75, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k376, env)}),
      _var1
    );
 }
}
static void _V0print__closure__apply_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__closure__apply_lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda73, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__closure__apply_lambda74) (bruijn ##k.727 0 0) (bruijn f 1 1))
V_CALL_FUNC(_V0print__closure__apply_lambda74, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0print__closure__apply_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0print__closure__apply_lambda71, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda71, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn call/cc 20 29) (close _V0print__closure__apply_k369) (close _V0print__closure__apply_lambda73))
V_CALL(VGetArg(upenv, 20-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k369, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_lambda73, env)})
    );
 }
}
static void _V0print__expr_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0print__expr_k240) (bruijn print-closure-apply 1 2) (close _V0print__closure__apply_lambda71))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k240, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_lambda71, env)})
    );
 }
}
static void _V0print__builtin__apply_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__builtin__apply_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_k381, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 22 32) (bruijn ##k.740 3 0) (##string ##string.1655))
V_CALL(VGetArg(upenv, 22-1, 32), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1655.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__builtin__apply_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__builtin__apply_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_k382, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-expr 15 9) (bruijn ##k.743 1 0) (bruijn x 1 1) (bruijn args 6 2))
V_CALL(VGetArg(upenv, 15-1, 9), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0print__builtin__apply_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__builtin__apply_lambda77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_lambda77, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn printf 22 32) (close _V0print__builtin__apply_k382) (##string ##string.1652))
V_CALL(VGetArg(upenv, 22-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_k382, env)}),
      VEncodePointer(&_V10string_D1652.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__builtin__apply_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__builtin__apply_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 21 36) (close _V0print__builtin__apply_k381) (close _V0print__builtin__apply_lambda77) (bruijn xs 2 2))
V_CALL(VGetArg(upenv, 21-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_k381, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_lambda77, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0print__builtin__apply_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__builtin__apply_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 20 32) (close _V0print__builtin__apply_k380) (##string ##string.1664) (bruijn ##x.745 0 0))
V_CALL(VGetArg(upenv, 20-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_k380, env)}),
      VEncodePointer(&_V10string_D1664.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0print__builtin__apply_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0print__builtin__apply_lambda76, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_lambda76, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn lookup-intrinsic2 19 16) (close _V0print__builtin__apply_k379) (bruijn f 0 1))
V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_k379, env)}),
      _var1
    );
 }
}
static void _V0print__expr_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda41, runtime, upenv, 6, argc, _var0, _var1, _var2, _var3, _var4, _var5) {
  struct { VEnv env; VWORD argv[6]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 6; env->var_len = 6; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  // (set! (close _V0print__expr_k239) (bruijn print-builtin-apply 0 1) (close _V0print__builtin__apply_lambda76))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k239, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_lambda76, env)})
    );
 }
}
static void _V0print__expr_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0print__expr_lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda40, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0print__expr_lambda41) (bruijn ##k.512 0 0) #f #f #f #f #f)
V_CALL_FUNC(_V0print__expr_lambda41, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void _V0printout2_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k72) (bruijn print-expr 8 9) (close _V0print__expr_lambda40))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k72, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda40, env)})
    );
 }
}
static void _V0closes_Q_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k384, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.122 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.122 0 0))) ((bruijn ##kk.119 4 1) (bruijn ##k.820 2 0) #t) ((bruijn ##k.820 2 0) #f)) ((bruijn ##k.820 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->vars[0],
      VEncodeBool(true)
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.822 0 0) ((close _V0closes_Q_k384) (##inline ##sys.cdr (bruijn ##expr.121 1 1))) ((bruijn ##k.820 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k384, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 1)) ((bruijn equal? 19 28) (close _V0closes_Q_k383) (quote close) (##inline ##sys.car (bruijn ##expr.121 0 1))) ((bruijn ##k.820 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k383, env)}),
      VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k386, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.818 0 0) ((bruijn ##kk.119 4 1) (bruijn ##k.816 1 0) #f) ((bruijn ##k.816 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda82, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.123 0 1)) ((bruijn equal? 20 28) (close _V0closes_Q_k386) (quote quote) (##inline ##sys.car (bruijn ##expr.123 0 1))) ((bruijn ##k.816 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k386, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k388, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.814 0 0) ((bruijn ##kk.119 5 1) (bruijn ##k.812 1 0) #f) ((bruijn ##k.812 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.124 0 1)) ((bruijn equal? 21 28) (close _V0closes_Q_k388) (quote bruijn) (##inline ##sys.car (bruijn ##expr.124 0 1))) ((bruijn ##k.812 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k388, env)}),
      VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k390, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.810 0 0) ((bruijn ##kk.119 6 1) (bruijn ##k.808 1 0) #f) ((bruijn ##k.808 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.125 0 1)) ((bruijn equal? 22 28) (close _V0closes_Q_k390) (quote ##string) (##inline ##sys.car (bruijn ##expr.125 0 1))) ((bruijn ##k.808 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k390, env)}),
      VEncodePointer(&_V10string.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k398, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.805 0 0) ((bruijn ##k.804 1 0) (bruijn ##p.805 0 0)) ((bruijn closes? 22 8) (bruijn ##k.804 1 0) (##inline ##sys.car (bruijn ##expr.129 3 0))))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      upenv->vars[0],
      VInlineCar(
upenv->up->up->vars[0]
    )

    );
}
 }
}
static void _V0closes_Q_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.803 1 0) ((bruijn ##k.804 0 0) (bruijn ##p.803 1 0)) ((bruijn closes? 21 8) (close _V0closes_Q_k398) (##inline ##sys.car (bruijn ##expr.128 3 0))))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 21-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k398, env)}),
      VInlineCar(
upenv->up->up->vars[0]
    )

    );
}
 }
}
static void _V0closes_Q_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k399, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.119 12 1) (bruijn ##k.795 6 0) (bruijn ##x.802 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0closes_Q_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_k397) (close _V0closes_Q_k399))
V_CALL_FUNC(_V0closes_Q_k397, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k399, env)})
    );
 }
}
static void _V0closes_Q_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.129 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.129 0 0))) ((bruijn closes? 19 8) (close _V0closes_Q_k396) (##inline ##sys.car (bruijn ##expr.127 2 0))) ((bruijn ##k.795 4 0) #f)) ((bruijn ##k.795 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k396, env)}),
      VInlineCar(
upenv->up->vars[0]
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.128 0 0)) ((close _V0closes_Q_k395) (##inline ##sys.cdr (bruijn ##expr.128 0 0))) ((bruijn ##k.795 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0closes_Q_k395, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.127 0 0)) ((close _V0closes_Q_k394) (##inline ##sys.cdr (bruijn ##expr.127 0 0))) ((bruijn ##k.795 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0closes_Q_k394, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.797 0 0) ((close _V0closes_Q_k393) (##inline ##sys.cdr (bruijn ##expr.126 1 1))) ((bruijn ##k.795 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k393, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.126 0 1)) ((bruijn equal? 23 28) (close _V0closes_Q_k392) (quote if) (##inline ##sys.car (bruijn ##expr.126 0 1))) ((bruijn ##k.795 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k392, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k404, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.133 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.133 0 0))) ((bruijn ##kk.119 11 1) (bruijn ##k.786 4 0) #t) ((bruijn ##k.786 4 0) #f)) ((bruijn ##k.786 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VEncodeBool(true)
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.132 0 0)) ((close _V0closes_Q_k404) (##inline ##sys.cdr (bruijn ##expr.132 0 0))) ((bruijn ##k.786 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0closes_Q_k404, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.131 0 0)) ((close _V0closes_Q_k403) (##inline ##sys.cdr (bruijn ##expr.131 0 0))) ((bruijn ##k.786 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0closes_Q_k403, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.788 0 0) ((close _V0closes_Q_k402) (##inline ##sys.cdr (bruijn ##expr.130 1 1))) ((bruijn ##k.786 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k402, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.130 0 1)) ((bruijn equal? 24 28) (close _V0closes_Q_k401) (quote set!) (##inline ##sys.car (bruijn ##expr.130 0 1))) ((bruijn ##k.786 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k401, env)}),
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k409, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.137 0 0))) ((bruijn ##kk.119 12 1) (bruijn ##k.777 4 0) #t) ((bruijn ##k.777 4 0) #f)) ((bruijn ##k.777 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VEncodeBool(true)
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.136 0 0)) ((close _V0closes_Q_k409) (##inline ##sys.cdr (bruijn ##expr.136 0 0))) ((bruijn ##k.777 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0closes_Q_k409, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.135 0 0)) ((close _V0closes_Q_k408) (##inline ##sys.cdr (bruijn ##expr.135 0 0))) ((bruijn ##k.777 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0closes_Q_k408, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.779 0 0) ((close _V0closes_Q_k407) (##inline ##sys.cdr (bruijn ##expr.134 1 1))) ((bruijn ##k.777 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k407, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda87, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.134 0 1)) ((bruijn equal? 25 28) (close _V0closes_Q_k406) (quote define) (##inline ##sys.car (bruijn ##expr.134 0 1))) ((bruijn ##k.777 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k406, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k413, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.119 12 1) (bruijn ##k.771 3 0) (bruijn ##x.775 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0closes_Q_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.139 0 0)) ((bruijn closes? 20 8) (close _V0closes_Q_k413) (##inline ##sys.cdr (bruijn ##expr.139 0 0))) ((bruijn ##k.771 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k413, env)}),
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.773 0 0) ((close _V0closes_Q_k412) (##inline ##sys.cdr (bruijn ##expr.138 1 1))) ((bruijn ##k.771 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k412, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda88, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.138 0 1)) ((bruijn equal? 26 28) (close _V0closes_Q_k411) (quote ##inline) (##inline ##sys.car (bruijn ##expr.138 0 1))) ((bruijn ##k.771 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 26-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k411, env)}),
      VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k415, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.119 11 1) (bruijn ##k.766 1 0) (bruijn ##x.769 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0closes_Q_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda89, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.140 0 1)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.140 0 1))) ((bruijn closes? 19 8) (close _V0closes_Q_k415) (##inline ##sys.car (bruijn ##expr.140 0 1))) ((bruijn ##k.766 0 0) #f)) ((bruijn ##k.766 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var1
    )

    )
)) {
V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k415, env)}),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k418, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.764 1 0) ((bruijn ##k.765 0 0) (bruijn ##p.764 1 0)) ((bruijn closes? 22 8) (bruijn ##k.765 0 0) (##inline ##sys.cdr (bruijn ##expr.141 2 1))))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      _var0,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
}
 }
}
static void _V0closes_Q_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k419, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.119 13 1) (bruijn ##k.761 2 0) (bruijn ##x.763 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0closes_Q_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_k418) (close _V0closes_Q_k419))
V_CALL_FUNC(_V0closes_Q_k418, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k419, env)})
    );
 }
}
static void _V0closes_Q_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda90, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.141 0 1)) ((bruijn closes? 20 8) (close _V0closes_Q_k417) (##inline ##sys.car (bruijn ##expr.141 0 1))) ((bruijn ##k.761 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k417, env)}),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0closes_Q_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda91, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.119 12 1) (bruijn ##k.760 0 0) #f)
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0closes_Q_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k421, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 29 37) (bruijn ##k.748 11 0) (##string ##string.1599))
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D1599.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0closes_Q_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda91) (close _V0closes_Q_k421) (bruijn ##input.120 10 1))
V_CALL_FUNC(_V0closes_Q_lambda91, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k421, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0closes_Q_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda90) (close _V0closes_Q_k420) (bruijn ##input.120 9 1))
V_CALL_FUNC(_V0closes_Q_lambda90, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k420, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0closes_Q_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda89) (close _V0closes_Q_k416) (bruijn ##input.120 8 1))
V_CALL_FUNC(_V0closes_Q_lambda89, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k416, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0closes_Q_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda88) (close _V0closes_Q_k414) (bruijn ##input.120 7 1))
V_CALL_FUNC(_V0closes_Q_lambda88, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k414, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0closes_Q_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda87) (close _V0closes_Q_k410) (bruijn ##input.120 6 1))
V_CALL_FUNC(_V0closes_Q_lambda87, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k410, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0closes_Q_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda86) (close _V0closes_Q_k405) (bruijn ##input.120 5 1))
V_CALL_FUNC(_V0closes_Q_lambda86, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k405, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0closes_Q_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda85) (close _V0closes_Q_k400) (bruijn ##input.120 4 1))
V_CALL_FUNC(_V0closes_Q_lambda85, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k400, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0closes_Q_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda84) (close _V0closes_Q_k391) (bruijn ##input.120 3 1))
V_CALL_FUNC(_V0closes_Q_lambda84, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k391, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0closes_Q_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda83) (close _V0closes_Q_k389) (bruijn ##input.120 2 1))
V_CALL_FUNC(_V0closes_Q_lambda83, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k389, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0closes_Q_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda82) (close _V0closes_Q_k387) (bruijn ##input.120 1 1))
V_CALL_FUNC(_V0closes_Q_lambda82, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k387, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0closes_Q_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda80, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0closes_Q_lambda81) (close _V0closes_Q_k385) (bruijn ##input.120 0 1))
V_CALL_FUNC(_V0closes_Q_lambda81, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k385, env)}),
      _var1
    );
 }
}
static void _V0closes_Q_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0closes_Q_lambda79, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0closes_Q_lambda80) (bruijn ##k.747 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0closes_Q_lambda80, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0closes_Q_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0closes_Q_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 16 29) (bruijn ##k.746 0 0) (close _V0closes_Q_lambda79))
V_CALL(VGetArg(upenv, 16-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_lambda79, env)})
    );
 }
}
static void _V0printout2_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k71) (bruijn closes? 7 8) (close _V0closes_Q_lambda78))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k71, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_lambda78, env)})
    );
 }
}
static void _V0print__literal__declaration_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k432, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 26 32) (bruijn ##k.827 11 0) (##string ##string.1665) (bruijn len 0 0) (bruijn mangled 7 0) (bruijn len 0 0) (bruijn escaped 4 0))
V_CALL(VGetArg(upenv, 26-1, 32), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D1665.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 7-1, 0),
      _var0,
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0print__literal__declaration_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k431, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 25 22) (close _V0print__literal__declaration_k432) (bruijn ##x.829 0 0) 1)
V_CALL(VGetArg(upenv, 25-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k432, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0print__literal__declaration_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 24 12) (close _V0print__literal__declaration_k431) (bruijn ##x.830 0 0))
V_CALL(VGetArg(upenv, 24-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k431, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k429, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol->string 23 14) (close _V0print__literal__declaration_k430) (bruijn ##x.831 0 0))
V_CALL(VGetArg(upenv, 23-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k430, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 22 31) (close _V0print__literal__declaration_k429) (bruijn lit 7 1))
V_CALL(VGetArg(upenv, 22-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k429, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0print__literal__declaration_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k427, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn escape-string 13 3) (close _V0print__literal__declaration_k428) (bruijn ##x.832 0 0))
V_CALL(VGetArg(upenv, 13-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k428, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol->string 20 14) (close _V0print__literal__declaration_k427) (bruijn ##x.833 0 0))
V_CALL(VGetArg(upenv, 20-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k427, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k425, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 19 31) (close _V0print__literal__declaration_k426) (bruijn lit 4 1))
V_CALL(VGetArg(upenv, 19-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k426, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0print__literal__declaration_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 18 13) (close _V0print__literal__declaration_k425) (bruijn ##x.834 0 0))
V_CALL(VGetArg(upenv, 18-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k425, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k441, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 26 32) (bruijn ##k.827 11 0) (##string ##string.1666) (bruijn len 0 0) (bruijn mangled 5 0) (bruijn len 0 0) (bruijn escaped 3 0))
V_CALL(VGetArg(upenv, 26-1, 32), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D1666.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 5-1, 0),
      _var0,
      upenv->up->up->vars[0]
    );
 }
}
static void _V0print__literal__declaration_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 25 22) (close _V0print__literal__declaration_k441) (bruijn ##x.836 0 0) 1)
V_CALL(VGetArg(upenv, 25-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k441, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0print__literal__declaration_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k439, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 24 12) (close _V0print__literal__declaration_k440) (bruijn ##x.837 0 0))
V_CALL(VGetArg(upenv, 24-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k440, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k438, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 23 31) (close _V0print__literal__declaration_k439) (bruijn lit 8 1))
V_CALL(VGetArg(upenv, 23-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k439, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0print__literal__declaration_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k437, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn escape-string 14 3) (close _V0print__literal__declaration_k438) (bruijn ##x.838 0 0))
V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k438, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 21 31) (close _V0print__literal__declaration_k437) (bruijn lit 6 1))
V_CALL(VGetArg(upenv, 21-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k437, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0print__literal__declaration_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k435, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 20 13) (close _V0print__literal__declaration_k436) (bruijn ##x.839 0 0))
V_CALL(VGetArg(upenv, 20-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k436, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.835 0 0) ((bruijn cdr 19 30) (close _V0print__literal__declaration_k435) (bruijn lit 4 1)) ((bruijn error 19 37) (bruijn ##k.827 4 0) (##string ##string.1667)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k435, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1667.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0print__literal__declaration_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string? 18 11) (close _V0print__literal__declaration_k434) (bruijn ##x.840 0 0))
V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k434, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.828 0 0) ((bruijn car 17 31) (close _V0print__literal__declaration_k424) (bruijn lit 2 1)) ((bruijn car 17 31) (close _V0print__literal__declaration_k433) (bruijn lit 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k424, env)}),
      upenv->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 17-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k433, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0print__literal__declaration_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol? 16 15) (close _V0print__literal__declaration_k423) (bruijn ##x.841 0 0))
V_CALL(VGetArg(upenv, 16-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k423, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__literal__declaration_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 15 31) (close _V0print__literal__declaration_k422) (bruijn lit 0 1))
V_CALL(VGetArg(upenv, 15-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k422, env)}),
      _var1
    );
 }
}
static void _V0printout2_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k70) (bruijn print-literal-declaration 6 7) (close _V0print__literal__declaration_lambda92))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k70, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_lambda92, env)})
    );
 }
}
static void _V0print__literal_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k445, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 18 32) (bruijn ##k.842 4 0) (##string ##string.1670) (bruijn ##x.846 0 0))
V_CALL(VGetArg(upenv, 18-1, 32), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1670.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0print__literal_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k449, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 21 32) (bruijn ##k.842 7 0) (##string ##string.1673) (bruijn ##x.850 0 0))
V_CALL(VGetArg(upenv, 21-1, 32), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1673.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0print__literal_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k448, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.849 0 0) ((bruijn mangle-symbol 20 13) (close _V0print__literal_k449) (bruijn x 6 1)) ((bruijn error 20 37) (bruijn ##k.842 6 0) (##string ##string.1674) (bruijn x 6 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k449, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 37), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1674.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1)
    );
}
 }
}
static void _V0print__literal_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k447, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.848 0 0) ((bruijn printf 19 32) (bruijn ##k.842 5 0) (##string ##string.1672)) ((bruijn symbol? 19 15) (close _V0print__literal_k448) (bruijn x 5 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 32), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1672.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k448, env)}),
      VGetArg(upenv, 5-1, 1)
    );
}
 }
}
static void _V0print__literal_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k446, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.847 0 0) ((bruijn printf 18 32) (bruijn ##k.842 4 0) (##string ##string.1671)) ((bruijn eq? 18 7) (close _V0print__literal_k447) (bruijn x 4 1) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 32), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1671.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k447, env)}),
      upenv->up->up->up->vars[1],
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__literal_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.845 0 0) ((bruijn escape-char 9 4) (close _V0print__literal_k445) (bruijn x 3 1)) ((bruijn eq? 17 7) (close _V0print__literal_k446) (bruijn x 3 1) #t))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k445, env)}),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 17-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k446, env)}),
      upenv->up->up->vars[1],
      VEncodeBool(true)
    );
}
 }
}
static void _V0print__literal_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k443, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.844 0 0) ((bruijn printf 16 32) (bruijn ##k.842 2 0) (##string ##string.1669) (bruijn x 2 1)) ((bruijn char? 16 8) (close _V0print__literal_k444) (bruijn x 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 32), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1669.sym, VPOINTER_OTHER),
      upenv->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k444, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0print__literal_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k442, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.843 0 0) ((bruijn printf 15 32) (bruijn ##k.842 1 0) (##string ##string.1668) (bruijn x 1 1)) ((bruijn number? 15 9) (close _V0print__literal_k443) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 32), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1668.sym, VPOINTER_OTHER),
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k443, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0print__literal_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__literal_lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn integer? 14 10) (close _V0print__literal_k442) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 14-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k442, env)}),
      _var1
    );
 }
}
static void _V0printout2_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k69) (bruijn print-literal 5 6) (close _V0print__literal_lambda93))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k69, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_lambda93, env)})
    );
 }
}
static void _V0print__literal__string_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__string_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__string_k450, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 14 32) (bruijn ##k.851 1 0) (##string ##string.1673) (bruijn ##x.852 0 0))
V_CALL(VGetArg(upenv, 14-1, 32), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1673.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0print__literal__string_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__literal__string_lambda94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__string_lambda94, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn mangle-symbol 13 13) (close _V0print__literal__string_k450) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 13-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__string_k450, env)}),
      _var1
    );
 }
}
static void _V0printout2_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k68) (bruijn print-literal-string 4 5) (close _V0print__literal__string_lambda94))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k68, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__string_lambda94, env)})
    );
 }
}
static void _V0escape__char_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k457, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.861 0 0) ((bruijn ##k.854 7 0) (##string ##string.1680)) ((bruijn ##k.854 7 0) (bruijn c 8 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodePointer(&_V10string_D1680.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 8-1, 1)
    );
}
 }
}
static void _V0escape__char_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.860 0 0) ((bruijn ##k.854 6 0) (##string ##string.1679)) ((bruijn eqv? 19 6) (close _V0escape__char_k457) (bruijn ##x.118 6 1) (quote #\')))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodePointer(&_V10string_D1679.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k457, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeChar('\'')
    );
}
 }
}
static void _V0escape__char_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k455, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.859 0 0) ((bruijn ##k.854 5 0) (##string ##string.1678)) ((bruijn eqv? 18 6) (close _V0escape__char_k456) (bruijn ##x.118 5 1) (quote #\\)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodePointer(&_V10string_D1678.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 18-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k456, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeChar('\\')
    );
}
 }
}
static void _V0escape__char_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k454, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.858 0 0) ((bruijn ##k.854 4 0) (##string ##string.1677)) ((bruijn eqv? 17 6) (close _V0escape__char_k455) (bruijn ##x.118 4 1) (quote #\return)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D1677.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 17-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k455, env)}),
      upenv->up->up->up->vars[1],
      VEncodeChar('\r')
    );
}
 }
}
static void _V0escape__char_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k453, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.857 0 0) ((bruijn ##k.854 3 0) (##string ##string.1676)) ((bruijn eqv? 16 6) (close _V0escape__char_k454) (bruijn ##x.118 3 1) (quote #\newline)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D1676.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 16-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k454, env)}),
      upenv->up->up->vars[1],
      VEncodeChar('\n')
    );
}
 }
}
static void _V0escape__char_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.856 0 0) ((bruijn ##k.854 2 0) (##string ##string.1676)) ((bruijn eqv? 15 6) (close _V0escape__char_k453) (bruijn ##x.118 2 1) (quote #\tab)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10string_D1676.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k453, env)}),
      upenv->up->vars[1],
      VEncodeChar('\t')
    );
}
 }
}
static void _V0escape__char_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k451, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.855 0 0) ((bruijn ##k.854 1 0) (##string ##string.1675)) ((bruijn eqv? 14 6) (close _V0escape__char_k452) (bruijn ##x.118 1 1) (quote #\backspace)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10string_D1675.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 14-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k452, env)}),
      upenv->vars[1],
      VEncodeChar('')
    );
}
 }
}
static void _V0escape__char_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 13 6) (close _V0escape__char_k451) (bruijn ##x.118 0 1) (quote #\alarm))
V_CALL(VGetArg(upenv, 13-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k451, env)}),
      _var1,
      VEncodeChar('\a')
    );
 }
}
static void _V0escape__char_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0escape__char_lambda95, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_lambda95, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0escape__char_lambda96) (bruijn ##k.853 0 0) (bruijn c 0 1))
V_CALL_FUNC(_V0escape__char_lambda96, env, runtime,
      _var0,
      _var1
    );
 }
}
static void _V0printout2_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k67) (bruijn escape-char 3 4) (close _V0escape__char_lambda95))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k67, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_lambda95, env)})
    );
 }
}
static void _V0escape__string_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k460, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.866 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k471, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.883 1 0) ((bruijn ##k.884 0 0) (bruijn ##p.883 1 0)) ((bruijn eqv? 27 6) (bruijn ##k.884 0 0) (bruijn ##x.117 9 0) (quote #\\)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 27-1, 6), runtime,
      _var0,
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('\\')
    );
}
 }
}
static void _V0loop_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k474, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 29 19) (bruijn ##k.873 9 0) (bruijn ##x.881 0 0) (bruijn port 15 2))
V_CALL(VGetArg(upenv, 29-1, 19), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0,
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0loop_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-ref 28 5) (close _V0loop_k474) (bruijn s 17 1) (bruijn i 12 1))
V_CALL(VGetArg(upenv, 28-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k474, env)}),
      VGetArg(upenv, 17-1, 1),
      VGetArg(upenv, 12-1, 1)
    );
 }
}
static void _V0loop_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k475, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 28 19) (bruijn ##k.873 8 0) (bruijn ##x.882 0 0) (bruijn port 14 2))
V_CALL(VGetArg(upenv, 28-1, 19), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0,
      VGetArg(upenv, 14-1, 2)
    );
 }
}
static void _V0loop_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k472, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.879 0 0) ((bruijn display 27 19) (close _V0loop_k473) #\\ (bruijn port 13 2)) ((bruijn string-ref 27 5) (close _V0loop_k475) (bruijn s 16 1) (bruijn i 11 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 27-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k473, env)}),
      VEncodeChar('\\'),
      VGetArg(upenv, 13-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k475, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 11-1, 1)
    );
}
 }
}
static void _V0loop_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k470, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k471) (close _V0loop_k472))
V_CALL_FUNC(_V0loop_k471, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k472, env)})
    );
 }
}
static void _V0loop_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.878 0 0) ((bruijn display 25 19) (bruijn ##k.873 5 0) (##string ##string.1682) (bruijn port 11 2)) ((bruijn eqv? 25 6) (close _V0loop_k470) (bruijn ##x.117 7 0) (quote #\")))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1682.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 25-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k470, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('"')
    );
}
 }
}
static void _V0loop_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.877 0 0) ((bruijn display 24 19) (bruijn ##k.873 4 0) (##string ##string.1678) (bruijn port 10 2)) ((bruijn eqv? 24 6) (close _V0loop_k469) (bruijn ##x.117 6 0) (quote #\?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 24-1, 19), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1678.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 24-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k469, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('?')
    );
}
 }
}
static void _V0loop_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k467, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.876 0 0) ((bruijn display 23 19) (bruijn ##k.873 3 0) (##string ##string.1677) (bruijn port 9 2)) ((bruijn eqv? 23 6) (close _V0loop_k468) (bruijn ##x.117 5 0) (quote #\return)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 19), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1677.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 23-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k468, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('\r')
    );
}
 }
}
static void _V0loop_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k466, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.875 0 0) ((bruijn display 22 19) (bruijn ##k.873 2 0) (##string ##string.1676) (bruijn port 8 2)) ((bruijn eqv? 22 6) (close _V0loop_k467) (bruijn ##x.117 4 0) (quote #\newline)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 19), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1676.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k467, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('\n')
    );
}
 }
}
static void _V0loop_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.874 0 0) ((bruijn display 21 19) (bruijn ##k.873 1 0) (##string ##string.1681) (bruijn port 7 2)) ((bruijn eqv? 21 6) (close _V0loop_k466) (bruijn ##x.117 3 0) (quote #\tab)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 19), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1681.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 21-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k466, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('\t')
    );
}
 }
}
static void _V0loop_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k464, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.872 1 0) ((bruijn display 20 19) (bruijn ##k.873 0 0) (##string ##string.1675) (bruijn port 6 2)) ((bruijn eqv? 20 6) (close _V0loop_k465) (bruijn ##x.117 2 0) (quote #\backspace)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 20-1, 19), runtime,
      _var0,
      VEncodePointer(&_V10string_D1675.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k465, env)}),
      upenv->up->vars[0],
      VEncodeChar('')
    );
}
 }
}
static void _V0loop_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k477, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.868 5 0) (bruijn ##x.871 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0loop_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 20 22) (close _V0loop_k477) (bruijn i 4 1) 1)
V_CALL(VGetArg(upenv, 20-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k477, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k463, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k464) (close _V0loop_k476))
V_CALL_FUNC(_V0loop_k464, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k476, env)})
    );
 }
}
static void _V0loop_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k462, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 18 6) (close _V0loop_k463) (bruijn ##x.117 0 0) (quote #\alarm))
V_CALL(VGetArg(upenv, 18-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k463, env)}),
      _var0,
      VEncodeChar('\a')
    );
 }
}
static void _V0loop_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k461, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.869 0 0) ((bruijn string-ref 17 5) (close _V0loop_k462) (bruijn s 6 1) (bruijn i 1 1)) ((bruijn ##k.868 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k462, env)}),
      VGetArg(upenv, 6-1, 1),
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda100, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 16 4) (close _V0loop_k461) (bruijn i 0 1) (bruijn len 2 1))
V_CALL(VGetArg(upenv, 16-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k461, env)}),
      _var1,
      upenv->up->vars[1]
    );
 }
}
static void _V0escape__string_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_lambda99, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0escape__string_k460) (bruijn loop 0 1) (close _V0loop_lambda100))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k460, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda100, env)})
    );
 }
}
static void _V0escape__string_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k480, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.863 3 0) (bruijn ret 1 0))
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->vars[0]
    );
 }
}
static void _V0escape__string_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k479, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn close-port 16 3) (close _V0escape__string_k480) (bruijn port 2 2))
V_CALL(VGetArg(upenv, 16-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k480, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0escape__string_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k478, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn get-output-string 15 2) (close _V0escape__string_k479) (bruijn port 1 2))
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k479, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0escape__string_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_lambda98, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0escape__string_lambda99) (close _V0escape__string_k478) #f)
V_CALL_FUNC(_V0escape__string_lambda99, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k478, env)}),
      VEncodeBool(false)
    );
 }
}
static void _V0escape__string_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k459, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0escape__string_lambda98) (bruijn ##k.862 2 0) (bruijn ##x.885 1 0) (bruijn ##x.886 0 0))
V_CALL_FUNC(_V0escape__string_lambda98, env, runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0escape__string_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k458, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn open-output-string 12 1) (close _V0escape__string_k459))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k459, env)})
    );
 }
}
static void _V0escape__string_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0escape__string_lambda97, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_lambda97, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string-length 11 12) (close _V0escape__string_k458) (bruijn s 0 1))
V_CALL(VGetArg(upenv, 11-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k458, env)}),
      _var1
    );
 }
}
static void _V0printout2_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k66) (bruijn escape-string 2 3) (close _V0escape__string_lambda97))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k66, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_lambda97, env)})
    );
 }
}
static void _V0print__string_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__string_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_k482, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.890 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k494, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.907 1 0) ((bruijn ##k.908 0 0) (bruijn ##p.907 1 0)) ((bruijn eqv? 25 6) (bruijn ##k.908 0 0) (bruijn ##x.116 9 0) (quote #\\)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 25-1, 6), runtime,
      _var0,
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('\\')
    );
}
 }
}
static void _V0loop_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k497, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 27 19) (bruijn ##k.897 9 0) (bruijn ##x.905 0 0))
V_CALL(VGetArg(upenv, 27-1, 19), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0
    );
 }
}
static void _V0loop_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-ref 26 5) (close _V0loop_k497) (bruijn s 16 1) (bruijn i 13 1))
V_CALL(VGetArg(upenv, 26-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k497, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 13-1, 1)
    );
 }
}
static void _V0loop_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k498, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 26 19) (bruijn ##k.897 8 0) (bruijn ##x.906 0 0))
V_CALL(VGetArg(upenv, 26-1, 19), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0loop_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k495, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.903 0 0) ((bruijn display 25 19) (close _V0loop_k496) #\\) ((bruijn string-ref 25 5) (close _V0loop_k498) (bruijn s 15 1) (bruijn i 12 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k496, env)}),
      VEncodeChar('\\')
    );
} else {
V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k498, env)}),
      VGetArg(upenv, 15-1, 1),
      VGetArg(upenv, 12-1, 1)
    );
}
 }
}
static void _V0loop_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k494) (close _V0loop_k495))
V_CALL_FUNC(_V0loop_k494, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k495, env)})
    );
 }
}
static void _V0loop_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.902 0 0) ((bruijn display 23 19) (bruijn ##k.897 5 0) (##string ##string.1682)) ((bruijn eqv? 23 6) (close _V0loop_k493) (bruijn ##x.116 7 0) (quote #\")))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 19), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1682.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 23-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k493, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('"')
    );
}
 }
}
static void _V0loop_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k491, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.901 0 0) ((bruijn display 22 19) (bruijn ##k.897 4 0) (##string ##string.1678)) ((bruijn eqv? 22 6) (close _V0loop_k492) (bruijn ##x.116 6 0) (quote #\?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 19), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1678.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k492, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('?')
    );
}
 }
}
static void _V0loop_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k490, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.900 0 0) ((bruijn display 21 19) (bruijn ##k.897 3 0) (##string ##string.1677)) ((bruijn eqv? 21 6) (close _V0loop_k491) (bruijn ##x.116 5 0) (quote #\return)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 19), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1677.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 21-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k491, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('\r')
    );
}
 }
}
static void _V0loop_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k489, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.899 0 0) ((bruijn display 20 19) (bruijn ##k.897 2 0) (##string ##string.1676)) ((bruijn eqv? 20 6) (close _V0loop_k490) (bruijn ##x.116 4 0) (quote #\newline)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 19), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1676.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k490, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('\n')
    );
}
 }
}
static void _V0loop_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k488, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.898 0 0) ((bruijn display 19 19) (bruijn ##k.897 1 0) (##string ##string.1681)) ((bruijn eqv? 19 6) (close _V0loop_k489) (bruijn ##x.116 3 0) (quote #\tab)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 19), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1681.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k489, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('\t')
    );
}
 }
}
static void _V0loop_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.896 1 0) ((bruijn display 18 19) (bruijn ##k.897 0 0) (##string ##string.1675)) ((bruijn eqv? 18 6) (close _V0loop_k488) (bruijn ##x.116 2 0) (quote #\backspace)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 18-1, 19), runtime,
      _var0,
      VEncodePointer(&_V10string_D1675.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 18-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k488, env)}),
      upenv->up->vars[0],
      VEncodeChar('')
    );
}
 }
}
static void _V0loop_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k500, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.892 6 0) (bruijn ##x.895 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0loop_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k499, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 18 22) (close _V0loop_k500) (bruijn i 5 1) 1)
V_CALL(VGetArg(upenv, 18-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k500, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k486, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k487) (close _V0loop_k499))
V_CALL_FUNC(_V0loop_k487, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k499, env)})
    );
 }
}
static void _V0loop_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k485, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 16 6) (close _V0loop_k486) (bruijn ##x.116 0 0) (quote #\alarm))
V_CALL(VGetArg(upenv, 16-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k486, env)}),
      _var0,
      VEncodeChar('\a')
    );
 }
}
static void _V0loop_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k484, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.893 0 0) ((bruijn string-ref 15 5) (close _V0loop_k485) (bruijn s 5 1) (bruijn i 2 1)) ((bruijn ##k.892 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k485, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->vars[1]
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k483, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn < 14 4) (close _V0loop_k484) (bruijn i 1 1) (bruijn ##x.909 0 0))
V_CALL(VGetArg(upenv, 14-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k484, env)}),
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0loop_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda103, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda103, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string-length 13 12) (close _V0loop_k483) (bruijn s 3 1))
V_CALL(VGetArg(upenv, 13-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k483, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0print__string_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_lambda102, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0print__string_k482) (bruijn loop 0 1) (close _V0loop_lambda103))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__string_k482, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda103, env)})
    );
 }
}
static void _V0print__string_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__string_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_k501, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 12 19) (bruijn ##k.887 2 0) #\")
V_CALL(VGetArg(upenv, 12-1, 19), runtime,
      upenv->up->vars[0],
      VEncodeChar('"')
    );
 }
}
static void _V0print__string_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__string_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_k481, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__string_lambda102) (close _V0print__string_k501) #f)
V_CALL_FUNC(_V0print__string_lambda102, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__string_k501, env)}),
      VEncodeBool(false)
    );
 }
}
static void _V0print__string_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__string_lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn display 10 19) (close _V0print__string_k481) #\")
V_CALL(VGetArg(upenv, 10-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__string_k481, env)}),
      VEncodeChar('"')
    );
 }
}
static void _V0printout2_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k65) (bruijn print-string 1 2) (close _V0print__string_lambda101))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k65, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__string_lambda101, env)})
    );
 }
}
static void _V0print__global_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__global_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__global_k502, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn builtin 0 0) ((bruijn printf 10 32) (bruijn ##k.910 1 0) (##string ##string.1683) (bruijn builtin 0 0)) ((bruijn printf 10 32) (bruijn ##k.910 1 0) (##string ##string.1684) (bruijn sym 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 32), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1683.sym, VPOINTER_OTHER),
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 10-1, 32), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1684.sym, VPOINTER_OTHER),
      upenv->vars[1]
    );
}
 }
}
static void _V0print__global_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__global_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__global_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn lookup-intrinsic2 9 16) (close _V0print__global_k502) (bruijn sym 0 1))
V_CALL(VGetArg(upenv, 9-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__global_k502, env)}),
      _var1
    );
 }
}
static void _V0printout2_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15) {
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_lambda5, runtime, upenv, 16, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15) {
  struct { VEnv env; VWORD argv[16]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 16; env->var_len = 16; env->up = upenv;
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
  // (set! (close _V0printout2_k64) (bruijn print-global 0 1) (close _V0print__global_lambda104))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k64, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__global_lambda104, env)})
    );
 }
}
static void _V0printout2_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 if(argc != 7) {
  VError("Not enough arguments to _V0printout2_lambda4, got ~D~N"
  "-- expected 7~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_lambda4, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
  struct { VEnv env; VWORD argv[7]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 7; env->var_len = 7; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  // ((close _V0printout2_lambda5) (bruijn ##k.258 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(_V0printout2_lambda5, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void transpile_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close transpile_k63) (bruijn printout2 5 6) (close _V0printout2_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k63, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_lambda4, env)})
    );
 }
}
static void _V0to__functions_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k516, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.933 0 0) ((bruijn ##kk.113 3 1) (bruijn ##k.931 1 0) 1) ((bruijn ##k.931 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(1l)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__functions_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda111, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.115 0 1)) ((bruijn equal? 25 28) (close _V0to__functions_k516) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.115 0 1))) ((bruijn ##k.931 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k516, env)}),
      VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0to__functions_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k517, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 2 1) (bruijn ##k.929 1 0) 0)
V_CALL(upenv->up->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0to__functions_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda110, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__functions_lambda111) (close _V0to__functions_k517) (bruijn ##input.114 0 1))
V_CALL_FUNC(_V0to__functions_lambda111, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k517, env)}),
      _var1
    );
 }
}
static void _V0to__functions_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__functions_lambda110) (bruijn ##k.928 0 0) (bruijn e 1 1))
V_CALL_FUNC(_V0to__functions_lambda110, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0to__functions_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda108, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 22 29) (bruijn ##k.927 0 0) (close _V0to__functions_lambda109))
V_CALL(VGetArg(upenv, 22-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda109, env)})
    );
 }
}
static void _V0to__functions_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_lambda107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn multi-partition 14 13) (bruijn ##k.926 0 0) (close _V0to__functions_lambda108) 2 (bruijn exprs 15 1))
V_CALL(VGetArg(upenv, 14-1, 13), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda108, env)}),
      VEncodeInt(2l),
      VGetArg(upenv, 15-1, 1)
    );
 }
}
static void _V0to__functions_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda113, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn list 24 51) (bruijn ##k.936 0 0) (bruijn literal-table 17 4) (bruijn functions 17 3) (bruijn declares 0 2) (bruijn toplevels 0 1))
V_CALL(VGetArg(upenv, 24-1, 51), runtime,
      _var0,
      VGetArg(upenv, 17-1, 4),
      VGetArg(upenv, 17-1, 3),
      _var2,
      _var1
    );
 }
}
static void _V0to__functions_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k519, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0to__functions_lambda113) (bruijn ##k.935 2 0) (bruijn ##x.937 1 0) (bruijn ##x.938 0 0))
V_CALL_FUNC(_V0to__functions_lambda113, env, runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0to__functions_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k518, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 22 26) (close _V0to__functions_k519) (bruijn iter-declare 15 10) (bruijn declares 1 2))
V_CALL(VGetArg(upenv, 22-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k519, env)}),
      VGetArg(upenv, 15-1, 10),
      upenv->vars[2]
    );
 }
}
static void _V0to__functions_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 15 9) (bruijn ##k.939 0 0) (##string ##string.1685) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 15-1, 9), runtime,
      _var0,
      VEncodePointer(&_V10string_D1685.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0to__functions_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0to__functions_lambda112, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda112, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn map 21 26) (close _V0to__functions_k518) (close _V0to__functions_lambda114) (bruijn globals 0 1))
V_CALL(VGetArg(upenv, 21-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k518, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda114, env)}),
      _var1
    );
 }
}
static void _V0to__functions_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k515, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 20 17) (bruijn ##k.912 13 0) (close _V0to__functions_lambda107) (close _V0to__functions_lambda112))
V_CALL(VGetArg(upenv, 20-1, 17), runtime,
      VGetArg(upenv, 13-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda107, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda112, env)})
    );
 }
}
static void _V0multi__partition_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0multi__partition_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0multi__partition_k521, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.941 2 0) (bruijn ##x.943 0 0) (bruijn l 3 3))
V_CALL(upenv->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->up->vars[3]
    );
 }
}
static void _V0multi__partition_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0multi__partition_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0multi__partition_k520, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-list 15 11) (close _V0multi__partition_k521) (bruijn n 2 2) (quote ()))
V_CALL(VGetArg(upenv, 15-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0multi__partition_k521, env)}),
      upenv->up->vars[2],
      VNULL
    );
 }
}
static void _V0loop_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k523, runtime, upenv, 1, argc, _var0) {
  // ((bruijn apply 24 49) (bruijn ##k.944 2 0) (bruijn values 24 48) (bruijn ##x.946 0 0))
V_CALL(VGetArg(upenv, 24-1, 49), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 24-1, 48),
      _var0
    );
 }
}
static void _V0loop_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k530, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 9 1) (bruijn ##k.944 8 0) (bruijn ret 8 1) (bruijn ##x.948 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 8-1, 1),
      _var0
    );
 }
}
static void _V0loop_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k529, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 29 30) (close _V0loop_k530) (bruijn l 7 2))
V_CALL(VGetArg(upenv, 29-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k530, env)}),
      VGetArg(upenv, 7-1, 2)
    );
 }
}
static void _V0loop_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k528, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list-set! 21 12) (close _V0loop_k529) (bruijn ret 6 1) (bruijn split 3 0) (bruijn ##x.949 0 0))
V_CALL(VGetArg(upenv, 21-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k529, env)}),
      VGetArg(upenv, 6-1, 1),
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k527, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 27 50) (close _V0loop_k528) (bruijn ##x.950 1 0) (bruijn ##x.951 0 0))
V_CALL(VGetArg(upenv, 27-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k528, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k526, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list-ref 26 23) (close _V0loop_k527) (bruijn ret 4 1) (bruijn split 1 0))
V_CALL(VGetArg(upenv, 26-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k527, env)}),
      upenv->up->up->up->vars[1],
      upenv->vars[0]
    );
 }
}
static void _V0loop_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k525, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 25 31) (close _V0loop_k526) (bruijn l 3 2))
V_CALL(VGetArg(upenv, 25-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k526, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k524, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn f 4 1) (close _V0loop_k525) (bruijn ##x.952 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k525, env)}),
      _var0
    );
 }
}
static void _V0loop_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k522, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.945 0 0) ((bruijn map 23 26) (close _V0loop_k523) (bruijn reverse 23 40) (bruijn ret 1 1)) ((bruijn car 23 31) (close _V0loop_k524) (bruijn l 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k523, env)}),
      VGetArg(upenv, 23-1, 40),
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 23-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k524, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0loop_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda117, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda117, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 22 38) (close _V0loop_k522) (bruijn l 0 2))
V_CALL(VGetArg(upenv, 22-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k522, env)}),
      _var2
    );
 }
}
static void _V0multi__partition_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0multi__partition_lambda116, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0multi__partition_k520) (bruijn loop 0 1) (close _V0loop_lambda117))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0multi__partition_k520, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda117, env)})
    );
 }
}
static void _V0multi__partition_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0multi__partition_lambda115, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0multi__partition_lambda115, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0multi__partition_lambda116) (bruijn ##k.940 0 0) #f)
V_CALL_FUNC(_V0multi__partition_lambda116, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0to__functions_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k514, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k515) (bruijn multi-partition 12 13) (close _V0multi__partition_lambda115))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k515, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0multi__partition_lambda115, env)})
    );
 }
}
static void _V0list__set_B_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0list__set_B_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_k533, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list-set! 15 12) (bruijn ##k.953 3 0) (bruijn ##x.955 1 0) (bruijn ##x.956 0 0) (bruijn v 3 3))
V_CALL(VGetArg(upenv, 15-1, 12), runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0,
      upenv->up->up->vars[3]
    );
 }
}
static void _V0list__set_B_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0list__set_B_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_k532, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 21 24) (close _V0list__set_B_k533) (bruijn x 2 2) 1)
V_CALL(VGetArg(upenv, 21-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_k533, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l)
    );
 }
}
static void _V0list__set_B_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0list__set_B_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_k531, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.954 0 0) ((bruijn set-car! 20 47) (bruijn ##k.953 1 0) (bruijn l 1 1) (bruijn v 1 3)) ((bruijn cdr 20 30) (close _V0list__set_B_k532) (bruijn l 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 47), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_k532, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0list__set_B_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0list__set_B_lambda118, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_lambda118, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn = 19 18) (close _V0list__set_B_k531) (bruijn x 0 2) 0)
V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_k531, env)}),
      _var2,
      VEncodeInt(0l)
    );
 }
}
static void _V0to__functions_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k513, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k514) (bruijn list-set! 11 12) (close _V0list__set_B_lambda118))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k514, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_lambda118, env)})
    );
 }
}
static void _V0make__list_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__list_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_k536, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 21 50) (bruijn ##k.957 3 0) (bruijn k 3 2) (bruijn ##x.959 0 0))
V_CALL(VGetArg(upenv, 21-1, 50), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2],
      _var0
    );
 }
}
static void _V0make__list_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__list_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_k535, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-list 13 11) (close _V0make__list_k536) (bruijn ##x.960 0 0) (bruijn k 2 2))
V_CALL(VGetArg(upenv, 13-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_k536, env)}),
      _var0,
      upenv->up->vars[2]
    );
 }
}
static void _V0make__list_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__list_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_k534, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.958 0 0) ((bruijn ##k.957 1 0) (quote ())) ((bruijn - 19 24) (close _V0make__list_k535) (bruijn n 1 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_k535, env)}),
      upenv->vars[1],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0make__list_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0make__list_lambda119, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_lambda119, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn = 18 18) (close _V0make__list_k534) 0 (bruijn n 0 1))
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_k534, env)}),
      VEncodeInt(0l),
      _var1
    );
 }
}
static void _V0to__functions_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k512, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k513) (bruijn make-list 10 11) (close _V0make__list_lambda119))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k513, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_lambda119, env)})
    );
 }
}
static void _V0iter__declare_k543(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k543, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.108 9 1) (bruijn ##k.965 7 0) (bruijn ##x.971 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0iter__declare_k542(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k542, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 26 50) (close _V0iter__declare_k543) (bruijn f 3 0) (bruijn ##x.972 0 0))
V_CALL(VGetArg(upenv, 26-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k543, env)}),
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0iter__declare_k541(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k541, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 25 46) (close _V0iter__declare_k542) (bruijn ##x.973 0 0))
V_CALL(VGetArg(upenv, 25-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k542, env)}),
      _var0
    );
 }
}
static void _V0iter__declare_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k540, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.112 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.112 0 0))) ((bruijn iter 17 9) (close _V0iter__declare_k541) (bruijn f 1 0) (##inline ##sys.car (bruijn ##expr.112 0 0))) ((bruijn ##k.965 4 0) #f)) ((bruijn ##k.965 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k541, env)}),
      upenv->vars[0],
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__declare_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k539, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__declare_k540) (##inline ##sys.cdr (bruijn ##expr.111 1 0)))
V_CALL_FUNC(_V0iter__declare_k540, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter__declare_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k538, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.111 0 0)) ((close _V0iter__declare_k539) (##inline ##sys.car (bruijn ##expr.111 0 0))) ((bruijn ##k.965 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__declare_k539, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__declare_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k537, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.967 0 0) ((close _V0iter__declare_k538) (##inline ##sys.cdr (bruijn ##expr.110 1 1))) ((bruijn ##k.965 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__declare_k538, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__declare_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda123, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.110 0 1)) ((bruijn equal? 20 28) (close _V0iter__declare_k537) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.110 0 1))) ((bruijn ##k.965 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k537, env)}),
      VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__declare_k544(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k544, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 20 37) (bruijn ##k.963 1 0) (##string ##string.1599))
V_CALL(VGetArg(upenv, 20-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1599.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0iter__declare_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda122, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__declare_lambda123) (close _V0iter__declare_k544) (bruijn ##input.109 0 1))
V_CALL_FUNC(_V0iter__declare_lambda123, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k544, env)}),
      _var1
    );
 }
}
static void _V0iter__declare_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__declare_lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__declare_lambda122) (bruijn ##k.962 0 0) (bruijn d 1 1))
V_CALL_FUNC(_V0iter__declare_lambda122, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0iter__declare_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__declare_lambda120, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda120, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 17 29) (bruijn ##k.961 0 0) (close _V0iter__declare_lambda121))
V_CALL(VGetArg(upenv, 17-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_lambda121, env)})
    );
 }
}
static void _V0to__functions_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k511, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k512) (bruijn iter-declare 9 10) (close _V0iter__declare_lambda120))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k512, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_lambda120, env)})
    );
 }
}
static void _V0iter_k545(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k545, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1017 0 0) ((bruijn ##kk.99 3 1) (bruijn ##k.1015 1 0) (bruijn expr 4 2)) ((bruijn ##k.1015 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[2]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda127, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.101 0 1)) ((bruijn equal? 19 28) (close _V0iter_k545) (quote bruijn) (##inline ##sys.car (bruijn ##expr.101 0 1))) ((bruijn ##k.1015 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k545, env)}),
      VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k548(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k548, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.99 5 1) (bruijn ##k.1010 2 0) (bruijn ##x.1013 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k547(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k547, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1012 0 0) ((bruijn iter-atom 14 7) (close _V0iter_k548) (bruijn fun 5 1) (bruijn expr 5 2)) ((bruijn ##k.1010 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k548, env)}),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 5-1, 2)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda128, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.102 0 1)) ((bruijn equal? 20 28) (close _V0iter_k547) (quote lambda) (##inline ##sys.car (bruijn ##expr.102 0 1))) ((bruijn ##k.1010 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k547, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k551, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.99 6 1) (bruijn ##k.1005 2 0) (bruijn ##x.1008 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k550, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1007 0 0) ((bruijn iter-atom 15 7) (close _V0iter_k551) (bruijn fun 6 1) (bruijn expr 6 2)) ((bruijn ##k.1005 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k551, env)}),
      VGetArg(upenv, 6-1, 1),
      VGetArg(upenv, 6-1, 2)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda129, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.103 0 1)) ((bruijn equal? 21 28) (close _V0iter_k550) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.103 0 1))) ((bruijn ##k.1005 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k550, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k554, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.99 7 1) (bruijn ##k.1000 2 0) (bruijn ##x.1003 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k553, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1002 0 0) ((bruijn iter-atom 16 7) (close _V0iter_k554) (bruijn fun 7 1) (bruijn expr 7 2)) ((bruijn ##k.1000 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k554, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda130, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.104 0 1)) ((bruijn equal? 22 28) (close _V0iter_k553) (quote continuation) (##inline ##sys.car (bruijn ##expr.104 0 1))) ((bruijn ##k.1000 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k553, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k557, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.99 8 1) (bruijn ##k.995 2 0) (bruijn ##x.998 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k556, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.997 0 0) ((bruijn iter-atom 17 7) (close _V0iter_k557) (bruijn fun 8 1) (bruijn expr 8 2)) ((bruijn ##k.995 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k557, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 8-1, 2)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda131, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.105 0 1)) ((bruijn equal? 23 28) (close _V0iter_k556) (quote quote) (##inline ##sys.car (bruijn ##expr.105 0 1))) ((bruijn ##k.995 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k556, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k560(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k560, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.99 9 1) (bruijn ##k.990 2 0) (bruijn ##x.993 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k559, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.992 0 0) ((bruijn iter-atom 18 7) (close _V0iter_k560) (bruijn fun 9 1) (bruijn expr 9 2)) ((bruijn ##k.990 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k560, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda132, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.106 0 1)) ((bruijn equal? 24 28) (close _V0iter_k559) (quote ##inline) (##inline ##sys.car (bruijn ##expr.106 0 1))) ((bruijn ##k.990 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k559, env)}),
      VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k562(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k562, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.99 9 1) (bruijn ##k.987 1 0) (bruijn ##x.989 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0iter_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda133, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.107 0 1)) ((bruijn iter-apply 18 8) (close _V0iter_k562) (bruijn fun 9 1) (bruijn expr 9 2)) ((bruijn ##k.987 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k562, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k564(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k564, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.99 9 1) (bruijn ##k.978 8 0) (bruijn ##x.986 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0iter_k563(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k563, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-atom 18 7) (close _V0iter_k564) (bruijn fun 9 1) (bruijn expr 9 2))
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k564, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0iter_k561(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k561, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda133) (close _V0iter_k563) (bruijn ##input.100 6 1))
V_CALL_FUNC(_V0iter_lambda133, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k563, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0iter_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k558, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda132) (close _V0iter_k561) (bruijn ##input.100 5 1))
V_CALL_FUNC(_V0iter_lambda132, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k561, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0iter_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k555, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda131) (close _V0iter_k558) (bruijn ##input.100 4 1))
V_CALL_FUNC(_V0iter_lambda131, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k558, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0iter_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k552, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda130) (close _V0iter_k555) (bruijn ##input.100 3 1))
V_CALL_FUNC(_V0iter_lambda130, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k555, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0iter_k549(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k549, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda129) (close _V0iter_k552) (bruijn ##input.100 2 1))
V_CALL_FUNC(_V0iter_lambda129, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k552, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0iter_k546(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k546, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda128) (close _V0iter_k549) (bruijn ##input.100 1 1))
V_CALL_FUNC(_V0iter_lambda128, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k549, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda126, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda127) (close _V0iter_k546) (bruijn ##input.100 0 1))
V_CALL_FUNC(_V0iter_lambda127, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k546, env)}),
      _var1
    );
 }
}
static void _V0iter_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda125, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda126) (bruijn ##k.977 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0iter_lambda126, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0iter_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda124, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda124, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 16 29) (bruijn ##k.976 0 0) (close _V0iter_lambda125))
V_CALL(VGetArg(upenv, 16-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda125, env)})
    );
 }
}
static void _V0to__functions_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k510, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k511) (bruijn iter 8 9) (close _V0iter_lambda124))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k511, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda124, env)})
    );
 }
}
static void _V0iter__apply_k572(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k572, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.70 10 1) (bruijn ##k.1126 8 0) (##inline ##sys.cons (quote define) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.73 6 0)) (##inline ##sys.cons (bruijn ##x.1136 2 0) (##inline ##sys.cons (bruijn ##x.1138 0 0) (quote ()))))))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
VGetArg(upenv, 6-1, 0)
    )
,
      VInlineCons(
upenv->up->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0iter__apply_k571(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k571, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-atom 18 7) (close _V0iter__apply_k572) (bruijn ##x.1139 0 0) (##inline ##sys.car (bruijn ##expr.75 2 0)))
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k572, env)}),
      _var0,
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k570(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k570, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 24 13) (close _V0iter__apply_k571) (bruijn y 2 0))
V_CALL(VGetArg(upenv, 24-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k571, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0iter__apply_k569(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k569, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.75 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.75 0 0))) ((bruijn lift-literal 16 5) (close _V0iter__apply_k570) (bruijn y 1 0)) ((bruijn ##k.1126 5 0) #f)) ((bruijn ##k.1126 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k570, env)}),
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k568(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k568, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k569) (##inline ##sys.cdr (bruijn ##expr.74 1 0)))
V_CALL_FUNC(_V0iter__apply_k569, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k567(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k567, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.74 0 0)) ((close _V0iter__apply_k568) (##inline ##sys.car (bruijn ##expr.74 0 0))) ((bruijn ##k.1126 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k568, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k566(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k566, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.73 0 0)) ((close _V0iter__apply_k567) (##inline ##sys.cdr (bruijn ##expr.73 0 0))) ((bruijn ##k.1126 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k567, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k565(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k565, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1128 0 0) ((close _V0iter__apply_k566) (##inline ##sys.cdr (bruijn ##expr.72 1 1))) ((bruijn ##k.1126 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k566, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda137, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.72 0 1)) ((bruijn equal? 18 28) (close _V0iter__apply_k565) (quote define) (##inline ##sys.car (bruijn ##expr.72 0 1))) ((bruijn ##k.1126 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k565, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k584(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k584, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.70 14 1) (bruijn ##k.1104 11 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn ##x.1116 2 0) (##inline ##sys.cons (##inline ##sys.cons (quote bruijn) (##inline ##sys.cons (bruijn name 4 0) (##inline ##sys.cdr (bruijn ##expr.80 5 0)))) (##inline ##sys.cons (bruijn ##x.1120 0 0) (quote ()))))))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      VInlineCons(
VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->vars[0],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->up->vars[0],
      VInlineCdr(
VGetArg(upenv, 5-1, 0)
    )

    )

    )
,
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0iter__apply_k583(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k583, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-atom 22 7) (close _V0iter__apply_k584) (bruijn ##x.1121 0 0) (##inline ##sys.car (bruijn ##expr.81 2 0)))
V_CALL(VGetArg(upenv, 22-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k584, env)}),
      _var0,
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k582(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k582, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 28 13) (close _V0iter__apply_k583) (bruijn name 2 0))
V_CALL(VGetArg(upenv, 28-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k583, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0iter__apply_k581(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k581, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.81 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.81 0 0))) ((bruijn iter-atom 20 7) (close _V0iter__apply_k582) (bruijn fun 12 1) (##inline ##sys.car (bruijn ##expr.77 6 0))) ((bruijn ##k.1104 8 0) #f)) ((bruijn ##k.1104 8 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 20-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k582, env)}),
      VGetArg(upenv, 12-1, 1),
      VInlineCar(
VGetArg(upenv, 6-1, 0)
    )

    );
} else {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k580(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k580, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k581) (##inline ##sys.cdr (bruijn ##expr.78 4 0)))
V_CALL_FUNC(_V0iter__apply_k581, env, runtime,
      VInlineCdr(
upenv->up->up->up->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k579(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k579, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.80 0 0)) ((close _V0iter__apply_k580) (##inline ##sys.car (bruijn ##expr.80 0 0))) ((bruijn ##k.1104 6 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k580, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k578(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k578, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1110 0 0) ((close _V0iter__apply_k579) (##inline ##sys.cdr (bruijn ##expr.79 1 0))) ((bruijn ##k.1104 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k579, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k577(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k577, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.79 0 0)) ((bruijn equal? 23 28) (close _V0iter__apply_k578) (quote bruijn) (##inline ##sys.car (bruijn ##expr.79 0 0))) ((bruijn ##k.1104 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k578, env)}),
      VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k576(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k576, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.78 0 0)) ((close _V0iter__apply_k577) (##inline ##sys.car (bruijn ##expr.78 0 0))) ((bruijn ##k.1104 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k577, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k575(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k575, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.77 0 0)) ((close _V0iter__apply_k576) (##inline ##sys.cdr (bruijn ##expr.77 0 0))) ((bruijn ##k.1104 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k576, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k574(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k574, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1106 0 0) ((close _V0iter__apply_k575) (##inline ##sys.cdr (bruijn ##expr.76 1 1))) ((bruijn ##k.1104 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k575, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda138, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 1)) ((bruijn equal? 19 28) (close _V0iter__apply_k574) (quote set!) (##inline ##sys.car (bruijn ##expr.76 0 1))) ((bruijn ##k.1104 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k574, env)}),
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k594(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k594, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.70 13 1) (bruijn ##k.1087 9 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn ##x.1096 3 0) (##inline ##sys.cons (bruijn ##x.1098 2 0) (##inline ##sys.cons (bruijn ##x.1100 0 0) (quote ()))))))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons(
VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[0],
      VInlineCons(
upenv->up->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0iter__apply_k593(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k593, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-atom 21 7) (close _V0iter__apply_k594) (bruijn ##x.1101 0 0) (##inline ##sys.car (bruijn ##expr.85 3 0)))
V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k594, env)}),
      _var0,
      VInlineCar(
upenv->up->up->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k592(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k592, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 27 13) (close _V0iter__apply_k593) (bruijn y 3 0))
V_CALL(VGetArg(upenv, 27-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k593, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0iter__apply_k591(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k591, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn lift-literal 19 5) (close _V0iter__apply_k592) (bruijn y 2 0))
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k592, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0iter__apply_k590(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k590, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.85 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.85 0 0))) ((bruijn iter-atom 18 7) (close _V0iter__apply_k591) (bruijn fun 10 1) (##inline ##sys.car (bruijn ##expr.83 3 0))) ((bruijn ##k.1087 5 0) #f)) ((bruijn ##k.1087 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k591, env)}),
      VGetArg(upenv, 10-1, 1),
      VInlineCar(
upenv->up->up->vars[0]
    )

    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k589(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k589, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k590) (##inline ##sys.cdr (bruijn ##expr.84 1 0)))
V_CALL_FUNC(_V0iter__apply_k590, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k588(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k588, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.84 0 0)) ((close _V0iter__apply_k589) (##inline ##sys.car (bruijn ##expr.84 0 0))) ((bruijn ##k.1087 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k589, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k587(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k587, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.83 0 0)) ((close _V0iter__apply_k588) (##inline ##sys.cdr (bruijn ##expr.83 0 0))) ((bruijn ##k.1087 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k588, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k586(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k586, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1089 0 0) ((close _V0iter__apply_k587) (##inline ##sys.cdr (bruijn ##expr.82 1 1))) ((bruijn ##k.1087 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k587, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda139, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.82 0 1)) ((bruijn equal? 20 28) (close _V0iter__apply_k586) (quote set!) (##inline ##sys.car (bruijn ##expr.82 0 1))) ((bruijn ##k.1087 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k586, env)}),
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k602(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k602, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.70 12 1) (bruijn ##k.1071 7 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn ##x.1080 2 0) (##inline ##sys.cons (bruijn ##x.1082 1 0) (##inline ##sys.cons (bruijn ##x.1084 0 0) (quote ()))))))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->vars[0],
      VInlineCons(
upenv->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0iter__apply_k601(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k601, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-apply 20 8) (close _V0iter__apply_k602) (bruijn fun 12 1) (##inline ##sys.car (bruijn ##expr.89 2 0)))
V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k602, env)}),
      VGetArg(upenv, 12-1, 1),
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k600(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k600, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-apply 19 8) (close _V0iter__apply_k601) (bruijn fun 11 1) (##inline ##sys.car (bruijn ##expr.88 2 0)))
V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k601, env)}),
      VGetArg(upenv, 11-1, 1),
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k599(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k599, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.89 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.89 0 0))) ((bruijn iter-atom 18 7) (close _V0iter__apply_k600) (bruijn fun 10 1) (##inline ##sys.car (bruijn ##expr.87 2 0))) ((bruijn ##k.1071 4 0) #f)) ((bruijn ##k.1071 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k600, env)}),
      VGetArg(upenv, 10-1, 1),
      VInlineCar(
upenv->up->vars[0]
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k598(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k598, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.88 0 0)) ((close _V0iter__apply_k599) (##inline ##sys.cdr (bruijn ##expr.88 0 0))) ((bruijn ##k.1071 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k599, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k597(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k597, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.87 0 0)) ((close _V0iter__apply_k598) (##inline ##sys.cdr (bruijn ##expr.87 0 0))) ((bruijn ##k.1071 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k598, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k596(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k596, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1073 0 0) ((close _V0iter__apply_k597) (##inline ##sys.cdr (bruijn ##expr.86 1 1))) ((bruijn ##k.1071 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k597, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda140, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.86 0 1)) ((bruijn equal? 21 28) (close _V0iter__apply_k596) (quote if) (##inline ##sys.car (bruijn ##expr.86 0 1))) ((bruijn ##k.1071 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k596, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k612(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k612, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.70 15 1) (bruijn ##k.1049 9 0) (##inline ##sys.cons (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 4 0) (quote ()))) (bruijn ##x.1059 0 0)))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->up->vars[0],
      VNULL
    )

    )
,
      _var0
    )

    );
 }
}
static void _V0iter__apply_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda142, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda142, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-atom 24 7) (bruijn ##k.1060 0 0) (bruijn fun 16 1) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 24-1, 7), runtime,
      _var0,
      VGetArg(upenv, 16-1, 1),
      _var1
    );
 }
}
static void _V0iter__apply_k611(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k611, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 30 26) (close _V0iter__apply_k612) (close _V0iter__apply_lambda142) (##inline ##sys.cdr (bruijn ##expr.90 8 1)))
V_CALL(VGetArg(upenv, 30-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k612, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda142, env)}),
      VInlineCdr(
VGetArg(upenv, 8-1, 1)
    )

    );
 }
}
static void _V0iter__apply_k610(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k610, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0iter__apply_k611) (bruijn functions 22 3) (bruijn ##x.1062 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k611, env)}),
      VEncodeInt(22l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0iter__apply_k609(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k609, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 28 50) (close _V0iter__apply_k610) (##inline ##sys.cons (bruijn lamb 1 0) (##inline ##sys.cons (quote #f) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.92 3 0)) (##inline ##sys.cons (bruijn ##x.1068 0 0) (quote ()))) (quote ())))) (bruijn functions 21 3))
V_CALL(VGetArg(upenv, 28-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k610, env)}),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
VEncodeBool(false),
      VInlineCons(
VInlineCons(
VInlineCar(
upenv->up->up->vars[0]
    )
,
      VInlineCons(
_var0,
      VNULL
    )

    )
,
      VNULL
    )

    )

    )
,
      VGetArg(upenv, 21-1, 3)
    );
 }
}
static void _V0iter__apply_k608(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k608, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-apply 20 8) (close _V0iter__apply_k609) (bruijn fun 12 1) (##inline ##sys.car (bruijn ##expr.93 1 0)))
V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k609, env)}),
      VGetArg(upenv, 12-1, 1),
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k607(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k607, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.93 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.93 0 0))) ((bruijn genlambda 19 1) (close _V0iter__apply_k608) (bruijn fun 11 1)) ((bruijn ##k.1049 4 0) #f)) ((bruijn ##k.1049 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k608, env)}),
      VGetArg(upenv, 11-1, 1)
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k606(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k606, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 0)) ((close _V0iter__apply_k607) (##inline ##sys.cdr (bruijn ##expr.92 0 0))) ((bruijn ##k.1049 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k607, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k605(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k605, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1052 0 0) ((close _V0iter__apply_k606) (##inline ##sys.cdr (bruijn ##expr.91 1 0))) ((bruijn ##k.1049 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k606, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k604(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k604, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.91 0 0)) ((bruijn equal? 23 28) (close _V0iter__apply_k605) (quote lambda) (##inline ##sys.car (bruijn ##expr.91 0 0))) ((bruijn ##k.1049 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k605, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda141, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.90 0 1)) ((close _V0iter__apply_k604) (##inline ##sys.car (bruijn ##expr.90 0 1))) ((bruijn ##k.1049 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0iter__apply_k604, env, runtime,
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k614(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k614, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1031 1 0) (bruijn ##expr.94 4 1) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL
    );
 }
}
static void _V0loop_k616(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k616, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.96 4 1) (bruijn ##k.1042 1 0) (bruijn ##expr.98 2 1) (bruijn ##x.1043 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k615(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k615, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.98 1 1))) ((bruijn reverse 28 40) (close _V0loop_k616) (bruijn ##xs.95 1 2)) ((bruijn ##k.1042 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 28-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k616, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k619(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k619, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.96 7 1) (bruijn ##k.1036 2 0) (bruijn ##expr.98 5 1) (bruijn ##x.1038 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k618(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k618, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 31 40) (close _V0loop_k619) (bruijn ##xs.95 4 2))
V_CALL(VGetArg(upenv, 31-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k619, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda149, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda149, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.97 0 1) (close _V0loop_k618) (##inline ##sys.cdr (bruijn ##expr.98 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.98 3 1)) (bruijn ##xs.95 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k618, env)}),
      VInlineCdr(
upenv->up->up->vars[1]
    )
,
      VInlineCons(
VInlineCar(
upenv->up->up->vars[1]
    )
,
      upenv->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 29 29) (bruijn ##k.1035 0 0) (close _V0loop_lambda149))
V_CALL(VGetArg(upenv, 29-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda149, env)})
    );
 }
}
static void _V0loop_k617(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k617, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 28 17) (bruijn ##k.1033 1 0) (close _V0loop_lambda148) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 28-1, 17), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda148, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda147, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda147, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k615) (close _V0loop_k617))
V_CALL_FUNC(_V0loop_k615, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k617, env)})
    );
 }
}
static void _V0iter__apply_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda146, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter__apply_k614) (bruijn loop 0 1) (close _V0loop_lambda147))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k614, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda147, env)})
    );
 }
}
static void _V0iter__apply_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda145, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda145, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__apply_lambda146) (bruijn ##k.1030 0 0) #f)
V_CALL_FUNC(_V0iter__apply_lambda146, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0iter__apply_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_lambda144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 24 29) (bruijn ##k.1029 0 0) (close _V0iter__apply_lambda145))
V_CALL(VGetArg(upenv, 24-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda145, env)})
    );
 }
}
static void _V0iter__apply_k620(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k620, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.70 9 1) (bruijn ##k.1045 1 0) (bruijn ##x.1047 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0iter__apply_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda151, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda151, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-atom 18 7) (bruijn ##k.1048 0 0) (bruijn fun 10 1) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      _var0,
      VGetArg(upenv, 10-1, 1),
      _var1
    );
 }
}
static void _V0iter__apply_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__apply_lambda150, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda150, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 24 26) (close _V0iter__apply_k620) (close _V0iter__apply_lambda151) (bruijn xs 0 2)) ((bruijn ##k.1045 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k620, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda151, env)}),
      _var2
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda143, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 23 17) (bruijn ##k.1028 0 0) (close _V0iter__apply_lambda144) (close _V0iter__apply_lambda150))
V_CALL(VGetArg(upenv, 23-1, 17), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda144, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda150, env)})
    );
 }
}
static void _V0iter__apply_k621(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k621, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 23 37) (bruijn ##k.1021 6 0) (##string ##string.1599))
V_CALL(VGetArg(upenv, 23-1, 37), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1599.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0iter__apply_k613(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k613, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda143) (close _V0iter__apply_k621) (bruijn ##input.71 5 1))
V_CALL_FUNC(_V0iter__apply_lambda143, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k621, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0iter__apply_k603(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k603, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda141) (close _V0iter__apply_k613) (bruijn ##input.71 4 1))
V_CALL_FUNC(_V0iter__apply_lambda141, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k613, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0iter__apply_k595(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k595, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda140) (close _V0iter__apply_k603) (bruijn ##input.71 3 1))
V_CALL_FUNC(_V0iter__apply_lambda140, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k603, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0iter__apply_k585(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k585, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda139) (close _V0iter__apply_k595) (bruijn ##input.71 2 1))
V_CALL_FUNC(_V0iter__apply_lambda139, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k595, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0iter__apply_k573(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k573, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda138) (close _V0iter__apply_k585) (bruijn ##input.71 1 1))
V_CALL_FUNC(_V0iter__apply_lambda138, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k585, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter__apply_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda136, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__apply_lambda137) (close _V0iter__apply_k573) (bruijn ##input.71 0 1))
V_CALL_FUNC(_V0iter__apply_lambda137, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k573, env)}),
      _var1
    );
 }
}
static void _V0iter__apply_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda135, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__apply_lambda136) (bruijn ##k.1020 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0iter__apply_lambda136, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0iter__apply_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__apply_lambda134, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda134, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 15 29) (bruijn ##k.1019 0 0) (close _V0iter__apply_lambda135))
V_CALL(VGetArg(upenv, 15-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda135, env)})
    );
 }
}
static void _V0to__functions_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k509, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k510) (bruijn iter-apply 7 8) (close _V0iter__apply_lambda134))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k510, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda134, env)})
    );
 }
}
static void _V0iter__atom_k622(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k622, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1248 0 0) ((bruijn ##kk.52 3 1) (bruijn ##k.1246 1 0) (bruijn expr 4 2)) ((bruijn ##k.1246 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[2]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda155, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.54 0 1)) ((bruijn equal? 17 28) (close _V0iter__atom_k622) (quote bruijn) (##inline ##sys.car (bruijn ##expr.54 0 1))) ((bruijn ##k.1246 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 17-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k622, env)}),
      VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k630(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k630, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 10 1) (bruijn ##k.1228 7 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 3 0) (quote ()))))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons(
VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[0],
      VNULL
    )

    )

    );
 }
}
static void _V0iter__atom_k629(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k629, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k630) (bruijn functions 17 3) (bruijn ##x.1237 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k630, env)}),
      VEncodeInt(17l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0iter__atom_k628(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k628, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 23 50) (close _V0iter__atom_k629) (##inline ##sys.cons (bruijn lamb 1 0) (##inline ##sys.cons (quote #t) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.56 3 0)) (##inline ##sys.cons (bruijn ##x.1243 0 0) (quote ()))) (quote ())))) (bruijn functions 16 3))
V_CALL(VGetArg(upenv, 23-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k629, env)}),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
VEncodeBool(true),
      VInlineCons(
VInlineCons(
VInlineCar(
upenv->up->up->vars[0]
    )
,
      VInlineCons(
_var0,
      VNULL
    )

    )
,
      VNULL
    )

    )

    )
,
      VGetArg(upenv, 16-1, 3)
    );
 }
}
static void _V0iter__atom_k627(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k627, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-apply 15 8) (close _V0iter__atom_k628) (bruijn fun 8 1) (##inline ##sys.car (bruijn ##expr.57 1 0)))
V_CALL(VGetArg(upenv, 15-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k628, env)}),
      VGetArg(upenv, 8-1, 1),
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter__atom_k626(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k626, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.57 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.57 0 0))) ((bruijn genlambda 14 1) (close _V0iter__atom_k627) (bruijn fun 7 1)) ((bruijn ##k.1228 3 0) #f)) ((bruijn ##k.1228 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k627, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k625(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k625, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 0)) ((close _V0iter__atom_k626) (##inline ##sys.cdr (bruijn ##expr.56 0 0))) ((bruijn ##k.1228 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__atom_k626, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k624(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k624, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1230 0 0) ((close _V0iter__atom_k625) (##inline ##sys.cdr (bruijn ##expr.55 1 1))) ((bruijn ##k.1228 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k625, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda156, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.55 0 1)) ((bruijn equal? 18 28) (close _V0iter__atom_k624) (quote lambda) (##inline ##sys.car (bruijn ##expr.55 0 1))) ((bruijn ##k.1228 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k624, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k640(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k640, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k640, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 13 1) (bruijn ##k.1206 9 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 3 0) (quote ()))))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons(
VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[0],
      VNULL
    )

    )

    );
 }
}
static void _V0iter__atom_k639(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k639, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k639, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k640) (bruijn functions 20 3) (bruijn ##x.1217 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k640, env)}),
      VEncodeInt(20l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0iter__atom_k638(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k638, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 26 50) (close _V0iter__atom_k639) (##inline ##sys.cons (bruijn lamb 1 0) (##inline ##sys.cons (quote #t) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.59 5 0)) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.1224 0 0) (quote ())))) (quote ())))) (bruijn functions 19 3))
V_CALL(VGetArg(upenv, 26-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k639, env)}),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
VEncodeBool(true),
      VInlineCons(
VInlineCons(
VInlineCar(
VGetArg(upenv, 5-1, 0)
    )
,
      VInlineCons(
VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )
,
      VNULL
    )

    )

    )
,
      VGetArg(upenv, 19-1, 3)
    );
 }
}
static void _V0iter__atom_k637(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k637, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-apply 18 8) (close _V0iter__atom_k638) (bruijn fun 11 1) (##inline ##sys.car (bruijn ##expr.61 1 0)))
V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k638, env)}),
      VGetArg(upenv, 11-1, 1),
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter__atom_k636(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k636, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.61 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.61 0 0))) ((bruijn genlambda 17 1) (close _V0iter__atom_k637) (bruijn fun 10 1)) ((bruijn ##k.1206 5 0) #f)) ((bruijn ##k.1206 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k637, env)}),
      VGetArg(upenv, 10-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k635(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k635, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1211 0 0) ((close _V0iter__atom_k636) (##inline ##sys.cdr (bruijn ##expr.60 1 0))) ((bruijn ##k.1206 4 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k636, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k634(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k634, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.60 0 0)) ((bruijn equal? 22 28) (close _V0iter__atom_k635) (quote +) (##inline ##sys.car (bruijn ##expr.60 0 0))) ((bruijn ##k.1206 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k635, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k633(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k633, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.59 0 0)) ((close _V0iter__atom_k634) (##inline ##sys.cdr (bruijn ##expr.59 0 0))) ((bruijn ##k.1206 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__atom_k634, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k632(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k632, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1208 0 0) ((close _V0iter__atom_k633) (##inline ##sys.cdr (bruijn ##expr.58 1 1))) ((bruijn ##k.1206 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k633, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda157, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.58 0 1)) ((bruijn equal? 19 28) (close _V0iter__atom_k632) (quote lambda) (##inline ##sys.car (bruijn ##expr.58 0 1))) ((bruijn ##k.1206 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k632, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k646(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k646, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k646, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 10 1) (bruijn ##k.1194 5 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 3 0) (quote ()))))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VInlineCons(
VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[0],
      VNULL
    )

    )

    );
 }
}
static void _V0iter__atom_k645(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k645, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k645, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k646) (bruijn functions 17 3) (bruijn ##x.1200 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k646, env)}),
      VEncodeInt(17l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0iter__atom_k644(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k644, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k644, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 23 50) (close _V0iter__atom_k645) (##inline ##sys.cons (bruijn lamb 1 0) (##inline ##sys.cons (quote #t) (bruijn ##x.1203 0 0))) (bruijn functions 16 3))
V_CALL(VGetArg(upenv, 23-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k645, env)}),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
VEncodeBool(true),
      _var0
    )

    )
,
      VGetArg(upenv, 16-1, 3)
    );
 }
}
static void _V0iter__atom_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda159, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda159, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-lambda 16 6) (bruijn ##k.1204 0 0) (bruijn fun 9 1) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 16-1, 6), runtime,
      _var0,
      VGetArg(upenv, 9-1, 1),
      _var1
    );
 }
}
static void _V0iter__atom_k643(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k643, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k643, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 22 26) (close _V0iter__atom_k644) (close _V0iter__atom_lambda159) (##inline ##sys.cdr (bruijn ##expr.62 2 1)))
V_CALL(VGetArg(upenv, 22-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k644, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda159, env)}),
      VInlineCdr(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0iter__atom_k642(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k642, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k642, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1196 0 0) ((bruijn genlambda 14 1) (close _V0iter__atom_k643) (bruijn fun 7 1)) ((bruijn ##k.1194 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k643, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda158, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.62 0 1)) ((bruijn equal? 20 28) (close _V0iter__atom_k642) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.62 0 1))) ((bruijn ##k.1194 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k642, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k654(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k654, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k654, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 13 1) (bruijn ##k.1176 7 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn k 3 0) (quote ()))))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons(
VEncodePointer(&_V0close.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[0],
      VNULL
    )

    )

    );
 }
}
static void _V0iter__atom_k653(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k653, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k653, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k654) (bruijn functions 20 3) (bruijn ##x.1185 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k654, env)}),
      VEncodeInt(20l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0iter__atom_k652(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k652, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k652, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 26 50) (close _V0iter__atom_k653) (##inline ##sys.cons (bruijn k 1 0) (##inline ##sys.cons (quote #t) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.64 3 0)) (##inline ##sys.cons (bruijn ##x.1191 0 0) (quote ()))) (quote ())))) (bruijn functions 19 3))
V_CALL(VGetArg(upenv, 26-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k653, env)}),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
VEncodeBool(true),
      VInlineCons(
VInlineCons(
VInlineCar(
upenv->up->up->vars[0]
    )
,
      VInlineCons(
_var0,
      VNULL
    )

    )
,
      VNULL
    )

    )

    )
,
      VGetArg(upenv, 19-1, 3)
    );
 }
}
static void _V0iter__atom_k651(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k651, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k651, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-apply 18 8) (close _V0iter__atom_k652) (bruijn fun 11 1) (##inline ##sys.car (bruijn ##expr.65 1 0)))
V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k652, env)}),
      VGetArg(upenv, 11-1, 1),
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter__atom_k650(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k650, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k650, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.65 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.65 0 0))) ((bruijn gencont 17 2) (close _V0iter__atom_k651) (bruijn fun 10 1)) ((bruijn ##k.1176 3 0) #f)) ((bruijn ##k.1176 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k651, env)}),
      VGetArg(upenv, 10-1, 1)
    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k649(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k649, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k649, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.64 0 0)) ((close _V0iter__atom_k650) (##inline ##sys.cdr (bruijn ##expr.64 0 0))) ((bruijn ##k.1176 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__atom_k650, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k648(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k648, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k648, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1178 0 0) ((close _V0iter__atom_k649) (##inline ##sys.cdr (bruijn ##expr.63 1 1))) ((bruijn ##k.1176 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k649, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda160, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.63 0 1)) ((bruijn equal? 21 28) (close _V0iter__atom_k648) (quote continuation) (##inline ##sys.car (bruijn ##expr.63 0 1))) ((bruijn ##k.1176 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k648, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k658(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k658, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k658, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 10 1) (bruijn ##k.1166 3 0) (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn ##x.1173 0 0) (quote ()))))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0iter__atom_k657(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k657, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k657, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.67 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.67 0 0))) ((bruijn lift-literal 17 5) (close _V0iter__atom_k658) (##inline ##sys.car (bruijn ##expr.67 0 0))) ((bruijn ##k.1166 2 0) #f)) ((bruijn ##k.1166 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k658, env)}),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k656(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k656, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k656, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1168 0 0) ((close _V0iter__atom_k657) (##inline ##sys.cdr (bruijn ##expr.66 1 1))) ((bruijn ##k.1166 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k657, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda161, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.66 0 1)) ((bruijn equal? 22 28) (close _V0iter__atom_k656) (quote quote) (##inline ##sys.car (bruijn ##expr.66 0 1))) ((bruijn ##k.1166 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k656, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k662(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k662, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k662, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 11 1) (bruijn ##k.1157 3 0) (##inline ##sys.cons (quote ##inline) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.69 1 0)) (bruijn ##x.1163 0 0))))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
upenv->vars[0]
    )
,
      _var0
    )

    )

    );
 }
}
static void _V0iter__atom_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda163, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda163, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-atom 19 7) (bruijn ##k.1164 0 0) (bruijn fun 12 1) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 19-1, 7), runtime,
      _var0,
      VGetArg(upenv, 12-1, 1),
      _var1
    );
 }
}
static void _V0iter__atom_k661(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k661, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k661, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 0)) ((bruijn map 25 26) (close _V0iter__atom_k662) (close _V0iter__atom_lambda163) (##inline ##sys.cdr (bruijn ##expr.69 0 0))) ((bruijn ##k.1157 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k662, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda163, env)}),
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k660(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k660, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k660, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1159 0 0) ((close _V0iter__atom_k661) (##inline ##sys.cdr (bruijn ##expr.68 1 1))) ((bruijn ##k.1157 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k661, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda162, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.68 0 1)) ((bruijn equal? 23 28) (close _V0iter__atom_k660) (quote ##inline) (##inline ##sys.car (bruijn ##expr.68 0 1))) ((bruijn ##k.1157 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k660, env)}),
      VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k665(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k665, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k665, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1155 1 0) ((bruijn ##k.1156 0 0) (bruijn x 2 1)) ((bruijn lift-literal 19 5) (bruijn ##k.1156 0 0) (bruijn x 2 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      _var0,
      upenv->up->vars[1]
    );
}
 }
}
static void _V0iter__atom_k666(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k666, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k666, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 11 1) (bruijn ##k.1153 2 0) (bruijn ##x.1154 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter__atom_k664(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k664, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k664, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k665) (close _V0iter__atom_k666))
V_CALL_FUNC(_V0iter__atom_k665, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k666, env)})
    );
 }
}
static void _V0iter__atom_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda164, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 24 15) (close _V0iter__atom_k664) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 24-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k664, env)}),
      _var1
    );
 }
}
static void _V0iter__atom_k667(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k667, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k667, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 24 37) (bruijn ##k.1144 8 0) (##string ##string.1599))
V_CALL(VGetArg(upenv, 24-1, 37), runtime,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10string_D1599.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0iter__atom_k663(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k663, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k663, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda164) (close _V0iter__atom_k667) (bruijn ##input.53 7 1))
V_CALL_FUNC(_V0iter__atom_lambda164, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k667, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0iter__atom_k659(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k659, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k659, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda162) (close _V0iter__atom_k663) (bruijn ##input.53 6 1))
V_CALL_FUNC(_V0iter__atom_lambda162, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k663, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0iter__atom_k655(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k655, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k655, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda161) (close _V0iter__atom_k659) (bruijn ##input.53 5 1))
V_CALL_FUNC(_V0iter__atom_lambda161, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k659, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0iter__atom_k647(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k647, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k647, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda160) (close _V0iter__atom_k655) (bruijn ##input.53 4 1))
V_CALL_FUNC(_V0iter__atom_lambda160, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k655, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0iter__atom_k641(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k641, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k641, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda158) (close _V0iter__atom_k647) (bruijn ##input.53 3 1))
V_CALL_FUNC(_V0iter__atom_lambda158, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k647, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0iter__atom_k631(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k631, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda157) (close _V0iter__atom_k641) (bruijn ##input.53 2 1))
V_CALL_FUNC(_V0iter__atom_lambda157, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k641, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0iter__atom_k623(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k623, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda156) (close _V0iter__atom_k631) (bruijn ##input.53 1 1))
V_CALL_FUNC(_V0iter__atom_lambda156, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k631, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter__atom_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda154, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda155) (close _V0iter__atom_k623) (bruijn ##input.53 0 1))
V_CALL_FUNC(_V0iter__atom_lambda155, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k623, env)}),
      _var1
    );
 }
}
static void _V0iter__atom_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda153, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda153, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda154) (bruijn ##k.1143 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0iter__atom_lambda154, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0iter__atom_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__atom_lambda152, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda152, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 14 29) (bruijn ##k.1142 0 0) (close _V0iter__atom_lambda153))
V_CALL(VGetArg(upenv, 14-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda153, env)})
    );
 }
}
static void _V0to__functions_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k508, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k509) (bruijn iter-atom 6 7) (close _V0iter__atom_lambda152))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k509, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda152, env)})
    );
 }
}
static void _V0iter__lambda_k669(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k669, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k669, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.45 4 1) (bruijn ##k.1267 2 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.47 2 1)) (##inline ##sys.cons (bruijn ##x.1273 0 0) (quote ()))))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->vars[0],
      VInlineCons(
VInlineCar(
upenv->up->vars[1]
    )
,
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0iter__lambda_k668(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k668, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k668, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.48 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.48 0 0))) ((bruijn iter-apply 10 8) (close _V0iter__lambda_k669) (bruijn fun 4 1) (##inline ##sys.car (bruijn ##expr.48 0 0))) ((bruijn ##k.1267 1 0) #f)) ((bruijn ##k.1267 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k669, env)}),
      upenv->up->up->up->vars[1],
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__lambda_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda168, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.47 0 1)) ((close _V0iter__lambda_k668) (##inline ##sys.cdr (bruijn ##expr.47 0 1))) ((bruijn ##k.1267 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0iter__lambda_k668, env, runtime,
      VInlineCdr(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__lambda_k674(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k674, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k674, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.45 7 1) (bruijn ##k.1255 4 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.49 4 1)) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.1264 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
VInlineCar(
upenv->up->up->up->vars[1]
    )
,
      VInlineCons(
VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0iter__lambda_k673(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k673, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k673, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.51 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.51 0 0))) ((bruijn iter-apply 13 8) (close _V0iter__lambda_k674) (bruijn fun 7 1) (##inline ##sys.car (bruijn ##expr.51 0 0))) ((bruijn ##k.1255 3 0) #f)) ((bruijn ##k.1255 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 13-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k674, env)}),
      VGetArg(upenv, 7-1, 1),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__lambda_k672(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k672, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k672, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1258 0 0) ((close _V0iter__lambda_k673) (##inline ##sys.cdr (bruijn ##expr.50 1 0))) ((bruijn ##k.1255 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__lambda_k673, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__lambda_k671(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k671, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k671, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.50 0 0)) ((bruijn equal? 18 28) (close _V0iter__lambda_k672) (quote +) (##inline ##sys.car (bruijn ##expr.50 0 0))) ((bruijn ##k.1255 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k672, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__lambda_lambda169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda169, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.49 0 1)) ((close _V0iter__lambda_k671) (##inline ##sys.cdr (bruijn ##expr.49 0 1))) ((bruijn ##k.1255 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0iter__lambda_k671, env, runtime,
      VInlineCdr(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__lambda_k675(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k675, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k675, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 17 37) (bruijn ##k.1252 2 0) (##string ##string.1599))
V_CALL(VGetArg(upenv, 17-1, 37), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1599.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0iter__lambda_k670(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k670, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k670, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__lambda_lambda169) (close _V0iter__lambda_k675) (bruijn ##input.46 1 1))
V_CALL_FUNC(_V0iter__lambda_lambda169, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k675, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter__lambda_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda167, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__lambda_lambda168) (close _V0iter__lambda_k670) (bruijn ##input.46 0 1))
V_CALL_FUNC(_V0iter__lambda_lambda168, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k670, env)}),
      _var1
    );
 }
}
static void _V0iter__lambda_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__lambda_lambda166, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda166, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__lambda_lambda167) (bruijn ##k.1251 0 0) (bruijn lamb 1 2))
V_CALL_FUNC(_V0iter__lambda_lambda167, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0iter__lambda_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__lambda_lambda165, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda165, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 13 29) (bruijn ##k.1250 0 0) (close _V0iter__lambda_lambda166))
V_CALL(VGetArg(upenv, 13-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_lambda166, env)})
    );
 }
}
static void _V0to__functions_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k507, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k508) (bruijn iter-lambda 5 6) (close _V0iter__lambda_lambda165))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k508, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_lambda165, env)})
    );
 }
}
static void _V0lift__literal_k684(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k684, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k684, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1275 9 0) (##inline ##sys.cons (quote ##string) (##inline ##sys.cons (bruijn ##x.1284 0 0) (quote ()))))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VInlineCons(
VEncodePointer(&_V10string.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0lift__literal_k689(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k689, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k689, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1275 13 0) (##inline ##sys.cons (quote ##string) (##inline ##sys.cons (bruijn ##x.1287 0 0) (quote ()))))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VInlineCons(
VEncodePointer(&_V10string.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0lift__literal_k688(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k688, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k688, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 24 44) (close _V0lift__literal_k689) (bruijn literal-table 17 4))
V_CALL(VGetArg(upenv, 24-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k689, env)}),
      VGetArg(upenv, 17-1, 4)
    );
 }
}
static void _V0lift__literal_k687(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k687, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k687, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0lift__literal_k688) (bruijn literal-table 16 4) (bruijn ##x.1288 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k688, env)}),
      VEncodeInt(16l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0lift__literal_k686(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k686, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k686, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 22 50) (close _V0lift__literal_k687) (bruijn ##x.1289 0 0) (bruijn literal-table 15 4))
V_CALL(VGetArg(upenv, 22-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k687, env)}),
      _var0,
      VGetArg(upenv, 15-1, 4)
    );
 }
}
static void _V0lift__literal_k685(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k685, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k685, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 21 50) (close _V0lift__literal_k686) (bruijn x 9 1) (bruijn ##x.1290 0 0))
V_CALL(VGetArg(upenv, 21-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k686, env)}),
      VGetArg(upenv, 9-1, 1),
      _var0
    );
 }
}
static void _V0lift__literal_k683(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k683, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k683, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn lookup 0 0) ((bruijn cdr 20 30) (close _V0lift__literal_k684) (bruijn lookup 0 0)) ((bruijn gensym 20 43) (close _V0lift__literal_k685) (##string ##string.1686)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k684, env)}),
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k685, env)}),
      VEncodePointer(&_V10string_D1686.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lift__literal_k695(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k695, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k695, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.1294 2 0) (bruijn literal-table 18 4) (bruijn ##x.1295 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->up->vars[0],
      VEncodeInt(18l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0lift__literal_k694(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k694, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k694, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 24 50) (close _V0lift__literal_k695) (bruijn ##x.1296 0 0) (bruijn literal-table 17 4))
V_CALL(VGetArg(upenv, 24-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k695, env)}),
      _var0,
      VGetArg(upenv, 17-1, 4)
    );
 }
}
static void _V0lift__literal_k693(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k693, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k693, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1293 1 0) ((bruijn cons 23 50) (close _V0lift__literal_k694) (bruijn x 11 1) (quote ())) ((bruijn ##k.1294 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 23-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k694, env)}),
      VGetArg(upenv, 11-1, 1),
      VNULL
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0lift__literal_k696(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k696, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k696, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1275 11 0) (bruijn x 11 1))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0lift__literal_k692(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k692, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k692, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0lift__literal_k693) (close _V0lift__literal_k696))
V_CALL_FUNC(_V0lift__literal_k693, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k696, env)})
    );
 }
}
static void _V0lift__literal_k691(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k691, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k691, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 21 39) (close _V0lift__literal_k692) (bruijn ##x.1297 0 0))
V_CALL(VGetArg(upenv, 21-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k692, env)}),
      _var0
    );
 }
}
static void _V0lift__literal_k690(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k690, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k690, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1291 0 0) ((bruijn assv 20 42) (close _V0lift__literal_k691) (bruijn x 8 1) (bruijn literal-table 13 4)) ((bruijn error 20 37) (bruijn ##k.1275 8 0) (##string ##string.1674) (bruijn x 8 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k691, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 13-1, 4)
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 37), runtime,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10string_D1674.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1)
    );
}
 }
}
static void _V0lift__literal_k682(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k682, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k682, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1282 0 0) ((bruijn assoc 19 45) (close _V0lift__literal_k683) (bruijn x 7 1) (bruijn literal-table 12 4)) ((bruijn symbol? 19 15) (close _V0lift__literal_k690) (bruijn x 7 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k683, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 12-1, 4)
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k690, env)}),
      VGetArg(upenv, 7-1, 1)
    );
}
 }
}
static void _V0lift__literal_k681(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k681, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k681, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1281 0 0) ((bruijn ##k.1275 6 0) (bruijn x 6 1)) ((bruijn string? 18 11) (close _V0lift__literal_k682) (bruijn x 6 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 6-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k682, env)}),
      VGetArg(upenv, 6-1, 1)
    );
}
 }
}
static void _V0lift__literal_k680(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k680, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k680, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1280 0 0) ((bruijn ##k.1275 5 0) (bruijn x 5 1)) ((bruijn null? 17 38) (close _V0lift__literal_k681) (bruijn x 5 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VGetArg(upenv, 5-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 17-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k681, env)}),
      VGetArg(upenv, 5-1, 1)
    );
}
 }
}
static void _V0lift__literal_k679(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k679, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k679, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1279 0 0) ((bruijn ##k.1275 4 0) (bruijn x 4 1)) ((bruijn eq? 16 7) (close _V0lift__literal_k680) (bruijn x 4 1) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k680, env)}),
      upenv->up->up->up->vars[1],
      VEncodeBool(false)
    );
}
 }
}
static void _V0lift__literal_k678(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k678, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k678, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1278 0 0) ((bruijn ##k.1275 3 0) (bruijn x 3 1)) ((bruijn eq? 15 7) (close _V0lift__literal_k679) (bruijn x 3 1) #t))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k679, env)}),
      upenv->up->up->vars[1],
      VEncodeBool(true)
    );
}
 }
}
static void _V0lift__literal_k677(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k677, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k677, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1277 0 0) ((bruijn ##k.1275 2 0) (bruijn x 2 1)) ((bruijn char? 14 8) (close _V0lift__literal_k678) (bruijn x 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 14-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k678, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0lift__literal_k676(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k676, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k676, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1276 0 0) ((bruijn ##k.1275 1 0) (bruijn x 1 1)) ((bruijn number? 13 9) (close _V0lift__literal_k677) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 13-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k677, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0lift__literal_lambda170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0lift__literal_lambda170, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_lambda170, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn integer? 12 10) (close _V0lift__literal_k676) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 12-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k676, env)}),
      _var1
    );
 }
}
static void _V0to__functions_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k506, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k507) (bruijn lift-literal 4 5) (close _V0lift__literal_lambda170))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k507, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_lambda170, env)})
    );
 }
}
static void _V0to__functions_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k506) (bruijn literal-table 3 4) (quote ()))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k506, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VNULL
    );
 }
}
static void _V0to__functions_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k504, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k505) (bruijn functions 2 3) (quote ()))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k505, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VNULL
    );
 }
}
static void _V0gencont_k699(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gencont_k699, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_k699, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 12 41) (bruijn ##k.1298 3 0) (bruijn ##x.1300 0 0))
V_CALL(VGetArg(upenv, 12-1, 41), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0gencont_k698(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gencont_k698, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_k698, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn sprintf 11 27) (close _V0gencont_k699) (##string ##string.1687) (bruijn fun 2 1) (bruijn curcont 10 4))
V_CALL(VGetArg(upenv, 11-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_k699, env)}),
      VEncodePointer(&_V10string_D1687.sym, VPOINTER_OTHER),
      upenv->up->vars[1],
      VGetArg(upenv, 10-1, 4)
    );
 }
}
static void _V0gencont_k697(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gencont_k697, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_k697, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0gencont_k698) (bruijn curcont 9 4) (bruijn ##x.1301 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_k698, env)}),
      VEncodeInt(9l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0gencont_lambda171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0gencont_lambda171, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_lambda171, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn + 9 22) (close _V0gencont_k697) (bruijn curcont 8 4) 1)
V_CALL(VGetArg(upenv, 9-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_k697, env)}),
      VGetArg(upenv, 8-1, 4),
      VEncodeInt(1l)
    );
 }
}
static void _V0to__functions_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k503, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k504) (bruijn gencont 1 2) (close _V0gencont_lambda171))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k504, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_lambda171, env)})
    );
 }
}
static void _V0genlambda_k702(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0genlambda_k702, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_k702, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 11 41) (bruijn ##k.1302 3 0) (bruijn ##x.1304 0 0))
V_CALL(VGetArg(upenv, 11-1, 41), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0genlambda_k701(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0genlambda_k701, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_k701, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn sprintf 10 27) (close _V0genlambda_k702) (##string ##string.1688) (bruijn fun 2 1) (bruijn curlambda 9 3))
V_CALL(VGetArg(upenv, 10-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_k702, env)}),
      VEncodePointer(&_V10string_D1688.sym, VPOINTER_OTHER),
      upenv->up->vars[1],
      VGetArg(upenv, 9-1, 3)
    );
 }
}
static void _V0genlambda_k700(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0genlambda_k700, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_k700, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0genlambda_k701) (bruijn curlambda 8 3) (bruijn ##x.1305 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_k701, env)}),
      VEncodeInt(8l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0genlambda_lambda172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0genlambda_lambda172, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_lambda172, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn + 8 22) (close _V0genlambda_k700) (bruijn curlambda 7 3) 1)
V_CALL(VGetArg(upenv, 8-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_k700, env)}),
      VGetArg(upenv, 7-1, 3),
      VEncodeInt(1l)
    );
 }
}
static void _V0to__functions_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13) {
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda106, runtime, upenv, 14, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13) {
  struct { VEnv env; VWORD argv[14]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 14; env->var_len = 14; env->up = upenv;
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
  // (set! (close _V0to__functions_k503) (bruijn genlambda 0 1) (close _V0genlambda_lambda172))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k503, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_lambda172, env)})
    );
 }
}
static void _V0to__functions_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__functions_lambda106) (bruijn ##k.911 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(_V0to__functions_lambda106, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void transpile_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close transpile_k62) (bruijn to-functions 4 5) (close _V0to__functions_lambda105))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k62, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda105, env)})
    );
 }
}
static void transpile_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close transpile_k61) (bruijn curcont 3 4) 0)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k61, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeInt(0l)
    );
 }
}
static void transpile_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close transpile_k60) (bruijn curlambda 2 3) 0)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k60, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeInt(0l)
    );
 }
}
static void _V0bruijn__ify_k711(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k711, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k711, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.40 6 1) (bruijn ##k.1317 4 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.43 2 0)) (##inline ##sys.cons (bruijn ##x.1326 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
upenv->up->vars[0]
    )
,
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0bruijn__ify_k710(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k710, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k710, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.44 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.44 0 0))) ((bruijn doit 11 5) (close _V0bruijn__ify_k711) (##inline ##sys.car (bruijn ##expr.44 0 0))) ((bruijn ##k.1317 3 0) #f)) ((bruijn ##k.1317 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 11-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k711, env)}),
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__ify_k709(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k709, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k709, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.43 0 0)) ((close _V0bruijn__ify_k710) (##inline ##sys.cdr (bruijn ##expr.43 0 0))) ((bruijn ##k.1317 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0bruijn__ify_k710, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__ify_k708(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k708, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k708, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1319 0 0) ((close _V0bruijn__ify_k709) (##inline ##sys.cdr (bruijn ##expr.42 1 1))) ((bruijn ##k.1317 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0bruijn__ify_k709, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__ify_lambda177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda177, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.42 0 1)) ((bruijn equal? 12 28) (close _V0bruijn__ify_k708) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.42 0 1))) ((bruijn ##k.1317 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 12-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k708, env)}),
      VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__ify_k713(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k713, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k713, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.40 3 1) (bruijn ##k.1314 2 0) (bruijn ##x.1316 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0bruijn__ify_k712(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k712, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k712, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn doit 8 5) (close _V0bruijn__ify_k713) (bruijn expr 9 1))
V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k713, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0bruijn__ify_lambda176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda176, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__ify_lambda177) (close _V0bruijn__ify_k712) (bruijn ##input.41 0 1))
V_CALL_FUNC(_V0bruijn__ify_lambda177, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k712, env)}),
      _var1
    );
 }
}
static void _V0bruijn__ify_lambda175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__ify_lambda175, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda175, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__ify_lambda176) (bruijn ##k.1313 0 0) (bruijn expr 7 1))
V_CALL_FUNC(_V0bruijn__ify_lambda176, env, runtime,
      _var0,
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0bruijn__ify_k707(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k707, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k707, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 9 29) (bruijn ##k.1307 5 0) (close _V0bruijn__ify_lambda175))
V_CALL(VGetArg(upenv, 9-1, 29), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_lambda175, env)})
    );
 }
}
static void _V0doit_lambda178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0doit_lambda178, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0doit_lambda178, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 5 4) (bruijn ##k.1329 0 0) (quote ()) (bruijn expr 0 1))
V_CALL(VGetArg(upenv, 5-1, 4), runtime,
      _var0,
      VNULL,
      _var1
    );
 }
}
static void _V0bruijn__ify_k706(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k706, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k706, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0bruijn__ify_k707) (bruijn doit 4 5) (close _V0doit_lambda178))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k707, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0doit_lambda178, env)})
    );
 }
}
static void _V0iter_k716(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k716, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k716, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1429 1 0) (##inline ##sys.car (bruijn ##expr.16 4 0)) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCar(
upenv->up->up->up->vars[0]
    )
,
      VNULL
    );
 }
}
static void _V0loop_k718(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k718, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k718, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.19 4 1) (bruijn ##k.1440 1 0) (bruijn ##expr.21 2 1) (bruijn ##x.1441 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k717(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k717, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k717, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.21 1 1))) ((bruijn reverse 18 40) (close _V0loop_k718) (bruijn ##xs.18 1 2)) ((bruijn ##k.1440 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 18-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k718, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k721(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k721, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k721, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.19 7 1) (bruijn ##k.1434 2 0) (bruijn ##expr.21 5 1) (bruijn ##x.1436 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k720(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k720, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k720, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 21 40) (close _V0loop_k721) (bruijn ##xs.18 4 2))
V_CALL(VGetArg(upenv, 21-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k721, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda188, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda188, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.20 0 1) (close _V0loop_k720) (##inline ##sys.cdr (bruijn ##expr.21 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.21 3 1)) (bruijn ##xs.18 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k720, env)}),
      VInlineCdr(
upenv->up->up->vars[1]
    )
,
      VInlineCons(
VInlineCar(
upenv->up->up->vars[1]
    )
,
      upenv->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_lambda187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 29) (bruijn ##k.1433 0 0) (close _V0loop_lambda188))
V_CALL(VGetArg(upenv, 19-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda188, env)})
    );
 }
}
static void _V0loop_k719(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k719, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k719, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 18 17) (bruijn ##k.1431 1 0) (close _V0loop_lambda187) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 18-1, 17), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda187, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda186, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda186, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k717) (close _V0loop_k719))
V_CALL_FUNC(_V0loop_k717, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k719, env)})
    );
 }
}
static void _V0iter_lambda185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda185, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter_k716) (bruijn loop 0 1) (close _V0loop_lambda186))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k716, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda186, env)})
    );
 }
}
static void _V0iter_lambda184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda184, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda184, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda185) (bruijn ##k.1428 0 0) #f)
V_CALL_FUNC(_V0iter_lambda185, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0iter_lambda183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_lambda183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 14 29) (bruijn ##k.1427 0 0) (close _V0iter_lambda184))
V_CALL(VGetArg(upenv, 14-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda184, env)})
    );
 }
}
static void _V0iter_k725(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k725, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k725, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 9 1) (bruijn ##k.1443 4 0) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ##x.1449 2 0) (##inline ##sys.cons (bruijn ##x.1451 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0iter_k724(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k724, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k724, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 13 4) (close _V0iter_k725) (bruijn ##x.1452 0 0) (##inline ##sys.car (bruijn ##expr.22 2 0)))
V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k725, env)}),
      _var0,
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0iter_k723(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k723, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k723, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 16 50) (close _V0iter_k724) (bruijn xs 2 2) (bruijn env 8 1))
V_CALL(VGetArg(upenv, 16-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k724, env)}),
      upenv->up->vars[2],
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0iter_k722(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k722, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k722, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 0 0))) ((bruijn length 15 33) (close _V0iter_k723) (bruijn xs 1 2)) ((bruijn ##k.1443 1 0) #f)) ((bruijn ##k.1443 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 15-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k723, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda189, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda189, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0iter_k722) (##inline ##sys.cdr (bruijn ##expr.16 1 0))) ((bruijn ##k.1443 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL_FUNC(_V0iter_k722, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k715(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k715, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k715, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.16 0 0)) ((bruijn call-with-values 13 17) (bruijn ##k.1423 2 0) (close _V0iter_lambda183) (close _V0iter_lambda189)) ((bruijn ##k.1423 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 17), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda183, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda189, env)})
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k714(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k714, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k714, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1425 0 0) ((close _V0iter_k715) (##inline ##sys.cdr (bruijn ##expr.15 1 1))) ((bruijn ##k.1423 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter_k715, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda182, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.15 0 1)) ((bruijn equal? 11 28) (close _V0iter_k714) (quote lambda) (##inline ##sys.car (bruijn ##expr.15 0 1))) ((bruijn ##k.1423 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 11-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k714, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k734(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k734, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k734, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 11 1) (bruijn ##k.1407 8 0) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ##x.1415 2 0) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.1418 0 0) (quote ()))))))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0iter_k733(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k733, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k733, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 15 4) (close _V0iter_k734) (bruijn ##x.1419 0 0) (##inline ##sys.car (bruijn ##expr.25 4 0)))
V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k734, env)}),
      _var0,
      VInlineCar(
upenv->up->up->up->vars[0]
    )

    );
 }
}
static void _V0iter_k732(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k732, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k732, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 18 50) (close _V0iter_k733) (bruijn proper-xs 2 0) (bruijn env 10 1))
V_CALL(VGetArg(upenv, 18-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k733, env)}),
      upenv->up->vars[0],
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0iter_k731(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k731, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k731, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 17 24) (close _V0iter_k732) (bruijn ##x.1420 0 0) 1)
V_CALL(VGetArg(upenv, 17-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k732, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0iter_k730(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k730, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k730, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 16 33) (close _V0iter_k731) (bruijn proper-xs 0 0))
V_CALL(VGetArg(upenv, 16-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k731, env)}),
      _var0
    );
 }
}
static void _V0iter_k729(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k729, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k729, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.25 0 0))) ((bruijn undot 11 2) (close _V0iter_k730) (##inline ##sys.car (bruijn ##expr.24 1 0))) ((bruijn ##k.1407 3 0) #f)) ((bruijn ##k.1407 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k730, env)}),
      VInlineCar(
upenv->vars[0]
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k728(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k728, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k728, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.24 0 0)) ((close _V0iter_k729) (##inline ##sys.cdr (bruijn ##expr.24 0 0))) ((bruijn ##k.1407 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter_k729, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k727(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k727, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k727, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1409 0 0) ((close _V0iter_k728) (##inline ##sys.cdr (bruijn ##expr.23 1 1))) ((bruijn ##k.1407 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter_k728, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda190, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.23 0 1)) ((bruijn equal? 12 28) (close _V0iter_k727) (quote lambda) (##inline ##sys.car (bruijn ##expr.23 0 1))) ((bruijn ##k.1407 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 12-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k727, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k737(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k737, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k737, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 6 1) (bruijn ##k.1400 2 0) (##inline ##sys.cons (quote case-lambda) (bruijn ##x.1404 0 0)))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      _var0
    )

    );
 }
}
static void _V0iter_lambda192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda192, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda192, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn bruijn-lambda 11 3) (bruijn ##k.1405 0 0) (bruijn env 7 1) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 11-1, 3), runtime,
      _var0,
      VGetArg(upenv, 7-1, 1),
      _var1
    );
 }
}
static void _V0iter_k736(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k736, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k736, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1402 0 0) ((bruijn map 14 26) (close _V0iter_k737) (close _V0iter_lambda192) (##inline ##sys.cdr (bruijn ##expr.26 1 1))) ((bruijn ##k.1400 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k737, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda192, env)}),
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda191, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 1)) ((bruijn equal? 13 28) (close _V0iter_k736) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.26 0 1))) ((bruijn ##k.1400 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k736, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k745(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k745, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k745, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 12 1) (bruijn ##k.1383 7 0) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (quote 1) (##inline ##sys.cons (bruijn ##x.1394 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodeInt(1l),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0iter_k744(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k744, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k744, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 16 4) (close _V0iter_k745) (bruijn ##x.1395 0 0) (##inline ##sys.car (bruijn ##expr.30 2 0)))
V_CALL(VGetArg(upenv, 16-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k745, env)}),
      _var0,
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0iter_k743(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k743, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k743, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 19 50) (close _V0iter_k744) (bruijn ##x.1396 0 0) (bruijn env 11 1))
V_CALL(VGetArg(upenv, 19-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k744, env)}),
      _var0,
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0iter_k742(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k742, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k742, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.30 0 0))) ((bruijn list 18 51) (close _V0iter_k743) (##inline ##sys.car (bruijn ##expr.29 1 0))) ((bruijn ##k.1383 4 0) #f)) ((bruijn ##k.1383 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 18-1, 51), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k743, env)}),
      VInlineCar(
upenv->vars[0]
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k741(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k741, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k741, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.29 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.29 0 0))) ((close _V0iter_k742) (##inline ##sys.cdr (bruijn ##expr.28 1 0))) ((bruijn ##k.1383 3 0) #f)) ((bruijn ##k.1383 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0iter_k742, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k740(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k740, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k740, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 0)) ((close _V0iter_k741) (##inline ##sys.car (bruijn ##expr.28 0 0))) ((bruijn ##k.1383 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter_k741, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k739(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k739, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k739, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1385 0 0) ((close _V0iter_k740) (##inline ##sys.cdr (bruijn ##expr.27 1 1))) ((bruijn ##k.1383 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter_k740, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda193, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 1)) ((bruijn equal? 14 28) (close _V0iter_k739) (quote continuation) (##inline ##sys.car (bruijn ##expr.27 0 1))) ((bruijn ##k.1383 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k739, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k747(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k747, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k747, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1381 0 0) ((bruijn ##kk.13 7 1) (bruijn ##k.1379 1 0) (bruijn expr 8 2)) ((bruijn ##k.1379 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 8-1, 2)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda194, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 1)) ((bruijn equal? 15 28) (close _V0iter_k747) (quote quote) (##inline ##sys.car (bruijn ##expr.31 0 1))) ((bruijn ##k.1379 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 15-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k747, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k751(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k751, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k751, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 10 1) (bruijn ##k.1370 3 0) (##inline ##sys.cons (quote ##inline) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.33 1 0)) (bruijn ##x.1376 0 0))))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
upenv->vars[0]
    )
,
      _var0
    )

    )

    );
 }
}
static void _V0iter_lambda196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda196, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda196, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 15 4) (bruijn ##k.1377 0 0) (bruijn env 11 1) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      _var0,
      VGetArg(upenv, 11-1, 1),
      _var1
    );
 }
}
static void _V0iter_k750(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k750, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k750, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.33 0 0)) ((bruijn map 18 26) (close _V0iter_k751) (close _V0iter_lambda196) (##inline ##sys.cdr (bruijn ##expr.33 0 0))) ((bruijn ##k.1370 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k751, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda196, env)}),
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k749(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k749, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k749, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1372 0 0) ((close _V0iter_k750) (##inline ##sys.cdr (bruijn ##expr.32 1 1))) ((bruijn ##k.1370 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter_k750, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda195, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 1)) ((bruijn equal? 16 28) (close _V0iter_k749) (quote ##inline) (##inline ##sys.car (bruijn ##expr.32 0 1))) ((bruijn ##k.1370 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k749, env)}),
      VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k753(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k753, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k753, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1350 1 0) (##inline ##sys.cdr (bruijn ##expr.34 4 1)) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->up->up->up->vars[1]
    )
,
      VNULL
    );
 }
}
static void _V0loop_k755(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k755, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k755, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.37 4 1) (bruijn ##k.1361 1 0) (bruijn ##expr.39 2 1) (bruijn ##x.1362 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k754(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k754, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k754, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.39 1 1))) ((bruijn reverse 22 40) (close _V0loop_k755) (bruijn ##xs.36 1 2)) ((bruijn ##k.1361 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 22-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k755, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k758(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k758, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k758, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.37 7 1) (bruijn ##k.1355 2 0) (bruijn ##expr.39 5 1) (bruijn ##x.1357 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k757(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k757, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k757, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 25 40) (close _V0loop_k758) (bruijn ##xs.36 4 2))
V_CALL(VGetArg(upenv, 25-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k758, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda203, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda203, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.38 0 1) (close _V0loop_k757) (##inline ##sys.cdr (bruijn ##expr.39 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.39 3 1)) (bruijn ##xs.36 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k757, env)}),
      VInlineCdr(
upenv->up->up->vars[1]
    )
,
      VInlineCons(
VInlineCar(
upenv->up->up->vars[1]
    )
,
      upenv->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_lambda202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 23 29) (bruijn ##k.1354 0 0) (close _V0loop_lambda203))
V_CALL(VGetArg(upenv, 23-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda203, env)})
    );
 }
}
static void _V0loop_k756(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k756, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k756, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 22 17) (bruijn ##k.1352 1 0) (close _V0loop_lambda202) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 22-1, 17), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda202, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda201, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda201, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k754) (close _V0loop_k756))
V_CALL_FUNC(_V0loop_k754, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k756, env)})
    );
 }
}
static void _V0iter_lambda200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda200, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter_k753) (bruijn loop 0 1) (close _V0loop_lambda201))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k753, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda201, env)})
    );
 }
}
static void _V0iter_lambda199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda199, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda199, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda200) (bruijn ##k.1349 0 0) #f)
V_CALL_FUNC(_V0iter_lambda200, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0iter_lambda198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_lambda198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 18 29) (bruijn ##k.1348 0 0) (close _V0iter_lambda199))
V_CALL(VGetArg(upenv, 18-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda199, env)})
    );
 }
}
static void _V0iter_k761(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k761, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k761, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 12 1) (bruijn ##k.1364 3 0) (bruijn ##x.1366 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k760(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k760, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k760, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 20 50) (close _V0iter_k761) (bruijn ##x.1367 1 0) (bruijn ##x.1368 0 0))
V_CALL(VGetArg(upenv, 20-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k761, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0iter_lambda205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda205, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda205, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 16 4) (bruijn ##k.1369 0 0) (bruijn env 12 1) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 16-1, 4), runtime,
      _var0,
      VGetArg(upenv, 12-1, 1),
      _var1
    );
 }
}
static void _V0iter_k759(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k759, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k759, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 19 26) (close _V0iter_k760) (close _V0iter_lambda205) (bruijn xs 1 2))
V_CALL(VGetArg(upenv, 19-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k760, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda205, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0iter_lambda204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda204, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda204, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn iter 14 4) (close _V0iter_k759) (bruijn env 10 1) (##inline ##sys.car (bruijn ##expr.34 1 1))) ((bruijn ##k.1364 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k759, env)}),
      VGetArg(upenv, 10-1, 1),
      VInlineCar(
upenv->vars[1]
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda197, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.34 0 1)) ((bruijn call-with-values 17 17) (bruijn ##k.1346 0 0) (close _V0iter_lambda198) (close _V0iter_lambda204)) ((bruijn ##k.1346 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda198, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda204, env)})
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k764(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k764, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k764, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1344 1 0) ((bruijn lookup 16 1) (bruijn ##k.1345 0 0) 0 (bruijn env 12 1) (bruijn x 2 1)) ((bruijn ##k.1345 0 0) (bruijn x 2 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 12-1, 1),
      upenv->up->vars[1]
    );
} else {
V_CALL(_var0, runtime,
      upenv->up->vars[1]
    );
}
 }
}
static void _V0iter_k765(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k765, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k765, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 11 1) (bruijn ##k.1342 2 0) (bruijn ##x.1343 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k763(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k763, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k763, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_k764) (close _V0iter_k765))
V_CALL_FUNC(_V0iter_k764, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k765, env)})
    );
 }
}
static void _V0iter_lambda206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda206, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 18 15) (close _V0iter_k763) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 18-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k763, env)}),
      _var1
    );
 }
}
static void _V0iter_k767(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k767, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k767, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 10 1) (bruijn ##k.1332 9 0) (bruijn ##x.1341 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0
    );
 }
}
static void _V0iter_k766(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k766, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k766, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 18 37) (close _V0iter_k767) (##string ##string.1689) (bruijn expr 10 2))
V_CALL(VGetArg(upenv, 18-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k767, env)}),
      VEncodePointer(&_V10string_D1689.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 2)
    );
 }
}
static void _V0iter_k762(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k762, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k762, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda206) (close _V0iter_k766) (bruijn ##input.14 7 1))
V_CALL_FUNC(_V0iter_lambda206, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k766, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0iter_k752(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k752, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k752, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda197) (close _V0iter_k762) (bruijn ##input.14 6 1))
V_CALL_FUNC(_V0iter_lambda197, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k762, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0iter_k748(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k748, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k748, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda195) (close _V0iter_k752) (bruijn ##input.14 5 1))
V_CALL_FUNC(_V0iter_lambda195, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k752, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0iter_k746(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k746, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k746, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda194) (close _V0iter_k748) (bruijn ##input.14 4 1))
V_CALL_FUNC(_V0iter_lambda194, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k748, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0iter_k738(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k738, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k738, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda193) (close _V0iter_k746) (bruijn ##input.14 3 1))
V_CALL_FUNC(_V0iter_lambda193, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k746, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0iter_k735(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k735, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k735, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda191) (close _V0iter_k738) (bruijn ##input.14 2 1))
V_CALL_FUNC(_V0iter_lambda191, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k738, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0iter_k726(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k726, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k726, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda190) (close _V0iter_k735) (bruijn ##input.14 1 1))
V_CALL_FUNC(_V0iter_lambda190, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k735, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter_lambda181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda181, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda182) (close _V0iter_k726) (bruijn ##input.14 0 1))
V_CALL_FUNC(_V0iter_lambda182, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k726, env)}),
      _var1
    );
 }
}
static void _V0iter_lambda180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda180, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda180, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda181) (bruijn ##k.1331 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0iter_lambda181, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0iter_lambda179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda179, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda179, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 8 29) (bruijn ##k.1330 0 0) (close _V0iter_lambda180))
V_CALL(VGetArg(upenv, 8-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda180, env)})
    );
 }
}
static void _V0bruijn__ify_k705(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k705, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k705, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0bruijn__ify_k706) (bruijn iter 3 4) (close _V0iter_lambda179))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k706, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda179, env)})
    );
 }
}
static void _V0bruijn__lambda_k768(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k768, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k768, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1476 1 0) (##inline ##sys.car (bruijn ##expr.4 4 1)) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCar(
upenv->up->up->up->vars[1]
    )
,
      VNULL
    );
 }
}
static void _V0loop_k770(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k770, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k770, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 4 1) (bruijn ##k.1487 1 0) (bruijn ##expr.9 2 1) (bruijn ##x.1488 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k769(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k769, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k769, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.9 1 1))) ((bruijn reverse 15 40) (close _V0loop_k770) (bruijn ##xs.6 1 2)) ((bruijn ##k.1487 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 15-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k770, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k773(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k773, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k773, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 7 1) (bruijn ##k.1481 2 0) (bruijn ##expr.9 5 1) (bruijn ##x.1483 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k772(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k772, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k772, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 18 40) (close _V0loop_k773) (bruijn ##xs.6 4 2))
V_CALL(VGetArg(upenv, 18-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k773, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda216, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda216, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.8 0 1) (close _V0loop_k772) (##inline ##sys.cdr (bruijn ##expr.9 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.9 3 1)) (bruijn ##xs.6 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k772, env)}),
      VInlineCdr(
upenv->up->up->vars[1]
    )
,
      VInlineCons(
VInlineCar(
upenv->up->up->vars[1]
    )
,
      upenv->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_lambda215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 16 29) (bruijn ##k.1480 0 0) (close _V0loop_lambda216))
V_CALL(VGetArg(upenv, 16-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda216, env)})
    );
 }
}
static void _V0loop_k771(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k771, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k771, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 15 17) (bruijn ##k.1478 1 0) (close _V0loop_lambda215) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 15-1, 17), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda215, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda214, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda214, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k769) (close _V0loop_k771))
V_CALL_FUNC(_V0loop_k769, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k771, env)})
    );
 }
}
static void _V0bruijn__lambda_lambda213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda213, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0bruijn__lambda_k768) (bruijn loop 0 1) (close _V0loop_lambda214))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k768, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda214, env)})
    );
 }
}
static void _V0bruijn__lambda_lambda212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda212, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda212, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__lambda_lambda213) (bruijn ##k.1475 0 0) #f)
V_CALL_FUNC(_V0bruijn__lambda_lambda213, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0bruijn__lambda_lambda211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 11 29) (bruijn ##k.1474 0 0) (close _V0bruijn__lambda_lambda212))
V_CALL(VGetArg(upenv, 11-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda212, env)})
    );
 }
}
static void _V0bruijn__lambda_k777(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k777, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k777, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.2 7 1) (bruijn ##k.1490 4 0) (##inline ##sys.cons (bruijn ##x.1495 2 0) (##inline ##sys.cons (bruijn ##x.1497 0 0) (quote ()))))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
upenv->up->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0bruijn__lambda_k776(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k776, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k776, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 10 4) (close _V0bruijn__lambda_k777) (bruijn ##x.1498 0 0) (##inline ##sys.car (bruijn ##expr.10 2 0)))
V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k777, env)}),
      _var0,
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0bruijn__lambda_k775(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k775, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k775, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 13 50) (close _V0bruijn__lambda_k776) (bruijn xs 2 2) (bruijn env 6 1))
V_CALL(VGetArg(upenv, 13-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k776, env)}),
      upenv->up->vars[2],
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0bruijn__lambda_k774(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k774, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k774, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.10 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.10 0 0))) ((bruijn length 12 33) (close _V0bruijn__lambda_k775) (bruijn xs 1 2)) ((bruijn ##k.1490 1 0) #f)) ((bruijn ##k.1490 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 12-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k775, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__lambda_lambda217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda217, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda217, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0bruijn__lambda_k774) (##inline ##sys.cdr (bruijn ##expr.4 1 1))) ((bruijn ##k.1490 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL_FUNC(_V0bruijn__lambda_k774, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__lambda_lambda210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda210, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 1)) ((bruijn call-with-values 10 17) (bruijn ##k.1472 0 0) (close _V0bruijn__lambda_lambda211) (close _V0bruijn__lambda_lambda217)) ((bruijn ##k.1472 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 10-1, 17), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda211, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda217, env)})
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__lambda_k784(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k784, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k784, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.2 9 1) (bruijn ##k.1460 6 0) (##inline ##sys.cons (bruijn ##x.1465 2 0) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.1468 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
upenv->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0_P.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0bruijn__lambda_k783(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k783, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k783, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 12 4) (close _V0bruijn__lambda_k784) (bruijn ##x.1469 0 0) (##inline ##sys.car (bruijn ##expr.12 4 0)))
V_CALL(VGetArg(upenv, 12-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k784, env)}),
      _var0,
      VInlineCar(
upenv->up->up->up->vars[0]
    )

    );
 }
}
static void _V0bruijn__lambda_k782(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k782, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k782, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 15 50) (close _V0bruijn__lambda_k783) (bruijn proper-xs 2 0) (bruijn env 8 1))
V_CALL(VGetArg(upenv, 15-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k783, env)}),
      upenv->up->vars[0],
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0bruijn__lambda_k781(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k781, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k781, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 14 24) (close _V0bruijn__lambda_k782) (bruijn ##x.1470 0 0) 1)
V_CALL(VGetArg(upenv, 14-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k782, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0bruijn__lambda_k780(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k780, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k780, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 13 33) (close _V0bruijn__lambda_k781) (bruijn proper-xs 0 0))
V_CALL(VGetArg(upenv, 13-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k781, env)}),
      _var0
    );
 }
}
static void _V0bruijn__lambda_k779(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k779, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k779, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.12 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.12 0 0))) ((bruijn undot 8 2) (close _V0bruijn__lambda_k780) (##inline ##sys.car (bruijn ##expr.11 1 1))) ((bruijn ##k.1460 1 0) #f)) ((bruijn ##k.1460 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
_var0
    )

    )
)) {
V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k780, env)}),
      VInlineCar(
upenv->vars[1]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__lambda_lambda218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda218, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.11 0 1)) ((close _V0bruijn__lambda_k779) (##inline ##sys.cdr (bruijn ##expr.11 0 1))) ((bruijn ##k.1460 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0bruijn__lambda_k779, env, runtime,
      VInlineCdr(
_var1
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__lambda_k785(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k785, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k785, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 11 37) (bruijn ##k.1457 2 0) (##string ##string.1599))
V_CALL(VGetArg(upenv, 11-1, 37), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1599.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0bruijn__lambda_k778(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k778, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k778, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0bruijn__lambda_lambda218) (close _V0bruijn__lambda_k785) (bruijn ##input.3 1 1))
V_CALL_FUNC(_V0bruijn__lambda_lambda218, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k785, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0bruijn__lambda_lambda209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda209, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__lambda_lambda210) (close _V0bruijn__lambda_k778) (bruijn ##input.3 0 1))
V_CALL_FUNC(_V0bruijn__lambda_lambda210, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k778, env)}),
      _var1
    );
 }
}
static void _V0bruijn__lambda_lambda208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda208, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda208, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__lambda_lambda209) (bruijn ##k.1456 0 0) (bruijn lamb 1 2))
V_CALL_FUNC(_V0bruijn__lambda_lambda209, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0bruijn__lambda_lambda207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda207, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda207, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 7 29) (bruijn ##k.1455 0 0) (close _V0bruijn__lambda_lambda208))
V_CALL(VGetArg(upenv, 7-1, 29), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda208, env)})
    );
 }
}
static void _V0bruijn__ify_k704(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k704, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k704, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0bruijn__ify_k705) (bruijn bruijn-lambda 2 3) (close _V0bruijn__lambda_lambda207))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k705, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda207, env)})
    );
 }
}
static void _V0undot_k789(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k789, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k789, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 10 50) (bruijn ##k.1500 4 0) (bruijn ##x.1502 2 0) (bruijn ##x.1503 0 0))
V_CALL(VGetArg(upenv, 10-1, 50), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0undot_k788(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k788, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k788, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn undot 5 2) (close _V0undot_k789) (bruijn ##x.1504 0 0))
V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k789, env)}),
      _var0
    );
 }
}
static void _V0undot_k787(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k787, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k787, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 8 30) (close _V0undot_k788) (bruijn lst 2 1))
V_CALL(VGetArg(upenv, 8-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k788, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0undot_k790(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k790, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k790, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1505 0 0) ((bruijn ##k.1500 2 0) (quote ())) ((bruijn cons 8 50) (bruijn ##k.1500 2 0) (bruijn lst 2 1) (quote ())))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VNULL
    );
} else {
V_CALL(VGetArg(upenv, 8-1, 50), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VNULL
    );
}
 }
}
static void _V0undot_k786(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k786, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k786, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1501 0 0) ((bruijn car 7 31) (close _V0undot_k787) (bruijn lst 1 1)) ((bruijn null? 7 38) (close _V0undot_k790) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k787, env)}),
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k790, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0undot_lambda219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0undot_lambda219, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_lambda219, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 6 52) (close _V0undot_k786) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 6-1, 52), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k786, env)}),
      _var1
    );
 }
}
static void _V0bruijn__ify_k703(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k703, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k703, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0bruijn__ify_k704) (bruijn undot 1 2) (close _V0undot_lambda219))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k704, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_lambda219, env)})
    );
 }
}
static void _V0lookup_lambda221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_lambda221, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn list 9 51) (bruijn ##k.1508 0 0) (quote bruijn) (bruijn x 4 3) (bruijn depth 4 1) (bruijn idx 0 1))
V_CALL(VGetArg(upenv, 9-1, 51), runtime,
      _var0,
      VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[3],
      upenv->up->up->up->vars[1],
      _var1
    );
 }
}
static void _V0lookup_k795(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k795, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k795, runtime, upenv, 1, argc, _var0) {
  // ((bruijn lookup 6 1) (bruijn ##k.1506 5 0) (bruijn ##x.1509 1 0) (bruijn ##x.1510 0 0) (bruijn x 5 3))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 3)
    );
 }
}
static void _V0lookup_k794(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k794, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k794, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 9 30) (close _V0lookup_k795) (bruijn env 4 2))
V_CALL(VGetArg(upenv, 9-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k795, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0lookup_k793(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k793, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k793, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##x.1 0 0) ((close _V0lookup_lambda221) (bruijn ##k.1506 3 0) (bruijn ##x.1 0 0)) ((bruijn + 8 22) (close _V0lookup_k794) 1 (bruijn depth 3 1)))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0lookup_lambda221, env, runtime,
      upenv->up->up->vars[0],
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 8-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k794, env)}),
      VEncodeInt(1l),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0lookup_lambda222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0lookup_lambda222, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_lambda222, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn eqv? 8 6) (bruijn ##k.1511 0 0) (bruijn x 3 3) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 8-1, 6), runtime,
      _var0,
      upenv->up->up->vars[3],
      _var1
    );
 }
}
static void _V0lookup_k792(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k792, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k792, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list-index 6 1) (close _V0lookup_k793) (close _V0lookup_lambda222) (bruijn ##x.1512 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k793, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_lambda222, env)}),
      _var0
    );
 }
}
static void _V0lookup_k791(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k791, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k791, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1507 0 0) ((bruijn ##k.1506 1 0) (bruijn x 1 3)) ((bruijn car 6 31) (close _V0lookup_k792) (bruijn env 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[3]
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k792, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0lookup_lambda220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0lookup_lambda220, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_lambda220, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 5 38) (close _V0lookup_k791) (bruijn env 0 2))
V_CALL(VGetArg(upenv, 5-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k791, env)}),
      _var2
    );
 }
}
static void _V0bruijn__ify_lambda174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda174, runtime, upenv, 6, argc, _var0, _var1, _var2, _var3, _var4, _var5) {
  struct { VEnv env; VWORD argv[6]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 6; env->var_len = 6; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  // (set! (close _V0bruijn__ify_k703) (bruijn lookup 0 1) (close _V0lookup_lambda220))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k703, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_lambda220, env)})
    );
 }
}
static void _V0bruijn__ify_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__ify_lambda173, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda173, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__ify_lambda174) (bruijn ##k.1306 0 0) #f #f #f #f #f)
V_CALL_FUNC(_V0bruijn__ify_lambda174, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void transpile_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close transpile_k59) (bruijn bruijn-ify 1 2) (close _V0bruijn__ify_lambda173))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k59, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_lambda173, env)})
    );
 }
}
static void _V0list__index_k796(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0list__index_k796, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__index_k796, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1514 1 0) (bruijn l 2 2) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k801(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k801, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k801, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.1516 5 0) (bruijn ##x.1519 1 0) (bruijn ##x.1520 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k800(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k800, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k800, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 8 22) (close _V0loop_k801) (bruijn i 4 2) 1)
V_CALL(VGetArg(upenv, 8-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k801, env)}),
      upenv->up->up->up->vars[2],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k799(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k799, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k799, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1518 0 0) ((bruijn ##k.1516 3 0) (bruijn i 3 2)) ((bruijn cdr 7 30) (close _V0loop_k800) (bruijn l 3 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k800, env)}),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0loop_k798(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k798, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k798, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn p 4 1) (close _V0loop_k799) (bruijn ##x.1521 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k799, env)}),
      _var0
    );
 }
}
static void _V0loop_k797(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k797, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k797, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1517 0 0) ((bruijn ##k.1516 1 0) #f) ((bruijn car 5 31) (close _V0loop_k798) (bruijn l 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k798, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda225, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda225, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 4 38) (close _V0loop_k797) (bruijn l 0 1))
V_CALL(upenv->up->up->up->vars[38], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k797, env)}),
      _var1
    );
 }
}
static void _V0list__index_lambda224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0list__index_lambda224, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0list__index_k796) (bruijn loop 0 1) (close _V0loop_lambda225))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__index_k796, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda225, env)})
    );
 }
}
static void _V0list__index_lambda223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0list__index_lambda223, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__index_lambda223, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0list__index_lambda224) (bruijn ##k.1513 0 0) #f)
V_CALL_FUNC(_V0list__index_lambda224, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void transpile_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 V_GC_CHECK2_VARARGS((VFunc)transpile_lambda3, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
  struct { VEnv env; VWORD argv[7]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 7; env->var_len = 7; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  // (set! (close transpile_k58) (bruijn list-index 0 1) (close _V0list__index_lambda223))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k58, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__index_lambda223, env)})
    );
 }
}
static void transpile_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45, VWORD _var46, VWORD _var47, VWORD _var48, VWORD _var49, VWORD _var50, VWORD _var51, VWORD _var52) {
 V_GC_CHECK2_VARARGS((VFunc)transpile_lambda2, runtime, upenv, 53, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37, _var38, _var39, _var40, _var41, _var42, _var43, _var44, _var45, _var46, _var47, _var48, _var49, _var50, _var51, _var52) {
  struct { VEnv env; VWORD argv[53]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 53; env->var_len = 53; env->up = upenv;
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
  env->vars[46] = _var46;
  env->vars[47] = _var47;
  env->vars[48] = _var48;
  env->vars[49] = _var49;
  env->vars[50] = _var50;
  env->vars[51] = _var51;
  env->vars[52] = _var52;
  // ((close transpile_lambda3) (bruijn ##k.245 0 0) #f #f #f #f #f #f)
V_CALL_FUNC(transpile_lambda3, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void transpile_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close transpile_lambda2) (bruijn ##k.244 57 0) (bruijn ##x.1522 51 0) (bruijn ##x.1523 50 0) (bruijn ##x.1524 49 0) (bruijn ##x.1525 48 0) (bruijn ##x.1526 47 0) (bruijn ##x.1527 46 0) (bruijn ##x.1528 45 0) (bruijn ##x.1529 44 0) (bruijn ##x.1530 43 0) (bruijn ##x.1531 42 0) (bruijn ##x.1532 41 0) (bruijn ##x.1533 40 0) (bruijn ##x.1534 39 0) (bruijn ##x.1535 38 0) (bruijn ##x.1536 37 0) (bruijn ##x.1537 36 0) (bruijn ##x.1538 35 0) (bruijn ##x.1539 34 0) (bruijn ##x.1540 33 0) (bruijn ##x.1541 32 0) (bruijn ##x.1542 31 0) (bruijn ##x.1543 30 0) (bruijn ##x.1544 29 0) (bruijn ##x.1545 28 0) (bruijn ##x.1546 27 0) (bruijn ##x.1547 26 0) (bruijn ##x.1548 25 0) (bruijn ##x.1549 24 0) (bruijn ##x.1550 23 0) (bruijn ##x.1551 22 0) (bruijn ##x.1552 21 0) (bruijn ##x.1553 20 0) (bruijn ##x.1554 19 0) (bruijn ##x.1555 18 0) (bruijn ##x.1556 17 0) (bruijn ##x.1557 16 0) (bruijn ##x.1558 15 0) (bruijn ##x.1559 14 0) (bruijn ##x.1560 13 0) (bruijn ##x.1561 12 0) (bruijn ##x.1562 11 0) (bruijn ##x.1563 10 0) (bruijn ##x.1564 9 0) (bruijn ##x.1565 8 0) (bruijn ##x.1566 7 0) (bruijn ##x.1567 6 0) (bruijn ##x.1568 5 0) (bruijn ##x.1569 4 0) (bruijn ##x.1570 3 0) (bruijn ##x.1571 2 0) (bruijn ##x.1572 1 0) (bruijn ##x.1573 0 0))
V_CALL_FUNC(transpile_lambda2, env, runtime,
      VGetArg(upenv, 57-1, 0),
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
      _var0
    );
 }
}
static void transpile_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 51 0) (close transpile_k57) (quote pair?))
V_CALL(VGetArg(upenv, 51-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k57, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 50 0) (close transpile_k56) (quote list))
V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k56, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 49 0) (close transpile_k55) (quote cons))
V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k55, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 48 0) (close transpile_k54) (quote apply))
V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k54, env)}),
      VEncodePointer(&_V0apply.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 47 0) (close transpile_k53) (quote values))
V_CALL(VGetArg(upenv, 47-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k53, env)}),
      VEncodePointer(&_V0values.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 46 0) (close transpile_k52) (quote set-car!))
V_CALL(VGetArg(upenv, 46-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k52, env)}),
      VEncodePointer(&_V0set__car_B.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 45 0) (close transpile_k51) (quote cadr))
V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k51, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 44 0) (close transpile_k50) (quote assoc))
V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k50, env)}),
      VEncodePointer(&_V0assoc.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 43 0) (close transpile_k49) (quote cdar))
V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k49, env)}),
      VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 42 0) (close transpile_k48) (quote gensym))
V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k48, env)}),
      VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 41 0) (close transpile_k47) (quote assv))
V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k47, env)}),
      VEncodePointer(&_V0assv.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 40 0) (close transpile_k46) (quote string->symbol))
V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k46, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 39 0) (close transpile_k45) (quote reverse))
V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k45, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 38 0) (close transpile_k44) (quote not))
V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k44, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 37 0) (close transpile_k43) (quote null?))
V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k43, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 36 0) (close transpile_k42) (quote error))
V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k42, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 35 0) (close transpile_k41) (quote for-each))
V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k41, env)}),
      VEncodePointer(&_V0for__each.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 34 0) (close transpile_k40) (quote displayln))
V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k40, env)}),
      VEncodePointer(&_V0displayln.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 33 0) (close transpile_k39) (quote iota))
V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k39, env)}),
      VEncodePointer(&_V0iota.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 32 0) (close transpile_k38) (quote length))
V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k38, env)}),
      VEncodePointer(&_V0length.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 31 0) (close transpile_k37) (quote printf))
V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k37, env)}),
      VEncodePointer(&_V0printf.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 30 0) (close transpile_k36) (quote car))
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k36, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 29 0) (close transpile_k35) (quote cdr))
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k35, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 0) (close transpile_k34) (quote call/cc))
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k34, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close transpile_k33) (quote equal?))
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k33, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close transpile_k32) (quote sprintf))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k32, env)}),
      VEncodePointer(&_V0sprintf.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close transpile_k31) (quote map))
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k31, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close transpile_k30) (quote cddr))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k30, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close transpile_k29) (quote -))
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k29, env)}),
      VEncodePointer(&_V0__.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close transpile_k28) (quote list-ref))
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k28, env)}),
      VEncodePointer(&_V0list__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close transpile_k27) (quote +))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k27, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close transpile_k26) (quote append))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k26, env)}),
      VEncodePointer(&_V0append.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close transpile_k25) (quote lookup-inline))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k25, env)}),
      VEncodePointer(&_V0lookup__inline.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close transpile_k24) (quote display))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k24, env)}),
      VEncodePointer(&_V0display.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close transpile_k23) (quote =))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k23, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close transpile_k22) (quote call-with-values))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k22, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close transpile_k21) (quote lookup-intrinsic2))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k21, env)}),
      VEncodePointer(&_V0lookup__intrinsic2.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close transpile_k20) (quote symbol?))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k20, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close transpile_k19) (quote symbol->string))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k19, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close transpile_k18) (quote mangle-symbol))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k18, env)}),
      VEncodePointer(&_V0mangle__symbol.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close transpile_k17) (quote string-length))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k17, env)}),
      VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close transpile_k16) (quote string?))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k16, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close transpile_k15) (quote integer?))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k15, env)}),
      VEncodePointer(&_V0integer_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close transpile_k14) (quote number?))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k14, env)}),
      VEncodePointer(&_V0number_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close transpile_k13) (quote char?))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k13, env)}),
      VEncodePointer(&_V0char_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close transpile_k12) (quote eq?))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k12, env)}),
      VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close transpile_k11) (quote eqv?))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k11, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close transpile_k10) (quote string-ref))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k10, env)}),
      VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close transpile_k9) (quote <))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k9, env)}),
      VEncodePointer(&_V0_L.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close transpile_k8) (quote close-port))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k8, env)}),
      VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close transpile_k7) (quote get-output-string))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k7, env)}),
      VEncodePointer(&_V0get__output__string.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close transpile_k6) (quote open-output-string))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k6, env)}),
      VEncodePointer(&_V0open__output__string.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close transpile_k5) (##string ##string.1690) (bruijn ##x.1574 3 0) (bruijn ##x.1575 2 0) (bruijn ##x.1576 1 0) (bruijn ##x.1577 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k5, env)}),
      VEncodePointer(&_V10string_D1690.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void transpile_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close transpile_k4) (##string ##string.1691))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k4, env)}),
      VEncodePointer(&_V10string_D1691.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close transpile_k3) (##string ##string.1692))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k3, env)}),
      VEncodePointer(&_V10string_D1692.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close transpile_k2) (##string ##string.1693))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k2, env)}),
      VEncodePointer(&_V10string_D1693.sym, VPOINTER_OTHER)
    );
 }
}
static void transpile_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to transpile_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)transpile_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close transpile_k1) (##string ##string.1694))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)transpile_k1, env)}),
      VEncodePointer(&_V10string_D1694.sym, VPOINTER_OTHER)
    );
 }
}
VFunc transpile = (VFunc)transpile_lambda1;
