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
static struct { VBlob sym; char bytes[21]; } _V10string_D1898 = { { .base = { .tag = VSTRING }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1897 = { { .base = { .tag = VSTRING }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1896 = { { .base = { .tag = VSTRING }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1895 = { { .base = { .tag = VSTRING }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1894 = { { .base = { .tag = VSTRING }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1893 = { { .base = { .tag = VSTRING }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1892 = { { .base = { .tag = VSTRING }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL }, 19 }, "open-output-string" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL }, 18 }, "get-output-string" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL }, 11 }, "close-port" };
VWEAK VWORD _V0_L;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_L = { { .base = { .tag = VSYMBOL }, 2 }, "<" };
VWEAK VWORD _V0string__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0string__ref = { { .base = { .tag = VSYMBOL }, 11 }, "string-ref" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL }, 4 }, "eq\?" };
VWEAK VWORD _V0char_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0char_Q = { { .base = { .tag = VSYMBOL }, 6 }, "char\?" };
VWEAK VWORD _V0number_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0number_Q = { { .base = { .tag = VSYMBOL }, 8 }, "number\?" };
VWEAK VWORD _V0integer_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0integer_Q = { { .base = { .tag = VSYMBOL }, 9 }, "integer\?" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL }, 8 }, "string\?" };
VWEAK VWORD _V0string__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__length = { { .base = { .tag = VSYMBOL }, 14 }, "string-length" };
VWEAK VWORD _V0symbol___Gstring;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0symbol___Gstring = { { .base = { .tag = VSYMBOL }, 15 }, "symbol->string" };
VWEAK VWORD _V0mangle__symbol;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mangle__symbol = { { .base = { .tag = VSYMBOL }, 14 }, "mangle-symbol" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL }, 6 }, "cadar" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL }, 5 }, "caar" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL }, 8 }, "symbol\?" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL }, 6 }, "pair\?" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL }, 5 }, "eqv\?" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL }, 5 }, "cadr" };
VWEAK VWORD _V0lookup__intrinsic2;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0lookup__intrinsic2 = { { .base = { .tag = VSYMBOL }, 18 }, "lookup-intrinsic2" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL }, 17 }, "call-with-values" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL }, 2 }, "=" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL }, 8 }, "display" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL }, 4 }, "cdr" };
VWEAK VWORD _V0lookup__inline;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0lookup__inline = { { .base = { .tag = VSYMBOL }, 14 }, "lookup-inline" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL }, 7 }, "append" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL }, 9 }, "list-ref" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL }, 2 }, "-" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL }, 4 }, "car" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL }, 5 }, "cddr" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL }, 4 }, "map" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL }, 8 }, "sprintf" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL }, 6 }, "error" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL }, 7 }, "equal\?" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL }, 8 }, "call/cc" };
VWEAK VWORD _V0printf;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0printf = { { .base = { .tag = VSYMBOL }, 7 }, "printf" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL }, 7 }, "length" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL }, 5 }, "iota" };
VWEAK VWORD _V0displayln;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0displayln = { { .base = { .tag = VSYMBOL }, 10 }, "displayln" };
VWEAK VWORD _V0print__foreign__function;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0print__foreign__function = { { .base = { .tag = VSYMBOL }, 23 }, "print-foreign-function" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL }, 9 }, "for-each" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL }, 15 }, "compiler-error" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL }, 6 }, "null\?" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL }, 4 }, "not" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL }, 8 }, "reverse" };
VWEAK VWORD _V0string___Gsymbol;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gsymbol = { { .base = { .tag = VSYMBOL }, 15 }, "string->symbol" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL }, 5 }, "assv" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL }, 7 }, "gensym" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL }, 5 }, "cdar" };
VWEAK VWORD _V0mangle__foreign__function;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0mangle__foreign__function = { { .base = { .tag = VSYMBOL }, 24 }, "mangle-foreign-function" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL }, 6 }, "assoc" };
VWEAK VWORD _V0set__car_B;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0set__car_B = { { .base = { .tag = VSYMBOL }, 9 }, "set-car!" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL }, 7 }, "values" };
VWEAK VWORD _V0apply;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0apply = { { .base = { .tag = VSYMBOL }, 6 }, "apply" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL }, 5 }, "cons" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL }, 5 }, "list" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1891 = { { .base = { .tag = VSTRING }, 33 }, "bruijnify-pass: No matching case" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1890 = { { .base = { .tag = VSTRING }, 12 }, "~A_lambda~A" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1889 = { { .base = { .tag = VSTRING }, 7 }, "~A_k~A" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1888 = { { .base = { .tag = VSTRING }, 38 }, "literal-lifting: unknown literal type" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1887 = { { .base = { .tag = VSTRING }, 7 }, "string" };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL }, 13 }, "continuation" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL }, 12 }, "case-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL }, 7 }, "lambda" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1886 = { { .base = { .tag = VSTRING }, 7 }, "global" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1885 = { { .base = { .tag = VSTRING }, 37 }, "VLookupGlobalVarFast2(runtime, \"~A\")" };
static struct { VBlob sym; char bytes[60]; } _V10string_D1884 = { { .base = { .tag = VSTRING }, 60 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A,NULL)})" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1883 = { { .base = { .tag = VSTRING }, 3 }, "\\\?" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1882 = { { .base = { .tag = VSTRING }, 3 }, "\\b" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1881 = { { .base = { .tag = VSTRING }, 3 }, "\\'" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1880 = { { .base = { .tag = VSTRING }, 3 }, "\\\\" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1879 = { { .base = { .tag = VSTRING }, 3 }, "\\r" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1878 = { { .base = { .tag = VSTRING }, 3 }, "\\n" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1877 = { { .base = { .tag = VSTRING }, 3 }, "\\t" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1876 = { { .base = { .tag = VSTRING }, 3 }, "\\a" };
static struct { VBlob sym; char bytes[40]; } _V10string_D1875 = { { .base = { .tag = VSTRING }, 40 }, "VEncodePointer(&~A.sym, VPOINTER_OTHER)" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1874 = { { .base = { .tag = VSTRING }, 7 }, "_V40~A" };
static struct { VBlob sym; char bytes[36]; } _V10string_D1873 = { { .base = { .tag = VSTRING }, 36 }, "print-literal: unknown literal type" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1872 = { { .base = { .tag = VSTRING }, 19 }, "VEncodeBool(false)" };
static struct { VBlob sym; char bytes[18]; } _V10string_D1871 = { { .base = { .tag = VSTRING }, 18 }, "VEncodeBool(true)" };
static struct { VBlob sym; char bytes[18]; } _V10string_D1870 = { { .base = { .tag = VSTRING }, 18 }, "VEncodeChar('~A')" };
static struct { VBlob sym; char bytes[18]; } _V10string_D1869 = { { .base = { .tag = VSTRING }, 18 }, "VEncodeNumber(~A)" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1868 = { { .base = { .tag = VSTRING }, 16 }, "VEncodeInt(~Al)" };
static struct { VBlob sym; char bytes[52]; } _V10string_D1867 = { { .base = { .tag = VSTRING }, 52 }, "print-literal-table: unknown entry in literal table" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1866 = { { .base = { .tag = VSTRING }, 20 }, "VWEAK VWORD _V40~A;" };
static struct { VBlob sym; char bytes[79]; } _V10string_D1865 = { { .base = { .tag = VSTRING }, 79 }, "VWEAK VClosure _VW_V40~A = { .base = { .tag = VCLOSURE }, (VFunc)~A, NULL };~N" };
static struct { VBlob sym; char bytes[98]; } _V10string_D1864 = { { .base = { .tag = VSTRING }, 98 }, "static struct { VBlob sym; char bytes[~A]; } ~A = { { .base = { .tag = VSTRING }, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1863 = { { .base = { .tag = VSTRING }, 16 }, "VWEAK VWORD ~A;" };
static struct { VBlob sym; char bytes[100]; } _V10string_D1862 = { { .base = { .tag = VSTRING }, 100 }, "VWEAK struct { VBlob sym; char bytes[~A]; } _VW~A = { { .base = { .tag = VSYMBOL }, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[86]; } _V10string_D1861 = { { .base = { .tag = VSTRING }, 86 }, "  _V40~A = VEncodePointer(VLookupConstant(\"_V40~A\", &_VW_V40~A), VPOINTER_CLOSURE);~N" };
static struct { VBlob sym; char bytes[72]; } _V10string_D1860 = { { .base = { .tag = VSTRING }, 72 }, "  ~A = VEncodePointer(VLookupConstant(\"~A\", &_VW~A), VPOINTER_OTHER);~N" };
static struct { VBlob sym; char bytes[50]; } _V10string_D1859 = { { .base = { .tag = VSTRING }, 50 }, "static __attribute__((constructor)) void ~A() {~N" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1858 = { { .base = { .tag = VSTRING }, 22 }, "closes\?: unknown form" };
static struct { VBlob sym; char bytes[34]; } _V10string_D1857 = { { .base = { .tag = VSTRING }, 34 }, "    V_CALL_FUNC(~A, NULL, runtime" };
static struct { VBlob sym; char bytes[8]; } _V10string_D1856 = { { .base = { .tag = VSTRING }, 8 }, "V_CALL(" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1855 = { { .base = { .tag = VSTRING }, 20 }, "V_CALL_FUNC(~A, env" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1854 = { { .base = { .tag = VSTRING }, 10 }, ", runtime" };
static struct { VBlob sym; char bytes[57]; } _V10string_D1853 = { { .base = { .tag = VSTRING }, 57 }, "    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,~N      " };
static struct { VBlob sym; char bytes[24]; } _V10string_D1852 = { { .base = { .tag = VSTRING }, 24 }, "print-set: unknown form" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1851 = { { .base = { .tag = VSTRING }, 38 }, "set!'s first argument is not a symbol" };
static struct { VBlob sym; char bytes[54]; } _V10string_D1850 = { { .base = { .tag = VSTRING }, 54 }, "    V_CALL_FUNC(VSetGlobalVar2, env, runtime,~N      " };
static struct { VBlob sym; char bytes[10]; } _V10string_D1849 = { { .base = { .tag = VSTRING }, 10 }, ",~N      " };
static struct { VBlob sym; char bytes[51]; } _V10string_D1848 = { { .base = { .tag = VSTRING }, 51 }, "    V_CALL_FUNC(VSetEnvVar2, env, runtime,~N      " };
static struct { VBlob sym; char bytes[51]; } _V10string_D1847 = { { .base = { .tag = VSTRING }, 51 }, ",~N      VEncodeInt(~Al), VEncodeInt(~Al),~N      " };
static struct { VBlob sym; char bytes[11]; } _V10string_D1846 = { { .base = { .tag = VSTRING }, 11 }, "~N    );~N" };
static struct { VBlob sym; char bytes[14]; } _V10string_D1845 = { { .base = { .tag = VSTRING }, 14 }, "~A(~N        " };
static struct { VBlob sym; char bytes[2]; } _V10string_D1844 = { { .base = { .tag = VSTRING }, 2 }, ")" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1843 = { { .base = { .tag = VSTRING }, 12 }, ",~N        " };
static struct { VBlob sym; char bytes[15]; } _V10string_D1842 = { { .base = { .tag = VSTRING }, 15 }, "unknown inline" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1841 = { { .base = { .tag = VSTRING }, 33 }, "print-expr: malformed expression" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL }, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[61]; } _V10string_D1840 = { { .base = { .tag = VSTRING }, 61 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, NULL)})" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL }, 12 }, "##intrinsic" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL }, 9 }, "##inline" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL }, 7 }, "define" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL }, 5 }, "set!" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL }, 3 }, "if" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1839 = { { .base = { .tag = VSTRING }, 16 }, "if(VDecodeBool(" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1838 = { { .base = { .tag = VSTRING }, 5 }, ")) {" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1837 = { { .base = { .tag = VSTRING }, 9 }, "} else {" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL }, 7 }, "bruijn" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1836 = { { .base = { .tag = VSTRING }, 25 }, "VGetArg(upenv, ~A-1, ~A)" };
static struct { VBlob sym; char bytes[28]; } _V10string_D1835 = { { .base = { .tag = VSTRING }, 28 }, "upenv->up->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1834 = { { .base = { .tag = VSTRING }, 24 }, "upenv->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1833 = { { .base = { .tag = VSTRING }, 20 }, "upenv->up->vars[~A]" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1832 = { { .base = { .tag = VSTRING }, 16 }, "upenv->vars[~A]" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL }, 6 }, "close" };
static struct { VBlob sym; char bytes[60]; } _V10string_D1831 = { { .base = { .tag = VSTRING }, 60 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, env)})" };
VWEAK VWORD _V10string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10string = { { .base = { .tag = VSYMBOL }, 9 }, "##string" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL }, 6 }, "quote" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1830 = { { .base = { .tag = VSTRING }, 6 }, "VNULL" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1829 = { { .base = { .tag = VSTRING }, 7 }, "_var~A" };
static struct { VBlob sym; char bytes[58]; } _V10string_D1828 = { { .base = { .tag = VSTRING }, 58 }, "static void ~A(VRuntime * runtime, VEnv * upenv, int argc" };
static struct { VBlob sym; char bytes[11]; } _V10string_D1827 = { { .base = { .tag = VSTRING }, 11 }, ", VWORD ~A" };
static struct { VBlob sym; char bytes[57]; } _V10string_D1826 = { { .base = { .tag = VSTRING }, 57 }, " V_GC_CHECK2_VARARGS((VFunc)~A, runtime, upenv, ~A, argc" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1825 = { { .base = { .tag = VSTRING }, 5 }, ", ~A" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1824 = { { .base = { .tag = VSTRING }, 10 }, "  // ~S~N" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1823 = { { .base = { .tag = VSTRING }, 9 }, "_varargs" };
static struct { VBlob sym; char bytes[52]; } _V10string_D1822 = { { .base = { .tag = VSTRING }, 52 }, "  struct { VEnv env; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1821 = { { .base = { .tag = VSTRING }, 33 }, "  VEnv * env = &container.env;~N" };
static struct { VBlob sym; char bytes[34]; } _V10string_D1820 = { { .base = { .tag = VSTRING }, 34 }, "  VInitEnv(env, ~A, ~A, upenv);~N" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1819 = { { .base = { .tag = VSTRING }, 24 }, "  env->vars[~A] = ~A;~N" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1818 = { { .base = { .tag = VSTRING }, 30 }, "  env->vars[~A] = _varargs;~N" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1817 = { { .base = { .tag = VSTRING }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1816 = { { .base = { .tag = VSTRING }, 16 }, ", _varargs) {~N" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1815 = { { .base = { .tag = VSTRING }, 27 }, " VWORD _varargs = VNULL;~N" };
static struct { VBlob sym; char bytes[55]; } _V10string_D1814 = { { .base = { .tag = VSTRING }, 55 }, " V_GATHER_VARARGS_VARIADIC(&_varargs, ~A, argc, ~A);~N" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1813 = { { .base = { .tag = VSTRING }, 20 }, " if(argc != ~A) {~N" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1812 = { { .base = { .tag = VSTRING }, 24 }, "  \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1811 = { { .base = { .tag = VSTRING }, 19 }, " if(argc < ~A) {~N" };
static struct { VBlob sym; char bytes[52]; } _V10string_D1810 = { { .base = { .tag = VSTRING }, 52 }, "  VError(\"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[32]; } _V10string_D1809 = { { .base = { .tag = VSTRING }, 32 }, "  \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[13]; } _V10string_D1808 = { { .base = { .tag = VSTRING }, 13 }, "  , argc);~N" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1807 = { { .base = { .tag = VSTRING }, 5 }, " }~N" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1806 = { { .base = { .tag = VSTRING }, 37 }, " static VDebugInfo dbg = { \"~A\" };~N" };
static struct { VBlob sym; char bytes[32]; } _V10string_D1805 = { { .base = { .tag = VSTRING }, 32 }, " VRecordCall2(runtime, &dbg);~N" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1804 = { { .base = { .tag = VSTRING }, 6 }, ", ..." };
static struct { VBlob sym; char bytes[23]; } _V10string_D1803 = { { .base = { .tag = VSTRING }, 23 }, "__attribute__((used)) " };
static struct { VBlob sym; char bytes[14]; } _V10string_D1802 = { { .base = { .tag = VSTRING }, 14 }, "_V20Case~A_~A" };
static struct { VBlob sym; char bytes[104]; } _V10string_D1801 = { { .base = { .tag = VSTRING }, 104 }, "__attribute__((used)) static void _V20CaseError_~A(VRuntime * runtime, VEnv * upenv, int argc, ...) {~N" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1800 = { { .base = { .tag = VSTRING }, 9 }, " // ~S~N" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1799 = { { .base = { .tag = VSTRING }, 51 }, " VError(\"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[23]; } _V10string_D1798 = { { .base = { .tag = VSTRING }, 23 }, " \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1797 = { { .base = { .tag = VSTRING }, 31 }, " \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1796 = { { .base = { .tag = VSTRING }, 12 }, " , argc);~N" };
static struct { VBlob sym; char bytes[4]; } _V10string_D1795 = { { .base = { .tag = VSTRING }, 4 }, "}~N" };
static struct { VBlob sym; char bytes[60]; } _V10string_D1794 = { { .base = { .tag = VSTRING }, 60 }, "void ~A(VRuntime * runtime, VEnv * upenv, int argc, ...);~N" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1793 = { { .base = { .tag = VSTRING }, 7 }, "asm(~N" };
static struct { VBlob sym; char bytes[29]; } _V10string_D1792 = { { .base = { .tag = VSTRING }, 29 }, "\".intel_syntax noprefix\\n\"~N" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1791 = { { .base = { .tag = VSTRING }, 10 }, "\"~A:\\n\"~N" };
static struct { VBlob sym; char bytes[26]; } _V10string_D1790 = { { .base = { .tag = VSTRING }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1789 = { { .base = { .tag = VSTRING }, 16 }, "\"    je ~A\\n\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1788 = { { .base = { .tag = VSTRING }, 31 }, "\"    cmp \" ARGC_REG \", ~A\\n\"~N" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1787 = { { .base = { .tag = VSTRING }, 17 }, "\"    jge ~A\\n\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1786 = { { .base = { .tag = VSTRING }, 31 }, "\"    jmp _V20CaseError_~A\\n\"~N" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1785 = { { .base = { .tag = VSTRING }, 5 }, ");~N" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL }, 2 }, "+" };
static struct { VBlob sym; char bytes[43]; } _V10string_D1784 = { { .base = { .tag = VSTRING }, 43 }, "void toplevel~A(V_CORE_ARGS, VWORD _k) {~N" };
static struct { VBlob sym; char bytes[23]; } _V10string_D1783 = { { .base = { .tag = VSTRING }, 23 }, "    VEnv * env = NULL;" };
static struct { VBlob sym; char bytes[36]; } _V10string_D1782 = { { .base = { .tag = VSTRING }, 36 }, "print-foreign-declare: unknown form" };
static struct { VBlob sym; char bytes[28]; } _V10string_D1781 = { { .base = { .tag = VSTRING }, 28 }, "print-declare: unknown form" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL }, 16 }, "##vcore.declare" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1780 = { { .base = { .tag = VSTRING }, 24 }, "VFunc ~A = (VFunc)~A;~N" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1779 = { { .base = { .tag = VSTRING }, 37 }, "int main(int argc, char ** argv) {~N" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1778 = { { .base = { .tag = VSTRING }, 27 }, "  VThunk toplevels[] = {~N" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1777 = { { .base = { .tag = VSTRING }, 16 }, "    toplevel~A," };
static struct { VBlob sym; char bytes[9]; } _V10string_D1776 = { { .base = { .tag = VSTRING }, 9 }, "~N  };~N" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1775 = { { .base = { .tag = VSTRING }, 22 }, "  VRuntime * runtime;" };
static struct { VBlob sym; char bytes[39]; } _V10string_D1774 = { { .base = { .tag = VSTRING }, 39 }, "  VInitRuntime2(&runtime, argc, argv);" };
static struct { VBlob sym; char bytes[95]; } _V10string_D1773 = { { .base = { .tag = VSTRING }, 95 }, "  return VDecodeExitCode(VStart2(runtime, sizeof toplevels / sizeof *toplevels, toplevels));~N" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1772 = { { .base = { .tag = VSTRING }, 2 }, "}" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1771 = { { .base = { .tag = VSTRING }, 30 }, "#include \"vscheme/vruntime.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1770 = { { .base = { .tag = VSTRING }, 30 }, "#include \"vscheme/vlibrary.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1769 = { { .base = { .tag = VSTRING }, 30 }, "#include \"vscheme/vinlines.h\"" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1768 = { { .base = { .tag = VSTRING }, 20 }, "#include <stdarg.h>" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1767 = { { .base = { .tag = VSTRING }, 51 }, "shared library has toplevel expressions or defines" };
VWEAK VWORD _V0printout2;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0printout2 = { { .base = { .tag = VSYMBOL }, 10 }, "printout2" };
VWEAK VWORD _V0to__functions;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0to__functions = { { .base = { .tag = VSYMBOL }, 13 }, "to-functions" };
VWEAK VWORD _V0bruijn__ify;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0bruijn__ify = { { .base = { .tag = VSYMBOL }, 11 }, "bruijn-ify" };
static struct { VBlob sym; char bytes[11]; } _V10string_D1766 = { { .base = { .tag = VSTRING }, 11 }, "VDllMain~A" };
static __attribute__((constructor)) void VDllMain1() {
  _V0open__output__string = VEncodePointer(VLookupConstant("_V0open__output__string", &_VW_V0open__output__string), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VLookupConstant("_V0get__output__string", &_VW_V0get__output__string), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0_L = VEncodePointer(VLookupConstant("_V0_L", &_VW_V0_L), VPOINTER_OTHER);
  _V0string__ref = VEncodePointer(VLookupConstant("_V0string__ref", &_VW_V0string__ref), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0char_Q = VEncodePointer(VLookupConstant("_V0char_Q", &_VW_V0char_Q), VPOINTER_OTHER);
  _V0number_Q = VEncodePointer(VLookupConstant("_V0number_Q", &_VW_V0number_Q), VPOINTER_OTHER);
  _V0integer_Q = VEncodePointer(VLookupConstant("_V0integer_Q", &_VW_V0integer_Q), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0string__length = VEncodePointer(VLookupConstant("_V0string__length", &_VW_V0string__length), VPOINTER_OTHER);
  _V0symbol___Gstring = VEncodePointer(VLookupConstant("_V0symbol___Gstring", &_VW_V0symbol___Gstring), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VLookupConstant("_V0mangle__symbol", &_VW_V0mangle__symbol), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0lookup__intrinsic2 = VEncodePointer(VLookupConstant("_V0lookup__intrinsic2", &_VW_V0lookup__intrinsic2), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0lookup__inline = VEncodePointer(VLookupConstant("_V0lookup__inline", &_VW_V0lookup__inline), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VLookupConstant("_V0list__ref", &_VW_V0list__ref), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0printf = VEncodePointer(VLookupConstant("_V0printf", &_VW_V0printf), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VLookupConstant("_V0iota", &_VW_V0iota), VPOINTER_OTHER);
  _V0displayln = VEncodePointer(VLookupConstant("_V0displayln", &_VW_V0displayln), VPOINTER_OTHER);
  _V0print__foreign__function = VEncodePointer(VLookupConstant("_V0print__foreign__function", &_VW_V0print__foreign__function), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VLookupConstant("_V0for__each", &_VW_V0for__each), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0string___Gsymbol = VEncodePointer(VLookupConstant("_V0string___Gsymbol", &_VW_V0string___Gsymbol), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VLookupConstant("_V0cdar", &_VW_V0cdar), VPOINTER_OTHER);
  _V0mangle__foreign__function = VEncodePointer(VLookupConstant("_V0mangle__foreign__function", &_VW_V0mangle__foreign__function), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VLookupConstant("_V0assoc", &_VW_V0assoc), VPOINTER_OTHER);
  _V0set__car_B = VEncodePointer(VLookupConstant("_V0set__car_B", &_VW_V0set__car_B), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0apply = VEncodePointer(VLookupConstant("_V0apply", &_VW_V0apply), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0continuation = VEncodePointer(VLookupConstant("_V0continuation", &_VW_V0continuation), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VLookupConstant("_V10intrinsic", &_VW_V10intrinsic), VPOINTER_OTHER);
  _V10inline = VEncodePointer(VLookupConstant("_V10inline", &_VW_V10inline), VPOINTER_OTHER);
  _V0define = VEncodePointer(VLookupConstant("_V0define", &_VW_V0define), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0bruijn = VEncodePointer(VLookupConstant("_V0bruijn", &_VW_V0bruijn), VPOINTER_OTHER);
  _V0close = VEncodePointer(VLookupConstant("_V0close", &_VW_V0close), VPOINTER_OTHER);
  _V10string = VEncodePointer(VLookupConstant("_V10string", &_VW_V10string), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VLookupConstant("_V10vcore_Ddeclare", &_VW_V10vcore_Ddeclare), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VLookupConstant("_V10foreign_Ddeclare", &_VW_V10foreign_Ddeclare), VPOINTER_OTHER);
  _V0printout2 = VEncodePointer(VLookupConstant("_V0printout2", &_VW_V0printout2), VPOINTER_OTHER);
  _V0to__functions = VEncodePointer(VLookupConstant("_V0to__functions", &_VW_V0to__functions), VPOINTER_OTHER);
  _V0bruijn__ify = VEncodePointer(VLookupConstant("_V0bruijn__ify", &_VW_V0bruijn__ify), VPOINTER_OTHER);
}
static void _V0vanity_V0compiler_V0transpile_V20_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k71, runtime, upenv, 1, argc, _var0) {
  // ((bruijn sprintf 10 33) (bruijn ##k.1044 2 0) (##string ##string.1766) (bruijn x 3 1))
V_CALL(VGetArg(upenv, 10-1, 33), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1766.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k71) (bruijn x 2 1) (bruijn ##x.1046 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k71, env)}),
      VEncodeInt(2l), VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 8 27) (close _V0vanity_V0compiler_V0transpile_V20_k70) (bruijn x 1 1) 1)
V_CALL(VGetArg(upenv, 8-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k70, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##k.1043 0 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda5))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda5, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k74, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.275 8 0) (##inline ##sys.cons (##inline ##sys.cons (quote bruijn-ify) (bruijn bruijn-ify 8 2)) (##inline ##sys.cons (##inline ##sys.cons (quote to-functions) (bruijn to-functions 8 5)) (##inline ##sys.cons (##inline ##sys.cons (quote printout2) (bruijn printout2 8 7)) (quote ())))))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        _V0bruijn__ify,
        VGetArg(upenv, 8-1, 2)),
        VInlineCons(
        VInlineCons(
        _V0to__functions,
        VGetArg(upenv, 8-1, 5)),
        VInlineCons(
        VInlineCons(
        _V0printout2,
        VGetArg(upenv, 8-1, 7)),
        VNULL))));
 }
}
static void _V0printout2_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k106, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn shared? 34 2) ((bruijn ##k.324 0 0) (bruijn print-main? 11 1)) ((bruijn ##k.324 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 34-1, 2))) {
V_CALL(_var0, runtime,
      VGetArg(upenv, 11-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0printout2_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k108, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.322 1 0) ((bruijn compiler-error 44 43) (bruijn ##k.323 0 0) (##string ##string.1767)) ((bruijn ##k.323 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 44-1, 43), runtime,
      _var0,
      VEncodePointer(&_V10string_D1767.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0printout2_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k110, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn print-main? 13 1) ((bruijn print-main 35 18) (bruijn ##k.321 0 0) (bruijn toplevels 36 7)) ((bruijn ##k.321 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 13-1, 1))) {
V_CALL(VGetArg(upenv, 35-1, 18), runtime,
      _var0,
      VGetArg(upenv, 36-1, 7));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0printout2_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k111, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.308 13 0) (bruijn print-main? 13 1))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V0printout2_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0printout2_k110) (close _V0printout2_k111))
V_CALL_FUNC(_V0printout2_k110, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k111, env)}));
 }
}
static void _V0printout2_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0printout2_k108) (close _V0printout2_k109))
V_CALL_FUNC(_V0printout2_k108, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k109, env)}));
 }
}
static void _V0printout2_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0printout2_k106) (close _V0printout2_k107))
V_CALL_FUNC(_V0printout2_k106, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k107, env)}));
 }
}
static void _V0printout2_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 41 42) (close _V0printout2_k105) (bruijn print-declare 31 17) (bruijn declares 32 6))
V_CALL(VGetArg(upenv, 41-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k105, env)}),
      VGetArg(upenv, 31-1, 17),
      VGetArg(upenv, 32-1, 6));
 }
}
static void _V0printout2_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 40 42) (close _V0printout2_k104) (bruijn print-fun 30 14) (bruijn functions 8 2))
V_CALL(VGetArg(upenv, 40-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k104, env)}),
      VGetArg(upenv, 30-1, 14),
      VGetArg(upenv, 8-1, 2));
 }
}
static void _V0printout2_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 39 42) (close _V0printout2_k103) (bruijn print-foreign-function 39 41) (bruijn foreign-functions 30 4))
V_CALL(VGetArg(upenv, 39-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k103, env)}),
      VGetArg(upenv, 39-1, 41),
      VGetArg(upenv, 30-1, 4));
 }
}
static void _V0printout2_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 38 42) (close _V0printout2_k102) (bruijn print-foreign-declare 28 16) (bruijn declares 29 6))
V_CALL(VGetArg(upenv, 38-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k102, env)}),
      VGetArg(upenv, 28-1, 16),
      VGetArg(upenv, 29-1, 6));
 }
}
static void _V0printout2_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-dllmain 27 9) (close _V0printout2_k101) (bruijn literal-table 28 3))
V_CALL(VGetArg(upenv, 27-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k101, env)}),
      VGetArg(upenv, 28-1, 3));
 }
}
static void _V0printout2_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 36 42) (close _V0printout2_k100) (bruijn print-literal-declaration 26 8) (bruijn literal-table 27 3))
V_CALL(VGetArg(upenv, 36-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k100, env)}),
      VGetArg(upenv, 26-1, 8),
      VGetArg(upenv, 27-1, 3));
 }
}
static void _V0printout2_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 35 40) (close _V0printout2_k99) (##string ##string.1768))
V_CALL(VGetArg(upenv, 35-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k99, env)}),
      VEncodePointer(&_V10string_D1768.sym, VPOINTER_OTHER));
 }
}
static void _V0printout2_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 34 40) (close _V0printout2_k98) (##string ##string.1769))
V_CALL(VGetArg(upenv, 34-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k98, env)}),
      VEncodePointer(&_V10string_D1769.sym, VPOINTER_OTHER));
 }
}
static void _V0printout2_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 33 40) (close _V0printout2_k97) (##string ##string.1770))
V_CALL(VGetArg(upenv, 33-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k97, env)}),
      VEncodePointer(&_V10string_D1770.sym, VPOINTER_OTHER));
 }
}
static void _V0printout2_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_lambda8, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn displayln 32 40) (close _V0printout2_k96) (##string ##string.1771))
V_CALL(VGetArg(upenv, 32-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k96, env)}),
      VEncodePointer(&_V10string_D1771.sym, VPOINTER_OTHER));
 }
}
static void _V0printout2_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0printout2_lambda8) (bruijn ##k.289 21 0) (bruijn ##x.325 1 0) (bruijn ##x.326 0 0))
V_CALL_FUNC(_V0printout2_lambda8, env, runtime,
      VGetArg(upenv, 21-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0printout2_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 30 46) (close _V0printout2_k95) (bruijn functions 21 5))
V_CALL(VGetArg(upenv, 30-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k95, env)}),
      VGetArg(upenv, 21-1, 5));
 }
}
static void _V0printout2_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 29 45) (close _V0printout2_k94) (bruijn ##x.327 0 0))
V_CALL(VGetArg(upenv, 29-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k94, env)}),
      _var0);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 28 44) (close _V0printout2_k93) (bruijn toplevels 19 7))
V_CALL(VGetArg(upenv, 28-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k93, env)}),
      VGetArg(upenv, 19-1, 7));
 }
}
static void _V0print__main_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k123, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 40 40) (bruijn ##k.328 12 0) (##string ##string.1772))
V_CALL(VGetArg(upenv, 40-1, 40), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V10string_D1772.sym, VPOINTER_OTHER));
 }
}
static void _V0print__main_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 39 37) (close _V0print__main_k123) (##string ##string.1773))
V_CALL(VGetArg(upenv, 39-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k123, env)}),
      VEncodePointer(&_V10string_D1773.sym, VPOINTER_OTHER));
 }
}
static void _V0print__main_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 38 40) (close _V0print__main_k122) (##string ##string.1774))
V_CALL(VGetArg(upenv, 38-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k122, env)}),
      VEncodePointer(&_V10string_D1774.sym, VPOINTER_OTHER));
 }
}
static void _V0print__main_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 37 40) (close _V0print__main_k121) (##string ##string.1775))
V_CALL(VGetArg(upenv, 37-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k121, env)}),
      VEncodePointer(&_V10string_D1775.sym, VPOINTER_OTHER));
 }
}
static void _V0print__main_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 36 37) (close _V0print__main_k120) (##string ##string.1776))
V_CALL(VGetArg(upenv, 36-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k120, env)}),
      VEncodePointer(&_V10string_D1776.sym, VPOINTER_OTHER));
 }
}
static void _V0print__main_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__main_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 36 37) (bruijn ##k.337 0 0) (##string ##string.1777) (bruijn i 0 1))
V_CALL(VGetArg(upenv, 36-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1777.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0print__main_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 35 42) (close _V0print__main_k119) (close _V0print__main_lambda10) (bruijn ##x.338 0 0))
V_CALL(VGetArg(upenv, 35-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k119, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_lambda10, env)}),
      _var0);
 }
}
static void _V0print__main_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iota 34 39) (close _V0print__main_k118) (bruijn ##x.339 0 0))
V_CALL(VGetArg(upenv, 34-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k118, env)}),
      _var0);
 }
}
static void _V0print__main_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 33 38) (close _V0print__main_k117) (bruijn toplevels 5 1))
V_CALL(VGetArg(upenv, 33-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k117, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0print__main_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 32 37) (close _V0print__main_k116) (##string ##string.1778))
V_CALL(VGetArg(upenv, 32-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k116, env)}),
      VEncodePointer(&_V10string_D1778.sym, VPOINTER_OTHER));
 }
}
static void _V0print__main_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 31 37) (close _V0print__main_k115) (##string ##string.1779))
V_CALL(VGetArg(upenv, 31-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k115, env)}),
      VEncodePointer(&_V10string_D1779.sym, VPOINTER_OTHER));
 }
}
static void _V0print__main_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 30 42) (close _V0print__main_k114) (bruijn print-toplevel 20 15) (bruijn ##x.341 0 0) (bruijn toplevels 2 1))
V_CALL(VGetArg(upenv, 30-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k114, env)}),
      VGetArg(upenv, 20-1, 15),
      _var0,
      upenv->up->vars[1]);
 }
}
static void _V0print__main_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__main_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iota 29 39) (close _V0print__main_k113) (bruijn ##x.342 0 0))
V_CALL(VGetArg(upenv, 29-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k113, env)}),
      _var0);
 }
}
static void _V0print__main_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__main_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__main_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn length 28 38) (close _V0print__main_k112) (bruijn toplevels 0 1))
V_CALL(VGetArg(upenv, 28-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_k112, env)}),
      _var1);
 }
}
static void _V0printout2_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k92) (bruijn print-main 17 18) (close _V0print__main_lambda9))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k92, env)}),
      VEncodeInt(17l), VEncodeInt(18l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__main_lambda9, env)})
    );
 }
}
static void _V0print__declare_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k125, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.267 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.267 0 0))) ((bruijn ##kk.264 4 1) (bruijn ##k.358 2 0) #f) ((bruijn ##k.358 2 0) #f)) ((bruijn ##k.358 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->vars[0],
      VEncodeBool(false));
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
static void _V0print__declare_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.360 0 0) ((close _V0print__declare_k125) (##inline ##sys.cdr (bruijn ##expr.266 1 1))) ((bruijn ##k.358 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__declare_k125, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__declare_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.266 0 1)) ((bruijn equal? 30 35) (close _V0print__declare_k124) (quote ##foreign.declare) (##inline ##sys.car (bruijn ##expr.266 0 1))) ((bruijn ##k.358 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 30-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_k124, env)}),
      _V10foreign_Ddeclare,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__declare_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k130, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.264 7 1) (bruijn ##k.349 4 0) (bruijn ##x.355 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0print__declare_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.270 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.270 0 0))) ((bruijn printf 34 37) (close _V0print__declare_k130) (##string ##string.1780) (##inline ##sys.car (bruijn ##expr.269 1 0)) (##inline ##sys.car (bruijn ##expr.270 0 0))) ((bruijn ##k.349 3 0) #f)) ((bruijn ##k.349 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 34-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_k130, env)}),
      VEncodePointer(&_V10string_D1780.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->vars[0]),
      VInlineCar(
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
static void _V0print__declare_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.269 0 0)) ((close _V0print__declare_k129) (##inline ##sys.cdr (bruijn ##expr.269 0 0))) ((bruijn ##k.349 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__declare_k129, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__declare_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.351 0 0) ((close _V0print__declare_k128) (##inline ##sys.cdr (bruijn ##expr.268 1 1))) ((bruijn ##k.349 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__declare_k128, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__declare_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.268 0 1)) ((bruijn equal? 31 35) (close _V0print__declare_k127) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.268 0 1))) ((bruijn ##k.349 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 31-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_k127, env)}),
      _V10vcore_Ddeclare,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__declare_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k132, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.264 4 1) (bruijn ##k.345 3 0) (bruijn ##x.348 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0print__declare_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 31 43) (close _V0print__declare_k132) (##string ##string.1781) (bruijn declare 4 1))
V_CALL(VGetArg(upenv, 31-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_k132, env)}),
      VEncodePointer(&_V10string_D1781.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0print__declare_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__declare_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__declare_lambda15) (close _V0print__declare_k131) (bruijn ##input.265 1 1))
V_CALL_FUNC(_V0print__declare_lambda15, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_k131, env)}),
      upenv->vars[1]);
 }
}
static void _V0print__declare_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__declare_lambda14) (close _V0print__declare_k126) (bruijn ##input.265 0 1))
V_CALL_FUNC(_V0print__declare_lambda14, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_k126, env)}),
      _var1);
 }
}
static void _V0print__declare_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__declare_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__declare_lambda13) (bruijn ##k.344 0 0) (bruijn declare 1 1))
V_CALL_FUNC(_V0print__declare_lambda13, env, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0print__declare_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__declare_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__declare_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 27 36) (bruijn ##k.343 0 0) (close _V0print__declare_lambda12))
V_CALL(VGetArg(upenv, 27-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_lambda12, env)}));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k91) (bruijn print-declare 16 17) (close _V0print__declare_lambda11))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k91, env)}),
      VEncodeInt(16l), VEncodeInt(17l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__declare_lambda11, env)})
    );
 }
}
static void _V0print__foreign__declare_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k135, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.257 5 1) (bruijn ##k.379 3 0) (bruijn ##x.384 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0print__foreign__declare_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.260 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.260 0 0))) ((bruijn displayln 31 40) (close _V0print__foreign__declare_k135) (##inline ##sys.car (bruijn ##expr.260 0 0))) ((bruijn ##k.379 2 0) #f)) ((bruijn ##k.379 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 31-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_k135, env)}),
      VInlineCar(
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
static void _V0print__foreign__declare_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.381 0 0) ((close _V0print__foreign__declare_k134) (##inline ##sys.cdr (bruijn ##expr.259 1 1))) ((bruijn ##k.379 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__foreign__declare_k134, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__foreign__declare_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.259 0 1)) ((bruijn equal? 29 35) (close _V0print__foreign__declare_k133) (quote ##foreign.declare) (##inline ##sys.car (bruijn ##expr.259 0 1))) ((bruijn ##k.379 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 29-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_k133, env)}),
      _V10foreign_Ddeclare,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__foreign__declare_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k139, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.263 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.263 0 0))) ((bruijn ##kk.257 6 1) (bruijn ##k.371 3 0) #f) ((bruijn ##k.371 3 0) #f)) ((bruijn ##k.371 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->vars[0],
      VEncodeBool(false));
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
static void _V0print__foreign__declare_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.262 0 0)) ((close _V0print__foreign__declare_k139) (##inline ##sys.cdr (bruijn ##expr.262 0 0))) ((bruijn ##k.371 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__foreign__declare_k139, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__foreign__declare_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.373 0 0) ((close _V0print__foreign__declare_k138) (##inline ##sys.cdr (bruijn ##expr.261 1 1))) ((bruijn ##k.371 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__foreign__declare_k138, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__foreign__declare_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.261 0 1)) ((bruijn equal? 30 35) (close _V0print__foreign__declare_k137) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.261 0 1))) ((bruijn ##k.371 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 30-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_k137, env)}),
      _V10vcore_Ddeclare,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__foreign__declare_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k141, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.257 4 1) (bruijn ##k.367 3 0) (bruijn ##x.370 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0print__foreign__declare_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 30 43) (close _V0print__foreign__declare_k141) (##string ##string.1782) (bruijn declare 4 1))
V_CALL(VGetArg(upenv, 30-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_k141, env)}),
      VEncodePointer(&_V10string_D1782.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0print__foreign__declare_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__declare_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__foreign__declare_lambda20) (close _V0print__foreign__declare_k140) (bruijn ##input.258 1 1))
V_CALL_FUNC(_V0print__foreign__declare_lambda20, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_k140, env)}),
      upenv->vars[1]);
 }
}
static void _V0print__foreign__declare_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__foreign__declare_lambda19) (close _V0print__foreign__declare_k136) (bruijn ##input.258 0 1))
V_CALL_FUNC(_V0print__foreign__declare_lambda19, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_k136, env)}),
      _var1);
 }
}
static void _V0print__foreign__declare_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__foreign__declare_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__foreign__declare_lambda18) (bruijn ##k.366 0 0) (bruijn declare 1 1))
V_CALL_FUNC(_V0print__foreign__declare_lambda18, env, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0print__foreign__declare_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__foreign__declare_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__declare_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 26 36) (bruijn ##k.365 0 0) (close _V0print__foreign__declare_lambda17))
V_CALL(VGetArg(upenv, 26-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_lambda17, env)}));
 }
}
static void _V0printout2_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0printout2_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k90) (bruijn print-foreign-declare 15 16) (close _V0print__foreign__declare_lambda16))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k90, env)}),
      VEncodeInt(15l), VEncodeInt(16l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__declare_lambda16, env)})
    );
 }
}
static void _V0print__toplevel_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__toplevel_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__toplevel_k144, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 28 40) (bruijn ##k.387 3 0) (##string ##string.1772))
V_CALL(VGetArg(upenv, 28-1, 40), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1772.sym, VPOINTER_OTHER));
 }
}
static void _V0print__toplevel_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__toplevel_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__toplevel_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 17 11) (close _V0print__toplevel_k144) (bruijn expr 2 2) (quote ()))
V_CALL(VGetArg(upenv, 17-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__toplevel_k144, env)}),
      upenv->up->vars[2],
      VNULL);
 }
}
static void _V0print__toplevel_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__toplevel_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__toplevel_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 26 40) (close _V0print__toplevel_k143) (##string ##string.1783))
V_CALL(VGetArg(upenv, 26-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__toplevel_k143, env)}),
      VEncodePointer(&_V10string_D1783.sym, VPOINTER_OTHER));
 }
}
static void _V0print__toplevel_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0print__toplevel_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__toplevel_lambda21, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn printf 25 37) (close _V0print__toplevel_k142) (##string ##string.1784) (bruijn i 0 1))
V_CALL(VGetArg(upenv, 25-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__toplevel_k142, env)}),
      VEncodePointer(&_V10string_D1784.sym, VPOINTER_OTHER),
      _var1);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k89) (bruijn print-toplevel 14 15) (close _V0print__toplevel_lambda21))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k89, env)}),
      VEncodeInt(14l), VEncodeInt(15l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__toplevel_lambda21, env)})
    );
 }
}
static void _V0print__fun_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k149, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.244 7 1) (bruijn ##k.411 5 0) (bruijn ##x.419 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0print__fun_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.250 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.250 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.248 2 0))) ((bruijn print-fun-single 21 12) (close _V0print__fun_k149) (##inline ##sys.car (bruijn ##expr.246 4 1)) (##inline ##sys.car (bruijn ##expr.247 3 0)) (##inline ##sys.car (bruijn ##expr.249 1 0)) #f (##inline ##sys.car (bruijn ##expr.250 0 0)) #f) ((bruijn ##k.411 4 0) #f)) ((bruijn ##k.411 4 0) #f)) ((bruijn ##k.411 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->vars[0])))) {
V_CALL(VGetArg(upenv, 21-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k149, env)}),
      VInlineCar(
        upenv->up->up->up->vars[1]),
      VInlineCar(
        upenv->up->up->vars[0]),
      VInlineCar(
        upenv->vars[0]),
      VEncodeBool(false),
      VInlineCar(
        _var0),
      VEncodeBool(false));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
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
static void _V0print__fun_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.249 0 0)) ((close _V0print__fun_k148) (##inline ##sys.cdr (bruijn ##expr.249 0 0))) ((bruijn ##k.411 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun_k148, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.248 0 0)) ((close _V0print__fun_k147) (##inline ##sys.car (bruijn ##expr.248 0 0))) ((bruijn ##k.411 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun_k147, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.247 0 0)) ((close _V0print__fun_k146) (##inline ##sys.cdr (bruijn ##expr.247 0 0))) ((bruijn ##k.411 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun_k146, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.246 0 1)) ((close _V0print__fun_k145) (##inline ##sys.cdr (bruijn ##expr.246 0 1))) ((bruijn ##k.411 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL_FUNC(_V0print__fun_k145, env, runtime,
      VInlineCdr(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k157, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.244 10 1) (bruijn ##k.397 7 0) (bruijn ##x.407 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0print__fun_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.256 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.256 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.253 4 0))) ((bruijn print-fun-single 24 12) (close _V0print__fun_k157) (##inline ##sys.car (bruijn ##expr.251 6 1)) (##inline ##sys.car (bruijn ##expr.252 5 0)) (##inline ##sys.car (bruijn ##expr.254 3 0)) #t (##inline ##sys.car (bruijn ##expr.256 0 0)) #f) ((bruijn ##k.397 6 0) #f)) ((bruijn ##k.397 6 0) #f)) ((bruijn ##k.397 6 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->up->up->vars[0])))) {
V_CALL(VGetArg(upenv, 24-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k157, env)}),
      VInlineCar(
        VGetArg(upenv, 6-1, 1)),
      VInlineCar(
        VGetArg(upenv, 5-1, 0)),
      VInlineCar(
        upenv->up->up->vars[0]),
      VEncodeBool(true),
      VInlineCar(
        _var0),
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.403 0 0) ((close _V0print__fun_k156) (##inline ##sys.cdr (bruijn ##expr.255 1 0))) ((bruijn ##k.397 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__fun_k156, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.255 0 0)) ((bruijn equal? 32 35) (close _V0print__fun_k155) (quote +) (##inline ##sys.car (bruijn ##expr.255 0 0))) ((bruijn ##k.397 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 32-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k155, env)}),
      _V0_P,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.254 0 0)) ((close _V0print__fun_k154) (##inline ##sys.cdr (bruijn ##expr.254 0 0))) ((bruijn ##k.397 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun_k154, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.253 0 0)) ((close _V0print__fun_k153) (##inline ##sys.car (bruijn ##expr.253 0 0))) ((bruijn ##k.397 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun_k153, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.252 0 0)) ((close _V0print__fun_k152) (##inline ##sys.cdr (bruijn ##expr.252 0 0))) ((bruijn ##k.397 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun_k152, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.251 0 1)) ((close _V0print__fun_k151) (##inline ##sys.cdr (bruijn ##expr.251 0 1))) ((bruijn ##k.397 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL_FUNC(_V0print__fun_k151, env, runtime,
      VInlineCdr(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k159, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.244 4 1) (bruijn ##k.393 3 0) (bruijn ##x.396 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0print__fun_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-fun-case 18 13) (close _V0print__fun_k159) (bruijn fun 4 1))
V_CALL(VGetArg(upenv, 18-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k159, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0print__fun_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__fun_lambda26) (close _V0print__fun_k158) (bruijn ##input.245 1 1))
V_CALL_FUNC(_V0print__fun_lambda26, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k158, env)}),
      upenv->vars[1]);
 }
}
static void _V0print__fun_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun_lambda25) (close _V0print__fun_k150) (bruijn ##input.245 0 1))
V_CALL_FUNC(_V0print__fun_lambda25, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_k150, env)}),
      _var1);
 }
}
static void _V0print__fun_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun_lambda24) (bruijn ##k.392 0 0) (bruijn fun 1 1))
V_CALL_FUNC(_V0print__fun_lambda24, env, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0print__fun_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun_lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 24 36) (bruijn ##k.391 0 0) (close _V0print__fun_lambda23))
V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_lambda23, env)}));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k88) (bruijn print-fun 13 14) (close _V0print__fun_lambda22))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k88, env)}),
      VEncodeInt(13l), VEncodeInt(14l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun_lambda22, env)})
    );
 }
}
static void _V0print__fun__case_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k177, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 41 37) (bruijn ##k.422 18 0) (##string ##string.1785))
V_CALL(VGetArg(upenv, 41-1, 37), runtime,
      VGetArg(upenv, 18-1, 0),
      VEncodePointer(&_V10string_D1785.sym, VPOINTER_OTHER));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 40 37) (close _V0print__fun__case_k177) (##string ##string.1786) (bruijn name 16 0))
V_CALL(VGetArg(upenv, 40-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k177, env)}),
      VEncodePointer(&_V10string_D1786.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V0print__fun__case_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k185, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.231 10 1) (bruijn ##k.453 8 0) (bruijn ##x.463 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 50 37) (close _V0print__fun__case_k185) (##string ##string.1787) (##inline ##sys.car (bruijn ##expr.233 7 1)))
V_CALL(VGetArg(upenv, 50-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k185, env)}),
      VEncodePointer(&_V10string_D1787.sym, VPOINTER_OTHER),
      VInlineCar(
        VGetArg(upenv, 7-1, 1)));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.238 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.238 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.235 4 0))) ((bruijn printf 49 37) (close _V0print__fun__case_k184) (##string ##string.1788) (##inline ##sys.car (bruijn ##expr.236 3 0))) ((bruijn ##k.453 6 0) #f)) ((bruijn ##k.453 6 0) #f)) ((bruijn ##k.453 6 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->up->up->vars[0])))) {
V_CALL(VGetArg(upenv, 49-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k184, env)}),
      VEncodePointer(&_V10string_D1788.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->up->up->vars[0]));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.459 0 0) ((close _V0print__fun__case_k183) (##inline ##sys.cdr (bruijn ##expr.237 1 0))) ((bruijn ##k.453 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__fun__case_k183, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.237 0 0)) ((bruijn equal? 47 35) (close _V0print__fun__case_k182) (quote +) (##inline ##sys.car (bruijn ##expr.237 0 0))) ((bruijn ##k.453 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 47-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k182, env)}),
      _V0_P,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.236 0 0)) ((close _V0print__fun__case_k181) (##inline ##sys.cdr (bruijn ##expr.236 0 0))) ((bruijn ##k.453 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k181, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.235 0 0)) ((close _V0print__fun__case_k180) (##inline ##sys.car (bruijn ##expr.235 0 0))) ((bruijn ##k.453 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k180, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.234 0 0)) ((close _V0print__fun__case_k179) (##inline ##sys.cdr (bruijn ##expr.234 0 0))) ((bruijn ##k.453 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k179, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.233 0 1)) ((close _V0print__fun__case_k178) (##inline ##sys.cdr (bruijn ##expr.233 0 1))) ((bruijn ##k.453 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL_FUNC(_V0print__fun__case_k178, env, runtime,
      VInlineCdr(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k192, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.231 9 1) (bruijn ##k.441 6 0) (bruijn ##x.449 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0print__fun__case_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 49 37) (close _V0print__fun__case_k192) (##string ##string.1789) (##inline ##sys.car (bruijn ##expr.239 5 1)))
V_CALL(VGetArg(upenv, 49-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k192, env)}),
      VEncodePointer(&_V10string_D1789.sym, VPOINTER_OTHER),
      VInlineCar(
        VGetArg(upenv, 5-1, 1)));
 }
}
static void _V0print__fun__case_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.243 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.243 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.241 2 0))) ((bruijn printf 48 37) (close _V0print__fun__case_k191) (##string ##string.1788) (##inline ##sys.car (bruijn ##expr.242 1 0))) ((bruijn ##k.441 4 0) #f)) ((bruijn ##k.441 4 0) #f)) ((bruijn ##k.441 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->vars[0])))) {
V_CALL(VGetArg(upenv, 48-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k191, env)}),
      VEncodePointer(&_V10string_D1788.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
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
static void _V0print__fun__case_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.242 0 0)) ((close _V0print__fun__case_k190) (##inline ##sys.cdr (bruijn ##expr.242 0 0))) ((bruijn ##k.441 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k190, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.241 0 0)) ((close _V0print__fun__case_k189) (##inline ##sys.car (bruijn ##expr.241 0 0))) ((bruijn ##k.441 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k189, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.240 0 0)) ((close _V0print__fun__case_k188) (##inline ##sys.cdr (bruijn ##expr.240 0 0))) ((bruijn ##k.441 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k188, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.239 0 1)) ((close _V0print__fun__case_k187) (##inline ##sys.cdr (bruijn ##expr.239 0 1))) ((bruijn ##k.441 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL_FUNC(_V0print__fun__case_k187, env, runtime,
      VInlineCdr(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k193, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 44 34) (bruijn ##k.438 2 0) (##string ##string.1790))
V_CALL(VGetArg(upenv, 44-1, 34), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1790.sym, VPOINTER_OTHER));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__fun__case_lambda32) (close _V0print__fun__case_k193) (bruijn ##input.232 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda32, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k193, env)}),
      upenv->vars[1]);
 }
}
static void _V0print__fun__case_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda31) (close _V0print__fun__case_k186) (bruijn ##input.232 0 1))
V_CALL_FUNC(_V0print__fun__case_lambda31, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k186, env)}),
      _var1);
 }
}
static void _V0print__fun__case_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda30) (bruijn ##k.437 0 0) (bruijn e 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda30, env, runtime,
      _var0,
      upenv->vars[1]);
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
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 40 36) (bruijn ##k.436 0 0) (close _V0print__fun__case_lambda29))
V_CALL(VGetArg(upenv, 40-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda29, env)}));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 39 42) (close _V0print__fun__case_k176) (close _V0print__fun__case_lambda28) (bruijn cases 11 0))
V_CALL(VGetArg(upenv, 39-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k176, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda28, env)}),
      VGetArg(upenv, 11-1, 0));
 }
}
static void _V0print__fun__case_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 38 37) (close _V0print__fun__case_k175) (##string ##string.1791) (bruijn name 14 0))
V_CALL(VGetArg(upenv, 38-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k175, env)}),
      VEncodePointer(&_V10string_D1791.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0print__fun__case_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 37 37) (close _V0print__fun__case_k174) (##string ##string.1792))
V_CALL(VGetArg(upenv, 37-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k174, env)}),
      VEncodePointer(&_V10string_D1792.sym, VPOINTER_OTHER));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 36 37) (close _V0print__fun__case_k173) (##string ##string.1793))
V_CALL(VGetArg(upenv, 36-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k173, env)}),
      VEncodePointer(&_V10string_D1793.sym, VPOINTER_OTHER));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 35 37) (close _V0print__fun__case_k172) (##string ##string.1794) (bruijn name 11 0))
V_CALL(VGetArg(upenv, 35-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k172, env)}),
      VEncodePointer(&_V10string_D1794.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 0));
 }
}
static void _V0print__fun__case_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k200, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.218 9 1) (bruijn ##k.484 7 0) (bruijn ##x.494 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0print__fun__case_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.225 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.225 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.222 4 0))) ((bruijn print-fun-single 34 12) (close _V0print__fun__case_k200) (##inline ##sys.car (bruijn ##expr.220 6 1)) #f (##inline ##sys.car (bruijn ##expr.223 3 0)) #t (##inline ##sys.car (bruijn ##expr.225 0 0)) #t) ((bruijn ##k.484 6 0) #f)) ((bruijn ##k.484 6 0) #f)) ((bruijn ##k.484 6 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->up->up->vars[0])))) {
V_CALL(VGetArg(upenv, 34-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k200, env)}),
      VInlineCar(
        VGetArg(upenv, 6-1, 1)),
      VEncodeBool(false),
      VInlineCar(
        upenv->up->up->vars[0]),
      VEncodeBool(true),
      VInlineCar(
        _var0),
      VEncodeBool(true));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.490 0 0) ((close _V0print__fun__case_k199) (##inline ##sys.cdr (bruijn ##expr.224 1 0))) ((bruijn ##k.484 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__fun__case_k199, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.224 0 0)) ((bruijn equal? 42 35) (close _V0print__fun__case_k198) (quote +) (##inline ##sys.car (bruijn ##expr.224 0 0))) ((bruijn ##k.484 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 42-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k198, env)}),
      _V0_P,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.223 0 0)) ((close _V0print__fun__case_k197) (##inline ##sys.cdr (bruijn ##expr.223 0 0))) ((bruijn ##k.484 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k197, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.222 0 0)) ((close _V0print__fun__case_k196) (##inline ##sys.car (bruijn ##expr.222 0 0))) ((bruijn ##k.484 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k196, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.221 0 0)) ((close _V0print__fun__case_k195) (##inline ##sys.cdr (bruijn ##expr.221 0 0))) ((bruijn ##k.484 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k195, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.220 0 1)) ((close _V0print__fun__case_k194) (##inline ##sys.cdr (bruijn ##expr.220 0 1))) ((bruijn ##k.484 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL_FUNC(_V0print__fun__case_k194, env, runtime,
      VInlineCdr(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k206, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.218 8 1) (bruijn ##k.473 5 0) (bruijn ##x.481 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0print__fun__case_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.230 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.230 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.228 2 0))) ((bruijn print-fun-single 33 12) (close _V0print__fun__case_k206) (##inline ##sys.car (bruijn ##expr.226 4 1)) #f (##inline ##sys.car (bruijn ##expr.229 1 0)) #f (##inline ##sys.car (bruijn ##expr.230 0 0)) #t) ((bruijn ##k.473 4 0) #f)) ((bruijn ##k.473 4 0) #f)) ((bruijn ##k.473 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->vars[0])))) {
V_CALL(VGetArg(upenv, 33-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k206, env)}),
      VInlineCar(
        upenv->up->up->up->vars[1]),
      VEncodeBool(false),
      VInlineCar(
        upenv->vars[0]),
      VEncodeBool(false),
      VInlineCar(
        _var0),
      VEncodeBool(true));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
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
static void _V0print__fun__case_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.229 0 0)) ((close _V0print__fun__case_k205) (##inline ##sys.cdr (bruijn ##expr.229 0 0))) ((bruijn ##k.473 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k205, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.228 0 0)) ((close _V0print__fun__case_k204) (##inline ##sys.car (bruijn ##expr.228 0 0))) ((bruijn ##k.473 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k204, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.227 0 0)) ((close _V0print__fun__case_k203) (##inline ##sys.cdr (bruijn ##expr.227 0 0))) ((bruijn ##k.473 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k203, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.226 0 1)) ((close _V0print__fun__case_k202) (##inline ##sys.cdr (bruijn ##expr.226 0 1))) ((bruijn ##k.473 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL_FUNC(_V0print__fun__case_k202, env, runtime,
      VInlineCdr(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k207, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 39 34) (bruijn ##k.470 2 0) (##string ##string.1790))
V_CALL(VGetArg(upenv, 39-1, 34), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1790.sym, VPOINTER_OTHER));
 }
}
static void _V0print__fun__case_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__fun__case_lambda37) (close _V0print__fun__case_k207) (bruijn ##input.219 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda37, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k207, env)}),
      upenv->vars[1]);
 }
}
static void _V0print__fun__case_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda35, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda36) (close _V0print__fun__case_k201) (bruijn ##input.219 0 1))
V_CALL_FUNC(_V0print__fun__case_lambda36, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k201, env)}),
      _var1);
 }
}
static void _V0print__fun__case_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda35) (bruijn ##k.469 0 0) (bruijn e 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda35, env, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0print__fun__case_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda33, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 35 36) (bruijn ##k.468 0 0) (close _V0print__fun__case_lambda34))
V_CALL(VGetArg(upenv, 35-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda34, env)}));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 34 42) (close _V0print__fun__case_k171) (close _V0print__fun__case_lambda33) (bruijn cases 6 0))
V_CALL(VGetArg(upenv, 34-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k171, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda33, env)}),
      VGetArg(upenv, 6-1, 0));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 33 37) (close _V0print__fun__case_k170) (##string ##string.1795))
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k170, env)}),
      VEncodePointer(&_V10string_D1795.sym, VPOINTER_OTHER));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 32 37) (close _V0print__fun__case_k169) (##string ##string.1796))
V_CALL(VGetArg(upenv, 32-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k169, env)}),
      VEncodePointer(&_V10string_D1796.sym, VPOINTER_OTHER));
 }
}
static void _V0print__fun__case_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k214, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.205 9 1) (bruijn ##k.514 7 0) (bruijn ##x.524 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0print__fun__case_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.212 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.212 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.209 4 0))) ((bruijn printf 41 37) (close _V0print__fun__case_k214) (##string ##string.1797) (##inline ##sys.car (bruijn ##expr.210 3 0))) ((bruijn ##k.514 6 0) #f)) ((bruijn ##k.514 6 0) #f)) ((bruijn ##k.514 6 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->up->up->vars[0])))) {
V_CALL(VGetArg(upenv, 41-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k214, env)}),
      VEncodePointer(&_V10string_D1797.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->up->up->vars[0]));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.520 0 0) ((close _V0print__fun__case_k213) (##inline ##sys.cdr (bruijn ##expr.211 1 0))) ((bruijn ##k.514 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__fun__case_k213, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.211 0 0)) ((bruijn equal? 39 35) (close _V0print__fun__case_k212) (quote +) (##inline ##sys.car (bruijn ##expr.211 0 0))) ((bruijn ##k.514 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 39-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k212, env)}),
      _V0_P,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.210 0 0)) ((close _V0print__fun__case_k211) (##inline ##sys.cdr (bruijn ##expr.210 0 0))) ((bruijn ##k.514 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k211, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.209 0 0)) ((close _V0print__fun__case_k210) (##inline ##sys.car (bruijn ##expr.209 0 0))) ((bruijn ##k.514 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k210, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.208 0 0)) ((close _V0print__fun__case_k209) (##inline ##sys.cdr (bruijn ##expr.208 0 0))) ((bruijn ##k.514 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k209, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.207 0 1)) ((close _V0print__fun__case_k208) (##inline ##sys.cdr (bruijn ##expr.207 0 1))) ((bruijn ##k.514 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL_FUNC(_V0print__fun__case_k208, env, runtime,
      VInlineCdr(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k220, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.205 8 1) (bruijn ##k.503 5 0) (bruijn ##x.511 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0print__fun__case_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.217 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.217 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.215 2 0))) ((bruijn printf 40 37) (close _V0print__fun__case_k220) (##string ##string.1798) (##inline ##sys.car (bruijn ##expr.216 1 0))) ((bruijn ##k.503 4 0) #f)) ((bruijn ##k.503 4 0) #f)) ((bruijn ##k.503 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->vars[0])))) {
V_CALL(VGetArg(upenv, 40-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k220, env)}),
      VEncodePointer(&_V10string_D1798.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
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
static void _V0print__fun__case_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.216 0 0)) ((close _V0print__fun__case_k219) (##inline ##sys.cdr (bruijn ##expr.216 0 0))) ((bruijn ##k.503 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k219, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.215 0 0)) ((close _V0print__fun__case_k218) (##inline ##sys.car (bruijn ##expr.215 0 0))) ((bruijn ##k.503 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k218, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.214 0 0)) ((close _V0print__fun__case_k217) (##inline ##sys.cdr (bruijn ##expr.214 0 0))) ((bruijn ##k.503 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__fun__case_k217, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.213 0 1)) ((close _V0print__fun__case_k216) (##inline ##sys.cdr (bruijn ##expr.213 0 1))) ((bruijn ##k.503 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL_FUNC(_V0print__fun__case_k216, env, runtime,
      VInlineCdr(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__case_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k221, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 36 34) (bruijn ##k.500 2 0) (##string ##string.1790))
V_CALL(VGetArg(upenv, 36-1, 34), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1790.sym, VPOINTER_OTHER));
 }
}
static void _V0print__fun__case_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__fun__case_lambda42) (close _V0print__fun__case_k221) (bruijn ##input.206 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda42, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k221, env)}),
      upenv->vars[1]);
 }
}
static void _V0print__fun__case_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda40, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda41) (close _V0print__fun__case_k215) (bruijn ##input.206 0 1))
V_CALL_FUNC(_V0print__fun__case_lambda41, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k215, env)}),
      _var1);
 }
}
static void _V0print__fun__case_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__fun__case_lambda40) (bruijn ##k.499 0 0) (bruijn e 1 1))
V_CALL_FUNC(_V0print__fun__case_lambda40, env, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0print__fun__case_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__case_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 32 36) (bruijn ##k.498 0 0) (close _V0print__fun__case_lambda39))
V_CALL(VGetArg(upenv, 32-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda39, env)}));
 }
}
static void _V0print__fun__case_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 31 42) (close _V0print__fun__case_k168) (close _V0print__fun__case_lambda38) (bruijn cases 3 0))
V_CALL(VGetArg(upenv, 31-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k168, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda38, env)}),
      upenv->up->up->vars[0]);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 30 37) (close _V0print__fun__case_k167) (##string ##string.1799) (bruijn name 6 0))
V_CALL(VGetArg(upenv, 30-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k167, env)}),
      VEncodePointer(&_V10string_D1799.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 29 37) (close _V0print__fun__case_k166) (##string ##string.1800) (bruijn fun 6 1))
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k166, env)}),
      VEncodePointer(&_V10string_D1800.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 28 37) (close _V0print__fun__case_k165) (##string ##string.1801) (bruijn name 4 0))
V_CALL(VGetArg(upenv, 28-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k165, env)}),
      VEncodePointer(&_V10string_D1801.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
 }
}
static void _V0print__fun__case_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k222, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.528 1 0) (##inline ##sys.cons (bruijn ##x.529 0 0) (##inline ##sys.cons (quote #f) (##inline ##sys.cons (bruijn e 1 2) (quote ())))))
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
        _var0,
        VInlineCons(
        VEncodeBool(false),
        VInlineCons(
        upenv->vars[2],
        VNULL))));
 }
}
static void _V0print__fun__case_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0print__fun__case_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_lambda43, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn sprintf 28 33) (close _V0print__fun__case_k222) (##string ##string.1802) (bruijn i 0 1) (bruijn name 4 0))
V_CALL(VGetArg(upenv, 28-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k222, env)}),
      VEncodePointer(&_V10string_D1802.sym, VPOINTER_OTHER),
      _var1,
      upenv->up->up->up->vars[0]);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 27 32) (close _V0print__fun__case_k164) (close _V0print__fun__case_lambda43) (bruijn ##x.532 0 0) (bruijn cases 2 0))
V_CALL(VGetArg(upenv, 27-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k164, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda43, env)}),
      _var0,
      upenv->up->vars[0]);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iota 26 39) (close _V0print__fun__case_k163) (bruijn ##x.533 0 0))
V_CALL(VGetArg(upenv, 26-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k163, env)}),
      _var0);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 25 38) (close _V0print__fun__case_k162) (bruijn cases 0 0))
V_CALL(VGetArg(upenv, 25-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k162, env)}),
      _var0);
 }
}
static void _V0print__fun__case_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__case_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__case_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cddr 24 31) (close _V0print__fun__case_k161) (bruijn fun 1 1))
V_CALL(VGetArg(upenv, 24-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k161, env)}),
      upenv->vars[1]);
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
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 23 30) (close _V0print__fun__case_k160) (bruijn fun 0 1))
V_CALL(VGetArg(upenv, 23-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_k160, env)}),
      _var1);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k87) (bruijn print-fun-case 12 13) (close _V0print__fun__case_lambda27))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k87, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__case_lambda27, env)})
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
  // (if (bruijn needs-used? 4 6) ((bruijn printf 26 37) (bruijn ##k.585 0 0) (##string ##string.1803)) ((bruijn ##k.585 0 0) #f))
if(VDecodeBool(
upenv->up->up->up->vars[6])) {
V_CALL(VGetArg(upenv, 26-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1803.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__single_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k229, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 7 4) ((bruijn printf 29 37) (bruijn ##k.583 0 0) (##string ##string.1804)) ((bruijn ##k.583 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 7-1, 4))) {
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1804.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__single_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k233, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 32 37) (bruijn ##k.581 1 0) (##string ##string.1805))
V_CALL(VGetArg(upenv, 32-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1805.sym, VPOINTER_OTHER));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn debug? 22 1) ((bruijn printf 31 37) (close _V0print__fun__single_k233) (##string ##string.1806) (bruijn name 9 1)) ((bruijn ##k.581 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 22-1, 1))) {
V_CALL(VGetArg(upenv, 31-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k233, env)}),
      VEncodePointer(&_V10string_D1806.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__single_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k239, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 36 37) (bruijn ##k.572 4 0) (##string ##string.1807))
V_CALL(VGetArg(upenv, 36-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1807.sym, VPOINTER_OTHER));
 }
}
static void _V0print__fun__single_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 35 37) (close _V0print__fun__single_k239) (##string ##string.1808))
V_CALL(VGetArg(upenv, 35-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k239, env)}),
      VEncodePointer(&_V10string_D1808.sym, VPOINTER_OTHER));
 }
}
static void _V0print__fun__single_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 34 37) (close _V0print__fun__single_k238) (##string ##string.1809) (bruijn num 12 3))
V_CALL(VGetArg(upenv, 34-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k238, env)}),
      VEncodePointer(&_V10string_D1809.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 3));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 33 37) (close _V0print__fun__single_k237) (##string ##string.1810) (bruijn name 11 1))
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k237, env)}),
      VEncodePointer(&_V10string_D1810.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V0print__fun__single_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k243, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 36 37) (bruijn ##k.572 4 0) (##string ##string.1807))
V_CALL(VGetArg(upenv, 36-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1807.sym, VPOINTER_OTHER));
 }
}
static void _V0print__fun__single_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 35 37) (close _V0print__fun__single_k243) (##string ##string.1808))
V_CALL(VGetArg(upenv, 35-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k243, env)}),
      VEncodePointer(&_V10string_D1808.sym, VPOINTER_OTHER));
 }
}
static void _V0print__fun__single_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 34 37) (close _V0print__fun__single_k242) (##string ##string.1812) (bruijn num 12 3))
V_CALL(VGetArg(upenv, 34-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k242, env)}),
      VEncodePointer(&_V10string_D1812.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 3));
 }
}
static void _V0print__fun__single_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 33 37) (close _V0print__fun__single_k241) (##string ##string.1810) (bruijn name 11 1))
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k241, env)}),
      VEncodePointer(&_V10string_D1810.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 1));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn check-args? 10 2) (if (bruijn variadic? 10 4) ((bruijn printf 32 37) (close _V0print__fun__single_k236) (##string ##string.1811) (bruijn num 10 3)) ((bruijn printf 32 37) (close _V0print__fun__single_k240) (##string ##string.1813) (bruijn num 10 3))) ((bruijn ##k.572 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 10-1, 2))) {
if(VDecodeBool(
VGetArg(upenv, 10-1, 4))) {
V_CALL(VGetArg(upenv, 32-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k236, env)}),
      VEncodePointer(&_V10string_D1811.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 3));
} else {
V_CALL(VGetArg(upenv, 32-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k240, env)}),
      VEncodePointer(&_V10string_D1813.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 3));
}
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__single_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k248, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 36 37) (bruijn ##k.568 3 0) (##string ##string.1814) (bruijn num 14 3) (bruijn ##x.570 0 0))
V_CALL(VGetArg(upenv, 36-1, 37), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1814.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 3),
      _var0);
 }
}
static void _V0print__fun__single_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list-ref 35 28) (close _V0print__fun__single_k248) (bruijn args 10 0) (bruijn ##x.571 0 0))
V_CALL(VGetArg(upenv, 35-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k248, env)}),
      VGetArg(upenv, 10-1, 0),
      _var0);
 }
}
static void _V0print__fun__single_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 34 29) (close _V0print__fun__single_k247) (bruijn num 12 3) 1)
V_CALL(VGetArg(upenv, 34-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k247, env)}),
      VGetArg(upenv, 12-1, 3),
      VEncodeInt(1l));
 }
}
static void _V0print__fun__single_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn variadic? 11 4) ((bruijn printf 33 37) (close _V0print__fun__single_k246) (##string ##string.1815)) ((bruijn ##k.568 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 11-1, 4))) {
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k246, env)}),
      VEncodePointer(&_V10string_D1815.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__single_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k252, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 14 4) ((bruijn printf 36 37) (bruijn ##k.566 0 0) (##string ##string.1816)) ((bruijn printf 36 37) (bruijn ##k.566 0 0) (##string ##string.1817)))
if(VDecodeBool(
VGetArg(upenv, 14-1, 4))) {
V_CALL(VGetArg(upenv, 36-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1816.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 36-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1817.sym, VPOINTER_OTHER));
}
 }
}
static void _V0print__fun__single_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k256, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 17 4) ((bruijn + 39 27) (bruijn ##k.565 0 0) (bruijn num 17 3) 1) ((bruijn ##k.565 0 0) (bruijn num 17 3)))
if(VDecodeBool(
VGetArg(upenv, 17-1, 4))) {
V_CALL(VGetArg(upenv, 39-1, 27), runtime,
      _var0,
      VGetArg(upenv, 17-1, 3),
      VEncodeInt(1l));
} else {
V_CALL(_var0, runtime,
      VGetArg(upenv, 17-1, 3));
}
 }
}
static void _V0print__fun__single_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k260, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 20 4) ((bruijn + 42 27) (bruijn ##k.563 0 0) (bruijn num 20 3) 1) ((bruijn ##k.563 0 0) (bruijn num 20 3)))
if(VDecodeBool(
VGetArg(upenv, 20-1, 4))) {
V_CALL(VGetArg(upenv, 42-1, 27), runtime,
      _var0,
      VGetArg(upenv, 20-1, 3),
      VEncodeInt(1l));
} else {
V_CALL(_var0, runtime,
      VGetArg(upenv, 20-1, 3));
}
 }
}
static void _V0print__fun__single_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k264, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 23 4) ((bruijn printf 45 37) (bruijn ##k.556 7 0) (##string ##string.1818) (bruijn num 23 3)) ((bruijn ##k.556 7 0) #f))
if(VDecodeBool(
VGetArg(upenv, 23-1, 4))) {
V_CALL(VGetArg(upenv, 45-1, 37), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1818.sym, VPOINTER_OTHER),
      VGetArg(upenv, 23-1, 3));
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__single_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0print__fun__single_lambda46, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda46, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn printf 45 37) (bruijn ##k.561 0 0) (##string ##string.1819) (bruijn i 0 1) (bruijn arg 0 2))
V_CALL(VGetArg(upenv, 45-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1819.sym, VPOINTER_OTHER),
      _var1,
      _var2);
 }
}
static void _V0print__fun__single_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 44 42) (close _V0print__fun__single_k264) (close _V0print__fun__single_lambda46) (bruijn ##x.562 0 0) (bruijn args 19 0))
V_CALL(VGetArg(upenv, 44-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k264, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_lambda46, env)}),
      _var0,
      VGetArg(upenv, 19-1, 0));
 }
}
static void _V0print__fun__single_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iota 43 39) (close _V0print__fun__single_k263) (bruijn num 21 3))
V_CALL(VGetArg(upenv, 43-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k263, env)}),
      VGetArg(upenv, 21-1, 3));
 }
}
static void _V0print__fun__single_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 42 37) (close _V0print__fun__single_k262) (##string ##string.1820) (bruijn nargs 0 0) (bruijn nargs 0 0))
V_CALL(VGetArg(upenv, 42-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k262, env)}),
      VEncodePointer(&_V10string_D1820.sym, VPOINTER_OTHER),
      _var0,
      _var0);
 }
}
static void _V0print__fun__single_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k260) (close _V0print__fun__single_k261))
V_CALL_FUNC(_V0print__fun__single_k260, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k261, env)}));
 }
}
static void _V0print__fun__single_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 40 37) (close _V0print__fun__single_k259) (##string ##string.1821))
V_CALL(VGetArg(upenv, 40-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k259, env)}),
      VEncodePointer(&_V10string_D1821.sym, VPOINTER_OTHER));
 }
}
static void _V0print__fun__single_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 39 37) (close _V0print__fun__single_k258) (##string ##string.1822) (bruijn ##x.564 0 0))
V_CALL(VGetArg(upenv, 39-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k258, env)}),
      VEncodePointer(&_V10string_D1822.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0print__fun__single_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.555 1 0) ((close _V0print__fun__single_k256) (close _V0print__fun__single_k257)) ((bruijn ##k.556 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL_FUNC(_V0print__fun__single_k256, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k257, env)}));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__fun__single_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k267, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 18 4) ((bruijn append 40 26) (bruijn ##k.553 0 0) (bruijn args 15 0) (##inline ##sys.qcons (quote (##string ##string.1823)) (quote ()))) ((bruijn ##k.553 0 0) (bruijn args 15 0)))
if(VDecodeBool(
VGetArg(upenv, 18-1, 4))) {
V_CALL(VGetArg(upenv, 40-1, 26), runtime,
      _var0,
      VGetArg(upenv, 15-1, 0),
      VInlineCons(
        VEncodePointer(&_V10string_D1823.sym, VPOINTER_OTHER),
        VNULL));
} else {
V_CALL(_var0, runtime,
      VGetArg(upenv, 15-1, 0));
}
 }
}
static void _V0print__fun__single_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k270, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 42 37) (bruijn ##k.535 19 0) (##string ##string.1795))
V_CALL(VGetArg(upenv, 42-1, 37), runtime,
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V10string_D1795.sym, VPOINTER_OTHER));
 }
}
static void _V0print__fun__single_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 41 37) (close _V0print__fun__single_k270) (##string ##string.1807))
V_CALL(VGetArg(upenv, 41-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k270, env)}),
      VEncodePointer(&_V10string_D1807.sym, VPOINTER_OTHER));
 }
}
static void _V0print__fun__single_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 30 11) (close _V0print__fun__single_k269) (bruijn body 18 5) (bruijn ##x.552 0 0))
V_CALL(VGetArg(upenv, 30-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k269, env)}),
      VGetArg(upenv, 18-1, 5),
      _var0);
 }
}
static void _V0print__fun__single_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k267) (close _V0print__fun__single_k268))
V_CALL_FUNC(_V0print__fun__single_k267, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k268, env)}));
 }
}
static void _V0print__fun__single_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 38 37) (close _V0print__fun__single_k266) (##string ##string.1824) (bruijn body 16 5))
V_CALL(VGetArg(upenv, 38-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k266, env)}),
      VEncodePointer(&_V10string_D1824.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 5));
 }
}
static void _V0print__fun__single_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k255) (close _V0print__fun__single_k265))
V_CALL_FUNC(_V0print__fun__single_k255, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k265, env)}));
 }
}
static void _V0print__fun__single_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn closes? 26 10) (close _V0print__fun__single_k254) (bruijn body 14 5))
V_CALL(VGetArg(upenv, 26-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k254, env)}),
      VGetArg(upenv, 14-1, 5));
 }
}
static void _V0print__fun__single_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k252) (close _V0print__fun__single_k253))
V_CALL_FUNC(_V0print__fun__single_k252, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k253, env)}));
 }
}
static void _V0print__fun__single_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__single_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 35 37) (bruijn ##k.567 0 0) (##string ##string.1825) (bruijn arg 0 1))
V_CALL(VGetArg(upenv, 35-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1825.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0print__fun__single_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 34 42) (close _V0print__fun__single_k251) (close _V0print__fun__single_lambda47) (bruijn args 9 0))
V_CALL(VGetArg(upenv, 34-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k251, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_lambda47, env)}),
      VGetArg(upenv, 9-1, 0));
 }
}
static void _V0print__fun__single_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 33 37) (close _V0print__fun__single_k250) (##string ##string.1826) (bruijn name 11 1) (bruijn num 11 3))
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k250, env)}),
      VEncodePointer(&_V10string_D1826.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 1),
      VGetArg(upenv, 11-1, 3));
 }
}
static void _V0print__fun__single_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k245) (close _V0print__fun__single_k249))
V_CALL_FUNC(_V0print__fun__single_k245, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k249, env)}));
 }
}
static void _V0print__fun__single_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k235) (close _V0print__fun__single_k244))
V_CALL_FUNC(_V0print__fun__single_k235, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k244, env)}));
 }
}
static void _V0print__fun__single_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k232) (close _V0print__fun__single_k234))
V_CALL_FUNC(_V0print__fun__single_k232, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k234, env)}));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 29 37) (close _V0print__fun__single_k231) (##string ##string.1817))
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k231, env)}),
      VEncodePointer(&_V10string_D1817.sym, VPOINTER_OTHER));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k229) (close _V0print__fun__single_k230))
V_CALL_FUNC(_V0print__fun__single_k229, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k230, env)}));
 }
}
static void _V0print__fun__single_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__fun__single_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 28 37) (bruijn ##k.584 0 0) (##string ##string.1827) (bruijn arg 0 1))
V_CALL(VGetArg(upenv, 28-1, 37), runtime,
      _var0,
      VEncodePointer(&_V10string_D1827.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0print__fun__single_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 27 42) (close _V0print__fun__single_k228) (close _V0print__fun__single_lambda48) (bruijn args 2 0))
V_CALL(VGetArg(upenv, 27-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k228, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_lambda48, env)}),
      upenv->up->vars[0]);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 26 37) (close _V0print__fun__single_k227) (##string ##string.1828) (bruijn name 4 1))
V_CALL(VGetArg(upenv, 26-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k227, env)}),
      VEncodePointer(&_V10string_D1828.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__fun__single_k225) (close _V0print__fun__single_k226))
V_CALL_FUNC(_V0print__fun__single_k225, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k226, env)}));
 }
}
static void _V0print__fun__single_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__fun__single_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn gen-args 1 1) (close _V0print__fun__single_k224) (bruijn num 2 3))
V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k224, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0gen__args_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__args_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__args_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 26 33) (bruijn ##k.587 0 0) (##string ##string.1829) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 26-1, 33), runtime,
      _var0,
      VEncodePointer(&_V10string_D1829.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0gen__args_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gen__args_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__args_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 25 32) (bruijn ##k.586 1 0) (close _V0gen__args_lambda50) (bruijn ##x.588 0 0))
V_CALL(VGetArg(upenv, 25-1, 32), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__args_lambda50, env)}),
      _var0);
 }
}
static void _V0gen__args_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0gen__args_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gen__args_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn iota 24 39) (close _V0gen__args_k271) (bruijn num 0 1))
V_CALL(VGetArg(upenv, 24-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__args_k271, env)}),
      _var1);
 }
}
static void _V0print__fun__single_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0print__fun__single_k223) (bruijn gen-args 0 1) (close _V0gen__args_lambda49))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_k223, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gen__args_lambda49, env)})
    );
 }
}
static void _V0print__fun__single_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 if(argc != 7) {
  VError("Not enough arguments to _V0print__fun__single_lambda44, got ~D~N"
  "-- expected 7~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__fun__single_lambda44, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
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
  // ((close _V0print__fun__single_lambda45) (bruijn ##k.534 0 0) #f)
V_CALL_FUNC(_V0print__fun__single_lambda45, env, runtime,
      _var0,
      VEncodeBool(false));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k86) (bruijn print-fun-single 11 12) (close _V0print__fun__single_lambda44))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k86, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__fun__single_lambda44, env)})
    );
 }
}
static void _V0print__expr_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k279, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 5 1) (bruijn ##k.758 3 0) (bruijn ##x.764 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.166 0 0)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.166 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.166 0 0))) ((bruijn display 32 23) (close _V0print__expr_k279) (##string ##string.1830)) ((bruijn ##k.758 2 0) #f)) ((bruijn ##k.758 2 0) #f)) ((bruijn ##k.758 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCar(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 32-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k279, env)}),
      VEncodePointer(&_V10string_D1830.sym, VPOINTER_OTHER));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
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
static void _V0print__expr_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.760 0 0) ((close _V0print__expr_k278) (##inline ##sys.cdr (bruijn ##expr.165 1 1))) ((bruijn ##k.758 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k278, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.165 0 1)) ((bruijn equal? 30 35) (close _V0print__expr_k277) (quote quote) (##inline ##sys.car (bruijn ##expr.165 0 1))) ((bruijn ##k.758 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 30-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k277, env)}),
      _V0quote,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k286, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 9 1) (bruijn ##k.744 6 0) (bruijn ##x.753 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.170 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.170 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.168 3 0))) ((bruijn print-literal-string 26 5) (close _V0print__expr_k286) (##inline ##sys.car (bruijn ##expr.170 0 0))) ((bruijn ##k.744 5 0) #f)) ((bruijn ##k.744 5 0) #f)) ((bruijn ##k.744 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->up->vars[0])))) {
V_CALL(VGetArg(upenv, 26-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k286, env)}),
      VInlineCar(
        _var0));
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
static void _V0print__expr_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.749 0 0) ((close _V0print__expr_k285) (##inline ##sys.cdr (bruijn ##expr.169 1 0))) ((bruijn ##k.744 4 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k285, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.169 0 0)) ((bruijn equal? 34 35) (close _V0print__expr_k284) (quote ##string) (##inline ##sys.car (bruijn ##expr.169 0 0))) ((bruijn ##k.744 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 34-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k284, env)}),
      _V10string,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.168 0 0)) ((close _V0print__expr_k283) (##inline ##sys.car (bruijn ##expr.168 0 0))) ((bruijn ##k.744 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__expr_k283, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.746 0 0) ((close _V0print__expr_k282) (##inline ##sys.cdr (bruijn ##expr.167 1 1))) ((bruijn ##k.744 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k282, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda56, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.167 0 1)) ((bruijn equal? 31 35) (close _V0print__expr_k281) (quote quote) (##inline ##sys.car (bruijn ##expr.167 0 1))) ((bruijn ##k.744 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 31-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k281, env)}),
      _V0quote,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
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
  // ((bruijn ##kk.163 7 1) (bruijn ##k.736 3 0) (bruijn ##x.741 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.172 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.172 0 0))) ((bruijn print-literal 24 7) (close _V0print__expr_k290) (##inline ##sys.car (bruijn ##expr.172 0 0))) ((bruijn ##k.736 2 0) #f)) ((bruijn ##k.736 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 24-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k290, env)}),
      VInlineCar(
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
static void _V0print__expr_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.738 0 0) ((close _V0print__expr_k289) (##inline ##sys.cdr (bruijn ##expr.171 1 1))) ((bruijn ##k.736 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k289, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.171 0 1)) ((bruijn equal? 32 35) (close _V0print__expr_k288) (quote quote) (##inline ##sys.car (bruijn ##expr.171 0 1))) ((bruijn ##k.736 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 32-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k288, env)}),
      _V0quote,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
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
  // ((bruijn ##kk.163 8 1) (bruijn ##k.728 3 0) (bruijn ##x.733 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.174 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.174 0 0))) ((bruijn printf 35 37) (close _V0print__expr_k294) (##string ##string.1831) (##inline ##sys.car (bruijn ##expr.174 0 0))) ((bruijn ##k.728 2 0) #f)) ((bruijn ##k.728 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 35-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k294, env)}),
      VEncodePointer(&_V10string_D1831.sym, VPOINTER_OTHER),
      VInlineCar(
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
static void _V0print__expr_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.730 0 0) ((close _V0print__expr_k293) (##inline ##sys.cdr (bruijn ##expr.173 1 1))) ((bruijn ##k.728 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k293, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.173 0 1)) ((bruijn equal? 33 35) (close _V0print__expr_k292) (quote close) (##inline ##sys.car (bruijn ##expr.173 0 1))) ((bruijn ##k.728 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 33-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k292, env)}),
      _V0close,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
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
  // ((bruijn display 43 23) (bruijn ##k.720 1 0) (bruijn ##x.721 0 0))
V_CALL(VGetArg(upenv, 43-1, 23), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0print__expr_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k308, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.725 0 0) ((bruijn printf 46 37) (bruijn ##k.720 4 0) (##string ##string.1835) (bruijn right 6 0)) ((bruijn printf 46 37) (bruijn ##k.720 4 0) (##string ##string.1836) (bruijn up 8 0) (bruijn right 6 0)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 46-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1835.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
V_CALL(VGetArg(upenv, 46-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1836.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 6-1, 0));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.724 0 0) ((bruijn printf 45 37) (bruijn ##k.720 3 0) (##string ##string.1834) (bruijn right 5 0)) ((bruijn = 45 22) (close _V0print__expr_k308) (bruijn up 7 0) 4))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 45-1, 37), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1834.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
V_CALL(VGetArg(upenv, 45-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k308, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeInt(4l));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.723 0 0) ((bruijn printf 44 37) (bruijn ##k.720 2 0) (##string ##string.1833) (bruijn right 4 0)) ((bruijn = 44 22) (close _V0print__expr_k307) (bruijn up 6 0) 3))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 44-1, 37), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1833.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 44-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k307, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(3l));
}
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.722 0 0) ((bruijn printf 43 37) (bruijn ##k.720 1 0) (##string ##string.1832) (bruijn right 3 0)) ((bruijn = 43 22) (close _V0print__expr_k306) (bruijn up 5 0) 2))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 43-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1832.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 43-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k306, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(2l));
}
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.719 1 0) ((bruijn list-ref 42 28) (close _V0print__expr_k304) (bruijn args 21 2) (bruijn right 2 0)) ((bruijn = 42 22) (close _V0print__expr_k305) (bruijn up 4 0) 1))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 42-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k304, env)}),
      VGetArg(upenv, 21-1, 2),
      upenv->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 42-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k305, env)}),
      upenv->up->up->up->vars[0],
      VEncodeInt(1l));
}
 }
}
static void _V0print__expr_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k309, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 14 1) (bruijn ##k.711 8 0) (bruijn ##x.718 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_k303) (close _V0print__expr_k309))
V_CALL_FUNC(_V0print__expr_k303, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k309, env)}));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.178 1 0))) ((bruijn = 40 22) (close _V0print__expr_k302) (bruijn up 2 0) 0) ((bruijn ##k.711 6 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 40-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k302, env)}),
      upenv->up->vars[0],
      VEncodeInt(0l));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.178 0 0)) ((close _V0print__expr_k301) (##inline ##sys.car (bruijn ##expr.178 0 0))) ((bruijn ##k.711 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__expr_k301, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_k300) (##inline ##sys.cdr (bruijn ##expr.177 1 0)))
V_CALL_FUNC(_V0print__expr_k300, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.177 0 0)) ((close _V0print__expr_k299) (##inline ##sys.car (bruijn ##expr.177 0 0))) ((bruijn ##k.711 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__expr_k299, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.176 0 0)) ((close _V0print__expr_k298) (##inline ##sys.cdr (bruijn ##expr.176 0 0))) ((bruijn ##k.711 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__expr_k298, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.713 0 0) ((close _V0print__expr_k297) (##inline ##sys.cdr (bruijn ##expr.175 1 1))) ((bruijn ##k.711 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k297, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda59, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.175 0 1)) ((bruijn equal? 34 35) (close _V0print__expr_k296) (quote bruijn) (##inline ##sys.car (bruijn ##expr.175 0 1))) ((bruijn ##k.711 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 34-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k296, env)}),
      _V0bruijn,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k321, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 18 1) (bruijn ##k.695 11 0) (bruijn ##x.702 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0);
 }
}
static void _V0print__expr_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 45 40) (close _V0print__expr_k321) (##string ##string.1772))
V_CALL(VGetArg(upenv, 45-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k321, env)}),
      VEncodePointer(&_V10string_D1772.sym, VPOINTER_OTHER));
 }
}
static void _V0print__expr_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 34 11) (close _V0print__expr_k320) (##inline ##sys.car (bruijn ##expr.182 5 0)) (bruijn args 23 2))
V_CALL(VGetArg(upenv, 34-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k320, env)}),
      VInlineCar(
        VGetArg(upenv, 5-1, 0)),
      VGetArg(upenv, 23-1, 2));
 }
}
static void _V0print__expr_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 43 40) (close _V0print__expr_k319) (##string ##string.1837))
V_CALL(VGetArg(upenv, 43-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k319, env)}),
      VEncodePointer(&_V10string_D1837.sym, VPOINTER_OTHER));
 }
}
static void _V0print__expr_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 32 11) (close _V0print__expr_k318) (##inline ##sys.car (bruijn ##expr.181 4 0)) (bruijn args 21 2))
V_CALL(VGetArg(upenv, 32-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k318, env)}),
      VInlineCar(
        upenv->up->up->up->vars[0]),
      VGetArg(upenv, 21-1, 2));
 }
}
static void _V0print__expr_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 41 40) (close _V0print__expr_k317) (##string ##string.1838))
V_CALL(VGetArg(upenv, 41-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k317, env)}),
      VEncodePointer(&_V10string_D1838.sym, VPOINTER_OTHER));
 }
}
static void _V0print__expr_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 30 11) (close _V0print__expr_k316) (##inline ##sys.car (bruijn ##expr.180 3 0)) (bruijn args 19 2))
V_CALL(VGetArg(upenv, 30-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k316, env)}),
      VInlineCar(
        upenv->up->up->vars[0]),
      VGetArg(upenv, 19-1, 2));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.182 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.182 0 0))) ((bruijn displayln 39 40) (close _V0print__expr_k315) (##string ##string.1839)) ((bruijn ##k.695 4 0) #f)) ((bruijn ##k.695 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 39-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k315, env)}),
      VEncodePointer(&_V10string_D1839.sym, VPOINTER_OTHER));
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
static void _V0print__expr_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.181 0 0)) ((close _V0print__expr_k314) (##inline ##sys.cdr (bruijn ##expr.181 0 0))) ((bruijn ##k.695 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__expr_k314, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.180 0 0)) ((close _V0print__expr_k313) (##inline ##sys.cdr (bruijn ##expr.180 0 0))) ((bruijn ##k.695 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__expr_k313, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.697 0 0) ((close _V0print__expr_k312) (##inline ##sys.cdr (bruijn ##expr.179 1 1))) ((bruijn ##k.695 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k312, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.179 0 1)) ((bruijn equal? 35 35) (close _V0print__expr_k311) (quote if) (##inline ##sys.car (bruijn ##expr.179 0 1))) ((bruijn ##k.695 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 35-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k311, env)}),
      _V0if,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
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
  // ((bruijn ##kk.163 13 1) (bruijn ##k.685 5 0) (bruijn ##x.692 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0print__expr_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.186 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.186 0 0))) ((bruijn print-set 18 4) (close _V0print__expr_k327) (##inline ##sys.car (bruijn ##expr.184 2 0)) (##inline ##sys.car (bruijn ##expr.185 1 0)) (##inline ##sys.car (bruijn ##expr.186 0 0)) #f) ((bruijn ##k.685 4 0) #f)) ((bruijn ##k.685 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 18-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k327, env)}),
      VInlineCar(
        upenv->up->vars[0]),
      VInlineCar(
        upenv->vars[0]),
      VInlineCar(
        _var0),
      VEncodeBool(false));
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
static void _V0print__expr_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.185 0 0)) ((close _V0print__expr_k326) (##inline ##sys.cdr (bruijn ##expr.185 0 0))) ((bruijn ##k.685 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__expr_k326, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 0)) ((close _V0print__expr_k325) (##inline ##sys.cdr (bruijn ##expr.184 0 0))) ((bruijn ##k.685 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__expr_k325, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.687 0 0) ((close _V0print__expr_k324) (##inline ##sys.cdr (bruijn ##expr.183 1 1))) ((bruijn ##k.685 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k324, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.183 0 1)) ((bruijn equal? 36 35) (close _V0print__expr_k323) (quote set!) (##inline ##sys.car (bruijn ##expr.183 0 1))) ((bruijn ##k.685 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 36-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k323, env)}),
      _V0set_B,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k333, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 14 1) (bruijn ##k.675 5 0) (bruijn ##x.682 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0print__expr_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.190 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.190 0 0))) ((bruijn print-define-global 19 3) (close _V0print__expr_k333) (##inline ##sys.car (bruijn ##expr.188 2 0)) (##inline ##sys.car (bruijn ##expr.189 1 0)) (##inline ##sys.car (bruijn ##expr.190 0 0)) #f) ((bruijn ##k.675 4 0) #f)) ((bruijn ##k.675 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 19-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k333, env)}),
      VInlineCar(
        upenv->up->vars[0]),
      VInlineCar(
        upenv->vars[0]),
      VInlineCar(
        _var0),
      VEncodeBool(false));
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
static void _V0print__expr_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.189 0 0)) ((close _V0print__expr_k332) (##inline ##sys.cdr (bruijn ##expr.189 0 0))) ((bruijn ##k.675 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__expr_k332, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.188 0 0)) ((close _V0print__expr_k331) (##inline ##sys.cdr (bruijn ##expr.188 0 0))) ((bruijn ##k.675 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__expr_k331, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.677 0 0) ((close _V0print__expr_k330) (##inline ##sys.cdr (bruijn ##expr.187 1 1))) ((bruijn ##k.675 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k330, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda62, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.187 0 1)) ((bruijn equal? 37 35) (close _V0print__expr_k329) (quote define) (##inline ##sys.car (bruijn ##expr.187 0 1))) ((bruijn ##k.675 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 37-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k329, env)}),
      _V0define,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k337, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 13 1) (bruijn ##k.669 3 0) (bruijn ##x.673 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0print__expr_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.192 0 0)) ((bruijn print-inline 18 5) (close _V0print__expr_k337) (##inline ##sys.car (bruijn ##expr.192 0 0)) (##inline ##sys.cdr (bruijn ##expr.192 0 0))) ((bruijn ##k.669 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k337, env)}),
      VInlineCar(
        _var0),
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.671 0 0) ((close _V0print__expr_k336) (##inline ##sys.cdr (bruijn ##expr.191 1 1))) ((bruijn ##k.669 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k336, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda63, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.191 0 1)) ((bruijn equal? 38 35) (close _V0print__expr_k335) (quote ##inline) (##inline ##sys.car (bruijn ##expr.191 0 1))) ((bruijn ##k.669 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 38-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k335, env)}),
      _V10inline,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k341, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 14 1) (bruijn ##k.661 3 0) (bruijn ##x.666 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0print__expr_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.194 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.194 0 0))) ((bruijn print-literal-string 31 5) (close _V0print__expr_k341) (##inline ##sys.car (bruijn ##expr.194 0 0))) ((bruijn ##k.661 2 0) #f)) ((bruijn ##k.661 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 31-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k341, env)}),
      VInlineCar(
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
static void _V0print__expr_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.663 0 0) ((close _V0print__expr_k340) (##inline ##sys.cdr (bruijn ##expr.193 1 1))) ((bruijn ##k.661 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k340, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda64, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.193 0 1)) ((bruijn equal? 39 35) (close _V0print__expr_k339) (quote ##string) (##inline ##sys.car (bruijn ##expr.193 0 1))) ((bruijn ##k.661 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 39-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k339, env)}),
      _V10string,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k345, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 15 1) (bruijn ##k.653 3 0) (bruijn ##x.658 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0print__expr_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.196 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.196 0 0))) ((bruijn print-intrinsic 32 6) (close _V0print__expr_k345) (##inline ##sys.car (bruijn ##expr.196 0 0))) ((bruijn ##k.653 2 0) #f)) ((bruijn ##k.653 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 32-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k345, env)}),
      VInlineCar(
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
static void _V0print__expr_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.655 0 0) ((close _V0print__expr_k344) (##inline ##sys.cdr (bruijn ##expr.195 1 1))) ((bruijn ##k.653 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k344, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda65, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.195 0 1)) ((bruijn equal? 40 35) (close _V0print__expr_k343) (quote ##intrinsic) (##inline ##sys.car (bruijn ##expr.195 0 1))) ((bruijn ##k.653 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 40-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k343, env)}),
      _V10intrinsic,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k349, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 16 1) (bruijn ##k.645 3 0) (bruijn ##x.650 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0print__expr_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.198 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.198 0 0))) ((bruijn printf 43 37) (close _V0print__expr_k349) (##string ##string.1840) (##inline ##sys.car (bruijn ##expr.198 0 0))) ((bruijn ##k.645 2 0) #f)) ((bruijn ##k.645 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 43-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k349, env)}),
      VEncodePointer(&_V10string_D1840.sym, VPOINTER_OTHER),
      VInlineCar(
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
static void _V0print__expr_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.647 0 0) ((close _V0print__expr_k348) (##inline ##sys.cdr (bruijn ##expr.197 1 1))) ((bruijn ##k.645 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__expr_k348, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda66, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.197 0 1)) ((bruijn equal? 41 35) (close _V0print__expr_k347) (quote ##foreign.function) (##inline ##sys.car (bruijn ##expr.197 0 1))) ((bruijn ##k.645 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 41-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k347, env)}),
      _V10foreign_Dfunction,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k352, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.621 1 0) (##inline ##sys.cdr (bruijn ##expr.199 5 1)) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 5-1, 1)),
      VNULL);
 }
}
static void _V0loop_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k354, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.202 4 1) (bruijn ##k.632 1 0) (bruijn ##expr.204 2 1) (bruijn ##x.633 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.204 1 1))) ((bruijn reverse 48 46) (close _V0loop_k354) (bruijn ##xs.201 1 2)) ((bruijn ##k.632 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 48-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k354, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k357, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.202 7 1) (bruijn ##k.626 2 0) (bruijn ##expr.204 5 1) (bruijn ##x.628 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn reverse 51 46) (close _V0loop_k357) (bruijn ##xs.201 4 2))
V_CALL(VGetArg(upenv, 51-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k357, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
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
  // ((bruijn ##kk.203 0 1) (close _V0loop_k356) (##inline ##sys.cdr (bruijn ##expr.204 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.204 3 1)) (bruijn ##xs.201 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k356, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 49 36) (bruijn ##k.625 0 0) (close _V0loop_lambda73))
V_CALL(VGetArg(upenv, 49-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda73, env)}));
 }
}
static void _V0loop_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn call-with-values 48 21) (bruijn ##k.623 1 0) (close _V0loop_lambda72) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 48-1, 21), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda72, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // ((close _V0loop_k353) (close _V0loop_k355))
V_CALL_FUNC(_V0loop_k353, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k355, env)}));
 }
}
static void _V0print__expr_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0print__expr_k352) (bruijn loop 0 1) (close _V0loop_lambda71))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k352, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda71, env)})
    );
 }
}
static void _V0print__expr_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__expr_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda69, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__expr_lambda70) (bruijn ##k.620 0 0) #f)
V_CALL_FUNC(_V0print__expr_lambda70, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
static void _V0print__expr_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 44 36) (bruijn ##k.619 0 0) (close _V0print__expr_lambda69))
V_CALL(VGetArg(upenv, 44-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda69, env)}));
 }
}
static void _V0print__expr_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k362, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 49 18) (bruijn ##k.643 1 0) (bruijn ##x.644 0 0) (quote ##intrinsic))
V_CALL(VGetArg(upenv, 49-1, 18), runtime,
      upenv->vars[0],
      _var0,
      _V10intrinsic);
 }
}
static void _V0print__expr_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.642 1 0) ((bruijn car 48 30) (close _V0print__expr_k362) (bruijn f 5 0)) ((bruijn ##k.643 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 48-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k362, env)}),
      VGetArg(upenv, 5-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k364, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-builtin-apply 27 1) (bruijn ##k.639 3 0) (bruijn ##x.641 0 0) (bruijn xs 5 2) #f)
V_CALL(VGetArg(upenv, 27-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 2),
      VEncodeBool(false));
 }
}
static void _V0print__expr_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.640 0 0) ((bruijn cadr 48 19) (close _V0print__expr_k364) (bruijn f 5 0)) ((bruijn print-closure-apply 26 2) (bruijn ##k.639 2 0) (bruijn f 5 0) (bruijn xs 4 2) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 48-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k364, env)}),
      VGetArg(upenv, 5-1, 0));
} else {
V_CALL(VGetArg(upenv, 26-1, 2), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[2],
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_k361) (close _V0print__expr_k363))
V_CALL_FUNC(_V0print__expr_k361, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k363, env)}));
 }
}
static void _V0print__expr_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.638 1 0) ((bruijn print-builtin-apply 24 1) (bruijn ##k.639 0 0) (bruijn f 3 0) (bruijn xs 2 2) #f) ((bruijn pair? 46 17) (close _V0print__expr_k360) (bruijn f 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      _var0,
      upenv->up->up->vars[0],
      upenv->up->vars[2],
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 46-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k360, env)}),
      upenv->up->up->vars[0]);
}
 }
}
static void _V0print__expr_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k365, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 18 1) (bruijn ##k.635 2 0) (bruijn ##x.637 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0print__expr_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_k359) (close _V0print__expr_k365))
V_CALL_FUNC(_V0print__expr_k359, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k365, env)}));
 }
}
static void _V0print__expr_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0print__expr_lambda74, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda74, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn lookup-intrinsic2 44 20) (close _V0print__expr_k358) (bruijn f 1 0)) ((bruijn ##k.635 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 44-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k358, env)}),
      upenv->vars[0]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 43 21) (bruijn ##k.617 1 0) (close _V0print__expr_lambda68) (close _V0print__expr_lambda74))
V_CALL(VGetArg(upenv, 43-1, 21), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda68, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda74, env)}));
 }
}
static void _V0print__expr_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.199 0 1)) ((close _V0print__expr_k351) (##inline ##sys.car (bruijn ##expr.199 0 1))) ((bruijn ##k.617 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL_FUNC(_V0print__expr_k351, env, runtime,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__expr_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k368, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.615 1 0) ((bruijn print-global 35 1) (bruijn ##k.616 0 0) (bruijn x 2 1)) ((bruijn print-literal 35 7) (bruijn ##k.616 0 0) (bruijn x 2 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 35-1, 1), runtime,
      _var0,
      upenv->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 35-1, 7), runtime,
      _var0,
      upenv->up->vars[1]);
}
 }
}
static void _V0print__expr_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k369, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 17 1) (bruijn ##k.613 2 0) (bruijn ##x.614 0 0))
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0print__expr_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_k368) (close _V0print__expr_k369))
V_CALL_FUNC(_V0print__expr_k368, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k369, env)}));
 }
}
static void _V0print__expr_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda75, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 43 16) (close _V0print__expr_k367) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 43-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k367, env)}),
      _var1);
 }
}
static void _V0print__expr_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k371, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.163 16 1) (bruijn ##k.597 15 0) (bruijn ##x.612 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 15-1, 0),
      _var0);
 }
}
static void _V0print__expr_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 43 43) (close _V0print__expr_k371) (##string ##string.1841) (bruijn expr 22 1))
V_CALL(VGetArg(upenv, 43-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k371, env)}),
      VEncodePointer(&_V10string_D1841.sym, VPOINTER_OTHER),
      VGetArg(upenv, 22-1, 1));
 }
}
static void _V0print__expr_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda75) (close _V0print__expr_k370) (bruijn ##input.164 13 1))
V_CALL_FUNC(_V0print__expr_lambda75, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k370, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V0print__expr_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda67) (close _V0print__expr_k366) (bruijn ##input.164 12 1))
V_CALL_FUNC(_V0print__expr_lambda67, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k366, env)}),
      VGetArg(upenv, 12-1, 1));
 }
}
static void _V0print__expr_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda66) (close _V0print__expr_k350) (bruijn ##input.164 11 1))
V_CALL_FUNC(_V0print__expr_lambda66, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k350, env)}),
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V0print__expr_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda65) (close _V0print__expr_k346) (bruijn ##input.164 10 1))
V_CALL_FUNC(_V0print__expr_lambda65, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k346, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V0print__expr_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda64) (close _V0print__expr_k342) (bruijn ##input.164 9 1))
V_CALL_FUNC(_V0print__expr_lambda64, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k342, env)}),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V0print__expr_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda63) (close _V0print__expr_k338) (bruijn ##input.164 8 1))
V_CALL_FUNC(_V0print__expr_lambda63, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k338, env)}),
      VGetArg(upenv, 8-1, 1));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda62) (close _V0print__expr_k334) (bruijn ##input.164 7 1))
V_CALL_FUNC(_V0print__expr_lambda62, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k334, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0print__expr_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda61) (close _V0print__expr_k328) (bruijn ##input.164 6 1))
V_CALL_FUNC(_V0print__expr_lambda61, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k328, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0print__expr_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda60) (close _V0print__expr_k322) (bruijn ##input.164 5 1))
V_CALL_FUNC(_V0print__expr_lambda60, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k322, env)}),
      VGetArg(upenv, 5-1, 1));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda59) (close _V0print__expr_k310) (bruijn ##input.164 4 1))
V_CALL_FUNC(_V0print__expr_lambda59, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k310, env)}),
      upenv->up->up->up->vars[1]);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda58) (close _V0print__expr_k295) (bruijn ##input.164 3 1))
V_CALL_FUNC(_V0print__expr_lambda58, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k295, env)}),
      upenv->up->up->vars[1]);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda57) (close _V0print__expr_k291) (bruijn ##input.164 2 1))
V_CALL_FUNC(_V0print__expr_lambda57, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k291, env)}),
      upenv->up->vars[1]);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__expr_lambda56) (close _V0print__expr_k287) (bruijn ##input.164 1 1))
V_CALL_FUNC(_V0print__expr_lambda56, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k287, env)}),
      upenv->vars[1]);
 }
}
static void _V0print__expr_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__expr_lambda55) (close _V0print__expr_k280) (bruijn ##input.164 0 1))
V_CALL_FUNC(_V0print__expr_lambda55, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k280, env)}),
      _var1);
 }
}
static void _V0print__expr_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__expr_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__expr_lambda54) (bruijn ##k.596 0 0) (bruijn expr 7 1))
V_CALL_FUNC(_V0print__expr_lambda54, env, runtime,
      _var0,
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0print__expr_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 27 36) (bruijn ##k.590 5 0) (close _V0print__expr_lambda53))
V_CALL(VGetArg(upenv, 27-1, 36), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda53, env)}));
 }
}
static void _V0print__inline_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k374, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.780 1 0) ((bruijn compiler-error 30 43) (bruijn ##k.781 0 0) (##string ##string.1842) (bruijn f 3 1)) ((bruijn ##k.781 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 30-1, 43), runtime,
      _var0,
      VEncodePointer(&_V10string_D1842.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__inline_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k383, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-expr 29 11) (bruijn ##k.775 1 0) (bruijn x 1 1) (bruijn args 18 2))
V_CALL(VGetArg(upenv, 29-1, 11), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 18-1, 2));
 }
}
static void _V0print__inline_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__inline_lambda77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_lambda77, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn printf 38 37) (close _V0print__inline_k383) (##string ##string.1843))
V_CALL(VGetArg(upenv, 38-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k383, env)}),
      VEncodePointer(&_V10string_D1843.sym, VPOINTER_OTHER));
 }
}
static void _V0print__inline_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 37 42) (bruijn ##k.773 3 0) (close _V0print__inline_lambda77) (bruijn ##x.777 0 0))
V_CALL(VGetArg(upenv, 37-1, 42), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_lambda77, env)}),
      _var0);
 }
}
static void _V0print__inline_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 36 24) (close _V0print__inline_k382) (bruijn xs 9 2))
V_CALL(VGetArg(upenv, 36-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k382, env)}),
      VGetArg(upenv, 9-1, 2));
 }
}
static void _V0print__inline_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 25 11) (close _V0print__inline_k381) (bruijn ##x.778 0 0) (bruijn args 14 2))
V_CALL(VGetArg(upenv, 25-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k381, env)}),
      _var0,
      VGetArg(upenv, 14-1, 2));
 }
}
static void _V0print__inline_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.772 1 0) ((bruijn car 34 30) (close _V0print__inline_k380) (bruijn xs 7 2)) ((bruijn ##k.773 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 34-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k380, env)}),
      VGetArg(upenv, 7-1, 2));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__inline_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k384, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 34 37) (bruijn ##k.768 7 0) (##string ##string.1844))
V_CALL(VGetArg(upenv, 34-1, 37), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1844.sym, VPOINTER_OTHER));
 }
}
static void _V0print__inline_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__inline_k379) (close _V0print__inline_k384))
V_CALL_FUNC(_V0print__inline_k379, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k384, env)}));
 }
}
static void _V0print__inline_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 32 45) (close _V0print__inline_k378) (bruijn ##x.779 0 0))
V_CALL(VGetArg(upenv, 32-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k378, env)}),
      _var0);
 }
}
static void _V0print__inline_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 31 44) (close _V0print__inline_k377) (bruijn xs 4 2))
V_CALL(VGetArg(upenv, 31-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k377, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0print__inline_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 30 37) (close _V0print__inline_k376) (##string ##string.1845) (bruijn inline 2 0))
V_CALL(VGetArg(upenv, 30-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k376, env)}),
      VEncodePointer(&_V10string_D1845.sym, VPOINTER_OTHER),
      upenv->up->vars[0]);
 }
}
static void _V0print__inline_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__inline_k374) (close _V0print__inline_k375))
V_CALL_FUNC(_V0print__inline_k374, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k375, env)}));
 }
}
static void _V0print__inline_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__inline_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 28 45) (close _V0print__inline_k373) (bruijn inline 0 0))
V_CALL(VGetArg(upenv, 28-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k373, env)}),
      _var0);
 }
}
static void _V0print__inline_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0print__inline_lambda76, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__inline_lambda76, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn lookup-inline 27 25) (close _V0print__inline_k372) (bruijn f 0 1))
V_CALL(VGetArg(upenv, 27-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_k372, env)}),
      _var1);
 }
}
static void _V0print__expr_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__expr_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0print__expr_k276) (bruijn print-inline 4 5) (close _V0print__inline_lambda76))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k276, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__inline_lambda76, env)})
    );
 }
}
static void _V0print__set_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k393, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.157 11 1) (bruijn ##k.798 9 0) (bruijn ##x.805 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V0print__set_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 37 37) (close _V0print__set_k393) (##string ##string.1846))
V_CALL(VGetArg(upenv, 37-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k393, env)}),
      VEncodePointer(&_V10string_D1846.sym, VPOINTER_OTHER));
 }
}
static void _V0print__set_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 26 11) (close _V0print__set_k392) (bruijn x 10 3) (bruijn args 15 2))
V_CALL(VGetArg(upenv, 26-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k392, env)}),
      VGetArg(upenv, 10-1, 3),
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V0print__set_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 35 37) (close _V0print__set_k391) (##string ##string.1847) (##inline ##sys.car (bruijn ##expr.161 3 0)) (##inline ##sys.car (bruijn ##expr.162 2 0)))
V_CALL(VGetArg(upenv, 35-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k391, env)}),
      VEncodePointer(&_V10string_D1847.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->up->up->vars[0]),
      VInlineCar(
        upenv->up->vars[0]));
 }
}
static void _V0print__set_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 24 11) (close _V0print__set_k390) (bruijn k 8 1) (bruijn args 13 2))
V_CALL(VGetArg(upenv, 24-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k390, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 13-1, 2));
 }
}
static void _V0print__set_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.162 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.162 0 0))) ((bruijn printf 33 37) (close _V0print__set_k389) (##string ##string.1848)) ((bruijn ##k.798 4 0) #f)) ((bruijn ##k.798 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 33-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k389, env)}),
      VEncodePointer(&_V10string_D1848.sym, VPOINTER_OTHER));
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
static void _V0print__set_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.161 0 0)) ((close _V0print__set_k388) (##inline ##sys.cdr (bruijn ##expr.161 0 0))) ((bruijn ##k.798 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__set_k388, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__set_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.160 0 0)) ((close _V0print__set_k387) (##inline ##sys.cdr (bruijn ##expr.160 0 0))) ((bruijn ##k.798 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0print__set_k387, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__set_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.800 0 0) ((close _V0print__set_k386) (##inline ##sys.cdr (bruijn ##expr.159 1 1))) ((bruijn ##k.798 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__set_k386, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__set_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.159 0 1)) ((bruijn equal? 29 35) (close _V0print__set_k385) (quote bruijn) (##inline ##sys.car (bruijn ##expr.159 0 1))) ((bruijn ##k.798 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 29-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k385, env)}),
      _V0bruijn,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__set_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k402, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 38 37) (bruijn ##k.791 6 0) (##string ##string.1846))
V_CALL(VGetArg(upenv, 38-1, 37), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1846.sym, VPOINTER_OTHER));
 }
}
static void _V0print__set_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 27 11) (close _V0print__set_k402) (bruijn x 11 3) (bruijn args 16 2))
V_CALL(VGetArg(upenv, 27-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k402, env)}),
      VGetArg(upenv, 11-1, 3),
      VGetArg(upenv, 16-1, 2));
 }
}
static void _V0print__set_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 36 37) (close _V0print__set_k401) (##string ##string.1849))
V_CALL(VGetArg(upenv, 36-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k401, env)}),
      VEncodePointer(&_V10string_D1849.sym, VPOINTER_OTHER));
 }
}
static void _V0print__set_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-literal 25 7) (close _V0print__set_k400) (bruijn sym 5 1))
V_CALL(VGetArg(upenv, 25-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k400, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0print__set_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 34 37) (close _V0print__set_k399) (##string ##string.1849))
V_CALL(VGetArg(upenv, 34-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k399, env)}),
      VEncodePointer(&_V10string_D1849.sym, VPOINTER_OTHER));
 }
}
static void _V0print__set_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 23 11) (close _V0print__set_k398) (bruijn k 7 1) (bruijn args 12 2))
V_CALL(VGetArg(upenv, 23-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k398, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 12-1, 2));
 }
}
static void _V0print__set_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.790 1 0) ((bruijn printf 32 37) (close _V0print__set_k397) (##string ##string.1850)) ((bruijn compiler-error 32 43) (bruijn ##k.791 0 0) (##string ##string.1851)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 32-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k397, env)}),
      VEncodePointer(&_V10string_D1850.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 32-1, 43), runtime,
      _var0,
      VEncodePointer(&_V10string_D1851.sym, VPOINTER_OTHER));
}
 }
}
static void _V0print__set_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k403, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.157 5 1) (bruijn ##k.788 2 0) (bruijn ##x.789 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0print__set_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__set_k396) (close _V0print__set_k403))
V_CALL_FUNC(_V0print__set_k396, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k403, env)}));
 }
}
static void _V0print__set_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda82, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 30 16) (close _V0print__set_k395) (bruijn sym 0 1))
V_CALL(VGetArg(upenv, 30-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k395, env)}),
      _var1);
 }
}
static void _V0print__set_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k405, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.157 4 1) (bruijn ##k.784 3 0) (bruijn ##x.787 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0print__set_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 30 43) (close _V0print__set_k405) (##string ##string.1852) (bruijn y 4 2))
V_CALL(VGetArg(upenv, 30-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k405, env)}),
      VEncodePointer(&_V10string_D1852.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0print__set_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__set_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__set_lambda82) (close _V0print__set_k404) (bruijn ##input.158 1 1))
V_CALL_FUNC(_V0print__set_lambda82, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k404, env)}),
      upenv->vars[1]);
 }
}
static void _V0print__set_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda80, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__set_lambda81) (close _V0print__set_k394) (bruijn ##input.158 0 1))
V_CALL_FUNC(_V0print__set_lambda81, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_k394, env)}),
      _var1);
 }
}
static void _V0print__set_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__set_lambda79, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__set_lambda80) (bruijn ##k.783 0 0) (bruijn y 1 2))
V_CALL_FUNC(_V0print__set_lambda80, env, runtime,
      _var0,
      upenv->vars[2]);
 }
}
static void _V0print__set_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VError("Not enough arguments to _V0print__set_lambda78, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__set_lambda78, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn call/cc 26 36) (bruijn ##k.782 0 0) (close _V0print__set_lambda79))
V_CALL(VGetArg(upenv, 26-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_lambda79, env)}));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0print__expr_k275) (bruijn print-set 3 4) (close _V0print__set_lambda78))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k275, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__set_lambda78, env)})
    );
 }
}
static void _V0print__define__global_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k411, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 31 37) (bruijn ##k.812 6 0) (##string ##string.1846))
V_CALL(VGetArg(upenv, 31-1, 37), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1846.sym, VPOINTER_OTHER));
 }
}
static void _V0print__define__global_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 20 11) (close _V0print__define__global_k411) (bruijn x 5 3) (bruijn args 9 2))
V_CALL(VGetArg(upenv, 20-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k411, env)}),
      VGetArg(upenv, 5-1, 3),
      VGetArg(upenv, 9-1, 2));
 }
}
static void _V0print__define__global_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 29 37) (close _V0print__define__global_k410) (##string ##string.1849))
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k410, env)}),
      VEncodePointer(&_V10string_D1849.sym, VPOINTER_OTHER));
 }
}
static void _V0print__define__global_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-literal 18 7) (close _V0print__define__global_k409) (bruijn y 3 2))
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k409, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0print__define__global_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 27 37) (close _V0print__define__global_k408) (##string ##string.1849))
V_CALL(VGetArg(upenv, 27-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k408, env)}),
      VEncodePointer(&_V10string_D1849.sym, VPOINTER_OTHER));
 }
}
static void _V0print__define__global_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__define__global_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 16 11) (close _V0print__define__global_k407) (bruijn k 1 1) (bruijn args 5 2))
V_CALL(VGetArg(upenv, 16-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k407, env)}),
      upenv->vars[1],
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0print__define__global_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VError("Not enough arguments to _V0print__define__global_lambda83, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__define__global_lambda83, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn printf 25 37) (close _V0print__define__global_k406) (##string ##string.1853))
V_CALL(VGetArg(upenv, 25-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_k406, env)}),
      VEncodePointer(&_V10string_D1853.sym, VPOINTER_OTHER));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0print__expr_k274) (bruijn print-define-global 2 3) (close _V0print__define__global_lambda83))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k274, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__define__global_lambda83, env)})
    );
 }
}
static void _V0print__closure__apply_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k414, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 27 37) (bruijn ##k.819 3 0) (##string ##string.1785))
V_CALL(VGetArg(upenv, 27-1, 37), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1785.sym, VPOINTER_OTHER));
 }
}
static void _V0print__closure__apply_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k415, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-expr 18 11) (bruijn ##k.823 1 0) (bruijn x 1 1) (bruijn args 7 2))
V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 7-1, 2));
 }
}
static void _V0print__closure__apply_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__closure__apply_lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn printf 27 37) (close _V0print__closure__apply_k415) (##string ##string.1849))
V_CALL(VGetArg(upenv, 27-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k415, env)}),
      VEncodePointer(&_V10string_D1849.sym, VPOINTER_OTHER));
 }
}
static void _V0print__closure__apply_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 26 42) (close _V0print__closure__apply_k414) (close _V0print__closure__apply_lambda85) (bruijn xs 2 2))
V_CALL(VGetArg(upenv, 26-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k414, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_lambda85, env)}),
      upenv->up->vars[2]);
 }
}
static void _V0print__closure__apply_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 25 37) (close _V0print__closure__apply_k413) (##string ##string.1854))
V_CALL(VGetArg(upenv, 25-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k413, env)}),
      VEncodePointer(&_V10string_D1854.sym, VPOINTER_OTHER));
 }
}
static void _V0print__closure__apply_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k418, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.153 5 1) (bruijn ##k.830 3 0) (bruijn ##x.835 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0print__closure__apply_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.156 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.156 0 0))) ((bruijn printf 29 37) (close _V0print__closure__apply_k418) (##string ##string.1855) (##inline ##sys.car (bruijn ##expr.156 0 0))) ((bruijn ##k.830 2 0) #f)) ((bruijn ##k.830 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k418, env)}),
      VEncodePointer(&_V10string_D1855.sym, VPOINTER_OTHER),
      VInlineCar(
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
static void _V0print__closure__apply_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.832 0 0) ((close _V0print__closure__apply_k417) (##inline ##sys.cdr (bruijn ##expr.155 1 1))) ((bruijn ##k.830 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__closure__apply_k417, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__closure__apply_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda88, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.155 0 1)) ((bruijn equal? 27 35) (close _V0print__closure__apply_k416) (quote close) (##inline ##sys.car (bruijn ##expr.155 0 1))) ((bruijn ##k.830 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 27-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k416, env)}),
      _V0close,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__closure__apply_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k421, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.153 4 1) (bruijn ##k.826 3 0) (bruijn ##x.828 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0print__closure__apply_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 18 11) (close _V0print__closure__apply_k421) (bruijn f 4 1) (bruijn args 7 2))
V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k421, env)}),
      upenv->up->up->up->vars[1],
      VGetArg(upenv, 7-1, 2));
 }
}
static void _V0print__closure__apply_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__closure__apply_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_k419, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn display 27 23) (close _V0print__closure__apply_k420) (##string ##string.1856))
V_CALL(VGetArg(upenv, 27-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k420, env)}),
      VEncodePointer(&_V10string_D1856.sym, VPOINTER_OTHER));
 }
}
static void _V0print__closure__apply_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda87, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__closure__apply_lambda88) (close _V0print__closure__apply_k419) (bruijn ##input.154 0 1))
V_CALL_FUNC(_V0print__closure__apply_lambda88, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k419, env)}),
      _var1);
 }
}
static void _V0print__closure__apply_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__closure__apply_lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__closure__apply_lambda87) (bruijn ##k.825 0 0) (bruijn f 1 1))
V_CALL_FUNC(_V0print__closure__apply_lambda87, env, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0print__closure__apply_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0print__closure__apply_lambda84, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__closure__apply_lambda84, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn call/cc 24 36) (close _V0print__closure__apply_k412) (close _V0print__closure__apply_lambda86))
V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_k412, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_lambda86, env)}));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0print__expr_k273) (bruijn print-closure-apply 1 2) (close _V0print__closure__apply_lambda84))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k273, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__closure__apply_lambda84, env)})
    );
 }
}
static void _V0print__builtin__apply_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__builtin__apply_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_k424, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 26 37) (bruijn ##k.838 3 0) (##string ##string.1785))
V_CALL(VGetArg(upenv, 26-1, 37), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1785.sym, VPOINTER_OTHER));
 }
}
static void _V0print__builtin__apply_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__builtin__apply_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_k425, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-expr 17 11) (bruijn ##k.841 1 0) (bruijn x 1 1) (bruijn args 6 2))
V_CALL(VGetArg(upenv, 17-1, 11), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0print__builtin__apply_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__builtin__apply_lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_lambda90, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn printf 26 37) (close _V0print__builtin__apply_k425) (##string ##string.1849))
V_CALL(VGetArg(upenv, 26-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_k425, env)}),
      VEncodePointer(&_V10string_D1849.sym, VPOINTER_OTHER));
 }
}
static void _V0print__builtin__apply_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__builtin__apply_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 25 42) (close _V0print__builtin__apply_k424) (close _V0print__builtin__apply_lambda90) (bruijn xs 2 2))
V_CALL(VGetArg(upenv, 25-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_k424, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_lambda90, env)}),
      upenv->up->vars[2]);
 }
}
static void _V0print__builtin__apply_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__builtin__apply_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 24 37) (close _V0print__builtin__apply_k423) (##string ##string.1857) (bruijn ##x.843 0 0))
V_CALL(VGetArg(upenv, 24-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_k423, env)}),
      VEncodePointer(&_V10string_D1857.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0print__builtin__apply_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0print__builtin__apply_lambda89, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__builtin__apply_lambda89, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn lookup-intrinsic2 23 20) (close _V0print__builtin__apply_k422) (bruijn f 0 1))
V_CALL(VGetArg(upenv, 23-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_k422, env)}),
      _var1);
 }
}
static void _V0print__expr_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda52, runtime, upenv, 6, argc, _var0, _var1, _var2, _var3, _var4, _var5) {
  struct { VEnv env; VWORD argv[6]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 6, 6, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  // (set! (close _V0print__expr_k272) (bruijn print-builtin-apply 0 1) (close _V0print__builtin__apply_lambda89))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_k272, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__builtin__apply_lambda89, env)})
    );
 }
}
static void _V0print__expr_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0print__expr_lambda51, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__expr_lambda51, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0print__expr_lambda52) (bruijn ##k.589 0 0) #f #f #f #f #f)
V_CALL_FUNC(_V0print__expr_lambda52, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k85) (bruijn print-expr 10 11) (close _V0print__expr_lambda51))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k85, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__expr_lambda51, env)})
    );
 }
}
static void _V0closes_Q_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k427, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.132 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.132 0 0))) ((bruijn ##kk.129 4 1) (bruijn ##k.924 2 0) #t) ((bruijn ##k.924 2 0) #f)) ((bruijn ##k.924 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->vars[0],
      VEncodeBool(true));
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
static void _V0closes_Q_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.926 0 0) ((close _V0closes_Q_k427) (##inline ##sys.cdr (bruijn ##expr.131 1 1))) ((bruijn ##k.924 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k427, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda94, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.131 0 1)) ((bruijn equal? 23 35) (close _V0closes_Q_k426) (quote close) (##inline ##sys.car (bruijn ##expr.131 0 1))) ((bruijn ##k.924 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 23-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k426, env)}),
      _V0close,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k429, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.922 0 0) ((bruijn ##kk.129 4 1) (bruijn ##k.920 1 0) #f) ((bruijn ##k.920 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VEncodeBool(false));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda95, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.133 0 1)) ((bruijn equal? 24 35) (close _V0closes_Q_k429) (quote quote) (##inline ##sys.car (bruijn ##expr.133 0 1))) ((bruijn ##k.920 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 24-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k429, env)}),
      _V0quote,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k431, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.918 0 0) ((bruijn ##kk.129 5 1) (bruijn ##k.916 1 0) #f) ((bruijn ##k.916 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.134 0 1)) ((bruijn equal? 25 35) (close _V0closes_Q_k431) (quote bruijn) (##inline ##sys.car (bruijn ##expr.134 0 1))) ((bruijn ##k.916 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 25-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k431, env)}),
      _V0bruijn,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k433, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.914 0 0) ((bruijn ##kk.129 6 1) (bruijn ##k.912 1 0) #f) ((bruijn ##k.912 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda97, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.135 0 1)) ((bruijn equal? 26 35) (close _V0closes_Q_k433) (quote ##string) (##inline ##sys.car (bruijn ##expr.135 0 1))) ((bruijn ##k.912 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 26-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k433, env)}),
      _V10string,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k435, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.910 0 0) ((bruijn ##kk.129 7 1) (bruijn ##k.908 1 0) #f) ((bruijn ##k.908 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.136 0 1)) ((bruijn equal? 27 35) (close _V0closes_Q_k435) (quote ##intrinsic) (##inline ##sys.car (bruijn ##expr.136 0 1))) ((bruijn ##k.908 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 27-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k435, env)}),
      _V10intrinsic,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k443, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.905 0 0) ((bruijn ##k.904 1 0) (bruijn ##p.905 0 0)) ((bruijn closes? 25 10) (bruijn ##k.904 1 0) (##inline ##sys.car (bruijn ##expr.140 3 0))))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 25-1, 10), runtime,
      upenv->vars[0],
      VInlineCar(
        upenv->up->up->vars[0]));
}
 }
}
static void _V0closes_Q_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k442, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.903 1 0) ((bruijn ##k.904 0 0) (bruijn ##p.903 1 0)) ((bruijn closes? 24 10) (close _V0closes_Q_k443) (##inline ##sys.car (bruijn ##expr.139 3 0))))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 24-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k443, env)}),
      VInlineCar(
        upenv->up->up->vars[0]));
}
 }
}
static void _V0closes_Q_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k444, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.129 13 1) (bruijn ##k.895 6 0) (bruijn ##x.902 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0closes_Q_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k441, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0closes_Q_k442) (close _V0closes_Q_k444))
V_CALL_FUNC(_V0closes_Q_k442, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k444, env)}));
 }
}
static void _V0closes_Q_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.140 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.140 0 0))) ((bruijn closes? 22 10) (close _V0closes_Q_k441) (##inline ##sys.car (bruijn ##expr.138 2 0))) ((bruijn ##k.895 4 0) #f)) ((bruijn ##k.895 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 22-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k441, env)}),
      VInlineCar(
        upenv->up->vars[0]));
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
static void _V0closes_Q_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k439, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.139 0 0)) ((close _V0closes_Q_k440) (##inline ##sys.cdr (bruijn ##expr.139 0 0))) ((bruijn ##k.895 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0closes_Q_k440, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k438, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.138 0 0)) ((close _V0closes_Q_k439) (##inline ##sys.cdr (bruijn ##expr.138 0 0))) ((bruijn ##k.895 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0closes_Q_k439, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k437, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.897 0 0) ((close _V0closes_Q_k438) (##inline ##sys.cdr (bruijn ##expr.137 1 1))) ((bruijn ##k.895 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k438, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda99, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 1)) ((bruijn equal? 28 35) (close _V0closes_Q_k437) (quote if) (##inline ##sys.car (bruijn ##expr.137 0 1))) ((bruijn ##k.895 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 28-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k437, env)}),
      _V0if,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k449, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.144 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.144 0 0))) ((bruijn ##kk.129 12 1) (bruijn ##k.886 4 0) #t) ((bruijn ##k.886 4 0) #f)) ((bruijn ##k.886 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VEncodeBool(true));
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
static void _V0closes_Q_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k448, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.143 0 0)) ((close _V0closes_Q_k449) (##inline ##sys.cdr (bruijn ##expr.143 0 0))) ((bruijn ##k.886 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0closes_Q_k449, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k447, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.142 0 0)) ((close _V0closes_Q_k448) (##inline ##sys.cdr (bruijn ##expr.142 0 0))) ((bruijn ##k.886 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0closes_Q_k448, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k446, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.888 0 0) ((close _V0closes_Q_k447) (##inline ##sys.cdr (bruijn ##expr.141 1 1))) ((bruijn ##k.886 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k447, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.141 0 1)) ((bruijn equal? 29 35) (close _V0closes_Q_k446) (quote set!) (##inline ##sys.car (bruijn ##expr.141 0 1))) ((bruijn ##k.886 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 29-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k446, env)}),
      _V0set_B,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k454, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.148 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.148 0 0))) ((bruijn ##kk.129 13 1) (bruijn ##k.877 4 0) #t) ((bruijn ##k.877 4 0) #f)) ((bruijn ##k.877 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VEncodeBool(true));
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
static void _V0closes_Q_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k453, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.147 0 0)) ((close _V0closes_Q_k454) (##inline ##sys.cdr (bruijn ##expr.147 0 0))) ((bruijn ##k.877 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0closes_Q_k454, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.146 0 0)) ((close _V0closes_Q_k453) (##inline ##sys.cdr (bruijn ##expr.146 0 0))) ((bruijn ##k.877 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0closes_Q_k453, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k451, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.879 0 0) ((close _V0closes_Q_k452) (##inline ##sys.cdr (bruijn ##expr.145 1 1))) ((bruijn ##k.877 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k452, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.145 0 1)) ((bruijn equal? 30 35) (close _V0closes_Q_k451) (quote define) (##inline ##sys.car (bruijn ##expr.145 0 1))) ((bruijn ##k.877 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 30-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k451, env)}),
      _V0define,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k458, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.129 13 1) (bruijn ##k.871 3 0) (bruijn ##x.875 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0closes_Q_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.150 0 0)) ((bruijn closes? 23 10) (close _V0closes_Q_k458) (##inline ##sys.cdr (bruijn ##expr.150 0 0))) ((bruijn ##k.871 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 23-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k458, env)}),
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.873 0 0) ((close _V0closes_Q_k457) (##inline ##sys.cdr (bruijn ##expr.149 1 1))) ((bruijn ##k.871 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0closes_Q_k457, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda102, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.149 0 1)) ((bruijn equal? 31 35) (close _V0closes_Q_k456) (quote ##inline) (##inline ##sys.car (bruijn ##expr.149 0 1))) ((bruijn ##k.871 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 31-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k456, env)}),
      _V10inline,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k460, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.129 12 1) (bruijn ##k.866 1 0) (bruijn ##x.869 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0closes_Q_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda103, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.151 0 1)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.151 0 1))) ((bruijn closes? 22 10) (close _V0closes_Q_k460) (##inline ##sys.car (bruijn ##expr.151 0 1))) ((bruijn ##k.866 0 0) #f)) ((bruijn ##k.866 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var1)))) {
V_CALL(VGetArg(upenv, 22-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k460, env)}),
      VInlineCar(
        _var1));
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
static void _V0closes_Q_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k463, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.864 1 0) ((bruijn ##k.865 0 0) (bruijn ##p.864 1 0)) ((bruijn closes? 25 10) (bruijn ##k.865 0 0) (##inline ##sys.cdr (bruijn ##expr.152 2 1))))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 25-1, 10), runtime,
      _var0,
      VInlineCdr(
        upenv->up->vars[1]));
}
 }
}
static void _V0closes_Q_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k464, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.129 14 1) (bruijn ##k.861 2 0) (bruijn ##x.863 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0closes_Q_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k462, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0closes_Q_k463) (close _V0closes_Q_k464))
V_CALL_FUNC(_V0closes_Q_k463, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k464, env)}));
 }
}
static void _V0closes_Q_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.152 0 1)) ((bruijn closes? 23 10) (close _V0closes_Q_k462) (##inline ##sys.car (bruijn ##expr.152 0 1))) ((bruijn ##k.861 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 23-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k462, env)}),
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0closes_Q_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.129 13 1) (bruijn ##k.860 0 0) #f)
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      _var0,
      VEncodeBool(false));
 }
}
static void _V0closes_Q_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k467, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.129 14 1) (bruijn ##k.846 13 0) (bruijn ##x.859 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      _var0);
 }
}
static void _V0closes_Q_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k466, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 34 43) (close _V0closes_Q_k467) (##string ##string.1858) (bruijn expr 14 1))
V_CALL(VGetArg(upenv, 34-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k467, env)}),
      VEncodePointer(&_V10string_D1858.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V0closes_Q_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda105) (close _V0closes_Q_k466) (bruijn ##input.130 11 1))
V_CALL_FUNC(_V0closes_Q_lambda105, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k466, env)}),
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V0closes_Q_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k461, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda104) (close _V0closes_Q_k465) (bruijn ##input.130 10 1))
V_CALL_FUNC(_V0closes_Q_lambda104, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k465, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V0closes_Q_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k459, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda103) (close _V0closes_Q_k461) (bruijn ##input.130 9 1))
V_CALL_FUNC(_V0closes_Q_lambda103, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k461, env)}),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V0closes_Q_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k455, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda102) (close _V0closes_Q_k459) (bruijn ##input.130 8 1))
V_CALL_FUNC(_V0closes_Q_lambda102, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k459, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0closes_Q_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k450, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda101) (close _V0closes_Q_k455) (bruijn ##input.130 7 1))
V_CALL_FUNC(_V0closes_Q_lambda101, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k455, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0closes_Q_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k445, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda100) (close _V0closes_Q_k450) (bruijn ##input.130 6 1))
V_CALL_FUNC(_V0closes_Q_lambda100, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k450, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0closes_Q_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda99) (close _V0closes_Q_k445) (bruijn ##input.130 5 1))
V_CALL_FUNC(_V0closes_Q_lambda99, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k445, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0closes_Q_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda98) (close _V0closes_Q_k436) (bruijn ##input.130 4 1))
V_CALL_FUNC(_V0closes_Q_lambda98, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k436, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0closes_Q_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k432, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda97) (close _V0closes_Q_k434) (bruijn ##input.130 3 1))
V_CALL_FUNC(_V0closes_Q_lambda97, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k434, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0closes_Q_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda96) (close _V0closes_Q_k432) (bruijn ##input.130 2 1))
V_CALL_FUNC(_V0closes_Q_lambda96, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k432, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0closes_Q_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0closes_Q_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0closes_Q_lambda95) (close _V0closes_Q_k430) (bruijn ##input.130 1 1))
V_CALL_FUNC(_V0closes_Q_lambda95, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k430, env)}),
      upenv->vars[1]);
 }
}
static void _V0closes_Q_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0closes_Q_lambda94) (close _V0closes_Q_k428) (bruijn ##input.130 0 1))
V_CALL_FUNC(_V0closes_Q_lambda94, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_k428, env)}),
      _var1);
 }
}
static void _V0closes_Q_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0closes_Q_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0closes_Q_lambda93) (bruijn ##k.845 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0closes_Q_lambda93, env, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0closes_Q_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0closes_Q_lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0closes_Q_lambda91, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 20 36) (bruijn ##k.844 0 0) (close _V0closes_Q_lambda92))
V_CALL(VGetArg(upenv, 20-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_lambda92, env)}));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k84) (bruijn closes? 9 10) (close _V0closes_Q_lambda91))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k84, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0closes_Q_lambda91, env)})
    );
 }
}
static void _V0print__dllmain_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__dllmain_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__dllmain_k471, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 24 37) (bruijn ##k.932 4 0) (##string ##string.1795))
V_CALL(VGetArg(upenv, 24-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1795.sym, VPOINTER_OTHER));
 }
}
static void _V0print__dllmain_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__dllmain_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__dllmain_k470, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 23 42) (close _V0print__dllmain_k471) (bruijn print-init 3 1) (bruijn literals 4 1))
V_CALL(VGetArg(upenv, 23-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__dllmain_k471, env)}),
      upenv->up->up->vars[1],
      upenv->up->up->up->vars[1]);
 }
}
static void _V0print__dllmain_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__dllmain_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__dllmain_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 22 37) (close _V0print__dllmain_k470) (##string ##string.1859) (bruijn ##x.936 0 0))
V_CALL(VGetArg(upenv, 22-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__dllmain_k470, env)}),
      VEncodePointer(&_V10string_D1859.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0print__dllmain_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__dllmain_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__dllmain_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn gendllmain 20 6) (close _V0print__dllmain_k469))
V_CALL(VGetArg(upenv, 20-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__dllmain_k469, env)}));
 }
}
static void _V0print__init_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__init_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__init_k475, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 25 37) (bruijn ##k.937 4 0) (##string ##string.1860) (bruijn mangled 0 0) (bruijn mangled 0 0) (bruijn mangled 0 0))
V_CALL(VGetArg(upenv, 25-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1860.sym, VPOINTER_OTHER),
      _var0,
      _var0,
      _var0);
 }
}
static void _V0print__init_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__init_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__init_k474, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 24 13) (close _V0print__init_k475) (bruijn ##x.939 0 0))
V_CALL(VGetArg(upenv, 24-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__init_k475, env)}),
      _var0);
 }
}
static void _V0print__init_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__init_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__init_k479, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 27 18) (bruijn ##k.943 1 0) (bruijn ##x.944 0 0) (quote ##intrinsic))
V_CALL(VGetArg(upenv, 27-1, 18), runtime,
      upenv->vars[0],
      _var0,
      _V10intrinsic);
 }
}
static void _V0print__init_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__init_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__init_k478, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.942 1 0) ((bruijn caar 26 15) (close _V0print__init_k479) (bruijn lit 5 1)) ((bruijn ##k.943 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 26-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__init_k479, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__init_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__init_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__init_k482, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 28 37) (bruijn ##k.937 7 0) (##string ##string.1861) (bruijn mangled 0 0) (bruijn mangled 0 0) (bruijn mangled 0 0))
V_CALL(VGetArg(upenv, 28-1, 37), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1861.sym, VPOINTER_OTHER),
      _var0,
      _var0,
      _var0);
 }
}
static void _V0print__init_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__init_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__init_k481, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 27 13) (close _V0print__init_k482) (bruijn ##x.941 0 0))
V_CALL(VGetArg(upenv, 27-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__init_k482, env)}),
      _var0);
 }
}
static void _V0print__init_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__init_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__init_k480, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.940 0 0) ((bruijn cadar 26 14) (close _V0print__init_k481) (bruijn lit 5 1)) ((bruijn ##k.937 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 26-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__init_k481, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__init_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__init_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__init_k477, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__init_k478) (close _V0print__init_k480))
V_CALL_FUNC(_V0print__init_k478, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__init_k480, env)}));
 }
}
static void _V0print__init_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__init_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__init_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pair? 24 17) (close _V0print__init_k477) (bruijn ##x.945 0 0))
V_CALL(VGetArg(upenv, 24-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__init_k477, env)}),
      _var0);
 }
}
static void _V0print__init_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__init_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__init_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.938 0 0) ((bruijn car 23 30) (close _V0print__init_k474) (bruijn lit 2 1)) ((bruijn car 23 30) (close _V0print__init_k476) (bruijn lit 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__init_k474, env)}),
      upenv->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 23-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__init_k476, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0print__init_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__init_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__init_k472, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol? 22 16) (close _V0print__init_k473) (bruijn ##x.946 0 0))
V_CALL(VGetArg(upenv, 22-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__init_k473, env)}),
      _var0);
 }
}
static void _V0print__init_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__init_lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__init_lambda108, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 21 30) (close _V0print__init_k472) (bruijn lit 0 1))
V_CALL(VGetArg(upenv, 21-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__init_k472, env)}),
      _var1);
 }
}
static void _V0print__dllmain_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__dllmain_lambda107, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0print__dllmain_k468) (bruijn print-init 0 1) (close _V0print__init_lambda108))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__dllmain_k468, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__init_lambda108, env)})
    );
 }
}
static void _V0print__dllmain_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__dllmain_lambda106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__dllmain_lambda106, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__dllmain_lambda107) (bruijn ##k.931 0 0) #f)
V_CALL_FUNC(_V0print__dllmain_lambda107, env, runtime,
      _var0,
      VEncodeBool(false));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k83) (bruijn print-dllmain 8 9) (close _V0print__dllmain_lambda106))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k83, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__dllmain_lambda106, env)})
    );
 }
}
static void _V0print__literal__declaration_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k494, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 30 37) (bruijn ##k.947 12 0) (##string ##string.1862) (bruijn len 1 0) (bruijn mangled 8 0) (bruijn len 1 0) (bruijn escaped 5 0))
V_CALL(VGetArg(upenv, 30-1, 37), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V10string_D1862.sym, VPOINTER_OTHER),
      upenv->vars[0],
      VGetArg(upenv, 8-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V0print__literal__declaration_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 29 37) (close _V0print__literal__declaration_k494) (##string ##string.1863) (bruijn mangled 7 0))
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k494, env)}),
      VEncodePointer(&_V10string_D1863.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0print__literal__declaration_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 28 27) (close _V0print__literal__declaration_k493) (bruijn ##x.950 0 0) 1)
V_CALL(VGetArg(upenv, 28-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k493, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0print__literal__declaration_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k491, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 27 11) (close _V0print__literal__declaration_k492) (bruijn ##x.951 0 0))
V_CALL(VGetArg(upenv, 27-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k492, env)}),
      _var0);
 }
}
static void _V0print__literal__declaration_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k490, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol->string 26 12) (close _V0print__literal__declaration_k491) (bruijn ##x.952 0 0))
V_CALL(VGetArg(upenv, 26-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k491, env)}),
      _var0);
 }
}
static void _V0print__literal__declaration_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k489, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 25 30) (close _V0print__literal__declaration_k490) (bruijn lit 7 1))
V_CALL(VGetArg(upenv, 25-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k490, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0print__literal__declaration_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k488, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn escape-string 14 3) (close _V0print__literal__declaration_k489) (bruijn ##x.953 0 0))
V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k489, env)}),
      _var0);
 }
}
static void _V0print__literal__declaration_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol->string 23 12) (close _V0print__literal__declaration_k488) (bruijn ##x.954 0 0))
V_CALL(VGetArg(upenv, 23-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k488, env)}),
      _var0);
 }
}
static void _V0print__literal__declaration_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k486, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 22 30) (close _V0print__literal__declaration_k487) (bruijn lit 4 1))
V_CALL(VGetArg(upenv, 22-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k487, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0print__literal__declaration_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k485, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 21 13) (close _V0print__literal__declaration_k486) (bruijn ##x.955 0 0))
V_CALL(VGetArg(upenv, 21-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k486, env)}),
      _var0);
 }
}
static void _V0print__literal__declaration_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k503, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 29 37) (bruijn ##k.947 11 0) (##string ##string.1864) (bruijn len 0 0) (bruijn mangled 5 0) (bruijn len 0 0) (bruijn escaped 3 0))
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D1864.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 5-1, 0),
      _var0,
      upenv->up->up->vars[0]);
 }
}
static void _V0print__literal__declaration_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k502, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 28 27) (close _V0print__literal__declaration_k503) (bruijn ##x.957 0 0) 1)
V_CALL(VGetArg(upenv, 28-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k503, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0print__literal__declaration_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k501, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 27 11) (close _V0print__literal__declaration_k502) (bruijn ##x.958 0 0))
V_CALL(VGetArg(upenv, 27-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k502, env)}),
      _var0);
 }
}
static void _V0print__literal__declaration_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k500, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 26 30) (close _V0print__literal__declaration_k501) (bruijn lit 8 1))
V_CALL(VGetArg(upenv, 26-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k501, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0print__literal__declaration_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k499, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn escape-string 15 3) (close _V0print__literal__declaration_k500) (bruijn ##x.959 0 0))
V_CALL(VGetArg(upenv, 15-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k500, env)}),
      _var0);
 }
}
static void _V0print__literal__declaration_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k498, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 24 30) (close _V0print__literal__declaration_k499) (bruijn lit 6 1))
V_CALL(VGetArg(upenv, 24-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k499, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0print__literal__declaration_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k497, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 23 13) (close _V0print__literal__declaration_k498) (bruijn ##x.960 0 0))
V_CALL(VGetArg(upenv, 23-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k498, env)}),
      _var0);
 }
}
static void _V0print__literal__declaration_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k507, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 26 18) (bruijn ##k.966 1 0) (bruijn ##x.967 0 0) (quote ##intrinsic))
V_CALL(VGetArg(upenv, 26-1, 18), runtime,
      upenv->vars[0],
      _var0,
      _V10intrinsic);
 }
}
static void _V0print__literal__declaration_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k506, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.965 1 0) ((bruijn caar 25 15) (close _V0print__literal__declaration_k507) (bruijn lit 7 1)) ((bruijn ##k.966 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 25-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k507, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0print__literal__declaration_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k512, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 29 37) (bruijn ##k.947 11 0) (##string ##string.1865) (bruijn mangled 2 0) (bruijn ##x.963 0 0))
V_CALL(VGetArg(upenv, 29-1, 37), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D1865.sym, VPOINTER_OTHER),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0print__literal__declaration_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k511, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 28 24) (close _V0print__literal__declaration_k512) (bruijn lit 10 1))
V_CALL(VGetArg(upenv, 28-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k512, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V0print__literal__declaration_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k510, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 27 37) (close _V0print__literal__declaration_k511) (##string ##string.1866) (bruijn mangled 0 0))
V_CALL(VGetArg(upenv, 27-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k511, env)}),
      VEncodePointer(&_V10string_D1866.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0print__literal__declaration_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k509, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 26 13) (close _V0print__literal__declaration_k510) (bruijn ##x.964 0 0))
V_CALL(VGetArg(upenv, 26-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k510, env)}),
      _var0);
 }
}
static void _V0print__literal__declaration_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k508, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.961 0 0) ((bruijn cadar 25 14) (close _V0print__literal__declaration_k509) (bruijn lit 7 1)) ((bruijn compiler-error 25 43) (bruijn ##k.947 7 0) (##string ##string.1867) (bruijn lit 7 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k509, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
V_CALL(VGetArg(upenv, 25-1, 43), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1867.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 1));
}
 }
}
static void _V0print__literal__declaration_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__literal__declaration_k506) (close _V0print__literal__declaration_k508))
V_CALL_FUNC(_V0print__literal__declaration_k506, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k508, env)}));
 }
}
static void _V0print__literal__declaration_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k504, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pair? 23 17) (close _V0print__literal__declaration_k505) (bruijn ##x.968 0 0))
V_CALL(VGetArg(upenv, 23-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k505, env)}),
      _var0);
 }
}
static void _V0print__literal__declaration_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.956 0 0) ((bruijn cdr 22 24) (close _V0print__literal__declaration_k497) (bruijn lit 4 1)) ((bruijn car 22 30) (close _V0print__literal__declaration_k504) (bruijn lit 4 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k497, env)}),
      upenv->up->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 22-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k504, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V0print__literal__declaration_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k495, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string? 21 10) (close _V0print__literal__declaration_k496) (bruijn ##x.969 0 0))
V_CALL(VGetArg(upenv, 21-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k496, env)}),
      _var0);
 }
}
static void _V0print__literal__declaration_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k484, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.948 0 0) ((bruijn car 20 30) (close _V0print__literal__declaration_k485) (bruijn lit 2 1)) ((bruijn car 20 30) (close _V0print__literal__declaration_k495) (bruijn lit 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k485, env)}),
      upenv->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 20-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k495, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0print__literal__declaration_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__declaration_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_k483, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol? 19 16) (close _V0print__literal__declaration_k484) (bruijn ##x.970 0 0))
V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k484, env)}),
      _var0);
 }
}
static void _V0print__literal__declaration_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__literal__declaration_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__declaration_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 18 30) (close _V0print__literal__declaration_k483) (bruijn lit 0 1))
V_CALL(VGetArg(upenv, 18-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_k483, env)}),
      _var1);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k82) (bruijn print-literal-declaration 7 8) (close _V0print__literal__declaration_lambda109))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k82, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__declaration_lambda109, env)})
    );
 }
}
static void _V0print__literal_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k516, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 21 37) (bruijn ##k.971 4 0) (##string ##string.1870) (bruijn ##x.975 0 0))
V_CALL(VGetArg(upenv, 21-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1870.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0print__literal_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k520, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 24 23) (bruijn ##k.971 7 0) (bruijn ##x.979 0 0))
V_CALL(VGetArg(upenv, 24-1, 23), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0print__literal_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k519, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.978 0 0) ((bruijn mangle-symbol 23 13) (close _V0print__literal_k520) (bruijn x 6 1)) ((bruijn compiler-error 23 43) (bruijn ##k.971 6 0) (##string ##string.1873) (bruijn x 6 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k520, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
V_CALL(VGetArg(upenv, 23-1, 43), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1873.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0print__literal_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k518, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.977 0 0) ((bruijn printf 22 37) (bruijn ##k.971 5 0) (##string ##string.1872)) ((bruijn symbol? 22 16) (close _V0print__literal_k519) (bruijn x 5 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 37), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1872.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 22-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k519, env)}),
      VGetArg(upenv, 5-1, 1));
}
 }
}
static void _V0print__literal_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k517, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.976 0 0) ((bruijn printf 21 37) (bruijn ##k.971 4 0) (##string ##string.1871)) ((bruijn eq? 21 6) (close _V0print__literal_k518) (bruijn x 4 1) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 37), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1871.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 21-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k518, env)}),
      upenv->up->up->up->vars[1],
      VEncodeBool(false));
}
 }
}
static void _V0print__literal_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k515, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.974 0 0) ((bruijn escape-char 10 4) (close _V0print__literal_k516) (bruijn x 3 1)) ((bruijn eq? 20 6) (close _V0print__literal_k517) (bruijn x 3 1) #t))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k516, env)}),
      upenv->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 20-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k517, env)}),
      upenv->up->up->vars[1],
      VEncodeBool(true));
}
 }
}
static void _V0print__literal_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k514, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.973 0 0) ((bruijn printf 19 37) (bruijn ##k.971 2 0) (##string ##string.1869) (bruijn x 2 1)) ((bruijn char? 19 7) (close _V0print__literal_k515) (bruijn x 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 37), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1869.sym, VPOINTER_OTHER),
      upenv->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 19-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k515, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0print__literal_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_k513, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.972 0 0) ((bruijn printf 18 37) (bruijn ##k.971 1 0) (##string ##string.1868) (bruijn x 1 1)) ((bruijn number? 18 8) (close _V0print__literal_k514) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1868.sym, VPOINTER_OTHER),
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k514, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0print__literal_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__literal_lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal_lambda110, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn integer? 17 9) (close _V0print__literal_k513) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_k513, env)}),
      _var1);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k81) (bruijn print-literal 6 7) (close _V0print__literal_lambda110))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k81, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal_lambda110, env)})
    );
 }
}
static void _V0print__intrinsic_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__intrinsic_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__intrinsic_k521, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 17 37) (bruijn ##k.980 1 0) (##string ##string.1874) (bruijn ##x.981 0 0))
V_CALL(VGetArg(upenv, 17-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1874.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0print__intrinsic_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__intrinsic_lambda111, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__intrinsic_lambda111, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn mangle-symbol 16 13) (close _V0print__intrinsic_k521) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 16-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__intrinsic_k521, env)}),
      _var1);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k80) (bruijn print-intrinsic 5 6) (close _V0print__intrinsic_lambda111))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k80, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__intrinsic_lambda111, env)})
    );
 }
}
static void _V0print__literal__string_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__literal__string_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__string_k522, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 16 37) (bruijn ##k.982 1 0) (##string ##string.1875) (bruijn ##x.983 0 0))
V_CALL(VGetArg(upenv, 16-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1875.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0print__literal__string_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__literal__string_lambda112, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__literal__string_lambda112, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn mangle-symbol 15 13) (close _V0print__literal__string_k522) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 15-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__string_k522, env)}),
      _var1);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k79) (bruijn print-literal-string 4 5) (close _V0print__literal__string_lambda112))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k79, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__literal__string_lambda112, env)})
    );
 }
}
static void _V0escape__char_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k529, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.992 0 0) ((bruijn ##k.985 7 0) (##string ##string.1881)) ((bruijn ##k.985 7 0) (bruijn c 8 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodePointer(&_V10string_D1881.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 8-1, 1));
}
 }
}
static void _V0escape__char_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k528, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.991 0 0) ((bruijn ##k.985 6 0) (##string ##string.1880)) ((bruijn eqv? 21 18) (close _V0escape__char_k529) (bruijn ##x.128 6 1) (quote #\')))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodePointer(&_V10string_D1880.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 21-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k529, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeChar('\''));
}
 }
}
static void _V0escape__char_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k527, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.990 0 0) ((bruijn ##k.985 5 0) (##string ##string.1879)) ((bruijn eqv? 20 18) (close _V0escape__char_k528) (bruijn ##x.128 5 1) (quote #\\)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodePointer(&_V10string_D1879.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k528, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeChar('\\'));
}
 }
}
static void _V0escape__char_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k526, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.989 0 0) ((bruijn ##k.985 4 0) (##string ##string.1878)) ((bruijn eqv? 19 18) (close _V0escape__char_k527) (bruijn ##x.128 4 1) (quote #\return)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D1878.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k527, env)}),
      upenv->up->up->up->vars[1],
      VEncodeChar('\r'));
}
 }
}
static void _V0escape__char_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k525, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.988 0 0) ((bruijn ##k.985 3 0) (##string ##string.1877)) ((bruijn eqv? 18 18) (close _V0escape__char_k526) (bruijn ##x.128 3 1) (quote #\newline)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D1877.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k526, env)}),
      upenv->up->up->vars[1],
      VEncodeChar('\n'));
}
 }
}
static void _V0escape__char_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k524, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.987 0 0) ((bruijn ##k.985 2 0) (##string ##string.1877)) ((bruijn eqv? 17 18) (close _V0escape__char_k525) (bruijn ##x.128 2 1) (quote #\tab)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10string_D1877.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 17-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k525, env)}),
      upenv->up->vars[1],
      VEncodeChar('\t'));
}
 }
}
static void _V0escape__char_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__char_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_k523, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.986 0 0) ((bruijn ##k.985 1 0) (##string ##string.1876)) ((bruijn eqv? 16 18) (close _V0escape__char_k524) (bruijn ##x.128 1 1) (quote #\backspace)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10string_D1876.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k524, env)}),
      upenv->vars[1],
      VEncodeChar('\t'));
}
 }
}
static void _V0escape__char_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 15 18) (close _V0escape__char_k523) (bruijn ##x.128 0 1) (quote #\alarm))
V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_k523, env)}),
      _var1,
      VEncodeChar('\a'));
 }
}
static void _V0escape__char_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0escape__char_lambda113, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__char_lambda113, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0escape__char_lambda114) (bruijn ##k.984 0 0) (bruijn c 0 1))
V_CALL_FUNC(_V0escape__char_lambda114, env, runtime,
      _var0,
      _var1);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k78) (bruijn escape-char 3 4) (close _V0escape__char_lambda113))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k78, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__char_lambda113, env)})
    );
 }
}
static void _V0escape__string_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k532, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.997 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
 }
}
static void _V0loop_k543(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k543, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1014 1 0) ((bruijn ##k.1015 0 0) (bruijn ##p.1014 1 0)) ((bruijn eqv? 29 18) (bruijn ##k.1015 0 0) (bruijn ##x.127 9 0) (quote #\\)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 29-1, 18), runtime,
      _var0,
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('\\'));
}
 }
}
static void _V0loop_k546(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k546, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 31 23) (bruijn ##k.1004 9 0) (bruijn ##x.1012 0 0) (bruijn port 15 2))
V_CALL(VGetArg(upenv, 31-1, 23), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0,
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V0loop_k545(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k545, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-ref 30 5) (close _V0loop_k546) (bruijn s 17 1) (bruijn i 12 1))
V_CALL(VGetArg(upenv, 30-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k546, env)}),
      VGetArg(upenv, 17-1, 1),
      VGetArg(upenv, 12-1, 1));
 }
}
static void _V0loop_k547(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k547, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 30 23) (bruijn ##k.1004 8 0) (bruijn ##x.1013 0 0) (bruijn port 14 2))
V_CALL(VGetArg(upenv, 30-1, 23), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0,
      VGetArg(upenv, 14-1, 2));
 }
}
static void _V0loop_k544(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k544, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1010 0 0) ((bruijn display 29 23) (close _V0loop_k545) #\\ (bruijn port 13 2)) ((bruijn string-ref 29 5) (close _V0loop_k547) (bruijn s 16 1) (bruijn i 11 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 29-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k545, env)}),
      VEncodeChar('\\'),
      VGetArg(upenv, 13-1, 2));
} else {
V_CALL(VGetArg(upenv, 29-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k547, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 11-1, 1));
}
 }
}
static void _V0loop_k542(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k542, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k543) (close _V0loop_k544))
V_CALL_FUNC(_V0loop_k543, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k544, env)}));
 }
}
static void _V0loop_k541(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k541, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1009 0 0) ((bruijn display 27 23) (bruijn ##k.1004 5 0) (##string ##string.1883) (bruijn port 11 2)) ((bruijn eqv? 27 18) (close _V0loop_k542) (bruijn ##x.127 7 0) (quote #\")))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 27-1, 23), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1883.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 2));
} else {
V_CALL(VGetArg(upenv, 27-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k542, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('"'));
}
 }
}
static void _V0loop_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k540, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1008 0 0) ((bruijn display 26 23) (bruijn ##k.1004 4 0) (##string ##string.1879) (bruijn port 10 2)) ((bruijn eqv? 26 18) (close _V0loop_k541) (bruijn ##x.127 6 0) (quote #\?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 26-1, 23), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1879.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 2));
} else {
V_CALL(VGetArg(upenv, 26-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k541, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('?'));
}
 }
}
static void _V0loop_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k539, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1007 0 0) ((bruijn display 25 23) (bruijn ##k.1004 3 0) (##string ##string.1878) (bruijn port 9 2)) ((bruijn eqv? 25 18) (close _V0loop_k540) (bruijn ##x.127 5 0) (quote #\return)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 23), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1878.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 2));
} else {
V_CALL(VGetArg(upenv, 25-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k540, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('\r'));
}
 }
}
static void _V0loop_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k538, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1006 0 0) ((bruijn display 24 23) (bruijn ##k.1004 2 0) (##string ##string.1877) (bruijn port 8 2)) ((bruijn eqv? 24 18) (close _V0loop_k539) (bruijn ##x.127 4 0) (quote #\newline)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 24-1, 23), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1877.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 2));
} else {
V_CALL(VGetArg(upenv, 24-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k539, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('\n'));
}
 }
}
static void _V0loop_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k537, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1005 0 0) ((bruijn display 23 23) (bruijn ##k.1004 1 0) (##string ##string.1882) (bruijn port 7 2)) ((bruijn eqv? 23 18) (close _V0loop_k538) (bruijn ##x.127 3 0) (quote #\tab)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1882.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 2));
} else {
V_CALL(VGetArg(upenv, 23-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k538, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('\t'));
}
 }
}
static void _V0loop_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k536, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1003 1 0) ((bruijn display 22 23) (bruijn ##k.1004 0 0) (##string ##string.1876) (bruijn port 6 2)) ((bruijn eqv? 22 18) (close _V0loop_k537) (bruijn ##x.127 2 0) (quote #\backspace)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 22-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1876.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 2));
} else {
V_CALL(VGetArg(upenv, 22-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k537, env)}),
      upenv->up->vars[0],
      VEncodeChar('\t'));
}
 }
}
static void _V0loop_k549(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k549, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.999 5 0) (bruijn ##x.1002 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0loop_k548(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k548, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 22 27) (close _V0loop_k549) (bruijn i 4 1) 1)
V_CALL(VGetArg(upenv, 22-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k549, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0loop_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k535, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k536) (close _V0loop_k548))
V_CALL_FUNC(_V0loop_k536, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k548, env)}));
 }
}
static void _V0loop_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k534, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 20 18) (close _V0loop_k535) (bruijn ##x.127 0 0) (quote #\alarm))
V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k535, env)}),
      _var0,
      VEncodeChar('\a'));
 }
}
static void _V0loop_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k533, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1000 0 0) ((bruijn string-ref 19 5) (close _V0loop_k534) (bruijn s 6 1) (bruijn i 1 1)) ((bruijn ##k.999 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k534, env)}),
      VGetArg(upenv, 6-1, 1),
      upenv->vars[1]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda118, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda118, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 18 4) (close _V0loop_k533) (bruijn i 0 1) (bruijn len 2 1))
V_CALL(VGetArg(upenv, 18-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k533, env)}),
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V0escape__string_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_lambda117, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0escape__string_k532) (bruijn loop 0 1) (close _V0loop_lambda118))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k532, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda118, env)})
    );
 }
}
static void _V0escape__string_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k552, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.994 3 0) (bruijn ret 1 0))
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0escape__string_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k551, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 18 3) (close _V0escape__string_k552) (bruijn port 2 2))
V_CALL(VGetArg(upenv, 18-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k552, env)}),
      upenv->up->vars[2]);
 }
}
static void _V0escape__string_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k550, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn get-output-string 17 2) (close _V0escape__string_k551) (bruijn port 1 2))
V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k551, env)}),
      upenv->vars[2]);
 }
}
static void _V0escape__string_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_lambda116, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0escape__string_lambda117) (close _V0escape__string_k550) #f)
V_CALL_FUNC(_V0escape__string_lambda117, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k550, env)}),
      VEncodeBool(false));
 }
}
static void _V0escape__string_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k531, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0escape__string_lambda116) (bruijn ##k.993 2 0) (bruijn ##x.1016 1 0) (bruijn ##x.1017 0 0))
V_CALL_FUNC(_V0escape__string_lambda116, env, runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0escape__string_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0escape__string_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_k530, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn open-output-string 14 1) (close _V0escape__string_k531))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k531, env)}));
 }
}
static void _V0escape__string_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0escape__string_lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0escape__string_lambda115, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string-length 13 11) (close _V0escape__string_k530) (bruijn s 0 1))
V_CALL(VGetArg(upenv, 13-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_k530, env)}),
      _var1);
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k77) (bruijn escape-string 2 3) (close _V0escape__string_lambda115))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k77, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0escape__string_lambda115, env)})
    );
 }
}
static void _V0print__string_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__string_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_k554, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1021 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l));
 }
}
static void _V0loop_k566(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k566, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1038 1 0) ((bruijn ##k.1039 0 0) (bruijn ##p.1038 1 0)) ((bruijn eqv? 27 18) (bruijn ##k.1039 0 0) (bruijn ##x.126 9 0) (quote #\\)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 27-1, 18), runtime,
      _var0,
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('\\'));
}
 }
}
static void _V0loop_k569(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k569, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 29 23) (bruijn ##k.1028 9 0) (bruijn ##x.1036 0 0))
V_CALL(VGetArg(upenv, 29-1, 23), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V0loop_k568(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k568, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-ref 28 5) (close _V0loop_k569) (bruijn s 16 1) (bruijn i 13 1))
V_CALL(VGetArg(upenv, 28-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k569, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V0loop_k570(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k570, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 28 23) (bruijn ##k.1028 8 0) (bruijn ##x.1037 0 0))
V_CALL(VGetArg(upenv, 28-1, 23), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0loop_k567(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k567, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1034 0 0) ((bruijn display 27 23) (close _V0loop_k568) #\\) ((bruijn string-ref 27 5) (close _V0loop_k570) (bruijn s 15 1) (bruijn i 12 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 27-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k568, env)}),
      VEncodeChar('\\'));
} else {
V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k570, env)}),
      VGetArg(upenv, 15-1, 1),
      VGetArg(upenv, 12-1, 1));
}
 }
}
static void _V0loop_k565(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k565, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k566) (close _V0loop_k567))
V_CALL_FUNC(_V0loop_k566, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k567, env)}));
 }
}
static void _V0loop_k564(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k564, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1033 0 0) ((bruijn display 25 23) (bruijn ##k.1028 5 0) (##string ##string.1883)) ((bruijn eqv? 25 18) (close _V0loop_k565) (bruijn ##x.126 7 0) (quote #\")))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 23), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1883.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 25-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k565, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('"'));
}
 }
}
static void _V0loop_k563(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k563, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1032 0 0) ((bruijn display 24 23) (bruijn ##k.1028 4 0) (##string ##string.1879)) ((bruijn eqv? 24 18) (close _V0loop_k564) (bruijn ##x.126 6 0) (quote #\?)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 24-1, 23), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1879.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 24-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k564, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('?'));
}
 }
}
static void _V0loop_k562(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k562, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1031 0 0) ((bruijn display 23 23) (bruijn ##k.1028 3 0) (##string ##string.1878)) ((bruijn eqv? 23 18) (close _V0loop_k563) (bruijn ##x.126 5 0) (quote #\return)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 23), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1878.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 23-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k563, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('\r'));
}
 }
}
static void _V0loop_k561(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k561, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1030 0 0) ((bruijn display 22 23) (bruijn ##k.1028 2 0) (##string ##string.1877)) ((bruijn eqv? 22 18) (close _V0loop_k562) (bruijn ##x.126 4 0) (quote #\newline)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 23), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1877.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 22-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k562, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('\n'));
}
 }
}
static void _V0loop_k560(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k560, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1029 0 0) ((bruijn display 21 23) (bruijn ##k.1028 1 0) (##string ##string.1882)) ((bruijn eqv? 21 18) (close _V0loop_k561) (bruijn ##x.126 3 0) (quote #\tab)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1882.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 21-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k561, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('\t'));
}
 }
}
static void _V0loop_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k559, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1027 1 0) ((bruijn display 20 23) (bruijn ##k.1028 0 0) (##string ##string.1876)) ((bruijn eqv? 20 18) (close _V0loop_k560) (bruijn ##x.126 2 0) (quote #\backspace)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 20-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1876.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k560, env)}),
      upenv->up->vars[0],
      VEncodeChar('\t'));
}
 }
}
static void _V0loop_k572(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k572, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.1023 6 0) (bruijn ##x.1026 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0loop_k571(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k571, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 20 27) (close _V0loop_k572) (bruijn i 5 1) 1)
V_CALL(VGetArg(upenv, 20-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k572, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l));
 }
}
static void _V0loop_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k558, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k559) (close _V0loop_k571))
V_CALL_FUNC(_V0loop_k559, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k571, env)}));
 }
}
static void _V0loop_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k557, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 18 18) (close _V0loop_k558) (bruijn ##x.126 0 0) (quote #\alarm))
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k558, env)}),
      _var0,
      VEncodeChar('\a'));
 }
}
static void _V0loop_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k556, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1024 0 0) ((bruijn string-ref 17 5) (close _V0loop_k557) (bruijn s 5 1) (bruijn i 2 1)) ((bruijn ##k.1023 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k557, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->vars[1]);
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k555, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn < 16 4) (close _V0loop_k556) (bruijn i 1 1) (bruijn ##x.1040 0 0))
V_CALL(VGetArg(upenv, 16-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k556, env)}),
      upenv->vars[1],
      _var0);
 }
}
static void _V0loop_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string-length 15 11) (close _V0loop_k555) (bruijn s 3 1))
V_CALL(VGetArg(upenv, 15-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k555, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0print__string_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_lambda120, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0print__string_k554) (bruijn loop 0 1) (close _V0loop_lambda121))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__string_k554, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda121, env)})
    );
 }
}
static void _V0print__string_k573(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__string_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_k573, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 14 23) (bruijn ##k.1018 2 0) #\")
V_CALL(VGetArg(upenv, 14-1, 23), runtime,
      upenv->up->vars[0],
      VEncodeChar('"'));
 }
}
static void _V0print__string_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__string_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_k553, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0print__string_lambda120) (close _V0print__string_k573) #f)
V_CALL_FUNC(_V0print__string_lambda120, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__string_k573, env)}),
      VEncodeBool(false));
 }
}
static void _V0print__string_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__string_lambda119, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__string_lambda119, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn display 12 23) (close _V0print__string_k553) #\")
V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__string_k553, env)}),
      VEncodeChar('"'));
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
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0printout2_k76) (bruijn print-string 1 2) (close _V0print__string_lambda119))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k76, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__string_lambda119, env)})
    );
 }
}
static void _V0print__global_k574(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__global_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__global_k574, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn builtin 0 0) ((bruijn printf 12 37) (bruijn ##k.1041 1 0) (##string ##string.1884) (bruijn builtin 0 0)) ((bruijn printf 12 37) (bruijn ##k.1041 1 0) (##string ##string.1885) (bruijn sym 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1884.sym, VPOINTER_OTHER),
      _var0);
} else {
V_CALL(VGetArg(upenv, 12-1, 37), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1885.sym, VPOINTER_OTHER),
      upenv->vars[1]);
}
 }
}
static void _V0print__global_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__global_lambda122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__global_lambda122, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn lookup-intrinsic2 11 20) (close _V0print__global_k574) (bruijn sym 0 1))
V_CALL(VGetArg(upenv, 11-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__global_k574, env)}),
      _var1);
 }
}
static void _V0printout2_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18) {
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_lambda7, runtime, upenv, 19, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18) {
  struct { VEnv env; VWORD argv[19]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 19, 19, upenv);
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
  // (set! (close _V0printout2_k75) (bruijn print-global 0 1) (close _V0print__global_lambda122))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_k75, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__global_lambda122, env)})
    );
 }
}
static void _V0printout2_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7) {
 if(argc != 8) {
  VError("Not enough arguments to _V0printout2_lambda6, got ~D~N"
  "-- expected 8~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout2_lambda6, runtime, upenv, 8, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7) {
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
  // ((close _V0printout2_lambda7) (bruijn ##k.288 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(_V0printout2_lambda7, env, runtime,
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
      VEncodeBool(false),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k74) (bruijn printout2 7 7) (close _V0printout2_lambda6))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k74, env)}),
      VEncodeInt(7l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout2_lambda6, env)})
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k73) (bruijn gendllmain 6 6) (bruijn ##x.1042 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k73, env)}),
      VEncodeInt(6l), VEncodeInt(6l),
      _var0
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda4) (close _V0vanity_V0compiler_V0transpile_V20_k72) 0)
V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda4, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k72, env)}),
      VEncodeInt(0l));
 }
}
static void _V0to__functions_k590(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k590, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1076 0 0) ((bruijn ##kk.122 3 1) (bruijn ##k.1074 1 0) 1) ((bruijn ##k.1074 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(1l));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0to__functions_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda129, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.124 0 1)) ((bruijn equal? 27 35) (close _V0to__functions_k590) (quote ##foreign.declare) (##inline ##sys.car (bruijn ##expr.124 0 1))) ((bruijn ##k.1074 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 27-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k590, env)}),
      _V10foreign_Ddeclare,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0to__functions_k592(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k592, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1072 0 0) ((bruijn ##kk.122 4 1) (bruijn ##k.1070 1 0) 1) ((bruijn ##k.1070 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(1l));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0to__functions_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda130, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.125 0 1)) ((bruijn equal? 28 35) (close _V0to__functions_k592) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.125 0 1))) ((bruijn ##k.1070 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 28-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k592, env)}),
      _V10vcore_Ddeclare,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0to__functions_k593(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k593, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.122 3 1) (bruijn ##k.1067 2 0) 0)
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
 }
}
static void _V0to__functions_k591(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k591, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0to__functions_lambda130) (close _V0to__functions_k593) (bruijn ##input.123 1 1))
V_CALL_FUNC(_V0to__functions_lambda130, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k593, env)}),
      upenv->vars[1]);
 }
}
static void _V0to__functions_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda128, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__functions_lambda129) (close _V0to__functions_k591) (bruijn ##input.123 0 1))
V_CALL_FUNC(_V0to__functions_lambda129, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k591, env)}),
      _var1);
 }
}
static void _V0to__functions_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda127, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda127, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__functions_lambda128) (bruijn ##k.1066 0 0) (bruijn e 1 1))
V_CALL_FUNC(_V0to__functions_lambda128, env, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0to__functions_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda126, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 24 36) (bruijn ##k.1065 0 0) (close _V0to__functions_lambda127))
V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda127, env)}));
 }
}
static void _V0to__functions_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_lambda125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn multi-partition 16 15) (bruijn ##k.1064 0 0) (close _V0to__functions_lambda126) 2 (bruijn exprs 17 1))
V_CALL(VGetArg(upenv, 16-1, 15), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda126, env)}),
      VEncodeInt(2l),
      VGetArg(upenv, 17-1, 1));
 }
}
static void _V0to__functions_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda132, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn list 26 57) (bruijn ##k.1079 0 0) (bruijn literal-table 19 5) (bruijn foreign-functions 19 3) (bruijn functions 19 4) (bruijn declares 0 2) (bruijn toplevels 0 1))
V_CALL(VGetArg(upenv, 26-1, 57), runtime,
      _var0,
      VGetArg(upenv, 19-1, 5),
      VGetArg(upenv, 19-1, 3),
      VGetArg(upenv, 19-1, 4),
      _var2,
      _var1);
 }
}
static void _V0to__functions_k595(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k595, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0to__functions_lambda132) (bruijn ##k.1078 2 0) (bruijn ##x.1080 1 0) (bruijn ##x.1081 0 0))
V_CALL_FUNC(_V0to__functions_lambda132, env, runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0to__functions_k594(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k594, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 24 32) (close _V0to__functions_k595) (bruijn iter-declare 17 12) (bruijn declares 1 2))
V_CALL(VGetArg(upenv, 24-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k595, env)}),
      VGetArg(upenv, 17-1, 12),
      upenv->vars[2]);
 }
}
static void _V0to__functions_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda133, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda133, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 17 11) (bruijn ##k.1082 0 0) (##string ##string.1886) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 17-1, 11), runtime,
      _var0,
      VEncodePointer(&_V10string_D1886.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0to__functions_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0to__functions_lambda131, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda131, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn map 23 32) (close _V0to__functions_k594) (close _V0to__functions_lambda133) (bruijn globals 0 1))
V_CALL(VGetArg(upenv, 23-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k594, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda133, env)}),
      _var1);
 }
}
static void _V0to__functions_k589(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k589, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 22 21) (bruijn ##k.1048 15 0) (close _V0to__functions_lambda125) (close _V0to__functions_lambda131))
V_CALL(VGetArg(upenv, 22-1, 21), runtime,
      VGetArg(upenv, 15-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda125, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda131, env)}));
 }
}
static void _V0multi__partition_k597(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0multi__partition_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0multi__partition_k597, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.1084 2 0) (bruijn ##x.1086 0 0) (bruijn l 3 3))
V_CALL(upenv->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->up->vars[3]);
 }
}
static void _V0multi__partition_k596(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0multi__partition_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0multi__partition_k596, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-list 17 13) (close _V0multi__partition_k597) (bruijn n 2 2) (quote ()))
V_CALL(VGetArg(upenv, 17-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0multi__partition_k597, env)}),
      upenv->up->vars[2],
      VNULL);
 }
}
static void _V0loop_k599(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k599, runtime, upenv, 1, argc, _var0) {
  // ((bruijn apply 26 55) (bruijn ##k.1087 2 0) (bruijn values 26 54) (bruijn ##x.1089 0 0))
V_CALL(VGetArg(upenv, 26-1, 55), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 26-1, 54),
      _var0);
 }
}
static void _V0loop_k606(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k606, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 9 1) (bruijn ##k.1087 8 0) (bruijn ret 8 1) (bruijn ##x.1091 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 8-1, 1),
      _var0);
 }
}
static void _V0loop_k605(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k605, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 31 24) (close _V0loop_k606) (bruijn l 7 2))
V_CALL(VGetArg(upenv, 31-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k606, env)}),
      VGetArg(upenv, 7-1, 2));
 }
}
static void _V0loop_k604(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k604, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list-set! 23 14) (close _V0loop_k605) (bruijn ret 6 1) (bruijn split 3 0) (bruijn ##x.1092 0 0))
V_CALL(VGetArg(upenv, 23-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k605, env)}),
      VGetArg(upenv, 6-1, 1),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0loop_k603(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k603, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 29 56) (close _V0loop_k604) (bruijn ##x.1093 1 0) (bruijn ##x.1094 0 0))
V_CALL(VGetArg(upenv, 29-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k604, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k602(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k602, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list-ref 28 28) (close _V0loop_k603) (bruijn ret 4 1) (bruijn split 1 0))
V_CALL(VGetArg(upenv, 28-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k603, env)}),
      upenv->up->up->up->vars[1],
      upenv->vars[0]);
 }
}
static void _V0loop_k601(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k601, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 27 30) (close _V0loop_k602) (bruijn l 3 2))
V_CALL(VGetArg(upenv, 27-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k602, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0loop_k600(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k600, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn f 4 1) (close _V0loop_k601) (bruijn ##x.1095 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k601, env)}),
      _var0);
 }
}
static void _V0loop_k598(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k598, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1088 0 0) ((bruijn map 25 32) (close _V0loop_k599) (bruijn reverse 25 46) (bruijn ret 1 1)) ((bruijn car 25 30) (close _V0loop_k600) (bruijn l 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k599, env)}),
      VGetArg(upenv, 25-1, 46),
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 25-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k600, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0loop_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda136, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda136, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 24 44) (close _V0loop_k598) (bruijn l 0 2))
V_CALL(VGetArg(upenv, 24-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k598, env)}),
      _var2);
 }
}
static void _V0multi__partition_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0multi__partition_lambda135, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0multi__partition_k596) (bruijn loop 0 1) (close _V0loop_lambda136))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0multi__partition_k596, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda136, env)})
    );
 }
}
static void _V0multi__partition_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0multi__partition_lambda134, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0multi__partition_lambda134, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0multi__partition_lambda135) (bruijn ##k.1083 0 0) #f)
V_CALL_FUNC(_V0multi__partition_lambda135, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
static void _V0to__functions_k588(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k588, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k589) (bruijn multi-partition 14 15) (close _V0multi__partition_lambda134))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k589, env)}),
      VEncodeInt(14l), VEncodeInt(15l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0multi__partition_lambda134, env)})
    );
 }
}
static void _V0list__set_B_k609(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0list__set_B_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_k609, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list-set! 17 14) (bruijn ##k.1096 3 0) (bruijn ##x.1098 1 0) (bruijn ##x.1099 0 0) (bruijn v 3 3))
V_CALL(VGetArg(upenv, 17-1, 14), runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0,
      upenv->up->up->vars[3]);
 }
}
static void _V0list__set_B_k608(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0list__set_B_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_k608, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 23 29) (close _V0list__set_B_k609) (bruijn x 2 2) 1)
V_CALL(VGetArg(upenv, 23-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_k609, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0list__set_B_k607(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0list__set_B_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_k607, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1097 0 0) ((bruijn set-car! 22 53) (bruijn ##k.1096 1 0) (bruijn l 1 1) (bruijn v 1 3)) ((bruijn cdr 22 24) (close _V0list__set_B_k608) (bruijn l 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 53), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]);
} else {
V_CALL(VGetArg(upenv, 22-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_k608, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0list__set_B_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0list__set_B_lambda137, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_lambda137, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn = 21 22) (close _V0list__set_B_k607) (bruijn x 0 2) 0)
V_CALL(VGetArg(upenv, 21-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_k607, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0to__functions_k587(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k587, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k588) (bruijn list-set! 13 14) (close _V0list__set_B_lambda137))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k588, env)}),
      VEncodeInt(13l), VEncodeInt(14l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_lambda137, env)})
    );
 }
}
static void _V0make__list_k612(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__list_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_k612, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 23 56) (bruijn ##k.1100 3 0) (bruijn k 3 2) (bruijn ##x.1102 0 0))
V_CALL(VGetArg(upenv, 23-1, 56), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2],
      _var0);
 }
}
static void _V0make__list_k611(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__list_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_k611, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-list 15 13) (close _V0make__list_k612) (bruijn ##x.1103 0 0) (bruijn k 2 2))
V_CALL(VGetArg(upenv, 15-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_k612, env)}),
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V0make__list_k610(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__list_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_k610, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1101 0 0) ((bruijn ##k.1100 1 0) (quote ())) ((bruijn - 21 29) (close _V0make__list_k611) (bruijn n 1 1) 1))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 21-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_k611, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0make__list_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0make__list_lambda138, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__list_lambda138, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn = 20 22) (close _V0make__list_k610) 0 (bruijn n 0 1))
V_CALL(VGetArg(upenv, 20-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_k610, env)}),
      VEncodeInt(0l),
      _var1);
 }
}
static void _V0to__functions_k586(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k586, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k587) (bruijn make-list 12 13) (close _V0make__list_lambda138))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k587, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_lambda138, env)})
    );
 }
}
static void _V0iter__declare_k613(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k613, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1122 0 0) ((bruijn ##kk.116 3 1) (bruijn ##k.1120 1 0) (bruijn d 4 1)) ((bruijn ##k.1120 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__declare_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda142, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.118 0 1)) ((bruijn equal? 22 35) (close _V0iter__declare_k613) (quote ##foreign.declare) (##inline ##sys.car (bruijn ##expr.118 0 1))) ((bruijn ##k.1120 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 22-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k613, env)}),
      _V10foreign_Ddeclare,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__declare_k621(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k621, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.116 10 1) (bruijn ##k.1109 7 0) (bruijn ##x.1115 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0iter__declare_k620(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k620, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 29 57) (close _V0iter__declare_k621) (quote ##vcore.declare) (bruijn f 3 0) (bruijn ##x.1116 0 0))
V_CALL(VGetArg(upenv, 29-1, 57), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k621, env)}),
      _V10vcore_Ddeclare,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0iter__declare_k619(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k619, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 28 19) (close _V0iter__declare_k620) (bruijn ##x.1117 0 0))
V_CALL(VGetArg(upenv, 28-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k620, env)}),
      _var0);
 }
}
static void _V0iter__declare_k618(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k618, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.121 0 0))) ((bruijn iter 20 11) (close _V0iter__declare_k619) (bruijn f 1 0) (##inline ##sys.car (bruijn ##expr.121 0 0))) ((bruijn ##k.1109 4 0) #f)) ((bruijn ##k.1109 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 20-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k619, env)}),
      upenv->vars[0],
      VInlineCar(
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
static void _V0iter__declare_k617(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k617, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__declare_k618) (##inline ##sys.cdr (bruijn ##expr.120 1 0)))
V_CALL_FUNC(_V0iter__declare_k618, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0iter__declare_k616(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k616, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.120 0 0)) ((close _V0iter__declare_k617) (##inline ##sys.car (bruijn ##expr.120 0 0))) ((bruijn ##k.1109 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__declare_k617, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__declare_k615(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k615, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1111 0 0) ((close _V0iter__declare_k616) (##inline ##sys.cdr (bruijn ##expr.119 1 1))) ((bruijn ##k.1109 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__declare_k616, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__declare_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda143, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.119 0 1)) ((bruijn equal? 23 35) (close _V0iter__declare_k615) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.119 0 1))) ((bruijn ##k.1109 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 23-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k615, env)}),
      _V10vcore_Ddeclare,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__declare_k622(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k622, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 23 34) (bruijn ##k.1106 2 0) (##string ##string.1790))
V_CALL(VGetArg(upenv, 23-1, 34), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1790.sym, VPOINTER_OTHER));
 }
}
static void _V0iter__declare_k614(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__declare_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_k614, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__declare_lambda143) (close _V0iter__declare_k622) (bruijn ##input.117 1 1))
V_CALL_FUNC(_V0iter__declare_lambda143, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k622, env)}),
      upenv->vars[1]);
 }
}
static void _V0iter__declare_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda141, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__declare_lambda142) (close _V0iter__declare_k614) (bruijn ##input.117 0 1))
V_CALL_FUNC(_V0iter__declare_lambda142, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_k614, env)}),
      _var1);
 }
}
static void _V0iter__declare_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__declare_lambda140, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda140, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__declare_lambda141) (bruijn ##k.1105 0 0) (bruijn d 1 1))
V_CALL_FUNC(_V0iter__declare_lambda141, env, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0iter__declare_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__declare_lambda139, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__declare_lambda139, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 19 36) (bruijn ##k.1104 0 0) (close _V0iter__declare_lambda140))
V_CALL(VGetArg(upenv, 19-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_lambda140, env)}));
 }
}
static void _V0to__functions_k585(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k585, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k586) (bruijn iter-declare 11 12) (close _V0iter__declare_lambda139))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k586, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__declare_lambda139, env)})
    );
 }
}
static void _V0iter_k623(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k623, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1165 0 0) ((bruijn ##kk.107 3 1) (bruijn ##k.1163 1 0) (bruijn expr 4 2)) ((bruijn ##k.1163 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[2]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda147, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.109 0 1)) ((bruijn equal? 21 35) (close _V0iter_k623) (quote bruijn) (##inline ##sys.car (bruijn ##expr.109 0 1))) ((bruijn ##k.1163 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 21-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k623, env)}),
      _V0bruijn,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k626(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k626, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.107 5 1) (bruijn ##k.1158 2 0) (bruijn ##x.1161 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0iter_k625(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k625, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1160 0 0) ((bruijn iter-atom 16 9) (close _V0iter_k626) (bruijn fun 5 1) (bruijn expr 5 2) #f) ((bruijn ##k.1158 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k626, env)}),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 5-1, 2),
      VEncodeBool(false));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda148, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.110 0 1)) ((bruijn equal? 22 35) (close _V0iter_k625) (quote lambda) (##inline ##sys.car (bruijn ##expr.110 0 1))) ((bruijn ##k.1158 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 22-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k625, env)}),
      _V0lambda,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k629(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k629, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.107 6 1) (bruijn ##k.1153 2 0) (bruijn ##x.1156 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0iter_k628(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k628, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1155 0 0) ((bruijn iter-atom 17 9) (close _V0iter_k629) (bruijn fun 6 1) (bruijn expr 6 2) #f) ((bruijn ##k.1153 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k629, env)}),
      VGetArg(upenv, 6-1, 1),
      VGetArg(upenv, 6-1, 2),
      VEncodeBool(false));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda149, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.111 0 1)) ((bruijn equal? 23 35) (close _V0iter_k628) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.111 0 1))) ((bruijn ##k.1153 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 23-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k628, env)}),
      _V0case__lambda,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k632(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k632, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.107 7 1) (bruijn ##k.1148 2 0) (bruijn ##x.1151 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0iter_k631(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k631, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1150 0 0) ((bruijn iter-atom 18 9) (close _V0iter_k632) (bruijn fun 7 1) (bruijn expr 7 2) #f) ((bruijn ##k.1148 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k632, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2),
      VEncodeBool(false));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda150, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.112 0 1)) ((bruijn equal? 24 35) (close _V0iter_k631) (quote continuation) (##inline ##sys.car (bruijn ##expr.112 0 1))) ((bruijn ##k.1148 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 24-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k631, env)}),
      _V0continuation,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k635(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k635, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.107 8 1) (bruijn ##k.1143 2 0) (bruijn ##x.1146 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0iter_k634(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k634, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1145 0 0) ((bruijn iter-atom 19 9) (close _V0iter_k635) (bruijn fun 8 1) (bruijn expr 8 2) #f) ((bruijn ##k.1143 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k635, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 8-1, 2),
      VEncodeBool(false));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda151, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.113 0 1)) ((bruijn equal? 25 35) (close _V0iter_k634) (quote quote) (##inline ##sys.car (bruijn ##expr.113 0 1))) ((bruijn ##k.1143 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 25-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k634, env)}),
      _V0quote,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k638(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k638, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.107 9 1) (bruijn ##k.1138 2 0) (bruijn ##x.1141 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0iter_k637(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k637, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1140 0 0) ((bruijn iter-atom 20 9) (close _V0iter_k638) (bruijn fun 9 1) (bruijn expr 9 2) #f) ((bruijn ##k.1138 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k638, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2),
      VEncodeBool(false));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda152, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.114 0 1)) ((bruijn equal? 26 35) (close _V0iter_k637) (quote ##inline) (##inline ##sys.car (bruijn ##expr.114 0 1))) ((bruijn ##k.1138 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 26-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k637, env)}),
      _V10inline,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k640(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k640, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k640, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.107 9 1) (bruijn ##k.1135 1 0) (bruijn ##x.1137 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0iter_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda153, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.115 0 1)) ((bruijn iter-apply 20 10) (close _V0iter_k640) (bruijn fun 9 1) (bruijn expr 9 2)) ((bruijn ##k.1135 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 20-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k640, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k642(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k642, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k642, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.107 9 1) (bruijn ##k.1126 8 0) (bruijn ##x.1134 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0iter_k641(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k641, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k641, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-atom 20 9) (close _V0iter_k642) (bruijn fun 9 1) (bruijn expr 9 2) #f)
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k642, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2),
      VEncodeBool(false));
 }
}
static void _V0iter_k639(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k639, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k639, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda153) (close _V0iter_k641) (bruijn ##input.108 6 1))
V_CALL_FUNC(_V0iter_lambda153, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k641, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0iter_k636(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k636, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda152) (close _V0iter_k639) (bruijn ##input.108 5 1))
V_CALL_FUNC(_V0iter_lambda152, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k639, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0iter_k633(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k633, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda151) (close _V0iter_k636) (bruijn ##input.108 4 1))
V_CALL_FUNC(_V0iter_lambda151, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k636, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0iter_k630(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k630, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda150) (close _V0iter_k633) (bruijn ##input.108 3 1))
V_CALL_FUNC(_V0iter_lambda150, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k633, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0iter_k627(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k627, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda149) (close _V0iter_k630) (bruijn ##input.108 2 1))
V_CALL_FUNC(_V0iter_lambda149, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k630, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0iter_k624(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k624, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda148) (close _V0iter_k627) (bruijn ##input.108 1 1))
V_CALL_FUNC(_V0iter_lambda148, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k627, env)}),
      upenv->vars[1]);
 }
}
static void _V0iter_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda146, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda147) (close _V0iter_k624) (bruijn ##input.108 0 1))
V_CALL_FUNC(_V0iter_lambda147, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k624, env)}),
      _var1);
 }
}
static void _V0iter_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda145, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda145, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda146) (bruijn ##k.1125 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0iter_lambda146, env, runtime,
      _var0,
      upenv->vars[2]);
 }
}
static void _V0iter_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda144, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda144, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 18 36) (bruijn ##k.1124 0 0) (close _V0iter_lambda145))
V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda145, env)}));
 }
}
static void _V0to__functions_k584(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k584, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k585) (bruijn iter 10 11) (close _V0iter_lambda144))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k585, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda144, env)})
    );
 }
}
static void _V0iter__apply_k650(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k650, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k650, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 10 1) (bruijn ##k.1277 8 0) (##inline ##sys.cons (quote define) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.80 6 0)) (##inline ##sys.cons (bruijn ##x.1287 2 0) (##inline ##sys.cons (bruijn ##x.1289 0 0) (quote ()))))))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VInlineCons(
        _V0define,
        VInlineCons(
        VInlineCar(
        VGetArg(upenv, 6-1, 0)),
        VInlineCons(
        upenv->up->vars[0],
        VInlineCons(
        _var0,
        VNULL)))));
 }
}
static void _V0iter__apply_k649(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k649, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k649, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-atom 20 9) (close _V0iter__apply_k650) (bruijn ##x.1290 0 0) (##inline ##sys.car (bruijn ##expr.82 2 0)) #f)
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k650, env)}),
      _var0,
      VInlineCar(
        upenv->up->vars[0]),
      VEncodeBool(false));
 }
}
static void _V0iter__apply_k648(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k648, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k648, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 26 13) (close _V0iter__apply_k649) (bruijn y 2 0))
V_CALL(VGetArg(upenv, 26-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k649, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0iter__apply_k647(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k647, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k647, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.82 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.82 0 0))) ((bruijn lift-literal 18 7) (close _V0iter__apply_k648) (bruijn y 1 0)) ((bruijn ##k.1277 5 0) #f)) ((bruijn ##k.1277 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k648, env)}),
      upenv->vars[0]);
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
static void _V0iter__apply_k646(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k646, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k646, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k647) (##inline ##sys.cdr (bruijn ##expr.81 1 0)))
V_CALL_FUNC(_V0iter__apply_k647, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0iter__apply_k645(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k645, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k645, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.81 0 0)) ((close _V0iter__apply_k646) (##inline ##sys.car (bruijn ##expr.81 0 0))) ((bruijn ##k.1277 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__apply_k646, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k644(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k644, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k644, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.80 0 0)) ((close _V0iter__apply_k645) (##inline ##sys.cdr (bruijn ##expr.80 0 0))) ((bruijn ##k.1277 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__apply_k645, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k643(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k643, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k643, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1279 0 0) ((close _V0iter__apply_k644) (##inline ##sys.cdr (bruijn ##expr.79 1 1))) ((bruijn ##k.1277 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k644, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda157, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.79 0 1)) ((bruijn equal? 20 35) (close _V0iter__apply_k643) (quote define) (##inline ##sys.car (bruijn ##expr.79 0 1))) ((bruijn ##k.1277 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 20-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k643, env)}),
      _V0define,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k662(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k662, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k662, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 14 1) (bruijn ##k.1255 11 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn ##x.1267 2 0) (##inline ##sys.cons (##inline ##sys.cons (quote bruijn) (##inline ##sys.cons (bruijn name 4 0) (##inline ##sys.cdr (bruijn ##expr.87 5 0)))) (##inline ##sys.cons (bruijn ##x.1271 0 0) (quote ()))))))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      VInlineCons(
        _V0set_B,
        VInlineCons(
        upenv->up->vars[0],
        VInlineCons(
        VInlineCons(
        _V0bruijn,
        VInlineCons(
        upenv->up->up->up->vars[0],
        VInlineCdr(
        VGetArg(upenv, 5-1, 0)))),
        VInlineCons(
        _var0,
        VNULL)))));
 }
}
static void _V0iter__apply_k661(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k661, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k661, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-atom 24 9) (close _V0iter__apply_k662) (bruijn ##x.1272 0 0) (##inline ##sys.car (bruijn ##expr.88 2 0)) #f)
V_CALL(VGetArg(upenv, 24-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k662, env)}),
      _var0,
      VInlineCar(
        upenv->up->vars[0]),
      VEncodeBool(false));
 }
}
static void _V0iter__apply_k660(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k660, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k660, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 30 13) (close _V0iter__apply_k661) (bruijn name 2 0))
V_CALL(VGetArg(upenv, 30-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k661, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0iter__apply_k659(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k659, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k659, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.88 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.88 0 0))) ((bruijn iter-atom 22 9) (close _V0iter__apply_k660) (bruijn fun 12 1) (##inline ##sys.car (bruijn ##expr.84 6 0)) #f) ((bruijn ##k.1255 8 0) #f)) ((bruijn ##k.1255 8 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k660, env)}),
      VGetArg(upenv, 12-1, 1),
      VInlineCar(
        VGetArg(upenv, 6-1, 0)),
      VEncodeBool(false));
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
static void _V0iter__apply_k658(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k658, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k658, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k659) (##inline ##sys.cdr (bruijn ##expr.85 4 0)))
V_CALL_FUNC(_V0iter__apply_k659, env, runtime,
      VInlineCdr(
        upenv->up->up->up->vars[0]));
 }
}
static void _V0iter__apply_k657(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k657, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k657, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.87 0 0)) ((close _V0iter__apply_k658) (##inline ##sys.car (bruijn ##expr.87 0 0))) ((bruijn ##k.1255 6 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__apply_k658, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k656(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k656, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k656, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1261 0 0) ((close _V0iter__apply_k657) (##inline ##sys.cdr (bruijn ##expr.86 1 0))) ((bruijn ##k.1255 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k657, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k655(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k655, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k655, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.86 0 0)) ((bruijn equal? 25 35) (close _V0iter__apply_k656) (quote bruijn) (##inline ##sys.car (bruijn ##expr.86 0 0))) ((bruijn ##k.1255 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 25-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k656, env)}),
      _V0bruijn,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k654(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k654, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k654, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.85 0 0)) ((close _V0iter__apply_k655) (##inline ##sys.car (bruijn ##expr.85 0 0))) ((bruijn ##k.1255 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__apply_k655, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k653(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k653, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k653, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.84 0 0)) ((close _V0iter__apply_k654) (##inline ##sys.cdr (bruijn ##expr.84 0 0))) ((bruijn ##k.1255 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__apply_k654, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k652(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k652, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k652, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1257 0 0) ((close _V0iter__apply_k653) (##inline ##sys.cdr (bruijn ##expr.83 1 1))) ((bruijn ##k.1255 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k653, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda158, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.83 0 1)) ((bruijn equal? 21 35) (close _V0iter__apply_k652) (quote set!) (##inline ##sys.car (bruijn ##expr.83 0 1))) ((bruijn ##k.1255 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 21-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k652, env)}),
      _V0set_B,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k672(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k672, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k672, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 13 1) (bruijn ##k.1238 9 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn ##x.1247 3 0) (##inline ##sys.cons (bruijn ##x.1249 2 0) (##inline ##sys.cons (bruijn ##x.1251 0 0) (quote ()))))))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons(
        _V0set_B,
        VInlineCons(
        upenv->up->up->vars[0],
        VInlineCons(
        upenv->up->vars[0],
        VInlineCons(
        _var0,
        VNULL)))));
 }
}
static void _V0iter__apply_k671(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k671, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k671, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-atom 23 9) (close _V0iter__apply_k672) (bruijn ##x.1252 0 0) (##inline ##sys.car (bruijn ##expr.92 3 0)) #f)
V_CALL(VGetArg(upenv, 23-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k672, env)}),
      _var0,
      VInlineCar(
        upenv->up->up->vars[0]),
      VEncodeBool(false));
 }
}
static void _V0iter__apply_k670(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k670, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k670, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 29 13) (close _V0iter__apply_k671) (bruijn y 3 0))
V_CALL(VGetArg(upenv, 29-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k671, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0iter__apply_k669(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k669, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k669, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn lift-literal 21 7) (close _V0iter__apply_k670) (bruijn y 2 0))
V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k670, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0iter__apply_k668(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k668, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k668, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.92 0 0))) ((bruijn iter-atom 20 9) (close _V0iter__apply_k669) (bruijn fun 10 1) (##inline ##sys.car (bruijn ##expr.90 3 0)) #f) ((bruijn ##k.1238 5 0) #f)) ((bruijn ##k.1238 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k669, env)}),
      VGetArg(upenv, 10-1, 1),
      VInlineCar(
        upenv->up->up->vars[0]),
      VEncodeBool(false));
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
static void _V0iter__apply_k667(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k667, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k667, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_k668) (##inline ##sys.cdr (bruijn ##expr.91 1 0)))
V_CALL_FUNC(_V0iter__apply_k668, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0iter__apply_k666(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k666, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k666, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.91 0 0)) ((close _V0iter__apply_k667) (##inline ##sys.car (bruijn ##expr.91 0 0))) ((bruijn ##k.1238 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__apply_k667, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k665(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k665, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k665, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.90 0 0)) ((close _V0iter__apply_k666) (##inline ##sys.cdr (bruijn ##expr.90 0 0))) ((bruijn ##k.1238 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__apply_k666, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k664(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k664, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k664, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1240 0 0) ((close _V0iter__apply_k665) (##inline ##sys.cdr (bruijn ##expr.89 1 1))) ((bruijn ##k.1238 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k665, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda159, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.89 0 1)) ((bruijn equal? 22 35) (close _V0iter__apply_k664) (quote set!) (##inline ##sys.car (bruijn ##expr.89 0 1))) ((bruijn ##k.1238 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 22-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k664, env)}),
      _V0set_B,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k680(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k680, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k680, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 12 1) (bruijn ##k.1222 7 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn ##x.1231 2 0) (##inline ##sys.cons (bruijn ##x.1233 1 0) (##inline ##sys.cons (bruijn ##x.1235 0 0) (quote ()))))))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons(
        _V0if,
        VInlineCons(
        upenv->up->vars[0],
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VNULL)))));
 }
}
static void _V0iter__apply_k679(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k679, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k679, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-apply 22 10) (close _V0iter__apply_k680) (bruijn fun 12 1) (##inline ##sys.car (bruijn ##expr.96 2 0)))
V_CALL(VGetArg(upenv, 22-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k680, env)}),
      VGetArg(upenv, 12-1, 1),
      VInlineCar(
        upenv->up->vars[0]));
 }
}
static void _V0iter__apply_k678(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k678, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k678, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-apply 21 10) (close _V0iter__apply_k679) (bruijn fun 11 1) (##inline ##sys.car (bruijn ##expr.95 2 0)))
V_CALL(VGetArg(upenv, 21-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k679, env)}),
      VGetArg(upenv, 11-1, 1),
      VInlineCar(
        upenv->up->vars[0]));
 }
}
static void _V0iter__apply_k677(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k677, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k677, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.96 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.96 0 0))) ((bruijn iter-atom 20 9) (close _V0iter__apply_k678) (bruijn fun 10 1) (##inline ##sys.car (bruijn ##expr.94 2 0)) #f) ((bruijn ##k.1222 4 0) #f)) ((bruijn ##k.1222 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k678, env)}),
      VGetArg(upenv, 10-1, 1),
      VInlineCar(
        upenv->up->vars[0]),
      VEncodeBool(false));
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
static void _V0iter__apply_k676(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k676, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k676, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.95 0 0)) ((close _V0iter__apply_k677) (##inline ##sys.cdr (bruijn ##expr.95 0 0))) ((bruijn ##k.1222 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__apply_k677, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k675(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k675, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k675, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.94 0 0)) ((close _V0iter__apply_k676) (##inline ##sys.cdr (bruijn ##expr.94 0 0))) ((bruijn ##k.1222 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__apply_k676, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k674(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k674, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k674, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1224 0 0) ((close _V0iter__apply_k675) (##inline ##sys.cdr (bruijn ##expr.93 1 1))) ((bruijn ##k.1222 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k675, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda160, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.93 0 1)) ((bruijn equal? 23 35) (close _V0iter__apply_k674) (quote if) (##inline ##sys.car (bruijn ##expr.93 0 1))) ((bruijn ##k.1222 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 23-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k674, env)}),
      _V0if,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k690(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k690, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k690, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 15 1) (bruijn ##k.1200 9 0) (##inline ##sys.cons (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 4 0) (quote ()))) (bruijn ##x.1210 0 0)))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons(
        VInlineCons(
        _V0close,
        VInlineCons(
        upenv->up->up->up->vars[0],
        VNULL)),
        _var0));
 }
}
static void _V0iter__apply_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda162, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda162, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-atom 26 9) (bruijn ##k.1211 0 0) (bruijn fun 16 1) (bruijn x 0 1) #f)
V_CALL(VGetArg(upenv, 26-1, 9), runtime,
      _var0,
      VGetArg(upenv, 16-1, 1),
      _var1,
      VEncodeBool(false));
 }
}
static void _V0iter__apply_k689(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k689, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k689, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 32 32) (close _V0iter__apply_k690) (close _V0iter__apply_lambda162) (##inline ##sys.cdr (bruijn ##expr.97 8 1)))
V_CALL(VGetArg(upenv, 32-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k690, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda162, env)}),
      VInlineCdr(
        VGetArg(upenv, 8-1, 1)));
 }
}
static void _V0iter__apply_k688(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k688, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k688, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0iter__apply_k689) (bruijn functions 24 4) (bruijn ##x.1213 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k689, env)}),
      VEncodeInt(24l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0iter__apply_k687(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k687, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k687, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 30 56) (close _V0iter__apply_k688) (##inline ##sys.cons (bruijn lamb 1 0) (##inline ##sys.cons (quote #f) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.99 3 0)) (##inline ##sys.cons (bruijn ##x.1219 0 0) (quote ()))) (quote ())))) (bruijn functions 23 4))
V_CALL(VGetArg(upenv, 30-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k688, env)}),
      VInlineCons(
        upenv->vars[0],
        VInlineCons(
        VEncodeBool(false),
        VInlineCons(
        VInlineCons(
        VInlineCar(
        upenv->up->up->vars[0]),
        VInlineCons(
        _var0,
        VNULL)),
        VNULL))),
      VGetArg(upenv, 23-1, 4));
 }
}
static void _V0iter__apply_k686(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k686, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k686, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-apply 22 10) (close _V0iter__apply_k687) (bruijn fun 12 1) (##inline ##sys.car (bruijn ##expr.100 1 0)))
V_CALL(VGetArg(upenv, 22-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k687, env)}),
      VGetArg(upenv, 12-1, 1),
      VInlineCar(
        upenv->vars[0]));
 }
}
static void _V0iter__apply_k685(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k685, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k685, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.100 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.100 0 0))) ((bruijn genlambda 21 1) (close _V0iter__apply_k686) (bruijn fun 11 1)) ((bruijn ##k.1200 4 0) #f)) ((bruijn ##k.1200 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k686, env)}),
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
static void _V0iter__apply_k684(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k684, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k684, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.99 0 0)) ((close _V0iter__apply_k685) (##inline ##sys.cdr (bruijn ##expr.99 0 0))) ((bruijn ##k.1200 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__apply_k685, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k683(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k683, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k683, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1203 0 0) ((close _V0iter__apply_k684) (##inline ##sys.cdr (bruijn ##expr.98 1 0))) ((bruijn ##k.1200 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__apply_k684, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k682(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k682, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k682, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.98 0 0)) ((bruijn equal? 25 35) (close _V0iter__apply_k683) (quote lambda) (##inline ##sys.car (bruijn ##expr.98 0 0))) ((bruijn ##k.1200 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 25-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k683, env)}),
      _V0lambda,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda161, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.97 0 1)) ((close _V0iter__apply_k682) (##inline ##sys.car (bruijn ##expr.97 0 1))) ((bruijn ##k.1200 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL_FUNC(_V0iter__apply_k682, env, runtime,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k692(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k692, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k692, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1180 1 0) (##inline ##sys.cdr (bruijn ##expr.101 4 1)) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        upenv->up->up->up->vars[1]),
      VNULL);
 }
}
static void _V0loop_k694(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k694, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k694, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.104 4 1) (bruijn ##k.1191 1 0) (bruijn ##expr.106 2 1) (bruijn ##x.1192 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k693(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k693, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k693, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.106 1 1))) ((bruijn reverse 30 46) (close _V0loop_k694) (bruijn ##xs.103 1 2)) ((bruijn ##k.1191 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 30-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k694, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k697(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k697, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k697, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.104 7 1) (bruijn ##k.1185 2 0) (bruijn ##expr.106 5 1) (bruijn ##x.1187 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k696(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k696, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k696, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 33 46) (close _V0loop_k697) (bruijn ##xs.103 4 2))
V_CALL(VGetArg(upenv, 33-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k697, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda169, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda169, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.105 0 1) (close _V0loop_k696) (##inline ##sys.cdr (bruijn ##expr.106 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.106 3 1)) (bruijn ##xs.103 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k696, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 31 36) (bruijn ##k.1184 0 0) (close _V0loop_lambda169))
V_CALL(VGetArg(upenv, 31-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda169, env)}));
 }
}
static void _V0loop_k695(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k695, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k695, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 30 21) (bruijn ##k.1182 1 0) (close _V0loop_lambda168) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 30-1, 21), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda168, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda167, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda167, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k693) (close _V0loop_k695))
V_CALL_FUNC(_V0loop_k693, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k695, env)}));
 }
}
static void _V0iter__apply_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda166, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter__apply_k692) (bruijn loop 0 1) (close _V0loop_lambda167))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k692, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda167, env)})
    );
 }
}
static void _V0iter__apply_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda165, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda165, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__apply_lambda166) (bruijn ##k.1179 0 0) #f)
V_CALL_FUNC(_V0iter__apply_lambda166, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
static void _V0iter__apply_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_lambda164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 26 36) (bruijn ##k.1178 0 0) (close _V0iter__apply_lambda165))
V_CALL(VGetArg(upenv, 26-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda165, env)}));
 }
}
static void _V0iter__apply_k700(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k700, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k700, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.77 11 1) (bruijn ##k.1194 3 0) (bruijn ##x.1196 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0iter__apply_k699(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k699, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k699, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 28 56) (close _V0iter__apply_k700) (bruijn ##x.1197 1 0) (bruijn ##x.1198 0 0))
V_CALL(VGetArg(upenv, 28-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k700, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0iter__apply_lambda171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda171, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda171, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-atom 21 9) (bruijn ##k.1199 0 0) (bruijn fun 11 1) (bruijn x 0 1) #f)
V_CALL(VGetArg(upenv, 21-1, 9), runtime,
      _var0,
      VGetArg(upenv, 11-1, 1),
      _var1,
      VEncodeBool(false));
 }
}
static void _V0iter__apply_k698(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k698, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k698, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 27 32) (close _V0iter__apply_k699) (close _V0iter__apply_lambda171) (bruijn xs 1 2))
V_CALL(VGetArg(upenv, 27-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k699, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda171, env)}),
      upenv->vars[2]);
 }
}
static void _V0iter__apply_lambda170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__apply_lambda170, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda170, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn iter-atom 19 9) (close _V0iter__apply_k698) (bruijn fun 9 1) (##inline ##sys.car (bruijn ##expr.101 1 1)) #t) ((bruijn ##k.1194 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 19-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k698, env)}),
      VGetArg(upenv, 9-1, 1),
      VInlineCar(
        upenv->vars[1]),
      VEncodeBool(true));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda163, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.101 0 1)) ((bruijn call-with-values 25 21) (bruijn ##k.1176 0 0) (close _V0iter__apply_lambda164) (close _V0iter__apply_lambda170)) ((bruijn ##k.1176 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 25-1, 21), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda164, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda170, env)}));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__apply_k701(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k701, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k701, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 25 34) (bruijn ##k.1169 6 0) (##string ##string.1790))
V_CALL(VGetArg(upenv, 25-1, 34), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1790.sym, VPOINTER_OTHER));
 }
}
static void _V0iter__apply_k691(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k691, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k691, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda163) (close _V0iter__apply_k701) (bruijn ##input.78 5 1))
V_CALL_FUNC(_V0iter__apply_lambda163, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k701, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0iter__apply_k681(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k681, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k681, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda161) (close _V0iter__apply_k691) (bruijn ##input.78 4 1))
V_CALL_FUNC(_V0iter__apply_lambda161, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k691, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0iter__apply_k673(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k673, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k673, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda160) (close _V0iter__apply_k681) (bruijn ##input.78 3 1))
V_CALL_FUNC(_V0iter__apply_lambda160, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k681, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0iter__apply_k663(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k663, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k663, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda159) (close _V0iter__apply_k673) (bruijn ##input.78 2 1))
V_CALL_FUNC(_V0iter__apply_lambda159, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k673, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0iter__apply_k651(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__apply_k651, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_k651, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__apply_lambda158) (close _V0iter__apply_k663) (bruijn ##input.78 1 1))
V_CALL_FUNC(_V0iter__apply_lambda158, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k663, env)}),
      upenv->vars[1]);
 }
}
static void _V0iter__apply_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda156, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__apply_lambda157) (close _V0iter__apply_k651) (bruijn ##input.78 0 1))
V_CALL_FUNC(_V0iter__apply_lambda157, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_k651, env)}),
      _var1);
 }
}
static void _V0iter__apply_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__apply_lambda155, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda155, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__apply_lambda156) (bruijn ##k.1168 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0iter__apply_lambda156, env, runtime,
      _var0,
      upenv->vars[2]);
 }
}
static void _V0iter__apply_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__apply_lambda154, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__apply_lambda154, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 17 36) (bruijn ##k.1167 0 0) (close _V0iter__apply_lambda155))
V_CALL(VGetArg(upenv, 17-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda155, env)}));
 }
}
static void _V0to__functions_k583(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k583, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k584) (bruijn iter-apply 9 10) (close _V0iter__apply_lambda154))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k584, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__apply_lambda154, env)})
    );
 }
}
static void _V0iter__atom_k702(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k702, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k702, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1416 0 0) ((bruijn ##kk.54 3 1) (bruijn ##k.1414 1 0) (bruijn expr 4 2)) ((bruijn ##k.1414 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[2]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_lambda175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda175, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 1)) ((bruijn equal? 19 35) (close _V0iter__atom_k702) (quote bruijn) (##inline ##sys.car (bruijn ##expr.56 0 1))) ((bruijn ##k.1414 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 19-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k702, env)}),
      _V0bruijn,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k710(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k710, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k710, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 10 1) (bruijn ##k.1396 7 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 3 0) (quote ()))))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons(
        _V0close,
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V0iter__atom_k709(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k709, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k709, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k710) (bruijn functions 19 4) (bruijn ##x.1405 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k710, env)}),
      VEncodeInt(19l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0iter__atom_k708(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k708, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k708, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 25 56) (close _V0iter__atom_k709) (##inline ##sys.cons (bruijn lamb 1 0) (##inline ##sys.cons (quote #t) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.58 3 0)) (##inline ##sys.cons (bruijn ##x.1411 0 0) (quote ()))) (quote ())))) (bruijn functions 18 4))
V_CALL(VGetArg(upenv, 25-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k709, env)}),
      VInlineCons(
        upenv->vars[0],
        VInlineCons(
        VEncodeBool(true),
        VInlineCons(
        VInlineCons(
        VInlineCar(
        upenv->up->up->vars[0]),
        VInlineCons(
        _var0,
        VNULL)),
        VNULL))),
      VGetArg(upenv, 18-1, 4));
 }
}
static void _V0iter__atom_k707(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k707, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k707, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-apply 17 10) (close _V0iter__atom_k708) (bruijn fun 8 1) (##inline ##sys.car (bruijn ##expr.59 1 0)))
V_CALL(VGetArg(upenv, 17-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k708, env)}),
      VGetArg(upenv, 8-1, 1),
      VInlineCar(
        upenv->vars[0]));
 }
}
static void _V0iter__atom_k706(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k706, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k706, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.59 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.59 0 0))) ((bruijn genlambda 16 1) (close _V0iter__atom_k707) (bruijn fun 7 1)) ((bruijn ##k.1396 3 0) #f)) ((bruijn ##k.1396 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k707, env)}),
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
static void _V0iter__atom_k705(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k705, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k705, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.58 0 0)) ((close _V0iter__atom_k706) (##inline ##sys.cdr (bruijn ##expr.58 0 0))) ((bruijn ##k.1396 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__atom_k706, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k704(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k704, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k704, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1398 0 0) ((close _V0iter__atom_k705) (##inline ##sys.cdr (bruijn ##expr.57 1 1))) ((bruijn ##k.1396 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k705, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_lambda176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda176, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.57 0 1)) ((bruijn equal? 20 35) (close _V0iter__atom_k704) (quote lambda) (##inline ##sys.car (bruijn ##expr.57 0 1))) ((bruijn ##k.1396 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 20-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k704, env)}),
      _V0lambda,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k720(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k720, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k720, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 13 1) (bruijn ##k.1374 9 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 3 0) (quote ()))))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons(
        _V0close,
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V0iter__atom_k719(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k719, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k719, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k720) (bruijn functions 22 4) (bruijn ##x.1385 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k720, env)}),
      VEncodeInt(22l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0iter__atom_k718(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k718, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k718, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 28 56) (close _V0iter__atom_k719) (##inline ##sys.cons (bruijn lamb 1 0) (##inline ##sys.cons (quote #t) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.61 5 0)) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.1392 0 0) (quote ())))) (quote ())))) (bruijn functions 21 4))
V_CALL(VGetArg(upenv, 28-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k719, env)}),
      VInlineCons(
        upenv->vars[0],
        VInlineCons(
        VEncodeBool(true),
        VInlineCons(
        VInlineCons(
        VInlineCar(
        VGetArg(upenv, 5-1, 0)),
        VInlineCons(
        _V0_P,
        VInlineCons(
        _var0,
        VNULL))),
        VNULL))),
      VGetArg(upenv, 21-1, 4));
 }
}
static void _V0iter__atom_k717(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k717, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k717, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-apply 20 10) (close _V0iter__atom_k718) (bruijn fun 11 1) (##inline ##sys.car (bruijn ##expr.63 1 0)))
V_CALL(VGetArg(upenv, 20-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k718, env)}),
      VGetArg(upenv, 11-1, 1),
      VInlineCar(
        upenv->vars[0]));
 }
}
static void _V0iter__atom_k716(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k716, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k716, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.63 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.63 0 0))) ((bruijn genlambda 19 1) (close _V0iter__atom_k717) (bruijn fun 10 1)) ((bruijn ##k.1374 5 0) #f)) ((bruijn ##k.1374 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k717, env)}),
      VGetArg(upenv, 10-1, 1));
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
static void _V0iter__atom_k715(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k715, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k715, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1379 0 0) ((close _V0iter__atom_k716) (##inline ##sys.cdr (bruijn ##expr.62 1 0))) ((bruijn ##k.1374 4 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k716, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k714(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k714, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k714, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.62 0 0)) ((bruijn equal? 24 35) (close _V0iter__atom_k715) (quote +) (##inline ##sys.car (bruijn ##expr.62 0 0))) ((bruijn ##k.1374 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 24-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k715, env)}),
      _V0_P,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k713(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k713, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k713, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.61 0 0)) ((close _V0iter__atom_k714) (##inline ##sys.cdr (bruijn ##expr.61 0 0))) ((bruijn ##k.1374 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__atom_k714, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k712(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k712, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k712, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1376 0 0) ((close _V0iter__atom_k713) (##inline ##sys.cdr (bruijn ##expr.60 1 1))) ((bruijn ##k.1374 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k713, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_lambda177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda177, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.60 0 1)) ((bruijn equal? 21 35) (close _V0iter__atom_k712) (quote lambda) (##inline ##sys.car (bruijn ##expr.60 0 1))) ((bruijn ##k.1374 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 21-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k712, env)}),
      _V0lambda,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k726(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k726, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k726, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 10 1) (bruijn ##k.1362 5 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn lamb 3 0) (quote ()))))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VInlineCons(
        _V0close,
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V0iter__atom_k725(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k725, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k725, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k726) (bruijn functions 19 4) (bruijn ##x.1368 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k726, env)}),
      VEncodeInt(19l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0iter__atom_k724(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k724, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k724, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 25 56) (close _V0iter__atom_k725) (##inline ##sys.cons (bruijn lamb 1 0) (##inline ##sys.cons (quote #t) (bruijn ##x.1371 0 0))) (bruijn functions 18 4))
V_CALL(VGetArg(upenv, 25-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k725, env)}),
      VInlineCons(
        upenv->vars[0],
        VInlineCons(
        VEncodeBool(true),
        _var0)),
      VGetArg(upenv, 18-1, 4));
 }
}
static void _V0iter__atom_lambda179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda179, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda179, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-lambda 18 8) (bruijn ##k.1372 0 0) (bruijn fun 9 1) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      _var0,
      VGetArg(upenv, 9-1, 1),
      _var1);
 }
}
static void _V0iter__atom_k723(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k723, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k723, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 24 32) (close _V0iter__atom_k724) (close _V0iter__atom_lambda179) (##inline ##sys.cdr (bruijn ##expr.64 2 1)))
V_CALL(VGetArg(upenv, 24-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k724, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda179, env)}),
      VInlineCdr(
        upenv->up->vars[1]));
 }
}
static void _V0iter__atom_k722(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k722, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k722, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1364 0 0) ((bruijn genlambda 16 1) (close _V0iter__atom_k723) (bruijn fun 7 1)) ((bruijn ##k.1362 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k723, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_lambda178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda178, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.64 0 1)) ((bruijn equal? 22 35) (close _V0iter__atom_k722) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.64 0 1))) ((bruijn ##k.1362 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 22-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k722, env)}),
      _V0case__lambda,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k734(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k734, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k734, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 13 1) (bruijn ##k.1344 7 0) (##inline ##sys.cons (quote close) (##inline ##sys.cons (bruijn k 3 0) (quote ()))))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons(
        _V0close,
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V0iter__atom_k733(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k733, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k733, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0iter__atom_k734) (bruijn functions 22 4) (bruijn ##x.1353 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k734, env)}),
      VEncodeInt(22l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0iter__atom_k732(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k732, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k732, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 28 56) (close _V0iter__atom_k733) (##inline ##sys.cons (bruijn k 1 0) (##inline ##sys.cons (quote #t) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.66 3 0)) (##inline ##sys.cons (bruijn ##x.1359 0 0) (quote ()))) (quote ())))) (bruijn functions 21 4))
V_CALL(VGetArg(upenv, 28-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k733, env)}),
      VInlineCons(
        upenv->vars[0],
        VInlineCons(
        VEncodeBool(true),
        VInlineCons(
        VInlineCons(
        VInlineCar(
        upenv->up->up->vars[0]),
        VInlineCons(
        _var0,
        VNULL)),
        VNULL))),
      VGetArg(upenv, 21-1, 4));
 }
}
static void _V0iter__atom_k731(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k731, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k731, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter-apply 20 10) (close _V0iter__atom_k732) (bruijn fun 11 1) (##inline ##sys.car (bruijn ##expr.67 1 0)))
V_CALL(VGetArg(upenv, 20-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k732, env)}),
      VGetArg(upenv, 11-1, 1),
      VInlineCar(
        upenv->vars[0]));
 }
}
static void _V0iter__atom_k730(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k730, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k730, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.67 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.67 0 0))) ((bruijn gencont 19 2) (close _V0iter__atom_k731) (bruijn fun 10 1)) ((bruijn ##k.1344 3 0) #f)) ((bruijn ##k.1344 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k731, env)}),
      VGetArg(upenv, 10-1, 1));
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
static void _V0iter__atom_k729(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k729, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k729, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.66 0 0)) ((close _V0iter__atom_k730) (##inline ##sys.cdr (bruijn ##expr.66 0 0))) ((bruijn ##k.1344 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__atom_k730, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k728(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k728, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k728, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1346 0 0) ((close _V0iter__atom_k729) (##inline ##sys.cdr (bruijn ##expr.65 1 1))) ((bruijn ##k.1344 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k729, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_lambda180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda180, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.65 0 1)) ((bruijn equal? 23 35) (close _V0iter__atom_k728) (quote continuation) (##inline ##sys.car (bruijn ##expr.65 0 1))) ((bruijn ##k.1344 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 23-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k728, env)}),
      _V0continuation,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k745(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k745, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k745, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.1340 1 0) (bruijn foreign-functions 27 3) (bruijn ##x.1341 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(27l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0iter__atom_k744(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k744, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k744, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1339 1 0) ((bruijn cons 33 56) (close _V0iter__atom_k745) (bruijn expr 17 2) (bruijn foreign-functions 26 3)) ((bruijn ##k.1340 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 33-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k745, env)}),
      VGetArg(upenv, 17-1, 2),
      VGetArg(upenv, 26-1, 3));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k746(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k746, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k746, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 16 1) (bruijn ##k.1329 9 0) (##inline ##sys.cons (quote ##foreign.function) (##inline ##sys.cons (bruijn mangled 3 0) (quote ()))))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons(
        _V10foreign_Dfunction,
        VInlineCons(
        upenv->up->up->vars[0],
        VNULL)));
 }
}
static void _V0iter__atom_k743(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k743, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k743, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k744) (close _V0iter__atom_k746))
V_CALL_FUNC(_V0iter__atom_k744, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k746, env)}));
 }
}
static void _V0iter__atom_k742(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k742, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k742, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 31 45) (close _V0iter__atom_k743) (bruijn ##x.1342 0 0))
V_CALL(VGetArg(upenv, 31-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k743, env)}),
      _var0);
 }
}
static void _V0iter__atom_k741(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k741, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k741, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn assoc 30 52) (close _V0iter__atom_k742) (bruijn mangled 0 0) (bruijn foreign-functions 23 3))
V_CALL(VGetArg(upenv, 30-1, 52), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k742, env)}),
      _var0,
      VGetArg(upenv, 23-1, 3));
 }
}
static void _V0iter__atom_k740(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k740, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k740, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.72 0 0)) ((bruijn mangle-foreign-function 29 51) (close _V0iter__atom_k741) (##inline ##sys.car (bruijn ##expr.72 0 0))) ((bruijn ##k.1329 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 29-1, 51), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k741, env)}),
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k739(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k739, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k739, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.71 0 0)) ((close _V0iter__atom_k740) (##inline ##sys.cdr (bruijn ##expr.71 0 0))) ((bruijn ##k.1329 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__atom_k740, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k738(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k738, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k738, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.70 0 0)) ((close _V0iter__atom_k739) (##inline ##sys.cdr (bruijn ##expr.70 0 0))) ((bruijn ##k.1329 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__atom_k739, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k737(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k737, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k737, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 0)) ((close _V0iter__atom_k738) (##inline ##sys.cdr (bruijn ##expr.69 0 0))) ((bruijn ##k.1329 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter__atom_k738, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k736(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k736, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k736, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1331 0 0) ((close _V0iter__atom_k737) (##inline ##sys.cdr (bruijn ##expr.68 1 1))) ((bruijn ##k.1329 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k737, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_lambda181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda181, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.68 0 1)) ((bruijn equal? 24 35) (close _V0iter__atom_k736) (quote ##foreign.function) (##inline ##sys.car (bruijn ##expr.68 0 1))) ((bruijn ##k.1329 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 24-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k736, env)}),
      _V10foreign_Dfunction,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k750(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k750, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k750, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 11 1) (bruijn ##k.1319 3 0) (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn ##x.1326 0 0) (quote ()))))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
        _V0quote,
        VInlineCons(
        _var0,
        VNULL)));
 }
}
static void _V0iter__atom_k749(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k749, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k749, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.74 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.74 0 0))) ((bruijn lift-literal 20 7) (close _V0iter__atom_k750) (##inline ##sys.car (bruijn ##expr.74 0 0))) ((bruijn ##k.1319 2 0) #f)) ((bruijn ##k.1319 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 20-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k750, env)}),
      VInlineCar(
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
static void _V0iter__atom_k748(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k748, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k748, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1321 0 0) ((close _V0iter__atom_k749) (##inline ##sys.cdr (bruijn ##expr.73 1 1))) ((bruijn ##k.1319 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k749, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_lambda182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda182, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.73 0 1)) ((bruijn equal? 25 35) (close _V0iter__atom_k748) (quote quote) (##inline ##sys.car (bruijn ##expr.73 0 1))) ((bruijn ##k.1319 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 25-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k748, env)}),
      _V0quote,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k754(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k754, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k754, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 12 1) (bruijn ##k.1310 3 0) (##inline ##sys.cons (quote ##inline) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.76 1 0)) (bruijn ##x.1316 0 0))))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
        _V10inline,
        VInlineCons(
        VInlineCar(
        upenv->vars[0]),
        _var0)));
 }
}
static void _V0iter__atom_lambda184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda184, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda184, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter-atom 22 9) (bruijn ##k.1317 0 0) (bruijn fun 13 1) (bruijn x 0 1) #f)
V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      _var0,
      VGetArg(upenv, 13-1, 1),
      _var1,
      VEncodeBool(false));
 }
}
static void _V0iter__atom_k753(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k753, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k753, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 0)) ((bruijn map 28 32) (close _V0iter__atom_k754) (close _V0iter__atom_lambda184) (##inline ##sys.cdr (bruijn ##expr.76 0 0))) ((bruijn ##k.1310 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 28-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k754, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda184, env)}),
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k752(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k752, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k752, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1312 0 0) ((close _V0iter__atom_k753) (##inline ##sys.cdr (bruijn ##expr.75 1 1))) ((bruijn ##k.1310 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k753, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_lambda183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda183, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.75 0 1)) ((bruijn equal? 26 35) (close _V0iter__atom_k752) (quote ##inline) (##inline ##sys.car (bruijn ##expr.75 0 1))) ((bruijn ##k.1310 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 26-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k752, env)}),
      _V10inline,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__atom_k759(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k759, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k759, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1309 0 0) ((bruijn ##k.1308 2 0) (bruijn x 4 1)) ((bruijn lift-intrinsic 24 6) (bruijn ##k.1308 2 0) (bruijn x 4 1) (bruijn intrin 1 0)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 24-1, 6), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[1],
      upenv->vars[0]);
}
 }
}
static void _V0iter__atom_k758(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k758, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k758, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 30 45) (close _V0iter__atom_k759) (bruijn intrin 0 0))
V_CALL(VGetArg(upenv, 30-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k759, env)}),
      _var0);
 }
}
static void _V0iter__atom_k757(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k757, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k757, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1307 1 0) (if (bruijn func-position? 13 3) ((bruijn ##k.1308 0 0) (bruijn x 2 1)) ((bruijn lookup-intrinsic2 29 20) (close _V0iter__atom_k758) (bruijn x 2 1))) ((bruijn lift-literal 22 7) (bruijn ##k.1308 0 0) (bruijn x 2 1)))
if(VDecodeBool(
upenv->vars[0])) {
if(VDecodeBool(
VGetArg(upenv, 13-1, 3))) {
V_CALL(_var0, runtime,
      upenv->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 29-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k758, env)}),
      upenv->up->vars[1]);
}
} else {
V_CALL(VGetArg(upenv, 22-1, 7), runtime,
      _var0,
      upenv->up->vars[1]);
}
 }
}
static void _V0iter__atom_k760(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k760, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k760, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.54 12 1) (bruijn ##k.1305 2 0) (bruijn ##x.1306 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0iter__atom_k756(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k756, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k756, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k757) (close _V0iter__atom_k760))
V_CALL_FUNC(_V0iter__atom_k757, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k760, env)}));
 }
}
static void _V0iter__atom_lambda185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda185, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 27 16) (close _V0iter__atom_k756) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 27-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k756, env)}),
      _var1);
 }
}
static void _V0iter__atom_k761(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k761, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k761, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 27 34) (bruijn ##k.1295 9 0) (##string ##string.1790))
V_CALL(VGetArg(upenv, 27-1, 34), runtime,
      VGetArg(upenv, 9-1, 0),
      VEncodePointer(&_V10string_D1790.sym, VPOINTER_OTHER));
 }
}
static void _V0iter__atom_k755(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k755, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k755, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda185) (close _V0iter__atom_k761) (bruijn ##input.55 8 1))
V_CALL_FUNC(_V0iter__atom_lambda185, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k761, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0iter__atom_k751(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k751, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k751, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda183) (close _V0iter__atom_k755) (bruijn ##input.55 7 1))
V_CALL_FUNC(_V0iter__atom_lambda183, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k755, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0iter__atom_k747(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k747, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k747, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda182) (close _V0iter__atom_k751) (bruijn ##input.55 6 1))
V_CALL_FUNC(_V0iter__atom_lambda182, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k751, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0iter__atom_k735(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k735, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k735, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda181) (close _V0iter__atom_k747) (bruijn ##input.55 5 1))
V_CALL_FUNC(_V0iter__atom_lambda181, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k747, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0iter__atom_k727(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k727, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k727, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda180) (close _V0iter__atom_k735) (bruijn ##input.55 4 1))
V_CALL_FUNC(_V0iter__atom_lambda180, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k735, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0iter__atom_k721(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k721, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k721, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda178) (close _V0iter__atom_k727) (bruijn ##input.55 3 1))
V_CALL_FUNC(_V0iter__atom_lambda178, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k727, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0iter__atom_k711(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k711, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k711, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda177) (close _V0iter__atom_k721) (bruijn ##input.55 2 1))
V_CALL_FUNC(_V0iter__atom_lambda177, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k721, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0iter__atom_k703(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k703, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k703, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda176) (close _V0iter__atom_k711) (bruijn ##input.55 1 1))
V_CALL_FUNC(_V0iter__atom_lambda176, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k711, env)}),
      upenv->vars[1]);
 }
}
static void _V0iter__atom_lambda174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda174, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda175) (close _V0iter__atom_k703) (bruijn ##input.55 0 1))
V_CALL_FUNC(_V0iter__atom_lambda175, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k703, env)}),
      _var1);
 }
}
static void _V0iter__atom_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda173, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda173, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda174) (bruijn ##k.1294 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0iter__atom_lambda174, env, runtime,
      _var0,
      upenv->vars[2]);
 }
}
static void _V0iter__atom_lambda172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0iter__atom_lambda172, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda172, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn call/cc 16 36) (bruijn ##k.1293 0 0) (close _V0iter__atom_lambda173))
V_CALL(VGetArg(upenv, 16-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda173, env)}));
 }
}
static void _V0to__functions_k582(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k582, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k583) (bruijn iter-atom 8 9) (close _V0iter__atom_lambda172))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k583, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda172, env)})
    );
 }
}
static void _V0iter__lambda_k763(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k763, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k763, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.47 4 1) (bruijn ##k.1435 2 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.49 2 1)) (##inline ##sys.cons (bruijn ##x.1441 0 0) (quote ()))))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->vars[0],
      VInlineCons(
        VInlineCar(
        upenv->up->vars[1]),
        VInlineCons(
        _var0,
        VNULL)));
 }
}
static void _V0iter__lambda_k762(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k762, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k762, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.50 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.50 0 0))) ((bruijn iter-apply 12 10) (close _V0iter__lambda_k763) (bruijn fun 4 1) (##inline ##sys.car (bruijn ##expr.50 0 0))) ((bruijn ##k.1435 1 0) #f)) ((bruijn ##k.1435 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 12-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k763, env)}),
      upenv->up->up->up->vars[1],
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__lambda_lambda189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda189, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.49 0 1)) ((close _V0iter__lambda_k762) (##inline ##sys.cdr (bruijn ##expr.49 0 1))) ((bruijn ##k.1435 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL_FUNC(_V0iter__lambda_k762, env, runtime,
      VInlineCdr(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__lambda_k768(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k768, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k768, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.47 7 1) (bruijn ##k.1423 4 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.51 4 1)) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.1432 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
        VInlineCar(
        upenv->up->up->up->vars[1]),
        VInlineCons(
        _V0_P,
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0iter__lambda_k767(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k767, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k767, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.53 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.53 0 0))) ((bruijn iter-apply 15 10) (close _V0iter__lambda_k768) (bruijn fun 7 1) (##inline ##sys.car (bruijn ##expr.53 0 0))) ((bruijn ##k.1423 3 0) #f)) ((bruijn ##k.1423 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 15-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k768, env)}),
      VGetArg(upenv, 7-1, 1),
      VInlineCar(
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
static void _V0iter__lambda_k766(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k766, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k766, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1426 0 0) ((close _V0iter__lambda_k767) (##inline ##sys.cdr (bruijn ##expr.52 1 0))) ((bruijn ##k.1423 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__lambda_k767, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__lambda_k765(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k765, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k765, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.52 0 0)) ((bruijn equal? 20 35) (close _V0iter__lambda_k766) (quote +) (##inline ##sys.car (bruijn ##expr.52 0 0))) ((bruijn ##k.1423 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 20-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k766, env)}),
      _V0_P,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__lambda_lambda190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda190, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.51 0 1)) ((close _V0iter__lambda_k765) (##inline ##sys.cdr (bruijn ##expr.51 0 1))) ((bruijn ##k.1423 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL_FUNC(_V0iter__lambda_k765, env, runtime,
      VInlineCdr(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter__lambda_k769(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k769, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k769, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 19 34) (bruijn ##k.1420 2 0) (##string ##string.1790))
V_CALL(VGetArg(upenv, 19-1, 34), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1790.sym, VPOINTER_OTHER));
 }
}
static void _V0iter__lambda_k764(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k764, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k764, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter__lambda_lambda190) (close _V0iter__lambda_k769) (bruijn ##input.48 1 1))
V_CALL_FUNC(_V0iter__lambda_lambda190, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k769, env)}),
      upenv->vars[1]);
 }
}
static void _V0iter__lambda_lambda188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda188, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__lambda_lambda189) (close _V0iter__lambda_k764) (bruijn ##input.48 0 1))
V_CALL_FUNC(_V0iter__lambda_lambda189, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k764, env)}),
      _var1);
 }
}
static void _V0iter__lambda_lambda187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__lambda_lambda187, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda187, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__lambda_lambda188) (bruijn ##k.1419 0 0) (bruijn lamb 1 2))
V_CALL_FUNC(_V0iter__lambda_lambda188, env, runtime,
      _var0,
      upenv->vars[2]);
 }
}
static void _V0iter__lambda_lambda186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__lambda_lambda186, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda186, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 15 36) (bruijn ##k.1418 0 0) (close _V0iter__lambda_lambda187))
V_CALL(VGetArg(upenv, 15-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_lambda187, env)}));
 }
}
static void _V0to__functions_k581(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k581, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k582) (bruijn iter-lambda 7 8) (close _V0iter__lambda_lambda186))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k582, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_lambda186, env)})
    );
 }
}
static void _V0lift__literal_k778(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k778, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k778, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1443 9 0) (##inline ##sys.cons (quote ##string) (##inline ##sys.cons (bruijn ##x.1452 0 0) (quote ()))))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VInlineCons(
        _V10string,
        VInlineCons(
        _var0,
        VNULL)));
 }
}
static void _V0lift__literal_k783(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k783, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k783, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1443 13 0) (##inline ##sys.cons (quote ##string) (##inline ##sys.cons (bruijn ##x.1455 0 0) (quote ()))))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VInlineCons(
        _V10string,
        VInlineCons(
        _var0,
        VNULL)));
 }
}
static void _V0lift__literal_k782(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k782, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k782, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdar 26 50) (close _V0lift__literal_k783) (bruijn literal-table 19 5))
V_CALL(VGetArg(upenv, 26-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k783, env)}),
      VGetArg(upenv, 19-1, 5));
 }
}
static void _V0lift__literal_k781(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k781, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k781, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0lift__literal_k782) (bruijn literal-table 18 5) (bruijn ##x.1456 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k782, env)}),
      VEncodeInt(18l), VEncodeInt(5l),
      _var0
    );
 }
}
static void _V0lift__literal_k780(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k780, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k780, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 24 56) (close _V0lift__literal_k781) (bruijn ##x.1457 0 0) (bruijn literal-table 17 5))
V_CALL(VGetArg(upenv, 24-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k781, env)}),
      _var0,
      VGetArg(upenv, 17-1, 5));
 }
}
static void _V0lift__literal_k779(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k779, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k779, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 23 56) (close _V0lift__literal_k780) (bruijn x 9 1) (bruijn ##x.1458 0 0))
V_CALL(VGetArg(upenv, 23-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k780, env)}),
      VGetArg(upenv, 9-1, 1),
      _var0);
 }
}
static void _V0lift__literal_k777(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k777, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k777, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn lookup 0 0) ((bruijn cdr 22 24) (close _V0lift__literal_k778) (bruijn lookup 0 0)) ((bruijn gensym 22 49) (close _V0lift__literal_k779) (##string ##string.1887)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k778, env)}),
      _var0);
} else {
V_CALL(VGetArg(upenv, 22-1, 49), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k779, env)}),
      VEncodePointer(&_V10string_D1887.sym, VPOINTER_OTHER));
}
 }
}
static void _V0lift__literal_k789(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k789, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k789, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##k.1462 2 0) (bruijn literal-table 20 5) (bruijn ##x.1463 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->up->vars[0],
      VEncodeInt(20l), VEncodeInt(5l),
      _var0
    );
 }
}
static void _V0lift__literal_k788(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k788, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k788, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 26 56) (close _V0lift__literal_k789) (bruijn ##x.1464 0 0) (bruijn literal-table 19 5))
V_CALL(VGetArg(upenv, 26-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k789, env)}),
      _var0,
      VGetArg(upenv, 19-1, 5));
 }
}
static void _V0lift__literal_k787(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k787, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k787, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1461 1 0) ((bruijn cons 25 56) (close _V0lift__literal_k788) (bruijn x 11 1) (quote ())) ((bruijn ##k.1462 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 25-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k788, env)}),
      VGetArg(upenv, 11-1, 1),
      VNULL);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0lift__literal_k790(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k790, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k790, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1443 11 0) (bruijn x 11 1))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V0lift__literal_k786(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k786, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k786, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0lift__literal_k787) (close _V0lift__literal_k790))
V_CALL_FUNC(_V0lift__literal_k787, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k790, env)}));
 }
}
static void _V0lift__literal_k785(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k785, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k785, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 23 45) (close _V0lift__literal_k786) (bruijn ##x.1465 0 0))
V_CALL(VGetArg(upenv, 23-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k786, env)}),
      _var0);
 }
}
static void _V0lift__literal_k784(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k784, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k784, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1459 0 0) ((bruijn assv 22 48) (close _V0lift__literal_k785) (bruijn x 8 1) (bruijn literal-table 15 5)) ((bruijn compiler-error 22 43) (bruijn ##k.1443 8 0) (##string ##string.1888) (bruijn x 8 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k785, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 15-1, 5));
} else {
V_CALL(VGetArg(upenv, 22-1, 43), runtime,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10string_D1888.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1));
}
 }
}
static void _V0lift__literal_k776(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k776, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k776, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1450 0 0) ((bruijn assoc 21 52) (close _V0lift__literal_k777) (bruijn x 7 1) (bruijn literal-table 14 5)) ((bruijn symbol? 21 16) (close _V0lift__literal_k784) (bruijn x 7 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 52), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k777, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 14-1, 5));
} else {
V_CALL(VGetArg(upenv, 21-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k784, env)}),
      VGetArg(upenv, 7-1, 1));
}
 }
}
static void _V0lift__literal_k775(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k775, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k775, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1449 0 0) ((bruijn ##k.1443 6 0) (bruijn x 6 1)) ((bruijn string? 20 10) (close _V0lift__literal_k776) (bruijn x 6 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 6-1, 1));
} else {
V_CALL(VGetArg(upenv, 20-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k776, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0lift__literal_k774(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k774, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k774, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1448 0 0) ((bruijn ##k.1443 5 0) (bruijn x 5 1)) ((bruijn null? 19 44) (close _V0lift__literal_k775) (bruijn x 5 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VGetArg(upenv, 5-1, 1));
} else {
V_CALL(VGetArg(upenv, 19-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k775, env)}),
      VGetArg(upenv, 5-1, 1));
}
 }
}
static void _V0lift__literal_k773(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k773, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k773, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1447 0 0) ((bruijn ##k.1443 4 0) (bruijn x 4 1)) ((bruijn eq? 18 6) (close _V0lift__literal_k774) (bruijn x 4 1) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 18-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k774, env)}),
      upenv->up->up->up->vars[1],
      VEncodeBool(false));
}
 }
}
static void _V0lift__literal_k772(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k772, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k772, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1446 0 0) ((bruijn ##k.1443 3 0) (bruijn x 3 1)) ((bruijn eq? 17 6) (close _V0lift__literal_k773) (bruijn x 3 1) #t))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 17-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k773, env)}),
      upenv->up->up->vars[1],
      VEncodeBool(true));
}
 }
}
static void _V0lift__literal_k771(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k771, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k771, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1445 0 0) ((bruijn ##k.1443 2 0) (bruijn x 2 1)) ((bruijn char? 16 7) (close _V0lift__literal_k772) (bruijn x 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k772, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0lift__literal_k770(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__literal_k770, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_k770, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1444 0 0) ((bruijn ##k.1443 1 0) (bruijn x 1 1)) ((bruijn number? 15 8) (close _V0lift__literal_k771) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 15-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k771, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0lift__literal_lambda191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0lift__literal_lambda191, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__literal_lambda191, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn integer? 14 9) (close _V0lift__literal_k770) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 14-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_k770, env)}),
      _var1);
 }
}
static void _V0to__functions_k580(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k580, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k581) (bruijn lift-literal 6 7) (close _V0lift__literal_lambda191))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k581, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__literal_lambda191, env)})
    );
 }
}
static void _V0lift__intrinsic_k795(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k795, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k795, runtime, upenv, 1, argc, _var0) {
  // ((bruijn car 18 30) (bruijn ##k.1466 5 0) (bruijn lookup 2 0))
V_CALL(VGetArg(upenv, 18-1, 30), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0]);
 }
}
static void _V0lift__intrinsic_k794(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k794, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k794, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0lift__intrinsic_k795) (bruijn literal-table 10 5) (bruijn ##x.1468 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k795, env)}),
      VEncodeInt(10l), VEncodeInt(5l),
      _var0
    );
 }
}
static void _V0lift__intrinsic_k793(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k793, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k793, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 16 56) (close _V0lift__intrinsic_k794) (bruijn lookup 0 0) (bruijn literal-table 9 5))
V_CALL(VGetArg(upenv, 16-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k794, env)}),
      _var0,
      VGetArg(upenv, 9-1, 5));
 }
}
static void _V0lift__intrinsic_k792(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k792, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k792, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn lookup 0 0) ((bruijn car 15 30) (bruijn ##k.1466 2 0) (bruijn lookup 0 0)) ((bruijn cons 15 56) (close _V0lift__intrinsic_k793) (bruijn key 1 0) (bruijn intrin 2 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 30), runtime,
      upenv->up->vars[0],
      _var0);
} else {
V_CALL(VGetArg(upenv, 15-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k793, env)}),
      upenv->vars[0],
      upenv->up->vars[2]);
}
 }
}
static void _V0lift__intrinsic_k791(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lift__intrinsic_k791, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_k791, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn assoc 14 52) (close _V0lift__intrinsic_k792) (bruijn key 0 0) (bruijn literal-table 7 5))
V_CALL(VGetArg(upenv, 14-1, 52), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k792, env)}),
      _var0,
      VGetArg(upenv, 7-1, 5));
 }
}
static void _V0lift__intrinsic_lambda192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0lift__intrinsic_lambda192, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lift__intrinsic_lambda192, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn list 13 57) (close _V0lift__intrinsic_k791) (quote ##intrinsic) (bruijn sym 0 1))
V_CALL(VGetArg(upenv, 13-1, 57), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_k791, env)}),
      _V10intrinsic,
      _var1);
 }
}
static void _V0to__functions_k579(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k579, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k580) (bruijn lift-intrinsic 5 6) (close _V0lift__intrinsic_lambda192))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k580, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lift__intrinsic_lambda192, env)})
    );
 }
}
static void _V0to__functions_k578(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k578, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k579) (bruijn literal-table 4 5) (quote ()))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k579, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VNULL
    );
 }
}
static void _V0to__functions_k577(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k577, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k578) (bruijn functions 3 4) (quote ()))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k578, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VNULL
    );
 }
}
static void _V0to__functions_k576(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k576, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k577) (bruijn foreign-functions 2 3) (quote ()))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k577, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VNULL
    );
 }
}
static void _V0gencont_k798(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gencont_k798, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_k798, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 12 47) (bruijn ##k.1469 3 0) (bruijn ##x.1471 0 0))
V_CALL(VGetArg(upenv, 12-1, 47), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0gencont_k797(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gencont_k797, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_k797, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn sprintf 11 33) (close _V0gencont_k798) (##string ##string.1889) (bruijn fun 2 1) (bruijn curcont 10 4))
V_CALL(VGetArg(upenv, 11-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_k798, env)}),
      VEncodePointer(&_V10string_D1889.sym, VPOINTER_OTHER),
      upenv->up->vars[1],
      VGetArg(upenv, 10-1, 4));
 }
}
static void _V0gencont_k796(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gencont_k796, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_k796, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0gencont_k797) (bruijn curcont 9 4) (bruijn ##x.1472 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_k797, env)}),
      VEncodeInt(9l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0gencont_lambda193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0gencont_lambda193, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gencont_lambda193, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn + 9 27) (close _V0gencont_k796) (bruijn curcont 8 4) 1)
V_CALL(VGetArg(upenv, 9-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_k796, env)}),
      VGetArg(upenv, 8-1, 4),
      VEncodeInt(1l));
 }
}
static void _V0to__functions_k575(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__functions_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_k575, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0to__functions_k576) (bruijn gencont 1 2) (close _V0gencont_lambda193))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k576, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gencont_lambda193, env)})
    );
 }
}
static void _V0genlambda_k801(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0genlambda_k801, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_k801, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 11 47) (bruijn ##k.1473 3 0) (bruijn ##x.1475 0 0))
V_CALL(VGetArg(upenv, 11-1, 47), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0genlambda_k800(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0genlambda_k800, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_k800, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn sprintf 10 33) (close _V0genlambda_k801) (##string ##string.1890) (bruijn fun 2 1) (bruijn curlambda 9 3))
V_CALL(VGetArg(upenv, 10-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_k801, env)}),
      VEncodePointer(&_V10string_D1890.sym, VPOINTER_OTHER),
      upenv->up->vars[1],
      VGetArg(upenv, 9-1, 3));
 }
}
static void _V0genlambda_k799(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0genlambda_k799, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_k799, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0genlambda_k800) (bruijn curlambda 8 3) (bruijn ##x.1476 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_k800, env)}),
      VEncodeInt(8l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0genlambda_lambda194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0genlambda_lambda194, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0genlambda_lambda194, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn + 8 27) (close _V0genlambda_k799) (bruijn curlambda 7 3) 1)
V_CALL(VGetArg(upenv, 8-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_k799, env)}),
      VGetArg(upenv, 7-1, 3),
      VEncodeInt(1l));
 }
}
static void _V0to__functions_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15) {
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda124, runtime, upenv, 16, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15) {
  struct { VEnv env; VWORD argv[16]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 16, 16, upenv);
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
  // (set! (close _V0to__functions_k575) (bruijn genlambda 0 1) (close _V0genlambda_lambda194))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_k575, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0genlambda_lambda194, env)})
    );
 }
}
static void _V0to__functions_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0to__functions_lambda123, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__functions_lambda123, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__functions_lambda124) (bruijn ##k.1047 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(_V0to__functions_lambda124, env, runtime,
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
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k69) (bruijn to-functions 4 5) (close _V0to__functions_lambda123))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k69, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__functions_lambda123, env)})
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
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
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k67) (bruijn curlambda 2 3) 0)
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k67, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeInt(0l)
    );
 }
}
static void _V0bruijn__ify_k807(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k807, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k807, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1503 0 0) ((bruijn ##kk.41 3 1) (bruijn ##k.1501 1 0) (bruijn expr 10 1)) ((bruijn ##k.1501 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 10-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__ify_lambda199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda199, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.43 0 1)) ((bruijn equal? 12 35) (close _V0bruijn__ify_k807) (quote ##foreign.declare) (##inline ##sys.car (bruijn ##expr.43 0 1))) ((bruijn ##k.1501 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 12-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k807, env)}),
      _V10foreign_Ddeclare,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__ify_k812(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k812, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k812, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.41 7 1) (bruijn ##k.1489 4 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.45 2 0)) (##inline ##sys.cons (bruijn ##x.1498 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
        _V10vcore_Ddeclare,
        VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0bruijn__ify_k811(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k811, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k811, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.46 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.46 0 0))) ((bruijn doit 12 5) (close _V0bruijn__ify_k812) (##inline ##sys.car (bruijn ##expr.46 0 0))) ((bruijn ##k.1489 3 0) #f)) ((bruijn ##k.1489 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 12-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k812, env)}),
      VInlineCar(
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
static void _V0bruijn__ify_k810(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k810, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k810, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.45 0 0)) ((close _V0bruijn__ify_k811) (##inline ##sys.cdr (bruijn ##expr.45 0 0))) ((bruijn ##k.1489 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0bruijn__ify_k811, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__ify_k809(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k809, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k809, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1491 0 0) ((close _V0bruijn__ify_k810) (##inline ##sys.cdr (bruijn ##expr.44 1 1))) ((bruijn ##k.1489 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0bruijn__ify_k810, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__ify_lambda200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda200, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.44 0 1)) ((bruijn equal? 13 35) (close _V0bruijn__ify_k809) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.44 0 1))) ((bruijn ##k.1489 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 13-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k809, env)}),
      _V10vcore_Ddeclare,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__ify_k814(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k814, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k814, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.41 4 1) (bruijn ##k.1485 3 0) (bruijn ##x.1488 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0bruijn__ify_k813(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k813, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k813, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn doit 9 5) (close _V0bruijn__ify_k814) (bruijn expr 10 1))
V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k814, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V0bruijn__ify_k808(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k808, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k808, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0bruijn__ify_lambda200) (close _V0bruijn__ify_k813) (bruijn ##input.42 1 1))
V_CALL_FUNC(_V0bruijn__ify_lambda200, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k813, env)}),
      upenv->vars[1]);
 }
}
static void _V0bruijn__ify_lambda198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda198, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__ify_lambda199) (close _V0bruijn__ify_k808) (bruijn ##input.42 0 1))
V_CALL_FUNC(_V0bruijn__ify_lambda199, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k808, env)}),
      _var1);
 }
}
static void _V0bruijn__ify_lambda197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__ify_lambda197, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda197, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__ify_lambda198) (bruijn ##k.1484 0 0) (bruijn expr 7 1))
V_CALL_FUNC(_V0bruijn__ify_lambda198, env, runtime,
      _var0,
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0bruijn__ify_k806(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k806, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k806, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 9 36) (bruijn ##k.1478 5 0) (close _V0bruijn__ify_lambda197))
V_CALL(VGetArg(upenv, 9-1, 36), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_lambda197, env)}));
 }
}
static void _V0doit_lambda201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0doit_lambda201, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0doit_lambda201, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 5 4) (bruijn ##k.1505 0 0) (quote ()) (bruijn expr 0 1))
V_CALL(VGetArg(upenv, 5-1, 4), runtime,
      _var0,
      VNULL,
      _var1);
 }
}
static void _V0bruijn__ify_k805(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k805, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k805, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0bruijn__ify_k806) (bruijn doit 4 5) (close _V0doit_lambda201))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k806, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0doit_lambda201, env)})
    );
 }
}
static void _V0iter_k817(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k817, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k817, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1610 1 0) (##inline ##sys.car (bruijn ##expr.16 4 0)) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCar(
        upenv->up->up->up->vars[0]),
      VNULL);
 }
}
static void _V0loop_k819(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k819, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k819, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.19 4 1) (bruijn ##k.1621 1 0) (bruijn ##expr.21 2 1) (bruijn ##x.1622 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k818(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k818, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k818, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.21 1 1))) ((bruijn reverse 18 46) (close _V0loop_k819) (bruijn ##xs.18 1 2)) ((bruijn ##k.1621 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 18-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k819, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k822(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k822, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k822, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.19 7 1) (bruijn ##k.1615 2 0) (bruijn ##expr.21 5 1) (bruijn ##x.1617 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k821(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k821, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k821, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 21 46) (close _V0loop_k822) (bruijn ##xs.18 4 2))
V_CALL(VGetArg(upenv, 21-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k822, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda211, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda211, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.20 0 1) (close _V0loop_k821) (##inline ##sys.cdr (bruijn ##expr.21 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.21 3 1)) (bruijn ##xs.18 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k821, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 36) (bruijn ##k.1614 0 0) (close _V0loop_lambda211))
V_CALL(VGetArg(upenv, 19-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda211, env)}));
 }
}
static void _V0loop_k820(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k820, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k820, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 18 21) (bruijn ##k.1612 1 0) (close _V0loop_lambda210) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 18-1, 21), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda210, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_lambda209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda209, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda209, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k818) (close _V0loop_k820))
V_CALL_FUNC(_V0loop_k818, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k820, env)}));
 }
}
static void _V0iter_lambda208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda208, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter_k817) (bruijn loop 0 1) (close _V0loop_lambda209))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k817, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda209, env)})
    );
 }
}
static void _V0iter_lambda207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda207, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda207, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda208) (bruijn ##k.1609 0 0) #f)
V_CALL_FUNC(_V0iter_lambda208, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
static void _V0iter_lambda206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_lambda206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 14 36) (bruijn ##k.1608 0 0) (close _V0iter_lambda207))
V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda207, env)}));
 }
}
static void _V0iter_k826(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k826, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k826, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 9 1) (bruijn ##k.1624 4 0) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ##x.1630 2 0) (##inline ##sys.cons (bruijn ##x.1632 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
        _V0lambda,
        VInlineCons(
        upenv->up->vars[0],
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0iter_k825(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k825, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k825, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter 13 4) (close _V0iter_k826) (bruijn ##x.1633 0 0) (##inline ##sys.car (bruijn ##expr.22 2 0)))
V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k826, env)}),
      _var0,
      VInlineCar(
        upenv->up->vars[0]));
 }
}
static void _V0iter_k824(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k824, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k824, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 16 56) (close _V0iter_k825) (bruijn xs 2 2) (bruijn env 8 1))
V_CALL(VGetArg(upenv, 16-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k825, env)}),
      upenv->up->vars[2],
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0iter_k823(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k823, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k823, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 0 0))) ((bruijn length 15 38) (close _V0iter_k824) (bruijn xs 1 2)) ((bruijn ##k.1624 1 0) #f)) ((bruijn ##k.1624 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 15-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k824, env)}),
      upenv->vars[2]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda212, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda212, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0iter_k823) (##inline ##sys.cdr (bruijn ##expr.16 1 0))) ((bruijn ##k.1624 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL_FUNC(_V0iter_k823, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k816(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k816, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k816, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.16 0 0)) ((bruijn call-with-values 13 21) (bruijn ##k.1604 2 0) (close _V0iter_lambda206) (close _V0iter_lambda212)) ((bruijn ##k.1604 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 13-1, 21), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda206, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda212, env)}));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k815(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k815, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k815, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1606 0 0) ((close _V0iter_k816) (##inline ##sys.cdr (bruijn ##expr.15 1 1))) ((bruijn ##k.1604 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter_k816, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda205, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.15 0 1)) ((bruijn equal? 11 35) (close _V0iter_k815) (quote lambda) (##inline ##sys.car (bruijn ##expr.15 0 1))) ((bruijn ##k.1604 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 11-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k815, env)}),
      _V0lambda,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k835(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k835, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k835, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 11 1) (bruijn ##k.1588 8 0) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ##x.1596 2 0) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.1599 0 0) (quote ()))))))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VInlineCons(
        _V0lambda,
        VInlineCons(
        upenv->up->vars[0],
        VInlineCons(
        _V0_P,
        VInlineCons(
        _var0,
        VNULL)))));
 }
}
static void _V0iter_k834(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k834, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k834, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter 15 4) (close _V0iter_k835) (bruijn ##x.1600 0 0) (##inline ##sys.car (bruijn ##expr.25 4 0)))
V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k835, env)}),
      _var0,
      VInlineCar(
        upenv->up->up->up->vars[0]));
 }
}
static void _V0iter_k833(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k833, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k833, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 18 56) (close _V0iter_k834) (bruijn proper-xs 2 0) (bruijn env 10 1))
V_CALL(VGetArg(upenv, 18-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k834, env)}),
      upenv->up->vars[0],
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V0iter_k832(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k832, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k832, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 17 29) (close _V0iter_k833) (bruijn ##x.1601 0 0) 1)
V_CALL(VGetArg(upenv, 17-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k833, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0iter_k831(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k831, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k831, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 16 38) (close _V0iter_k832) (bruijn proper-xs 0 0))
V_CALL(VGetArg(upenv, 16-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k832, env)}),
      _var0);
 }
}
static void _V0iter_k830(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k830, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k830, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.25 0 0))) ((bruijn undot 11 2) (close _V0iter_k831) (##inline ##sys.car (bruijn ##expr.24 1 0))) ((bruijn ##k.1588 3 0) #f)) ((bruijn ##k.1588 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k831, env)}),
      VInlineCar(
        upenv->vars[0]));
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
static void _V0iter_k829(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k829, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k829, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.24 0 0)) ((close _V0iter_k830) (##inline ##sys.cdr (bruijn ##expr.24 0 0))) ((bruijn ##k.1588 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter_k830, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k828(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k828, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k828, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1590 0 0) ((close _V0iter_k829) (##inline ##sys.cdr (bruijn ##expr.23 1 1))) ((bruijn ##k.1588 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter_k829, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda213, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.23 0 1)) ((bruijn equal? 12 35) (close _V0iter_k828) (quote lambda) (##inline ##sys.car (bruijn ##expr.23 0 1))) ((bruijn ##k.1588 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 12-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k828, env)}),
      _V0lambda,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k838(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k838, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k838, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 6 1) (bruijn ##k.1581 2 0) (##inline ##sys.cons (quote case-lambda) (bruijn ##x.1585 0 0)))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons(
        _V0case__lambda,
        _var0));
 }
}
static void _V0iter_lambda215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda215, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda215, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn bruijn-lambda 11 3) (bruijn ##k.1586 0 0) (bruijn env 7 1) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 11-1, 3), runtime,
      _var0,
      VGetArg(upenv, 7-1, 1),
      _var1);
 }
}
static void _V0iter_k837(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k837, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k837, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1583 0 0) ((bruijn map 14 32) (close _V0iter_k838) (close _V0iter_lambda215) (##inline ##sys.cdr (bruijn ##expr.26 1 1))) ((bruijn ##k.1581 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k838, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda215, env)}),
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda214, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 1)) ((bruijn equal? 13 35) (close _V0iter_k837) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.26 0 1))) ((bruijn ##k.1581 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 13-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k837, env)}),
      _V0case__lambda,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k846(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k846, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k846, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 12 1) (bruijn ##k.1564 7 0) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (quote 1) (##inline ##sys.cons (bruijn ##x.1575 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons(
        _V0continuation,
        VInlineCons(
        VEncodeInt(1l),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0iter_k845(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k845, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k845, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter 16 4) (close _V0iter_k846) (bruijn ##x.1576 0 0) (##inline ##sys.car (bruijn ##expr.30 2 0)))
V_CALL(VGetArg(upenv, 16-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k846, env)}),
      _var0,
      VInlineCar(
        upenv->up->vars[0]));
 }
}
static void _V0iter_k844(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k844, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k844, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 19 56) (close _V0iter_k845) (bruijn ##x.1577 0 0) (bruijn env 11 1))
V_CALL(VGetArg(upenv, 19-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k845, env)}),
      _var0,
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V0iter_k843(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k843, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k843, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.30 0 0))) ((bruijn list 18 57) (close _V0iter_k844) (##inline ##sys.car (bruijn ##expr.29 1 0))) ((bruijn ##k.1564 4 0) #f)) ((bruijn ##k.1564 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 18-1, 57), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k844, env)}),
      VInlineCar(
        upenv->vars[0]));
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
static void _V0iter_k842(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k842, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k842, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.29 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.29 0 0))) ((close _V0iter_k843) (##inline ##sys.cdr (bruijn ##expr.28 1 0))) ((bruijn ##k.1564 3 0) #f)) ((bruijn ##k.1564 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL_FUNC(_V0iter_k843, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
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
static void _V0iter_k841(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k841, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k841, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 0)) ((close _V0iter_k842) (##inline ##sys.car (bruijn ##expr.28 0 0))) ((bruijn ##k.1564 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0iter_k842, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k840(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k840, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k840, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1566 0 0) ((close _V0iter_k841) (##inline ##sys.cdr (bruijn ##expr.27 1 1))) ((bruijn ##k.1564 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter_k841, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda216, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 1)) ((bruijn equal? 14 35) (close _V0iter_k840) (quote continuation) (##inline ##sys.car (bruijn ##expr.27 0 1))) ((bruijn ##k.1564 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 14-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k840, env)}),
      _V0continuation,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k848(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k848, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k848, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1562 0 0) ((bruijn ##kk.13 7 1) (bruijn ##k.1560 1 0) (bruijn expr 8 2)) ((bruijn ##k.1560 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 8-1, 2));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda217, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 1)) ((bruijn equal? 15 35) (close _V0iter_k848) (quote ##foreign.function) (##inline ##sys.car (bruijn ##expr.31 0 1))) ((bruijn ##k.1560 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 15-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k848, env)}),
      _V10foreign_Dfunction,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k850(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k850, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k850, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1558 0 0) ((bruijn ##kk.13 8 1) (bruijn ##k.1556 1 0) (bruijn expr 9 2)) ((bruijn ##k.1556 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 9-1, 2));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda218, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 1)) ((bruijn equal? 16 35) (close _V0iter_k850) (quote quote) (##inline ##sys.car (bruijn ##expr.32 0 1))) ((bruijn ##k.1556 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 16-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k850, env)}),
      _V0quote,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k854(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k854, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k854, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 11 1) (bruijn ##k.1547 3 0) (##inline ##sys.cons (quote ##inline) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.34 1 0)) (bruijn ##x.1553 0 0))))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
        _V10inline,
        VInlineCons(
        VInlineCar(
        upenv->vars[0]),
        _var0)));
 }
}
static void _V0iter_lambda220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda220, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda220, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 16 4) (bruijn ##k.1554 0 0) (bruijn env 12 1) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 16-1, 4), runtime,
      _var0,
      VGetArg(upenv, 12-1, 1),
      _var1);
 }
}
static void _V0iter_k853(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k853, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k853, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.34 0 0)) ((bruijn map 19 32) (close _V0iter_k854) (close _V0iter_lambda220) (##inline ##sys.cdr (bruijn ##expr.34 0 0))) ((bruijn ##k.1547 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 19-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k854, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda220, env)}),
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k852(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k852, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k852, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1549 0 0) ((close _V0iter_k853) (##inline ##sys.cdr (bruijn ##expr.33 1 1))) ((bruijn ##k.1547 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter_k853, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda219, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.33 0 1)) ((bruijn equal? 17 35) (close _V0iter_k852) (quote ##inline) (##inline ##sys.car (bruijn ##expr.33 0 1))) ((bruijn ##k.1547 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 17-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k852, env)}),
      _V10inline,
      VInlineCar(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k856(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k856, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k856, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1527 1 0) (##inline ##sys.cdr (bruijn ##expr.35 4 1)) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        upenv->up->up->up->vars[1]),
      VNULL);
 }
}
static void _V0loop_k858(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k858, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k858, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.38 4 1) (bruijn ##k.1538 1 0) (bruijn ##expr.40 2 1) (bruijn ##x.1539 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k857(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k857, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k857, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.40 1 1))) ((bruijn reverse 23 46) (close _V0loop_k858) (bruijn ##xs.37 1 2)) ((bruijn ##k.1538 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 23-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k858, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k861(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k861, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k861, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.38 7 1) (bruijn ##k.1532 2 0) (bruijn ##expr.40 5 1) (bruijn ##x.1534 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k860(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k860, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k860, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 26 46) (close _V0loop_k861) (bruijn ##xs.37 4 2))
V_CALL(VGetArg(upenv, 26-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k861, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda227, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda227, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.39 0 1) (close _V0loop_k860) (##inline ##sys.cdr (bruijn ##expr.40 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.40 3 1)) (bruijn ##xs.37 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k860, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 24 36) (bruijn ##k.1531 0 0) (close _V0loop_lambda227))
V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda227, env)}));
 }
}
static void _V0loop_k859(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k859, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k859, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 23 21) (bruijn ##k.1529 1 0) (close _V0loop_lambda226) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 23-1, 21), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda226, env)}),
      upenv->up->vars[1]);
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
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k857) (close _V0loop_k859))
V_CALL_FUNC(_V0loop_k857, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k859, env)}));
 }
}
static void _V0iter_lambda224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda224, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter_k856) (bruijn loop 0 1) (close _V0loop_lambda225))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k856, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda225, env)})
    );
 }
}
static void _V0iter_lambda223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda223, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda223, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda224) (bruijn ##k.1526 0 0) #f)
V_CALL_FUNC(_V0iter_lambda224, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
static void _V0iter_lambda222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_lambda222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 36) (bruijn ##k.1525 0 0) (close _V0iter_lambda223))
V_CALL(VGetArg(upenv, 19-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda223, env)}));
 }
}
static void _V0iter_k864(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k864, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k864, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 13 1) (bruijn ##k.1541 3 0) (bruijn ##x.1543 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0iter_k863(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k863, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k863, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 21 56) (close _V0iter_k864) (bruijn ##x.1544 1 0) (bruijn ##x.1545 0 0))
V_CALL(VGetArg(upenv, 21-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k864, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0iter_lambda229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda229, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda229, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter 17 4) (bruijn ##k.1546 0 0) (bruijn env 13 1) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 17-1, 4), runtime,
      _var0,
      VGetArg(upenv, 13-1, 1),
      _var1);
 }
}
static void _V0iter_k862(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k862, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k862, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 20 32) (close _V0iter_k863) (close _V0iter_lambda229) (bruijn xs 1 2))
V_CALL(VGetArg(upenv, 20-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k863, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda229, env)}),
      upenv->vars[2]);
 }
}
static void _V0iter_lambda228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda228, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda228, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn iter 15 4) (close _V0iter_k862) (bruijn env 11 1) (##inline ##sys.car (bruijn ##expr.35 1 1))) ((bruijn ##k.1541 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k862, env)}),
      VGetArg(upenv, 11-1, 1),
      VInlineCar(
        upenv->vars[1]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_lambda221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda221, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.35 0 1)) ((bruijn call-with-values 18 21) (bruijn ##k.1523 0 0) (close _V0iter_lambda222) (close _V0iter_lambda228)) ((bruijn ##k.1523 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 18-1, 21), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda222, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda228, env)}));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0iter_k867(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k867, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k867, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1521 1 0) ((bruijn lookup 17 1) (bruijn ##k.1522 0 0) 0 (bruijn env 13 1) (bruijn x 2 1)) ((bruijn ##k.1522 0 0) (bruijn x 2 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 13-1, 1),
      upenv->up->vars[1]);
} else {
V_CALL(_var0, runtime,
      upenv->up->vars[1]);
}
 }
}
static void _V0iter_k868(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k868, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k868, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 12 1) (bruijn ##k.1519 2 0) (bruijn ##x.1520 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0iter_k866(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k866, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k866, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_k867) (close _V0iter_k868))
V_CALL_FUNC(_V0iter_k867, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k868, env)}));
 }
}
static void _V0iter_lambda230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda230, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 19 16) (close _V0iter_k866) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k866, env)}),
      _var1);
 }
}
static void _V0iter_k870(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k870, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k870, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 11 1) (bruijn ##k.1508 10 0) (bruijn ##x.1518 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      _var0);
 }
}
static void _V0iter_k869(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k869, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k869, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 19 43) (close _V0iter_k870) (##string ##string.1891) (bruijn expr 11 2))
V_CALL(VGetArg(upenv, 19-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k870, env)}),
      VEncodePointer(&_V10string_D1891.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 2));
 }
}
static void _V0iter_k865(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k865, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k865, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda230) (close _V0iter_k869) (bruijn ##input.14 8 1))
V_CALL_FUNC(_V0iter_lambda230, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k869, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0iter_k855(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k855, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k855, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda221) (close _V0iter_k865) (bruijn ##input.14 7 1))
V_CALL_FUNC(_V0iter_lambda221, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k865, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0iter_k851(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k851, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k851, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda219) (close _V0iter_k855) (bruijn ##input.14 6 1))
V_CALL_FUNC(_V0iter_lambda219, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k855, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0iter_k849(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k849, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k849, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda218) (close _V0iter_k851) (bruijn ##input.14 5 1))
V_CALL_FUNC(_V0iter_lambda218, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k851, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0iter_k847(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k847, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k847, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda217) (close _V0iter_k849) (bruijn ##input.14 4 1))
V_CALL_FUNC(_V0iter_lambda217, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k849, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0iter_k839(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k839, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k839, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda216) (close _V0iter_k847) (bruijn ##input.14 3 1))
V_CALL_FUNC(_V0iter_lambda216, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k847, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0iter_k836(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k836, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k836, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda214) (close _V0iter_k839) (bruijn ##input.14 2 1))
V_CALL_FUNC(_V0iter_lambda214, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k839, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0iter_k827(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k827, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k827, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0iter_lambda213) (close _V0iter_k836) (bruijn ##input.14 1 1))
V_CALL_FUNC(_V0iter_lambda213, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k836, env)}),
      upenv->vars[1]);
 }
}
static void _V0iter_lambda204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda204, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda205) (close _V0iter_k827) (bruijn ##input.14 0 1))
V_CALL_FUNC(_V0iter_lambda205, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k827, env)}),
      _var1);
 }
}
static void _V0iter_lambda203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda203, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda203, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter_lambda204) (bruijn ##k.1507 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0iter_lambda204, env, runtime,
      _var0,
      upenv->vars[2]);
 }
}
static void _V0iter_lambda202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda202, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda202, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 8 36) (bruijn ##k.1506 0 0) (close _V0iter_lambda203))
V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda203, env)}));
 }
}
static void _V0bruijn__ify_k804(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k804, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k804, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0bruijn__ify_k805) (bruijn iter 3 4) (close _V0iter_lambda202))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k805, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda202, env)})
    );
 }
}
static void _V0bruijn__lambda_k871(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k871, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k871, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1657 1 0) (##inline ##sys.car (bruijn ##expr.4 4 1)) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCar(
        upenv->up->up->up->vars[1]),
      VNULL);
 }
}
static void _V0loop_k873(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k873, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k873, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 4 1) (bruijn ##k.1668 1 0) (bruijn ##expr.9 2 1) (bruijn ##x.1669 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k872(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k872, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k872, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.9 1 1))) ((bruijn reverse 15 46) (close _V0loop_k873) (bruijn ##xs.6 1 2)) ((bruijn ##k.1668 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 15-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k873, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k876(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k876, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k876, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 7 1) (bruijn ##k.1662 2 0) (bruijn ##expr.9 5 1) (bruijn ##x.1664 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k875(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k875, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k875, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 18 46) (close _V0loop_k876) (bruijn ##xs.6 4 2))
V_CALL(VGetArg(upenv, 18-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k876, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda240, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda240, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.8 0 1) (close _V0loop_k875) (##inline ##sys.cdr (bruijn ##expr.9 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.9 3 1)) (bruijn ##xs.6 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k875, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 16 36) (bruijn ##k.1661 0 0) (close _V0loop_lambda240))
V_CALL(VGetArg(upenv, 16-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda240, env)}));
 }
}
static void _V0loop_k874(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k874, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k874, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 15 21) (bruijn ##k.1659 1 0) (close _V0loop_lambda239) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 15-1, 21), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda239, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_lambda238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda238, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda238, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k872) (close _V0loop_k874))
V_CALL_FUNC(_V0loop_k872, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k874, env)}));
 }
}
static void _V0bruijn__lambda_lambda237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda237, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0bruijn__lambda_k871) (bruijn loop 0 1) (close _V0loop_lambda238))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k871, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda238, env)})
    );
 }
}
static void _V0bruijn__lambda_lambda236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda236, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda236, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__lambda_lambda237) (bruijn ##k.1656 0 0) #f)
V_CALL_FUNC(_V0bruijn__lambda_lambda237, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
static void _V0bruijn__lambda_lambda235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 11 36) (bruijn ##k.1655 0 0) (close _V0bruijn__lambda_lambda236))
V_CALL(VGetArg(upenv, 11-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda236, env)}));
 }
}
static void _V0bruijn__lambda_k880(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k880, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k880, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.2 7 1) (bruijn ##k.1671 4 0) (##inline ##sys.cons (bruijn ##x.1676 2 0) (##inline ##sys.cons (bruijn ##x.1678 0 0) (quote ()))))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
        upenv->up->vars[0],
        VInlineCons(
        _var0,
        VNULL)));
 }
}
static void _V0bruijn__lambda_k879(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k879, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k879, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter 10 4) (close _V0bruijn__lambda_k880) (bruijn ##x.1679 0 0) (##inline ##sys.car (bruijn ##expr.10 2 0)))
V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k880, env)}),
      _var0,
      VInlineCar(
        upenv->up->vars[0]));
 }
}
static void _V0bruijn__lambda_k878(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k878, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k878, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 13 56) (close _V0bruijn__lambda_k879) (bruijn xs 2 2) (bruijn env 6 1))
V_CALL(VGetArg(upenv, 13-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k879, env)}),
      upenv->up->vars[2],
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0bruijn__lambda_k877(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k877, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k877, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.10 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.10 0 0))) ((bruijn length 12 38) (close _V0bruijn__lambda_k878) (bruijn xs 1 2)) ((bruijn ##k.1671 1 0) #f)) ((bruijn ##k.1671 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 12-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k878, env)}),
      upenv->vars[2]);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__lambda_lambda241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda241, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda241, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0bruijn__lambda_k877) (##inline ##sys.cdr (bruijn ##expr.4 1 1))) ((bruijn ##k.1671 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL_FUNC(_V0bruijn__lambda_k877, env, runtime,
      VInlineCdr(
        upenv->vars[1]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__lambda_lambda234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda234, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 1)) ((bruijn call-with-values 10 21) (bruijn ##k.1653 0 0) (close _V0bruijn__lambda_lambda235) (close _V0bruijn__lambda_lambda241)) ((bruijn ##k.1653 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL(VGetArg(upenv, 10-1, 21), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda235, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda241, env)}));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__lambda_k887(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k887, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k887, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.2 9 1) (bruijn ##k.1641 6 0) (##inline ##sys.cons (bruijn ##x.1646 2 0) (##inline ##sys.cons (quote +) (##inline ##sys.cons (bruijn ##x.1649 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
        upenv->up->vars[0],
        VInlineCons(
        _V0_P,
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0bruijn__lambda_k886(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k886, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k886, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iter 12 4) (close _V0bruijn__lambda_k887) (bruijn ##x.1650 0 0) (##inline ##sys.car (bruijn ##expr.12 4 0)))
V_CALL(VGetArg(upenv, 12-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k887, env)}),
      _var0,
      VInlineCar(
        upenv->up->up->up->vars[0]));
 }
}
static void _V0bruijn__lambda_k885(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k885, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k885, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 15 56) (close _V0bruijn__lambda_k886) (bruijn proper-xs 2 0) (bruijn env 8 1))
V_CALL(VGetArg(upenv, 15-1, 56), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k886, env)}),
      upenv->up->vars[0],
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0bruijn__lambda_k884(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k884, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k884, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 14 29) (close _V0bruijn__lambda_k885) (bruijn ##x.1651 0 0) 1)
V_CALL(VGetArg(upenv, 14-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k885, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0bruijn__lambda_k883(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k883, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k883, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 13 38) (close _V0bruijn__lambda_k884) (bruijn proper-xs 0 0))
V_CALL(VGetArg(upenv, 13-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k884, env)}),
      _var0);
 }
}
static void _V0bruijn__lambda_k882(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k882, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k882, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.12 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.12 0 0))) ((bruijn undot 8 2) (close _V0bruijn__lambda_k883) (##inline ##sys.car (bruijn ##expr.11 1 1))) ((bruijn ##k.1641 1 0) #f)) ((bruijn ##k.1641 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k883, env)}),
      VInlineCar(
        upenv->vars[1]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__lambda_lambda242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda242, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.11 0 1)) ((close _V0bruijn__lambda_k882) (##inline ##sys.cdr (bruijn ##expr.11 0 1))) ((bruijn ##k.1641 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var1))) {
V_CALL_FUNC(_V0bruijn__lambda_k882, env, runtime,
      VInlineCdr(
        _var1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0bruijn__lambda_k888(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k888, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k888, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 11 34) (bruijn ##k.1638 2 0) (##string ##string.1790))
V_CALL(VGetArg(upenv, 11-1, 34), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1790.sym, VPOINTER_OTHER));
 }
}
static void _V0bruijn__lambda_k881(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__lambda_k881, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_k881, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0bruijn__lambda_lambda242) (close _V0bruijn__lambda_k888) (bruijn ##input.3 1 1))
V_CALL_FUNC(_V0bruijn__lambda_lambda242, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k888, env)}),
      upenv->vars[1]);
 }
}
static void _V0bruijn__lambda_lambda233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda233, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__lambda_lambda234) (close _V0bruijn__lambda_k881) (bruijn ##input.3 0 1))
V_CALL_FUNC(_V0bruijn__lambda_lambda234, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_k881, env)}),
      _var1);
 }
}
static void _V0bruijn__lambda_lambda232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda232, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda232, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__lambda_lambda233) (bruijn ##k.1637 0 0) (bruijn lamb 1 2))
V_CALL_FUNC(_V0bruijn__lambda_lambda233, env, runtime,
      _var0,
      upenv->vars[2]);
 }
}
static void _V0bruijn__lambda_lambda231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0bruijn__lambda_lambda231, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__lambda_lambda231, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 7 36) (bruijn ##k.1636 0 0) (close _V0bruijn__lambda_lambda232))
V_CALL(VGetArg(upenv, 7-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda232, env)}));
 }
}
static void _V0bruijn__ify_k803(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k803, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k803, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0bruijn__ify_k804) (bruijn bruijn-lambda 2 3) (close _V0bruijn__lambda_lambda231))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k804, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__lambda_lambda231, env)})
    );
 }
}
static void _V0undot_k892(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k892, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k892, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 10 56) (bruijn ##k.1681 4 0) (bruijn ##x.1683 2 0) (bruijn ##x.1684 0 0))
V_CALL(VGetArg(upenv, 10-1, 56), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0undot_k891(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k891, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k891, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn undot 5 2) (close _V0undot_k892) (bruijn ##x.1685 0 0))
V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k892, env)}),
      _var0);
 }
}
static void _V0undot_k890(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k890, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k890, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 8 24) (close _V0undot_k891) (bruijn lst 2 1))
V_CALL(VGetArg(upenv, 8-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k891, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0undot_k893(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k893, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k893, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1686 0 0) ((bruijn ##k.1681 2 0) (quote ())) ((bruijn cons 8 56) (bruijn ##k.1681 2 0) (bruijn lst 2 1) (quote ())))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 8-1, 56), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VNULL);
}
 }
}
static void _V0undot_k889(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0undot_k889, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_k889, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1682 0 0) ((bruijn car 7 30) (close _V0undot_k890) (bruijn lst 1 1)) ((bruijn null? 7 44) (close _V0undot_k893) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k890, env)}),
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 7-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k893, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0undot_lambda243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0undot_lambda243, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0undot_lambda243, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 6 17) (close _V0undot_k889) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 6-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_k889, env)}),
      _var1);
 }
}
static void _V0bruijn__ify_k802(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0bruijn__ify_k802, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_k802, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0bruijn__ify_k803) (bruijn undot 1 2) (close _V0undot_lambda243))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k803, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0undot_lambda243, env)})
    );
 }
}
static void _V0lookup_lambda245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_lambda245, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn list 9 57) (bruijn ##k.1689 0 0) (quote bruijn) (bruijn x 4 3) (bruijn depth 4 1) (bruijn idx 0 1))
V_CALL(VGetArg(upenv, 9-1, 57), runtime,
      _var0,
      _V0bruijn,
      upenv->up->up->up->vars[3],
      upenv->up->up->up->vars[1],
      _var1);
 }
}
static void _V0lookup_k898(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k898, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k898, runtime, upenv, 1, argc, _var0) {
  // ((bruijn lookup 6 1) (bruijn ##k.1687 5 0) (bruijn ##x.1690 1 0) (bruijn ##x.1691 0 0) (bruijn x 5 3))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0lookup_k897(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k897, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k897, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 9 24) (close _V0lookup_k898) (bruijn env 4 2))
V_CALL(VGetArg(upenv, 9-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k898, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0lookup_k896(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k896, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k896, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##x.1 0 0) ((close _V0lookup_lambda245) (bruijn ##k.1687 3 0) (bruijn ##x.1 0 0)) ((bruijn + 8 27) (close _V0lookup_k897) 1 (bruijn depth 3 1)))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0lookup_lambda245, env, runtime,
      upenv->up->up->vars[0],
      _var0);
} else {
V_CALL(VGetArg(upenv, 8-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k897, env)}),
      VEncodeInt(1l),
      upenv->up->up->vars[1]);
}
 }
}
static void _V0lookup_lambda246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0lookup_lambda246, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_lambda246, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn eqv? 8 18) (bruijn ##k.1692 0 0) (bruijn x 3 3) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 8-1, 18), runtime,
      _var0,
      upenv->up->up->vars[3],
      _var1);
 }
}
static void _V0lookup_k895(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k895, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k895, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list-index 6 1) (close _V0lookup_k896) (close _V0lookup_lambda246) (bruijn ##x.1693 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k896, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_lambda246, env)}),
      _var0);
 }
}
static void _V0lookup_k894(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0lookup_k894, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_k894, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1688 0 0) ((bruijn ##k.1687 1 0) (bruijn x 1 3)) ((bruijn car 6 30) (close _V0lookup_k895) (bruijn env 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[3]);
} else {
V_CALL(VGetArg(upenv, 6-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k895, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0lookup_lambda244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0lookup_lambda244, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0lookup_lambda244, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 5 44) (close _V0lookup_k894) (bruijn env 0 2))
V_CALL(VGetArg(upenv, 5-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_k894, env)}),
      _var2);
 }
}
static void _V0bruijn__ify_lambda196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda196, runtime, upenv, 6, argc, _var0, _var1, _var2, _var3, _var4, _var5) {
  struct { VEnv env; VWORD argv[6]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 6, 6, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  // (set! (close _V0bruijn__ify_k802) (bruijn lookup 0 1) (close _V0lookup_lambda244))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_k802, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0lookup_lambda244, env)})
    );
 }
}
static void _V0bruijn__ify_lambda195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0bruijn__ify_lambda195, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0bruijn__ify_lambda195, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0bruijn__ify_lambda196) (bruijn ##k.1477 0 0) #f #f #f #f #f)
V_CALL_FUNC(_V0bruijn__ify_lambda196, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k66) (bruijn bruijn-ify 1 2) (close _V0bruijn__ify_lambda195))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k66, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0bruijn__ify_lambda195, env)})
    );
 }
}
static void _V0list__index_k899(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0list__index_k899, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__index_k899, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1695 1 0) (bruijn l 2 2) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[2],
      VEncodeInt(0l));
 }
}
static void _V0loop_k904(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k904, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k904, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.1697 5 0) (bruijn ##x.1700 1 0) (bruijn ##x.1701 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k903(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k903, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k903, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 8 27) (close _V0loop_k904) (bruijn i 4 2) 1)
V_CALL(VGetArg(upenv, 8-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k904, env)}),
      upenv->up->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0loop_k902(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k902, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k902, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1699 0 0) ((bruijn ##k.1697 3 0) (bruijn i 3 2)) ((bruijn cdr 7 24) (close _V0loop_k903) (bruijn l 3 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 7-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k903, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V0loop_k901(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k901, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k901, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn p 4 1) (close _V0loop_k902) (bruijn ##x.1702 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k902, env)}),
      _var0);
 }
}
static void _V0loop_k900(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k900, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k900, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1698 0 0) ((bruijn ##k.1697 1 0) #f) ((bruijn car 5 30) (close _V0loop_k901) (bruijn l 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 5-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k901, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda249, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda249, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 4 44) (close _V0loop_k900) (bruijn l 0 1))
V_CALL(upenv->up->up->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k900, env)}),
      _var1);
 }
}
static void _V0list__index_lambda248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0list__index_lambda248, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0list__index_k899) (bruijn loop 0 1) (close _V0loop_lambda249))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__index_k899, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda249, env)})
    );
 }
}
static void _V0list__index_lambda247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0list__index_lambda247, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__index_lambda247, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0list__index_lambda248) (bruijn ##k.1694 0 0) #f)
V_CALL_FUNC(_V0list__index_lambda248, env, runtime,
      _var0,
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda3, runtime, upenv, 8, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7) {
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
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k65) (bruijn list-index 0 1) (close _V0list__index_lambda247))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k65, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__index_lambda247, env)})
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45, VWORD _var46, VWORD _var47, VWORD _var48, VWORD _var49, VWORD _var50, VWORD _var51, VWORD _var52, VWORD _var53, VWORD _var54, VWORD _var55, VWORD _var56, VWORD _var57) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda2, runtime, upenv, 58, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37, _var38, _var39, _var40, _var41, _var42, _var43, _var44, _var45, _var46, _var47, _var48, _var49, _var50, _var51, _var52, _var53, _var54, _var55, _var56, _var57) {
  struct { VEnv env; VWORD argv[58]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 58, 58, upenv);
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
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda3) (bruijn ##k.274 0 0) #f #f #f #f #f #f #f)
V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda3, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda2) (bruijn ##k.273 64 0) (bruijn ##x.1703 56 0) (bruijn ##x.1704 55 0) (bruijn ##x.1705 54 0) (bruijn ##x.1706 53 0) (bruijn ##x.1707 52 0) (bruijn ##x.1708 51 0) (bruijn ##x.1709 50 0) (bruijn ##x.1710 49 0) (bruijn ##x.1711 48 0) (bruijn ##x.1712 47 0) (bruijn ##x.1713 46 0) (bruijn ##x.1714 45 0) (bruijn ##x.1715 44 0) (bruijn ##x.1716 43 0) (bruijn ##x.1717 42 0) (bruijn ##x.1718 41 0) (bruijn ##x.1719 40 0) (bruijn ##x.1720 39 0) (bruijn ##x.1721 38 0) (bruijn ##x.1722 37 0) (bruijn ##x.1723 36 0) (bruijn ##x.1724 35 0) (bruijn ##x.1725 34 0) (bruijn ##x.1726 33 0) (bruijn ##x.1727 32 0) (bruijn ##x.1728 31 0) (bruijn ##x.1729 30 0) (bruijn ##x.1730 29 0) (bruijn ##x.1731 28 0) (bruijn ##x.1732 27 0) (bruijn ##x.1733 26 0) (bruijn ##x.1734 25 0) (bruijn ##x.1735 24 0) (bruijn ##x.1736 23 0) (bruijn ##x.1737 22 0) (bruijn ##x.1738 21 0) (bruijn ##x.1739 20 0) (bruijn ##x.1740 19 0) (bruijn ##x.1741 18 0) (bruijn ##x.1742 17 0) (bruijn ##x.1743 16 0) (bruijn ##x.1744 15 0) (bruijn ##x.1745 14 0) (bruijn ##x.1746 13 0) (bruijn ##x.1747 12 0) (bruijn ##x.1748 11 0) (bruijn ##x.1749 10 0) (bruijn ##x.1750 9 0) (bruijn ##x.1751 8 0) (bruijn ##x.1752 7 0) (bruijn ##x.1753 6 0) (bruijn ##x.1754 5 0) (bruijn ##x.1755 4 0) (bruijn ##x.1756 3 0) (bruijn ##x.1757 2 0) (bruijn ##x.1758 1 0) (bruijn ##x.1759 0 0))
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
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 56 0) (close _V0vanity_V0compiler_V0transpile_V20_k64) (quote list))
V_CALL(VGetArg(upenv, 56-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k64, env)}),
      _V0list);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 55 0) (close _V0vanity_V0compiler_V0transpile_V20_k63) (quote cons))
V_CALL(VGetArg(upenv, 55-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k63, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 54 0) (close _V0vanity_V0compiler_V0transpile_V20_k62) (quote apply))
V_CALL(VGetArg(upenv, 54-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k62, env)}),
      _V0apply);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 53 0) (close _V0vanity_V0compiler_V0transpile_V20_k61) (quote values))
V_CALL(VGetArg(upenv, 53-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k61, env)}),
      _V0values);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 52 0) (close _V0vanity_V0compiler_V0transpile_V20_k60) (quote set-car!))
V_CALL(VGetArg(upenv, 52-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k60, env)}),
      _V0set__car_B);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 51 0) (close _V0vanity_V0compiler_V0transpile_V20_k59) (quote assoc))
V_CALL(VGetArg(upenv, 51-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k59, env)}),
      _V0assoc);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 50 0) (close _V0vanity_V0compiler_V0transpile_V20_k58) (quote mangle-foreign-function))
V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k58, env)}),
      _V0mangle__foreign__function);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 49 0) (close _V0vanity_V0compiler_V0transpile_V20_k57) (quote cdar))
V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k57, env)}),
      _V0cdar);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 48 0) (close _V0vanity_V0compiler_V0transpile_V20_k56) (quote gensym))
V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k56, env)}),
      _V0gensym);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 47 0) (close _V0vanity_V0compiler_V0transpile_V20_k55) (quote assv))
V_CALL(VGetArg(upenv, 47-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k55, env)}),
      _V0assv);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 46 0) (close _V0vanity_V0compiler_V0transpile_V20_k54) (quote string->symbol))
V_CALL(VGetArg(upenv, 46-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k54, env)}),
      _V0string___Gsymbol);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 45 0) (close _V0vanity_V0compiler_V0transpile_V20_k53) (quote reverse))
V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k53, env)}),
      _V0reverse);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 44 0) (close _V0vanity_V0compiler_V0transpile_V20_k52) (quote not))
V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k52, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 43 0) (close _V0vanity_V0compiler_V0transpile_V20_k51) (quote null?))
V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k51, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 42 0) (close _V0vanity_V0compiler_V0transpile_V20_k50) (quote compiler-error))
V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k50, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 41 0) (close _V0vanity_V0compiler_V0transpile_V20_k49) (quote for-each))
V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k49, env)}),
      _V0for__each);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 40 0) (close _V0vanity_V0compiler_V0transpile_V20_k48) (quote print-foreign-function))
V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k48, env)}),
      _V0print__foreign__function);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 39 0) (close _V0vanity_V0compiler_V0transpile_V20_k47) (quote displayln))
V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k47, env)}),
      _V0displayln);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 38 0) (close _V0vanity_V0compiler_V0transpile_V20_k46) (quote iota))
V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k46, env)}),
      _V0iota);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 37 0) (close _V0vanity_V0compiler_V0transpile_V20_k45) (quote length))
V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k45, env)}),
      _V0length);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 36 0) (close _V0vanity_V0compiler_V0transpile_V20_k44) (quote printf))
V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k44, env)}),
      _V0printf);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 35 0) (close _V0vanity_V0compiler_V0transpile_V20_k43) (quote call/cc))
V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k43, env)}),
      _V0call_Wcc);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 34 0) (close _V0vanity_V0compiler_V0transpile_V20_k42) (quote equal?))
V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k42, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 33 0) (close _V0vanity_V0compiler_V0transpile_V20_k41) (quote error))
V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k41, env)}),
      _V0error);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 32 0) (close _V0vanity_V0compiler_V0transpile_V20_k40) (quote sprintf))
V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k40, env)}),
      _V0sprintf);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 31 0) (close _V0vanity_V0compiler_V0transpile_V20_k39) (quote map))
V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k39, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 30 0) (close _V0vanity_V0compiler_V0transpile_V20_k38) (quote cddr))
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k38, env)}),
      _V0cddr);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 29 0) (close _V0vanity_V0compiler_V0transpile_V20_k37) (quote car))
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k37, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 0) (close _V0vanity_V0compiler_V0transpile_V20_k36) (quote -))
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k36, env)}),
      _V0__);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close _V0vanity_V0compiler_V0transpile_V20_k35) (quote list-ref))
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k35, env)}),
      _V0list__ref);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close _V0vanity_V0compiler_V0transpile_V20_k34) (quote +))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k34, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close _V0vanity_V0compiler_V0transpile_V20_k33) (quote append))
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k33, env)}),
      _V0append);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close _V0vanity_V0compiler_V0transpile_V20_k32) (quote lookup-inline))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k32, env)}),
      _V0lookup__inline);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close _V0vanity_V0compiler_V0transpile_V20_k31) (quote cdr))
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k31, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0compiler_V0transpile_V20_k30) (quote display))
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k30, env)}),
      _V0display);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0compiler_V0transpile_V20_k29) (quote =))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k29, env)}),
      _V0_E);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0compiler_V0transpile_V20_k28) (quote call-with-values))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k28, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0transpile_V20_k27) (quote lookup-intrinsic2))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k27, env)}),
      _V0lookup__intrinsic2);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0transpile_V20_k26) (quote cadr))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k26, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0transpile_V20_k25) (quote eqv?))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k25, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0transpile_V20_k24) (quote pair?))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k24, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0transpile_V20_k23) (quote symbol?))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k23, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0transpile_V20_k22) (quote caar))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k22, env)}),
      _V0caar);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0transpile_V20_k21) (quote cadar))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k21, env)}),
      _V0cadar);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0transpile_V20_k20) (quote mangle-symbol))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k20, env)}),
      _V0mangle__symbol);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0transpile_V20_k19) (quote symbol->string))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k19, env)}),
      _V0symbol___Gstring);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0transpile_V20_k18) (quote string-length))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k18, env)}),
      _V0string__length);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0transpile_V20_k17) (quote string?))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k17, env)}),
      _V0string_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0transpile_V20_k16) (quote integer?))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k16, env)}),
      _V0integer_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0transpile_V20_k15) (quote number?))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k15, env)}),
      _V0number_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0transpile_V20_k14) (quote char?))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k14, env)}),
      _V0char_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0transpile_V20_k13) (quote eq?))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k13, env)}),
      _V0eq_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0transpile_V20_k12) (quote string-ref))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k12, env)}),
      _V0string__ref);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0transpile_V20_k11) (quote <))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k11, env)}),
      _V0_L);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0transpile_V20_k10) (quote close-port))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k10, env)}),
      _V0close__port);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0transpile_V20_k9) (quote get-output-string))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k9, env)}),
      _V0get__output__string);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0transpile_V20_k8) (quote open-output-string))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k8, env)}),
      _V0open__output__string);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0transpile_V20_k7) (##string ##string.1892) (bruijn ##x.1760 5 0) (bruijn ##x.1761 4 0) (bruijn ##x.1762 3 0) (bruijn ##x.1763 2 0) (bruijn ##x.1764 1 0) (bruijn ##x.1765 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k7, env)}),
      VEncodePointer(&_V10string_D1892.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k6) (##string ##string.1893))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k6, env)}),
      VEncodePointer(&_V10string_D1893.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k5) (##string ##string.1894))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k5, env)}),
      VEncodePointer(&_V10string_D1894.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k4) (##string ##string.1895))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k4, env)}),
      VEncodePointer(&_V10string_D1895.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k3) (##string ##string.1896))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k3, env)}),
      VEncodePointer(&_V10string_D1896.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k2) (##string ##string.1897))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k2, env)}),
      VEncodePointer(&_V10string_D1897.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k1) (##string ##string.1898))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k1, env)}),
      VEncodePointer(&_V10string_D1898.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0transpile_V20 = (VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda1;
