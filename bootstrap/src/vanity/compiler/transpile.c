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
static struct { VBlob sym; char bytes[21]; } _V10string_D1867 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1866 = { { VSTRING, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1865 = { { VSTRING, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1864 = { { VSTRING, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1863 = { { VSTRING, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1862 = { { VSTRING, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1861 = { { VSTRING, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
static struct { VBlob sym; char bytes[19]; } _V0open__output__string = { { VSYMBOL, 19 }, "open-output-string" };
static struct { VBlob sym; char bytes[18]; } _V0get__output__string = { { VSYMBOL, 18 }, "get-output-string" };
static struct { VBlob sym; char bytes[11]; } _V0close__port = { { VSYMBOL, 11 }, "close-port" };
static struct { VBlob sym; char bytes[2]; } _V0_L = { { VSYMBOL, 2 }, "<" };
static struct { VBlob sym; char bytes[11]; } _V0string__ref = { { VSYMBOL, 11 }, "string-ref" };
static struct { VBlob sym; char bytes[4]; } _V0eq_Q = { { VSYMBOL, 4 }, "eq\?" };
static struct { VBlob sym; char bytes[6]; } _V0char_Q = { { VSYMBOL, 6 }, "char\?" };
static struct { VBlob sym; char bytes[8]; } _V0number_Q = { { VSYMBOL, 8 }, "number\?" };
static struct { VBlob sym; char bytes[9]; } _V0integer_Q = { { VSYMBOL, 9 }, "integer\?" };
static struct { VBlob sym; char bytes[5]; } _V0caar = { { VSYMBOL, 5 }, "caar" };
static struct { VBlob sym; char bytes[6]; } _V0cadar = { { VSYMBOL, 6 }, "cadar" };
static struct { VBlob sym; char bytes[14]; } _V0mangle__symbol = { { VSYMBOL, 14 }, "mangle-symbol" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[14]; } _V0string__length = { { VSYMBOL, 14 }, "string-length" };
static struct { VBlob sym; char bytes[15]; } _V0symbol___Gstring = { { VSYMBOL, 15 }, "symbol->string" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[5]; } _V0eqv_Q = { { VSYMBOL, 5 }, "eqv\?" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[18]; } _V0lookup__intrinsic2 = { { VSYMBOL, 18 }, "lookup-intrinsic2" };
static struct { VBlob sym; char bytes[17]; } _V0call__with__values = { { VSYMBOL, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[2]; } _V0_E = { { VSYMBOL, 2 }, "=" };
static struct { VBlob sym; char bytes[8]; } _V0display = { { VSYMBOL, 8 }, "display" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[14]; } _V0lookup__inline = { { VSYMBOL, 14 }, "lookup-inline" };
static struct { VBlob sym; char bytes[7]; } _V0append = { { VSYMBOL, 7 }, "append" };
static struct { VBlob sym; char bytes[9]; } _V0list__ref = { { VSYMBOL, 9 }, "list-ref" };
static struct { VBlob sym; char bytes[2]; } _V0__ = { { VSYMBOL, 2 }, "-" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[5]; } _V0cddr = { { VSYMBOL, 5 }, "cddr" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[8]; } _V0sprintf = { { VSYMBOL, 8 }, "sprintf" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[8]; } _V0call_Wcc = { { VSYMBOL, 8 }, "call/cc" };
static struct { VBlob sym; char bytes[7]; } _V0printf = { { VSYMBOL, 7 }, "printf" };
static struct { VBlob sym; char bytes[7]; } _V0length = { { VSYMBOL, 7 }, "length" };
static struct { VBlob sym; char bytes[5]; } _V0iota = { { VSYMBOL, 5 }, "iota" };
static struct { VBlob sym; char bytes[10]; } _V0displayln = { { VSYMBOL, 10 }, "displayln" };
static struct { VBlob sym; char bytes[23]; } _V0print__foreign__function = { { VSYMBOL, 23 }, "print-foreign-function" };
static struct { VBlob sym; char bytes[9]; } _V0for__each = { { VSYMBOL, 9 }, "for-each" };
static struct { VBlob sym; char bytes[15]; } _V0compiler__error = { { VSYMBOL, 15 }, "compiler-error" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[8]; } _V0reverse = { { VSYMBOL, 8 }, "reverse" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[5]; } _V0assv = { { VSYMBOL, 5 }, "assv" };
static struct { VBlob sym; char bytes[7]; } _V0gensym = { { VSYMBOL, 7 }, "gensym" };
static struct { VBlob sym; char bytes[5]; } _V0cdar = { { VSYMBOL, 5 }, "cdar" };
static struct { VBlob sym; char bytes[24]; } _V0mangle__foreign__function = { { VSYMBOL, 24 }, "mangle-foreign-function" };
static struct { VBlob sym; char bytes[6]; } _V0assoc = { { VSYMBOL, 6 }, "assoc" };
static struct { VBlob sym; char bytes[9]; } _V0set__car_B = { { VSYMBOL, 9 }, "set-car!" };
static struct { VBlob sym; char bytes[7]; } _V0values = { { VSYMBOL, 7 }, "values" };
static struct { VBlob sym; char bytes[6]; } _V0apply = { { VSYMBOL, 6 }, "apply" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1860 = { { VSTRING, 33 }, "bruijnify-pass: No matching case" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1859 = { { VSTRING, 12 }, "~A_lambda~A" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1858 = { { VSTRING, 7 }, "~A_k~A" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1857 = { { VSTRING, 38 }, "literal-lifting: unknown literal type" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1856 = { { VSTRING, 7 }, "string" };
static struct { VBlob sym; char bytes[13]; } _V0continuation = { { VSYMBOL, 13 }, "continuation" };
static struct { VBlob sym; char bytes[12]; } _V0case__lambda = { { VSYMBOL, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[7]; } _V0lambda = { { VSYMBOL, 7 }, "lambda" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1855 = { { VSTRING, 7 }, "global" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1854 = { { VSTRING, 27 }, "VLookupGlobalVarFast(\"~A\")" };
static struct { VBlob sym; char bytes[60]; } _V10string_D1853 = { { VSTRING, 60 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A,NULL)})" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1852 = { { VSTRING, 3 }, "\\\?" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1851 = { { VSTRING, 3 }, "\\b" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1850 = { { VSTRING, 3 }, "\\'" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1849 = { { VSTRING, 3 }, "\\\\" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1848 = { { VSTRING, 3 }, "\\r" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1847 = { { VSTRING, 3 }, "\\n" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1846 = { { VSTRING, 3 }, "\\t" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1845 = { { VSTRING, 3 }, "\\a" };
static struct { VBlob sym; char bytes[42]; } _V10string_D1844 = { { VSTRING, 42 }, "VEncodePointer(&_V40~A, VPOINTER_CLOSURE)" };
static struct { VBlob sym; char bytes[36]; } _V10string_D1843 = { { VSTRING, 36 }, "print-literal: unknown literal type" };
static struct { VBlob sym; char bytes[40]; } _V10string_D1842 = { { VSTRING, 40 }, "VEncodePointer(&~A.sym, VPOINTER_OTHER)" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1841 = { { VSTRING, 19 }, "VEncodeBool(false)" };
static struct { VBlob sym; char bytes[18]; } _V10string_D1840 = { { VSTRING, 18 }, "VEncodeBool(true)" };
static struct { VBlob sym; char bytes[18]; } _V10string_D1839 = { { VSTRING, 18 }, "VEncodeChar('~A')" };
static struct { VBlob sym; char bytes[18]; } _V10string_D1838 = { { VSTRING, 18 }, "VEncodeNumber(~A)" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1837 = { { VSTRING, 16 }, "VEncodeInt(~Al)" };
static struct { VBlob sym; char bytes[52]; } _V10string_D1836 = { { VSTRING, 52 }, "print-literal-table: unknown entry in literal table" };
static struct { VBlob sym; char bytes[73]; } _V10string_D1835 = { { VSTRING, 73 }, "VClosure _V40~A __attribute__((weak)) = { VCLOSURE, (VFunc)~A, NULL };~N" };
static struct { VBlob sym; char bytes[79]; } _V10string_D1834 = { { VSTRING, 79 }, "static struct { VBlob sym; char bytes[~A]; } ~A = { { VSTRING, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[94]; } _V10string_D1833 = { { VSTRING, 94 }, "struct { VBlob sym; char bytes[~A]; } ~A __attribute__((weak)) = { { VSYMBOL, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1832 = { { VSTRING, 22 }, "closes\?: unknown form" };
static struct { VBlob sym; char bytes[34]; } _V10string_D1831 = { { VSTRING, 34 }, "    V_CALL_FUNC(~A, NULL, runtime" };
static struct { VBlob sym; char bytes[8]; } _V10string_D1830 = { { VSTRING, 8 }, "V_CALL(" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1829 = { { VSTRING, 20 }, "V_CALL_FUNC(~A, env" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1828 = { { VSTRING, 10 }, ", runtime" };
static struct { VBlob sym; char bytes[57]; } _V10string_D1827 = { { VSTRING, 57 }, "    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,~N      " };
static struct { VBlob sym; char bytes[24]; } _V10string_D1826 = { { VSTRING, 24 }, "print-set: unknown form" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1825 = { { VSTRING, 38 }, "set!'s first argument is not a symbol" };
static struct { VBlob sym; char bytes[54]; } _V10string_D1824 = { { VSTRING, 54 }, "    V_CALL_FUNC(VSetGlobalVar2, env, runtime,~N      " };
static struct { VBlob sym; char bytes[10]; } _V10string_D1823 = { { VSTRING, 10 }, ",~N      " };
static struct { VBlob sym; char bytes[51]; } _V10string_D1822 = { { VSTRING, 51 }, "    V_CALL_FUNC(VSetEnvVar2, env, runtime,~N      " };
static struct { VBlob sym; char bytes[51]; } _V10string_D1821 = { { VSTRING, 51 }, ",~N      VEncodeInt(~Al), VEncodeInt(~Al),~N      " };
static struct { VBlob sym; char bytes[11]; } _V10string_D1820 = { { VSTRING, 11 }, "~N    );~N" };
static struct { VBlob sym; char bytes[14]; } _V10string_D1819 = { { VSTRING, 14 }, "~A(~N        " };
static struct { VBlob sym; char bytes[2]; } _V10string_D1818 = { { VSTRING, 2 }, ")" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1817 = { { VSTRING, 12 }, ",~N        " };
static struct { VBlob sym; char bytes[15]; } _V10string_D1816 = { { VSTRING, 15 }, "unknown inline" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1815 = { { VSTRING, 33 }, "print-expr: malformed expression" };
static struct { VBlob sym; char bytes[19]; } _V10foreign_Dfunction = { { VSYMBOL, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[61]; } _V10string_D1814 = { { VSTRING, 61 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, NULL)})" };
static struct { VBlob sym; char bytes[12]; } _V10intrinsic = { { VSYMBOL, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[9]; } _V10inline = { { VSYMBOL, 9 }, "##inline" };
static struct { VBlob sym; char bytes[7]; } _V0define = { { VSYMBOL, 7 }, "define" };
static struct { VBlob sym; char bytes[5]; } _V0set_B = { { VSYMBOL, 5 }, "set!" };
static struct { VBlob sym; char bytes[3]; } _V0if = { { VSYMBOL, 3 }, "if" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1813 = { { VSTRING, 16 }, "if(VDecodeBool(" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1812 = { { VSTRING, 5 }, ")) {" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1811 = { { VSTRING, 9 }, "} else {" };
static struct { VBlob sym; char bytes[7]; } _V0bruijn = { { VSYMBOL, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1810 = { { VSTRING, 25 }, "VGetArg(upenv, ~A-1, ~A)" };
static struct { VBlob sym; char bytes[28]; } _V10string_D1809 = { { VSTRING, 28 }, "upenv->up->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1808 = { { VSTRING, 24 }, "upenv->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1807 = { { VSTRING, 20 }, "upenv->up->vars[~A]" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1806 = { { VSTRING, 16 }, "upenv->vars[~A]" };
static struct { VBlob sym; char bytes[6]; } _V0close = { { VSYMBOL, 6 }, "close" };
static struct { VBlob sym; char bytes[60]; } _V10string_D1805 = { { VSTRING, 60 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, env)})" };
static struct { VBlob sym; char bytes[9]; } _V10string = { { VSYMBOL, 9 }, "##string" };
static struct { VBlob sym; char bytes[6]; } _V0quote = { { VSYMBOL, 6 }, "quote" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1804 = { { VSTRING, 6 }, "VNULL" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1803 = { { VSTRING, 7 }, "_var~A" };
static struct { VBlob sym; char bytes[58]; } _V10string_D1802 = { { VSTRING, 58 }, "static void ~A(VRuntime * runtime, VEnv * upenv, int argc" };
static struct { VBlob sym; char bytes[11]; } _V10string_D1801 = { { VSTRING, 11 }, ", VWORD ~A" };
static struct { VBlob sym; char bytes[57]; } _V10string_D1800 = { { VSTRING, 57 }, " V_GC_CHECK2_VARARGS((VFunc)~A, runtime, upenv, ~A, argc" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1799 = { { VSTRING, 5 }, ", ~A" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1798 = { { VSTRING, 10 }, "  // ~S~N" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1797 = { { VSTRING, 9 }, "_varargs" };
static struct { VBlob sym; char bytes[52]; } _V10string_D1796 = { { VSTRING, 52 }, "  struct { VEnv env; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1795 = { { VSTRING, 33 }, "  VEnv * env = &container.env;~N" };
static struct { VBlob sym; char bytes[77]; } _V10string_D1794 = { { VSTRING, 77 }, "  env->tag = VENV; env->num_vars = ~A; env->var_len = ~A; env->up = upenv;~N" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1793 = { { VSTRING, 24 }, "  env->vars[~A] = ~A;~N" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1792 = { { VSTRING, 30 }, "  env->vars[~A] = _varargs;~N" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1791 = { { VSTRING, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1790 = { { VSTRING, 16 }, ", _varargs) {~N" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1789 = { { VSTRING, 27 }, " VWORD _varargs = VNULL;~N" };
static struct { VBlob sym; char bytes[55]; } _V10string_D1788 = { { VSTRING, 55 }, " V_GATHER_VARARGS_VARIADIC(&_varargs, ~A, argc, ~A);~N" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1787 = { { VSTRING, 20 }, " if(argc != ~A) {~N" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1786 = { { VSTRING, 24 }, "  \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1785 = { { VSTRING, 19 }, " if(argc < ~A) {~N" };
static struct { VBlob sym; char bytes[52]; } _V10string_D1784 = { { VSTRING, 52 }, "  VError(\"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[32]; } _V10string_D1783 = { { VSTRING, 32 }, "  \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[13]; } _V10string_D1782 = { { VSTRING, 13 }, "  , argc);~N" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1781 = { { VSTRING, 5 }, " }~N" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1780 = { { VSTRING, 37 }, " static VDebugInfo dbg = { \"~A\" };~N" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1779 = { { VSTRING, 22 }, " VRecordCall(&dbg);~N" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1778 = { { VSTRING, 6 }, ", ..." };
static struct { VBlob sym; char bytes[23]; } _V10string_D1777 = { { VSTRING, 23 }, "__attribute__((used)) " };
static struct { VBlob sym; char bytes[14]; } _V10string_D1776 = { { VSTRING, 14 }, "_V20Case~A_~A" };
static struct { VBlob sym; char bytes[104]; } _V10string_D1775 = { { VSTRING, 104 }, "__attribute__((used)) static void _V20CaseError_~A(VRuntime * runtime, VEnv * upenv, int argc, ...) {~N" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1774 = { { VSTRING, 9 }, " // ~S~N" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1773 = { { VSTRING, 51 }, " VError(\"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[23]; } _V10string_D1772 = { { VSTRING, 23 }, " \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1771 = { { VSTRING, 31 }, " \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1770 = { { VSTRING, 12 }, " , argc);~N" };
static struct { VBlob sym; char bytes[4]; } _V10string_D1769 = { { VSTRING, 4 }, "}~N" };
static struct { VBlob sym; char bytes[60]; } _V10string_D1768 = { { VSTRING, 60 }, "void ~A(VRuntime * runtime, VEnv * upenv, int argc, ...);~N" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1767 = { { VSTRING, 7 }, "asm(~N" };
static struct { VBlob sym; char bytes[29]; } _V10string_D1766 = { { VSTRING, 29 }, "\".intel_syntax noprefix\\n\"~N" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1765 = { { VSTRING, 10 }, "\"~A:\\n\"~N" };
static struct { VBlob sym; char bytes[26]; } _V10string_D1764 = { { VSTRING, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1763 = { { VSTRING, 16 }, "\"    je ~A\\n\"~N" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1762 = { { VSTRING, 22 }, "\"    cmp edx, ~A\\n\"~N" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1761 = { { VSTRING, 17 }, "\"    jge ~A\\n\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1760 = { { VSTRING, 31 }, "\"    jmp _V20CaseError_~A\\n\"~N" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1759 = { { VSTRING, 5 }, ");~N" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1758 = { { VSTRING, 22 }, "void toplevel~A() {~N" };
static struct { VBlob sym; char bytes[23]; } _V10string_D1757 = { { VSTRING, 23 }, "    VEnv * env = NULL;" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1756 = { { VSTRING, 31 }, "    VRuntime * runtime = NULL;" };
static struct { VBlob sym; char bytes[36]; } _V10string_D1755 = { { VSTRING, 36 }, "print-foreign-declare: unknown form" };
static struct { VBlob sym; char bytes[28]; } _V10string_D1754 = { { VSTRING, 28 }, "print-declare: unknown form" };
static struct { VBlob sym; char bytes[16]; } _V10vcore_Ddeclare = { { VSYMBOL, 16 }, "##vcore.declare" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1753 = { { VSTRING, 24 }, "VFunc ~A = (VFunc)~A;~N" };
static struct { VBlob sym; char bytes[18]; } _V10foreign_Ddeclare = { { VSYMBOL, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1752 = { { VSTRING, 37 }, "int main(int argc, char ** argv) {~N" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1751 = { { VSTRING, 30 }, "  void (*toplevels[])() = {~N" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1750 = { { VSTRING, 16 }, "    toplevel~A," };
static struct { VBlob sym; char bytes[9]; } _V10string_D1749 = { { VSTRING, 9 }, "~N  };~N" };
static struct { VBlob sym; char bytes[32]; } _V10string_D1748 = { { VSTRING, 32 }, "  VArgc = argc; VArgv = argv;~N" };
static struct { VBlob sym; char bytes[68]; } _V10string_D1747 = { { VSTRING, 68 }, "  return VStart(sizeof toplevels / sizeof *toplevels, toplevels);~N" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1746 = { { VSTRING, 2 }, "}" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1745 = { { VSTRING, 30 }, "#include \"vscheme/vruntime.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1744 = { { VSTRING, 30 }, "#include \"vscheme/vlibrary.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1743 = { { VSTRING, 30 }, "#include \"vscheme/vinlines.h\"" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1742 = { { VSTRING, 20 }, "#include <stdarg.h>" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1741 = { { VSTRING, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[10]; } _V0printout2 = { { VSYMBOL, 10 }, "printout2" };
static struct { VBlob sym; char bytes[13]; } _V0to__functions = { { VSYMBOL, 13 }, "to-functions" };
static struct { VBlob sym; char bytes[11]; } _V0bruijn__ify = { { VSYMBOL, 11 }, "bruijn-ify" };
static void _V0vanity_V0compiler_V0transpile_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k70" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k70, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.275 6 0) (##inline ##sys.cons (##inline ##sys.cons (quote bruijn-ify) (bruijn bruijn-ify 6 2)) (##inline ##sys.cons (##inline ##sys.cons (quote to-functions) (bruijn to-functions 6 5)) (##inline ##sys.cons (##inline ##sys.cons (quote printout2) (bruijn printout2 6 6)) (quote ())))))
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
static void _V0printout2_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k100" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k100, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn shared? 32 2) ((bruijn ##k.321 0 0) (bruijn print-main? 10 1)) ((bruijn ##k.321 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 32-1, 2))) {
V_CALL(_var0, runtime,
      VGetArg(upenv, 10-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0printout2_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k102" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k102, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.319 1 0) ((bruijn compiler-error 40 43) (bruijn ##k.320 0 0) (##string ##string.1741)) ((bruijn ##k.320 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 40-1, 43), runtime,
      _var0,
      VEncodePointer(&_V10string_D1741.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0printout2_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k104" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k104, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn print-main? 12 1) ((bruijn print-main 33 17) (bruijn ##k.318 0 0) (bruijn toplevels 34 7)) ((bruijn ##k.318 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 12-1, 1))) {
V_CALL(VGetArg(upenv, 33-1, 17), runtime,
      _var0,
      VGetArg(upenv, 34-1, 7)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0printout2_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k105" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k105, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.306 12 0) (bruijn print-main? 12 1))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VGetArg(upenv, 12-1, 1)
    );
 }
}
static void _V0printout2_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k103" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0printout2_k104) (close _V0printout2_k105))
V_CALL_FUNC(_V0printout2_k104, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k105, env)})
    );
 }
}
static void _V0printout2_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k101" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0printout2_k102) (close _V0printout2_k103))
V_CALL_FUNC(_V0printout2_k102, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k103, env)})
    );
 }
}
static void _V0printout2_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k99" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0printout2_k100) (close _V0printout2_k101))
V_CALL_FUNC(_V0printout2_k100, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k101, env)})
    );
 }
}
static void _V0printout2_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k98" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 37 42) (close _V0printout2_k99) (bruijn print-declare 29 16) (bruijn declares 30 6))
V_CALL(VGetArg(upenv, 37-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k99, env)}),
      VGetArg(upenv, 29-1, 16),
      VGetArg(upenv, 30-1, 6)
    );
 }
}
static void _V0printout2_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k97" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 36 42) (close _V0printout2_k98) (bruijn print-fun 28 13) (bruijn functions 7 2))
V_CALL(VGetArg(upenv, 36-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k98, env)}),
      VGetArg(upenv, 28-1, 13),
      VGetArg(upenv, 7-1, 2)
    );
 }
}
static void _V0printout2_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k96" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 35 42) (close _V0printout2_k97) (bruijn print-foreign-function 35 41) (bruijn foreign-functions 28 4))
V_CALL(VGetArg(upenv, 35-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k97, env)}),
      VGetArg(upenv, 35-1, 41),
      VGetArg(upenv, 28-1, 4)
    );
 }
}
static void _V0printout2_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k95" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 34 42) (close _V0printout2_k96) (bruijn print-foreign-declare 26 15) (bruijn declares 27 6))
V_CALL(VGetArg(upenv, 34-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k96, env)}),
      VGetArg(upenv, 26-1, 15),
      VGetArg(upenv, 27-1, 6)
    );
 }
}
static void _V0printout2_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k94" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 33 42) (close _V0printout2_k95) (bruijn print-literal-declaration 25 8) (bruijn literal-table 26 3))
V_CALL(VGetArg(upenv, 33-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k95, env)}),
      VGetArg(upenv, 25-1, 8),
      VGetArg(upenv, 26-1, 3)
    );
 }
}
static void _V0printout2_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k93" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn displayln 32 40) (close _V0printout2_k94) (##string ##string.1742))
V_CALL(VGetArg(upenv, 32-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k94, env)}),
      VEncodePointer(&_V10string_D1742.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0printout2_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k92" };
 VRecordCall(&dbg);
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
  // ((bruijn displayln 31 40) (close _V0printout2_k93) (##string ##string.1743))
V_CALL(VGetArg(upenv, 31-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k93, env)}),
      VEncodePointer(&_V10string_D1743.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0printout2_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k91" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn displayln 30 40) (close _V0printout2_k92) (##string ##string.1744))
V_CALL(VGetArg(upenv, 30-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k92, env)}),
      VEncodePointer(&_V10string_D1744.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0printout2_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0printout2_lambda6" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_lambda6, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn displayln 29 40) (close _V0printout2_k91) (##string ##string.1745))
V_CALL(VGetArg(upenv, 29-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k91, env)}),
      VEncodePointer(&_V10string_D1745.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0printout2_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k90" };
 VRecordCall(&dbg);
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
  // ((close _V0printout2_lambda6) (bruijn ##k.288 20 0) (bruijn ##x.322 1 0) (bruijn ##x.323 0 0))
V_CALL_FUNC(_V0printout2_lambda6, env, runtime,
      VGetArg(upenv, 20-1, 0),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0printout2_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k89" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 27 46) (close _V0printout2_k90) (bruijn functions 20 5))
V_CALL(VGetArg(upenv, 27-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k90, env)}),
      VGetArg(upenv, 20-1, 5)
    );
 }
}
static void _V0printout2_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k88" };
 VRecordCall(&dbg);
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
  // ((bruijn not 26 45) (close _V0printout2_k89) (bruijn ##x.324 0 0))
V_CALL(VGetArg(upenv, 26-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k89, env)}),
      _var0
    );
 }
}
static void _V0printout2_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k87" };
 VRecordCall(&dbg);
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
  // ((bruijn null? 25 44) (close _V0printout2_k88) (bruijn toplevels 18 7))
V_CALL(VGetArg(upenv, 25-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k88, env)}),
      VGetArg(upenv, 18-1, 7)
    );
 }
}
static void _V0print__main_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__main_k116" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k116, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 36 40) (bruijn ##k.325 11 0) (##string ##string.1746))
V_CALL(VGetArg(upenv, 36-1, 40), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D1746.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__main_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__main_k115" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 35 37) (close _V0print__main_k116) (##string ##string.1747))
V_CALL(VGetArg(upenv, 35-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k116, env)}),
      VEncodePointer(&_V10string_D1747.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__main_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__main_k114" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 34 37) (close _V0print__main_k115) (##string ##string.1748))
V_CALL(VGetArg(upenv, 34-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k115, env)}),
      VEncodePointer(&_V10string_D1748.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__main_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__main_k113" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 33 37) (close _V0print__main_k114) (##string ##string.1749))
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k114, env)}),
      VEncodePointer(&_V10string_D1749.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__main_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__main_lambda8" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__main_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 33 37) (bruijn ##k.333 0 0) (##string ##string.1750) (bruijn i 0 1))
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1750.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0print__main_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__main_k112" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 32 42) (close _V0print__main_k113) (close _V0print__main_lambda8) (bruijn ##x.334 0 0))
V_CALL(VGetArg(upenv, 32-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k113, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_lambda8, env)}),
      _var0
    );
 }
}
static void _V0print__main_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__main_k111" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iota 31 39) (close _V0print__main_k112) (bruijn ##x.335 0 0))
V_CALL(VGetArg(upenv, 31-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k112, env)}),
      _var0
    );
 }
}
static void _V0print__main_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__main_k110" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 30 38) (close _V0print__main_k111) (bruijn toplevels 5 1))
V_CALL(VGetArg(upenv, 30-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k111, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0print__main_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__main_k109" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 29 37) (close _V0print__main_k110) (##string ##string.1751))
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k110, env)}),
      VEncodePointer(&_V10string_D1751.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__main_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__main_k108" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 28 37) (close _V0print__main_k109) (##string ##string.1752))
V_CALL(VGetArg(upenv, 28-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k109, env)}),
      VEncodePointer(&_V10string_D1752.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__main_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__main_k107" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 27 42) (close _V0print__main_k108) (bruijn print-toplevel 19 14) (bruijn ##x.337 0 0) (bruijn toplevels 2 1))
V_CALL(VGetArg(upenv, 27-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k108, env)}),
      VGetArg(upenv, 19-1, 14),
      _var0,
      upenv->up->vars[1]
    );
 }
}
static void _V0print__main_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__main_k106" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iota 26 39) (close _V0print__main_k107) (bruijn ##x.338 0 0))
V_CALL(VGetArg(upenv, 26-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k107, env)}),
      _var0
    );
 }
}
static void _V0print__main_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__main_lambda7" };
 VRecordCall(&dbg);
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
  // ((bruijn length 25 38) (close _V0print__main_k106) (bruijn toplevels 0 1))
V_CALL(VGetArg(upenv, 25-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k106, env)}),
      _var1
    );
 }
}
static void _V0printout2_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k86" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k87) (bruijn print-main 16 17) (close _V0print__main_lambda7))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k87, env)}),
      VEncodeInt(16l), VEncodeInt(17l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_lambda7, env)})
    );
 }
}
static void _V0print__declare_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__declare_k118" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k118, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.267 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.267 0 0))) ((bruijn ##kk.264 4 1) (bruijn ##k.354 2 0) #f) ((bruijn ##k.354 2 0) #f)) ((bruijn ##k.354 2 0) #f))
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
      VEncodeBool(false)
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
static void _V0print__declare_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__declare_k117" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.356 0 0) ((close _V0print__declare_k118) (##inline ##sys.cdr (bruijn ##expr.266 1 1))) ((bruijn ##k.354 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__declare_k118, env, runtime,
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
static void _V0print__declare_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__declare_lambda12" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.266 0 1)) ((bruijn equal? 27 35) (close _V0print__declare_k117) (quote ##foreign.declare) (##inline ##sys.car (bruijn ##expr.266 0 1))) ((bruijn ##k.354 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 27-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_k117, env)}),
      VEncodePointer(&_V10foreign_Ddeclare.sym, VPOINTER_OTHER),
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
static void _V0print__declare_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__declare_k123" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k123, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.264 7 1) (bruijn ##k.345 4 0) (bruijn ##x.351 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__declare_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__declare_k122" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.270 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.270 0 0))) ((bruijn printf 31 37) (close _V0print__declare_k123) (##string ##string.1753) (##inline ##sys.car (bruijn ##expr.269 1 0)) (##inline ##sys.car (bruijn ##expr.270 0 0))) ((bruijn ##k.345 3 0) #f)) ((bruijn ##k.345 3 0) #f))
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
V_CALL(VGetArg(upenv, 31-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_k123, env)}),
      VEncodePointer(&_V10string_D1753.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->vars[0]
    )
,
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
static void _V0print__declare_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__declare_k121" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.269 0 0)) ((close _V0print__declare_k122) (##inline ##sys.cdr (bruijn ##expr.269 0 0))) ((bruijn ##k.345 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__declare_k122, env, runtime,
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
static void _V0print__declare_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__declare_k120" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.347 0 0) ((close _V0print__declare_k121) (##inline ##sys.cdr (bruijn ##expr.268 1 1))) ((bruijn ##k.345 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__declare_k121, env, runtime,
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
static void _V0print__declare_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__declare_lambda13" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.268 0 1)) ((bruijn equal? 28 35) (close _V0print__declare_k120) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.268 0 1))) ((bruijn ##k.345 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 28-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_k120, env)}),
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
static void _V0print__declare_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__declare_k125" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k125, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.264 4 1) (bruijn ##k.341 3 0) (bruijn ##x.344 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__declare_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__declare_k124" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn compiler-error 28 43) (close _V0print__declare_k125) (##string ##string.1754) (bruijn declare 4 1))
V_CALL(VGetArg(upenv, 28-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_k125, env)}),
      VEncodePointer(&_V10string_D1754.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0print__declare_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__declare_k119" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__declare_lambda13) (close _V0print__declare_k124) (bruijn ##input.265 1 1))
V_CALL_FUNC(_V0print__declare_lambda13, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_k124, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__declare_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__declare_lambda11" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__declare_lambda12) (close _V0print__declare_k119) (bruijn ##input.265 0 1))
V_CALL_FUNC(_V0print__declare_lambda12, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_k119, env)}),
      _var1
    );
 }
}
static void _V0print__declare_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__declare_lambda10" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__declare_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__declare_lambda11) (bruijn ##k.340 0 0) (bruijn declare 1 1))
V_CALL_FUNC(_V0print__declare_lambda11, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0print__declare_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__declare_lambda9" };
 VRecordCall(&dbg);
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
  // ((bruijn call/cc 24 36) (bruijn ##k.339 0 0) (close _V0print__declare_lambda10))
V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_lambda10, env)})
    );
 }
}
static void _V0printout2_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k85" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k86) (bruijn print-declare 15 16) (close _V0print__declare_lambda9))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k86, env)}),
      VEncodeInt(15l), VEncodeInt(16l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_lambda9, env)})
    );
 }
}
static void _V0print__foreign__declare_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__declare_k128" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k128, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.257 5 1) (bruijn ##k.375 3 0) (bruijn ##x.380 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__declare_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__declare_k127" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.260 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.260 0 0))) ((bruijn displayln 28 40) (close _V0print__foreign__declare_k128) (##inline ##sys.car (bruijn ##expr.260 0 0))) ((bruijn ##k.375 2 0) #f)) ((bruijn ##k.375 2 0) #f))
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
V_CALL(VGetArg(upenv, 28-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_k128, env)}),
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
static void _V0print__foreign__declare_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__declare_k126" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.377 0 0) ((close _V0print__foreign__declare_k127) (##inline ##sys.cdr (bruijn ##expr.259 1 1))) ((bruijn ##k.375 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__foreign__declare_k127, env, runtime,
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
static void _V0print__foreign__declare_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__foreign__declare_lambda17" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.259 0 1)) ((bruijn equal? 26 35) (close _V0print__foreign__declare_k126) (quote ##foreign.declare) (##inline ##sys.car (bruijn ##expr.259 0 1))) ((bruijn ##k.375 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 26-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_k126, env)}),
      VEncodePointer(&_V10foreign_Ddeclare.sym, VPOINTER_OTHER),
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
static void _V0print__foreign__declare_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__declare_k132" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k132, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.263 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.263 0 0))) ((bruijn ##kk.257 6 1) (bruijn ##k.367 3 0) #f) ((bruijn ##k.367 3 0) #f)) ((bruijn ##k.367 3 0) #f))
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
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->vars[0],
      VEncodeBool(false)
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
static void _V0print__foreign__declare_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__declare_k131" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.262 0 0)) ((close _V0print__foreign__declare_k132) (##inline ##sys.cdr (bruijn ##expr.262 0 0))) ((bruijn ##k.367 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__foreign__declare_k132, env, runtime,
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
static void _V0print__foreign__declare_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__declare_k130" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.369 0 0) ((close _V0print__foreign__declare_k131) (##inline ##sys.cdr (bruijn ##expr.261 1 1))) ((bruijn ##k.367 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__foreign__declare_k131, env, runtime,
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
static void _V0print__foreign__declare_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__foreign__declare_lambda18" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.261 0 1)) ((bruijn equal? 27 35) (close _V0print__foreign__declare_k130) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.261 0 1))) ((bruijn ##k.367 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 27-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_k130, env)}),
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
static void _V0print__foreign__declare_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__declare_k134" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k134, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.257 4 1) (bruijn ##k.363 3 0) (bruijn ##x.366 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__declare_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__declare_k133" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn compiler-error 27 43) (close _V0print__foreign__declare_k134) (##string ##string.1755) (bruijn declare 4 1))
V_CALL(VGetArg(upenv, 27-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_k134, env)}),
      VEncodePointer(&_V10string_D1755.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0print__foreign__declare_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__declare_k129" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__foreign__declare_lambda18) (close _V0print__foreign__declare_k133) (bruijn ##input.258 1 1))
V_CALL_FUNC(_V0print__foreign__declare_lambda18, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_k133, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__foreign__declare_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__foreign__declare_lambda16" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__foreign__declare_lambda17) (close _V0print__foreign__declare_k129) (bruijn ##input.258 0 1))
V_CALL_FUNC(_V0print__foreign__declare_lambda17, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_k129, env)}),
      _var1
    );
 }
}
static void _V0print__foreign__declare_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__foreign__declare_lambda15" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__foreign__declare_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__foreign__declare_lambda16) (bruijn ##k.362 0 0) (bruijn declare 1 1))
V_CALL_FUNC(_V0print__foreign__declare_lambda16, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0print__foreign__declare_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__foreign__declare_lambda14" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__foreign__declare_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 23 36) (bruijn ##k.361 0 0) (close _V0print__foreign__declare_lambda15))
V_CALL(VGetArg(upenv, 23-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_lambda15, env)})
    );
 }
}
static void _V0printout2_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k84" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k85) (bruijn print-foreign-declare 14 15) (close _V0print__foreign__declare_lambda14))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k85, env)}),
      VEncodeInt(14l), VEncodeInt(15l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_lambda14, env)})
    );
 }
}
static void _V0print__toplevel_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__toplevel_k138" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__toplevel_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__toplevel_k138, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 26 40) (bruijn ##k.383 4 0) (##string ##string.1746))
V_CALL(VGetArg(upenv, 26-1, 40), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1746.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__toplevel_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__toplevel_k137" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__toplevel_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__toplevel_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 17 10) (close _V0print__toplevel_k138) (bruijn expr 3 2) (quote ()))
V_CALL(VGetArg(upenv, 17-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__toplevel_k138, env)}),
      upenv->up->up->vars[2],
      VNULL
    );
 }
}
static void _V0print__toplevel_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__toplevel_k136" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__toplevel_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__toplevel_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn displayln 24 40) (close _V0print__toplevel_k137) (##string ##string.1756))
V_CALL(VGetArg(upenv, 24-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__toplevel_k137, env)}),
      VEncodePointer(&_V10string_D1756.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__toplevel_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__toplevel_k135" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__toplevel_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__toplevel_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn displayln 23 40) (close _V0print__toplevel_k136) (##string ##string.1757))
V_CALL(VGetArg(upenv, 23-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__toplevel_k136, env)}),
      VEncodePointer(&_V10string_D1757.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__toplevel_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0print__toplevel_lambda19" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0print__toplevel_lambda19, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__toplevel_lambda19, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn printf 22 37) (close _V0print__toplevel_k135) (##string ##string.1758) (bruijn i 0 1))
V_CALL(VGetArg(upenv, 22-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__toplevel_k135, env)}),
      VEncodePointer(&_V10string_D1758.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0printout2_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k83" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k84) (bruijn print-toplevel 13 14) (close _V0print__toplevel_lambda19))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k84, env)}),
      VEncodeInt(13l), VEncodeInt(14l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__toplevel_lambda19, env)})
    );
 }
}
static void _V0print__fun_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k143" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k143, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.244 7 1) (bruijn ##k.408 5 0) (bruijn ##x.416 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0print__fun_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k142" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.250 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.250 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.248 2 0))) ((bruijn print-fun-single 20 11) (close _V0print__fun_k143) (##inline ##sys.car (bruijn ##expr.246 4 1)) (##inline ##sys.car (bruijn ##expr.247 3 0)) (##inline ##sys.car (bruijn ##expr.249 1 0)) #f (##inline ##sys.car (bruijn ##expr.250 0 0)) #f) ((bruijn ##k.408 4 0) #f)) ((bruijn ##k.408 4 0) #f)) ((bruijn ##k.408 4 0) #f))
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
V_CALL(VGetArg(upenv, 20-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k143, env)}),
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
static void _V0print__fun_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k141" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.249 0 0)) ((close _V0print__fun_k142) (##inline ##sys.cdr (bruijn ##expr.249 0 0))) ((bruijn ##k.408 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun_k142, env, runtime,
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
static void _V0print__fun_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k140" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.248 0 0)) ((close _V0print__fun_k141) (##inline ##sys.car (bruijn ##expr.248 0 0))) ((bruijn ##k.408 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun_k141, env, runtime,
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
static void _V0print__fun_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k139" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.247 0 0)) ((close _V0print__fun_k140) (##inline ##sys.cdr (bruijn ##expr.247 0 0))) ((bruijn ##k.408 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun_k140, env, runtime,
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
static void _V0print__fun_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun_lambda23" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.246 0 1)) ((close _V0print__fun_k139) (##inline ##sys.cdr (bruijn ##expr.246 0 1))) ((bruijn ##k.408 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun_k139, env, runtime,
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
static void _V0print__fun_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k151" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k151, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.244 10 1) (bruijn ##k.394 7 0) (bruijn ##x.404 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0print__fun_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k150" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.256 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.256 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.253 4 0))) ((bruijn print-fun-single 23 11) (close _V0print__fun_k151) (##inline ##sys.car (bruijn ##expr.251 6 1)) (##inline ##sys.car (bruijn ##expr.252 5 0)) (##inline ##sys.car (bruijn ##expr.254 3 0)) #t (##inline ##sys.car (bruijn ##expr.256 0 0)) #f) ((bruijn ##k.394 6 0) #f)) ((bruijn ##k.394 6 0) #f)) ((bruijn ##k.394 6 0) #f))
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
V_CALL(VGetArg(upenv, 23-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k151, env)}),
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
static void _V0print__fun_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k149" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.400 0 0) ((close _V0print__fun_k150) (##inline ##sys.cdr (bruijn ##expr.255 1 0))) ((bruijn ##k.394 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__fun_k150, env, runtime,
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
static void _V0print__fun_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k148" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.255 0 0)) ((bruijn equal? 29 35) (close _V0print__fun_k149) (quote +) (##inline ##sys.car (bruijn ##expr.255 0 0))) ((bruijn ##k.394 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 29-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k149, env)}),
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
static void _V0print__fun_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k147" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.254 0 0)) ((close _V0print__fun_k148) (##inline ##sys.cdr (bruijn ##expr.254 0 0))) ((bruijn ##k.394 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun_k148, env, runtime,
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
static void _V0print__fun_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k146" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.253 0 0)) ((close _V0print__fun_k147) (##inline ##sys.car (bruijn ##expr.253 0 0))) ((bruijn ##k.394 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun_k147, env, runtime,
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
static void _V0print__fun_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k145" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.252 0 0)) ((close _V0print__fun_k146) (##inline ##sys.cdr (bruijn ##expr.252 0 0))) ((bruijn ##k.394 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun_k146, env, runtime,
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
static void _V0print__fun_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.251 0 1)) ((close _V0print__fun_k145) (##inline ##sys.cdr (bruijn ##expr.251 0 1))) ((bruijn ##k.394 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun_k145, env, runtime,
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
static void _V0print__fun_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k153" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k153, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.244 4 1) (bruijn ##k.390 3 0) (bruijn ##x.393 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__fun_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k152" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-fun-case 17 12) (close _V0print__fun_k153) (bruijn fun 4 1))
V_CALL(VGetArg(upenv, 17-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k153, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0print__fun_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun_k144" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun_lambda24) (close _V0print__fun_k152) (bruijn ##input.245 1 1))
V_CALL_FUNC(_V0print__fun_lambda24, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k152, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__fun_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun_lambda22" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun_lambda23) (close _V0print__fun_k144) (bruijn ##input.245 0 1))
V_CALL_FUNC(_V0print__fun_lambda23, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k144, env)}),
      _var1
    );
 }
}
static void _V0print__fun_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun_lambda21" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun_lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun_lambda22) (bruijn ##k.389 0 0) (bruijn fun 1 1))
V_CALL_FUNC(_V0print__fun_lambda22, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0print__fun_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun_lambda20" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun_lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 21 36) (bruijn ##k.388 0 0) (close _V0print__fun_lambda21))
V_CALL(VGetArg(upenv, 21-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_lambda21, env)})
    );
 }
}
static void _V0printout2_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k82" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k83) (bruijn print-fun 12 13) (close _V0print__fun_lambda20))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k83, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_lambda20, env)})
    );
 }
}
static void _V0print__fun__case_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k171" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k171, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 38 37) (bruijn ##k.419 18 0) (##string ##string.1759))
V_CALL(VGetArg(upenv, 38-1, 37), runtime,
      VGetArg(upenv, 18-1, 0),
      VEncodePointer(&_V10string_D1759.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k170" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 37 37) (close _V0print__fun__case_k171) (##string ##string.1760) (bruijn name 16 0))
V_CALL(VGetArg(upenv, 37-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k171, env)}),
      VEncodePointer(&_V10string_D1760.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 0)
    );
 }
}
static void _V0print__fun__case_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k179" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k179, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.231 10 1) (bruijn ##k.450 8 0) (bruijn ##x.460 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0print__fun__case_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k178" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 47 37) (close _V0print__fun__case_k179) (##string ##string.1761) (##inline ##sys.car (bruijn ##expr.233 7 1)))
V_CALL(VGetArg(upenv, 47-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k179, env)}),
      VEncodePointer(&_V10string_D1761.sym, VPOINTER_OTHER),
      VInlineCar(
VGetArg(upenv, 7-1, 1)
    )

    );
 }
}
static void _V0print__fun__case_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k177" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.238 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.238 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.235 4 0))) ((bruijn printf 46 37) (close _V0print__fun__case_k178) (##string ##string.1762) (##inline ##sys.car (bruijn ##expr.236 3 0))) ((bruijn ##k.450 6 0) #f)) ((bruijn ##k.450 6 0) #f)) ((bruijn ##k.450 6 0) #f))
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
V_CALL(VGetArg(upenv, 46-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k178, env)}),
      VEncodePointer(&_V10string_D1762.sym, VPOINTER_OTHER),
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
static void _V0print__fun__case_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k176" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.456 0 0) ((close _V0print__fun__case_k177) (##inline ##sys.cdr (bruijn ##expr.237 1 0))) ((bruijn ##k.450 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__fun__case_k177, env, runtime,
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
static void _V0print__fun__case_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k175" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.237 0 0)) ((bruijn equal? 44 35) (close _V0print__fun__case_k176) (quote +) (##inline ##sys.car (bruijn ##expr.237 0 0))) ((bruijn ##k.450 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 44-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k176, env)}),
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
static void _V0print__fun__case_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k174" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.236 0 0)) ((close _V0print__fun__case_k175) (##inline ##sys.cdr (bruijn ##expr.236 0 0))) ((bruijn ##k.450 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k175, env, runtime,
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
static void _V0print__fun__case_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k173" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.235 0 0)) ((close _V0print__fun__case_k174) (##inline ##sys.car (bruijn ##expr.235 0 0))) ((bruijn ##k.450 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k174, env, runtime,
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
static void _V0print__fun__case_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k172" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.234 0 0)) ((close _V0print__fun__case_k173) (##inline ##sys.cdr (bruijn ##expr.234 0 0))) ((bruijn ##k.450 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k173, env, runtime,
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
static void _V0print__fun__case_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda29" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.233 0 1)) ((close _V0print__fun__case_k172) (##inline ##sys.cdr (bruijn ##expr.233 0 1))) ((bruijn ##k.450 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k172, env, runtime,
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
static void _V0print__fun__case_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k186" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k186, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.231 9 1) (bruijn ##k.438 6 0) (bruijn ##x.446 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0print__fun__case_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k185" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 46 37) (close _V0print__fun__case_k186) (##string ##string.1763) (##inline ##sys.car (bruijn ##expr.239 5 1)))
V_CALL(VGetArg(upenv, 46-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k186, env)}),
      VEncodePointer(&_V10string_D1763.sym, VPOINTER_OTHER),
      VInlineCar(
VGetArg(upenv, 5-1, 1)
    )

    );
 }
}
static void _V0print__fun__case_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k184" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.243 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.243 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.241 2 0))) ((bruijn printf 45 37) (close _V0print__fun__case_k185) (##string ##string.1762) (##inline ##sys.car (bruijn ##expr.242 1 0))) ((bruijn ##k.438 4 0) #f)) ((bruijn ##k.438 4 0) #f)) ((bruijn ##k.438 4 0) #f))
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
V_CALL(VGetArg(upenv, 45-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k185, env)}),
      VEncodePointer(&_V10string_D1762.sym, VPOINTER_OTHER),
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
static void _V0print__fun__case_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k183" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.242 0 0)) ((close _V0print__fun__case_k184) (##inline ##sys.cdr (bruijn ##expr.242 0 0))) ((bruijn ##k.438 3 0) #f))
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
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__case_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k182" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.241 0 0)) ((close _V0print__fun__case_k183) (##inline ##sys.car (bruijn ##expr.241 0 0))) ((bruijn ##k.438 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k183, env, runtime,
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
static void _V0print__fun__case_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k181" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.240 0 0)) ((close _V0print__fun__case_k182) (##inline ##sys.cdr (bruijn ##expr.240 0 0))) ((bruijn ##k.438 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k182, env, runtime,
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
 static VDebugInfo dbg = { "_V0print__fun__case_lambda30" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.239 0 1)) ((close _V0print__fun__case_k181) (##inline ##sys.cdr (bruijn ##expr.239 0 1))) ((bruijn ##k.438 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k181, env, runtime,
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
 static VDebugInfo dbg = { "_V0print__fun__case_k187" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k187, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 41 34) (bruijn ##k.435 2 0) (##string ##string.1764))
V_CALL(VGetArg(upenv, 41-1, 34), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1764.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k180" };
 VRecordCall(&dbg);
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
  // ((close _V0print__fun__case_lambda30) (close _V0print__fun__case_k187) (bruijn ##input.232 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda30, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k187, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda28" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda29) (close _V0print__fun__case_k180) (bruijn ##input.232 0 1))
V_CALL_FUNC(_V0print__fun__case_lambda29, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k180, env)}),
      _var1
    );
 }
}
static void _V0print__fun__case_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda27" };
 VRecordCall(&dbg);
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
  // ((close _V0print__fun__case_lambda28) (bruijn ##k.434 0 0) (bruijn e 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda28, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda26" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 37 36) (bruijn ##k.433 0 0) (close _V0print__fun__case_lambda27))
V_CALL(VGetArg(upenv, 37-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda27, env)})
    );
 }
}
static void _V0print__fun__case_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k169" };
 VRecordCall(&dbg);
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
  // ((bruijn for-each 36 42) (close _V0print__fun__case_k170) (close _V0print__fun__case_lambda26) (bruijn cases 11 0))
V_CALL(VGetArg(upenv, 36-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k170, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda26, env)}),
      VGetArg(upenv, 11-1, 0)
    );
 }
}
static void _V0print__fun__case_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k168" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 35 37) (close _V0print__fun__case_k169) (##string ##string.1765) (bruijn name 14 0))
V_CALL(VGetArg(upenv, 35-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k169, env)}),
      VEncodePointer(&_V10string_D1765.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 0)
    );
 }
}
static void _V0print__fun__case_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k167" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 34 37) (close _V0print__fun__case_k168) (##string ##string.1766))
V_CALL(VGetArg(upenv, 34-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k168, env)}),
      VEncodePointer(&_V10string_D1766.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k166" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 33 37) (close _V0print__fun__case_k167) (##string ##string.1767))
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k167, env)}),
      VEncodePointer(&_V10string_D1767.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k165" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 32 37) (close _V0print__fun__case_k166) (##string ##string.1768) (bruijn name 11 0))
V_CALL(VGetArg(upenv, 32-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k166, env)}),
      VEncodePointer(&_V10string_D1768.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 0)
    );
 }
}
static void _V0print__fun__case_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k194" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k194, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.218 9 1) (bruijn ##k.481 7 0) (bruijn ##x.491 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0print__fun__case_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k193" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.225 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.225 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.222 4 0))) ((bruijn print-fun-single 33 11) (close _V0print__fun__case_k194) (##inline ##sys.car (bruijn ##expr.220 6 1)) #f (##inline ##sys.car (bruijn ##expr.223 3 0)) #t (##inline ##sys.car (bruijn ##expr.225 0 0)) #t) ((bruijn ##k.481 6 0) #f)) ((bruijn ##k.481 6 0) #f)) ((bruijn ##k.481 6 0) #f))
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
V_CALL(VGetArg(upenv, 33-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k194, env)}),
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
static void _V0print__fun__case_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k192" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.487 0 0) ((close _V0print__fun__case_k193) (##inline ##sys.cdr (bruijn ##expr.224 1 0))) ((bruijn ##k.481 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__fun__case_k193, env, runtime,
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
static void _V0print__fun__case_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k191" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.224 0 0)) ((bruijn equal? 39 35) (close _V0print__fun__case_k192) (quote +) (##inline ##sys.car (bruijn ##expr.224 0 0))) ((bruijn ##k.481 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 39-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k192, env)}),
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
static void _V0print__fun__case_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k190" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.223 0 0)) ((close _V0print__fun__case_k191) (##inline ##sys.cdr (bruijn ##expr.223 0 0))) ((bruijn ##k.481 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k191, env, runtime,
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
static void _V0print__fun__case_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k189" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.222 0 0)) ((close _V0print__fun__case_k190) (##inline ##sys.car (bruijn ##expr.222 0 0))) ((bruijn ##k.481 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k190, env, runtime,
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
static void _V0print__fun__case_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k188" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.221 0 0)) ((close _V0print__fun__case_k189) (##inline ##sys.cdr (bruijn ##expr.221 0 0))) ((bruijn ##k.481 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k189, env, runtime,
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
static void _V0print__fun__case_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda34" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.220 0 1)) ((close _V0print__fun__case_k188) (##inline ##sys.cdr (bruijn ##expr.220 0 1))) ((bruijn ##k.481 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k188, env, runtime,
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
static void _V0print__fun__case_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k200" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k200, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.218 8 1) (bruijn ##k.470 5 0) (bruijn ##x.478 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0print__fun__case_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k199" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.230 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.230 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.228 2 0))) ((bruijn print-fun-single 32 11) (close _V0print__fun__case_k200) (##inline ##sys.car (bruijn ##expr.226 4 1)) #f (##inline ##sys.car (bruijn ##expr.229 1 0)) #f (##inline ##sys.car (bruijn ##expr.230 0 0)) #t) ((bruijn ##k.470 4 0) #f)) ((bruijn ##k.470 4 0) #f)) ((bruijn ##k.470 4 0) #f))
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
V_CALL(VGetArg(upenv, 32-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k200, env)}),
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
static void _V0print__fun__case_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k198" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.229 0 0)) ((close _V0print__fun__case_k199) (##inline ##sys.cdr (bruijn ##expr.229 0 0))) ((bruijn ##k.470 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k199, env, runtime,
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
static void _V0print__fun__case_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k197" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.228 0 0)) ((close _V0print__fun__case_k198) (##inline ##sys.car (bruijn ##expr.228 0 0))) ((bruijn ##k.470 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k198, env, runtime,
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
static void _V0print__fun__case_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k196" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.227 0 0)) ((close _V0print__fun__case_k197) (##inline ##sys.cdr (bruijn ##expr.227 0 0))) ((bruijn ##k.470 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k197, env, runtime,
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
static void _V0print__fun__case_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda35" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda35, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.226 0 1)) ((close _V0print__fun__case_k196) (##inline ##sys.cdr (bruijn ##expr.226 0 1))) ((bruijn ##k.470 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k196, env, runtime,
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
static void _V0print__fun__case_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k201" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k201, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 36 34) (bruijn ##k.467 2 0) (##string ##string.1764))
V_CALL(VGetArg(upenv, 36-1, 34), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1764.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k195" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__case_lambda35) (close _V0print__fun__case_k201) (bruijn ##input.219 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda35, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k201, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda33" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda33, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda34) (close _V0print__fun__case_k195) (bruijn ##input.219 0 1))
V_CALL_FUNC(_V0print__fun__case_lambda34, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k195, env)}),
      _var1
    );
 }
}
static void _V0print__fun__case_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda32" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda33) (bruijn ##k.466 0 0) (bruijn e 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda33, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda31" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 32 36) (bruijn ##k.465 0 0) (close _V0print__fun__case_lambda32))
V_CALL(VGetArg(upenv, 32-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda32, env)})
    );
 }
}
static void _V0print__fun__case_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k164" };
 VRecordCall(&dbg);
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
  // ((bruijn for-each 31 42) (close _V0print__fun__case_k165) (close _V0print__fun__case_lambda31) (bruijn cases 6 0))
V_CALL(VGetArg(upenv, 31-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k165, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda31, env)}),
      VGetArg(upenv, 6-1, 0)
    );
 }
}
static void _V0print__fun__case_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k163" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 30 37) (close _V0print__fun__case_k164) (##string ##string.1769))
V_CALL(VGetArg(upenv, 30-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k164, env)}),
      VEncodePointer(&_V10string_D1769.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k162" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 29 37) (close _V0print__fun__case_k163) (##string ##string.1770))
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k163, env)}),
      VEncodePointer(&_V10string_D1770.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k208" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k208, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.205 9 1) (bruijn ##k.511 7 0) (bruijn ##x.521 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0print__fun__case_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k207" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.212 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.212 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.209 4 0))) ((bruijn printf 38 37) (close _V0print__fun__case_k208) (##string ##string.1771) (##inline ##sys.car (bruijn ##expr.210 3 0))) ((bruijn ##k.511 6 0) #f)) ((bruijn ##k.511 6 0) #f)) ((bruijn ##k.511 6 0) #f))
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
V_CALL(VGetArg(upenv, 38-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k208, env)}),
      VEncodePointer(&_V10string_D1771.sym, VPOINTER_OTHER),
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
static void _V0print__fun__case_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k206" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.517 0 0) ((close _V0print__fun__case_k207) (##inline ##sys.cdr (bruijn ##expr.211 1 0))) ((bruijn ##k.511 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__fun__case_k207, env, runtime,
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
static void _V0print__fun__case_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k205" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.211 0 0)) ((bruijn equal? 36 35) (close _V0print__fun__case_k206) (quote +) (##inline ##sys.car (bruijn ##expr.211 0 0))) ((bruijn ##k.511 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 36-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k206, env)}),
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
static void _V0print__fun__case_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k204" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.210 0 0)) ((close _V0print__fun__case_k205) (##inline ##sys.cdr (bruijn ##expr.210 0 0))) ((bruijn ##k.511 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k205, env, runtime,
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
static void _V0print__fun__case_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k203" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.209 0 0)) ((close _V0print__fun__case_k204) (##inline ##sys.car (bruijn ##expr.209 0 0))) ((bruijn ##k.511 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k204, env, runtime,
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
static void _V0print__fun__case_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k202" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.208 0 0)) ((close _V0print__fun__case_k203) (##inline ##sys.cdr (bruijn ##expr.208 0 0))) ((bruijn ##k.511 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k203, env, runtime,
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
static void _V0print__fun__case_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda39" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.207 0 1)) ((close _V0print__fun__case_k202) (##inline ##sys.cdr (bruijn ##expr.207 0 1))) ((bruijn ##k.511 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k202, env, runtime,
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
static void _V0print__fun__case_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k214" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k214, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.205 8 1) (bruijn ##k.500 5 0) (bruijn ##x.508 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0print__fun__case_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k213" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.217 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.217 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.215 2 0))) ((bruijn printf 37 37) (close _V0print__fun__case_k214) (##string ##string.1772) (##inline ##sys.car (bruijn ##expr.216 1 0))) ((bruijn ##k.500 4 0) #f)) ((bruijn ##k.500 4 0) #f)) ((bruijn ##k.500 4 0) #f))
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
V_CALL(VGetArg(upenv, 37-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k214, env)}),
      VEncodePointer(&_V10string_D1772.sym, VPOINTER_OTHER),
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
static void _V0print__fun__case_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k212" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.216 0 0)) ((close _V0print__fun__case_k213) (##inline ##sys.cdr (bruijn ##expr.216 0 0))) ((bruijn ##k.500 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k213, env, runtime,
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
static void _V0print__fun__case_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k211" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.215 0 0)) ((close _V0print__fun__case_k212) (##inline ##sys.car (bruijn ##expr.215 0 0))) ((bruijn ##k.500 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k212, env, runtime,
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
static void _V0print__fun__case_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k210" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.214 0 0)) ((close _V0print__fun__case_k211) (##inline ##sys.cdr (bruijn ##expr.214 0 0))) ((bruijn ##k.500 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k211, env, runtime,
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
static void _V0print__fun__case_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda40" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda40, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.213 0 1)) ((close _V0print__fun__case_k210) (##inline ##sys.cdr (bruijn ##expr.213 0 1))) ((bruijn ##k.500 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__fun__case_k210, env, runtime,
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
static void _V0print__fun__case_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k215" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k215, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 33 34) (bruijn ##k.497 2 0) (##string ##string.1764))
V_CALL(VGetArg(upenv, 33-1, 34), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1764.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__case_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k209" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__case_lambda40) (close _V0print__fun__case_k215) (bruijn ##input.206 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda40, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k215, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda38" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda39) (close _V0print__fun__case_k209) (bruijn ##input.206 0 1))
V_CALL_FUNC(_V0print__fun__case_lambda39, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k209, env)}),
      _var1
    );
 }
}
static void _V0print__fun__case_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda37" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda38) (bruijn ##k.496 0 0) (bruijn e 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda38, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda36" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 29 36) (bruijn ##k.495 0 0) (close _V0print__fun__case_lambda37))
V_CALL(VGetArg(upenv, 29-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda37, env)})
    );
 }
}
static void _V0print__fun__case_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k161" };
 VRecordCall(&dbg);
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
  // ((bruijn for-each 28 42) (close _V0print__fun__case_k162) (close _V0print__fun__case_lambda36) (bruijn cases 3 0))
V_CALL(VGetArg(upenv, 28-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k162, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda36, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0print__fun__case_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k160" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 27 37) (close _V0print__fun__case_k161) (##string ##string.1773) (bruijn name 6 0))
V_CALL(VGetArg(upenv, 27-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k161, env)}),
      VEncodePointer(&_V10string_D1773.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0)
    );
 }
}
static void _V0print__fun__case_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k159" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 26 37) (close _V0print__fun__case_k160) (##string ##string.1774) (bruijn fun 6 1))
V_CALL(VGetArg(upenv, 26-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k160, env)}),
      VEncodePointer(&_V10string_D1774.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0print__fun__case_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k158" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 25 37) (close _V0print__fun__case_k159) (##string ##string.1775) (bruijn name 4 0))
V_CALL(VGetArg(upenv, 25-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k159, env)}),
      VEncodePointer(&_V10string_D1775.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0print__fun__case_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k216" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k216, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.525 1 0) (##inline ##sys.cons (bruijn ##x.526 0 0) (##inline ##sys.cons (quote #f) (##inline ##sys.cons (bruijn e 1 2) (quote ())))))
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
static void _V0print__fun__case_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda41" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0print__fun__case_lambda41, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda41, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn sprintf 25 33) (close _V0print__fun__case_k216) (##string ##string.1776) (bruijn i 0 1) (bruijn name 4 0))
V_CALL(VGetArg(upenv, 25-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k216, env)}),
      VEncodePointer(&_V10string_D1776.sym, VPOINTER_OTHER),
      _var1,
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0print__fun__case_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k157" };
 VRecordCall(&dbg);
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
  // ((bruijn map 24 32) (close _V0print__fun__case_k158) (close _V0print__fun__case_lambda41) (bruijn ##x.529 0 0) (bruijn cases 2 0))
V_CALL(VGetArg(upenv, 24-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k158, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda41, env)}),
      _var0,
      upenv->up->vars[0]
    );
 }
}
static void _V0print__fun__case_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k156" };
 VRecordCall(&dbg);
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
  // ((bruijn iota 23 39) (close _V0print__fun__case_k157) (bruijn ##x.530 0 0))
V_CALL(VGetArg(upenv, 23-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k157, env)}),
      _var0
    );
 }
}
static void _V0print__fun__case_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k155" };
 VRecordCall(&dbg);
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
  // ((bruijn length 22 38) (close _V0print__fun__case_k156) (bruijn cases 0 0))
V_CALL(VGetArg(upenv, 22-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k156, env)}),
      _var0
    );
 }
}
static void _V0print__fun__case_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__case_k154" };
 VRecordCall(&dbg);
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
  // ((bruijn cddr 21 31) (close _V0print__fun__case_k155) (bruijn fun 1 1))
V_CALL(VGetArg(upenv, 21-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k155, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__fun__case_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__case_lambda25" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 20 30) (close _V0print__fun__case_k154) (bruijn fun 0 1))
V_CALL(VGetArg(upenv, 20-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k154, env)}),
      _var1
    );
 }
}
static void _V0printout2_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k81" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k82) (bruijn print-fun-case 11 12) (close _V0print__fun__case_lambda25))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k82, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda25, env)})
    );
 }
}
static void _V0print__fun__single_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k219" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k219, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn needs-used? 4 6) ((bruijn printf 23 37) (bruijn ##k.582 0 0) (##string ##string.1777)) ((bruijn ##k.582 0 0) #f))
if(VDecodeBool(
upenv->up->up->up->vars[6])) {
V_CALL(VGetArg(upenv, 23-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1777.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__single_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k223" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k223, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 7 4) ((bruijn printf 26 37) (bruijn ##k.580 0 0) (##string ##string.1778)) ((bruijn ##k.580 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 7-1, 4))) {
V_CALL(VGetArg(upenv, 26-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1778.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__single_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k227" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k227, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 29 37) (bruijn ##k.578 1 0) (##string ##string.1779))
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1779.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k226" };
 VRecordCall(&dbg);
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
  // (if (bruijn debug? 21 1) ((bruijn printf 28 37) (close _V0print__fun__single_k227) (##string ##string.1780) (bruijn name 9 1)) ((bruijn ##k.578 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 21-1, 1))) {
V_CALL(VGetArg(upenv, 28-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k227, env)}),
      VEncodePointer(&_V10string_D1780.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__single_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k233" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k233, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 33 37) (bruijn ##k.569 4 0) (##string ##string.1781))
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1781.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k232" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 32 37) (close _V0print__fun__single_k233) (##string ##string.1782))
V_CALL(VGetArg(upenv, 32-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k233, env)}),
      VEncodePointer(&_V10string_D1782.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k231" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 31 37) (close _V0print__fun__single_k232) (##string ##string.1783) (bruijn num 12 3))
V_CALL(VGetArg(upenv, 31-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k232, env)}),
      VEncodePointer(&_V10string_D1783.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 3)
    );
 }
}
static void _V0print__fun__single_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k230" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 30 37) (close _V0print__fun__single_k231) (##string ##string.1784) (bruijn name 11 1))
V_CALL(VGetArg(upenv, 30-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k231, env)}),
      VEncodePointer(&_V10string_D1784.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0print__fun__single_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k237" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k237, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 33 37) (bruijn ##k.569 4 0) (##string ##string.1781))
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1781.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k236" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 32 37) (close _V0print__fun__single_k237) (##string ##string.1782))
V_CALL(VGetArg(upenv, 32-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k237, env)}),
      VEncodePointer(&_V10string_D1782.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k235" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 31 37) (close _V0print__fun__single_k236) (##string ##string.1786) (bruijn num 12 3))
V_CALL(VGetArg(upenv, 31-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k236, env)}),
      VEncodePointer(&_V10string_D1786.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 3)
    );
 }
}
static void _V0print__fun__single_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k234" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 30 37) (close _V0print__fun__single_k235) (##string ##string.1784) (bruijn name 11 1))
V_CALL(VGetArg(upenv, 30-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k235, env)}),
      VEncodePointer(&_V10string_D1784.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0print__fun__single_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k229" };
 VRecordCall(&dbg);
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
  // (if (bruijn check-args? 10 2) (if (bruijn variadic? 10 4) ((bruijn printf 29 37) (close _V0print__fun__single_k230) (##string ##string.1785) (bruijn num 10 3)) ((bruijn printf 29 37) (close _V0print__fun__single_k234) (##string ##string.1787) (bruijn num 10 3))) ((bruijn ##k.569 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 10-1, 2))) {
if(VDecodeBool(
VGetArg(upenv, 10-1, 4))) {
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k230, env)}),
      VEncodePointer(&_V10string_D1785.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 3)
    );
} else {
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k234, env)}),
      VEncodePointer(&_V10string_D1787.sym, VPOINTER_OTHER),
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
static void _V0print__fun__single_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k242" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k242, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 33 37) (bruijn ##k.565 3 0) (##string ##string.1788) (bruijn num 14 3) (bruijn ##x.567 0 0))
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1788.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 3),
      _var0
    );
 }
}
static void _V0print__fun__single_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k241" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list-ref 32 28) (close _V0print__fun__single_k242) (bruijn args 10 0) (bruijn ##x.568 0 0))
V_CALL(VGetArg(upenv, 32-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k242, env)}),
      VGetArg(upenv, 10-1, 0),
      _var0
    );
 }
}
static void _V0print__fun__single_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k240" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 31 29) (close _V0print__fun__single_k241) (bruijn num 12 3) 1)
V_CALL(VGetArg(upenv, 31-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k241, env)}),
      VGetArg(upenv, 12-1, 3),
      VEncodeInt(1l)
    );
 }
}
static void _V0print__fun__single_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k239" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn variadic? 11 4) ((bruijn printf 30 37) (close _V0print__fun__single_k240) (##string ##string.1789)) ((bruijn ##k.565 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 11-1, 4))) {
V_CALL(VGetArg(upenv, 30-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k240, env)}),
      VEncodePointer(&_V10string_D1789.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__single_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k246" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k246, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 14 4) ((bruijn printf 33 37) (bruijn ##k.563 0 0) (##string ##string.1790)) ((bruijn printf 33 37) (bruijn ##k.563 0 0) (##string ##string.1791)))
if(VDecodeBool(
VGetArg(upenv, 14-1, 4))) {
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1790.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1791.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0print__fun__single_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k250" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k250, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 17 4) ((bruijn + 36 27) (bruijn ##k.562 0 0) (bruijn num 17 3) 1) ((bruijn ##k.562 0 0) (bruijn num 17 3)))
if(VDecodeBool(
VGetArg(upenv, 17-1, 4))) {
V_CALL(VGetArg(upenv, 36-1, 27), runtime,
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
static void _V0print__fun__single_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k254" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k254, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 20 4) ((bruijn + 39 27) (bruijn ##k.560 0 0) (bruijn num 20 3) 1) ((bruijn ##k.560 0 0) (bruijn num 20 3)))
if(VDecodeBool(
VGetArg(upenv, 20-1, 4))) {
V_CALL(VGetArg(upenv, 39-1, 27), runtime,
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
static void _V0print__fun__single_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k258" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k258, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 23 4) ((bruijn printf 42 37) (bruijn ##k.553 7 0) (##string ##string.1792) (bruijn num 23 3)) ((bruijn ##k.553 7 0) #f))
if(VDecodeBool(
VGetArg(upenv, 23-1, 4))) {
V_CALL(VGetArg(upenv, 42-1, 37), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1792.sym, VPOINTER_OTHER),
      VGetArg(upenv, 23-1, 3)
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__single_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0print__fun__single_lambda44" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0print__fun__single_lambda44, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda44, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn printf 42 37) (bruijn ##k.558 0 0) (##string ##string.1793) (bruijn i 0 1) (bruijn arg 0 2))
V_CALL(VGetArg(upenv, 42-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1793.sym, VPOINTER_OTHER),
      _var1,
      _var2
    );
 }
}
static void _V0print__fun__single_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k257" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 41 42) (close _V0print__fun__single_k258) (close _V0print__fun__single_lambda44) (bruijn ##x.559 0 0) (bruijn args 19 0))
V_CALL(VGetArg(upenv, 41-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k258, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_lambda44, env)}),
      _var0,
      VGetArg(upenv, 19-1, 0)
    );
 }
}
static void _V0print__fun__single_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k256" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iota 40 39) (close _V0print__fun__single_k257) (bruijn num 21 3))
V_CALL(VGetArg(upenv, 40-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k257, env)}),
      VGetArg(upenv, 21-1, 3)
    );
 }
}
static void _V0print__fun__single_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k255" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 39 37) (close _V0print__fun__single_k256) (##string ##string.1794) (bruijn nargs 0 0) (bruijn nargs 0 0))
V_CALL(VGetArg(upenv, 39-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k256, env)}),
      VEncodePointer(&_V10string_D1794.sym, VPOINTER_OTHER),
      _var0,
      _var0
    );
 }
}
static void _V0print__fun__single_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k253" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k254) (close _V0print__fun__single_k255))
V_CALL_FUNC(_V0print__fun__single_k254, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k255, env)})
    );
 }
}
static void _V0print__fun__single_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k252" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 37 37) (close _V0print__fun__single_k253) (##string ##string.1795))
V_CALL(VGetArg(upenv, 37-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k253, env)}),
      VEncodePointer(&_V10string_D1795.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k251" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 36 37) (close _V0print__fun__single_k252) (##string ##string.1796) (bruijn ##x.561 0 0))
V_CALL(VGetArg(upenv, 36-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k252, env)}),
      VEncodePointer(&_V10string_D1796.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0print__fun__single_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k249" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.552 1 0) ((close _V0print__fun__single_k250) (close _V0print__fun__single_k251)) ((bruijn ##k.553 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL_FUNC(_V0print__fun__single_k250, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k251, env)})
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__fun__single_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k261" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k261, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 18 4) ((bruijn append 37 26) (bruijn ##k.550 0 0) (bruijn args 15 0) (##inline ##sys.qcons (quote (##string ##string.1797)) (quote ()))) ((bruijn ##k.550 0 0) (bruijn args 15 0)))
if(VDecodeBool(
VGetArg(upenv, 18-1, 4))) {
V_CALL(VGetArg(upenv, 37-1, 26), runtime,
      _var0,
      VGetArg(upenv, 15-1, 0),
      VInlineCons(
VEncodePointer(&_V10string_D1797.sym, VPOINTER_OTHER),
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
static void _V0print__fun__single_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k264" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k264, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 39 37) (bruijn ##k.532 19 0) (##string ##string.1769))
V_CALL(VGetArg(upenv, 39-1, 37), runtime,
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V10string_D1769.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k263" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 38 37) (close _V0print__fun__single_k264) (##string ##string.1781))
V_CALL(VGetArg(upenv, 38-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k264, env)}),
      VEncodePointer(&_V10string_D1781.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k262" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 29 10) (close _V0print__fun__single_k263) (bruijn body 18 5) (bruijn ##x.549 0 0))
V_CALL(VGetArg(upenv, 29-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k263, env)}),
      VGetArg(upenv, 18-1, 5),
      _var0
    );
 }
}
static void _V0print__fun__single_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k260" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k261) (close _V0print__fun__single_k262))
V_CALL_FUNC(_V0print__fun__single_k261, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k262, env)})
    );
 }
}
static void _V0print__fun__single_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k259" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 35 37) (close _V0print__fun__single_k260) (##string ##string.1798) (bruijn body 16 5))
V_CALL(VGetArg(upenv, 35-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k260, env)}),
      VEncodePointer(&_V10string_D1798.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 5)
    );
 }
}
static void _V0print__fun__single_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k248" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k249) (close _V0print__fun__single_k259))
V_CALL_FUNC(_V0print__fun__single_k249, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k259, env)})
    );
 }
}
static void _V0print__fun__single_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k247" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn closes? 25 9) (close _V0print__fun__single_k248) (bruijn body 14 5))
V_CALL(VGetArg(upenv, 25-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k248, env)}),
      VGetArg(upenv, 14-1, 5)
    );
 }
}
static void _V0print__fun__single_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k245" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k246) (close _V0print__fun__single_k247))
V_CALL_FUNC(_V0print__fun__single_k246, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k247, env)})
    );
 }
}
static void _V0print__fun__single_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__single_lambda45" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__single_lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 32 37) (bruijn ##k.564 0 0) (##string ##string.1799) (bruijn arg 0 1))
V_CALL(VGetArg(upenv, 32-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1799.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0print__fun__single_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k244" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 31 42) (close _V0print__fun__single_k245) (close _V0print__fun__single_lambda45) (bruijn args 9 0))
V_CALL(VGetArg(upenv, 31-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k245, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_lambda45, env)}),
      VGetArg(upenv, 9-1, 0)
    );
 }
}
static void _V0print__fun__single_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k243" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 30 37) (close _V0print__fun__single_k244) (##string ##string.1800) (bruijn name 11 1) (bruijn num 11 3))
V_CALL(VGetArg(upenv, 30-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k244, env)}),
      VEncodePointer(&_V10string_D1800.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 1),
      VGetArg(upenv, 11-1, 3)
    );
 }
}
static void _V0print__fun__single_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k238" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k239) (close _V0print__fun__single_k243))
V_CALL_FUNC(_V0print__fun__single_k239, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k243, env)})
    );
 }
}
static void _V0print__fun__single_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k228" };
 VRecordCall(&dbg);
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
  // ((close _V0print__fun__single_k229) (close _V0print__fun__single_k238))
V_CALL_FUNC(_V0print__fun__single_k229, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k238, env)})
    );
 }
}
static void _V0print__fun__single_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k225" };
 VRecordCall(&dbg);
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
  // ((close _V0print__fun__single_k226) (close _V0print__fun__single_k228))
V_CALL_FUNC(_V0print__fun__single_k226, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k228, env)})
    );
 }
}
static void _V0print__fun__single_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k224" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 26 37) (close _V0print__fun__single_k225) (##string ##string.1791))
V_CALL(VGetArg(upenv, 26-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k225, env)}),
      VEncodePointer(&_V10string_D1791.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__fun__single_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k222" };
 VRecordCall(&dbg);
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
  // ((close _V0print__fun__single_k223) (close _V0print__fun__single_k224))
V_CALL_FUNC(_V0print__fun__single_k223, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k224, env)})
    );
 }
}
static void _V0print__fun__single_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__single_lambda46" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__single_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 25 37) (bruijn ##k.581 0 0) (##string ##string.1801) (bruijn arg 0 1))
V_CALL(VGetArg(upenv, 25-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1801.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0print__fun__single_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k221" };
 VRecordCall(&dbg);
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
  // ((bruijn for-each 24 42) (close _V0print__fun__single_k222) (close _V0print__fun__single_lambda46) (bruijn args 2 0))
V_CALL(VGetArg(upenv, 24-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k222, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_lambda46, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0print__fun__single_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k220" };
 VRecordCall(&dbg);
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
  // ((bruijn printf 23 37) (close _V0print__fun__single_k221) (##string ##string.1802) (bruijn name 4 1))
V_CALL(VGetArg(upenv, 23-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k221, env)}),
      VEncodePointer(&_V10string_D1802.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0print__fun__single_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k218" };
 VRecordCall(&dbg);
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
static void _V0print__fun__single_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__fun__single_k217" };
 VRecordCall(&dbg);
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
  // ((bruijn gen-args 1 1) (close _V0print__fun__single_k218) (bruijn num 2 3))
V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k218, env)}),
      upenv->up->vars[3]
    );
 }
}
static void _V0gen__args_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__args_lambda48" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__args_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__args_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 23 33) (bruijn ##k.584 0 0) (##string ##string.1803) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 23-1, 33), runtime,
      _var0,
      VEncodePointer(&_V10string_D1803.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0gen__args_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gen__args_k265" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__args_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__args_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 22 32) (bruijn ##k.583 1 0) (close _V0gen__args_lambda48) (bruijn ##x.585 0 0))
V_CALL(VGetArg(upenv, 22-1, 32), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__args_lambda48, env)}),
      _var0
    );
 }
}
static void _V0gen__args_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gen__args_lambda47" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__args_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__args_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn iota 21 39) (close _V0gen__args_k265) (bruijn num 0 1))
V_CALL(VGetArg(upenv, 21-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__args_k265, env)}),
      _var1
    );
 }
}
static void _V0print__fun__single_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__fun__single_lambda43" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0print__fun__single_k217) (bruijn gen-args 0 1) (close _V0gen__args_lambda47))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k217, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__args_lambda47, env)})
    );
 }
}
static void _V0print__fun__single_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 static VDebugInfo dbg = { "_V0print__fun__single_lambda42" };
 VRecordCall(&dbg);
 if(argc != 7) {
  VError("Not enough arguments to _V0print__fun__single_lambda42, got ~D~N"
  "-- expected 7~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda42, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
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
  // ((close _V0print__fun__single_lambda43) (bruijn ##k.531 0 0) #f)
V_CALL_FUNC(_V0print__fun__single_lambda43, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0printout2_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k80" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k81) (bruijn print-fun-single 10 11) (close _V0print__fun__single_lambda42))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k81, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_lambda42, env)})
    );
 }
}
static void _V0print__expr_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k273" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k273, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 5 1) (bruijn ##k.755 3 0) (bruijn ##x.761 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k272" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.166 0 0)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.166 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.166 0 0))) ((bruijn display 29 23) (close _V0print__expr_k273) (##string ##string.1804)) ((bruijn ##k.755 2 0) #f)) ((bruijn ##k.755 2 0) #f)) ((bruijn ##k.755 2 0) #f))
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
V_CALL(VGetArg(upenv, 29-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k273, env)}),
      VEncodePointer(&_V10string_D1804.sym, VPOINTER_OTHER)
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
static void _V0print__expr_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k271" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.757 0 0) ((close _V0print__expr_k272) (##inline ##sys.cdr (bruijn ##expr.165 1 1))) ((bruijn ##k.755 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k272, env, runtime,
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
 static VDebugInfo dbg = { "_V0print__expr_lambda53" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.165 0 1)) ((bruijn equal? 27 35) (close _V0print__expr_k271) (quote quote) (##inline ##sys.car (bruijn ##expr.165 0 1))) ((bruijn ##k.755 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 27-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k271, env)}),
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
static void _V0print__expr_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k280" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k280, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 9 1) (bruijn ##k.741 6 0) (bruijn ##x.750 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0print__expr_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k279" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.170 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.170 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.168 3 0))) ((bruijn print-literal-string 25 5) (close _V0print__expr_k280) (##inline ##sys.car (bruijn ##expr.170 0 0))) ((bruijn ##k.741 5 0) #f)) ((bruijn ##k.741 5 0) #f)) ((bruijn ##k.741 5 0) #f))
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
V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k280, env)}),
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
static void _V0print__expr_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k278" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.746 0 0) ((close _V0print__expr_k279) (##inline ##sys.cdr (bruijn ##expr.169 1 0))) ((bruijn ##k.741 4 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k279, env, runtime,
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
static void _V0print__expr_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k277" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.169 0 0)) ((bruijn equal? 31 35) (close _V0print__expr_k278) (quote ##string) (##inline ##sys.car (bruijn ##expr.169 0 0))) ((bruijn ##k.741 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 31-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k278, env)}),
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
static void _V0print__expr_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k276" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.168 0 0)) ((close _V0print__expr_k277) (##inline ##sys.car (bruijn ##expr.168 0 0))) ((bruijn ##k.741 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k277, env, runtime,
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
static void _V0print__expr_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k275" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.743 0 0) ((close _V0print__expr_k276) (##inline ##sys.cdr (bruijn ##expr.167 1 1))) ((bruijn ##k.741 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k276, env, runtime,
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
static void _V0print__expr_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda54" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.167 0 1)) ((bruijn equal? 28 35) (close _V0print__expr_k275) (quote quote) (##inline ##sys.car (bruijn ##expr.167 0 1))) ((bruijn ##k.741 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 28-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k275, env)}),
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
static void _V0print__expr_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k284" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k284, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 7 1) (bruijn ##k.733 3 0) (bruijn ##x.738 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k283" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.172 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.172 0 0))) ((bruijn print-literal 23 7) (close _V0print__expr_k284) (##inline ##sys.car (bruijn ##expr.172 0 0))) ((bruijn ##k.733 2 0) #f)) ((bruijn ##k.733 2 0) #f))
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
V_CALL(VGetArg(upenv, 23-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k284, env)}),
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
static void _V0print__expr_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k282" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.735 0 0) ((close _V0print__expr_k283) (##inline ##sys.cdr (bruijn ##expr.171 1 1))) ((bruijn ##k.733 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k283, env, runtime,
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
static void _V0print__expr_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda55" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.171 0 1)) ((bruijn equal? 29 35) (close _V0print__expr_k282) (quote quote) (##inline ##sys.car (bruijn ##expr.171 0 1))) ((bruijn ##k.733 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 29-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k282, env)}),
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
static void _V0print__expr_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k288" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k288, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 8 1) (bruijn ##k.725 3 0) (bruijn ##x.730 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k287" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.174 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.174 0 0))) ((bruijn printf 32 37) (close _V0print__expr_k288) (##string ##string.1805) (##inline ##sys.car (bruijn ##expr.174 0 0))) ((bruijn ##k.725 2 0) #f)) ((bruijn ##k.725 2 0) #f))
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
V_CALL(VGetArg(upenv, 32-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k288, env)}),
      VEncodePointer(&_V10string_D1805.sym, VPOINTER_OTHER),
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
static void _V0print__expr_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k286" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.727 0 0) ((close _V0print__expr_k287) (##inline ##sys.cdr (bruijn ##expr.173 1 1))) ((bruijn ##k.725 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k287, env, runtime,
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
static void _V0print__expr_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda56" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda56, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.173 0 1)) ((bruijn equal? 30 35) (close _V0print__expr_k286) (quote close) (##inline ##sys.car (bruijn ##expr.173 0 1))) ((bruijn ##k.725 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 30-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k286, env)}),
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
static void _V0print__expr_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k298" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k298, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 40 23) (bruijn ##k.717 1 0) (bruijn ##x.718 0 0))
V_CALL(VGetArg(upenv, 40-1, 23), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k302" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k302, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.722 0 0) ((bruijn printf 43 37) (bruijn ##k.717 4 0) (##string ##string.1809) (bruijn right 6 0)) ((bruijn printf 43 37) (bruijn ##k.717 4 0) (##string ##string.1810) (bruijn up 8 0) (bruijn right 6 0)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 43-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1809.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0)
    );
} else {
V_CALL(VGetArg(upenv, 43-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1810.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 6-1, 0)
    );
}
 }
}
static void _V0print__expr_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k301" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.721 0 0) ((bruijn printf 42 37) (bruijn ##k.717 3 0) (##string ##string.1808) (bruijn right 5 0)) ((bruijn = 42 22) (close _V0print__expr_k302) (bruijn up 7 0) 4))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 42-1, 37), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1808.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0)
    );
} else {
V_CALL(VGetArg(upenv, 42-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k302, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeInt(4l)
    );
}
 }
}
static void _V0print__expr_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k300" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.720 0 0) ((bruijn printf 41 37) (bruijn ##k.717 2 0) (##string ##string.1807) (bruijn right 4 0)) ((bruijn = 41 22) (close _V0print__expr_k301) (bruijn up 6 0) 3))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 41-1, 37), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1807.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 41-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k301, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(3l)
    );
}
 }
}
static void _V0print__expr_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k299" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.719 0 0) ((bruijn printf 40 37) (bruijn ##k.717 1 0) (##string ##string.1806) (bruijn right 3 0)) ((bruijn = 40 22) (close _V0print__expr_k300) (bruijn up 5 0) 2))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 40-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1806.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 40-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k300, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(2l)
    );
}
 }
}
static void _V0print__expr_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k297" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.716 1 0) ((bruijn list-ref 39 28) (close _V0print__expr_k298) (bruijn args 21 2) (bruijn right 2 0)) ((bruijn = 39 22) (close _V0print__expr_k299) (bruijn up 4 0) 1))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 39-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k298, env)}),
      VGetArg(upenv, 21-1, 2),
      upenv->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 39-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k299, env)}),
      upenv->up->up->up->vars[0],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0print__expr_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k303" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k303, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 14 1) (bruijn ##k.708 8 0) (bruijn ##x.715 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0print__expr_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k296" };
 VRecordCall(&dbg);
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
  // ((close _V0print__expr_k297) (close _V0print__expr_k303))
V_CALL_FUNC(_V0print__expr_k297, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k303, env)})
    );
 }
}
static void _V0print__expr_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k295" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.178 1 0))) ((bruijn = 37 22) (close _V0print__expr_k296) (bruijn up 2 0) 0) ((bruijn ##k.708 6 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 37-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k296, env)}),
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
static void _V0print__expr_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k294" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.178 0 0)) ((close _V0print__expr_k295) (##inline ##sys.car (bruijn ##expr.178 0 0))) ((bruijn ##k.708 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k295, env, runtime,
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
static void _V0print__expr_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k293" };
 VRecordCall(&dbg);
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
  // ((close _V0print__expr_k294) (##inline ##sys.cdr (bruijn ##expr.177 1 0)))
V_CALL_FUNC(_V0print__expr_k294, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0print__expr_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k292" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.177 0 0)) ((close _V0print__expr_k293) (##inline ##sys.car (bruijn ##expr.177 0 0))) ((bruijn ##k.708 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k293, env, runtime,
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
static void _V0print__expr_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k291" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.176 0 0)) ((close _V0print__expr_k292) (##inline ##sys.cdr (bruijn ##expr.176 0 0))) ((bruijn ##k.708 2 0) #f))
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
 static VDebugInfo dbg = { "_V0print__expr_k290" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.710 0 0) ((close _V0print__expr_k291) (##inline ##sys.cdr (bruijn ##expr.175 1 1))) ((bruijn ##k.708 1 0) #f))
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
static void _V0print__expr_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda57" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.175 0 1)) ((bruijn equal? 31 35) (close _V0print__expr_k290) (quote bruijn) (##inline ##sys.car (bruijn ##expr.175 0 1))) ((bruijn ##k.708 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 31-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k290, env)}),
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
static void _V0print__expr_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k315" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k315, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 18 1) (bruijn ##k.692 11 0) (bruijn ##x.699 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0
    );
 }
}
static void _V0print__expr_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k314" };
 VRecordCall(&dbg);
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
  // ((bruijn displayln 42 40) (close _V0print__expr_k315) (##string ##string.1746))
V_CALL(VGetArg(upenv, 42-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k315, env)}),
      VEncodePointer(&_V10string_D1746.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__expr_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k313" };
 VRecordCall(&dbg);
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
  // ((bruijn print-expr 33 10) (close _V0print__expr_k314) (##inline ##sys.car (bruijn ##expr.182 5 0)) (bruijn args 23 2))
V_CALL(VGetArg(upenv, 33-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k314, env)}),
      VInlineCar(
VGetArg(upenv, 5-1, 0)
    )
,
      VGetArg(upenv, 23-1, 2)
    );
 }
}
static void _V0print__expr_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k312" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn displayln 40 40) (close _V0print__expr_k313) (##string ##string.1811))
V_CALL(VGetArg(upenv, 40-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k313, env)}),
      VEncodePointer(&_V10string_D1811.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__expr_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k311" };
 VRecordCall(&dbg);
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
  // ((bruijn print-expr 31 10) (close _V0print__expr_k312) (##inline ##sys.car (bruijn ##expr.181 4 0)) (bruijn args 21 2))
V_CALL(VGetArg(upenv, 31-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k312, env)}),
      VInlineCar(
upenv->up->up->up->vars[0]
    )
,
      VGetArg(upenv, 21-1, 2)
    );
 }
}
static void _V0print__expr_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k310" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn displayln 38 40) (close _V0print__expr_k311) (##string ##string.1812))
V_CALL(VGetArg(upenv, 38-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k311, env)}),
      VEncodePointer(&_V10string_D1812.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__expr_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k309" };
 VRecordCall(&dbg);
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
  // ((bruijn print-expr 29 10) (close _V0print__expr_k310) (##inline ##sys.car (bruijn ##expr.180 3 0)) (bruijn args 19 2))
V_CALL(VGetArg(upenv, 29-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k310, env)}),
      VInlineCar(
upenv->up->up->vars[0]
    )
,
      VGetArg(upenv, 19-1, 2)
    );
 }
}
static void _V0print__expr_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k308" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.182 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.182 0 0))) ((bruijn displayln 36 40) (close _V0print__expr_k309) (##string ##string.1813)) ((bruijn ##k.692 4 0) #f)) ((bruijn ##k.692 4 0) #f))
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
V_CALL(VGetArg(upenv, 36-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k309, env)}),
      VEncodePointer(&_V10string_D1813.sym, VPOINTER_OTHER)
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
static void _V0print__expr_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k307" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.181 0 0)) ((close _V0print__expr_k308) (##inline ##sys.cdr (bruijn ##expr.181 0 0))) ((bruijn ##k.692 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k308, env, runtime,
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
static void _V0print__expr_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k306" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.180 0 0)) ((close _V0print__expr_k307) (##inline ##sys.cdr (bruijn ##expr.180 0 0))) ((bruijn ##k.692 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k307, env, runtime,
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
static void _V0print__expr_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k305" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.694 0 0) ((close _V0print__expr_k306) (##inline ##sys.cdr (bruijn ##expr.179 1 1))) ((bruijn ##k.692 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k306, env, runtime,
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
static void _V0print__expr_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda58" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.179 0 1)) ((bruijn equal? 32 35) (close _V0print__expr_k305) (quote if) (##inline ##sys.car (bruijn ##expr.179 0 1))) ((bruijn ##k.692 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 32-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k305, env)}),
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
static void _V0print__expr_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k321" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k321, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 13 1) (bruijn ##k.682 5 0) (bruijn ##x.689 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0print__expr_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k320" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.186 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.186 0 0))) ((bruijn print-set 18 4) (close _V0print__expr_k321) (##inline ##sys.car (bruijn ##expr.184 2 0)) (##inline ##sys.car (bruijn ##expr.185 1 0)) (##inline ##sys.car (bruijn ##expr.186 0 0)) #f) ((bruijn ##k.682 4 0) #f)) ((bruijn ##k.682 4 0) #f))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k321, env)}),
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
static void _V0print__expr_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k319" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.185 0 0)) ((close _V0print__expr_k320) (##inline ##sys.cdr (bruijn ##expr.185 0 0))) ((bruijn ##k.682 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k320, env, runtime,
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
static void _V0print__expr_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k318" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 0)) ((close _V0print__expr_k319) (##inline ##sys.cdr (bruijn ##expr.184 0 0))) ((bruijn ##k.682 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k319, env, runtime,
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
static void _V0print__expr_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k317" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.684 0 0) ((close _V0print__expr_k318) (##inline ##sys.cdr (bruijn ##expr.183 1 1))) ((bruijn ##k.682 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k318, env, runtime,
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
static void _V0print__expr_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda59" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda59, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.183 0 1)) ((bruijn equal? 33 35) (close _V0print__expr_k317) (quote set!) (##inline ##sys.car (bruijn ##expr.183 0 1))) ((bruijn ##k.682 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 33-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k317, env)}),
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
static void _V0print__expr_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k327" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k327, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 14 1) (bruijn ##k.672 5 0) (bruijn ##x.679 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0print__expr_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k326" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.190 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.190 0 0))) ((bruijn print-define-global 19 3) (close _V0print__expr_k327) (##inline ##sys.car (bruijn ##expr.188 2 0)) (##inline ##sys.car (bruijn ##expr.189 1 0)) (##inline ##sys.car (bruijn ##expr.190 0 0)) #f) ((bruijn ##k.672 4 0) #f)) ((bruijn ##k.672 4 0) #f))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k327, env)}),
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
static void _V0print__expr_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k325" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.189 0 0)) ((close _V0print__expr_k326) (##inline ##sys.cdr (bruijn ##expr.189 0 0))) ((bruijn ##k.672 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k326, env, runtime,
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
static void _V0print__expr_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k324" };
 VRecordCall(&dbg);
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
  // (if (##inline ##sys.pair? (bruijn ##expr.188 0 0)) ((close _V0print__expr_k325) (##inline ##sys.cdr (bruijn ##expr.188 0 0))) ((bruijn ##k.672 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__expr_k325, env, runtime,
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
static void _V0print__expr_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k323" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.674 0 0) ((close _V0print__expr_k324) (##inline ##sys.cdr (bruijn ##expr.187 1 1))) ((bruijn ##k.672 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k324, env, runtime,
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
static void _V0print__expr_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda60" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.187 0 1)) ((bruijn equal? 34 35) (close _V0print__expr_k323) (quote define) (##inline ##sys.car (bruijn ##expr.187 0 1))) ((bruijn ##k.672 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 34-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k323, env)}),
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
static void _V0print__expr_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k331" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k331, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 13 1) (bruijn ##k.666 3 0) (bruijn ##x.670 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k330" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.192 0 0)) ((bruijn print-inline 18 5) (close _V0print__expr_k331) (##inline ##sys.car (bruijn ##expr.192 0 0)) (##inline ##sys.cdr (bruijn ##expr.192 0 0))) ((bruijn ##k.666 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k331, env)}),
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
static void _V0print__expr_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k329" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.668 0 0) ((close _V0print__expr_k330) (##inline ##sys.cdr (bruijn ##expr.191 1 1))) ((bruijn ##k.666 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k330, env, runtime,
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
static void _V0print__expr_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda61" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.191 0 1)) ((bruijn equal? 35 35) (close _V0print__expr_k329) (quote ##inline) (##inline ##sys.car (bruijn ##expr.191 0 1))) ((bruijn ##k.666 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 35-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k329, env)}),
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
static void _V0print__expr_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k335" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k335, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 14 1) (bruijn ##k.658 3 0) (bruijn ##x.663 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k334" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.194 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.194 0 0))) ((bruijn print-literal-string 30 5) (close _V0print__expr_k335) (##inline ##sys.car (bruijn ##expr.194 0 0))) ((bruijn ##k.658 2 0) #f)) ((bruijn ##k.658 2 0) #f))
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
V_CALL(VGetArg(upenv, 30-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k335, env)}),
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
static void _V0print__expr_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k333" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.660 0 0) ((close _V0print__expr_k334) (##inline ##sys.cdr (bruijn ##expr.193 1 1))) ((bruijn ##k.658 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k334, env, runtime,
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
static void _V0print__expr_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda62" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda62, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.193 0 1)) ((bruijn equal? 36 35) (close _V0print__expr_k333) (quote ##string) (##inline ##sys.car (bruijn ##expr.193 0 1))) ((bruijn ##k.658 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 36-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k333, env)}),
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
static void _V0print__expr_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k339" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k339, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 15 1) (bruijn ##k.650 3 0) (bruijn ##x.655 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k338" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.196 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.196 0 0))) ((bruijn print-intrinsic 31 6) (close _V0print__expr_k339) (##inline ##sys.car (bruijn ##expr.196 0 0))) ((bruijn ##k.650 2 0) #f)) ((bruijn ##k.650 2 0) #f))
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
V_CALL(VGetArg(upenv, 31-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k339, env)}),
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
static void _V0print__expr_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k337" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.652 0 0) ((close _V0print__expr_k338) (##inline ##sys.cdr (bruijn ##expr.195 1 1))) ((bruijn ##k.650 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k338, env, runtime,
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
static void _V0print__expr_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda63" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda63, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.195 0 1)) ((bruijn equal? 37 35) (close _V0print__expr_k337) (quote ##intrinsic) (##inline ##sys.car (bruijn ##expr.195 0 1))) ((bruijn ##k.650 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 37-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k337, env)}),
      VEncodePointer(&_V10intrinsic.sym, VPOINTER_OTHER),
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
static void _V0print__expr_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k343" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k343, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 16 1) (bruijn ##k.642 3 0) (bruijn ##x.647 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k342" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.198 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.198 0 0))) ((bruijn printf 40 37) (close _V0print__expr_k343) (##string ##string.1814) (##inline ##sys.car (bruijn ##expr.198 0 0))) ((bruijn ##k.642 2 0) #f)) ((bruijn ##k.642 2 0) #f))
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
V_CALL(VGetArg(upenv, 40-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k343, env)}),
      VEncodePointer(&_V10string_D1814.sym, VPOINTER_OTHER),
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
static void _V0print__expr_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k341" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.644 0 0) ((close _V0print__expr_k342) (##inline ##sys.cdr (bruijn ##expr.197 1 1))) ((bruijn ##k.642 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k342, env, runtime,
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
static void _V0print__expr_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda64" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda64, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.197 0 1)) ((bruijn equal? 38 35) (close _V0print__expr_k341) (quote ##foreign.function) (##inline ##sys.car (bruijn ##expr.197 0 1))) ((bruijn ##k.642 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 38-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k341, env)}),
      VEncodePointer(&_V10foreign_Dfunction.sym, VPOINTER_OTHER),
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
static void _V0print__expr_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k346" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k346, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.618 1 0) (##inline ##sys.cdr (bruijn ##expr.199 5 1)) (quote ()))
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
static void _V0loop_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k348" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k348, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.202 4 1) (bruijn ##k.629 1 0) (bruijn ##expr.204 2 1) (bruijn ##x.630 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k347" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.204 1 1))) ((bruijn reverse 45 46) (close _V0loop_k348) (bruijn ##xs.201 1 2)) ((bruijn ##k.629 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 45-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k348, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k351" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k351, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.202 7 1) (bruijn ##k.623 2 0) (bruijn ##expr.204 5 1) (bruijn ##x.625 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k350" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 48 46) (close _V0loop_k351) (bruijn ##xs.201 4 2))
V_CALL(VGetArg(upenv, 48-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k351, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda71" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda71, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.203 0 1) (close _V0loop_k350) (##inline ##sys.cdr (bruijn ##expr.204 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.204 3 1)) (bruijn ##xs.201 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k350, env)}),
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
static void _V0loop_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda70" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 46 36) (bruijn ##k.622 0 0) (close _V0loop_lambda71))
V_CALL(VGetArg(upenv, 46-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda71, env)})
    );
 }
}
static void _V0loop_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k349" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 45 21) (bruijn ##k.620 1 0) (close _V0loop_lambda70) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 45-1, 21), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda70, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda69" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda69, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda69, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k347) (close _V0loop_k349))
V_CALL_FUNC(_V0loop_k347, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k349, env)})
    );
 }
}
static void _V0print__expr_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda68" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda68, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0print__expr_k346) (bruijn loop 0 1) (close _V0loop_lambda69))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k346, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda69, env)})
    );
 }
}
static void _V0print__expr_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda67" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__expr_lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__expr_lambda68) (bruijn ##k.617 0 0) #f)
V_CALL_FUNC(_V0print__expr_lambda68, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0print__expr_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_lambda66" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 41 36) (bruijn ##k.616 0 0) (close _V0print__expr_lambda67))
V_CALL(VGetArg(upenv, 41-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda67, env)})
    );
 }
}
static void _V0print__expr_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k356" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k356, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 46 18) (bruijn ##k.640 1 0) (bruijn ##x.641 0 0) (quote ##intrinsic))
V_CALL(VGetArg(upenv, 46-1, 18), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V10intrinsic.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__expr_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k355" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.639 1 0) ((bruijn car 45 30) (close _V0print__expr_k356) (bruijn f 5 0)) ((bruijn ##k.640 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 45-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k356, env)}),
      VGetArg(upenv, 5-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k358" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k358, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-builtin-apply 27 1) (bruijn ##k.636 3 0) (bruijn ##x.638 0 0) (bruijn xs 5 2) #f)
V_CALL(VGetArg(upenv, 27-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 2),
      VEncodeBool(false)
    );
 }
}
static void _V0print__expr_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k357" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.637 0 0) ((bruijn cadr 45 19) (close _V0print__expr_k358) (bruijn f 5 0)) ((bruijn print-closure-apply 26 2) (bruijn ##k.636 2 0) (bruijn f 5 0) (bruijn xs 4 2) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 45-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k358, env)}),
      VGetArg(upenv, 5-1, 0)
    );
} else {
V_CALL(VGetArg(upenv, 26-1, 2), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[2],
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k354" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_k355) (close _V0print__expr_k357))
V_CALL_FUNC(_V0print__expr_k355, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k357, env)})
    );
 }
}
static void _V0print__expr_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k353" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.635 1 0) ((bruijn print-builtin-apply 24 1) (bruijn ##k.636 0 0) (bruijn f 3 0) (bruijn xs 2 2) #f) ((bruijn pair? 43 17) (close _V0print__expr_k354) (bruijn f 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      _var0,
      upenv->up->up->vars[0],
      upenv->up->vars[2],
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 43-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k354, env)}),
      upenv->up->up->vars[0]
    );
}
 }
}
static void _V0print__expr_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k359" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k359, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 18 1) (bruijn ##k.632 2 0) (bruijn ##x.634 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k352" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_k353) (close _V0print__expr_k359))
V_CALL_FUNC(_V0print__expr_k353, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k359, env)})
    );
 }
}
static void _V0print__expr_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0print__expr_lambda72" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0print__expr_lambda72, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda72, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn lookup-intrinsic2 41 20) (close _V0print__expr_k352) (bruijn f 1 0)) ((bruijn ##k.632 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 41-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k352, env)}),
      upenv->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__expr_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k345" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 40 21) (bruijn ##k.614 1 0) (close _V0print__expr_lambda66) (close _V0print__expr_lambda72))
V_CALL(VGetArg(upenv, 40-1, 21), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda66, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda72, env)})
    );
 }
}
static void _V0print__expr_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda65" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda65, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.199 0 1)) ((close _V0print__expr_k345) (##inline ##sys.car (bruijn ##expr.199 0 1))) ((bruijn ##k.614 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0print__expr_k345, env, runtime,
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
static void _V0print__expr_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k362" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k362, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.612 1 0) ((bruijn print-global 34 1) (bruijn ##k.613 0 0) (bruijn x 2 1)) ((bruijn print-literal 34 7) (bruijn ##k.613 0 0) (bruijn x 2 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 34-1, 1), runtime,
      _var0,
      upenv->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 34-1, 7), runtime,
      _var0,
      upenv->up->vars[1]
    );
}
 }
}
static void _V0print__expr_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k363" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k363, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 17 1) (bruijn ##k.610 2 0) (bruijn ##x.611 0 0))
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0print__expr_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k361" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_k362) (close _V0print__expr_k363))
V_CALL_FUNC(_V0print__expr_k362, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k363, env)})
    );
 }
}
static void _V0print__expr_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda73" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda73, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 40 16) (close _V0print__expr_k361) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 40-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k361, env)}),
      _var1
    );
 }
}
static void _V0print__expr_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k365" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k365, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 16 1) (bruijn ##k.594 15 0) (bruijn ##x.609 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 15-1, 0),
      _var0
    );
 }
}
static void _V0print__expr_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k364" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn compiler-error 40 43) (close _V0print__expr_k365) (##string ##string.1815) (bruijn expr 22 1))
V_CALL(VGetArg(upenv, 40-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k365, env)}),
      VEncodePointer(&_V10string_D1815.sym, VPOINTER_OTHER),
      VGetArg(upenv, 22-1, 1)
    );
 }
}
static void _V0print__expr_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k360" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda73) (close _V0print__expr_k364) (bruijn ##input.164 13 1))
V_CALL_FUNC(_V0print__expr_lambda73, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k364, env)}),
      VGetArg(upenv, 13-1, 1)
    );
 }
}
static void _V0print__expr_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k344" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda65) (close _V0print__expr_k360) (bruijn ##input.164 12 1))
V_CALL_FUNC(_V0print__expr_lambda65, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k360, env)}),
      VGetArg(upenv, 12-1, 1)
    );
 }
}
static void _V0print__expr_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k340" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda64) (close _V0print__expr_k344) (bruijn ##input.164 11 1))
V_CALL_FUNC(_V0print__expr_lambda64, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k344, env)}),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0print__expr_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k336" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda63) (close _V0print__expr_k340) (bruijn ##input.164 10 1))
V_CALL_FUNC(_V0print__expr_lambda63, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k340, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0print__expr_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k332" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda62) (close _V0print__expr_k336) (bruijn ##input.164 9 1))
V_CALL_FUNC(_V0print__expr_lambda62, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k336, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0print__expr_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k328" };
 VRecordCall(&dbg);
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
  // ((close _V0print__expr_lambda61) (close _V0print__expr_k332) (bruijn ##input.164 8 1))
V_CALL_FUNC(_V0print__expr_lambda61, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k332, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0print__expr_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k322" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda60) (close _V0print__expr_k328) (bruijn ##input.164 7 1))
V_CALL_FUNC(_V0print__expr_lambda60, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k328, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0print__expr_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k316" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda59) (close _V0print__expr_k322) (bruijn ##input.164 6 1))
V_CALL_FUNC(_V0print__expr_lambda59, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k322, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0print__expr_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k304" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda58) (close _V0print__expr_k316) (bruijn ##input.164 5 1))
V_CALL_FUNC(_V0print__expr_lambda58, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k316, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0print__expr_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k289" };
 VRecordCall(&dbg);
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
  // ((close _V0print__expr_lambda57) (close _V0print__expr_k304) (bruijn ##input.164 4 1))
V_CALL_FUNC(_V0print__expr_lambda57, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k304, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0print__expr_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k285" };
 VRecordCall(&dbg);
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
  // ((close _V0print__expr_lambda56) (close _V0print__expr_k289) (bruijn ##input.164 3 1))
V_CALL_FUNC(_V0print__expr_lambda56, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k289, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0print__expr_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k281" };
 VRecordCall(&dbg);
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
  // ((close _V0print__expr_lambda55) (close _V0print__expr_k285) (bruijn ##input.164 2 1))
V_CALL_FUNC(_V0print__expr_lambda55, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k285, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0print__expr_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k274" };
 VRecordCall(&dbg);
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
  // ((close _V0print__expr_lambda54) (close _V0print__expr_k281) (bruijn ##input.164 1 1))
V_CALL_FUNC(_V0print__expr_lambda54, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k281, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__expr_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda52" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__expr_lambda53) (close _V0print__expr_k274) (bruijn ##input.164 0 1))
V_CALL_FUNC(_V0print__expr_lambda53, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k274, env)}),
      _var1
    );
 }
}
static void _V0print__expr_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__expr_lambda51" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__expr_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__expr_lambda52) (bruijn ##k.593 0 0) (bruijn expr 7 1))
V_CALL_FUNC(_V0print__expr_lambda52, env, runtime,
      _var0,
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0print__expr_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k270" };
 VRecordCall(&dbg);
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
  // ((bruijn call/cc 24 36) (bruijn ##k.587 5 0) (close _V0print__expr_lambda51))
V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda51, env)})
    );
 }
}
static void _V0print__inline_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__inline_k368" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k368, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.777 1 0) ((bruijn compiler-error 27 43) (bruijn ##k.778 0 0) (##string ##string.1816) (bruijn f 3 1)) ((bruijn ##k.778 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 27-1, 43), runtime,
      _var0,
      VEncodePointer(&_V10string_D1816.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__inline_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__inline_k377" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k377, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-expr 28 10) (bruijn ##k.772 1 0) (bruijn x 1 1) (bruijn args 18 2))
V_CALL(VGetArg(upenv, 28-1, 10), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 18-1, 2)
    );
 }
}
static void _V0print__inline_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__inline_lambda75" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__inline_lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_lambda75, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn printf 35 37) (close _V0print__inline_k377) (##string ##string.1817))
V_CALL(VGetArg(upenv, 35-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k377, env)}),
      VEncodePointer(&_V10string_D1817.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__inline_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__inline_k376" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 34 42) (bruijn ##k.770 3 0) (close _V0print__inline_lambda75) (bruijn ##x.774 0 0))
V_CALL(VGetArg(upenv, 34-1, 42), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_lambda75, env)}),
      _var0
    );
 }
}
static void _V0print__inline_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__inline_k375" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 33 24) (close _V0print__inline_k376) (bruijn xs 9 2))
V_CALL(VGetArg(upenv, 33-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k376, env)}),
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0print__inline_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__inline_k374" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 24 10) (close _V0print__inline_k375) (bruijn ##x.775 0 0) (bruijn args 14 2))
V_CALL(VGetArg(upenv, 24-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k375, env)}),
      _var0,
      VGetArg(upenv, 14-1, 2)
    );
 }
}
static void _V0print__inline_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__inline_k373" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.769 1 0) ((bruijn car 31 30) (close _V0print__inline_k374) (bruijn xs 7 2)) ((bruijn ##k.770 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 31-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k374, env)}),
      VGetArg(upenv, 7-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__inline_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__inline_k378" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k378, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 31 37) (bruijn ##k.765 7 0) (##string ##string.1818))
V_CALL(VGetArg(upenv, 31-1, 37), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1818.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__inline_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__inline_k372" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__inline_k373) (close _V0print__inline_k378))
V_CALL_FUNC(_V0print__inline_k373, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k378, env)})
    );
 }
}
static void _V0print__inline_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__inline_k371" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 29 45) (close _V0print__inline_k372) (bruijn ##x.776 0 0))
V_CALL(VGetArg(upenv, 29-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k372, env)}),
      _var0
    );
 }
}
static void _V0print__inline_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__inline_k370" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 28 44) (close _V0print__inline_k371) (bruijn xs 4 2))
V_CALL(VGetArg(upenv, 28-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k371, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0print__inline_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__inline_k369" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 27 37) (close _V0print__inline_k370) (##string ##string.1819) (bruijn inline 2 0))
V_CALL(VGetArg(upenv, 27-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k370, env)}),
      VEncodePointer(&_V10string_D1819.sym, VPOINTER_OTHER),
      upenv->up->vars[0]
    );
 }
}
static void _V0print__inline_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__inline_k367" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__inline_k368) (close _V0print__inline_k369))
V_CALL_FUNC(_V0print__inline_k368, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k369, env)})
    );
 }
}
static void _V0print__inline_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__inline_k366" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 25 45) (close _V0print__inline_k367) (bruijn inline 0 0))
V_CALL(VGetArg(upenv, 25-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k367, env)}),
      _var0
    );
 }
}
static void _V0print__inline_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0print__inline_lambda74" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0print__inline_lambda74, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_lambda74, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn lookup-inline 24 25) (close _V0print__inline_k366) (bruijn f 0 1))
V_CALL(VGetArg(upenv, 24-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k366, env)}),
      _var1
    );
 }
}
static void _V0print__expr_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k269" };
 VRecordCall(&dbg);
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
  // (set! (close _V0print__expr_k270) (bruijn print-inline 4 5) (close _V0print__inline_lambda74))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k270, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_lambda74, env)})
    );
 }
}
static void _V0print__set_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k387" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k387, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.157 11 1) (bruijn ##k.795 9 0) (bruijn ##x.802 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0
    );
 }
}
static void _V0print__set_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k386" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 34 37) (close _V0print__set_k387) (##string ##string.1820))
V_CALL(VGetArg(upenv, 34-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k387, env)}),
      VEncodePointer(&_V10string_D1820.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__set_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k385" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 25 10) (close _V0print__set_k386) (bruijn x 10 3) (bruijn args 15 2))
V_CALL(VGetArg(upenv, 25-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k386, env)}),
      VGetArg(upenv, 10-1, 3),
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0print__set_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k384" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 32 37) (close _V0print__set_k385) (##string ##string.1821) (##inline ##sys.car (bruijn ##expr.161 3 0)) (##inline ##sys.car (bruijn ##expr.162 2 0)))
V_CALL(VGetArg(upenv, 32-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k385, env)}),
      VEncodePointer(&_V10string_D1821.sym, VPOINTER_OTHER),
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
static void _V0print__set_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k383" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 23 10) (close _V0print__set_k384) (bruijn k 8 1) (bruijn args 13 2))
V_CALL(VGetArg(upenv, 23-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k384, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 13-1, 2)
    );
 }
}
static void _V0print__set_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k382" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.162 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.162 0 0))) ((bruijn printf 30 37) (close _V0print__set_k383) (##string ##string.1822)) ((bruijn ##k.795 4 0) #f)) ((bruijn ##k.795 4 0) #f))
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
V_CALL(VGetArg(upenv, 30-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k383, env)}),
      VEncodePointer(&_V10string_D1822.sym, VPOINTER_OTHER)
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
static void _V0print__set_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k381" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.161 0 0)) ((close _V0print__set_k382) (##inline ##sys.cdr (bruijn ##expr.161 0 0))) ((bruijn ##k.795 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__set_k382, env, runtime,
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
static void _V0print__set_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k380" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.160 0 0)) ((close _V0print__set_k381) (##inline ##sys.cdr (bruijn ##expr.160 0 0))) ((bruijn ##k.795 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__set_k381, env, runtime,
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
static void _V0print__set_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k379" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.797 0 0) ((close _V0print__set_k380) (##inline ##sys.cdr (bruijn ##expr.159 1 1))) ((bruijn ##k.795 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__set_k380, env, runtime,
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
static void _V0print__set_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__set_lambda79" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.159 0 1)) ((bruijn equal? 26 35) (close _V0print__set_k379) (quote bruijn) (##inline ##sys.car (bruijn ##expr.159 0 1))) ((bruijn ##k.795 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 26-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k379, env)}),
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
static void _V0print__set_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k396" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k396, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 35 37) (bruijn ##k.788 6 0) (##string ##string.1820))
V_CALL(VGetArg(upenv, 35-1, 37), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1820.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__set_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k395" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 26 10) (close _V0print__set_k396) (bruijn x 11 3) (bruijn args 16 2))
V_CALL(VGetArg(upenv, 26-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k396, env)}),
      VGetArg(upenv, 11-1, 3),
      VGetArg(upenv, 16-1, 2)
    );
 }
}
static void _V0print__set_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k394" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 33 37) (close _V0print__set_k395) (##string ##string.1823))
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k395, env)}),
      VEncodePointer(&_V10string_D1823.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__set_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k393" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-literal 24 7) (close _V0print__set_k394) (bruijn sym 5 1))
V_CALL(VGetArg(upenv, 24-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k394, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0print__set_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k392" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 31 37) (close _V0print__set_k393) (##string ##string.1823))
V_CALL(VGetArg(upenv, 31-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k393, env)}),
      VEncodePointer(&_V10string_D1823.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__set_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k391" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 22 10) (close _V0print__set_k392) (bruijn k 7 1) (bruijn args 12 2))
V_CALL(VGetArg(upenv, 22-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k392, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 12-1, 2)
    );
 }
}
static void _V0print__set_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k390" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.787 1 0) ((bruijn printf 29 37) (close _V0print__set_k391) (##string ##string.1824)) ((bruijn compiler-error 29 43) (bruijn ##k.788 0 0) (##string ##string.1825)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k391, env)}),
      VEncodePointer(&_V10string_D1824.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 29-1, 43), runtime,
      _var0,
      VEncodePointer(&_V10string_D1825.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0print__set_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k397" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k397, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.157 5 1) (bruijn ##k.785 2 0) (bruijn ##x.786 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0print__set_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k389" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__set_k390) (close _V0print__set_k397))
V_CALL_FUNC(_V0print__set_k390, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k397, env)})
    );
 }
}
static void _V0print__set_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__set_lambda80" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda80, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 27 16) (close _V0print__set_k389) (bruijn sym 0 1))
V_CALL(VGetArg(upenv, 27-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k389, env)}),
      _var1
    );
 }
}
static void _V0print__set_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k399" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k399, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.157 4 1) (bruijn ##k.781 3 0) (bruijn ##x.784 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__set_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k398" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn compiler-error 27 43) (close _V0print__set_k399) (##string ##string.1826) (bruijn y 4 2))
V_CALL(VGetArg(upenv, 27-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k399, env)}),
      VEncodePointer(&_V10string_D1826.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0print__set_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__set_k388" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__set_lambda80) (close _V0print__set_k398) (bruijn ##input.158 1 1))
V_CALL_FUNC(_V0print__set_lambda80, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k398, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0print__set_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__set_lambda78" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__set_lambda79) (close _V0print__set_k388) (bruijn ##input.158 0 1))
V_CALL_FUNC(_V0print__set_lambda79, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k388, env)}),
      _var1
    );
 }
}
static void _V0print__set_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__set_lambda77" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__set_lambda77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda77, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__set_lambda78) (bruijn ##k.780 0 0) (bruijn y 1 2))
V_CALL_FUNC(_V0print__set_lambda78, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0print__set_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V0print__set_lambda76" };
 VRecordCall(&dbg);
 if(argc != 5) {
  VError("Not enough arguments to _V0print__set_lambda76, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda76, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn call/cc 23 36) (bruijn ##k.779 0 0) (close _V0print__set_lambda77))
V_CALL(VGetArg(upenv, 23-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_lambda77, env)})
    );
 }
}
static void _V0print__expr_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k268" };
 VRecordCall(&dbg);
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
  // (set! (close _V0print__expr_k269) (bruijn print-set 3 4) (close _V0print__set_lambda76))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k269, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_lambda76, env)})
    );
 }
}
static void _V0print__define__global_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__define__global_k405" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k405, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 28 37) (bruijn ##k.809 6 0) (##string ##string.1820))
V_CALL(VGetArg(upenv, 28-1, 37), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1820.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__define__global_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__define__global_k404" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 19 10) (close _V0print__define__global_k405) (bruijn x 5 3) (bruijn args 9 2))
V_CALL(VGetArg(upenv, 19-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k405, env)}),
      VGetArg(upenv, 5-1, 3),
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0print__define__global_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__define__global_k403" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 26 37) (close _V0print__define__global_k404) (##string ##string.1823))
V_CALL(VGetArg(upenv, 26-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k404, env)}),
      VEncodePointer(&_V10string_D1823.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__define__global_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__define__global_k402" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-literal 17 7) (close _V0print__define__global_k403) (bruijn y 3 2))
V_CALL(VGetArg(upenv, 17-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k403, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0print__define__global_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__define__global_k401" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 24 37) (close _V0print__define__global_k402) (##string ##string.1823))
V_CALL(VGetArg(upenv, 24-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k402, env)}),
      VEncodePointer(&_V10string_D1823.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__define__global_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__define__global_k400" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 15 10) (close _V0print__define__global_k401) (bruijn k 1 1) (bruijn args 5 2))
V_CALL(VGetArg(upenv, 15-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k401, env)}),
      upenv->vars[1],
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0print__define__global_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V0print__define__global_lambda81" };
 VRecordCall(&dbg);
 if(argc != 5) {
  VError("Not enough arguments to _V0print__define__global_lambda81, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_lambda81, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn printf 22 37) (close _V0print__define__global_k400) (##string ##string.1827))
V_CALL(VGetArg(upenv, 22-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k400, env)}),
      VEncodePointer(&_V10string_D1827.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__expr_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k267" };
 VRecordCall(&dbg);
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
  // (set! (close _V0print__expr_k268) (bruijn print-define-global 2 3) (close _V0print__define__global_lambda81))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k268, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_lambda81, env)})
    );
 }
}
static void _V0print__closure__apply_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k408" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k408, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 24 37) (bruijn ##k.816 3 0) (##string ##string.1759))
V_CALL(VGetArg(upenv, 24-1, 37), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1759.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__closure__apply_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k409" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k409, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-expr 17 10) (bruijn ##k.820 1 0) (bruijn x 1 1) (bruijn args 7 2))
V_CALL(VGetArg(upenv, 17-1, 10), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 7-1, 2)
    );
 }
}
static void _V0print__closure__apply_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda83" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__closure__apply_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn printf 24 37) (close _V0print__closure__apply_k409) (##string ##string.1823))
V_CALL(VGetArg(upenv, 24-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k409, env)}),
      VEncodePointer(&_V10string_D1823.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__closure__apply_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k407" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 23 42) (close _V0print__closure__apply_k408) (close _V0print__closure__apply_lambda83) (bruijn xs 2 2))
V_CALL(VGetArg(upenv, 23-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k408, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_lambda83, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0print__closure__apply_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k406" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 22 37) (close _V0print__closure__apply_k407) (##string ##string.1828))
V_CALL(VGetArg(upenv, 22-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k407, env)}),
      VEncodePointer(&_V10string_D1828.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__closure__apply_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k412" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k412, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.153 5 1) (bruijn ##k.827 3 0) (bruijn ##x.832 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__closure__apply_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k411" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.156 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.156 0 0))) ((bruijn printf 26 37) (close _V0print__closure__apply_k412) (##string ##string.1829) (##inline ##sys.car (bruijn ##expr.156 0 0))) ((bruijn ##k.827 2 0) #f)) ((bruijn ##k.827 2 0) #f))
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
V_CALL(VGetArg(upenv, 26-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k412, env)}),
      VEncodePointer(&_V10string_D1829.sym, VPOINTER_OTHER),
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
static void _V0print__closure__apply_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k410" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.829 0 0) ((close _V0print__closure__apply_k411) (##inline ##sys.cdr (bruijn ##expr.155 1 1))) ((bruijn ##k.827 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__closure__apply_k411, env, runtime,
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
static void _V0print__closure__apply_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda86" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.155 0 1)) ((bruijn equal? 24 35) (close _V0print__closure__apply_k410) (quote close) (##inline ##sys.car (bruijn ##expr.155 0 1))) ((bruijn ##k.827 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k410, env)}),
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
static void _V0print__closure__apply_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k415" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k415, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.153 4 1) (bruijn ##k.823 3 0) (bruijn ##x.825 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__closure__apply_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k414" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-expr 17 10) (close _V0print__closure__apply_k415) (bruijn f 4 1) (bruijn args 7 2))
V_CALL(VGetArg(upenv, 17-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k415, env)}),
      upenv->up->up->up->vars[1],
      VGetArg(upenv, 7-1, 2)
    );
 }
}
static void _V0print__closure__apply_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__closure__apply_k413" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn display 24 23) (close _V0print__closure__apply_k414) (##string ##string.1830))
V_CALL(VGetArg(upenv, 24-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k414, env)}),
      VEncodePointer(&_V10string_D1830.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__closure__apply_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda85" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__closure__apply_lambda86) (close _V0print__closure__apply_k413) (bruijn ##input.154 0 1))
V_CALL_FUNC(_V0print__closure__apply_lambda86, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k413, env)}),
      _var1
    );
 }
}
static void _V0print__closure__apply_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda84" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__closure__apply_lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__closure__apply_lambda85) (bruijn ##k.822 0 0) (bruijn f 1 1))
V_CALL_FUNC(_V0print__closure__apply_lambda85, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0print__closure__apply_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0print__closure__apply_lambda82" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0print__closure__apply_lambda82, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda82, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn call/cc 21 36) (close _V0print__closure__apply_k406) (close _V0print__closure__apply_lambda84))
V_CALL(VGetArg(upenv, 21-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k406, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_lambda84, env)})
    );
 }
}
static void _V0print__expr_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__expr_k266" };
 VRecordCall(&dbg);
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
  // (set! (close _V0print__expr_k267) (bruijn print-closure-apply 1 2) (close _V0print__closure__apply_lambda82))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k267, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_lambda82, env)})
    );
 }
}
static void _V0print__builtin__apply_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__builtin__apply_k418" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__builtin__apply_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_k418, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 23 37) (bruijn ##k.835 3 0) (##string ##string.1759))
V_CALL(VGetArg(upenv, 23-1, 37), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1759.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__builtin__apply_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__builtin__apply_k419" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__builtin__apply_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_k419, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-expr 16 10) (bruijn ##k.838 1 0) (bruijn x 1 1) (bruijn args 6 2))
V_CALL(VGetArg(upenv, 16-1, 10), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0print__builtin__apply_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__builtin__apply_lambda88" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__builtin__apply_lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_lambda88, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn printf 23 37) (close _V0print__builtin__apply_k419) (##string ##string.1823))
V_CALL(VGetArg(upenv, 23-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_k419, env)}),
      VEncodePointer(&_V10string_D1823.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__builtin__apply_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__builtin__apply_k417" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__builtin__apply_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 22 42) (close _V0print__builtin__apply_k418) (close _V0print__builtin__apply_lambda88) (bruijn xs 2 2))
V_CALL(VGetArg(upenv, 22-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_k418, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_lambda88, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0print__builtin__apply_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__builtin__apply_k416" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__builtin__apply_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 21 37) (close _V0print__builtin__apply_k417) (##string ##string.1831) (bruijn ##x.840 0 0))
V_CALL(VGetArg(upenv, 21-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_k417, env)}),
      VEncodePointer(&_V10string_D1831.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0print__builtin__apply_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0print__builtin__apply_lambda87" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0print__builtin__apply_lambda87, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_lambda87, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn lookup-intrinsic2 20 20) (close _V0print__builtin__apply_k416) (bruijn f 0 1))
V_CALL(VGetArg(upenv, 20-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_k416, env)}),
      _var1
    );
 }
}
static void _V0print__expr_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 static VDebugInfo dbg = { "_V0print__expr_lambda50" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda50, runtime, upenv, 6, argc, _var0, _var1, _var2, _var3, _var4, _var5) {
  struct { VEnv env; VWORD argv[6]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 6; env->var_len = 6; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  // (set! (close _V0print__expr_k266) (bruijn print-builtin-apply 0 1) (close _V0print__builtin__apply_lambda87))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k266, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_lambda87, env)})
    );
 }
}
static void _V0print__expr_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0print__expr_lambda49" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0print__expr_lambda49, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda49, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0print__expr_lambda50) (bruijn ##k.586 0 0) #f #f #f #f #f)
V_CALL_FUNC(_V0print__expr_lambda50, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void _V0printout2_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k79" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k80) (bruijn print-expr 9 10) (close _V0print__expr_lambda49))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k80, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda49, env)})
    );
 }
}
static void _V0closes_Q_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k421" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k421, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.132 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.132 0 0))) ((bruijn ##kk.129 4 1) (bruijn ##k.921 2 0) #t) ((bruijn ##k.921 2 0) #f)) ((bruijn ##k.921 2 0) #f))
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
static void _V0closes_Q_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k420" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.923 0 0) ((close _V0closes_Q_k421) (##inline ##sys.cdr (bruijn ##expr.131 1 1))) ((bruijn ##k.921 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k421, env, runtime,
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
static void _V0closes_Q_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda92" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.131 0 1)) ((bruijn equal? 20 35) (close _V0closes_Q_k420) (quote close) (##inline ##sys.car (bruijn ##expr.131 0 1))) ((bruijn ##k.921 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k420, env)}),
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
static void _V0closes_Q_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k423" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k423, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.919 0 0) ((bruijn ##kk.129 4 1) (bruijn ##k.917 1 0) #f) ((bruijn ##k.917 1 0) #f))
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
static void _V0closes_Q_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda93" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.133 0 1)) ((bruijn equal? 21 35) (close _V0closes_Q_k423) (quote quote) (##inline ##sys.car (bruijn ##expr.133 0 1))) ((bruijn ##k.917 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k423, env)}),
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
static void _V0closes_Q_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k425" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k425, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.915 0 0) ((bruijn ##kk.129 5 1) (bruijn ##k.913 1 0) #f) ((bruijn ##k.913 1 0) #f))
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
static void _V0closes_Q_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda94" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda94, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.134 0 1)) ((bruijn equal? 22 35) (close _V0closes_Q_k425) (quote bruijn) (##inline ##sys.car (bruijn ##expr.134 0 1))) ((bruijn ##k.913 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k425, env)}),
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
static void _V0closes_Q_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k427" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k427, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.911 0 0) ((bruijn ##kk.129 6 1) (bruijn ##k.909 1 0) #f) ((bruijn ##k.909 1 0) #f))
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
static void _V0closes_Q_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda95" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda95, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.135 0 1)) ((bruijn equal? 23 35) (close _V0closes_Q_k427) (quote ##string) (##inline ##sys.car (bruijn ##expr.135 0 1))) ((bruijn ##k.909 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k427, env)}),
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
static void _V0closes_Q_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k429" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k429, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.907 0 0) ((bruijn ##kk.129 7 1) (bruijn ##k.905 1 0) #f) ((bruijn ##k.905 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
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
static void _V0closes_Q_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda96" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.136 0 1)) ((bruijn equal? 24 35) (close _V0closes_Q_k429) (quote ##intrinsic) (##inline ##sys.car (bruijn ##expr.136 0 1))) ((bruijn ##k.905 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k429, env)}),
      VEncodePointer(&_V10intrinsic.sym, VPOINTER_OTHER),
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
static void _V0closes_Q_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k437" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k437, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.902 0 0) ((bruijn ##k.901 1 0) (bruijn ##p.902 0 0)) ((bruijn closes? 24 9) (bruijn ##k.901 1 0) (##inline ##sys.car (bruijn ##expr.140 3 0))))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 24-1, 9), runtime,
      upenv->vars[0],
      VInlineCar(
upenv->up->up->vars[0]
    )

    );
}
 }
}
static void _V0closes_Q_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k436" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.900 1 0) ((bruijn ##k.901 0 0) (bruijn ##p.900 1 0)) ((bruijn closes? 23 9) (close _V0closes_Q_k437) (##inline ##sys.car (bruijn ##expr.139 3 0))))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 23-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k437, env)}),
      VInlineCar(
upenv->up->up->vars[0]
    )

    );
}
 }
}
static void _V0closes_Q_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k438" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k438, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.129 13 1) (bruijn ##k.892 6 0) (bruijn ##x.899 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0closes_Q_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k435" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k435, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_k436) (close _V0closes_Q_k438))
V_CALL_FUNC(_V0closes_Q_k436, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k438, env)})
    );
 }
}
static void _V0closes_Q_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k434" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.140 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.140 0 0))) ((bruijn closes? 21 9) (close _V0closes_Q_k435) (##inline ##sys.car (bruijn ##expr.138 2 0))) ((bruijn ##k.892 4 0) #f)) ((bruijn ##k.892 4 0) #f))
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
V_CALL(VGetArg(upenv, 21-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k435, env)}),
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
static void _V0closes_Q_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k433" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.139 0 0)) ((close _V0closes_Q_k434) (##inline ##sys.cdr (bruijn ##expr.139 0 0))) ((bruijn ##k.892 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0closes_Q_k434, env, runtime,
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
static void _V0closes_Q_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k432" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k432, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.138 0 0)) ((close _V0closes_Q_k433) (##inline ##sys.cdr (bruijn ##expr.138 0 0))) ((bruijn ##k.892 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0closes_Q_k433, env, runtime,
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
static void _V0closes_Q_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k431" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k431, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.894 0 0) ((close _V0closes_Q_k432) (##inline ##sys.cdr (bruijn ##expr.137 1 1))) ((bruijn ##k.892 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k432, env, runtime,
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
static void _V0closes_Q_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda97" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda97, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 1)) ((bruijn equal? 25 35) (close _V0closes_Q_k431) (quote if) (##inline ##sys.car (bruijn ##expr.137 0 1))) ((bruijn ##k.892 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k431, env)}),
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
static void _V0closes_Q_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k443" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k443, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.144 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.144 0 0))) ((bruijn ##kk.129 12 1) (bruijn ##k.883 4 0) #t) ((bruijn ##k.883 4 0) #f)) ((bruijn ##k.883 4 0) #f))
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
static void _V0closes_Q_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k442" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k442, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.143 0 0)) ((close _V0closes_Q_k443) (##inline ##sys.cdr (bruijn ##expr.143 0 0))) ((bruijn ##k.883 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0closes_Q_k443, env, runtime,
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
static void _V0closes_Q_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k441" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k441, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.142 0 0)) ((close _V0closes_Q_k442) (##inline ##sys.cdr (bruijn ##expr.142 0 0))) ((bruijn ##k.883 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0closes_Q_k442, env, runtime,
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
static void _V0closes_Q_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k440" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.885 0 0) ((close _V0closes_Q_k441) (##inline ##sys.cdr (bruijn ##expr.141 1 1))) ((bruijn ##k.883 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k441, env, runtime,
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
static void _V0closes_Q_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda98" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.141 0 1)) ((bruijn equal? 26 35) (close _V0closes_Q_k440) (quote set!) (##inline ##sys.car (bruijn ##expr.141 0 1))) ((bruijn ##k.883 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 26-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k440, env)}),
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
static void _V0closes_Q_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k448" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k448, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.148 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.148 0 0))) ((bruijn ##kk.129 13 1) (bruijn ##k.874 4 0) #t) ((bruijn ##k.874 4 0) #f)) ((bruijn ##k.874 4 0) #f))
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
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
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
static void _V0closes_Q_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k447" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k447, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.147 0 0)) ((close _V0closes_Q_k448) (##inline ##sys.cdr (bruijn ##expr.147 0 0))) ((bruijn ##k.874 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0closes_Q_k448, env, runtime,
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
static void _V0closes_Q_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k446" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k446, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.146 0 0)) ((close _V0closes_Q_k447) (##inline ##sys.cdr (bruijn ##expr.146 0 0))) ((bruijn ##k.874 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0closes_Q_k447, env, runtime,
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
static void _V0closes_Q_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k445" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k445, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.876 0 0) ((close _V0closes_Q_k446) (##inline ##sys.cdr (bruijn ##expr.145 1 1))) ((bruijn ##k.874 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k446, env, runtime,
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
static void _V0closes_Q_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda99" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda99, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.145 0 1)) ((bruijn equal? 27 35) (close _V0closes_Q_k445) (quote define) (##inline ##sys.car (bruijn ##expr.145 0 1))) ((bruijn ##k.874 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 27-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k445, env)}),
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
static void _V0closes_Q_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k452" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k452, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.129 13 1) (bruijn ##k.868 3 0) (bruijn ##x.872 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0closes_Q_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k451" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k451, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.150 0 0)) ((bruijn closes? 22 9) (close _V0closes_Q_k452) (##inline ##sys.cdr (bruijn ##expr.150 0 0))) ((bruijn ##k.868 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k452, env)}),
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
static void _V0closes_Q_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k450" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k450, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.870 0 0) ((close _V0closes_Q_k451) (##inline ##sys.cdr (bruijn ##expr.149 1 1))) ((bruijn ##k.868 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k451, env, runtime,
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
static void _V0closes_Q_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda100" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.149 0 1)) ((bruijn equal? 28 35) (close _V0closes_Q_k450) (quote ##inline) (##inline ##sys.car (bruijn ##expr.149 0 1))) ((bruijn ##k.868 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 28-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k450, env)}),
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
static void _V0closes_Q_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k454" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k454, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.129 12 1) (bruijn ##k.863 1 0) (bruijn ##x.866 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0closes_Q_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda101" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.151 0 1)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.151 0 1))) ((bruijn closes? 21 9) (close _V0closes_Q_k454) (##inline ##sys.car (bruijn ##expr.151 0 1))) ((bruijn ##k.863 0 0) #f)) ((bruijn ##k.863 0 0) #f))
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
V_CALL(VGetArg(upenv, 21-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k454, env)}),
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
static void _V0closes_Q_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k457" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k457, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.861 1 0) ((bruijn ##k.862 0 0) (bruijn ##p.861 1 0)) ((bruijn closes? 24 9) (bruijn ##k.862 0 0) (##inline ##sys.cdr (bruijn ##expr.152 2 1))))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 24-1, 9), runtime,
      _var0,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
}
 }
}
static void _V0closes_Q_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k458" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k458, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.129 14 1) (bruijn ##k.858 2 0) (bruijn ##x.860 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0closes_Q_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k456" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_k457) (close _V0closes_Q_k458))
V_CALL_FUNC(_V0closes_Q_k457, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k458, env)})
    );
 }
}
static void _V0closes_Q_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda102" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda102, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.152 0 1)) ((bruijn closes? 22 9) (close _V0closes_Q_k456) (##inline ##sys.car (bruijn ##expr.152 0 1))) ((bruijn ##k.858 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k456, env)}),
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
static void _V0closes_Q_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda103" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda103, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.129 13 1) (bruijn ##k.857 0 0) #f)
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0closes_Q_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k461" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k461, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.129 14 1) (bruijn ##k.843 13 0) (bruijn ##x.856 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      _var0
    );
 }
}
static void _V0closes_Q_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k460" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k460, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn compiler-error 31 43) (close _V0closes_Q_k461) (##string ##string.1832) (bruijn expr 14 1))
V_CALL(VGetArg(upenv, 31-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k461, env)}),
      VEncodePointer(&_V10string_D1832.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 1)
    );
 }
}
static void _V0closes_Q_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k459" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k459, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda103) (close _V0closes_Q_k460) (bruijn ##input.130 11 1))
V_CALL_FUNC(_V0closes_Q_lambda103, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k460, env)}),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0closes_Q_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k455" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k455, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda102) (close _V0closes_Q_k459) (bruijn ##input.130 10 1))
V_CALL_FUNC(_V0closes_Q_lambda102, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k459, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0closes_Q_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k453" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k453, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda101) (close _V0closes_Q_k455) (bruijn ##input.130 9 1))
V_CALL_FUNC(_V0closes_Q_lambda101, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k455, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0closes_Q_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k449" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k449, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda100) (close _V0closes_Q_k453) (bruijn ##input.130 8 1))
V_CALL_FUNC(_V0closes_Q_lambda100, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k453, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0closes_Q_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k444" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda99) (close _V0closes_Q_k449) (bruijn ##input.130 7 1))
V_CALL_FUNC(_V0closes_Q_lambda99, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k449, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0closes_Q_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k439" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k439, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda98) (close _V0closes_Q_k444) (bruijn ##input.130 6 1))
V_CALL_FUNC(_V0closes_Q_lambda98, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k444, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0closes_Q_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k430" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda97) (close _V0closes_Q_k439) (bruijn ##input.130 5 1))
V_CALL_FUNC(_V0closes_Q_lambda97, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k439, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0closes_Q_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k428" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda96) (close _V0closes_Q_k430) (bruijn ##input.130 4 1))
V_CALL_FUNC(_V0closes_Q_lambda96, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k430, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0closes_Q_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k426" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda95) (close _V0closes_Q_k428) (bruijn ##input.130 3 1))
V_CALL_FUNC(_V0closes_Q_lambda95, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k428, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0closes_Q_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k424" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda94) (close _V0closes_Q_k426) (bruijn ##input.130 2 1))
V_CALL_FUNC(_V0closes_Q_lambda94, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k426, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0closes_Q_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0closes_Q_k422" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda93) (close _V0closes_Q_k424) (bruijn ##input.130 1 1))
V_CALL_FUNC(_V0closes_Q_lambda93, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k424, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0closes_Q_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda91" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda91, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0closes_Q_lambda92) (close _V0closes_Q_k422) (bruijn ##input.130 0 1))
V_CALL_FUNC(_V0closes_Q_lambda92, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k422, env)}),
      _var1
    );
 }
}
static void _V0closes_Q_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda90" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0closes_Q_lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda90, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0closes_Q_lambda91) (bruijn ##k.842 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0closes_Q_lambda91, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0closes_Q_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0closes_Q_lambda89" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0closes_Q_lambda89, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda89, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 17 36) (bruijn ##k.841 0 0) (close _V0closes_Q_lambda90))
V_CALL(VGetArg(upenv, 17-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_lambda90, env)})
    );
 }
}
static void _V0printout2_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k78" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k79) (bruijn closes? 8 9) (close _V0closes_Q_lambda89))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k79, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_lambda89, env)})
    );
 }
}
static void _V0print__literal__declaration_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k472" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k472, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 27 37) (bruijn ##k.928 11 0) (##string ##string.1833) (bruijn len 0 0) (bruijn mangled 7 0) (bruijn len 0 0) (bruijn escaped 4 0))
V_CALL(VGetArg(upenv, 27-1, 37), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D1833.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 7-1, 0),
      _var0,
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0print__literal__declaration_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k471" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k471, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 26 27) (close _V0print__literal__declaration_k472) (bruijn ##x.930 0 0) 1)
V_CALL(VGetArg(upenv, 26-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k472, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0print__literal__declaration_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k470" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k470, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 25 14) (close _V0print__literal__declaration_k471) (bruijn ##x.931 0 0))
V_CALL(VGetArg(upenv, 25-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k471, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k469" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol->string 24 15) (close _V0print__literal__declaration_k470) (bruijn ##x.932 0 0))
V_CALL(VGetArg(upenv, 24-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k470, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k468" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 23 30) (close _V0print__literal__declaration_k469) (bruijn lit 7 1))
V_CALL(VGetArg(upenv, 23-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k469, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0print__literal__declaration_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k467" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k467, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn escape-string 14 3) (close _V0print__literal__declaration_k468) (bruijn ##x.933 0 0))
V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k468, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k466" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k466, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol->string 21 15) (close _V0print__literal__declaration_k467) (bruijn ##x.934 0 0))
V_CALL(VGetArg(upenv, 21-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k467, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k465" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 20 30) (close _V0print__literal__declaration_k466) (bruijn lit 4 1))
V_CALL(VGetArg(upenv, 20-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k466, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0print__literal__declaration_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k464" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k464, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 19 12) (close _V0print__literal__declaration_k465) (bruijn ##x.935 0 0))
V_CALL(VGetArg(upenv, 19-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k465, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k481" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k481, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 27 37) (bruijn ##k.928 11 0) (##string ##string.1834) (bruijn len 0 0) (bruijn mangled 5 0) (bruijn len 0 0) (bruijn escaped 3 0))
V_CALL(VGetArg(upenv, 27-1, 37), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D1834.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 5-1, 0),
      _var0,
      upenv->up->up->vars[0]
    );
 }
}
static void _V0print__literal__declaration_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k480" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k480, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 26 27) (close _V0print__literal__declaration_k481) (bruijn ##x.937 0 0) 1)
V_CALL(VGetArg(upenv, 26-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k481, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0print__literal__declaration_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k479" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k479, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 25 14) (close _V0print__literal__declaration_k480) (bruijn ##x.938 0 0))
V_CALL(VGetArg(upenv, 25-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k480, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k478" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k478, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 24 30) (close _V0print__literal__declaration_k479) (bruijn lit 8 1))
V_CALL(VGetArg(upenv, 24-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k479, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0print__literal__declaration_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k477" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k477, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn escape-string 15 3) (close _V0print__literal__declaration_k478) (bruijn ##x.939 0 0))
V_CALL(VGetArg(upenv, 15-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k478, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k476" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 22 30) (close _V0print__literal__declaration_k477) (bruijn lit 6 1))
V_CALL(VGetArg(upenv, 22-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k477, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0print__literal__declaration_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k475" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k475, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 21 12) (close _V0print__literal__declaration_k476) (bruijn ##x.940 0 0))
V_CALL(VGetArg(upenv, 21-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k476, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k485" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k485, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 24 18) (bruijn ##k.946 1 0) (bruijn ##x.947 0 0) (quote ##intrinsic))
V_CALL(VGetArg(upenv, 24-1, 18), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V10intrinsic.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__literal__declaration_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k484" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k484, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.945 1 0) ((bruijn caar 23 10) (close _V0print__literal__declaration_k485) (bruijn lit 7 1)) ((bruijn ##k.946 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 23-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k485, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__literal__declaration_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k489" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k489, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 26 37) (bruijn ##k.928 10 0) (##string ##string.1835) (bruijn ##x.942 1 0) (bruijn ##x.943 0 0))
V_CALL(VGetArg(upenv, 26-1, 37), runtime,
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10string_D1835.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0print__literal__declaration_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k488" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k488, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 25 24) (close _V0print__literal__declaration_k489) (bruijn lit 9 1))
V_CALL(VGetArg(upenv, 25-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k489, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0print__literal__declaration_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k487" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 24 12) (close _V0print__literal__declaration_k488) (bruijn ##x.944 0 0))
V_CALL(VGetArg(upenv, 24-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k488, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k486" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k486, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.941 0 0) ((bruijn cadar 23 11) (close _V0print__literal__declaration_k487) (bruijn lit 7 1)) ((bruijn compiler-error 23 43) (bruijn ##k.928 7 0) (##string ##string.1836) (bruijn lit 7 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k487, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 23-1, 43), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1836.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 1)
    );
}
 }
}
static void _V0print__literal__declaration_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k483" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k483, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__literal__declaration_k484) (close _V0print__literal__declaration_k486))
V_CALL_FUNC(_V0print__literal__declaration_k484, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k486, env)})
    );
 }
}
static void _V0print__literal__declaration_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k482" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k482, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 21 17) (close _V0print__literal__declaration_k483) (bruijn ##x.948 0 0))
V_CALL(VGetArg(upenv, 21-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k483, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k474" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k474, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.936 0 0) ((bruijn cdr 20 24) (close _V0print__literal__declaration_k475) (bruijn lit 4 1)) ((bruijn car 20 30) (close _V0print__literal__declaration_k482) (bruijn lit 4 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k475, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k482, env)}),
      upenv->up->up->up->vars[1]
    );
}
 }
}
static void _V0print__literal__declaration_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k473" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string? 19 13) (close _V0print__literal__declaration_k474) (bruijn ##x.949 0 0))
V_CALL(VGetArg(upenv, 19-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k474, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k463" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k463, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.929 0 0) ((bruijn car 18 30) (close _V0print__literal__declaration_k464) (bruijn lit 2 1)) ((bruijn car 18 30) (close _V0print__literal__declaration_k473) (bruijn lit 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k464, env)}),
      upenv->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 18-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k473, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0print__literal__declaration_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_k462" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k462, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol? 17 16) (close _V0print__literal__declaration_k463) (bruijn ##x.950 0 0))
V_CALL(VGetArg(upenv, 17-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k463, env)}),
      _var0
    );
 }
}
static void _V0print__literal__declaration_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__literal__declaration_lambda104" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__literal__declaration_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 16 30) (close _V0print__literal__declaration_k462) (bruijn lit 0 1))
V_CALL(VGetArg(upenv, 16-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k462, env)}),
      _var1
    );
 }
}
static void _V0printout2_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k77" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k78) (bruijn print-literal-declaration 7 8) (close _V0print__literal__declaration_lambda104))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k78, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_lambda104, env)})
    );
 }
}
static void _V0print__literal_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal_k493" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k493, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 19 37) (bruijn ##k.951 4 0) (##string ##string.1839) (bruijn ##x.955 0 0))
V_CALL(VGetArg(upenv, 19-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1839.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0print__literal_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal_k497" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k497, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 22 37) (bruijn ##k.951 7 0) (##string ##string.1842) (bruijn ##x.959 0 0))
V_CALL(VGetArg(upenv, 22-1, 37), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1842.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0print__literal_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal_k496" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.958 0 0) ((bruijn mangle-symbol 21 12) (close _V0print__literal_k497) (bruijn x 6 1)) ((bruijn compiler-error 21 43) (bruijn ##k.951 6 0) (##string ##string.1843) (bruijn x 6 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k497, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 21-1, 43), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1843.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1)
    );
}
 }
}
static void _V0print__literal_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal_k495" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k495, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.957 0 0) ((bruijn printf 20 37) (bruijn ##k.951 5 0) (##string ##string.1841)) ((bruijn symbol? 20 16) (close _V0print__literal_k496) (bruijn x 5 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 37), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1841.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k496, env)}),
      VGetArg(upenv, 5-1, 1)
    );
}
 }
}
static void _V0print__literal_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal_k494" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k494, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.956 0 0) ((bruijn printf 19 37) (bruijn ##k.951 4 0) (##string ##string.1840)) ((bruijn eq? 19 6) (close _V0print__literal_k495) (bruijn x 4 1) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1840.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k495, env)}),
      upenv->up->up->up->vars[1],
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__literal_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal_k492" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.954 0 0) ((bruijn escape-char 10 4) (close _V0print__literal_k493) (bruijn x 3 1)) ((bruijn eq? 18 6) (close _V0print__literal_k494) (bruijn x 3 1) #t))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k493, env)}),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 18-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k494, env)}),
      upenv->up->up->vars[1],
      VEncodeBool(true)
    );
}
 }
}
static void _V0print__literal_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal_k491" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k491, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.953 0 0) ((bruijn printf 17 37) (bruijn ##k.951 2 0) (##string ##string.1838) (bruijn x 2 1)) ((bruijn char? 17 7) (close _V0print__literal_k492) (bruijn x 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 37), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1838.sym, VPOINTER_OTHER),
      upenv->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 17-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k492, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0print__literal_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal_k490" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k490, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.952 0 0) ((bruijn printf 16 37) (bruijn ##k.951 1 0) (##string ##string.1837) (bruijn x 1 1)) ((bruijn number? 16 8) (close _V0print__literal_k491) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1837.sym, VPOINTER_OTHER),
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k491, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0print__literal_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__literal_lambda105" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__literal_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn integer? 15 9) (close _V0print__literal_k490) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 15-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k490, env)}),
      _var1
    );
 }
}
static void _V0printout2_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k76" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k77) (bruijn print-literal 6 7) (close _V0print__literal_lambda105))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k77, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_lambda105, env)})
    );
 }
}
static void _V0print__intrinsic_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__intrinsic_k498" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__intrinsic_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__intrinsic_k498, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 15 37) (bruijn ##k.960 1 0) (##string ##string.1844) (bruijn ##x.961 0 0))
V_CALL(VGetArg(upenv, 15-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1844.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0print__intrinsic_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__intrinsic_lambda106" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__intrinsic_lambda106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__intrinsic_lambda106, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn mangle-symbol 14 12) (close _V0print__intrinsic_k498) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 14-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__intrinsic_k498, env)}),
      _var1
    );
 }
}
static void _V0printout2_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k75" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k76) (bruijn print-intrinsic 5 6) (close _V0print__intrinsic_lambda106))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k76, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__intrinsic_lambda106, env)})
    );
 }
}
static void _V0print__literal__string_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__literal__string_k499" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__string_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__string_k499, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 14 37) (bruijn ##k.962 1 0) (##string ##string.1842) (bruijn ##x.963 0 0))
V_CALL(VGetArg(upenv, 14-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1842.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0print__literal__string_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__literal__string_lambda107" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__literal__string_lambda107, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__string_lambda107, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn mangle-symbol 13 12) (close _V0print__literal__string_k499) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 13-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__string_k499, env)}),
      _var1
    );
 }
}
static void _V0printout2_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k74" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k75) (bruijn print-literal-string 4 5) (close _V0print__literal__string_lambda107))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k75, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__string_lambda107, env)})
    );
 }
}
static void _V0escape__char_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0escape__char_k506" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k506, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.972 0 0) ((bruijn ##k.965 7 0) (##string ##string.1850)) ((bruijn ##k.965 7 0) (bruijn c 8 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodePointer(&_V10string_D1850.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 8-1, 1)
    );
}
 }
}
static void _V0escape__char_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0escape__char_k505" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.971 0 0) ((bruijn ##k.965 6 0) (##string ##string.1849)) ((bruijn eqv? 19 18) (close _V0escape__char_k506) (bruijn ##x.128 6 1) (quote #\')))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodePointer(&_V10string_D1849.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k506, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeChar('\'')
    );
}
 }
}
static void _V0escape__char_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0escape__char_k504" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k504, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.970 0 0) ((bruijn ##k.965 5 0) (##string ##string.1848)) ((bruijn eqv? 18 18) (close _V0escape__char_k505) (bruijn ##x.128 5 1) (quote #\\)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodePointer(&_V10string_D1848.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k505, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeChar('\\')
    );
}
 }
}
static void _V0escape__char_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0escape__char_k503" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k503, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.969 0 0) ((bruijn ##k.965 4 0) (##string ##string.1847)) ((bruijn eqv? 17 18) (close _V0escape__char_k504) (bruijn ##x.128 4 1) (quote #\return)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D1847.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 17-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k504, env)}),
      upenv->up->up->up->vars[1],
      VEncodeChar('\r')
    );
}
 }
}
static void _V0escape__char_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0escape__char_k502" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k502, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.968 0 0) ((bruijn ##k.965 3 0) (##string ##string.1846)) ((bruijn eqv? 16 18) (close _V0escape__char_k503) (bruijn ##x.128 3 1) (quote #\newline)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D1846.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k503, env)}),
      upenv->up->up->vars[1],
      VEncodeChar('\n')
    );
}
 }
}
static void _V0escape__char_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0escape__char_k501" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k501, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.967 0 0) ((bruijn ##k.965 2 0) (##string ##string.1846)) ((bruijn eqv? 15 18) (close _V0escape__char_k502) (bruijn ##x.128 2 1) (quote #\tab)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10string_D1846.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k502, env)}),
      upenv->up->vars[1],
      VEncodeChar('\t')
    );
}
 }
}
static void _V0escape__char_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0escape__char_k500" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k500, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.966 0 0) ((bruijn ##k.965 1 0) (##string ##string.1845)) ((bruijn eqv? 14 18) (close _V0escape__char_k501) (bruijn ##x.128 1 1) (quote #\backspace)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10string_D1845.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 14-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k501, env)}),
      upenv->vars[1],
      VEncodeChar('\t')
    );
}
 }
}
static void _V0escape__char_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0escape__char_lambda109" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 13 18) (close _V0escape__char_k500) (bruijn ##x.128 0 1) (quote #\alarm))
V_CALL(VGetArg(upenv, 13-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k500, env)}),
      _var1,
      VEncodeChar('\a')
    );
 }
}
static void _V0escape__char_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0escape__char_lambda108" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0escape__char_lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_lambda108, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0escape__char_lambda109) (bruijn ##k.964 0 0) (bruijn c 0 1))
V_CALL_FUNC(_V0escape__char_lambda109, env, runtime,
      _var0,
      _var1
    );
 }
}
static void _V0printout2_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k73" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k74) (bruijn escape-char 3 4) (close _V0escape__char_lambda108))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k74, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_lambda108, env)})
    );
 }
}
static void _V0escape__string_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0escape__string_k509" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k509, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.977 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k520" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k520, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.994 1 0) ((bruijn ##k.995 0 0) (bruijn ##p.994 1 0)) ((bruijn eqv? 27 18) (bruijn ##k.995 0 0) (bruijn ##x.127 9 0) (quote #\\)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 27-1, 18), runtime,
      _var0,
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('\\')
    );
}
 }
}
static void _V0loop_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k523" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k523, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 29 23) (bruijn ##k.984 9 0) (bruijn ##x.992 0 0) (bruijn port 15 2))
V_CALL(VGetArg(upenv, 29-1, 23), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0,
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0loop_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k522" };
 VRecordCall(&dbg);
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
  // ((bruijn string-ref 28 5) (close _V0loop_k523) (bruijn s 17 1) (bruijn i 12 1))
V_CALL(VGetArg(upenv, 28-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k523, env)}),
      VGetArg(upenv, 17-1, 1),
      VGetArg(upenv, 12-1, 1)
    );
 }
}
static void _V0loop_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k524" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k524, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 28 23) (bruijn ##k.984 8 0) (bruijn ##x.993 0 0) (bruijn port 14 2))
V_CALL(VGetArg(upenv, 28-1, 23), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0,
      VGetArg(upenv, 14-1, 2)
    );
 }
}
static void _V0loop_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k521" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k521, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.990 0 0) ((bruijn display 27 23) (close _V0loop_k522) #\\ (bruijn port 13 2)) ((bruijn string-ref 27 5) (close _V0loop_k524) (bruijn s 16 1) (bruijn i 11 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 27-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k522, env)}),
      VEncodeChar('\\'),
      VGetArg(upenv, 13-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k524, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 11-1, 1)
    );
}
 }
}
static void _V0loop_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k519" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k519, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k520) (close _V0loop_k521))
V_CALL_FUNC(_V0loop_k520, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k521, env)})
    );
 }
}
static void _V0loop_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k518" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k518, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.989 0 0) ((bruijn display 25 23) (bruijn ##k.984 5 0) (##string ##string.1852) (bruijn port 11 2)) ((bruijn eqv? 25 18) (close _V0loop_k519) (bruijn ##x.127 7 0) (quote #\")))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 23), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1852.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 25-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k519, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('"')
    );
}
 }
}
static void _V0loop_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k517" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k517, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.988 0 0) ((bruijn display 24 23) (bruijn ##k.984 4 0) (##string ##string.1848) (bruijn port 10 2)) ((bruijn eqv? 24 18) (close _V0loop_k518) (bruijn ##x.127 6 0) (quote #\?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 24-1, 23), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1848.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 24-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k518, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('?')
    );
}
 }
}
static void _V0loop_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k516" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k516, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.987 0 0) ((bruijn display 23 23) (bruijn ##k.984 3 0) (##string ##string.1847) (bruijn port 9 2)) ((bruijn eqv? 23 18) (close _V0loop_k517) (bruijn ##x.127 5 0) (quote #\return)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 23), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1847.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 23-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k517, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('\r')
    );
}
 }
}
static void _V0loop_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k515" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k515, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.986 0 0) ((bruijn display 22 23) (bruijn ##k.984 2 0) (##string ##string.1846) (bruijn port 8 2)) ((bruijn eqv? 22 18) (close _V0loop_k516) (bruijn ##x.127 4 0) (quote #\newline)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 23), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1846.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k516, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('\n')
    );
}
 }
}
static void _V0loop_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k514" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k514, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.985 0 0) ((bruijn display 21 23) (bruijn ##k.984 1 0) (##string ##string.1851) (bruijn port 7 2)) ((bruijn eqv? 21 18) (close _V0loop_k515) (bruijn ##x.127 3 0) (quote #\tab)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1851.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 21-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k515, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('\t')
    );
}
 }
}
static void _V0loop_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k513" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k513, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.983 1 0) ((bruijn display 20 23) (bruijn ##k.984 0 0) (##string ##string.1845) (bruijn port 6 2)) ((bruijn eqv? 20 18) (close _V0loop_k514) (bruijn ##x.127 2 0) (quote #\backspace)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 20-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1845.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k514, env)}),
      upenv->up->vars[0],
      VEncodeChar('\t')
    );
}
 }
}
static void _V0loop_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k526" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k526, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.979 5 0) (bruijn ##x.982 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0loop_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k525" };
 VRecordCall(&dbg);
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
  // ((bruijn + 20 27) (close _V0loop_k526) (bruijn i 4 1) 1)
V_CALL(VGetArg(upenv, 20-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k526, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k512" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k512, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k513) (close _V0loop_k525))
V_CALL_FUNC(_V0loop_k513, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k525, env)})
    );
 }
}
static void _V0loop_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k511" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k511, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 18 18) (close _V0loop_k512) (bruijn ##x.127 0 0) (quote #\alarm))
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k512, env)}),
      _var0,
      VEncodeChar('\a')
    );
 }
}
static void _V0loop_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k510" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k510, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.980 0 0) ((bruijn string-ref 17 5) (close _V0loop_k511) (bruijn s 6 1) (bruijn i 1 1)) ((bruijn ##k.979 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k511, env)}),
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
static void _V0loop_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda113" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda113, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda113, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 16 4) (close _V0loop_k510) (bruijn i 0 1) (bruijn len 2 1))
V_CALL(VGetArg(upenv, 16-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k510, env)}),
      _var1,
      upenv->up->vars[1]
    );
 }
}
static void _V0escape__string_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0escape__string_lambda112" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_lambda112, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0escape__string_k509) (bruijn loop 0 1) (close _V0loop_lambda113))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k509, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda113, env)})
    );
 }
}
static void _V0escape__string_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0escape__string_k529" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k529, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.974 3 0) (bruijn ret 1 0))
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->vars[0]
    );
 }
}
static void _V0escape__string_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0escape__string_k528" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k528, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn close-port 16 3) (close _V0escape__string_k529) (bruijn port 2 2))
V_CALL(VGetArg(upenv, 16-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k529, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0escape__string_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0escape__string_k527" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k527, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn get-output-string 15 2) (close _V0escape__string_k528) (bruijn port 1 2))
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k528, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0escape__string_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0escape__string_lambda111" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_lambda111, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0escape__string_lambda112) (close _V0escape__string_k527) #f)
V_CALL_FUNC(_V0escape__string_lambda112, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k527, env)}),
      VEncodeBool(false)
    );
 }
}
static void _V0escape__string_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0escape__string_k508" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k508, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0escape__string_lambda111) (bruijn ##k.973 2 0) (bruijn ##x.996 1 0) (bruijn ##x.997 0 0))
V_CALL_FUNC(_V0escape__string_lambda111, env, runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0escape__string_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0escape__string_k507" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k507, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn open-output-string 12 1) (close _V0escape__string_k508))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k508, env)})
    );
 }
}
static void _V0escape__string_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0escape__string_lambda110" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0escape__string_lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_lambda110, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string-length 11 14) (close _V0escape__string_k507) (bruijn s 0 1))
V_CALL(VGetArg(upenv, 11-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k507, env)}),
      _var1
    );
 }
}
static void _V0printout2_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k72" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k73) (bruijn escape-string 2 3) (close _V0escape__string_lambda110))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k73, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_lambda110, env)})
    );
 }
}
static void _V0print__string_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__string_k531" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__string_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_k531, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1001 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k543(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k543" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k543, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1018 1 0) ((bruijn ##k.1019 0 0) (bruijn ##p.1018 1 0)) ((bruijn eqv? 25 18) (bruijn ##k.1019 0 0) (bruijn ##x.126 9 0) (quote #\\)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 25-1, 18), runtime,
      _var0,
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('\\')
    );
}
 }
}
static void _V0loop_k546(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k546" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k546, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 27 23) (bruijn ##k.1008 9 0) (bruijn ##x.1016 0 0))
V_CALL(VGetArg(upenv, 27-1, 23), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0
    );
 }
}
static void _V0loop_k545(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k545" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k545, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-ref 26 5) (close _V0loop_k546) (bruijn s 16 1) (bruijn i 13 1))
V_CALL(VGetArg(upenv, 26-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k546, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 13-1, 1)
    );
 }
}
static void _V0loop_k547(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k547" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k547, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 26 23) (bruijn ##k.1008 8 0) (bruijn ##x.1017 0 0))
V_CALL(VGetArg(upenv, 26-1, 23), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0loop_k544(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k544" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k544, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1014 0 0) ((bruijn display 25 23) (close _V0loop_k545) #\\) ((bruijn string-ref 25 5) (close _V0loop_k547) (bruijn s 15 1) (bruijn i 12 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k545, env)}),
      VEncodeChar('\\')
    );
} else {
V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k547, env)}),
      VGetArg(upenv, 15-1, 1),
      VGetArg(upenv, 12-1, 1)
    );
}
 }
}
static void _V0loop_k542(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k542" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k542, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k543) (close _V0loop_k544))
V_CALL_FUNC(_V0loop_k543, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k544, env)})
    );
 }
}
static void _V0loop_k541(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k541" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k541, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1013 0 0) ((bruijn display 23 23) (bruijn ##k.1008 5 0) (##string ##string.1852)) ((bruijn eqv? 23 18) (close _V0loop_k542) (bruijn ##x.126 7 0) (quote #\")))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 23), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1852.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 23-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k542, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('"')
    );
}
 }
}
static void _V0loop_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k540" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k540, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1012 0 0) ((bruijn display 22 23) (bruijn ##k.1008 4 0) (##string ##string.1848)) ((bruijn eqv? 22 18) (close _V0loop_k541) (bruijn ##x.126 6 0) (quote #\?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 23), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1848.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k541, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('?')
    );
}
 }
}
static void _V0loop_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k539" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k539, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1011 0 0) ((bruijn display 21 23) (bruijn ##k.1008 3 0) (##string ##string.1847)) ((bruijn eqv? 21 18) (close _V0loop_k540) (bruijn ##x.126 5 0) (quote #\return)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 23), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1847.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 21-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k540, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('\r')
    );
}
 }
}
static void _V0loop_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k538" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k538, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1010 0 0) ((bruijn display 20 23) (bruijn ##k.1008 2 0) (##string ##string.1846)) ((bruijn eqv? 20 18) (close _V0loop_k539) (bruijn ##x.126 4 0) (quote #\newline)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 23), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1846.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k539, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('\n')
    );
}
 }
}
static void _V0loop_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k537" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k537, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1009 0 0) ((bruijn display 19 23) (bruijn ##k.1008 1 0) (##string ##string.1851)) ((bruijn eqv? 19 18) (close _V0loop_k538) (bruijn ##x.126 3 0) (quote #\tab)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1851.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k538, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('\t')
    );
}
 }
}
static void _V0loop_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k536" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k536, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1007 1 0) ((bruijn display 18 23) (bruijn ##k.1008 0 0) (##string ##string.1845)) ((bruijn eqv? 18 18) (close _V0loop_k537) (bruijn ##x.126 2 0) (quote #\backspace)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 18-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1845.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k537, env)}),
      upenv->up->vars[0],
      VEncodeChar('\t')
    );
}
 }
}
static void _V0loop_k549(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k549" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k549, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.1003 6 0) (bruijn ##x.1006 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0loop_k548(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k548" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k548, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 18 27) (close _V0loop_k549) (bruijn i 5 1) 1)
V_CALL(VGetArg(upenv, 18-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k549, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k535" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k535, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k536) (close _V0loop_k548))
V_CALL_FUNC(_V0loop_k536, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k548, env)})
    );
 }
}
static void _V0loop_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k534" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k534, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 16 18) (close _V0loop_k535) (bruijn ##x.126 0 0) (quote #\alarm))
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k535, env)}),
      _var0,
      VEncodeChar('\a')
    );
 }
}
static void _V0loop_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k533" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k533, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1004 0 0) ((bruijn string-ref 15 5) (close _V0loop_k534) (bruijn s 5 1) (bruijn i 2 1)) ((bruijn ##k.1003 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k534, env)}),
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
static void _V0loop_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k532" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k532, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn < 14 4) (close _V0loop_k533) (bruijn i 1 1) (bruijn ##x.1020 0 0))
V_CALL(VGetArg(upenv, 14-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k533, env)}),
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0loop_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda116" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda116, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda116, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string-length 13 14) (close _V0loop_k532) (bruijn s 3 1))
V_CALL(VGetArg(upenv, 13-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k532, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0print__string_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__string_lambda115" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_lambda115, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0print__string_k531) (bruijn loop 0 1) (close _V0loop_lambda116))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__string_k531, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda116, env)})
    );
 }
}
static void _V0print__string_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__string_k550" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__string_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_k550, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 12 23) (bruijn ##k.998 2 0) #\")
V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      upenv->up->vars[0],
      VEncodeChar('"')
    );
 }
}
static void _V0print__string_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__string_k530" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__string_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_k530, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__string_lambda115) (close _V0print__string_k550) #f)
V_CALL_FUNC(_V0print__string_lambda115, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__string_k550, env)}),
      VEncodeBool(false)
    );
 }
}
static void _V0print__string_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__string_lambda114" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__string_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn display 10 23) (close _V0print__string_k530) #\")
V_CALL(VGetArg(upenv, 10-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__string_k530, env)}),
      VEncodeChar('"')
    );
 }
}
static void _V0printout2_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout2_k71" };
 VRecordCall(&dbg);
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
  // (set! (close _V0printout2_k72) (bruijn print-string 1 2) (close _V0print__string_lambda114))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k72, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__string_lambda114, env)})
    );
 }
}
static void _V0print__global_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__global_k551" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__global_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__global_k551, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn builtin 0 0) ((bruijn printf 10 37) (bruijn ##k.1021 1 0) (##string ##string.1853) (bruijn builtin 0 0)) ((bruijn printf 10 37) (bruijn ##k.1021 1 0) (##string ##string.1854) (bruijn sym 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1853.sym, VPOINTER_OTHER),
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 10-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1854.sym, VPOINTER_OTHER),
      upenv->vars[1]
    );
}
 }
}
static void _V0print__global_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__global_lambda117" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__global_lambda117, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__global_lambda117, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn lookup-intrinsic2 9 20) (close _V0print__global_k551) (bruijn sym 0 1))
V_CALL(VGetArg(upenv, 9-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__global_k551, env)}),
      _var1
    );
 }
}
static void _V0printout2_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17) {
 static VDebugInfo dbg = { "_V0printout2_lambda5" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_lambda5, runtime, upenv, 18, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17) {
  struct { VEnv env; VWORD argv[18]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 18; env->var_len = 18; env->up = upenv;
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
  // (set! (close _V0printout2_k71) (bruijn print-global 0 1) (close _V0print__global_lambda117))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k71, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__global_lambda117, env)})
    );
 }
}
static void _V0printout2_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7) {
 static VDebugInfo dbg = { "_V0printout2_lambda4" };
 VRecordCall(&dbg);
 if(argc != 8) {
  VError("Not enough arguments to _V0printout2_lambda4, got ~D~N"
  "-- expected 8~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_lambda4, runtime, upenv, 8, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7) {
  struct { VEnv env; VWORD argv[8]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 8; env->var_len = 8; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  // ((close _V0printout2_lambda5) (bruijn ##k.287 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
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
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k69" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k70) (bruijn printout2 5 6) (close _V0printout2_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k70, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_lambda4, env)})
    );
 }
}
static void _V0to__functions_k567(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k567" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k567, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1051 0 0) ((bruijn ##kk.122 3 1) (bruijn ##k.1049 1 0) 1) ((bruijn ##k.1049 1 0) #f))
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
static void _V0to__functions_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__functions_lambda124" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda124, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.124 0 1)) ((bruijn equal? 27 35) (close _V0to__functions_k567) (quote ##foreign.declare) (##inline ##sys.car (bruijn ##expr.124 0 1))) ((bruijn ##k.1049 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 27-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k567, env)}),
      VEncodePointer(&_V10foreign_Ddeclare.sym, VPOINTER_OTHER),
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
static void _V0to__functions_k569(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k569" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k569, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1047 0 0) ((bruijn ##kk.122 4 1) (bruijn ##k.1045 1 0) 1) ((bruijn ##k.1045 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[1], runtime,
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
static void _V0to__functions_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__functions_lambda125" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda125, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.125 0 1)) ((bruijn equal? 28 35) (close _V0to__functions_k569) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.125 0 1))) ((bruijn ##k.1045 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 28-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k569, env)}),
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
static void _V0to__functions_k570(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k570" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k570, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.122 3 1) (bruijn ##k.1042 2 0) 0)
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l)
    );
 }
}
static void _V0to__functions_k568(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k568" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k568, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0to__functions_lambda125) (close _V0to__functions_k570) (bruijn ##input.123 1 1))
V_CALL_FUNC(_V0to__functions_lambda125, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k570, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0to__functions_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__functions_lambda123" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda123, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__functions_lambda124) (close _V0to__functions_k568) (bruijn ##input.123 0 1))
V_CALL_FUNC(_V0to__functions_lambda124, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k568, env)}),
      _var1
    );
 }
}
static void _V0to__functions_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__functions_lambda122" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda122, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__functions_lambda123) (bruijn ##k.1041 0 0) (bruijn e 1 1))
V_CALL_FUNC(_V0to__functions_lambda123, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0to__functions_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__functions_lambda121" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 24 36) (bruijn ##k.1040 0 0) (close _V0to__functions_lambda122))
V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda122, env)})
    );
 }
}
static void _V0to__functions_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_lambda120" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_lambda120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn multi-partition 16 15) (bruijn ##k.1039 0 0) (close _V0to__functions_lambda121) 2 (bruijn exprs 17 1))
V_CALL(VGetArg(upenv, 16-1, 15), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda121, env)}),
      VEncodeInt(2l),
      VGetArg(upenv, 17-1, 1)
    );
 }
}
static void _V0to__functions_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0to__functions_lambda127" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda127, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn list 26 57) (bruijn ##k.1054 0 0) (bruijn literal-table 19 5) (bruijn foreign-functions 19 3) (bruijn functions 19 4) (bruijn declares 0 2) (bruijn toplevels 0 1))
V_CALL(VGetArg(upenv, 26-1, 57), runtime,
      _var0,
      VGetArg(upenv, 19-1, 5),
      VGetArg(upenv, 19-1, 3),
      VGetArg(upenv, 19-1, 4),
      _var2,
      _var1
    );
 }
}
static void _V0to__functions_k572(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k572" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k572, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0to__functions_lambda127) (bruijn ##k.1053 2 0) (bruijn ##x.1055 1 0) (bruijn ##x.1056 0 0))
V_CALL_FUNC(_V0to__functions_lambda127, env, runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0to__functions_k571(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k571" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k571, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 24 32) (close _V0to__functions_k572) (bruijn iter-declare 17 12) (bruijn declares 1 2))
V_CALL(VGetArg(upenv, 24-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k572, env)}),
      VGetArg(upenv, 17-1, 12),
      upenv->vars[2]
    );
 }
}
static void _V0to__functions_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__functions_lambda128" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda128, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda128, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 17 11) (bruijn ##k.1057 0 0) (##string ##string.1855) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 17-1, 11), runtime,
      _var0,
      VEncodePointer(&_V10string_D1855.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0to__functions_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0to__functions_lambda126" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0to__functions_lambda126, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda126, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn map 23 32) (close _V0to__functions_k571) (close _V0to__functions_lambda128) (bruijn globals 0 1))
V_CALL(VGetArg(upenv, 23-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k571, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda128, env)}),
      _var1
    );
 }
}
static void _V0to__functions_k566(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k566" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k566, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 22 21) (bruijn ##k.1023 15 0) (close _V0to__functions_lambda120) (close _V0to__functions_lambda126))
V_CALL(VGetArg(upenv, 22-1, 21), runtime,
      VGetArg(upenv, 15-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda120, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda126, env)})
    );
 }
}
static void _V0multi__partition_k574(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0multi__partition_k574" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0multi__partition_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0multi__partition_k574, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.1059 2 0) (bruijn ##x.1061 0 0) (bruijn l 3 3))
V_CALL(upenv->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->up->vars[3]
    );
 }
}
static void _V0multi__partition_k573(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0multi__partition_k573" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0multi__partition_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0multi__partition_k573, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-list 17 13) (close _V0multi__partition_k574) (bruijn n 2 2) (quote ()))
V_CALL(VGetArg(upenv, 17-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0multi__partition_k574, env)}),
      upenv->up->vars[2],
      VNULL
    );
 }
}
static void _V0loop_k576(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k576" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k576, runtime, upenv, 1, argc, _var0) {
  // ((bruijn apply 26 55) (bruijn ##k.1062 2 0) (bruijn values 26 54) (bruijn ##x.1064 0 0))
V_CALL(VGetArg(upenv, 26-1, 55), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 26-1, 54),
      _var0
    );
 }
}
static void _V0loop_k583(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k583" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k583, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 9 1) (bruijn ##k.1062 8 0) (bruijn ret 8 1) (bruijn ##x.1066 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 8-1, 1),
      _var0
    );
 }
}
static void _V0loop_k582(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k582" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k582, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 31 24) (close _V0loop_k583) (bruijn l 7 2))
V_CALL(VGetArg(upenv, 31-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k583, env)}),
      VGetArg(upenv, 7-1, 2)
    );
 }
}
static void _V0loop_k581(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k581" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k581, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list-set! 23 14) (close _V0loop_k582) (bruijn ret 6 1) (bruijn split 3 0) (bruijn ##x.1067 0 0))
V_CALL(VGetArg(upenv, 23-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k582, env)}),
      VGetArg(upenv, 6-1, 1),
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k580(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k580" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k580, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 29 56) (close _V0loop_k581) (bruijn ##x.1068 1 0) (bruijn ##x.1069 0 0))
V_CALL(VGetArg(upenv, 29-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k581, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k579(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k579" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k579, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list-ref 28 28) (close _V0loop_k580) (bruijn ret 4 1) (bruijn split 1 0))
V_CALL(VGetArg(upenv, 28-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k580, env)}),
      upenv->up->up->up->vars[1],
      upenv->vars[0]
    );
 }
}
static void _V0loop_k578(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k578" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k578, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 27 30) (close _V0loop_k579) (bruijn l 3 2))
V_CALL(VGetArg(upenv, 27-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k579, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_k577(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k577" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k577, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn f 4 1) (close _V0loop_k578) (bruijn ##x.1070 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k578, env)}),
      _var0
    );
 }
}
static void _V0loop_k575(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k575" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k575, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1063 0 0) ((bruijn map 25 32) (close _V0loop_k576) (bruijn reverse 25 46) (bruijn ret 1 1)) ((bruijn car 25 30) (close _V0loop_k577) (bruijn l 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k576, env)}),
      VGetArg(upenv, 25-1, 46),
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 25-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k577, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0loop_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda131" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda131, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda131, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 24 44) (close _V0loop_k575) (bruijn l 0 2))
V_CALL(VGetArg(upenv, 24-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k575, env)}),
      _var2
    );
 }
}
static void _V0multi__partition_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0multi__partition_lambda130" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0multi__partition_lambda130, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0multi__partition_k573) (bruijn loop 0 1) (close _V0loop_lambda131))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0multi__partition_k573, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda131, env)})
    );
 }
}
static void _V0multi__partition_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0multi__partition_lambda129" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0multi__partition_lambda129, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0multi__partition_lambda129, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0multi__partition_lambda130) (bruijn ##k.1058 0 0) #f)
V_CALL_FUNC(_V0multi__partition_lambda130, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0to__functions_k565(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k565" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k565, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k566) (bruijn multi-partition 14 15) (close _V0multi__partition_lambda129))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k566, env)}),
      VEncodeInt(14l), VEncodeInt(15l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0multi__partition_lambda129, env)})
    );
 }
}
static void _V0list__set_B_k586(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__set_B_k586" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__set_B_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_k586, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list-set! 17 14) (bruijn ##k.1071 3 0) (bruijn ##x.1073 1 0) (bruijn ##x.1074 0 0) (bruijn v 3 3))
V_CALL(VGetArg(upenv, 17-1, 14), runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0,
      upenv->up->up->vars[3]
    );
 }
}
static void _V0list__set_B_k585(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__set_B_k585" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__set_B_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_k585, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 23 29) (close _V0list__set_B_k586) (bruijn x 2 2) 1)
V_CALL(VGetArg(upenv, 23-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_k586, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l)
    );
 }
}
static void _V0list__set_B_k584(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__set_B_k584" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__set_B_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_k584, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1072 0 0) ((bruijn set-car! 22 53) (bruijn ##k.1071 1 0) (bruijn l 1 1) (bruijn v 1 3)) ((bruijn cdr 22 24) (close _V0list__set_B_k585) (bruijn l 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 53), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_k585, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0list__set_B_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0list__set_B_lambda132" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0list__set_B_lambda132, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_lambda132, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn = 21 22) (close _V0list__set_B_k584) (bruijn x 0 2) 0)
V_CALL(VGetArg(upenv, 21-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_k584, env)}),
      _var2,
      VEncodeInt(0l)
    );
 }
}
static void _V0to__functions_k564(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k564" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k564, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k565) (bruijn list-set! 13 14) (close _V0list__set_B_lambda132))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k565, env)}),
      VEncodeInt(13l), VEncodeInt(14l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_lambda132, env)})
    );
 }
}
static void _V0make__list_k589(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__list_k589" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__list_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_k589, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 23 56) (bruijn ##k.1075 3 0) (bruijn k 3 2) (bruijn ##x.1077 0 0))
V_CALL(VGetArg(upenv, 23-1, 56), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2],
      _var0
    );
 }
}
static void _V0make__list_k588(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__list_k588" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__list_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_k588, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-list 15 13) (close _V0make__list_k589) (bruijn ##x.1078 0 0) (bruijn k 2 2))
V_CALL(VGetArg(upenv, 15-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_k589, env)}),
      _var0,
      upenv->up->vars[2]
    );
 }
}
static void _V0make__list_k587(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__list_k587" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__list_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_k587, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1076 0 0) ((bruijn ##k.1075 1 0) (quote ())) ((bruijn - 21 29) (close _V0make__list_k588) (bruijn n 1 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL
    );
} else {
V_CALL(VGetArg(upenv, 21-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_k588, env)}),
      upenv->vars[1],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0make__list_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0make__list_lambda133" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0make__list_lambda133, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_lambda133, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn = 20 22) (close _V0make__list_k587) 0 (bruijn n 0 1))
V_CALL(VGetArg(upenv, 20-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_k587, env)}),
      VEncodeInt(0l),
      _var1
    );
 }
}
static void _V0to__functions_k563(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k563" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k563, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k564) (bruijn make-list 12 13) (close _V0make__list_lambda133))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k564, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_lambda133, env)})
    );
 }
}
static void _V0iter__declare_k590(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k590" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k590, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1097 0 0) ((bruijn ##kk.116 3 1) (bruijn ##k.1095 1 0) (bruijn d 4 1)) ((bruijn ##k.1095 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__declare_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda137" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda137, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.118 0 1)) ((bruijn equal? 22 35) (close _V0iter__declare_k590) (quote ##foreign.declare) (##inline ##sys.car (bruijn ##expr.118 0 1))) ((bruijn ##k.1095 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k590, env)}),
      VEncodePointer(&_V10foreign_Ddeclare.sym, VPOINTER_OTHER),
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
static void _V0iter__declare_k598(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k598" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k598, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.116 10 1) (bruijn ##k.1084 7 0) (bruijn ##x.1090 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0iter__declare_k597(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k597" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k597, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 29 57) (close _V0iter__declare_k598) (quote ##vcore.declare) (bruijn f 3 0) (bruijn ##x.1091 0 0))
V_CALL(VGetArg(upenv, 29-1, 57), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k598, env)}),
      VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0iter__declare_k596(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k596" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k596, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 28 19) (close _V0iter__declare_k597) (bruijn ##x.1092 0 0))
V_CALL(VGetArg(upenv, 28-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k597, env)}),
      _var0
    );
 }
}
static void _V0iter__declare_k595(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k595" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k595, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.121 0 0))) ((bruijn iter 20 11) (close _V0iter__declare_k596) (bruijn f 1 0) (##inline ##sys.car (bruijn ##expr.121 0 0))) ((bruijn ##k.1084 4 0) #f)) ((bruijn ##k.1084 4 0) #f))
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
V_CALL(VGetArg(upenv, 20-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k596, env)}),
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
static void _V0iter__declare_k594(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k594" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k594, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__declare_k595) (##inline ##sys.cdr (bruijn ##expr.120 1 0)))
V_CALL_FUNC(_V0iter__declare_k595, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter__declare_k593(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k593" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k593, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.120 0 0)) ((close _V0iter__declare_k594) (##inline ##sys.car (bruijn ##expr.120 0 0))) ((bruijn ##k.1084 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__declare_k594, env, runtime,
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
static void _V0iter__declare_k592(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k592" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k592, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1086 0 0) ((close _V0iter__declare_k593) (##inline ##sys.cdr (bruijn ##expr.119 1 1))) ((bruijn ##k.1084 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__declare_k593, env, runtime,
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
static void _V0iter__declare_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda138" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda138, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.119 0 1)) ((bruijn equal? 23 35) (close _V0iter__declare_k592) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.119 0 1))) ((bruijn ##k.1084 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k592, env)}),
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
static void _V0iter__declare_k599(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k599" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k599, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 23 34) (bruijn ##k.1081 2 0) (##string ##string.1764))
V_CALL(VGetArg(upenv, 23-1, 34), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1764.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0iter__declare_k591(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__declare_k591" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k591, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__declare_lambda138) (close _V0iter__declare_k599) (bruijn ##input.117 1 1))
V_CALL_FUNC(_V0iter__declare_lambda138, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k599, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter__declare_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda136" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda136, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__declare_lambda137) (close _V0iter__declare_k591) (bruijn ##input.117 0 1))
V_CALL_FUNC(_V0iter__declare_lambda137, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k591, env)}),
      _var1
    );
 }
}
static void _V0iter__declare_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda135" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__declare_lambda135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda135, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__declare_lambda136) (bruijn ##k.1080 0 0) (bruijn d 1 1))
V_CALL_FUNC(_V0iter__declare_lambda136, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0iter__declare_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__declare_lambda134" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__declare_lambda134, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda134, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 19 36) (bruijn ##k.1079 0 0) (close _V0iter__declare_lambda135))
V_CALL(VGetArg(upenv, 19-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_lambda135, env)})
    );
 }
}
static void _V0to__functions_k562(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k562" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k562, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k563) (bruijn iter-declare 11 12) (close _V0iter__declare_lambda134))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k563, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_lambda134, env)})
    );
 }
}
static void _V0iter_k600(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k600" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k600, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1140 0 0) ((bruijn ##kk.107 3 1) (bruijn ##k.1138 1 0) (bruijn expr 4 2)) ((bruijn ##k.1138 1 0) #f))
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
static void _V0iter_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda142" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda142, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.109 0 1)) ((bruijn equal? 21 35) (close _V0iter_k600) (quote bruijn) (##inline ##sys.car (bruijn ##expr.109 0 1))) ((bruijn ##k.1138 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k600, env)}),
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
static void _V0iter_k603(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k603" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k603, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.107 5 1) (bruijn ##k.1133 2 0) (bruijn ##x.1136 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k602(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k602" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k602, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1135 0 0) ((bruijn iter-atom 16 9) (close _V0iter_k603) (bruijn fun 5 1) (bruijn expr 5 2) #f) ((bruijn ##k.1133 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k603, env)}),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 5-1, 2),
      VEncodeBool(false)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda143" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda143, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.110 0 1)) ((bruijn equal? 22 35) (close _V0iter_k602) (quote lambda) (##inline ##sys.car (bruijn ##expr.110 0 1))) ((bruijn ##k.1133 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k602, env)}),
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
static void _V0iter_k606(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k606" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k606, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.107 6 1) (bruijn ##k.1128 2 0) (bruijn ##x.1131 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k605(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k605" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k605, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1130 0 0) ((bruijn iter-atom 17 9) (close _V0iter_k606) (bruijn fun 6 1) (bruijn expr 6 2) #f) ((bruijn ##k.1128 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k606, env)}),
      VGetArg(upenv, 6-1, 1),
      VGetArg(upenv, 6-1, 2),
      VEncodeBool(false)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda144" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda144, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.111 0 1)) ((bruijn equal? 23 35) (close _V0iter_k605) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.111 0 1))) ((bruijn ##k.1128 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k605, env)}),
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
static void _V0iter_k609(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k609" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k609, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.107 7 1) (bruijn ##k.1123 2 0) (bruijn ##x.1126 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k608(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k608" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k608, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1125 0 0) ((bruijn iter-atom 18 9) (close _V0iter_k609) (bruijn fun 7 1) (bruijn expr 7 2) #f) ((bruijn ##k.1123 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k609, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2),
      VEncodeBool(false)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda145" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda145, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.112 0 1)) ((bruijn equal? 24 35) (close _V0iter_k608) (quote continuation) (##inline ##sys.car (bruijn ##expr.112 0 1))) ((bruijn ##k.1123 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k608, env)}),
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
static void _V0iter_k612(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k612" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k612, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.107 8 1) (bruijn ##k.1118 2 0) (bruijn ##x.1121 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k611(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k611" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k611, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1120 0 0) ((bruijn iter-atom 19 9) (close _V0iter_k612) (bruijn fun 8 1) (bruijn expr 8 2) #f) ((bruijn ##k.1118 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k612, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 8-1, 2),
      VEncodeBool(false)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda146" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda146, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.113 0 1)) ((bruijn equal? 25 35) (close _V0iter_k611) (quote quote) (##inline ##sys.car (bruijn ##expr.113 0 1))) ((bruijn ##k.1118 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k611, env)}),
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
static void _V0iter_k615(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k615" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k615, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.107 9 1) (bruijn ##k.1113 2 0) (bruijn ##x.1116 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k614(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k614" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k614, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1115 0 0) ((bruijn iter-atom 20 9) (close _V0iter_k615) (bruijn fun 9 1) (bruijn expr 9 2) #f) ((bruijn ##k.1113 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k615, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2),
      VEncodeBool(false)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda147" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda147, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.114 0 1)) ((bruijn equal? 26 35) (close _V0iter_k614) (quote ##inline) (##inline ##sys.car (bruijn ##expr.114 0 1))) ((bruijn ##k.1113 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 26-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k614, env)}),
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
static void _V0iter_k617(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k617" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k617, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.107 9 1) (bruijn ##k.1110 1 0) (bruijn ##x.1112 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0iter_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda148" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda148, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.115 0 1)) ((bruijn iter-apply 20 10) (close _V0iter_k617) (bruijn fun 9 1) (bruijn expr 9 2)) ((bruijn ##k.1110 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k617, env)}),
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
static void _V0iter_k619(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k619" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k619, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.107 9 1) (bruijn ##k.1101 8 0) (bruijn ##x.1109 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0iter_k618(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k618" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k618, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-atom 20 9) (close _V0iter_k619) (bruijn fun 9 1) (bruijn expr 9 2) #f)
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k619, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2),
      VEncodeBool(false)
    );
 }
}
static void _V0iter_k616(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k616" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k616, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda148) (close _V0iter_k618) (bruijn ##input.108 6 1))
V_CALL_FUNC(_V0iter_lambda148, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k618, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0iter_k613(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k613" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k613, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda147) (close _V0iter_k616) (bruijn ##input.108 5 1))
V_CALL_FUNC(_V0iter_lambda147, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k616, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0iter_k610(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k610" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k610, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda146) (close _V0iter_k613) (bruijn ##input.108 4 1))
V_CALL_FUNC(_V0iter_lambda146, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k613, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0iter_k607(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k607" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k607, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda145) (close _V0iter_k610) (bruijn ##input.108 3 1))
V_CALL_FUNC(_V0iter_lambda145, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k610, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0iter_k604(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k604" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k604, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda144) (close _V0iter_k607) (bruijn ##input.108 2 1))
V_CALL_FUNC(_V0iter_lambda144, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k607, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0iter_k601(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k601" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k601, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda143) (close _V0iter_k604) (bruijn ##input.108 1 1))
V_CALL_FUNC(_V0iter_lambda143, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k604, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda141" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda141, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda142) (close _V0iter_k601) (bruijn ##input.108 0 1))
V_CALL_FUNC(_V0iter_lambda142, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k601, env)}),
      _var1
    );
 }
}
static void _V0iter_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda140" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda140, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda140, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda141) (bruijn ##k.1100 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0iter_lambda141, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0iter_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter_lambda139" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda139, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda139, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 18 36) (bruijn ##k.1099 0 0) (close _V0iter_lambda140))
V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda140, env)})
    );
 }
}
static void _V0to__functions_k561(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k561" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k561, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k562) (bruijn iter 10 11) (close _V0iter_lambda139))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k562, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda139, env)})
    );
 }
}
static void _V0iter__apply_k627(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k627" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k627, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 10 1) (bruijn ##k.1252 8 0) (##inline ##sys.cons (quote define) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.80 6 0)) (##inline ##sys.cons (bruijn ##x.1262 2 0) (##inline ##sys.cons (bruijn ##x.1264 0 0) (quote ()))))))
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
static void _V0iter__apply_k626(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k626" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k626, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-atom 20 9) (close _V0iter__apply_k627) (bruijn ##x.1265 0 0) (##inline ##sys.car (bruijn ##expr.82 2 0)) #f)
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k627, env)}),
      _var0,
      VInlineCar(
upenv->up->vars[0]
    )
,
      VEncodeBool(false)
    );
 }
}
static void _V0iter__apply_k625(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k625" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k625, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 26 12) (close _V0iter__apply_k626) (bruijn y 2 0))
V_CALL(VGetArg(upenv, 26-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k626, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0iter__apply_k624(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k624" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k624, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.82 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.82 0 0))) ((bruijn lift-literal 18 7) (close _V0iter__apply_k625) (bruijn y 1 0)) ((bruijn ##k.1252 5 0) #f)) ((bruijn ##k.1252 5 0) #f))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k625, env)}),
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
static void _V0iter__apply_k623(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k623" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k623, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k624) (##inline ##sys.cdr (bruijn ##expr.81 1 0)))
V_CALL_FUNC(_V0iter__apply_k624, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k622(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k622" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k622, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.81 0 0)) ((close _V0iter__apply_k623) (##inline ##sys.car (bruijn ##expr.81 0 0))) ((bruijn ##k.1252 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k623, env, runtime,
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
static void _V0iter__apply_k621(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k621" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k621, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.80 0 0)) ((close _V0iter__apply_k622) (##inline ##sys.cdr (bruijn ##expr.80 0 0))) ((bruijn ##k.1252 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k622, env, runtime,
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
static void _V0iter__apply_k620(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k620" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k620, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1254 0 0) ((close _V0iter__apply_k621) (##inline ##sys.cdr (bruijn ##expr.79 1 1))) ((bruijn ##k.1252 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k621, env, runtime,
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
static void _V0iter__apply_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda152" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda152, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.79 0 1)) ((bruijn equal? 20 35) (close _V0iter__apply_k620) (quote define) (##inline ##sys.car (bruijn ##expr.79 0 1))) ((bruijn ##k.1252 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k620, env)}),
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
static void _V0iter__apply_k639(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k639" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k639, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k639, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 14 1) (bruijn ##k.1230 11 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn ##x.1242 2 0) (##inline ##sys.cons (##inline ##sys.cons (quote bruijn) (##inline ##sys.cons (bruijn name 4 0) (##inline ##sys.cdr (bruijn ##expr.87 5 0)))) (##inline ##sys.cons (bruijn ##x.1246 0 0) (quote ()))))))
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
static void _V0iter__apply_k638(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k638" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k638, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-atom 24 9) (close _V0iter__apply_k639) (bruijn ##x.1247 0 0) (##inline ##sys.car (bruijn ##expr.88 2 0)) #f)
V_CALL(VGetArg(upenv, 24-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k639, env)}),
      _var0,
      VInlineCar(
upenv->up->vars[0]
    )
,
      VEncodeBool(false)
    );
 }
}
static void _V0iter__apply_k637(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k637" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k637, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 30 12) (close _V0iter__apply_k638) (bruijn name 2 0))
V_CALL(VGetArg(upenv, 30-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k638, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0iter__apply_k636(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k636" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k636, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.88 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.88 0 0))) ((bruijn iter-atom 22 9) (close _V0iter__apply_k637) (bruijn fun 12 1) (##inline ##sys.car (bruijn ##expr.84 6 0)) #f) ((bruijn ##k.1230 8 0) #f)) ((bruijn ##k.1230 8 0) #f))
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
V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k637, env)}),
      VGetArg(upenv, 12-1, 1),
      VInlineCar(
VGetArg(upenv, 6-1, 0)
    )
,
      VEncodeBool(false)
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
static void _V0iter__apply_k635(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k635" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k635, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k636) (##inline ##sys.cdr (bruijn ##expr.85 4 0)))
V_CALL_FUNC(_V0iter__apply_k636, env, runtime,
      VInlineCdr(
upenv->up->up->up->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k634(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k634" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k634, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.87 0 0)) ((close _V0iter__apply_k635) (##inline ##sys.car (bruijn ##expr.87 0 0))) ((bruijn ##k.1230 6 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k635, env, runtime,
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
static void _V0iter__apply_k633(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k633" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k633, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1236 0 0) ((close _V0iter__apply_k634) (##inline ##sys.cdr (bruijn ##expr.86 1 0))) ((bruijn ##k.1230 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k634, env, runtime,
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
static void _V0iter__apply_k632(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k632" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k632, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.86 0 0)) ((bruijn equal? 25 35) (close _V0iter__apply_k633) (quote bruijn) (##inline ##sys.car (bruijn ##expr.86 0 0))) ((bruijn ##k.1230 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k633, env)}),
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
static void _V0iter__apply_k631(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k631" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k631, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.85 0 0)) ((close _V0iter__apply_k632) (##inline ##sys.car (bruijn ##expr.85 0 0))) ((bruijn ##k.1230 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k632, env, runtime,
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
static void _V0iter__apply_k630(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k630" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k630, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.84 0 0)) ((close _V0iter__apply_k631) (##inline ##sys.cdr (bruijn ##expr.84 0 0))) ((bruijn ##k.1230 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k631, env, runtime,
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
static void _V0iter__apply_k629(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k629" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k629, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1232 0 0) ((close _V0iter__apply_k630) (##inline ##sys.cdr (bruijn ##expr.83 1 1))) ((bruijn ##k.1230 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k630, env, runtime,
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
static void _V0iter__apply_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda153" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda153, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.83 0 1)) ((bruijn equal? 21 35) (close _V0iter__apply_k629) (quote set!) (##inline ##sys.car (bruijn ##expr.83 0 1))) ((bruijn ##k.1230 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k629, env)}),
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
static void _V0iter__apply_k649(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k649" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k649, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k649, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 13 1) (bruijn ##k.1213 9 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn ##x.1222 3 0) (##inline ##sys.cons (bruijn ##x.1224 2 0) (##inline ##sys.cons (bruijn ##x.1226 0 0) (quote ()))))))
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
static void _V0iter__apply_k648(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k648" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k648, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k648, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-atom 23 9) (close _V0iter__apply_k649) (bruijn ##x.1227 0 0) (##inline ##sys.car (bruijn ##expr.92 3 0)) #f)
V_CALL(VGetArg(upenv, 23-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k649, env)}),
      _var0,
      VInlineCar(
upenv->up->up->vars[0]
    )
,
      VEncodeBool(false)
    );
 }
}
static void _V0iter__apply_k647(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k647" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k647, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k647, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 29 12) (close _V0iter__apply_k648) (bruijn y 3 0))
V_CALL(VGetArg(upenv, 29-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k648, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0iter__apply_k646(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k646" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k646, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k646, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn lift-literal 21 7) (close _V0iter__apply_k647) (bruijn y 2 0))
V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k647, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0iter__apply_k645(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k645" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k645, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k645, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.92 0 0))) ((bruijn iter-atom 20 9) (close _V0iter__apply_k646) (bruijn fun 10 1) (##inline ##sys.car (bruijn ##expr.90 3 0)) #f) ((bruijn ##k.1213 5 0) #f)) ((bruijn ##k.1213 5 0) #f))
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
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k646, env)}),
      VGetArg(upenv, 10-1, 1),
      VInlineCar(
upenv->up->up->vars[0]
    )
,
      VEncodeBool(false)
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
static void _V0iter__apply_k644(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k644" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k644, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k644, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k645) (##inline ##sys.cdr (bruijn ##expr.91 1 0)))
V_CALL_FUNC(_V0iter__apply_k645, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k643(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k643" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k643, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k643, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.91 0 0)) ((close _V0iter__apply_k644) (##inline ##sys.car (bruijn ##expr.91 0 0))) ((bruijn ##k.1213 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k644, env, runtime,
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
static void _V0iter__apply_k642(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k642" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k642, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k642, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.90 0 0)) ((close _V0iter__apply_k643) (##inline ##sys.cdr (bruijn ##expr.90 0 0))) ((bruijn ##k.1213 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k643, env, runtime,
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
static void _V0iter__apply_k641(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k641" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k641, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k641, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1215 0 0) ((close _V0iter__apply_k642) (##inline ##sys.cdr (bruijn ##expr.89 1 1))) ((bruijn ##k.1213 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k642, env, runtime,
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
static void _V0iter__apply_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda154" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda154, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.89 0 1)) ((bruijn equal? 22 35) (close _V0iter__apply_k641) (quote set!) (##inline ##sys.car (bruijn ##expr.89 0 1))) ((bruijn ##k.1213 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k641, env)}),
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
static void _V0iter__apply_k657(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k657" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k657, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k657, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 12 1) (bruijn ##k.1197 7 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn ##x.1206 2 0) (##inline ##sys.cons (bruijn ##x.1208 1 0) (##inline ##sys.cons (bruijn ##x.1210 0 0) (quote ()))))))
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
static void _V0iter__apply_k656(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k656" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k656, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k656, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-apply 22 10) (close _V0iter__apply_k657) (bruijn fun 12 1) (##inline ##sys.car (bruijn ##expr.96 2 0)))
V_CALL(VGetArg(upenv, 22-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k657, env)}),
      VGetArg(upenv, 12-1, 1),
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k655(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k655" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k655, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k655, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-apply 21 10) (close _V0iter__apply_k656) (bruijn fun 11 1) (##inline ##sys.car (bruijn ##expr.95 2 0)))
V_CALL(VGetArg(upenv, 21-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k656, env)}),
      VGetArg(upenv, 11-1, 1),
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k654(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k654" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k654, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k654, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.96 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.96 0 0))) ((bruijn iter-atom 20 9) (close _V0iter__apply_k655) (bruijn fun 10 1) (##inline ##sys.car (bruijn ##expr.94 2 0)) #f) ((bruijn ##k.1197 4 0) #f)) ((bruijn ##k.1197 4 0) #f))
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
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k655, env)}),
      VGetArg(upenv, 10-1, 1),
      VInlineCar(
upenv->up->vars[0]
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
static void _V0iter__apply_k653(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k653" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k653, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k653, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.95 0 0)) ((close _V0iter__apply_k654) (##inline ##sys.cdr (bruijn ##expr.95 0 0))) ((bruijn ##k.1197 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k654, env, runtime,
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
static void _V0iter__apply_k652(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k652" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k652, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k652, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.94 0 0)) ((close _V0iter__apply_k653) (##inline ##sys.cdr (bruijn ##expr.94 0 0))) ((bruijn ##k.1197 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k653, env, runtime,
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
static void _V0iter__apply_k651(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k651" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k651, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k651, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1199 0 0) ((close _V0iter__apply_k652) (##inline ##sys.cdr (bruijn ##expr.93 1 1))) ((bruijn ##k.1197 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k652, env, runtime,
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
static void _V0iter__apply_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda155" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda155, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.93 0 1)) ((bruijn equal? 23 35) (close _V0iter__apply_k651) (quote if) (##inline ##sys.car (bruijn ##expr.93 0 1))) ((bruijn ##k.1197 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k651, env)}),
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
static void _V0iter__apply_k667(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k667" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k667, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k667, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 15 1) (bruijn ##k.1175 9 0) (##inline ##sys.cons (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 4 0) (quote ()))) (bruijn ##x.1185 0 0)))
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
static void _V0iter__apply_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda157" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda157, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda157, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-atom 26 9) (bruijn ##k.1186 0 0) (bruijn fun 16 1) (bruijn x 0 1) #f)
V_CALL(VGetArg(upenv, 26-1, 9), runtime,
      _var0,
      VGetArg(upenv, 16-1, 1),
      _var1,
      VEncodeBool(false)
    );
 }
}
static void _V0iter__apply_k666(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k666" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k666, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k666, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 32 32) (close _V0iter__apply_k667) (close _V0iter__apply_lambda157) (##inline ##sys.cdr (bruijn ##expr.97 8 1)))
V_CALL(VGetArg(upenv, 32-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k667, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda157, env)}),
      VInlineCdr(
VGetArg(upenv, 8-1, 1)
    )

    );
 }
}
static void _V0iter__apply_k665(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k665" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k665, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k665, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0iter__apply_k666) (bruijn functions 24 4) (bruijn ##x.1188 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k666, env)}),
      VEncodeInt(24l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0iter__apply_k664(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k664" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k664, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k664, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 30 56) (close _V0iter__apply_k665) (##inline ##sys.cons (bruijn lamb 1 0) (##inline ##sys.cons (quote #f) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.99 3 0)) (##inline ##sys.cons (bruijn ##x.1194 0 0) (quote ()))) (quote ())))) (bruijn functions 23 4))
V_CALL(VGetArg(upenv, 30-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k665, env)}),
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
      VGetArg(upenv, 23-1, 4)
    );
 }
}
static void _V0iter__apply_k663(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k663" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k663, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k663, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-apply 22 10) (close _V0iter__apply_k664) (bruijn fun 12 1) (##inline ##sys.car (bruijn ##expr.100 1 0)))
V_CALL(VGetArg(upenv, 22-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k664, env)}),
      VGetArg(upenv, 12-1, 1),
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter__apply_k662(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k662" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k662, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k662, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.100 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.100 0 0))) ((bruijn genlambda 21 1) (close _V0iter__apply_k663) (bruijn fun 11 1)) ((bruijn ##k.1175 4 0) #f)) ((bruijn ##k.1175 4 0) #f))
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
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k663, env)}),
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
static void _V0iter__apply_k661(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k661" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k661, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k661, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.99 0 0)) ((close _V0iter__apply_k662) (##inline ##sys.cdr (bruijn ##expr.99 0 0))) ((bruijn ##k.1175 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__apply_k662, env, runtime,
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
static void _V0iter__apply_k660(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k660" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k660, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k660, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1178 0 0) ((close _V0iter__apply_k661) (##inline ##sys.cdr (bruijn ##expr.98 1 0))) ((bruijn ##k.1175 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k661, env, runtime,
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
static void _V0iter__apply_k659(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k659" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k659, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k659, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.98 0 0)) ((bruijn equal? 25 35) (close _V0iter__apply_k660) (quote lambda) (##inline ##sys.car (bruijn ##expr.98 0 0))) ((bruijn ##k.1175 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k660, env)}),
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
static void _V0iter__apply_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda156" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda156, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.97 0 1)) ((close _V0iter__apply_k659) (##inline ##sys.car (bruijn ##expr.97 0 1))) ((bruijn ##k.1175 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0iter__apply_k659, env, runtime,
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
static void _V0iter__apply_k669(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k669" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k669, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k669, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1155 1 0) (##inline ##sys.cdr (bruijn ##expr.101 4 1)) (quote ()))
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
static void _V0loop_k671(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k671" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k671, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k671, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.104 4 1) (bruijn ##k.1166 1 0) (bruijn ##expr.106 2 1) (bruijn ##x.1167 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k670(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k670" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k670, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k670, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.106 1 1))) ((bruijn reverse 30 46) (close _V0loop_k671) (bruijn ##xs.103 1 2)) ((bruijn ##k.1166 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 30-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k671, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k674(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k674" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k674, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k674, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.104 7 1) (bruijn ##k.1160 2 0) (bruijn ##expr.106 5 1) (bruijn ##x.1162 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k673(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k673" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k673, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k673, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 33 46) (close _V0loop_k674) (bruijn ##xs.103 4 2))
V_CALL(VGetArg(upenv, 33-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k674, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda164" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda164, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda164, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.105 0 1) (close _V0loop_k673) (##inline ##sys.cdr (bruijn ##expr.106 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.106 3 1)) (bruijn ##xs.103 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k673, env)}),
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
static void _V0loop_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda163" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 31 36) (bruijn ##k.1159 0 0) (close _V0loop_lambda164))
V_CALL(VGetArg(upenv, 31-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda164, env)})
    );
 }
}
static void _V0loop_k672(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k672" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k672, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k672, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 30 21) (bruijn ##k.1157 1 0) (close _V0loop_lambda163) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 30-1, 21), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda163, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda162" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda162, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda162, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k670) (close _V0loop_k672))
V_CALL_FUNC(_V0loop_k670, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k672, env)})
    );
 }
}
static void _V0iter__apply_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda161" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda161, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter__apply_k669) (bruijn loop 0 1) (close _V0loop_lambda162))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k669, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda162, env)})
    );
 }
}
static void _V0iter__apply_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda160" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda160, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda160, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__apply_lambda161) (bruijn ##k.1154 0 0) #f)
V_CALL_FUNC(_V0iter__apply_lambda161, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0iter__apply_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda159" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_lambda159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 26 36) (bruijn ##k.1153 0 0) (close _V0iter__apply_lambda160))
V_CALL(VGetArg(upenv, 26-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda160, env)})
    );
 }
}
static void _V0iter__apply_k677(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k677" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k677, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k677, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 11 1) (bruijn ##k.1169 3 0) (bruijn ##x.1171 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0iter__apply_k676(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k676" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k676, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k676, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 28 56) (close _V0iter__apply_k677) (bruijn ##x.1172 1 0) (bruijn ##x.1173 0 0))
V_CALL(VGetArg(upenv, 28-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k677, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0iter__apply_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda166" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda166, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda166, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-atom 21 9) (bruijn ##k.1174 0 0) (bruijn fun 11 1) (bruijn x 0 1) #f)
V_CALL(VGetArg(upenv, 21-1, 9), runtime,
      _var0,
      VGetArg(upenv, 11-1, 1),
      _var1,
      VEncodeBool(false)
    );
 }
}
static void _V0iter__apply_k675(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k675" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k675, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k675, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 27 32) (close _V0iter__apply_k676) (close _V0iter__apply_lambda166) (bruijn xs 1 2))
V_CALL(VGetArg(upenv, 27-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k676, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda166, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0iter__apply_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda165" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__apply_lambda165, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda165, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn iter-atom 19 9) (close _V0iter__apply_k675) (bruijn fun 9 1) (##inline ##sys.car (bruijn ##expr.101 1 1)) #t) ((bruijn ##k.1169 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k675, env)}),
      VGetArg(upenv, 9-1, 1),
      VInlineCar(
upenv->vars[1]
    )
,
      VEncodeBool(true)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda158" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda158, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.101 0 1)) ((bruijn call-with-values 25 21) (bruijn ##k.1151 0 0) (close _V0iter__apply_lambda159) (close _V0iter__apply_lambda165)) ((bruijn ##k.1151 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 21), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda159, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda165, env)})
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__apply_k678(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k678" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k678, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k678, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 25 34) (bruijn ##k.1144 6 0) (##string ##string.1764))
V_CALL(VGetArg(upenv, 25-1, 34), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1764.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0iter__apply_k668(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k668" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k668, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k668, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda158) (close _V0iter__apply_k678) (bruijn ##input.78 5 1))
V_CALL_FUNC(_V0iter__apply_lambda158, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k678, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0iter__apply_k658(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k658" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k658, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k658, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda156) (close _V0iter__apply_k668) (bruijn ##input.78 4 1))
V_CALL_FUNC(_V0iter__apply_lambda156, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k668, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0iter__apply_k650(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k650" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k650, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k650, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda155) (close _V0iter__apply_k658) (bruijn ##input.78 3 1))
V_CALL_FUNC(_V0iter__apply_lambda155, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k658, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0iter__apply_k640(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k640" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k640, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k640, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda154) (close _V0iter__apply_k650) (bruijn ##input.78 2 1))
V_CALL_FUNC(_V0iter__apply_lambda154, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k650, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0iter__apply_k628(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__apply_k628" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k628, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda153) (close _V0iter__apply_k640) (bruijn ##input.78 1 1))
V_CALL_FUNC(_V0iter__apply_lambda153, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k640, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter__apply_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda151" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda151, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__apply_lambda152) (close _V0iter__apply_k628) (bruijn ##input.78 0 1))
V_CALL_FUNC(_V0iter__apply_lambda152, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k628, env)}),
      _var1
    );
 }
}
static void _V0iter__apply_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda150" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda150, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda150, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__apply_lambda151) (bruijn ##k.1143 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0iter__apply_lambda151, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0iter__apply_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter__apply_lambda149" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__apply_lambda149, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda149, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 17 36) (bruijn ##k.1142 0 0) (close _V0iter__apply_lambda150))
V_CALL(VGetArg(upenv, 17-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda150, env)})
    );
 }
}
static void _V0to__functions_k560(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k560" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k560, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k561) (bruijn iter-apply 9 10) (close _V0iter__apply_lambda149))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k561, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda149, env)})
    );
 }
}
static void _V0iter__atom_k679(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k679" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k679, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k679, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1391 0 0) ((bruijn ##kk.54 3 1) (bruijn ##k.1389 1 0) (bruijn expr 4 2)) ((bruijn ##k.1389 1 0) #f))
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
static void _V0iter__atom_lambda170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda170" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda170, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 1)) ((bruijn equal? 19 35) (close _V0iter__atom_k679) (quote bruijn) (##inline ##sys.car (bruijn ##expr.56 0 1))) ((bruijn ##k.1389 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k679, env)}),
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
static void _V0iter__atom_k687(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k687" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k687, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k687, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 10 1) (bruijn ##k.1371 7 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 3 0) (quote ()))))
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
static void _V0iter__atom_k686(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k686" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k686, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k686, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k687) (bruijn functions 19 4) (bruijn ##x.1380 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k687, env)}),
      VEncodeInt(19l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0iter__atom_k685(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k685" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k685, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k685, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 25 56) (close _V0iter__atom_k686) (##inline ##sys.cons (bruijn lamb 1 0) (##inline ##sys.cons (quote #t) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.58 3 0)) (##inline ##sys.cons (bruijn ##x.1386 0 0) (quote ()))) (quote ())))) (bruijn functions 18 4))
V_CALL(VGetArg(upenv, 25-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k686, env)}),
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
      VGetArg(upenv, 18-1, 4)
    );
 }
}
static void _V0iter__atom_k684(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k684" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k684, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k684, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-apply 17 10) (close _V0iter__atom_k685) (bruijn fun 8 1) (##inline ##sys.car (bruijn ##expr.59 1 0)))
V_CALL(VGetArg(upenv, 17-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k685, env)}),
      VGetArg(upenv, 8-1, 1),
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter__atom_k683(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k683" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k683, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k683, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.59 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.59 0 0))) ((bruijn genlambda 16 1) (close _V0iter__atom_k684) (bruijn fun 7 1)) ((bruijn ##k.1371 3 0) #f)) ((bruijn ##k.1371 3 0) #f))
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
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k684, env)}),
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
static void _V0iter__atom_k682(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k682" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k682, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k682, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.58 0 0)) ((close _V0iter__atom_k683) (##inline ##sys.cdr (bruijn ##expr.58 0 0))) ((bruijn ##k.1371 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__atom_k683, env, runtime,
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
static void _V0iter__atom_k681(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k681" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k681, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k681, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1373 0 0) ((close _V0iter__atom_k682) (##inline ##sys.cdr (bruijn ##expr.57 1 1))) ((bruijn ##k.1371 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k682, env, runtime,
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
static void _V0iter__atom_lambda171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda171" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda171, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.57 0 1)) ((bruijn equal? 20 35) (close _V0iter__atom_k681) (quote lambda) (##inline ##sys.car (bruijn ##expr.57 0 1))) ((bruijn ##k.1371 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k681, env)}),
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
static void _V0iter__atom_k697(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k697" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k697, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k697, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 13 1) (bruijn ##k.1349 9 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 3 0) (quote ()))))
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
static void _V0iter__atom_k696(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k696" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k696, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k696, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k697) (bruijn functions 22 4) (bruijn ##x.1360 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k697, env)}),
      VEncodeInt(22l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0iter__atom_k695(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k695" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k695, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k695, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 28 56) (close _V0iter__atom_k696) (##inline ##sys.cons (bruijn lamb 1 0) (##inline ##sys.cons (quote #t) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.61 5 0)) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.1367 0 0) (quote ())))) (quote ())))) (bruijn functions 21 4))
V_CALL(VGetArg(upenv, 28-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k696, env)}),
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
      VGetArg(upenv, 21-1, 4)
    );
 }
}
static void _V0iter__atom_k694(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k694" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k694, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k694, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-apply 20 10) (close _V0iter__atom_k695) (bruijn fun 11 1) (##inline ##sys.car (bruijn ##expr.63 1 0)))
V_CALL(VGetArg(upenv, 20-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k695, env)}),
      VGetArg(upenv, 11-1, 1),
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter__atom_k693(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k693" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k693, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k693, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.63 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.63 0 0))) ((bruijn genlambda 19 1) (close _V0iter__atom_k694) (bruijn fun 10 1)) ((bruijn ##k.1349 5 0) #f)) ((bruijn ##k.1349 5 0) #f))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k694, env)}),
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
static void _V0iter__atom_k692(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k692" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k692, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k692, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1354 0 0) ((close _V0iter__atom_k693) (##inline ##sys.cdr (bruijn ##expr.62 1 0))) ((bruijn ##k.1349 4 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k693, env, runtime,
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
static void _V0iter__atom_k691(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k691" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k691, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k691, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.62 0 0)) ((bruijn equal? 24 35) (close _V0iter__atom_k692) (quote +) (##inline ##sys.car (bruijn ##expr.62 0 0))) ((bruijn ##k.1349 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k692, env)}),
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
static void _V0iter__atom_k690(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k690" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k690, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k690, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.61 0 0)) ((close _V0iter__atom_k691) (##inline ##sys.cdr (bruijn ##expr.61 0 0))) ((bruijn ##k.1349 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__atom_k691, env, runtime,
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
static void _V0iter__atom_k689(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k689" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k689, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k689, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1351 0 0) ((close _V0iter__atom_k690) (##inline ##sys.cdr (bruijn ##expr.60 1 1))) ((bruijn ##k.1349 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k690, env, runtime,
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
static void _V0iter__atom_lambda172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda172" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda172, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.60 0 1)) ((bruijn equal? 21 35) (close _V0iter__atom_k689) (quote lambda) (##inline ##sys.car (bruijn ##expr.60 0 1))) ((bruijn ##k.1349 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k689, env)}),
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
static void _V0iter__atom_k703(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k703" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k703, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k703, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 10 1) (bruijn ##k.1337 5 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 3 0) (quote ()))))
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
static void _V0iter__atom_k702(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k702" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k702, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k702, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k703) (bruijn functions 19 4) (bruijn ##x.1343 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k703, env)}),
      VEncodeInt(19l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0iter__atom_k701(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k701" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k701, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k701, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 25 56) (close _V0iter__atom_k702) (##inline ##sys.cons (bruijn lamb 1 0) (##inline ##sys.cons (quote #t) (bruijn ##x.1346 0 0))) (bruijn functions 18 4))
V_CALL(VGetArg(upenv, 25-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k702, env)}),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
VEncodeBool(true),
      _var0
    )

    )
,
      VGetArg(upenv, 18-1, 4)
    );
 }
}
static void _V0iter__atom_lambda174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda174" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda174, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda174, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-lambda 18 8) (bruijn ##k.1347 0 0) (bruijn fun 9 1) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      _var0,
      VGetArg(upenv, 9-1, 1),
      _var1
    );
 }
}
static void _V0iter__atom_k700(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k700" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k700, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k700, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 24 32) (close _V0iter__atom_k701) (close _V0iter__atom_lambda174) (##inline ##sys.cdr (bruijn ##expr.64 2 1)))
V_CALL(VGetArg(upenv, 24-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k701, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda174, env)}),
      VInlineCdr(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0iter__atom_k699(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k699" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k699, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k699, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1339 0 0) ((bruijn genlambda 16 1) (close _V0iter__atom_k700) (bruijn fun 7 1)) ((bruijn ##k.1337 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k700, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda173" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda173, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.64 0 1)) ((bruijn equal? 22 35) (close _V0iter__atom_k699) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.64 0 1))) ((bruijn ##k.1337 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k699, env)}),
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
static void _V0iter__atom_k711(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k711" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k711, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k711, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 13 1) (bruijn ##k.1319 7 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn k 3 0) (quote ()))))
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
static void _V0iter__atom_k710(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k710" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k710, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k710, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k711) (bruijn functions 22 4) (bruijn ##x.1328 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k711, env)}),
      VEncodeInt(22l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0iter__atom_k709(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k709" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k709, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k709, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 28 56) (close _V0iter__atom_k710) (##inline ##sys.cons (bruijn k 1 0) (##inline ##sys.cons (quote #t) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.66 3 0)) (##inline ##sys.cons (bruijn ##x.1334 0 0) (quote ()))) (quote ())))) (bruijn functions 21 4))
V_CALL(VGetArg(upenv, 28-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k710, env)}),
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
      VGetArg(upenv, 21-1, 4)
    );
 }
}
static void _V0iter__atom_k708(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k708" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k708, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k708, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-apply 20 10) (close _V0iter__atom_k709) (bruijn fun 11 1) (##inline ##sys.car (bruijn ##expr.67 1 0)))
V_CALL(VGetArg(upenv, 20-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k709, env)}),
      VGetArg(upenv, 11-1, 1),
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter__atom_k707(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k707" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k707, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k707, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.67 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.67 0 0))) ((bruijn gencont 19 2) (close _V0iter__atom_k708) (bruijn fun 10 1)) ((bruijn ##k.1319 3 0) #f)) ((bruijn ##k.1319 3 0) #f))
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
V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k708, env)}),
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
static void _V0iter__atom_k706(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k706" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k706, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k706, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.66 0 0)) ((close _V0iter__atom_k707) (##inline ##sys.cdr (bruijn ##expr.66 0 0))) ((bruijn ##k.1319 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__atom_k707, env, runtime,
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
static void _V0iter__atom_k705(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k705" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k705, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k705, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1321 0 0) ((close _V0iter__atom_k706) (##inline ##sys.cdr (bruijn ##expr.65 1 1))) ((bruijn ##k.1319 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k706, env, runtime,
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
static void _V0iter__atom_lambda175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda175" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda175, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.65 0 1)) ((bruijn equal? 23 35) (close _V0iter__atom_k705) (quote continuation) (##inline ##sys.car (bruijn ##expr.65 0 1))) ((bruijn ##k.1319 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k705, env)}),
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
static void _V0iter__atom_k722(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k722" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k722, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k722, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.1315 1 0) (bruijn foreign-functions 27 3) (bruijn ##x.1316 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(27l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0iter__atom_k721(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k721" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k721, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k721, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1314 1 0) ((bruijn cons 33 56) (close _V0iter__atom_k722) (bruijn expr 17 2) (bruijn foreign-functions 26 3)) ((bruijn ##k.1315 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 33-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k722, env)}),
      VGetArg(upenv, 17-1, 2),
      VGetArg(upenv, 26-1, 3)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k723(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k723" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k723, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k723, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 16 1) (bruijn ##k.1304 9 0) (##inline ##sys.cons (quote ##foreign.function) (##inline ##sys.cons (bruijn mangled 3 0) (quote ()))))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons(
VEncodePointer(&_V10foreign_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[0],
      VNULL
    )

    )

    );
 }
}
static void _V0iter__atom_k720(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k720" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k720, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k720, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k721) (close _V0iter__atom_k723))
V_CALL_FUNC(_V0iter__atom_k721, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k723, env)})
    );
 }
}
static void _V0iter__atom_k719(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k719" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k719, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k719, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 31 45) (close _V0iter__atom_k720) (bruijn ##x.1317 0 0))
V_CALL(VGetArg(upenv, 31-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k720, env)}),
      _var0
    );
 }
}
static void _V0iter__atom_k718(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k718" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k718, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k718, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn assoc 30 52) (close _V0iter__atom_k719) (bruijn mangled 0 0) (bruijn foreign-functions 23 3))
V_CALL(VGetArg(upenv, 30-1, 52), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k719, env)}),
      _var0,
      VGetArg(upenv, 23-1, 3)
    );
 }
}
static void _V0iter__atom_k717(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k717" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k717, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k717, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.72 0 0)) ((bruijn mangle-foreign-function 29 51) (close _V0iter__atom_k718) (##inline ##sys.car (bruijn ##expr.72 0 0))) ((bruijn ##k.1304 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 29-1, 51), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k718, env)}),
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
static void _V0iter__atom_k716(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k716" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k716, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k716, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.71 0 0)) ((close _V0iter__atom_k717) (##inline ##sys.cdr (bruijn ##expr.71 0 0))) ((bruijn ##k.1304 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__atom_k717, env, runtime,
      VInlineCdr(
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
static void _V0iter__atom_k715(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k715" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k715, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k715, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.70 0 0)) ((close _V0iter__atom_k716) (##inline ##sys.cdr (bruijn ##expr.70 0 0))) ((bruijn ##k.1304 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__atom_k716, env, runtime,
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
static void _V0iter__atom_k714(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k714" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k714, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k714, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 0)) ((close _V0iter__atom_k715) (##inline ##sys.cdr (bruijn ##expr.69 0 0))) ((bruijn ##k.1304 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__atom_k715, env, runtime,
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
static void _V0iter__atom_k713(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k713" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k713, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k713, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1306 0 0) ((close _V0iter__atom_k714) (##inline ##sys.cdr (bruijn ##expr.68 1 1))) ((bruijn ##k.1304 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k714, env, runtime,
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
static void _V0iter__atom_lambda176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda176" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda176, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.68 0 1)) ((bruijn equal? 24 35) (close _V0iter__atom_k713) (quote ##foreign.function) (##inline ##sys.car (bruijn ##expr.68 0 1))) ((bruijn ##k.1304 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k713, env)}),
      VEncodePointer(&_V10foreign_Dfunction.sym, VPOINTER_OTHER),
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
static void _V0iter__atom_k727(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k727" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k727, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k727, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 11 1) (bruijn ##k.1294 3 0) (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn ##x.1301 0 0) (quote ()))))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
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
static void _V0iter__atom_k726(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k726" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k726, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k726, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.74 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.74 0 0))) ((bruijn lift-literal 20 7) (close _V0iter__atom_k727) (##inline ##sys.car (bruijn ##expr.74 0 0))) ((bruijn ##k.1294 2 0) #f)) ((bruijn ##k.1294 2 0) #f))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k727, env)}),
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
static void _V0iter__atom_k725(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k725" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k725, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k725, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1296 0 0) ((close _V0iter__atom_k726) (##inline ##sys.cdr (bruijn ##expr.73 1 1))) ((bruijn ##k.1294 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k726, env, runtime,
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
static void _V0iter__atom_lambda177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda177" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda177, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.73 0 1)) ((bruijn equal? 25 35) (close _V0iter__atom_k725) (quote quote) (##inline ##sys.car (bruijn ##expr.73 0 1))) ((bruijn ##k.1294 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k725, env)}),
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
static void _V0iter__atom_k731(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k731" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k731, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k731, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 12 1) (bruijn ##k.1285 3 0) (##inline ##sys.cons (quote ##inline) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.76 1 0)) (bruijn ##x.1291 0 0))))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
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
static void _V0iter__atom_lambda179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda179" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda179, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda179, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-atom 22 9) (bruijn ##k.1292 0 0) (bruijn fun 13 1) (bruijn x 0 1) #f)
V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      _var0,
      VGetArg(upenv, 13-1, 1),
      _var1,
      VEncodeBool(false)
    );
 }
}
static void _V0iter__atom_k730(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k730" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k730, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k730, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 0)) ((bruijn map 28 32) (close _V0iter__atom_k731) (close _V0iter__atom_lambda179) (##inline ##sys.cdr (bruijn ##expr.76 0 0))) ((bruijn ##k.1285 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 28-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k731, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda179, env)}),
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
static void _V0iter__atom_k729(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k729" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k729, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k729, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1287 0 0) ((close _V0iter__atom_k730) (##inline ##sys.cdr (bruijn ##expr.75 1 1))) ((bruijn ##k.1285 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k730, env, runtime,
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
static void _V0iter__atom_lambda178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda178" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda178, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.75 0 1)) ((bruijn equal? 26 35) (close _V0iter__atom_k729) (quote ##inline) (##inline ##sys.car (bruijn ##expr.75 0 1))) ((bruijn ##k.1285 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 26-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k729, env)}),
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
static void _V0iter__atom_k736(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k736" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k736, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k736, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1284 0 0) ((bruijn ##k.1283 2 0) (bruijn x 4 1)) ((bruijn lift-intrinsic 24 6) (bruijn ##k.1283 2 0) (bruijn x 4 1) (bruijn intrin 1 0)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 24-1, 6), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[1],
      upenv->vars[0]
    );
}
 }
}
static void _V0iter__atom_k735(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k735" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k735, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k735, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 30 45) (close _V0iter__atom_k736) (bruijn intrin 0 0))
V_CALL(VGetArg(upenv, 30-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k736, env)}),
      _var0
    );
 }
}
static void _V0iter__atom_k734(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k734" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k734, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k734, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1282 1 0) (if (bruijn func-position? 13 3) ((bruijn ##k.1283 0 0) (bruijn x 2 1)) ((bruijn lookup-intrinsic2 29 20) (close _V0iter__atom_k735) (bruijn x 2 1))) ((bruijn lift-literal 22 7) (bruijn ##k.1283 0 0) (bruijn x 2 1)))
if(VDecodeBool(
upenv->vars[0])) {
if(VDecodeBool(
VGetArg(upenv, 13-1, 3))) {
V_CALL(_var0, runtime,
      upenv->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 29-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k735, env)}),
      upenv->up->vars[1]
    );
}
} else {
V_CALL(VGetArg(upenv, 22-1, 7), runtime,
      _var0,
      upenv->up->vars[1]
    );
}
 }
}
static void _V0iter__atom_k737(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k737" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k737, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k737, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 12 1) (bruijn ##k.1280 2 0) (bruijn ##x.1281 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter__atom_k733(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k733" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k733, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k733, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k734) (close _V0iter__atom_k737))
V_CALL_FUNC(_V0iter__atom_k734, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k737, env)})
    );
 }
}
static void _V0iter__atom_lambda180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda180" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda180, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 27 16) (close _V0iter__atom_k733) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 27-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k733, env)}),
      _var1
    );
 }
}
static void _V0iter__atom_k738(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k738" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k738, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k738, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 27 34) (bruijn ##k.1270 9 0) (##string ##string.1764))
V_CALL(VGetArg(upenv, 27-1, 34), runtime,
      VGetArg(upenv, 9-1, 0),
      VEncodePointer(&_V10string_D1764.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0iter__atom_k732(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k732" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k732, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k732, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda180) (close _V0iter__atom_k738) (bruijn ##input.55 8 1))
V_CALL_FUNC(_V0iter__atom_lambda180, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k738, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0iter__atom_k728(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k728" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k728, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k728, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda178) (close _V0iter__atom_k732) (bruijn ##input.55 7 1))
V_CALL_FUNC(_V0iter__atom_lambda178, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k732, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0iter__atom_k724(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k724" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k724, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k724, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda177) (close _V0iter__atom_k728) (bruijn ##input.55 6 1))
V_CALL_FUNC(_V0iter__atom_lambda177, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k728, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0iter__atom_k712(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k712" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k712, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k712, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda176) (close _V0iter__atom_k724) (bruijn ##input.55 5 1))
V_CALL_FUNC(_V0iter__atom_lambda176, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k724, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0iter__atom_k704(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k704" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k704, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k704, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda175) (close _V0iter__atom_k712) (bruijn ##input.55 4 1))
V_CALL_FUNC(_V0iter__atom_lambda175, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k712, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0iter__atom_k698(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k698" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k698, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k698, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda173) (close _V0iter__atom_k704) (bruijn ##input.55 3 1))
V_CALL_FUNC(_V0iter__atom_lambda173, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k704, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0iter__atom_k688(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k688" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k688, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k688, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda172) (close _V0iter__atom_k698) (bruijn ##input.55 2 1))
V_CALL_FUNC(_V0iter__atom_lambda172, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k698, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0iter__atom_k680(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__atom_k680" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k680, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k680, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda171) (close _V0iter__atom_k688) (bruijn ##input.55 1 1))
V_CALL_FUNC(_V0iter__atom_lambda171, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k688, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter__atom_lambda169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda169" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda169, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda170) (close _V0iter__atom_k680) (bruijn ##input.55 0 1))
V_CALL_FUNC(_V0iter__atom_lambda170, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k680, env)}),
      _var1
    );
 }
}
static void _V0iter__atom_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda168" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda168, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda168, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda169) (bruijn ##k.1269 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0iter__atom_lambda169, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0iter__atom_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0iter__atom_lambda167" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0iter__atom_lambda167, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda167, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn call/cc 16 36) (bruijn ##k.1268 0 0) (close _V0iter__atom_lambda168))
V_CALL(VGetArg(upenv, 16-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda168, env)})
    );
 }
}
static void _V0to__functions_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k559" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k559, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k560) (bruijn iter-atom 8 9) (close _V0iter__atom_lambda167))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k560, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda167, env)})
    );
 }
}
static void _V0iter__lambda_k740(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k740" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k740, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k740, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.47 4 1) (bruijn ##k.1410 2 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.49 2 1)) (##inline ##sys.cons (bruijn ##x.1416 0 0) (quote ()))))
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
static void _V0iter__lambda_k739(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k739" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k739, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k739, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.50 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.50 0 0))) ((bruijn iter-apply 12 10) (close _V0iter__lambda_k740) (bruijn fun 4 1) (##inline ##sys.car (bruijn ##expr.50 0 0))) ((bruijn ##k.1410 1 0) #f)) ((bruijn ##k.1410 1 0) #f))
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
V_CALL(VGetArg(upenv, 12-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k740, env)}),
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
static void _V0iter__lambda_lambda184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda184" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda184, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.49 0 1)) ((close _V0iter__lambda_k739) (##inline ##sys.cdr (bruijn ##expr.49 0 1))) ((bruijn ##k.1410 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0iter__lambda_k739, env, runtime,
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
static void _V0iter__lambda_k745(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k745" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k745, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k745, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.47 7 1) (bruijn ##k.1398 4 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.51 4 1)) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.1407 0 0) (quote ())))))
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
static void _V0iter__lambda_k744(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k744" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k744, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k744, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.53 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.53 0 0))) ((bruijn iter-apply 15 10) (close _V0iter__lambda_k745) (bruijn fun 7 1) (##inline ##sys.car (bruijn ##expr.53 0 0))) ((bruijn ##k.1398 3 0) #f)) ((bruijn ##k.1398 3 0) #f))
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
V_CALL(VGetArg(upenv, 15-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k745, env)}),
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
static void _V0iter__lambda_k743(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k743" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k743, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k743, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1401 0 0) ((close _V0iter__lambda_k744) (##inline ##sys.cdr (bruijn ##expr.52 1 0))) ((bruijn ##k.1398 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__lambda_k744, env, runtime,
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
static void _V0iter__lambda_k742(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k742" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k742, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k742, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.52 0 0)) ((bruijn equal? 20 35) (close _V0iter__lambda_k743) (quote +) (##inline ##sys.car (bruijn ##expr.52 0 0))) ((bruijn ##k.1398 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k743, env)}),
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
static void _V0iter__lambda_lambda185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda185" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda185, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.51 0 1)) ((close _V0iter__lambda_k742) (##inline ##sys.cdr (bruijn ##expr.51 0 1))) ((bruijn ##k.1398 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0iter__lambda_k742, env, runtime,
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
static void _V0iter__lambda_k746(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k746" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k746, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k746, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 19 34) (bruijn ##k.1395 2 0) (##string ##string.1764))
V_CALL(VGetArg(upenv, 19-1, 34), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1764.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0iter__lambda_k741(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter__lambda_k741" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k741, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k741, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__lambda_lambda185) (close _V0iter__lambda_k746) (bruijn ##input.48 1 1))
V_CALL_FUNC(_V0iter__lambda_lambda185, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k746, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter__lambda_lambda183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda183" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda183, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__lambda_lambda184) (close _V0iter__lambda_k741) (bruijn ##input.48 0 1))
V_CALL_FUNC(_V0iter__lambda_lambda184, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k741, env)}),
      _var1
    );
 }
}
static void _V0iter__lambda_lambda182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda182" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__lambda_lambda182, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda182, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__lambda_lambda183) (bruijn ##k.1394 0 0) (bruijn lamb 1 2))
V_CALL_FUNC(_V0iter__lambda_lambda183, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0iter__lambda_lambda181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter__lambda_lambda181" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__lambda_lambda181, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda181, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 15 36) (bruijn ##k.1393 0 0) (close _V0iter__lambda_lambda182))
V_CALL(VGetArg(upenv, 15-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_lambda182, env)})
    );
 }
}
static void _V0to__functions_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k558" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k558, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k559) (bruijn iter-lambda 7 8) (close _V0iter__lambda_lambda181))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k559, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_lambda181, env)})
    );
 }
}
static void _V0lift__literal_k755(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k755" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k755, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k755, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1418 9 0) (##inline ##sys.cons (quote ##string) (##inline ##sys.cons (bruijn ##x.1427 0 0) (quote ()))))
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
static void _V0lift__literal_k760(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k760" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k760, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k760, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1418 13 0) (##inline ##sys.cons (quote ##string) (##inline ##sys.cons (bruijn ##x.1430 0 0) (quote ()))))
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
static void _V0lift__literal_k759(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k759" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k759, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k759, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 26 50) (close _V0lift__literal_k760) (bruijn literal-table 19 5))
V_CALL(VGetArg(upenv, 26-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k760, env)}),
      VGetArg(upenv, 19-1, 5)
    );
 }
}
static void _V0lift__literal_k758(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k758" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k758, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k758, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0lift__literal_k759) (bruijn literal-table 18 5) (bruijn ##x.1431 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k759, env)}),
      VEncodeInt(18l), VEncodeInt(5l),
      _var0
    );
 }
}
static void _V0lift__literal_k757(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k757" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k757, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k757, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 24 56) (close _V0lift__literal_k758) (bruijn ##x.1432 0 0) (bruijn literal-table 17 5))
V_CALL(VGetArg(upenv, 24-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k758, env)}),
      _var0,
      VGetArg(upenv, 17-1, 5)
    );
 }
}
static void _V0lift__literal_k756(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k756" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k756, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k756, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 23 56) (close _V0lift__literal_k757) (bruijn x 9 1) (bruijn ##x.1433 0 0))
V_CALL(VGetArg(upenv, 23-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k757, env)}),
      VGetArg(upenv, 9-1, 1),
      _var0
    );
 }
}
static void _V0lift__literal_k754(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k754" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k754, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k754, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn lookup 0 0) ((bruijn cdr 22 24) (close _V0lift__literal_k755) (bruijn lookup 0 0)) ((bruijn gensym 22 49) (close _V0lift__literal_k756) (##string ##string.1856)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k755, env)}),
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 49), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k756, env)}),
      VEncodePointer(&_V10string_D1856.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0lift__literal_k766(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k766" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k766, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k766, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.1437 2 0) (bruijn literal-table 20 5) (bruijn ##x.1438 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->up->vars[0],
      VEncodeInt(20l), VEncodeInt(5l),
      _var0
    );
 }
}
static void _V0lift__literal_k765(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k765" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k765, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k765, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 26 56) (close _V0lift__literal_k766) (bruijn ##x.1439 0 0) (bruijn literal-table 19 5))
V_CALL(VGetArg(upenv, 26-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k766, env)}),
      _var0,
      VGetArg(upenv, 19-1, 5)
    );
 }
}
static void _V0lift__literal_k764(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k764" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k764, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k764, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1436 1 0) ((bruijn cons 25 56) (close _V0lift__literal_k765) (bruijn x 11 1) (quote ())) ((bruijn ##k.1437 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 25-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k765, env)}),
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
static void _V0lift__literal_k767(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k767" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k767, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k767, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1418 11 0) (bruijn x 11 1))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0lift__literal_k763(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k763" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k763, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k763, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0lift__literal_k764) (close _V0lift__literal_k767))
V_CALL_FUNC(_V0lift__literal_k764, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k767, env)})
    );
 }
}
static void _V0lift__literal_k762(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k762" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k762, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k762, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 23 45) (close _V0lift__literal_k763) (bruijn ##x.1440 0 0))
V_CALL(VGetArg(upenv, 23-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k763, env)}),
      _var0
    );
 }
}
static void _V0lift__literal_k761(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k761" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k761, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k761, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1434 0 0) ((bruijn assv 22 48) (close _V0lift__literal_k762) (bruijn x 8 1) (bruijn literal-table 15 5)) ((bruijn compiler-error 22 43) (bruijn ##k.1418 8 0) (##string ##string.1857) (bruijn x 8 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k762, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 15-1, 5)
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 43), runtime,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10string_D1857.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1)
    );
}
 }
}
static void _V0lift__literal_k753(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k753" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k753, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k753, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1425 0 0) ((bruijn assoc 21 52) (close _V0lift__literal_k754) (bruijn x 7 1) (bruijn literal-table 14 5)) ((bruijn symbol? 21 16) (close _V0lift__literal_k761) (bruijn x 7 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 52), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k754, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 14-1, 5)
    );
} else {
V_CALL(VGetArg(upenv, 21-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k761, env)}),
      VGetArg(upenv, 7-1, 1)
    );
}
 }
}
static void _V0lift__literal_k752(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k752" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k752, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k752, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1424 0 0) ((bruijn ##k.1418 6 0) (bruijn x 6 1)) ((bruijn string? 20 13) (close _V0lift__literal_k753) (bruijn x 6 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 6-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k753, env)}),
      VGetArg(upenv, 6-1, 1)
    );
}
 }
}
static void _V0lift__literal_k751(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k751" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k751, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k751, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1423 0 0) ((bruijn ##k.1418 5 0) (bruijn x 5 1)) ((bruijn null? 19 44) (close _V0lift__literal_k752) (bruijn x 5 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VGetArg(upenv, 5-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k752, env)}),
      VGetArg(upenv, 5-1, 1)
    );
}
 }
}
static void _V0lift__literal_k750(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k750" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k750, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k750, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1422 0 0) ((bruijn ##k.1418 4 0) (bruijn x 4 1)) ((bruijn eq? 18 6) (close _V0lift__literal_k751) (bruijn x 4 1) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 18-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k751, env)}),
      upenv->up->up->up->vars[1],
      VEncodeBool(false)
    );
}
 }
}
static void _V0lift__literal_k749(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k749" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k749, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k749, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1421 0 0) ((bruijn ##k.1418 3 0) (bruijn x 3 1)) ((bruijn eq? 17 6) (close _V0lift__literal_k750) (bruijn x 3 1) #t))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 17-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k750, env)}),
      upenv->up->up->vars[1],
      VEncodeBool(true)
    );
}
 }
}
static void _V0lift__literal_k748(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k748" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k748, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k748, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1420 0 0) ((bruijn ##k.1418 2 0) (bruijn x 2 1)) ((bruijn char? 16 7) (close _V0lift__literal_k749) (bruijn x 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k749, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0lift__literal_k747(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__literal_k747" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k747, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k747, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1419 0 0) ((bruijn ##k.1418 1 0) (bruijn x 1 1)) ((bruijn number? 15 8) (close _V0lift__literal_k748) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k748, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0lift__literal_lambda186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0lift__literal_lambda186" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0lift__literal_lambda186, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_lambda186, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn integer? 14 9) (close _V0lift__literal_k747) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 14-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k747, env)}),
      _var1
    );
 }
}
static void _V0to__functions_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k557" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k557, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k558) (bruijn lift-literal 6 7) (close _V0lift__literal_lambda186))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k558, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_lambda186, env)})
    );
 }
}
static void _V0lift__intrinsic_k772(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__intrinsic_k772" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k772, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k772, runtime, upenv, 1, argc, _var0) {
  // ((bruijn car 18 30) (bruijn ##k.1441 5 0) (bruijn lookup 2 0))
V_CALL(VGetArg(upenv, 18-1, 30), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0]
    );
 }
}
static void _V0lift__intrinsic_k771(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__intrinsic_k771" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k771, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k771, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0lift__intrinsic_k772) (bruijn literal-table 10 5) (bruijn ##x.1443 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k772, env)}),
      VEncodeInt(10l), VEncodeInt(5l),
      _var0
    );
 }
}
static void _V0lift__intrinsic_k770(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__intrinsic_k770" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k770, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k770, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 16 56) (close _V0lift__intrinsic_k771) (bruijn lookup 0 0) (bruijn literal-table 9 5))
V_CALL(VGetArg(upenv, 16-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k771, env)}),
      _var0,
      VGetArg(upenv, 9-1, 5)
    );
 }
}
static void _V0lift__intrinsic_k769(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__intrinsic_k769" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k769, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k769, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn lookup 0 0) ((bruijn car 15 30) (bruijn ##k.1441 2 0) (bruijn lookup 0 0)) ((bruijn cons 15 56) (close _V0lift__intrinsic_k770) (bruijn key 1 0) (bruijn intrin 2 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 30), runtime,
      upenv->up->vars[0],
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k770, env)}),
      upenv->vars[0],
      upenv->up->vars[2]
    );
}
 }
}
static void _V0lift__intrinsic_k768(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lift__intrinsic_k768" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k768, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k768, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn assoc 14 52) (close _V0lift__intrinsic_k769) (bruijn key 0 0) (bruijn literal-table 7 5))
V_CALL(VGetArg(upenv, 14-1, 52), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k769, env)}),
      _var0,
      VGetArg(upenv, 7-1, 5)
    );
 }
}
static void _V0lift__intrinsic_lambda187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0lift__intrinsic_lambda187" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0lift__intrinsic_lambda187, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_lambda187, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn list 13 57) (close _V0lift__intrinsic_k768) (quote ##intrinsic) (bruijn sym 0 1))
V_CALL(VGetArg(upenv, 13-1, 57), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k768, env)}),
      VEncodePointer(&_V10intrinsic.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0to__functions_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k556" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k556, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k557) (bruijn lift-intrinsic 5 6) (close _V0lift__intrinsic_lambda187))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k557, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_lambda187, env)})
    );
 }
}
static void _V0to__functions_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k555" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k555, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k556) (bruijn literal-table 4 5) (quote ()))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k556, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VNULL
    );
 }
}
static void _V0to__functions_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k554" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k554, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k555) (bruijn functions 3 4) (quote ()))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k555, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VNULL
    );
 }
}
static void _V0to__functions_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k553" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k553, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k554) (bruijn foreign-functions 2 3) (quote ()))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k554, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VNULL
    );
 }
}
static void _V0gencont_k775(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gencont_k775" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gencont_k775, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_k775, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 12 47) (bruijn ##k.1444 3 0) (bruijn ##x.1446 0 0))
V_CALL(VGetArg(upenv, 12-1, 47), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0gencont_k774(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gencont_k774" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gencont_k774, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_k774, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn sprintf 11 33) (close _V0gencont_k775) (##string ##string.1858) (bruijn fun 2 1) (bruijn curcont 10 4))
V_CALL(VGetArg(upenv, 11-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_k775, env)}),
      VEncodePointer(&_V10string_D1858.sym, VPOINTER_OTHER),
      upenv->up->vars[1],
      VGetArg(upenv, 10-1, 4)
    );
 }
}
static void _V0gencont_k773(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gencont_k773" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gencont_k773, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_k773, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0gencont_k774) (bruijn curcont 9 4) (bruijn ##x.1447 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_k774, env)}),
      VEncodeInt(9l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0gencont_lambda188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gencont_lambda188" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gencont_lambda188, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_lambda188, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn + 9 27) (close _V0gencont_k773) (bruijn curcont 8 4) 1)
V_CALL(VGetArg(upenv, 9-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_k773, env)}),
      VGetArg(upenv, 8-1, 4),
      VEncodeInt(1l)
    );
 }
}
static void _V0to__functions_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0to__functions_k552" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k552, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k553) (bruijn gencont 1 2) (close _V0gencont_lambda188))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k553, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_lambda188, env)})
    );
 }
}
static void _V0genlambda_k778(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0genlambda_k778" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0genlambda_k778, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_k778, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 11 47) (bruijn ##k.1448 3 0) (bruijn ##x.1450 0 0))
V_CALL(VGetArg(upenv, 11-1, 47), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0genlambda_k777(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0genlambda_k777" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0genlambda_k777, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_k777, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn sprintf 10 33) (close _V0genlambda_k778) (##string ##string.1859) (bruijn fun 2 1) (bruijn curlambda 9 3))
V_CALL(VGetArg(upenv, 10-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_k778, env)}),
      VEncodePointer(&_V10string_D1859.sym, VPOINTER_OTHER),
      upenv->up->vars[1],
      VGetArg(upenv, 9-1, 3)
    );
 }
}
static void _V0genlambda_k776(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0genlambda_k776" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0genlambda_k776, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_k776, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0genlambda_k777) (bruijn curlambda 8 3) (bruijn ##x.1451 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_k777, env)}),
      VEncodeInt(8l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0genlambda_lambda189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0genlambda_lambda189" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0genlambda_lambda189, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_lambda189, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn + 8 27) (close _V0genlambda_k776) (bruijn curlambda 7 3) 1)
V_CALL(VGetArg(upenv, 8-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_k776, env)}),
      VGetArg(upenv, 7-1, 3),
      VEncodeInt(1l)
    );
 }
}
static void _V0to__functions_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15) {
 static VDebugInfo dbg = { "_V0to__functions_lambda119" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda119, runtime, upenv, 16, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15) {
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
  // (set! (close _V0to__functions_k552) (bruijn genlambda 0 1) (close _V0genlambda_lambda189))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k552, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_lambda189, env)})
    );
 }
}
static void _V0to__functions_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0to__functions_lambda118" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda118, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda118, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__functions_lambda119) (bruijn ##k.1022 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(_V0to__functions_lambda119, env, runtime,
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
static void _V0vanity_V0compiler_V0transpile_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k68" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k69) (bruijn to-functions 4 5) (close _V0to__functions_lambda118))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k69, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda118, env)})
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k67" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k68) (bruijn curcont 3 4) 0)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k68, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeInt(0l)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k66" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k67) (bruijn curlambda 2 3) 0)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k67, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeInt(0l)
    );
 }
}
static void _V0bruijn__ify_k784(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k784" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k784, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k784, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1478 0 0) ((bruijn ##kk.41 3 1) (bruijn ##k.1476 1 0) (bruijn expr 10 1)) ((bruijn ##k.1476 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 10-1, 1)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__ify_lambda194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda194" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda194, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.43 0 1)) ((bruijn equal? 12 35) (close _V0bruijn__ify_k784) (quote ##foreign.declare) (##inline ##sys.car (bruijn ##expr.43 0 1))) ((bruijn ##k.1476 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 12-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k784, env)}),
      VEncodePointer(&_V10foreign_Ddeclare.sym, VPOINTER_OTHER),
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
static void _V0bruijn__ify_k789(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k789" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k789, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k789, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.41 7 1) (bruijn ##k.1464 4 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.45 2 0)) (##inline ##sys.cons (bruijn ##x.1473 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
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
static void _V0bruijn__ify_k788(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k788" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k788, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k788, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.46 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.46 0 0))) ((bruijn doit 12 5) (close _V0bruijn__ify_k789) (##inline ##sys.car (bruijn ##expr.46 0 0))) ((bruijn ##k.1464 3 0) #f)) ((bruijn ##k.1464 3 0) #f))
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
V_CALL(VGetArg(upenv, 12-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k789, env)}),
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
static void _V0bruijn__ify_k787(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k787" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k787, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k787, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.45 0 0)) ((close _V0bruijn__ify_k788) (##inline ##sys.cdr (bruijn ##expr.45 0 0))) ((bruijn ##k.1464 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0bruijn__ify_k788, env, runtime,
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
static void _V0bruijn__ify_k786(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k786" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k786, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k786, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1466 0 0) ((close _V0bruijn__ify_k787) (##inline ##sys.cdr (bruijn ##expr.44 1 1))) ((bruijn ##k.1464 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0bruijn__ify_k787, env, runtime,
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
static void _V0bruijn__ify_lambda195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda195" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda195, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.44 0 1)) ((bruijn equal? 13 35) (close _V0bruijn__ify_k786) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.44 0 1))) ((bruijn ##k.1464 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k786, env)}),
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
static void _V0bruijn__ify_k791(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k791" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k791, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k791, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.41 4 1) (bruijn ##k.1460 3 0) (bruijn ##x.1463 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0bruijn__ify_k790(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k790" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k790, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k790, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn doit 9 5) (close _V0bruijn__ify_k791) (bruijn expr 10 1))
V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k791, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0bruijn__ify_k785(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k785" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k785, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k785, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0bruijn__ify_lambda195) (close _V0bruijn__ify_k790) (bruijn ##input.42 1 1))
V_CALL_FUNC(_V0bruijn__ify_lambda195, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k790, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0bruijn__ify_lambda193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda193" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda193, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__ify_lambda194) (close _V0bruijn__ify_k785) (bruijn ##input.42 0 1))
V_CALL_FUNC(_V0bruijn__ify_lambda194, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k785, env)}),
      _var1
    );
 }
}
static void _V0bruijn__ify_lambda192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda192" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__ify_lambda192, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda192, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__ify_lambda193) (bruijn ##k.1459 0 0) (bruijn expr 7 1))
V_CALL_FUNC(_V0bruijn__ify_lambda193, env, runtime,
      _var0,
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0bruijn__ify_k783(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k783" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k783, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k783, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 9 36) (bruijn ##k.1453 5 0) (close _V0bruijn__ify_lambda192))
V_CALL(VGetArg(upenv, 9-1, 36), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_lambda192, env)})
    );
 }
}
static void _V0doit_lambda196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0doit_lambda196" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0doit_lambda196, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0doit_lambda196, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 5 4) (bruijn ##k.1480 0 0) (quote ()) (bruijn expr 0 1))
V_CALL(VGetArg(upenv, 5-1, 4), runtime,
      _var0,
      VNULL,
      _var1
    );
 }
}
static void _V0bruijn__ify_k782(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k782" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k782, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k782, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0bruijn__ify_k783) (bruijn doit 4 5) (close _V0doit_lambda196))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k783, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0doit_lambda196, env)})
    );
 }
}
static void _V0iter_k794(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k794" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k794, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k794, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1585 1 0) (##inline ##sys.car (bruijn ##expr.16 4 0)) (quote ()))
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
static void _V0loop_k796(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k796" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k796, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k796, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.19 4 1) (bruijn ##k.1596 1 0) (bruijn ##expr.21 2 1) (bruijn ##x.1597 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k795(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k795" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k795, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k795, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.21 1 1))) ((bruijn reverse 18 46) (close _V0loop_k796) (bruijn ##xs.18 1 2)) ((bruijn ##k.1596 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 18-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k796, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k799(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k799" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k799, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k799, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.19 7 1) (bruijn ##k.1590 2 0) (bruijn ##expr.21 5 1) (bruijn ##x.1592 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k798(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k798" };
 VRecordCall(&dbg);
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
  // ((bruijn reverse 21 46) (close _V0loop_k799) (bruijn ##xs.18 4 2))
V_CALL(VGetArg(upenv, 21-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k799, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda206" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda206, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda206, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.20 0 1) (close _V0loop_k798) (##inline ##sys.cdr (bruijn ##expr.21 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.21 3 1)) (bruijn ##xs.18 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k798, env)}),
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
static void _V0loop_lambda205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda205" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 36) (bruijn ##k.1589 0 0) (close _V0loop_lambda206))
V_CALL(VGetArg(upenv, 19-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda206, env)})
    );
 }
}
static void _V0loop_k797(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k797" };
 VRecordCall(&dbg);
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
  // ((bruijn call-with-values 18 21) (bruijn ##k.1587 1 0) (close _V0loop_lambda205) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 18-1, 21), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda205, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda204" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda204, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda204, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k795) (close _V0loop_k797))
V_CALL_FUNC(_V0loop_k795, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k797, env)})
    );
 }
}
static void _V0iter_lambda203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda203" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda203, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter_k794) (bruijn loop 0 1) (close _V0loop_lambda204))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k794, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda204, env)})
    );
 }
}
static void _V0iter_lambda202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda202" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda202, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda202, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda203) (bruijn ##k.1584 0 0) #f)
V_CALL_FUNC(_V0iter_lambda203, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0iter_lambda201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda201" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_lambda201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 14 36) (bruijn ##k.1583 0 0) (close _V0iter_lambda202))
V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda202, env)})
    );
 }
}
static void _V0iter_k803(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k803" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k803, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k803, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 9 1) (bruijn ##k.1599 4 0) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ##x.1605 2 0) (##inline ##sys.cons (bruijn ##x.1607 0 0) (quote ())))))
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
static void _V0iter_k802(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k802" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k802, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k802, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 13 4) (close _V0iter_k803) (bruijn ##x.1608 0 0) (##inline ##sys.car (bruijn ##expr.22 2 0)))
V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k803, env)}),
      _var0,
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0iter_k801(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k801" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k801, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k801, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 16 56) (close _V0iter_k802) (bruijn xs 2 2) (bruijn env 8 1))
V_CALL(VGetArg(upenv, 16-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k802, env)}),
      upenv->up->vars[2],
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0iter_k800(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k800" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k800, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k800, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 0 0))) ((bruijn length 15 38) (close _V0iter_k801) (bruijn xs 1 2)) ((bruijn ##k.1599 1 0) #f)) ((bruijn ##k.1599 1 0) #f))
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
V_CALL(VGetArg(upenv, 15-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k801, env)}),
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
static void _V0iter_lambda207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter_lambda207" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda207, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda207, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0iter_k800) (##inline ##sys.cdr (bruijn ##expr.16 1 0))) ((bruijn ##k.1599 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL_FUNC(_V0iter_k800, env, runtime,
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
static void _V0iter_k793(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k793" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k793, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k793, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.16 0 0)) ((bruijn call-with-values 13 21) (bruijn ##k.1579 2 0) (close _V0iter_lambda201) (close _V0iter_lambda207)) ((bruijn ##k.1579 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 21), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda201, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda207, env)})
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k792(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k792" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k792, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k792, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1581 0 0) ((close _V0iter_k793) (##inline ##sys.cdr (bruijn ##expr.15 1 1))) ((bruijn ##k.1579 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter_k793, env, runtime,
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
static void _V0iter_lambda200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda200" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda200, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.15 0 1)) ((bruijn equal? 11 35) (close _V0iter_k792) (quote lambda) (##inline ##sys.car (bruijn ##expr.15 0 1))) ((bruijn ##k.1579 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 11-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k792, env)}),
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
static void _V0iter_k812(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k812" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k812, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k812, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 11 1) (bruijn ##k.1563 8 0) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ##x.1571 2 0) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.1574 0 0) (quote ()))))))
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
static void _V0iter_k811(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k811" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k811, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k811, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 15 4) (close _V0iter_k812) (bruijn ##x.1575 0 0) (##inline ##sys.car (bruijn ##expr.25 4 0)))
V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k812, env)}),
      _var0,
      VInlineCar(
upenv->up->up->up->vars[0]
    )

    );
 }
}
static void _V0iter_k810(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k810" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k810, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k810, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 18 56) (close _V0iter_k811) (bruijn proper-xs 2 0) (bruijn env 10 1))
V_CALL(VGetArg(upenv, 18-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k811, env)}),
      upenv->up->vars[0],
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0iter_k809(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k809" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k809, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k809, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 17 29) (close _V0iter_k810) (bruijn ##x.1576 0 0) 1)
V_CALL(VGetArg(upenv, 17-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k810, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0iter_k808(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k808" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k808, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k808, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 16 38) (close _V0iter_k809) (bruijn proper-xs 0 0))
V_CALL(VGetArg(upenv, 16-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k809, env)}),
      _var0
    );
 }
}
static void _V0iter_k807(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k807" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k807, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k807, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.25 0 0))) ((bruijn undot 11 2) (close _V0iter_k808) (##inline ##sys.car (bruijn ##expr.24 1 0))) ((bruijn ##k.1563 3 0) #f)) ((bruijn ##k.1563 3 0) #f))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k808, env)}),
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
static void _V0iter_k806(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k806" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k806, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k806, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.24 0 0)) ((close _V0iter_k807) (##inline ##sys.cdr (bruijn ##expr.24 0 0))) ((bruijn ##k.1563 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter_k807, env, runtime,
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
static void _V0iter_k805(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k805" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k805, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k805, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1565 0 0) ((close _V0iter_k806) (##inline ##sys.cdr (bruijn ##expr.23 1 1))) ((bruijn ##k.1563 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter_k806, env, runtime,
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
static void _V0iter_lambda208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda208" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda208, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.23 0 1)) ((bruijn equal? 12 35) (close _V0iter_k805) (quote lambda) (##inline ##sys.car (bruijn ##expr.23 0 1))) ((bruijn ##k.1563 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 12-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k805, env)}),
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
static void _V0iter_k815(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k815" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k815, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k815, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 6 1) (bruijn ##k.1556 2 0) (##inline ##sys.cons (quote case-lambda) (bruijn ##x.1560 0 0)))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      _var0
    )

    );
 }
}
static void _V0iter_lambda210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda210" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda210, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda210, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn bruijn-lambda 11 3) (bruijn ##k.1561 0 0) (bruijn env 7 1) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 11-1, 3), runtime,
      _var0,
      VGetArg(upenv, 7-1, 1),
      _var1
    );
 }
}
static void _V0iter_k814(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k814" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k814, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k814, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1558 0 0) ((bruijn map 14 32) (close _V0iter_k815) (close _V0iter_lambda210) (##inline ##sys.cdr (bruijn ##expr.26 1 1))) ((bruijn ##k.1556 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k815, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda210, env)}),
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
static void _V0iter_lambda209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda209" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda209, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 1)) ((bruijn equal? 13 35) (close _V0iter_k814) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.26 0 1))) ((bruijn ##k.1556 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k814, env)}),
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
static void _V0iter_k823(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k823" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k823, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k823, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 12 1) (bruijn ##k.1539 7 0) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (quote 1) (##inline ##sys.cons (bruijn ##x.1550 0 0) (quote ())))))
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
static void _V0iter_k822(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k822" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k822, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k822, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 16 4) (close _V0iter_k823) (bruijn ##x.1551 0 0) (##inline ##sys.car (bruijn ##expr.30 2 0)))
V_CALL(VGetArg(upenv, 16-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k823, env)}),
      _var0,
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0iter_k821(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k821" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k821, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k821, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 19 56) (close _V0iter_k822) (bruijn ##x.1552 0 0) (bruijn env 11 1))
V_CALL(VGetArg(upenv, 19-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k822, env)}),
      _var0,
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0iter_k820(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k820" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k820, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k820, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.30 0 0))) ((bruijn list 18 57) (close _V0iter_k821) (##inline ##sys.car (bruijn ##expr.29 1 0))) ((bruijn ##k.1539 4 0) #f)) ((bruijn ##k.1539 4 0) #f))
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
V_CALL(VGetArg(upenv, 18-1, 57), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k821, env)}),
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
static void _V0iter_k819(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k819" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k819, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k819, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.29 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.29 0 0))) ((close _V0iter_k820) (##inline ##sys.cdr (bruijn ##expr.28 1 0))) ((bruijn ##k.1539 3 0) #f)) ((bruijn ##k.1539 3 0) #f))
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
V_CALL_FUNC(_V0iter_k820, env, runtime,
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
static void _V0iter_k818(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k818" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k818, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k818, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 0)) ((close _V0iter_k819) (##inline ##sys.car (bruijn ##expr.28 0 0))) ((bruijn ##k.1539 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter_k819, env, runtime,
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
static void _V0iter_k817(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k817" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k817, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k817, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1541 0 0) ((close _V0iter_k818) (##inline ##sys.cdr (bruijn ##expr.27 1 1))) ((bruijn ##k.1539 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter_k818, env, runtime,
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
static void _V0iter_lambda211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda211" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda211, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 1)) ((bruijn equal? 14 35) (close _V0iter_k817) (quote continuation) (##inline ##sys.car (bruijn ##expr.27 0 1))) ((bruijn ##k.1539 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k817, env)}),
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
static void _V0iter_k825(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k825" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k825, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k825, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1537 0 0) ((bruijn ##kk.13 7 1) (bruijn ##k.1535 1 0) (bruijn expr 8 2)) ((bruijn ##k.1535 1 0) #f))
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
static void _V0iter_lambda212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda212" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda212, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 1)) ((bruijn equal? 15 35) (close _V0iter_k825) (quote ##foreign.function) (##inline ##sys.car (bruijn ##expr.31 0 1))) ((bruijn ##k.1535 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 15-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k825, env)}),
      VEncodePointer(&_V10foreign_Dfunction.sym, VPOINTER_OTHER),
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
static void _V0iter_k827(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k827" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k827, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k827, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1533 0 0) ((bruijn ##kk.13 8 1) (bruijn ##k.1531 1 0) (bruijn expr 9 2)) ((bruijn ##k.1531 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 9-1, 2)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_lambda213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda213" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda213, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 1)) ((bruijn equal? 16 35) (close _V0iter_k827) (quote quote) (##inline ##sys.car (bruijn ##expr.32 0 1))) ((bruijn ##k.1531 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k827, env)}),
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
static void _V0iter_k831(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k831" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k831, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k831, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 11 1) (bruijn ##k.1522 3 0) (##inline ##sys.cons (quote ##inline) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.34 1 0)) (bruijn ##x.1528 0 0))))
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
static void _V0iter_lambda215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda215" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda215, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda215, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 16 4) (bruijn ##k.1529 0 0) (bruijn env 12 1) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 16-1, 4), runtime,
      _var0,
      VGetArg(upenv, 12-1, 1),
      _var1
    );
 }
}
static void _V0iter_k830(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k830" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k830, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k830, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.34 0 0)) ((bruijn map 19 32) (close _V0iter_k831) (close _V0iter_lambda215) (##inline ##sys.cdr (bruijn ##expr.34 0 0))) ((bruijn ##k.1522 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k831, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda215, env)}),
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
static void _V0iter_k829(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k829" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k829, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k829, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1524 0 0) ((close _V0iter_k830) (##inline ##sys.cdr (bruijn ##expr.33 1 1))) ((bruijn ##k.1522 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter_k830, env, runtime,
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
static void _V0iter_lambda214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda214" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda214, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.33 0 1)) ((bruijn equal? 17 35) (close _V0iter_k829) (quote ##inline) (##inline ##sys.car (bruijn ##expr.33 0 1))) ((bruijn ##k.1522 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 17-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k829, env)}),
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
static void _V0iter_k833(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k833" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k833, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k833, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1502 1 0) (##inline ##sys.cdr (bruijn ##expr.35 4 1)) (quote ()))
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
static void _V0loop_k835(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k835" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k835, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k835, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.38 4 1) (bruijn ##k.1513 1 0) (bruijn ##expr.40 2 1) (bruijn ##x.1514 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k834(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k834" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k834, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k834, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.40 1 1))) ((bruijn reverse 23 46) (close _V0loop_k835) (bruijn ##xs.37 1 2)) ((bruijn ##k.1513 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 23-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k835, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k838(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k838" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k838, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k838, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.38 7 1) (bruijn ##k.1507 2 0) (bruijn ##expr.40 5 1) (bruijn ##x.1509 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k837(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k837" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k837, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k837, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 26 46) (close _V0loop_k838) (bruijn ##xs.37 4 2))
V_CALL(VGetArg(upenv, 26-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k838, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda222" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda222, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda222, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.39 0 1) (close _V0loop_k837) (##inline ##sys.cdr (bruijn ##expr.40 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.40 3 1)) (bruijn ##xs.37 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k837, env)}),
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
static void _V0loop_lambda221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda221" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 24 36) (bruijn ##k.1506 0 0) (close _V0loop_lambda222))
V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda222, env)})
    );
 }
}
static void _V0loop_k836(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k836" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k836, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k836, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 23 21) (bruijn ##k.1504 1 0) (close _V0loop_lambda221) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 23-1, 21), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda221, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda220" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda220, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda220, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k834) (close _V0loop_k836))
V_CALL_FUNC(_V0loop_k834, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k836, env)})
    );
 }
}
static void _V0iter_lambda219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda219" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda219, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter_k833) (bruijn loop 0 1) (close _V0loop_lambda220))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k833, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda220, env)})
    );
 }
}
static void _V0iter_lambda218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda218" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda218, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda218, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda219) (bruijn ##k.1501 0 0) #f)
V_CALL_FUNC(_V0iter_lambda219, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0iter_lambda217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_lambda217" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_lambda217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 36) (bruijn ##k.1500 0 0) (close _V0iter_lambda218))
V_CALL(VGetArg(upenv, 19-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda218, env)})
    );
 }
}
static void _V0iter_k841(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k841" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k841, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k841, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 13 1) (bruijn ##k.1516 3 0) (bruijn ##x.1518 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k840(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k840" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k840, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k840, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 21 56) (close _V0iter_k841) (bruijn ##x.1519 1 0) (bruijn ##x.1520 0 0))
V_CALL(VGetArg(upenv, 21-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k841, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0iter_lambda224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda224" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda224, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda224, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 17 4) (bruijn ##k.1521 0 0) (bruijn env 13 1) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 17-1, 4), runtime,
      _var0,
      VGetArg(upenv, 13-1, 1),
      _var1
    );
 }
}
static void _V0iter_k839(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k839" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k839, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k839, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 20 32) (close _V0iter_k840) (close _V0iter_lambda224) (bruijn xs 1 2))
V_CALL(VGetArg(upenv, 20-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k840, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda224, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0iter_lambda223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter_lambda223" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda223, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda223, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn iter 15 4) (close _V0iter_k839) (bruijn env 11 1) (##inline ##sys.car (bruijn ##expr.35 1 1))) ((bruijn ##k.1516 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k839, env)}),
      VGetArg(upenv, 11-1, 1),
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
static void _V0iter_lambda216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda216" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda216, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.35 0 1)) ((bruijn call-with-values 18 21) (bruijn ##k.1498 0 0) (close _V0iter_lambda217) (close _V0iter_lambda223)) ((bruijn ##k.1498 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 21), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda217, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda223, env)})
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter_k844(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k844" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k844, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k844, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1496 1 0) ((bruijn lookup 17 1) (bruijn ##k.1497 0 0) 0 (bruijn env 13 1) (bruijn x 2 1)) ((bruijn ##k.1497 0 0) (bruijn x 2 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 13-1, 1),
      upenv->up->vars[1]
    );
} else {
V_CALL(_var0, runtime,
      upenv->up->vars[1]
    );
}
 }
}
static void _V0iter_k845(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k845" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k845, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k845, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 12 1) (bruijn ##k.1494 2 0) (bruijn ##x.1495 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k843(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k843" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k843, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k843, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_k844) (close _V0iter_k845))
V_CALL_FUNC(_V0iter_k844, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k845, env)})
    );
 }
}
static void _V0iter_lambda225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda225" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda225, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 19 16) (close _V0iter_k843) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k843, env)}),
      _var1
    );
 }
}
static void _V0iter_k847(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k847" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k847, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k847, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 11 1) (bruijn ##k.1483 10 0) (bruijn ##x.1493 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      _var0
    );
 }
}
static void _V0iter_k846(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k846" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k846, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k846, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn compiler-error 19 43) (close _V0iter_k847) (##string ##string.1860) (bruijn expr 11 2))
V_CALL(VGetArg(upenv, 19-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k847, env)}),
      VEncodePointer(&_V10string_D1860.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 2)
    );
 }
}
static void _V0iter_k842(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k842" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k842, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k842, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda225) (close _V0iter_k846) (bruijn ##input.14 8 1))
V_CALL_FUNC(_V0iter_lambda225, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k846, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0iter_k832(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k832" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k832, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k832, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda216) (close _V0iter_k842) (bruijn ##input.14 7 1))
V_CALL_FUNC(_V0iter_lambda216, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k842, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0iter_k828(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k828" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k828, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k828, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda214) (close _V0iter_k832) (bruijn ##input.14 6 1))
V_CALL_FUNC(_V0iter_lambda214, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k832, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0iter_k826(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k826" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k826, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k826, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda213) (close _V0iter_k828) (bruijn ##input.14 5 1))
V_CALL_FUNC(_V0iter_lambda213, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k828, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0iter_k824(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k824" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k824, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k824, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda212) (close _V0iter_k826) (bruijn ##input.14 4 1))
V_CALL_FUNC(_V0iter_lambda212, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k826, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0iter_k816(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k816" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k816, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k816, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda211) (close _V0iter_k824) (bruijn ##input.14 3 1))
V_CALL_FUNC(_V0iter_lambda211, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k824, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0iter_k813(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k813" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k813, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k813, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda209) (close _V0iter_k816) (bruijn ##input.14 2 1))
V_CALL_FUNC(_V0iter_lambda209, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k816, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0iter_k804(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k804" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k804, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k804, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda208) (close _V0iter_k813) (bruijn ##input.14 1 1))
V_CALL_FUNC(_V0iter_lambda208, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k813, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter_lambda199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda199" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda199, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda200) (close _V0iter_k804) (bruijn ##input.14 0 1))
V_CALL_FUNC(_V0iter_lambda200, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k804, env)}),
      _var1
    );
 }
}
static void _V0iter_lambda198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda198" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda198, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda198, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda199) (bruijn ##k.1482 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0iter_lambda199, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0iter_lambda197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter_lambda197" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda197, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda197, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 8 36) (bruijn ##k.1481 0 0) (close _V0iter_lambda198))
V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda198, env)})
    );
 }
}
static void _V0bruijn__ify_k781(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k781" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k781, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k781, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0bruijn__ify_k782) (bruijn iter 3 4) (close _V0iter_lambda197))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k782, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda197, env)})
    );
 }
}
static void _V0bruijn__lambda_k848(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k848" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k848, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k848, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1632 1 0) (##inline ##sys.car (bruijn ##expr.4 4 1)) (quote ()))
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
static void _V0loop_k850(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k850" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k850, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k850, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 4 1) (bruijn ##k.1643 1 0) (bruijn ##expr.9 2 1) (bruijn ##x.1644 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k849(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k849" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k849, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k849, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.9 1 1))) ((bruijn reverse 15 46) (close _V0loop_k850) (bruijn ##xs.6 1 2)) ((bruijn ##k.1643 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 15-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k850, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k853(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k853" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k853, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k853, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 7 1) (bruijn ##k.1637 2 0) (bruijn ##expr.9 5 1) (bruijn ##x.1639 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k852(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k852" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k852, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k852, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 18 46) (close _V0loop_k853) (bruijn ##xs.6 4 2))
V_CALL(VGetArg(upenv, 18-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k853, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda235" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda235, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda235, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.8 0 1) (close _V0loop_k852) (##inline ##sys.cdr (bruijn ##expr.9 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.9 3 1)) (bruijn ##xs.6 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k852, env)}),
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
static void _V0loop_lambda234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda234" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 16 36) (bruijn ##k.1636 0 0) (close _V0loop_lambda235))
V_CALL(VGetArg(upenv, 16-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda235, env)})
    );
 }
}
static void _V0loop_k851(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k851" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k851, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k851, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 15 21) (bruijn ##k.1634 1 0) (close _V0loop_lambda234) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 15-1, 21), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda234, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda233" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda233, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda233, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k849) (close _V0loop_k851))
V_CALL_FUNC(_V0loop_k849, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k851, env)})
    );
 }
}
static void _V0bruijn__lambda_lambda232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda232" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda232, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0bruijn__lambda_k848) (bruijn loop 0 1) (close _V0loop_lambda233))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k848, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda233, env)})
    );
 }
}
static void _V0bruijn__lambda_lambda231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda231" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda231, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda231, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__lambda_lambda232) (bruijn ##k.1631 0 0) #f)
V_CALL_FUNC(_V0bruijn__lambda_lambda232, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0bruijn__lambda_lambda230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda230" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 11 36) (bruijn ##k.1630 0 0) (close _V0bruijn__lambda_lambda231))
V_CALL(VGetArg(upenv, 11-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda231, env)})
    );
 }
}
static void _V0bruijn__lambda_k857(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k857" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k857, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k857, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.2 7 1) (bruijn ##k.1646 4 0) (##inline ##sys.cons (bruijn ##x.1651 2 0) (##inline ##sys.cons (bruijn ##x.1653 0 0) (quote ()))))
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
static void _V0bruijn__lambda_k856(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k856" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k856, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k856, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 10 4) (close _V0bruijn__lambda_k857) (bruijn ##x.1654 0 0) (##inline ##sys.car (bruijn ##expr.10 2 0)))
V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k857, env)}),
      _var0,
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0bruijn__lambda_k855(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k855" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k855, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k855, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 13 56) (close _V0bruijn__lambda_k856) (bruijn xs 2 2) (bruijn env 6 1))
V_CALL(VGetArg(upenv, 13-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k856, env)}),
      upenv->up->vars[2],
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0bruijn__lambda_k854(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k854" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k854, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k854, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.10 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.10 0 0))) ((bruijn length 12 38) (close _V0bruijn__lambda_k855) (bruijn xs 1 2)) ((bruijn ##k.1646 1 0) #f)) ((bruijn ##k.1646 1 0) #f))
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
V_CALL(VGetArg(upenv, 12-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k855, env)}),
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
static void _V0bruijn__lambda_lambda236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda236" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda236, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda236, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0bruijn__lambda_k854) (##inline ##sys.cdr (bruijn ##expr.4 1 1))) ((bruijn ##k.1646 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL_FUNC(_V0bruijn__lambda_k854, env, runtime,
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
static void _V0bruijn__lambda_lambda229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda229" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda229, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 1)) ((bruijn call-with-values 10 21) (bruijn ##k.1628 0 0) (close _V0bruijn__lambda_lambda230) (close _V0bruijn__lambda_lambda236)) ((bruijn ##k.1628 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 10-1, 21), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda230, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda236, env)})
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0bruijn__lambda_k864(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k864" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k864, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k864, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.2 9 1) (bruijn ##k.1616 6 0) (##inline ##sys.cons (bruijn ##x.1621 2 0) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.1624 0 0) (quote ())))))
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
static void _V0bruijn__lambda_k863(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k863" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k863, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k863, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 12 4) (close _V0bruijn__lambda_k864) (bruijn ##x.1625 0 0) (##inline ##sys.car (bruijn ##expr.12 4 0)))
V_CALL(VGetArg(upenv, 12-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k864, env)}),
      _var0,
      VInlineCar(
upenv->up->up->up->vars[0]
    )

    );
 }
}
static void _V0bruijn__lambda_k862(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k862" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k862, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k862, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 15 56) (close _V0bruijn__lambda_k863) (bruijn proper-xs 2 0) (bruijn env 8 1))
V_CALL(VGetArg(upenv, 15-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k863, env)}),
      upenv->up->vars[0],
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0bruijn__lambda_k861(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k861" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k861, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k861, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn - 14 29) (close _V0bruijn__lambda_k862) (bruijn ##x.1626 0 0) 1)
V_CALL(VGetArg(upenv, 14-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k862, env)}),
      _var0,
      VEncodeInt(1l)
    );
 }
}
static void _V0bruijn__lambda_k860(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k860" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k860, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k860, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 13 38) (close _V0bruijn__lambda_k861) (bruijn proper-xs 0 0))
V_CALL(VGetArg(upenv, 13-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k861, env)}),
      _var0
    );
 }
}
static void _V0bruijn__lambda_k859(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k859" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k859, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k859, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.12 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.12 0 0))) ((bruijn undot 8 2) (close _V0bruijn__lambda_k860) (##inline ##sys.car (bruijn ##expr.11 1 1))) ((bruijn ##k.1616 1 0) #f)) ((bruijn ##k.1616 1 0) #f))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k860, env)}),
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
static void _V0bruijn__lambda_lambda237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda237" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda237, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.11 0 1)) ((close _V0bruijn__lambda_k859) (##inline ##sys.cdr (bruijn ##expr.11 0 1))) ((bruijn ##k.1616 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0bruijn__lambda_k859, env, runtime,
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
static void _V0bruijn__lambda_k865(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k865" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k865, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k865, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 11 34) (bruijn ##k.1613 2 0) (##string ##string.1764))
V_CALL(VGetArg(upenv, 11-1, 34), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1764.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0bruijn__lambda_k858(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_k858" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k858, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k858, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0bruijn__lambda_lambda237) (close _V0bruijn__lambda_k865) (bruijn ##input.3 1 1))
V_CALL_FUNC(_V0bruijn__lambda_lambda237, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k865, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0bruijn__lambda_lambda228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda228" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda228, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__lambda_lambda229) (close _V0bruijn__lambda_k858) (bruijn ##input.3 0 1))
V_CALL_FUNC(_V0bruijn__lambda_lambda229, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k858, env)}),
      _var1
    );
 }
}
static void _V0bruijn__lambda_lambda227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda227" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda227, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda227, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__lambda_lambda228) (bruijn ##k.1612 0 0) (bruijn lamb 1 2))
V_CALL_FUNC(_V0bruijn__lambda_lambda228, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0bruijn__lambda_lambda226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0bruijn__lambda_lambda226" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda226, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda226, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 7 36) (bruijn ##k.1611 0 0) (close _V0bruijn__lambda_lambda227))
V_CALL(VGetArg(upenv, 7-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda227, env)})
    );
 }
}
static void _V0bruijn__ify_k780(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k780" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k780, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k780, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0bruijn__ify_k781) (bruijn bruijn-lambda 2 3) (close _V0bruijn__lambda_lambda226))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k781, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda226, env)})
    );
 }
}
static void _V0undot_k869(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0undot_k869" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k869, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k869, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 10 56) (bruijn ##k.1656 4 0) (bruijn ##x.1658 2 0) (bruijn ##x.1659 0 0))
V_CALL(VGetArg(upenv, 10-1, 56), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0undot_k868(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0undot_k868" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k868, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k868, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn undot 5 2) (close _V0undot_k869) (bruijn ##x.1660 0 0))
V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k869, env)}),
      _var0
    );
 }
}
static void _V0undot_k867(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0undot_k867" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k867, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k867, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 8 24) (close _V0undot_k868) (bruijn lst 2 1))
V_CALL(VGetArg(upenv, 8-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k868, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0undot_k870(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0undot_k870" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k870, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k870, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1661 0 0) ((bruijn ##k.1656 2 0) (quote ())) ((bruijn cons 8 56) (bruijn ##k.1656 2 0) (bruijn lst 2 1) (quote ())))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VNULL
    );
} else {
V_CALL(VGetArg(upenv, 8-1, 56), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VNULL
    );
}
 }
}
static void _V0undot_k866(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0undot_k866" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k866, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k866, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1657 0 0) ((bruijn car 7 30) (close _V0undot_k867) (bruijn lst 1 1)) ((bruijn null? 7 44) (close _V0undot_k870) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k867, env)}),
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k870, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0undot_lambda238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0undot_lambda238" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0undot_lambda238, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_lambda238, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 6 17) (close _V0undot_k866) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k866, env)}),
      _var1
    );
 }
}
static void _V0bruijn__ify_k779(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0bruijn__ify_k779" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k779, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k779, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0bruijn__ify_k780) (bruijn undot 1 2) (close _V0undot_lambda238))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k780, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_lambda238, env)})
    );
 }
}
static void _V0lookup_lambda240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0lookup_lambda240" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_lambda240, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn list 9 57) (bruijn ##k.1664 0 0) (quote bruijn) (bruijn x 4 3) (bruijn depth 4 1) (bruijn idx 0 1))
V_CALL(VGetArg(upenv, 9-1, 57), runtime,
      _var0,
      VEncodePointer(&_V0bruijn.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[3],
      upenv->up->up->up->vars[1],
      _var1
    );
 }
}
static void _V0lookup_k875(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup_k875" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k875, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k875, runtime, upenv, 1, argc, _var0) {
  // ((bruijn lookup 6 1) (bruijn ##k.1662 5 0) (bruijn ##x.1665 1 0) (bruijn ##x.1666 0 0) (bruijn x 5 3))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 3)
    );
 }
}
static void _V0lookup_k874(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup_k874" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k874, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k874, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 9 24) (close _V0lookup_k875) (bruijn env 4 2))
V_CALL(VGetArg(upenv, 9-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k875, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0lookup_k873(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup_k873" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k873, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k873, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##x.1 0 0) ((close _V0lookup_lambda240) (bruijn ##k.1662 3 0) (bruijn ##x.1 0 0)) ((bruijn + 8 27) (close _V0lookup_k874) 1 (bruijn depth 3 1)))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0lookup_lambda240, env, runtime,
      upenv->up->up->vars[0],
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 8-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k874, env)}),
      VEncodeInt(1l),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0lookup_lambda241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0lookup_lambda241" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0lookup_lambda241, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_lambda241, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn eqv? 8 18) (bruijn ##k.1667 0 0) (bruijn x 3 3) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 8-1, 18), runtime,
      _var0,
      upenv->up->up->vars[3],
      _var1
    );
 }
}
static void _V0lookup_k872(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup_k872" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k872, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k872, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list-index 6 1) (close _V0lookup_k873) (close _V0lookup_lambda241) (bruijn ##x.1668 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k873, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_lambda241, env)}),
      _var0
    );
 }
}
static void _V0lookup_k871(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0lookup_k871" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k871, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k871, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1663 0 0) ((bruijn ##k.1662 1 0) (bruijn x 1 3)) ((bruijn car 6 30) (close _V0lookup_k872) (bruijn env 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[3]
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k872, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0lookup_lambda239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0lookup_lambda239" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0lookup_lambda239, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_lambda239, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 5 44) (close _V0lookup_k871) (bruijn env 0 2))
V_CALL(VGetArg(upenv, 5-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k871, env)}),
      _var2
    );
 }
}
static void _V0bruijn__ify_lambda191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda191" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda191, runtime, upenv, 6, argc, _var0, _var1, _var2, _var3, _var4, _var5) {
  struct { VEnv env; VWORD argv[6]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 6; env->var_len = 6; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  // (set! (close _V0bruijn__ify_k779) (bruijn lookup 0 1) (close _V0lookup_lambda239))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k779, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_lambda239, env)})
    );
 }
}
static void _V0bruijn__ify_lambda190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0bruijn__ify_lambda190" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__ify_lambda190, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda190, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__ify_lambda191) (bruijn ##k.1452 0 0) #f #f #f #f #f)
V_CALL_FUNC(_V0bruijn__ify_lambda191, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k65" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k66) (bruijn bruijn-ify 1 2) (close _V0bruijn__ify_lambda190))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k66, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_lambda190, env)})
    );
 }
}
static void _V0list__index_k876(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__index_k876" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__index_k876, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__index_k876, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1670 1 0) (bruijn l 2 2) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k881(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k881" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k881, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k881, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.1672 5 0) (bruijn ##x.1675 1 0) (bruijn ##x.1676 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k880(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k880" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k880, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k880, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 8 27) (close _V0loop_k881) (bruijn i 4 2) 1)
V_CALL(VGetArg(upenv, 8-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k881, env)}),
      upenv->up->up->up->vars[2],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k879(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k879" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k879, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k879, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1674 0 0) ((bruijn ##k.1672 3 0) (bruijn i 3 2)) ((bruijn cdr 7 24) (close _V0loop_k880) (bruijn l 3 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k880, env)}),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0loop_k878(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k878" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k878, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k878, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn p 4 1) (close _V0loop_k879) (bruijn ##x.1677 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k879, env)}),
      _var0
    );
 }
}
static void _V0loop_k877(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k877" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k877, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k877, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1673 0 0) ((bruijn ##k.1672 1 0) #f) ((bruijn car 5 30) (close _V0loop_k878) (bruijn l 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k878, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda244" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda244, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda244, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 4 44) (close _V0loop_k877) (bruijn l 0 1))
V_CALL(upenv->up->up->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k877, env)}),
      _var1
    );
 }
}
static void _V0list__index_lambda243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0list__index_lambda243" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0list__index_lambda243, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0list__index_k876) (bruijn loop 0 1) (close _V0loop_lambda244))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__index_k876, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda244, env)})
    );
 }
}
static void _V0list__index_lambda242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0list__index_lambda242" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0list__index_lambda242, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__index_lambda242, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0list__index_lambda243) (bruijn ##k.1669 0 0) #f)
V_CALL_FUNC(_V0list__index_lambda243, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda3, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
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
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k65) (bruijn list-index 0 1) (close _V0list__index_lambda242))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k65, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__index_lambda242, env)})
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45, VWORD _var46, VWORD _var47, VWORD _var48, VWORD _var49, VWORD _var50, VWORD _var51, VWORD _var52, VWORD _var53, VWORD _var54, VWORD _var55, VWORD _var56, VWORD _var57) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda2, runtime, upenv, 58, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37, _var38, _var39, _var40, _var41, _var42, _var43, _var44, _var45, _var46, _var47, _var48, _var49, _var50, _var51, _var52, _var53, _var54, _var55, _var56, _var57) {
  struct { VEnv env; VWORD argv[58]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 58; env->var_len = 58; env->up = upenv;
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
  env->vars[53] = _var53;
  env->vars[54] = _var54;
  env->vars[55] = _var55;
  env->vars[56] = _var56;
  env->vars[57] = _var57;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda3) (bruijn ##k.274 0 0) #f #f #f #f #f #f)
V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda3, env, runtime,
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
static void _V0vanity_V0compiler_V0transpile_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k64" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda2) (bruijn ##k.273 64 0) (bruijn ##x.1678 56 0) (bruijn ##x.1679 55 0) (bruijn ##x.1680 54 0) (bruijn ##x.1681 53 0) (bruijn ##x.1682 52 0) (bruijn ##x.1683 51 0) (bruijn ##x.1684 50 0) (bruijn ##x.1685 49 0) (bruijn ##x.1686 48 0) (bruijn ##x.1687 47 0) (bruijn ##x.1688 46 0) (bruijn ##x.1689 45 0) (bruijn ##x.1690 44 0) (bruijn ##x.1691 43 0) (bruijn ##x.1692 42 0) (bruijn ##x.1693 41 0) (bruijn ##x.1694 40 0) (bruijn ##x.1695 39 0) (bruijn ##x.1696 38 0) (bruijn ##x.1697 37 0) (bruijn ##x.1698 36 0) (bruijn ##x.1699 35 0) (bruijn ##x.1700 34 0) (bruijn ##x.1701 33 0) (bruijn ##x.1702 32 0) (bruijn ##x.1703 31 0) (bruijn ##x.1704 30 0) (bruijn ##x.1705 29 0) (bruijn ##x.1706 28 0) (bruijn ##x.1707 27 0) (bruijn ##x.1708 26 0) (bruijn ##x.1709 25 0) (bruijn ##x.1710 24 0) (bruijn ##x.1711 23 0) (bruijn ##x.1712 22 0) (bruijn ##x.1713 21 0) (bruijn ##x.1714 20 0) (bruijn ##x.1715 19 0) (bruijn ##x.1716 18 0) (bruijn ##x.1717 17 0) (bruijn ##x.1718 16 0) (bruijn ##x.1719 15 0) (bruijn ##x.1720 14 0) (bruijn ##x.1721 13 0) (bruijn ##x.1722 12 0) (bruijn ##x.1723 11 0) (bruijn ##x.1724 10 0) (bruijn ##x.1725 9 0) (bruijn ##x.1726 8 0) (bruijn ##x.1727 7 0) (bruijn ##x.1728 6 0) (bruijn ##x.1729 5 0) (bruijn ##x.1730 4 0) (bruijn ##x.1731 3 0) (bruijn ##x.1732 2 0) (bruijn ##x.1733 1 0) (bruijn ##x.1734 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda2, env, runtime,
      VGetArg(upenv, 64-1, 0),
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
      _var0
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k63" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 56 0) (close _V0vanity_V0compiler_V0transpile_V20_k64) (quote list))
V_CALL(VGetArg(upenv, 56-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k64, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k62" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 55 0) (close _V0vanity_V0compiler_V0transpile_V20_k63) (quote cons))
V_CALL(VGetArg(upenv, 55-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k63, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k61" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 54 0) (close _V0vanity_V0compiler_V0transpile_V20_k62) (quote apply))
V_CALL(VGetArg(upenv, 54-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k62, env)}),
      VEncodePointer(&_V0apply.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k60" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 53 0) (close _V0vanity_V0compiler_V0transpile_V20_k61) (quote values))
V_CALL(VGetArg(upenv, 53-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k61, env)}),
      VEncodePointer(&_V0values.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k59" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 52 0) (close _V0vanity_V0compiler_V0transpile_V20_k60) (quote set-car!))
V_CALL(VGetArg(upenv, 52-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k60, env)}),
      VEncodePointer(&_V0set__car_B.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k58" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 51 0) (close _V0vanity_V0compiler_V0transpile_V20_k59) (quote assoc))
V_CALL(VGetArg(upenv, 51-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k59, env)}),
      VEncodePointer(&_V0assoc.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k57" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 50 0) (close _V0vanity_V0compiler_V0transpile_V20_k58) (quote mangle-foreign-function))
V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k58, env)}),
      VEncodePointer(&_V0mangle__foreign__function.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k56" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 49 0) (close _V0vanity_V0compiler_V0transpile_V20_k57) (quote cdar))
V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k57, env)}),
      VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k55" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 48 0) (close _V0vanity_V0compiler_V0transpile_V20_k56) (quote gensym))
V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k56, env)}),
      VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k54" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 47 0) (close _V0vanity_V0compiler_V0transpile_V20_k55) (quote assv))
V_CALL(VGetArg(upenv, 47-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k55, env)}),
      VEncodePointer(&_V0assv.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k53" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 46 0) (close _V0vanity_V0compiler_V0transpile_V20_k54) (quote string->symbol))
V_CALL(VGetArg(upenv, 46-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k54, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k52" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 45 0) (close _V0vanity_V0compiler_V0transpile_V20_k53) (quote reverse))
V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k53, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k51" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 44 0) (close _V0vanity_V0compiler_V0transpile_V20_k52) (quote not))
V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k52, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k50" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 43 0) (close _V0vanity_V0compiler_V0transpile_V20_k51) (quote null?))
V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k51, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k49" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 42 0) (close _V0vanity_V0compiler_V0transpile_V20_k50) (quote compiler-error))
V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k50, env)}),
      VEncodePointer(&_V0compiler__error.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k48" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 41 0) (close _V0vanity_V0compiler_V0transpile_V20_k49) (quote for-each))
V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k49, env)}),
      VEncodePointer(&_V0for__each.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k47" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 40 0) (close _V0vanity_V0compiler_V0transpile_V20_k48) (quote print-foreign-function))
V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k48, env)}),
      VEncodePointer(&_V0print__foreign__function.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k46" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 39 0) (close _V0vanity_V0compiler_V0transpile_V20_k47) (quote displayln))
V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k47, env)}),
      VEncodePointer(&_V0displayln.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k45" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 38 0) (close _V0vanity_V0compiler_V0transpile_V20_k46) (quote iota))
V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k46, env)}),
      VEncodePointer(&_V0iota.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k44" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 37 0) (close _V0vanity_V0compiler_V0transpile_V20_k45) (quote length))
V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k45, env)}),
      VEncodePointer(&_V0length.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k43" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 36 0) (close _V0vanity_V0compiler_V0transpile_V20_k44) (quote printf))
V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k44, env)}),
      VEncodePointer(&_V0printf.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k42" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 35 0) (close _V0vanity_V0compiler_V0transpile_V20_k43) (quote call/cc))
V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k43, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k41" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 34 0) (close _V0vanity_V0compiler_V0transpile_V20_k42) (quote equal?))
V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k42, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k40" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 33 0) (close _V0vanity_V0compiler_V0transpile_V20_k41) (quote error))
V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k41, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k39" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 32 0) (close _V0vanity_V0compiler_V0transpile_V20_k40) (quote sprintf))
V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k40, env)}),
      VEncodePointer(&_V0sprintf.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 31 0) (close _V0vanity_V0compiler_V0transpile_V20_k39) (quote map))
V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k39, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k37" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 30 0) (close _V0vanity_V0compiler_V0transpile_V20_k38) (quote cddr))
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k38, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k36" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 29 0) (close _V0vanity_V0compiler_V0transpile_V20_k37) (quote car))
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k37, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k35" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 0) (close _V0vanity_V0compiler_V0transpile_V20_k36) (quote -))
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k36, env)}),
      VEncodePointer(&_V0__.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k34" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close _V0vanity_V0compiler_V0transpile_V20_k35) (quote list-ref))
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k35, env)}),
      VEncodePointer(&_V0list__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k33" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close _V0vanity_V0compiler_V0transpile_V20_k34) (quote +))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k34, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k32" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close _V0vanity_V0compiler_V0transpile_V20_k33) (quote append))
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k33, env)}),
      VEncodePointer(&_V0append.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k31" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close _V0vanity_V0compiler_V0transpile_V20_k32) (quote lookup-inline))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k32, env)}),
      VEncodePointer(&_V0lookup__inline.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k30" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close _V0vanity_V0compiler_V0transpile_V20_k31) (quote cdr))
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k31, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k29" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0compiler_V0transpile_V20_k30) (quote display))
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k30, env)}),
      VEncodePointer(&_V0display.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k28" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0compiler_V0transpile_V20_k29) (quote =))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k29, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k27" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0compiler_V0transpile_V20_k28) (quote call-with-values))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k28, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k26" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0transpile_V20_k27) (quote lookup-intrinsic2))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k27, env)}),
      VEncodePointer(&_V0lookup__intrinsic2.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0transpile_V20_k26) (quote cadr))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k26, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k24" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0transpile_V20_k25) (quote eqv?))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k25, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k23" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0transpile_V20_k24) (quote pair?))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k24, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0transpile_V20_k23) (quote symbol?))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k23, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0transpile_V20_k22) (quote symbol->string))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k22, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k20" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0transpile_V20_k21) (quote string-length))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k21, env)}),
      VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0transpile_V20_k20) (quote string?))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k20, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0transpile_V20_k19) (quote mangle-symbol))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k19, env)}),
      VEncodePointer(&_V0mangle__symbol.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0transpile_V20_k18) (quote cadar))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k18, env)}),
      VEncodePointer(&_V0cadar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0transpile_V20_k17) (quote caar))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k17, env)}),
      VEncodePointer(&_V0caar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0transpile_V20_k16) (quote integer?))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k16, env)}),
      VEncodePointer(&_V0integer_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0transpile_V20_k15) (quote number?))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k15, env)}),
      VEncodePointer(&_V0number_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0transpile_V20_k14) (quote char?))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k14, env)}),
      VEncodePointer(&_V0char_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0transpile_V20_k13) (quote eq?))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k13, env)}),
      VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0transpile_V20_k12) (quote string-ref))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k12, env)}),
      VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0transpile_V20_k11) (quote <))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k11, env)}),
      VEncodePointer(&_V0_L.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0transpile_V20_k10) (quote close-port))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k10, env)}),
      VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0transpile_V20_k9) (quote get-output-string))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k9, env)}),
      VEncodePointer(&_V0get__output__string.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k7" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0transpile_V20_k8) (quote open-output-string))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k8, env)}),
      VEncodePointer(&_V0open__output__string.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k6" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0transpile_V20_k7) (##string ##string.1861) (bruijn ##x.1735 5 0) (bruijn ##x.1736 4 0) (bruijn ##x.1737 3 0) (bruijn ##x.1738 2 0) (bruijn ##x.1739 1 0) (bruijn ##x.1740 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k7, env)}),
      VEncodePointer(&_V10string_D1861.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k5" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k6) (##string ##string.1862))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k6, env)}),
      VEncodePointer(&_V10string_D1862.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k4" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k5) (##string ##string.1863))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k5, env)}),
      VEncodePointer(&_V10string_D1863.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k3" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k4) (##string ##string.1864))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k4, env)}),
      VEncodePointer(&_V10string_D1864.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k2" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k3) (##string ##string.1865))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k3, env)}),
      VEncodePointer(&_V10string_D1865.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k2) (##string ##string.1866))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k2, env)}),
      VEncodePointer(&_V10string_D1866.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k1) (##string ##string.1867))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k1, env)}),
      VEncodePointer(&_V10string_D1867.sym, VPOINTER_OTHER)
    );
 }
}
VFunc _V0vanity_V0compiler_V0transpile_V20 = (VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda1;
