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
static struct { VBlob sym; char bytes[21]; } _V10string_D1099 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1098 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1097 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1096 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1095 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1094 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1093 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1092 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
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
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
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
static struct { VBlob sym; char bytes[11]; } _V10string_D1091 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VDllMain~A" };
VWEAK VWORD _V0printout2;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0printout2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "printout2" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1090 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vruntime.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1089 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vlibrary.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1088 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vinlines.h\"" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1087 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "#include <stdarg.h>" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1086 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1085 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "int main(int argc, char ** argv) {~N" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1084 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "  VThunk toplevels[] = {~N" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1083 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "    toplevel~A," };
static struct { VBlob sym; char bytes[9]; } _V10string_D1082 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~N  };~N" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1081 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "  VRuntime * runtime;" };
static struct { VBlob sym; char bytes[39]; } _V10string_D1080 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "  VInitRuntime2(&runtime, argc, argv);" };
static struct { VBlob sym; char bytes[95]; } _V10string_D1079 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 95 }, "  return VDecodeExitCode(VStart2(runtime, sizeof toplevels / sizeof *toplevels, toplevels));~N" };
static struct { VBlob sym; char bytes[28]; } _V10string_D1078 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "print-declare: unknown form" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1077 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "VFunc ~A = (VFunc)~A;~N" };
static struct { VBlob sym; char bytes[36]; } _V10string_D1076 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "print-foreign-declare: unknown form" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[43]; } _V10string_D1075 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "void toplevel~A(V_CORE_ARGS, VWORD _k) {~N" };
static struct { VBlob sym; char bytes[23]; } _V10string_D1074 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "    VEnv * env = NULL;" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1073 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_k" };
VWEAK VWORD _V0k;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0k = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "k" };
static struct { VBlob sym; char bytes[14]; } _V10string_D1072 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "_V20Case~A_~A" };
static struct { VBlob sym; char bytes[104]; } _V10string_D1071 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 104 }, "__attribute__((used)) static void _V20CaseError_~A(VRuntime * runtime, VEnv * upenv, int argc, ...) {~N" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1070 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, " // ~S~N" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1069 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, " VError(\"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[23]; } _V10string_D1068 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, " \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1067 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, " \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1066 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, " , argc);~N" };
static struct { VBlob sym; char bytes[60]; } _V10string_D1065 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "void ~A(VRuntime * runtime, VEnv * upenv, int argc, ...);~N" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1064 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "asm(~N" };
static struct { VBlob sym; char bytes[29]; } _V10string_D1063 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "\".intel_syntax noprefix\\n\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1062 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "#ifdef __linux__~N" };
static struct { VBlob sym; char bytes[26]; } _V10string_D1061 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "\".type ~A, @function\\n\"~N" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1060 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "#endif~N" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1059 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "\"~A:\\n\"~N" };
static struct { VBlob sym; char bytes[26]; } _V10string_D1058 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1057 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "\"    je ~A\\n\"~N" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1056 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "\"    cmp \" ARGC_REG \", ~A\\n\"~N" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1055 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "\"    jge ~A\\n\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1054 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "\"    jmp _V20CaseError_~A\\n\"~N" };
static struct { VBlob sym; char bytes[58]; } _V10string_D1053 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "static void ~A(VRuntime * runtime, VEnv * upenv, int argc" };
static struct { VBlob sym; char bytes[11]; } _V10string_D1052 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, ", VWORD ~A" };
static struct { VBlob sym; char bytes[57]; } _V10string_D1051 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, " V_GC_CHECK2_VARARGS((VFunc)~A, runtime, upenv, ~A, argc" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1050 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ", ~A" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1049 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "  // ~S~N" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1048 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "_varargs" };
static struct { VBlob sym; char bytes[52]; } _V10string_D1047 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "  struct { VEnv env; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1046 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "  VEnv * env = &container.env;~N" };
static struct { VBlob sym; char bytes[34]; } _V10string_D1045 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "  VInitEnv(env, ~A, ~A, upenv);~N" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1044 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  env->vars[~A] = ~A;~N" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1043 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "  env->vars[~A] = _varargs;~N" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1042 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1041 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, ", _varargs) {~N" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1040 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, " VWORD _varargs = VNULL;~N" };
static struct { VBlob sym; char bytes[55]; } _V10string_D1039 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, " V_GATHER_VARARGS_VARIADIC(&_varargs, ~A, argc, ~A);~N" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1038 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, " if(argc != ~A) {~N" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1037 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1036 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, " if(argc < ~A) {~N" };
static struct { VBlob sym; char bytes[52]; } _V10string_D1035 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "  VError(\"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[32]; } _V10string_D1034 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[13]; } _V10string_D1033 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "  , argc);~N" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1032 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, " }~N" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1031 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, " static VDebugInfo dbg = { \"~A\" };~N" };
static struct { VBlob sym; char bytes[32]; } _V10string_D1030 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, " VRecordCall2(runtime, &dbg);~N" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1029 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ", ..." };
static struct { VBlob sym; char bytes[23]; } _V10string_D1028 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "__attribute__((used)) " };
static struct { VBlob sym; char bytes[7]; } _V10string_D1027 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_var~A" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1026 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "print-expr: malformed expression" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[61]; } _V10string_D1025 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 61 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, NULL)})" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1024 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "if(VDecodeBool(" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1023 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ")) {" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1022 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "} else {" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1021 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "}" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1020 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "VGetArg(upenv, ~A-1, ~A)" };
static struct { VBlob sym; char bytes[28]; } _V10string_D1019 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "upenv->up->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1018 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "upenv->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1017 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "upenv->up->vars[~A]" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1016 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "upenv->vars[~A]" };
static struct { VBlob sym; char bytes[60]; } _V10string_D1015 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, env)})" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1014 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VNULL" };
static struct { VBlob sym; char bytes[14]; } _V10string_D1013 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "~A(~N        " };
static struct { VBlob sym; char bytes[2]; } _V10string_D1012 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1011 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, ",~N        " };
static struct { VBlob sym; char bytes[15]; } _V10string_D1010 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "unknown inline" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1009 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "print-set: unknown form" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1008 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "set!'s first argument is not a symbol" };
static struct { VBlob sym; char bytes[54]; } _V10string_D1007 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 54 }, "    V_CALL_FUNC(VSetGlobalVar2, env, runtime,~N      " };
static struct { VBlob sym; char bytes[51]; } _V10string_D1006 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "    V_CALL_FUNC(VSetEnvVar2, env, runtime,~N      " };
static struct { VBlob sym; char bytes[51]; } _V10string_D1005 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, ",~N      VEncodeInt(~Al), VEncodeInt(~Al),~N      " };
static struct { VBlob sym; char bytes[57]; } _V10string_D1004 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 57 }, "    V_CALL_FUNC(VDefineGlobalVar2, env, runtime,~N      " };
static struct { VBlob sym; char bytes[11]; } _V10string_D1003 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "~N    );~N" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1002 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "    // OH NO A LETREC!~N" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1001 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "    {" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1000 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    VEnv * upenv = env;" };
static struct { VBlob sym; char bytes[54]; } _V10string_D999 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 54 }, "    struct { VEnv env; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[35]; } _V10string_D998 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "    VEnv * env = &container.env;~N" };
static struct { VBlob sym; char bytes[36]; } _V10string_D997 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "    VInitEnv(env, ~A, ~A, upenv);~N" };
static struct { VBlob sym; char bytes[14]; } _V10string_D996 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "env->vars[~A]" };
static struct { VBlob sym; char bytes[21]; } _V10string_D995 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "    env->vars[~A] = " };
static struct { VBlob sym; char bytes[2]; } _V10string_D994 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ";" };
static struct { VBlob sym; char bytes[6]; } _V10string_D993 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "    }" };
static struct { VBlob sym; char bytes[12]; } _V10string_D992 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "    V_CALL(" };
static struct { VBlob sym; char bytes[24]; } _V10string_D991 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    V_CALL_FUNC(~A, env" };
static struct { VBlob sym; char bytes[10]; } _V10string_D990 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, ", runtime" };
static struct { VBlob sym; char bytes[34]; } _V10string_D989 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "    V_CALL_FUNC(~A, NULL, runtime" };
static struct { VBlob sym; char bytes[10]; } _V10string_D988 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, ",~N      " };
static struct { VBlob sym; char bytes[5]; } _V10string_D987 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ");~N" };
static struct { VBlob sym; char bytes[22]; } _V10string_D986 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "closes\?: unknown form" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V10string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##string" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
static struct { VBlob sym; char bytes[50]; } _V10string_D985 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "static __attribute__((constructor)) void ~A() {~N" };
static struct { VBlob sym; char bytes[4]; } _V10string_D984 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "}~N" };
static struct { VBlob sym; char bytes[86]; } _V10string_D983 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 86 }, "  _V40~A = VEncodePointer(VLookupConstant(\"_V40~A\", &_VW_V40~A), VPOINTER_CLOSURE);~N" };
static struct { VBlob sym; char bytes[72]; } _V10string_D982 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "  ~A = VEncodePointer(VLookupConstant(\"~A\", &_VW~A), VPOINTER_OTHER);~N" };
static struct { VBlob sym; char bytes[52]; } _V10string_D981 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "print-literal-table: unknown entry in literal table" };
static struct { VBlob sym; char bytes[20]; } _V10string_D980 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VWEAK VWORD _V40~A;" };
static struct { VBlob sym; char bytes[102]; } _V10string_D979 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 102 }, "VWEAK VClosure _VW_V40~A = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)~A, NULL };~N" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[139]; } _V10string_D978 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 139 }, "static struct { VBlob sym; char bytes[~A]; } ~A = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[16]; } _V10string_D977 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VWEAK VWORD ~A;" };
static struct { VBlob sym; char bytes[123]; } _V10string_D976 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 123 }, "VWEAK struct { VBlob sym; char bytes[~A]; } _VW~A = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[36]; } _V10string_D975 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "print-literal: unknown literal type" };
static struct { VBlob sym; char bytes[19]; } _V10string_D974 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VEncodeBool(false)" };
static struct { VBlob sym; char bytes[18]; } _V10string_D973 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeBool(true)" };
static struct { VBlob sym; char bytes[18]; } _V10string_D972 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeChar('~A')" };
static struct { VBlob sym; char bytes[18]; } _V10string_D971 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeNumber(~A)" };
static struct { VBlob sym; char bytes[16]; } _V10string_D970 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VEncodeInt(~Al)" };
static struct { VBlob sym; char bytes[7]; } _V10string_D969 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_V40~A" };
static struct { VBlob sym; char bytes[40]; } _V10string_D968 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "VEncodePointer(&~A.sym, VPOINTER_OTHER)" };
static struct { VBlob sym; char bytes[3]; } _V10string_D967 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\'" };
static struct { VBlob sym; char bytes[3]; } _V10string_D966 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\\\" };
static struct { VBlob sym; char bytes[3]; } _V10string_D965 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\\?" };
static struct { VBlob sym; char bytes[3]; } _V10string_D964 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\r" };
static struct { VBlob sym; char bytes[3]; } _V10string_D963 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\n" };
static struct { VBlob sym; char bytes[3]; } _V10string_D962 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\t" };
static struct { VBlob sym; char bytes[3]; } _V10string_D961 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\b" };
static struct { VBlob sym; char bytes[3]; } _V10string_D960 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\a" };
static struct { VBlob sym; char bytes[37]; } _V10string_D959 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "VLookupGlobalVarFast2(runtime, \"~A\")" };
static struct { VBlob sym; char bytes[60]; } _V10string_D958 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A,NULL)})" };
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
  _V0list__ref = VEncodePointer(VLookupConstant("_V0list__ref", &_VW_V0list__ref), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VLookupConstant("_V0lookup__intrinsic__name", &_VW_V0lookup__intrinsic__name), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
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
static void _V0vanity_V0compiler_V0transpile_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k55, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn builtin 0 0) ((bruijn printf 5 2) (bruijn ##k.202 1 0) (##string ##string.958) (bruijn builtin 0 0)) ((bruijn printf 5 2) (bruijn ##k.202 1 0) (##string ##string.959) (bruijn sym 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D958.sym, VPOINTER_OTHER),
      _var0);
} else {
    V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D959.sym, VPOINTER_OTHER),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn lookup-intrinsic-name 4 18) (close _V0vanity_V0compiler_V0transpile_V20_k55) (bruijn sym 0 1))
    V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k55, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k68, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.221 1 0) ((bruijn ##k.222 0 0) (bruijn ##p.221 1 0)) ((bruijn eqv? 19 16) (bruijn ##k.222 0 0) (bruijn ##x.1 9 0) '#\\))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      _var0,
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('\\'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k71, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 21 21) (bruijn ##k.211 9 0) (bruijn ##x.219 0 0))
    V_CALL(VGetArg(upenv, 21-1, 21), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k70" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn string-ref 20 38) (close _V0vanity_V0compiler_V0transpile_V20_k71) (bruijn s 16 1) (bruijn i 13 1))
    V_CALL(VGetArg(upenv, 20-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k71, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k72, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 20 21) (bruijn ##k.211 8 0) (bruijn ##x.220 0 0))
    V_CALL(VGetArg(upenv, 20-1, 21), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k69" };
 VRecordCall2(runtime, &dbg);
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
  // (if (bruijn ##p.217 0 0) ((bruijn display 19 21) (close _V0vanity_V0compiler_V0transpile_V20_k70) #\\) ((bruijn string-ref 19 38) (close _V0vanity_V0compiler_V0transpile_V20_k72) (bruijn s 15 1) (bruijn i 12 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 19-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k70, env)}),
      VEncodeChar('\\'));
} else {
    V_CALL(VGetArg(upenv, 19-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k72, env)}),
      VGetArg(upenv, 15-1, 1),
      VGetArg(upenv, 12-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k67" };
 VRecordCall2(runtime, &dbg);
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
  // ((close _V0vanity_V0compiler_V0transpile_V20_k68) (close _V0vanity_V0compiler_V0transpile_V20_k69))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k68, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k69, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k66" };
 VRecordCall2(runtime, &dbg);
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
  // (if (bruijn ##p.216 0 0) ((bruijn display 17 21) (bruijn ##k.211 5 0) (##string ##string.965)) ((bruijn eqv? 17 16) (close _V0vanity_V0compiler_V0transpile_V20_k67) (bruijn ##x.1 7 0) '#\"))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 17-1, 21), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D965.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 17-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k67, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('"'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k65" };
 VRecordCall2(runtime, &dbg);
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
  // (if (bruijn ##p.215 0 0) ((bruijn display 16 21) (bruijn ##k.211 4 0) (##string ##string.964)) ((bruijn eqv? 16 16) (close _V0vanity_V0compiler_V0transpile_V20_k66) (bruijn ##x.1 6 0) '#\?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 16-1, 21), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D964.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 16-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k66, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('?'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k64" };
 VRecordCall2(runtime, &dbg);
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
  // (if (bruijn ##p.214 0 0) ((bruijn display 15 21) (bruijn ##k.211 3 0) (##string ##string.963)) ((bruijn eqv? 15 16) (close _V0vanity_V0compiler_V0transpile_V20_k65) (bruijn ##x.1 5 0) '#\return))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 15-1, 21), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D963.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 15-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k65, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('\r'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k63" };
 VRecordCall2(runtime, &dbg);
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
  // (if (bruijn ##p.213 0 0) ((bruijn display 14 21) (bruijn ##k.211 2 0) (##string ##string.962)) ((bruijn eqv? 14 16) (close _V0vanity_V0compiler_V0transpile_V20_k64) (bruijn ##x.1 4 0) '#\newline))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 14-1, 21), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D962.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 14-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k64, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('\n'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k62" };
 VRecordCall2(runtime, &dbg);
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
  // (if (bruijn ##p.212 0 0) ((bruijn display 13 21) (bruijn ##k.211 1 0) (##string ##string.961)) ((bruijn eqv? 13 16) (close _V0vanity_V0compiler_V0transpile_V20_k63) (bruijn ##x.1 3 0) '#\tab))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 21), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D961.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 13-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k63, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('\t'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k61" };
 VRecordCall2(runtime, &dbg);
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
  // (if (bruijn ##p.210 1 0) ((bruijn display 12 21) (bruijn ##k.211 0 0) (##string ##string.960)) ((bruijn eqv? 12 16) (close _V0vanity_V0compiler_V0transpile_V20_k62) (bruijn ##x.1 2 0) '#\backspace))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 12-1, 21), runtime,
      _var0,
      VEncodePointer(&_V10string_D960.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 12-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k62, env)}),
      upenv->up->vars[0],
      VEncodeChar('\t'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k74, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.206 6 0) (bruijn ##x.209 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k73" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn + 12 0) (close _V0vanity_V0compiler_V0transpile_V20_k74) (bruijn i 5 1) 1)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k74, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k60" };
 VRecordCall2(runtime, &dbg);
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
  // ((close _V0vanity_V0compiler_V0transpile_V20_k61) (close _V0vanity_V0compiler_V0transpile_V20_k73))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k61, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k73, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k59" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn eqv? 10 16) (close _V0vanity_V0compiler_V0transpile_V20_k60) (bruijn ##x.1 0 0) '#\alarm)
    V_CALL(VGetArg(upenv, 10-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k60, env)}),
      _var0,
      VEncodeChar('\a'));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k58" };
 VRecordCall2(runtime, &dbg);
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
  // (if (bruijn ##p.207 0 0) ((bruijn string-ref 9 38) (close _V0vanity_V0compiler_V0transpile_V20_k59) (bruijn s 5 1) (bruijn i 2 1)) ((bruijn ##k.206 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k59, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->vars[1]);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k57" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn < 8 37) (close _V0vanity_V0compiler_V0transpile_V20_k58) (bruijn i 1 1) (bruijn ##x.223 0 0))
    V_CALL(VGetArg(upenv, 8-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k58, env)}),
      upenv->vars[1],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string-length 7 28) (close _V0vanity_V0compiler_V0transpile_V20_k57) (bruijn s 3 1))
    V_CALL(VGetArg(upenv, 7-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k57, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k75, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 7 21) (bruijn ##k.203 3 0) #\")
    V_CALL(VGetArg(upenv, 7-1, 21), runtime,
      upenv->up->up->vars[0],
      VEncodeChar('"'));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k56" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 1 ((close _V0vanity_V0compiler_V0transpile_V20_lambda6)) ((bruijn loop 0 0) (close _V0vanity_V0compiler_V0transpile_V20_k75) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda6, env)});
    V_CALL(env->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k75, env)}),
      VEncodeInt(0l));
    }
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn display 4 21) (close _V0vanity_V0compiler_V0transpile_V20_k56) #\")
    V_CALL(upenv->up->up->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k56, env)}),
      VEncodeChar('"'));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k88, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.244 1 0) ((bruijn ##k.245 0 0) (bruijn ##p.244 1 0)) ((bruijn eqv? 20 16) (bruijn ##k.245 0 0) (bruijn ##x.2 9 0) '#\\))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 20-1, 16), runtime,
      _var0,
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('\\'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k91, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 22 21) (bruijn ##k.234 9 0) (bruijn ##x.242 0 0) (bruijn port 15 1))
    V_CALL(VGetArg(upenv, 22-1, 21), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0,
      VGetArg(upenv, 15-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-ref 21 38) (close _V0vanity_V0compiler_V0transpile_V20_k91) (bruijn s 17 1) (bruijn i 12 1))
    V_CALL(VGetArg(upenv, 21-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k91, env)}),
      VGetArg(upenv, 17-1, 1),
      VGetArg(upenv, 12-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k92, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 21 21) (bruijn ##k.234 8 0) (bruijn ##x.243 0 0) (bruijn port 14 1))
    V_CALL(VGetArg(upenv, 21-1, 21), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0,
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.240 0 0) ((bruijn display 20 21) (close _V0vanity_V0compiler_V0transpile_V20_k90) #\\ (bruijn port 13 1)) ((bruijn string-ref 20 38) (close _V0vanity_V0compiler_V0transpile_V20_k92) (bruijn s 16 1) (bruijn i 11 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 20-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k90, env)}),
      VEncodeChar('\\'),
      VGetArg(upenv, 13-1, 1));
} else {
    V_CALL(VGetArg(upenv, 20-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k92, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 11-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k88) (close _V0vanity_V0compiler_V0transpile_V20_k89))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k88, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k89, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.239 0 0) ((bruijn display 18 21) (bruijn ##k.234 5 0) (##string ##string.965) (bruijn port 11 1)) ((bruijn eqv? 18 16) (close _V0vanity_V0compiler_V0transpile_V20_k87) (bruijn ##x.2 7 0) '#\"))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 18-1, 21), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D965.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(VGetArg(upenv, 18-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k87, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('"'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.238 0 0) ((bruijn display 17 21) (bruijn ##k.234 4 0) (##string ##string.964) (bruijn port 10 1)) ((bruijn eqv? 17 16) (close _V0vanity_V0compiler_V0transpile_V20_k86) (bruijn ##x.2 6 0) '#\?))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 17-1, 21), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D964.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 1));
} else {
    V_CALL(VGetArg(upenv, 17-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k86, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('?'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.237 0 0) ((bruijn display 16 21) (bruijn ##k.234 3 0) (##string ##string.963) (bruijn port 9 1)) ((bruijn eqv? 16 16) (close _V0vanity_V0compiler_V0transpile_V20_k85) (bruijn ##x.2 5 0) '#\return))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 16-1, 21), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D963.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 1));
} else {
    V_CALL(VGetArg(upenv, 16-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k85, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('\r'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.236 0 0) ((bruijn display 15 21) (bruijn ##k.234 2 0) (##string ##string.962) (bruijn port 8 1)) ((bruijn eqv? 15 16) (close _V0vanity_V0compiler_V0transpile_V20_k84) (bruijn ##x.2 4 0) '#\newline))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 15-1, 21), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D962.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(VGetArg(upenv, 15-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k84, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('\n'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.235 0 0) ((bruijn display 14 21) (bruijn ##k.234 1 0) (##string ##string.961) (bruijn port 7 1)) ((bruijn eqv? 14 16) (close _V0vanity_V0compiler_V0transpile_V20_k83) (bruijn ##x.2 3 0) '#\tab))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 14-1, 21), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D961.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 1));
} else {
    V_CALL(VGetArg(upenv, 14-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k83, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('\t'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.233 1 0) ((bruijn display 13 21) (bruijn ##k.234 0 0) (##string ##string.960) (bruijn port 6 1)) ((bruijn eqv? 13 16) (close _V0vanity_V0compiler_V0transpile_V20_k82) (bruijn ##x.2 2 0) '#\backspace))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 13-1, 21), runtime,
      _var0,
      VEncodePointer(&_V10string_D960.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(VGetArg(upenv, 13-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k82, env)}),
      upenv->up->vars[0],
      VEncodeChar('\t'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k94, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.229 5 0) (bruijn ##x.232 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 13 0) (close _V0vanity_V0compiler_V0transpile_V20_k94) (bruijn i 4 1) 1)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k94, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k81) (close _V0vanity_V0compiler_V0transpile_V20_k93))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k81, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k93, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 11 16) (close _V0vanity_V0compiler_V0transpile_V20_k80) (bruijn ##x.2 0 0) '#\alarm)
    V_CALL(VGetArg(upenv, 11-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k80, env)}),
      _var0,
      VEncodeChar('\a'));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.230 0 0) ((bruijn string-ref 10 38) (close _V0vanity_V0compiler_V0transpile_V20_k79) (bruijn s 6 1) (bruijn i 1 1)) ((bruijn ##k.229 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k79, env)}),
      VGetArg(upenv, 6-1, 1),
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 9 37) (close _V0vanity_V0compiler_V0transpile_V20_k78) (bruijn i 0 1) (bruijn len 2 0))
    V_CALL(VGetArg(upenv, 9-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k78, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k97, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.224 7 0) (bruijn ret 1 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      upenv->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 10 36) (close _V0vanity_V0compiler_V0transpile_V20_k97) (bruijn port 3 1))
    V_CALL(VGetArg(upenv, 10-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k97, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn get-output-string 9 35) (close _V0vanity_V0compiler_V0transpile_V20_k96) (bruijn port 2 1))
    V_CALL(VGetArg(upenv, 9-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k96, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda8" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0transpile_V20_lambda9)) ((bruijn loop 0 0) (close _V0vanity_V0compiler_V0transpile_V20_k95) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda9, env)});
    V_CALL(env->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k95, env)}),
      VEncodeInt(0l));
    }
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda8) (bruijn ##x.225 1 0) (bruijn ##x.226 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda8, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn open-output-string 5 34) (close _V0vanity_V0compiler_V0transpile_V20_k77))
    V_CALL(VGetArg(upenv, 5-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k77, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string-length 4 28) (close _V0vanity_V0compiler_V0transpile_V20_k76) (bruijn s 0 1))
    V_CALL(upenv->up->up->up->vars[28], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k76, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k104, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.253 0 0) ((bruijn ##k.246 8 0) (##string ##string.967)) ((bruijn ##k.246 8 0) (bruijn c 8 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodePointer(&_V10string_D967.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 8-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.252 0 0) ((bruijn ##k.246 7 0) (##string ##string.966)) ((bruijn eqv? 11 16) (close _V0vanity_V0compiler_V0transpile_V20_k104) (bruijn ##x.3 6 0) '#\'))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodePointer(&_V10string_D966.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 11-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k104, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('\''));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.251 0 0) ((bruijn ##k.246 6 0) (##string ##string.964)) ((bruijn eqv? 10 16) (close _V0vanity_V0compiler_V0transpile_V20_k103) (bruijn ##x.3 5 0) '#\\))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodePointer(&_V10string_D964.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 10-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k103, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('\\'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.250 0 0) ((bruijn ##k.246 5 0) (##string ##string.963)) ((bruijn eqv? 9 16) (close _V0vanity_V0compiler_V0transpile_V20_k102) (bruijn ##x.3 4 0) '#\return))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodePointer(&_V10string_D963.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 9-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k102, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('\r'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.249 0 0) ((bruijn ##k.246 4 0) (##string ##string.962)) ((bruijn eqv? 8 16) (close _V0vanity_V0compiler_V0transpile_V20_k101) (bruijn ##x.3 3 0) '#\newline))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D962.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 8-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k101, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('\n'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.248 0 0) ((bruijn ##k.246 3 0) (##string ##string.962)) ((bruijn eqv? 7 16) (close _V0vanity_V0compiler_V0transpile_V20_k100) (bruijn ##x.3 2 0) '#\tab))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D962.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 7-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k100, env)}),
      upenv->up->vars[0],
      VEncodeChar('\t'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.247 0 0) ((bruijn ##k.246 2 0) (##string ##string.960)) ((bruijn eqv? 6 16) (close _V0vanity_V0compiler_V0transpile_V20_k99) (bruijn ##x.3 1 0) '#\backspace))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10string_D960.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 6-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k99, env)}),
      upenv->vars[0],
      VEncodeChar('\t'));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda11" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 5 16) (close _V0vanity_V0compiler_V0transpile_V20_k98) (bruijn ##x.3 0 0) '#\alarm)
    V_CALL(VGetArg(upenv, 5-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k98, env)}),
      _var0,
      VEncodeChar('\a'));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda11) (bruijn c 0 1))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda11, env, runtime,
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k105, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 5 2) (bruijn ##k.254 1 0) (##string ##string.968) (bruijn ##x.255 0 0))
    V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D968.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn mangle-symbol 4 24) (close _V0vanity_V0compiler_V0transpile_V20_k105) (bruijn x 0 1))
    V_CALL(upenv->up->up->up->vars[24], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k105, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k106, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 5 2) (bruijn ##k.256 1 0) (##string ##string.969) (bruijn ##x.257 0 0))
    V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D969.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn mangle-symbol 4 24) (close _V0vanity_V0compiler_V0transpile_V20_k106) (bruijn x 0 1))
    V_CALL(upenv->up->up->up->vars[24], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k106, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k110, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 8 2) (bruijn ##k.258 4 0) (##string ##string.972) (bruijn ##x.262 0 0))
    V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D972.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k114, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 11 21) (bruijn ##k.258 7 0) (bruijn ##x.266 0 0))
    V_CALL(VGetArg(upenv, 11-1, 21), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.265 0 0) ((bruijn mangle-symbol 10 24) (close _V0vanity_V0compiler_V0transpile_V20_k114) (bruijn x 6 1)) ((bruijn compiler-error 10 42) (bruijn ##k.258 6 0) (##string ##string.975) (bruijn x 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k114, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(VGetArg(upenv, 10-1, 42), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D975.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.264 0 0) ((bruijn printf 9 2) (bruijn ##k.258 5 0) (##string ##string.974)) ((bruijn symbol? 9 14) (close _V0vanity_V0compiler_V0transpile_V20_k113) (bruijn x 5 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D974.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 9-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k113, env)}),
      VGetArg(upenv, 5-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.263 0 0) ((bruijn printf 8 2) (bruijn ##k.258 4 0) (##string ##string.973)) ((bruijn eq? 8 30) (close _V0vanity_V0compiler_V0transpile_V20_k112) (bruijn x 4 1) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D973.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 8-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k112, env)}),
      upenv->up->up->up->vars[1],
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.261 0 0) ((bruijn escape-char 4 3) (close _V0vanity_V0compiler_V0transpile_V20_k110) (bruijn x 3 1)) ((bruijn eq? 7 30) (close _V0vanity_V0compiler_V0transpile_V20_k111) (bruijn x 3 1) #t))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k110, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k111, env)}),
      upenv->up->up->vars[1],
      VEncodeBool(true));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.260 0 0) ((bruijn printf 6 2) (bruijn ##k.258 2 0) (##string ##string.971) (bruijn x 2 1)) ((bruijn char? 6 31) (close _V0vanity_V0compiler_V0transpile_V20_k109) (bruijn x 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D971.sym, VPOINTER_OTHER),
      upenv->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k109, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.259 0 0) ((bruijn printf 5 2) (bruijn ##k.258 1 0) (##string ##string.970) (bruijn x 1 1)) ((bruijn number? 5 32) (close _V0vanity_V0compiler_V0transpile_V20_k108) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D970.sym, VPOINTER_OTHER),
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k108, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn integer? 4 33) (close _V0vanity_V0compiler_V0transpile_V20_k107) (bruijn x 0 1))
    V_CALL(upenv->up->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k107, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k126, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 16 2) (bruijn ##k.267 12 0) (##string ##string.976) (bruijn len 1 0) (bruijn mangled 8 0) (bruijn len 1 0) (bruijn escaped 5 0))
    V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V10string_D976.sym, VPOINTER_OTHER),
      upenv->vars[0],
      VGetArg(upenv, 8-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 15 2) (close _V0vanity_V0compiler_V0transpile_V20_k126) (##string ##string.977) (bruijn mangled 7 0))
    V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k126, env)}),
      VEncodePointer(&_V10string_D977.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 14 0) (close _V0vanity_V0compiler_V0transpile_V20_k125) (bruijn ##x.270 0 0) 1)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k125, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 13 28) (close _V0vanity_V0compiler_V0transpile_V20_k124) (bruijn ##x.271 0 0))
    V_CALL(VGetArg(upenv, 13-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k124, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol->string 12 29) (close _V0vanity_V0compiler_V0transpile_V20_k123) (bruijn ##x.272 0 0))
    V_CALL(VGetArg(upenv, 12-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k123, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 11 7) (close _V0vanity_V0compiler_V0transpile_V20_k122) (bruijn lit 7 1))
    V_CALL(VGetArg(upenv, 11-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k122, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn escape-string 7 2) (close _V0vanity_V0compiler_V0transpile_V20_k121) (bruijn ##x.273 0 0))
    V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k121, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol->string 9 29) (close _V0vanity_V0compiler_V0transpile_V20_k120) (bruijn ##x.274 0 0))
    V_CALL(VGetArg(upenv, 9-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k120, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 8 7) (close _V0vanity_V0compiler_V0transpile_V20_k119) (bruijn lit 4 1))
    V_CALL(VGetArg(upenv, 8-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k119, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 7 24) (close _V0vanity_V0compiler_V0transpile_V20_k118) (bruijn ##x.275 0 0))
    V_CALL(VGetArg(upenv, 7-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k118, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k135, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 15 2) (bruijn ##k.267 11 0) (##string ##string.978) (bruijn len 0 0) (bruijn mangled 5 0) (bruijn len 0 0) (bruijn escaped 3 0))
    V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D978.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 5-1, 0),
      _var0,
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 14 0) (close _V0vanity_V0compiler_V0transpile_V20_k135) (bruijn ##x.277 0 0) 1)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k135, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 13 28) (close _V0vanity_V0compiler_V0transpile_V20_k134) (bruijn ##x.278 0 0))
    V_CALL(VGetArg(upenv, 13-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k134, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 12 7) (close _V0vanity_V0compiler_V0transpile_V20_k133) (bruijn lit 8 1))
    V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k133, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn escape-string 8 2) (close _V0vanity_V0compiler_V0transpile_V20_k132) (bruijn ##x.279 0 0))
    V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k132, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 10 7) (close _V0vanity_V0compiler_V0transpile_V20_k131) (bruijn lit 6 1))
    V_CALL(VGetArg(upenv, 10-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k131, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 9 24) (close _V0vanity_V0compiler_V0transpile_V20_k130) (bruijn ##x.280 0 0))
    V_CALL(VGetArg(upenv, 9-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k130, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k139, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 12 16) (bruijn ##k.286 1 0) (bruijn ##x.287 0 0) '##intrinsic)
    V_CALL(VGetArg(upenv, 12-1, 16), runtime,
      upenv->vars[0],
      _var0,
      _V10intrinsic);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.285 1 0) ((bruijn caar 11 26) (close _V0vanity_V0compiler_V0transpile_V20_k139) (bruijn lit 7 1)) ((bruijn ##k.286 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 11-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k139, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k144, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 15 2) (bruijn ##k.267 11 0) (##string ##string.979) (bruijn mangled 2 0) (bruijn ##x.283 0 0))
    V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D979.sym, VPOINTER_OTHER),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 14 22) (close _V0vanity_V0compiler_V0transpile_V20_k144) (bruijn lit 10 1))
    V_CALL(VGetArg(upenv, 14-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k144, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 13 2) (close _V0vanity_V0compiler_V0transpile_V20_k143) (##string ##string.980) (bruijn mangled 0 0))
    V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k143, env)}),
      VEncodePointer(&_V10string_D980.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 12 24) (close _V0vanity_V0compiler_V0transpile_V20_k142) (bruijn ##x.284 0 0))
    V_CALL(VGetArg(upenv, 12-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k142, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.281 0 0) ((bruijn cadar 11 25) (close _V0vanity_V0compiler_V0transpile_V20_k141) (bruijn lit 7 1)) ((bruijn compiler-error 11 42) (bruijn ##k.267 7 0) (##string ##string.981) (bruijn lit 7 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k141, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    V_CALL(VGetArg(upenv, 11-1, 42), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D981.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k138) (close _V0vanity_V0compiler_V0transpile_V20_k140))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k138, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k140, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pair? 9 15) (close _V0vanity_V0compiler_V0transpile_V20_k137) (bruijn ##x.288 0 0))
    V_CALL(VGetArg(upenv, 9-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k137, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.276 0 0) ((bruijn cdr 8 22) (close _V0vanity_V0compiler_V0transpile_V20_k129) (bruijn lit 4 1)) ((bruijn car 8 7) (close _V0vanity_V0compiler_V0transpile_V20_k136) (bruijn lit 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k129, env)}),
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 8-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k136, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string? 7 27) (close _V0vanity_V0compiler_V0transpile_V20_k128) (bruijn ##x.289 0 0))
    V_CALL(VGetArg(upenv, 7-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k128, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.268 0 0) ((bruijn car 6 7) (close _V0vanity_V0compiler_V0transpile_V20_k117) (bruijn lit 2 1)) ((bruijn car 6 7) (close _V0vanity_V0compiler_V0transpile_V20_k127) (bruijn lit 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k117, env)}),
      upenv->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k127, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol? 5 14) (close _V0vanity_V0compiler_V0transpile_V20_k116) (bruijn ##x.290 0 0))
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k116, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 4 7) (close _V0vanity_V0compiler_V0transpile_V20_k115) (bruijn lit 0 1))
    V_CALL(upenv->up->up->up->vars[7], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k115, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k148, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 10 2) (bruijn ##k.292 4 0) (##string ##string.982) (bruijn mangled 0 0) (bruijn mangled 0 0) (bruijn mangled 0 0))
    V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D982.sym, VPOINTER_OTHER),
      _var0,
      _var0,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 9 24) (close _V0vanity_V0compiler_V0transpile_V20_k148) (bruijn ##x.294 0 0))
    V_CALL(VGetArg(upenv, 9-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k148, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k152, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 12 16) (bruijn ##k.298 1 0) (bruijn ##x.299 0 0) '##intrinsic)
    V_CALL(VGetArg(upenv, 12-1, 16), runtime,
      upenv->vars[0],
      _var0,
      _V10intrinsic);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.297 1 0) ((bruijn caar 11 26) (close _V0vanity_V0compiler_V0transpile_V20_k152) (bruijn lit 5 1)) ((bruijn ##k.298 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 11-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k152, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k155, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 13 2) (bruijn ##k.292 7 0) (##string ##string.983) (bruijn mangled 0 0) (bruijn mangled 0 0) (bruijn mangled 0 0))
    V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D983.sym, VPOINTER_OTHER),
      _var0,
      _var0,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-symbol 12 24) (close _V0vanity_V0compiler_V0transpile_V20_k155) (bruijn ##x.296 0 0))
    V_CALL(VGetArg(upenv, 12-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k155, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.295 0 0) ((bruijn cadar 11 25) (close _V0vanity_V0compiler_V0transpile_V20_k154) (bruijn lit 5 1)) ((bruijn ##k.292 5 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k154, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k151) (close _V0vanity_V0compiler_V0transpile_V20_k153))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k151, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k153, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pair? 9 15) (close _V0vanity_V0compiler_V0transpile_V20_k150) (bruijn ##x.300 0 0))
    V_CALL(VGetArg(upenv, 9-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k150, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.293 0 0) ((bruijn car 8 7) (close _V0vanity_V0compiler_V0transpile_V20_k147) (bruijn lit 2 1)) ((bruijn car 8 7) (close _V0vanity_V0compiler_V0transpile_V20_k149) (bruijn lit 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k147, env)}),
      upenv->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 8-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k149, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol? 7 14) (close _V0vanity_V0compiler_V0transpile_V20_k146) (bruijn ##x.301 0 0))
    V_CALL(VGetArg(upenv, 7-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k146, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 6 7) (close _V0vanity_V0compiler_V0transpile_V20_k145) (bruijn lit 0 1))
    V_CALL(VGetArg(upenv, 6-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k145, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k158, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 8 2) (bruijn ##k.291 4 0) (##string ##string.984))
    V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D984.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 7 41) (close _V0vanity_V0compiler_V0transpile_V20_k158) (bruijn print-init 2 0) (bruijn literals 3 1))
    V_CALL(VGetArg(upenv, 7-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k158, env)}),
      upenv->up->vars[0],
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 6 2) (close _V0vanity_V0compiler_V0transpile_V20_k157) (##string ##string.985) (bruijn ##x.304 0 0))
    V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k157, env)}),
      VEncodePointer(&_V10string_D985.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0transpile_V20_lambda17)) ((bruijn gendllmain 4 0) (close _V0vanity_V0compiler_V0transpile_V20_k156)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda17, env)});
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k156, env)}));
    }
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k161, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.7 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.7 0 0))) ((bruijn ##kk.4 5 1) (bruijn ##k.389 2 0) #t) ((bruijn ##k.389 2 0) #f)) ((bruijn ##k.389 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
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
static void _V0vanity_V0compiler_V0transpile_V20_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.390 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k161) (##inline ##vcore.cdr (bruijn ##expr.6 2 0))) ((bruijn ##k.389 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k161, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.6 1 0)) ((bruijn equal? 8 5) (close _V0vanity_V0compiler_V0transpile_V20_k160) 'close (##inline ##vcore.car (bruijn ##expr.6 1 0))) ((bruijn ##k.389 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k160, env)}),
      _V0close,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k164, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.386 0 0) ((bruijn ##kk.4 6 1) (bruijn ##k.385 1 0) #f) ((bruijn ##k.385 1 0) #f))
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
static void _V0vanity_V0compiler_V0transpile_V20_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.8 1 0)) ((bruijn equal? 10 5) (close _V0vanity_V0compiler_V0transpile_V20_k164) 'quote (##inline ##vcore.car (bruijn ##expr.8 1 0))) ((bruijn ##k.385 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k164, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k167, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.382 0 0) ((bruijn ##kk.4 8 1) (bruijn ##k.381 1 0) #f) ((bruijn ##k.381 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.9 1 0)) ((bruijn equal? 12 5) (close _V0vanity_V0compiler_V0transpile_V20_k167) 'bruijn (##inline ##vcore.car (bruijn ##expr.9 1 0))) ((bruijn ##k.381 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k167, env)}),
      _V0bruijn,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k170, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.378 0 0) ((bruijn ##kk.4 10 1) (bruijn ##k.377 1 0) #f) ((bruijn ##k.377 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.10 1 0)) ((bruijn equal? 14 5) (close _V0vanity_V0compiler_V0transpile_V20_k170) '##string (##inline ##vcore.car (bruijn ##expr.10 1 0))) ((bruijn ##k.377 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k170, env)}),
      _V10string,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k173, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.374 0 0) ((bruijn ##kk.4 12 1) (bruijn ##k.373 1 0) #f) ((bruijn ##k.373 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.11 1 0)) ((bruijn equal? 16 5) (close _V0vanity_V0compiler_V0transpile_V20_k173) '##intrinsic (##inline ##vcore.car (bruijn ##expr.11 1 0))) ((bruijn ##k.373 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k173, env)}),
      _V10intrinsic,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k182, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.369 0 0) ((bruijn ##k.368 1 0) (bruijn ##p.369 0 0)) ((bruijn closes? 22 9) (bruijn ##k.368 1 0) (##inline ##vcore.car (bruijn ##expr.15 3 0))))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      upenv->vars[0],
      VInlineCar(
        upenv->up->up->vars[0]));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.367 1 0) ((bruijn ##k.368 0 0) (bruijn ##p.367 1 0)) ((bruijn closes? 21 9) (close _V0vanity_V0compiler_V0transpile_V20_k182) (##inline ##vcore.car (bruijn ##expr.14 3 0))))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 21-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k182, env)}),
      VInlineCar(
        upenv->up->up->vars[0]));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k183, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.4 19 1) (bruijn ##k.360 6 0) (bruijn ##x.366 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k181) (close _V0vanity_V0compiler_V0transpile_V20_k183))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k181, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k183, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.15 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.15 0 0))) ((bruijn closes? 19 9) (close _V0vanity_V0compiler_V0transpile_V20_k180) (##inline ##vcore.car (bruijn ##expr.13 2 0))) ((bruijn ##k.360 4 0) #f)) ((bruijn ##k.360 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 19-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k180, env)}),
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
static void _V0vanity_V0compiler_V0transpile_V20_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.14 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k179) (##inline ##vcore.cdr (bruijn ##expr.14 0 0))) ((bruijn ##k.360 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k179, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.13 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k178) (##inline ##vcore.cdr (bruijn ##expr.13 0 0))) ((bruijn ##k.360 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k178, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.361 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k177) (##inline ##vcore.cdr (bruijn ##expr.12 2 0))) ((bruijn ##k.360 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k177, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.12 1 0)) ((bruijn equal? 18 5) (close _V0vanity_V0compiler_V0transpile_V20_k176) 'if (##inline ##vcore.car (bruijn ##expr.12 1 0))) ((bruijn ##k.360 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k176, env)}),
      _V0if,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k189, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.19 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.19 0 0))) ((bruijn ##kk.4 19 1) (bruijn ##k.351 4 0) #t) ((bruijn ##k.351 4 0) #f)) ((bruijn ##k.351 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
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
static void _V0vanity_V0compiler_V0transpile_V20_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.18 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k189) (##inline ##vcore.cdr (bruijn ##expr.18 0 0))) ((bruijn ##k.351 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k189, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.17 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k188) (##inline ##vcore.cdr (bruijn ##expr.17 0 0))) ((bruijn ##k.351 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k188, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.352 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k187) (##inline ##vcore.cdr (bruijn ##expr.16 2 0))) ((bruijn ##k.351 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k187, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.16 1 0)) ((bruijn equal? 20 5) (close _V0vanity_V0compiler_V0transpile_V20_k186) 'set! (##inline ##vcore.car (bruijn ##expr.16 1 0))) ((bruijn ##k.351 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k186, env)}),
      _V0set_B,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k195, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.23 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.23 0 0))) ((bruijn ##kk.4 21 1) (bruijn ##k.342 4 0) #t) ((bruijn ##k.342 4 0) #f)) ((bruijn ##k.342 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 21-1, 1), runtime,
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
static void _V0vanity_V0compiler_V0transpile_V20_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.22 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k195) (##inline ##vcore.cdr (bruijn ##expr.22 0 0))) ((bruijn ##k.342 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k195, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.21 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k194) (##inline ##vcore.cdr (bruijn ##expr.21 0 0))) ((bruijn ##k.342 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k194, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.343 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k193) (##inline ##vcore.cdr (bruijn ##expr.20 2 0))) ((bruijn ##k.342 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k193, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.20 1 0)) ((bruijn equal? 22 5) (close _V0vanity_V0compiler_V0transpile_V20_k192) 'define (##inline ##vcore.car (bruijn ##expr.20 1 0))) ((bruijn ##k.342 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k192, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k200, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.4 22 1) (bruijn ##k.336 3 0) (bruijn ##x.339 0 0))
    V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.25 0 0)) ((bruijn closes? 23 9) (close _V0vanity_V0compiler_V0transpile_V20_k200) (##inline ##vcore.cdr (bruijn ##expr.25 0 0))) ((bruijn ##k.336 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL(VGetArg(upenv, 23-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k200, env)}),
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.337 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k199) (##inline ##vcore.cdr (bruijn ##expr.24 2 0))) ((bruijn ##k.336 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k199, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.24 1 0)) ((bruijn equal? 24 5) (close _V0vanity_V0compiler_V0transpile_V20_k198) '##inline (##inline ##vcore.car (bruijn ##expr.24 1 0))) ((bruijn ##k.336 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k198, env)}),
      _V10inline,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k203, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.333 0 0) ((bruijn ##kk.4 22 1) (bruijn ##k.332 1 0) #t) ((bruijn ##k.332 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(true));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.26 1 0)) ((bruijn equal? 26 5) (close _V0vanity_V0compiler_V0transpile_V20_k203) 'letrec (##inline ##vcore.car (bruijn ##expr.26 1 0))) ((bruijn ##k.332 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 26-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k203, env)}),
      _V0letrec,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k206, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.4 24 1) (bruijn ##k.327 1 0) (bruijn ##x.329 0 0))
    V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.27 1 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.27 1 0))) ((bruijn closes? 25 9) (close _V0vanity_V0compiler_V0transpile_V20_k206) (##inline ##vcore.car (bruijn ##expr.27 1 0))) ((bruijn ##k.327 0 0) #f)) ((bruijn ##k.327 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 25-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k206, env)}),
      VInlineCar(
        upenv->vars[0]));
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
static void _V0vanity_V0compiler_V0transpile_V20_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k210, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.324 1 0) ((bruijn ##k.325 0 0) (bruijn ##p.324 1 0)) ((bruijn closes? 29 9) (bruijn ##k.325 0 0) (##inline ##vcore.cdr (bruijn ##expr.28 3 0))))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 29-1, 9), runtime,
      _var0,
      VInlineCdr(
        upenv->up->up->vars[0]));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k211, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.4 27 1) (bruijn ##k.322 2 0) (bruijn ##x.323 0 0))
    V_CALL(VGetArg(upenv, 27-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k210) (close _V0vanity_V0compiler_V0transpile_V20_k211))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k210, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k211, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.28 1 0)) ((bruijn closes? 27 9) (close _V0vanity_V0compiler_V0transpile_V20_k209) (##inline ##vcore.car (bruijn ##expr.28 1 0))) ((bruijn ##k.322 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 27-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k209, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k214, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.4 28 1) (bruijn ##k.306 28 0) (bruijn ##x.320 0 0))
    V_CALL(VGetArg(upenv, 28-1, 1), runtime,
      VGetArg(upenv, 28-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 32 42) (close _V0vanity_V0compiler_V0transpile_V20_k214) (##string ##string.986) (bruijn expr 28 1))
    V_CALL(VGetArg(upenv, 32-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k214, env)}),
      VEncodePointer(&_V10string_D986.sym, VPOINTER_OTHER),
      VGetArg(upenv, 28-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda33" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.4 26 1) (close _V0vanity_V0compiler_V0transpile_V20_k213) #f)
    V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k213, env)}),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda33) (bruijn ##input.5 24 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda33, env, runtime,
      VGetArg(upenv, 24-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k208) (close _V0vanity_V0compiler_V0transpile_V20_k212))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k208, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k212, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda32) (bruijn ##input.5 22 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda32, env, runtime,
      VGetArg(upenv, 22-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda31" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k205) (close _V0vanity_V0compiler_V0transpile_V20_k207))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k205, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k207, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda31) (bruijn ##input.5 20 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda31, env, runtime,
      VGetArg(upenv, 20-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k202) (close _V0vanity_V0compiler_V0transpile_V20_k204))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k202, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k204, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda30) (bruijn ##input.5 18 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda30, env, runtime,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda29" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k197) (close _V0vanity_V0compiler_V0transpile_V20_k201))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k197, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k201, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda29) (bruijn ##input.5 16 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda29, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda28" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k191) (close _V0vanity_V0compiler_V0transpile_V20_k196))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k191, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k196, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda28) (bruijn ##input.5 14 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda28, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda27" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k185) (close _V0vanity_V0compiler_V0transpile_V20_k190))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k185, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k190, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda27) (bruijn ##input.5 12 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda27, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda26" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k175) (close _V0vanity_V0compiler_V0transpile_V20_k184))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k175, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k184, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda26) (bruijn ##input.5 10 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda26, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda25" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k172) (close _V0vanity_V0compiler_V0transpile_V20_k174))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k172, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k174, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda25) (bruijn ##input.5 8 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda25, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda24" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k169) (close _V0vanity_V0compiler_V0transpile_V20_k171))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k169, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k171, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda24) (bruijn ##input.5 6 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda24, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda23" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k166) (close _V0vanity_V0compiler_V0transpile_V20_k168))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k166, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k168, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda23) (bruijn ##input.5 4 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda23, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda22" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k163) (close _V0vanity_V0compiler_V0transpile_V20_k165))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k163, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k165, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda22) (bruijn ##input.5 2 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda22, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda21" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k159) (close _V0vanity_V0compiler_V0transpile_V20_k162))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k159, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k162, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda20" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda21) (bruijn ##input.5 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda21, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda20) (bruijn expr 1 1))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda20, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 4 6) (bruijn ##k.305 0 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda19))
    V_CALL(upenv->up->up->up->vars[6], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda19, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k217, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 9 2) (bruijn ##k.396 3 0) (##string ##string.987))
    V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D987.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k218, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-expr 7 10) (bruijn ##k.399 1 0) (bruijn x 1 1) (bruijn args 6 2))
    V_CALL(VGetArg(upenv, 7-1, 10), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn printf 9 2) (close _V0vanity_V0compiler_V0transpile_V20_k218) (##string ##string.988))
    V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k218, env)}),
      VEncodePointer(&_V10string_D988.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 8 41) (close _V0vanity_V0compiler_V0transpile_V20_k217) (close _V0vanity_V0compiler_V0transpile_V20_lambda36) (bruijn xs 2 2))
    V_CALL(VGetArg(upenv, 8-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k217, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda36, env)}),
      upenv->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 7 2) (close _V0vanity_V0compiler_V0transpile_V20_k216) (##string ##string.989) (bruijn ##x.401 0 0))
    V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k216, env)}),
      VEncodePointer(&_V10string_D989.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda35, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda35, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn lookup-intrinsic-name 6 18) (close _V0vanity_V0compiler_V0transpile_V20_k215) (bruijn f 0 1))
    V_CALL(VGetArg(upenv, 6-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k215, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k221, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 9 2) (bruijn ##k.402 3 0) (##string ##string.987))
    V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D987.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k222, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-expr 7 10) (bruijn ##k.406 1 0) (bruijn x 1 1) (bruijn args 6 2))
    V_CALL(VGetArg(upenv, 7-1, 10), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn printf 9 2) (close _V0vanity_V0compiler_V0transpile_V20_k222) (##string ##string.988))
    V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k222, env)}),
      VEncodePointer(&_V10string_D988.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 8 41) (close _V0vanity_V0compiler_V0transpile_V20_k221) (close _V0vanity_V0compiler_V0transpile_V20_lambda38) (bruijn xs 2 2))
    V_CALL(VGetArg(upenv, 8-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k221, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda38, env)}),
      upenv->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 7 2) (close _V0vanity_V0compiler_V0transpile_V20_k220) (##string ##string.990))
    V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k220, env)}),
      VEncodePointer(&_V10string_D990.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k226, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.75 5 1) (bruijn ##k.413 3 0) (bruijn ##x.417 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.78 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.78 0 0))) ((bruijn printf 11 2) (close _V0vanity_V0compiler_V0transpile_V20_k226) (##string ##string.991) (##inline ##vcore.car (bruijn ##expr.78 0 0))) ((bruijn ##k.413 2 0) #f)) ((bruijn ##k.413 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k226, env)}),
      VEncodePointer(&_V10string_D991.sym, VPOINTER_OTHER),
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
static void _V0vanity_V0compiler_V0transpile_V20_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.414 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k225) (##inline ##vcore.cdr (bruijn ##expr.77 2 0))) ((bruijn ##k.413 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k225, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.77 1 0)) ((bruijn equal? 9 5) (close _V0vanity_V0compiler_V0transpile_V20_k224) 'close (##inline ##vcore.car (bruijn ##expr.77 1 0))) ((bruijn ##k.413 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k224, env)}),
      _V0close,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k229, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.75 4 1) (bruijn ##k.408 4 0) (bruijn ##x.410 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 7 10) (close _V0vanity_V0compiler_V0transpile_V20_k229) (bruijn f 4 1) (bruijn args 6 2))
    V_CALL(VGetArg(upenv, 7-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k229, env)}),
      upenv->up->up->up->vars[1],
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn display 9 21) (close _V0vanity_V0compiler_V0transpile_V20_k228) (##string ##string.992))
    V_CALL(VGetArg(upenv, 9-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k228, env)}),
      VEncodePointer(&_V10string_D992.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda40" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k223) (close _V0vanity_V0compiler_V0transpile_V20_k227))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k223, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k227, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda40) (bruijn f 1 1))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda40, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda37, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda37, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn call/cc 6 6) (close _V0vanity_V0compiler_V0transpile_V20_k219) (close _V0vanity_V0compiler_V0transpile_V20_lambda39))
    V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k219, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda39, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k240, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 17 39) (bruijn ##k.420 11 0) (##string ##string.993))
    V_CALL(VGetArg(upenv, 17-1, 39), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D993.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 13 10) (close _V0vanity_V0compiler_V0transpile_V20_k240) (bruijn body 10 3) (bruijn args 2 0))
    V_CALL(VGetArg(upenv, 13-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k240, env)}),
      VGetArg(upenv, 10-1, 3),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k242, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 18 39) (bruijn ##k.429 2 0) (##string ##string.994))
    V_CALL(VGetArg(upenv, 18-1, 39), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D994.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 14 10) (close _V0vanity_V0compiler_V0transpile_V20_k242) (bruijn x 1 1) (bruijn args 3 0))
    V_CALL(VGetArg(upenv, 14-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k242, env)}),
      upenv->vars[1],
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda42, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda42, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn printf 16 2) (close _V0vanity_V0compiler_V0transpile_V20_k241) (##string ##string.995) (bruijn i 0 2))
    V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k241, env)}),
      VEncodePointer(&_V10string_D995.sym, VPOINTER_OTHER),
      _var2);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 15 41) (close _V0vanity_V0compiler_V0transpile_V20_k239) (close _V0vanity_V0compiler_V0transpile_V20_lambda42) (bruijn xs 9 2) (bruijn ##x.432 0 0))
    V_CALL(VGetArg(upenv, 15-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k239, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda42, env)}),
      VGetArg(upenv, 9-1, 2),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iota 14 4) (close _V0vanity_V0compiler_V0transpile_V20_k238) (bruijn n 8 1))
    V_CALL(VGetArg(upenv, 14-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k238, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 14 1) (bruijn ##k.433 0 0) (##string ##string.996) (bruijn i 0 1))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      _var0,
      VEncodePointer(&_V10string_D996.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 13 9) (close _V0vanity_V0compiler_V0transpile_V20_k237) (close _V0vanity_V0compiler_V0transpile_V20_lambda43) (bruijn ##x.434 0 0))
    V_CALL(VGetArg(upenv, 13-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k237, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda43, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iota 12 4) (close _V0vanity_V0compiler_V0transpile_V20_k236) (bruijn n 6 1))
    V_CALL(VGetArg(upenv, 12-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k236, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 11 2) (close _V0vanity_V0compiler_V0transpile_V20_k235) (##string ##string.997) (bruijn n 5 1) (bruijn n 5 1))
    V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k235, env)}),
      VEncodePointer(&_V10string_D997.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 10 2) (close _V0vanity_V0compiler_V0transpile_V20_k234) (##string ##string.998))
    V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k234, env)}),
      VEncodePointer(&_V10string_D998.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 9 2) (close _V0vanity_V0compiler_V0transpile_V20_k233) (##string ##string.999) (bruijn n 3 1))
    V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k233, env)}),
      VEncodePointer(&_V10string_D999.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 8 39) (close _V0vanity_V0compiler_V0transpile_V20_k232) (##string ##string.1000))
    V_CALL(VGetArg(upenv, 8-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k232, env)}),
      VEncodePointer(&_V10string_D1000.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 7 39) (close _V0vanity_V0compiler_V0transpile_V20_k231) (##string ##string.1001))
    V_CALL(VGetArg(upenv, 7-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k231, env)}),
      VEncodePointer(&_V10string_D1001.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda41, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda41, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn printf 6 2) (close _V0vanity_V0compiler_V0transpile_V20_k230) (##string ##string.1002))
    V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k230, env)}),
      VEncodePointer(&_V10string_D1002.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k248, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 12 2) (bruijn ##k.435 6 0) (##string ##string.1003))
    V_CALL(VGetArg(upenv, 12-1, 2), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1003.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 8 10) (close _V0vanity_V0compiler_V0transpile_V20_k248) (bruijn x 5 3) (bruijn args 7 2))
    V_CALL(VGetArg(upenv, 8-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k248, env)}),
      VGetArg(upenv, 5-1, 3),
      VGetArg(upenv, 7-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 10 2) (close _V0vanity_V0compiler_V0transpile_V20_k247) (##string ##string.988))
    V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k247, env)}),
      VEncodePointer(&_V10string_D988.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-literal 6 6) (close _V0vanity_V0compiler_V0transpile_V20_k246) (bruijn y 3 2))
    V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k246, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 8 2) (close _V0vanity_V0compiler_V0transpile_V20_k245) (##string ##string.988))
    V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k245, env)}),
      VEncodePointer(&_V10string_D988.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 4 10) (close _V0vanity_V0compiler_V0transpile_V20_k244) (bruijn k 1 1) (bruijn args 3 2))
    V_CALL(upenv->up->up->up->vars[10], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k244, env)}),
      upenv->vars[1],
      upenv->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda44, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda44, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn printf 6 2) (close _V0vanity_V0compiler_V0transpile_V20_k243) (##string ##string.1004))
    V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k243, env)}),
      VEncodePointer(&_V10string_D1004.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k258, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.79 12 1) (bruijn ##k.457 9 0) (bruijn ##x.463 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 18 2) (close _V0vanity_V0compiler_V0transpile_V20_k258) (##string ##string.1003))
    V_CALL(VGetArg(upenv, 18-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k258, env)}),
      VEncodePointer(&_V10string_D1003.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 14 10) (close _V0vanity_V0compiler_V0transpile_V20_k257) (bruijn x 11 3) (bruijn args 13 2))
    V_CALL(VGetArg(upenv, 14-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k257, env)}),
      VGetArg(upenv, 11-1, 3),
      VGetArg(upenv, 13-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 16 2) (close _V0vanity_V0compiler_V0transpile_V20_k256) (##string ##string.1005) (##inline ##vcore.car (bruijn ##expr.83 3 0)) (##inline ##vcore.car (bruijn ##expr.84 2 0)))
    V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k256, env)}),
      VEncodePointer(&_V10string_D1005.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->up->up->vars[0]),
      VInlineCar(
        upenv->up->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 12 10) (close _V0vanity_V0compiler_V0transpile_V20_k255) (bruijn k 9 1) (bruijn args 11 2))
    V_CALL(VGetArg(upenv, 12-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k255, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 11-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.84 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.84 0 0))) ((bruijn printf 14 2) (close _V0vanity_V0compiler_V0transpile_V20_k254) (##string ##string.1006)) ((bruijn ##k.457 4 0) #f)) ((bruijn ##k.457 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k254, env)}),
      VEncodePointer(&_V10string_D1006.sym, VPOINTER_OTHER));
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
static void _V0vanity_V0compiler_V0transpile_V20_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.83 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k253) (##inline ##vcore.cdr (bruijn ##expr.83 0 0))) ((bruijn ##k.457 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k253, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.82 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k252) (##inline ##vcore.cdr (bruijn ##expr.82 0 0))) ((bruijn ##k.457 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k252, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.458 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k251) (##inline ##vcore.cdr (bruijn ##expr.81 2 0))) ((bruijn ##k.457 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k251, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.81 1 0)) ((bruijn equal? 10 5) (close _V0vanity_V0compiler_V0transpile_V20_k250) 'bruijn (##inline ##vcore.car (bruijn ##expr.81 1 0))) ((bruijn ##k.457 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k250, env)}),
      _V0bruijn,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k267, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 19 2) (bruijn ##k.449 6 0) (##string ##string.1003))
    V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1003.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 15 10) (close _V0vanity_V0compiler_V0transpile_V20_k267) (bruijn x 12 3) (bruijn args 14 2))
    V_CALL(VGetArg(upenv, 15-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k267, env)}),
      VGetArg(upenv, 12-1, 3),
      VGetArg(upenv, 14-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 17 2) (close _V0vanity_V0compiler_V0transpile_V20_k266) (##string ##string.988))
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k266, env)}),
      VEncodePointer(&_V10string_D988.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-literal 13 6) (close _V0vanity_V0compiler_V0transpile_V20_k265) (bruijn sym 5 0))
    V_CALL(VGetArg(upenv, 13-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k265, env)}),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 15 2) (close _V0vanity_V0compiler_V0transpile_V20_k264) (##string ##string.988))
    V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k264, env)}),
      VEncodePointer(&_V10string_D988.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 11 10) (close _V0vanity_V0compiler_V0transpile_V20_k263) (bruijn k 8 1) (bruijn args 10 2))
    V_CALL(VGetArg(upenv, 11-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k263, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 10-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.448 1 0) ((bruijn printf 13 2) (close _V0vanity_V0compiler_V0transpile_V20_k262) (##string ##string.1007)) ((bruijn compiler-error 13 42) (bruijn ##k.449 0 0) (##string ##string.1008)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k262, env)}),
      VEncodePointer(&_V10string_D1007.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 13-1, 42), runtime,
      _var0,
      VEncodePointer(&_V10string_D1008.sym, VPOINTER_OTHER));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k270, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.79 8 1) (bruijn ##k.443 8 0) (bruijn ##x.446 0 0))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 14 42) (close _V0vanity_V0compiler_V0transpile_V20_k270) (##string ##string.1009) (bruijn y 8 2))
    V_CALL(VGetArg(upenv, 14-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k270, env)}),
      VEncodePointer(&_V10string_D1009.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.79 6 1) (close _V0vanity_V0compiler_V0transpile_V20_k269) (bruijn ##x.447 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k269, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k261) (close _V0vanity_V0compiler_V0transpile_V20_k268))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k261, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k268, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda49" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol? 11 14) (close _V0vanity_V0compiler_V0transpile_V20_k260) (bruijn sym 0 0))
    V_CALL(VGetArg(upenv, 11-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k260, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda49) (bruijn ##input.80 2 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda49, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda48" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k249) (close _V0vanity_V0compiler_V0transpile_V20_k259))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k249, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k259, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda47" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda48) (bruijn ##input.80 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda48, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda47) (bruijn y 1 2))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda47, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda45, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda45, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn call/cc 6 6) (bruijn ##k.442 0 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda46))
    V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda46, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k273, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.482 1 0) ((bruijn compiler-error 9 42) (bruijn ##k.483 0 0) (##string ##string.1010) (bruijn f 3 1)) ((bruijn ##k.483 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 9-1, 42), runtime,
      _var0,
      VEncodePointer(&_V10string_D1010.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k282, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-expr 15 10) (bruijn ##k.477 1 0) (bruijn x 1 1) (bruijn args 14 2))
    V_CALL(VGetArg(upenv, 15-1, 10), runtime,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 14-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn printf 17 2) (close _V0vanity_V0compiler_V0transpile_V20_k282) (##string ##string.1011))
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k282, env)}),
      VEncodePointer(&_V10string_D1011.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 16 41) (bruijn ##k.475 3 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda51) (bruijn ##x.479 0 0))
    V_CALL(VGetArg(upenv, 16-1, 41), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda51, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 15 22) (close _V0vanity_V0compiler_V0transpile_V20_k281) (bruijn xs 9 2))
    V_CALL(VGetArg(upenv, 15-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k281, env)}),
      VGetArg(upenv, 9-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 11 10) (close _V0vanity_V0compiler_V0transpile_V20_k280) (bruijn ##x.480 0 0) (bruijn args 10 2))
    V_CALL(VGetArg(upenv, 11-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k280, env)}),
      _var0,
      VGetArg(upenv, 10-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.474 1 0) ((bruijn car 13 7) (close _V0vanity_V0compiler_V0transpile_V20_k279) (bruijn xs 7 2)) ((bruijn ##k.475 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 13-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k279, env)}),
      VGetArg(upenv, 7-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k283, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 13 2) (bruijn ##k.470 7 0) (##string ##string.1012))
    V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1012.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k278) (close _V0vanity_V0compiler_V0transpile_V20_k283))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k278, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k283, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 11 44) (close _V0vanity_V0compiler_V0transpile_V20_k277) (bruijn ##x.481 0 0))
    V_CALL(VGetArg(upenv, 11-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k277, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 10 43) (close _V0vanity_V0compiler_V0transpile_V20_k276) (bruijn xs 4 2))
    V_CALL(VGetArg(upenv, 10-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k276, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 9 2) (close _V0vanity_V0compiler_V0transpile_V20_k275) (##string ##string.1013) (bruijn inline 2 0))
    V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k275, env)}),
      VEncodePointer(&_V10string_D1013.sym, VPOINTER_OTHER),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k273) (close _V0vanity_V0compiler_V0transpile_V20_k274))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k273, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k274, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 7 44) (close _V0vanity_V0compiler_V0transpile_V20_k272) (bruijn inline 0 0))
    V_CALL(VGetArg(upenv, 7-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k272, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda50, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda50, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn lookup-inline-name 6 23) (close _V0vanity_V0compiler_V0transpile_V20_k271) (bruijn f 0 1))
    V_CALL(VGetArg(upenv, 6-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k271, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k287, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 6 1) (bruijn ##k.654 3 0) (bruijn ##x.659 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.32 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##expr.32 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.32 0 0))) ((bruijn display 11 21) (close _V0vanity_V0compiler_V0transpile_V20_k287) (##string ##string.1014)) ((bruijn ##k.654 2 0) #f)) ((bruijn ##k.654 2 0) #f)) ((bruijn ##k.654 2 0) #f))
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
    V_CALL(VGetArg(upenv, 11-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k287, env)}),
      VEncodePointer(&_V10string_D1014.sym, VPOINTER_OTHER));
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
static void _V0vanity_V0compiler_V0transpile_V20_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.655 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k286) (##inline ##vcore.cdr (bruijn ##expr.31 2 0))) ((bruijn ##k.654 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k286, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.31 1 0)) ((bruijn equal? 9 5) (close _V0vanity_V0compiler_V0transpile_V20_k285) 'quote (##inline ##vcore.car (bruijn ##expr.31 1 0))) ((bruijn ##k.654 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k285, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k295, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 11 1) (bruijn ##k.640 6 0) (bruijn ##x.648 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.36 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.36 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.34 3 0))) ((bruijn print-literal-string 13 4) (close _V0vanity_V0compiler_V0transpile_V20_k295) (##inline ##vcore.car (bruijn ##expr.36 0 0))) ((bruijn ##k.640 5 0) #f)) ((bruijn ##k.640 5 0) #f)) ((bruijn ##k.640 5 0) #f))
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
    V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k295, env)}),
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
static void _V0vanity_V0compiler_V0transpile_V20_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.644 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k294) (##inline ##vcore.cdr (bruijn ##expr.35 1 0))) ((bruijn ##k.640 4 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k294, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.35 0 0)) ((bruijn equal? 14 5) (close _V0vanity_V0compiler_V0transpile_V20_k293) '##string (##inline ##vcore.car (bruijn ##expr.35 0 0))) ((bruijn ##k.640 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k293, env)}),
      _V10string,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.34 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k292) (##inline ##vcore.car (bruijn ##expr.34 0 0))) ((bruijn ##k.640 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k292, env, runtime,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.641 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k291) (##inline ##vcore.cdr (bruijn ##expr.33 2 0))) ((bruijn ##k.640 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k291, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.33 1 0)) ((bruijn equal? 11 5) (close _V0vanity_V0compiler_V0transpile_V20_k290) 'quote (##inline ##vcore.car (bruijn ##expr.33 1 0))) ((bruijn ##k.640 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 11-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k290, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k300, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 10 1) (bruijn ##k.632 3 0) (bruijn ##x.636 0 0))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.38 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.38 0 0))) ((bruijn print-literal 12 6) (close _V0vanity_V0compiler_V0transpile_V20_k300) (##inline ##vcore.car (bruijn ##expr.38 0 0))) ((bruijn ##k.632 2 0) #f)) ((bruijn ##k.632 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 12-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k300, env)}),
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
static void _V0vanity_V0compiler_V0transpile_V20_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.633 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k299) (##inline ##vcore.cdr (bruijn ##expr.37 2 0))) ((bruijn ##k.632 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k299, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.37 1 0)) ((bruijn equal? 13 5) (close _V0vanity_V0compiler_V0transpile_V20_k298) 'quote (##inline ##vcore.car (bruijn ##expr.37 1 0))) ((bruijn ##k.632 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 13-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k298, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k305, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 12 1) (bruijn ##k.624 3 0) (bruijn ##x.628 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.40 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.40 0 0))) ((bruijn printf 17 2) (close _V0vanity_V0compiler_V0transpile_V20_k305) (##string ##string.1015) (##inline ##vcore.car (bruijn ##expr.40 0 0))) ((bruijn ##k.624 2 0) #f)) ((bruijn ##k.624 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k305, env)}),
      VEncodePointer(&_V10string_D1015.sym, VPOINTER_OTHER),
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
static void _V0vanity_V0compiler_V0transpile_V20_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.625 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k304) (##inline ##vcore.cdr (bruijn ##expr.39 2 0))) ((bruijn ##k.624 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k304, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.39 1 0)) ((bruijn equal? 15 5) (close _V0vanity_V0compiler_V0transpile_V20_k303) 'close (##inline ##vcore.car (bruijn ##expr.39 1 0))) ((bruijn ##k.624 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 15-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k303, env)}),
      _V0close,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k316, runtime, upenv, 1, argc, _var0) {
  // ((bruijn display 26 21) (bruijn ##k.615 1 0) (bruijn ##x.616 0 0))
    V_CALL(VGetArg(upenv, 26-1, 21), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k320, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.620 0 0) ((bruijn printf 29 2) (bruijn ##k.615 4 0) (##string ##string.1019) (bruijn right 6 0)) ((bruijn printf 29 2) (bruijn ##k.615 4 0) (##string ##string.1020) (bruijn up 8 0) (bruijn right 6 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 29-1, 2), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1019.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
    V_CALL(VGetArg(upenv, 29-1, 2), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1020.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.619 0 0) ((bruijn printf 28 2) (bruijn ##k.615 3 0) (##string ##string.1018) (bruijn right 5 0)) ((bruijn = 28 20) (close _V0vanity_V0compiler_V0transpile_V20_k320) (bruijn up 7 0) 4))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 28-1, 2), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1018.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(VGetArg(upenv, 28-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k320, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeInt(4l));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.618 0 0) ((bruijn printf 27 2) (bruijn ##k.615 2 0) (##string ##string.1017) (bruijn right 4 0)) ((bruijn = 27 20) (close _V0vanity_V0compiler_V0transpile_V20_k319) (bruijn up 6 0) 3))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 27-1, 2), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1017.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 27-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k319, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(3l));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.617 0 0) ((bruijn printf 26 2) (bruijn ##k.615 1 0) (##string ##string.1016) (bruijn right 3 0)) ((bruijn = 26 20) (close _V0vanity_V0compiler_V0transpile_V20_k318) (bruijn up 5 0) 2))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 26-1, 2), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1016.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 26-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k318, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(2l));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.614 1 0) ((bruijn list-ref 25 12) (close _V0vanity_V0compiler_V0transpile_V20_k316) (bruijn args 21 2) (bruijn right 2 0)) ((bruijn = 25 20) (close _V0vanity_V0compiler_V0transpile_V20_k317) (bruijn up 4 0) 1))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 25-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k316, env)}),
      VGetArg(upenv, 21-1, 2),
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 25-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k317, env)}),
      upenv->up->up->up->vars[0],
      VEncodeInt(1l));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k321, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 19 1) (bruijn ##k.607 8 0) (bruijn ##x.613 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k314, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k315) (close _V0vanity_V0compiler_V0transpile_V20_k321))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k315, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k321, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.44 1 0))) ((bruijn = 23 20) (close _V0vanity_V0compiler_V0transpile_V20_k314) (bruijn up 2 0) 0) ((bruijn ##k.607 6 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 23-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k314, env)}),
      upenv->up->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.44 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k313) (##inline ##vcore.car (bruijn ##expr.44 0 0))) ((bruijn ##k.607 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k313, env, runtime,
      VInlineCar(
        _var0));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k312) (##inline ##vcore.cdr (bruijn ##expr.43 1 0)))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k312, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.43 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k311) (##inline ##vcore.car (bruijn ##expr.43 0 0))) ((bruijn ##k.607 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k311, env, runtime,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.42 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k310) (##inline ##vcore.cdr (bruijn ##expr.42 0 0))) ((bruijn ##k.607 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k310, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.608 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k309) (##inline ##vcore.cdr (bruijn ##expr.41 2 0))) ((bruijn ##k.607 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k309, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.41 1 0)) ((bruijn equal? 17 5) (close _V0vanity_V0compiler_V0transpile_V20_k308) 'bruijn (##inline ##vcore.car (bruijn ##expr.41 1 0))) ((bruijn ##k.607 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k308, env)}),
      _V0bruijn,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k334, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 24 1) (bruijn ##k.591 11 0) (bruijn ##x.597 0 0))
    V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 29 39) (close _V0vanity_V0compiler_V0transpile_V20_k334) (##string ##string.1021))
    V_CALL(VGetArg(upenv, 29-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k334, env)}),
      VEncodePointer(&_V10string_D1021.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 25 10) (close _V0vanity_V0compiler_V0transpile_V20_k333) (##inline ##vcore.car (bruijn ##expr.48 5 0)) (bruijn args 24 2))
    V_CALL(VGetArg(upenv, 25-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k333, env)}),
      VInlineCar(
        VGetArg(upenv, 5-1, 0)),
      VGetArg(upenv, 24-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 27 39) (close _V0vanity_V0compiler_V0transpile_V20_k332) (##string ##string.1022))
    V_CALL(VGetArg(upenv, 27-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k332, env)}),
      VEncodePointer(&_V10string_D1022.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 23 10) (close _V0vanity_V0compiler_V0transpile_V20_k331) (##inline ##vcore.car (bruijn ##expr.47 4 0)) (bruijn args 22 2))
    V_CALL(VGetArg(upenv, 23-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k331, env)}),
      VInlineCar(
        upenv->up->up->up->vars[0]),
      VGetArg(upenv, 22-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 25 39) (close _V0vanity_V0compiler_V0transpile_V20_k330) (##string ##string.1023))
    V_CALL(VGetArg(upenv, 25-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k330, env)}),
      VEncodePointer(&_V10string_D1023.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 21 10) (close _V0vanity_V0compiler_V0transpile_V20_k329) (##inline ##vcore.car (bruijn ##expr.46 3 0)) (bruijn args 20 2))
    V_CALL(VGetArg(upenv, 21-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k329, env)}),
      VInlineCar(
        upenv->up->up->vars[0]),
      VGetArg(upenv, 20-1, 2));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.48 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.48 0 0))) ((bruijn displayln 23 39) (close _V0vanity_V0compiler_V0transpile_V20_k328) (##string ##string.1024)) ((bruijn ##k.591 4 0) #f)) ((bruijn ##k.591 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 23-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k328, env)}),
      VEncodePointer(&_V10string_D1024.sym, VPOINTER_OTHER));
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
static void _V0vanity_V0compiler_V0transpile_V20_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.47 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k327) (##inline ##vcore.cdr (bruijn ##expr.47 0 0))) ((bruijn ##k.591 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k327, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.46 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k326) (##inline ##vcore.cdr (bruijn ##expr.46 0 0))) ((bruijn ##k.591 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k326, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.592 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k325) (##inline ##vcore.cdr (bruijn ##expr.45 2 0))) ((bruijn ##k.591 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k325, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.45 1 0)) ((bruijn equal? 19 5) (close _V0vanity_V0compiler_V0transpile_V20_k324) 'if (##inline ##vcore.car (bruijn ##expr.45 1 0))) ((bruijn ##k.591 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k324, env)}),
      _V0if,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k341" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k341, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 20 1) (bruijn ##k.581 5 0) (bruijn ##x.587 0 0))
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.52 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.52 0 0))) ((bruijn print-set 20 4) (close _V0vanity_V0compiler_V0transpile_V20_k341) (##inline ##vcore.car (bruijn ##expr.50 2 0)) (##inline ##vcore.car (bruijn ##expr.51 1 0)) (##inline ##vcore.car (bruijn ##expr.52 0 0)) #f) ((bruijn ##k.581 4 0) #f)) ((bruijn ##k.581 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k341, env)}),
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
static void _V0vanity_V0compiler_V0transpile_V20_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.51 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k340) (##inline ##vcore.cdr (bruijn ##expr.51 0 0))) ((bruijn ##k.581 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k340, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.50 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k339) (##inline ##vcore.cdr (bruijn ##expr.50 0 0))) ((bruijn ##k.581 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k339, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.582 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k338) (##inline ##vcore.cdr (bruijn ##expr.49 2 0))) ((bruijn ##k.581 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k338, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.49 1 0)) ((bruijn equal? 21 5) (close _V0vanity_V0compiler_V0transpile_V20_k337) 'set! (##inline ##vcore.car (bruijn ##expr.49 1 0))) ((bruijn ##k.581 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k337, env)}),
      _V0set_B,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k348, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 22 1) (bruijn ##k.571 5 0) (bruijn ##x.577 0 0))
    V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.56 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.56 0 0))) ((bruijn print-define-global 22 3) (close _V0vanity_V0compiler_V0transpile_V20_k348) (##inline ##vcore.car (bruijn ##expr.54 2 0)) (##inline ##vcore.car (bruijn ##expr.55 1 0)) (##inline ##vcore.car (bruijn ##expr.56 0 0)) #f) ((bruijn ##k.571 4 0) #f)) ((bruijn ##k.571 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 22-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k348, env)}),
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
static void _V0vanity_V0compiler_V0transpile_V20_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.55 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k347) (##inline ##vcore.cdr (bruijn ##expr.55 0 0))) ((bruijn ##k.571 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k347, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.54 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k346) (##inline ##vcore.cdr (bruijn ##expr.54 0 0))) ((bruijn ##k.571 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k346, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.572 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k345) (##inline ##vcore.cdr (bruijn ##expr.53 2 0))) ((bruijn ##k.571 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k345, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.53 1 0)) ((bruijn equal? 23 5) (close _V0vanity_V0compiler_V0transpile_V20_k344) 'define (##inline ##vcore.car (bruijn ##expr.53 1 0))) ((bruijn ##k.571 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k344, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k353, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 22 1) (bruijn ##k.565 3 0) (bruijn ##x.568 0 0))
    V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.58 0 0)) ((bruijn print-inline 22 5) (close _V0vanity_V0compiler_V0transpile_V20_k353) (##inline ##vcore.car (bruijn ##expr.58 0 0)) (##inline ##vcore.cdr (bruijn ##expr.58 0 0))) ((bruijn ##k.565 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k353, env)}),
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
static void _V0vanity_V0compiler_V0transpile_V20_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.566 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k352) (##inline ##vcore.cdr (bruijn ##expr.57 2 0))) ((bruijn ##k.565 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k352, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.57 1 0)) ((bruijn equal? 25 5) (close _V0vanity_V0compiler_V0transpile_V20_k351) '##inline (##inline ##vcore.car (bruijn ##expr.57 1 0))) ((bruijn ##k.565 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k351, env)}),
      _V10inline,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k358, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 24 1) (bruijn ##k.557 3 0) (bruijn ##x.561 0 0))
    V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.60 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.60 0 0))) ((bruijn print-literal-string 26 4) (close _V0vanity_V0compiler_V0transpile_V20_k358) (##inline ##vcore.car (bruijn ##expr.60 0 0))) ((bruijn ##k.557 2 0) #f)) ((bruijn ##k.557 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 26-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k358, env)}),
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
static void _V0vanity_V0compiler_V0transpile_V20_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.558 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k357) (##inline ##vcore.cdr (bruijn ##expr.59 2 0))) ((bruijn ##k.557 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k357, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.59 1 0)) ((bruijn equal? 27 5) (close _V0vanity_V0compiler_V0transpile_V20_k356) '##string (##inline ##vcore.car (bruijn ##expr.59 1 0))) ((bruijn ##k.557 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k356, env)}),
      _V10string,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k363, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 26 1) (bruijn ##k.549 3 0) (bruijn ##x.553 0 0))
    V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k362" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.62 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.62 0 0))) ((bruijn print-intrinsic 28 5) (close _V0vanity_V0compiler_V0transpile_V20_k363) (##inline ##vcore.car (bruijn ##expr.62 0 0))) ((bruijn ##k.549 2 0) #f)) ((bruijn ##k.549 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 28-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k363, env)}),
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
static void _V0vanity_V0compiler_V0transpile_V20_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.550 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k362) (##inline ##vcore.cdr (bruijn ##expr.61 2 0))) ((bruijn ##k.549 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k362, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.61 1 0)) ((bruijn equal? 29 5) (close _V0vanity_V0compiler_V0transpile_V20_k361) '##intrinsic (##inline ##vcore.car (bruijn ##expr.61 1 0))) ((bruijn ##k.549 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 29-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k361, env)}),
      _V10intrinsic,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k368, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 28 1) (bruijn ##k.541 3 0) (bruijn ##x.545 0 0))
    V_CALL(VGetArg(upenv, 28-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k367" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.64 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.64 0 0))) ((bruijn printf 33 2) (close _V0vanity_V0compiler_V0transpile_V20_k368) (##string ##string.1025) (##inline ##vcore.car (bruijn ##expr.64 0 0))) ((bruijn ##k.541 2 0) #f)) ((bruijn ##k.541 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 33-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k368, env)}),
      VEncodePointer(&_V10string_D1025.sym, VPOINTER_OTHER),
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
static void _V0vanity_V0compiler_V0transpile_V20_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.542 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k367) (##inline ##vcore.cdr (bruijn ##expr.63 2 0))) ((bruijn ##k.541 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k367, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.63 1 0)) ((bruijn equal? 31 5) (close _V0vanity_V0compiler_V0transpile_V20_k366) '##foreign.function (##inline ##vcore.car (bruijn ##expr.63 1 0))) ((bruijn ##k.541 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 31-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k366, env)}),
      _V10foreign_Dfunction,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k375" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k375, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 32 1) (bruijn ##k.531 5 0) (bruijn ##x.537 0 0))
    V_CALL(VGetArg(upenv, 32-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.68 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.68 0 0))) ((bruijn print-letrec 32 2) (close _V0vanity_V0compiler_V0transpile_V20_k375) (##inline ##vcore.car (bruijn ##expr.66 2 0)) (##inline ##vcore.car (bruijn ##expr.67 1 0)) (##inline ##vcore.car (bruijn ##expr.68 0 0)) (bruijn args 33 2)) ((bruijn ##k.531 4 0) #f)) ((bruijn ##k.531 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 32-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k375, env)}),
      VInlineCar(
        upenv->up->vars[0]),
      VInlineCar(
        upenv->vars[0]),
      VInlineCar(
        _var0),
      VGetArg(upenv, 33-1, 2));
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
static void _V0vanity_V0compiler_V0transpile_V20_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.67 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k374) (##inline ##vcore.cdr (bruijn ##expr.67 0 0))) ((bruijn ##k.531 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k374, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.66 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k373) (##inline ##vcore.cdr (bruijn ##expr.66 0 0))) ((bruijn ##k.531 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k373, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.532 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k372) (##inline ##vcore.cdr (bruijn ##expr.65 2 0))) ((bruijn ##k.531 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k372, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.65 1 0)) ((bruijn equal? 33 5) (close _V0vanity_V0compiler_V0transpile_V20_k371) 'letrec (##inline ##vcore.car (bruijn ##expr.65 1 0))) ((bruijn ##k.531 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 33-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k371, env)}),
      _V0letrec,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k380, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.72 4 1) (bruijn ##k.517 1 0) (bruijn ##expr.74 2 1) (bruijn ##x.518 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##expr.74 1 1))) ((bruijn reverse 41 45) (close _V0vanity_V0compiler_V0transpile_V20_k380) (bruijn ##xs.71 1 2)) ((bruijn ##k.517 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 41-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k380, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k383, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.72 7 1) (bruijn ##k.511 2 0) (bruijn ##expr.74 5 1) (bruijn ##x.513 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k382" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 44 45) (close _V0vanity_V0compiler_V0transpile_V20_k383) (bruijn ##xs.71 4 2))
    V_CALL(VGetArg(upenv, 44-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k383, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda72, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.73 0 1) (close _V0vanity_V0compiler_V0transpile_V20_k382) (##inline ##vcore.cdr (bruijn ##expr.74 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##expr.74 3 1)) (bruijn ##xs.71 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k382, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 42 6) (bruijn ##k.510 0 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda72))
    V_CALL(VGetArg(upenv, 42-1, 6), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda72, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 41 19) (bruijn ##k.508 1 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda71) (bruijn loop 2 0))
    V_CALL(VGetArg(upenv, 41-1, 19), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda71, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda70, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda70, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k379) (close _V0vanity_V0compiler_V0transpile_V20_k381))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k379, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k381, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda69, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0transpile_V20_lambda70)) ((bruijn loop 0 0) (bruijn ##k.507 1 0) (##inline ##vcore.cdr (bruijn ##expr.69 5 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda70, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 5-1, 0)),
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 37 6) (bruijn ##k.506 0 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda69))
    V_CALL(VGetArg(upenv, 37-1, 6), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda69, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k388, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 42 16) (bruijn ##k.528 1 0) (bruijn ##x.529 0 0) '##intrinsic)
    V_CALL(VGetArg(upenv, 42-1, 16), runtime,
      upenv->vars[0],
      _var0,
      _V10intrinsic);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.527 1 0) ((bruijn car 41 7) (close _V0vanity_V0compiler_V0transpile_V20_k388) (bruijn f 5 0)) ((bruijn ##k.528 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 41-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k388, env)}),
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k390, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-builtin-apply 37 0) (bruijn ##k.524 3 0) (bruijn ##x.526 0 0) (bruijn xs 5 2) #f)
    V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      upenv->up->up->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 2),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.525 0 0) ((bruijn cadr 41 17) (close _V0vanity_V0compiler_V0transpile_V20_k390) (bruijn f 5 0)) ((bruijn print-closure-apply 36 1) (bruijn ##k.524 2 0) (bruijn f 5 0) (bruijn xs 4 2) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 41-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k390, env)}),
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(VGetArg(upenv, 36-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[2],
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k387) (close _V0vanity_V0compiler_V0transpile_V20_k389))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k387, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k389, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.523 1 0) ((bruijn print-builtin-apply 34 0) (bruijn ##k.524 0 0) (bruijn f 3 0) (bruijn xs 2 2) #f) ((bruijn pair? 39 15) (close _V0vanity_V0compiler_V0transpile_V20_k386) (bruijn f 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      _var0,
      upenv->up->up->vars[0],
      upenv->up->vars[2],
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 39-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k386, env)}),
      upenv->up->up->vars[0]);
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k391, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 33 1) (bruijn ##k.520 2 0) (bruijn ##x.522 0 0))
    V_CALL(VGetArg(upenv, 33-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k385) (close _V0vanity_V0compiler_V0transpile_V20_k391))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k385, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k391, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda73, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda73, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn tail-expr 0 1)) ((bruijn lookup-intrinsic-name 37 18) (close _V0vanity_V0compiler_V0transpile_V20_k384) (bruijn f 1 0)) ((bruijn ##k.520 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
    V_CALL(VGetArg(upenv, 37-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k384, env)}),
      upenv->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 36 19) (bruijn ##k.505 1 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda68) (close _V0vanity_V0compiler_V0transpile_V20_lambda73))
    V_CALL(VGetArg(upenv, 36-1, 19), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda68, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda73, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.69 1 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k378) (##inline ##vcore.car (bruijn ##expr.69 1 0))) ((bruijn ##k.505 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k378, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k394, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.502 1 0) ((bruijn print-global 35 0) (bruijn ##k.503 0 0) (bruijn x 2 0)) ((bruijn print-literal 35 6) (bruijn ##k.503 0 0) (bruijn x 2 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      _var0,
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 35-1, 6), runtime,
      _var0,
      upenv->up->vars[0]);
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k397, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.29 34 1) (bruijn ##k.484 34 0) (bruijn ##x.500 0 0))
    V_CALL(VGetArg(upenv, 34-1, 1), runtime,
      VGetArg(upenv, 34-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k396" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 39 42) (close _V0vanity_V0compiler_V0transpile_V20_k397) (##string ##string.1026) (bruijn expr 35 1))
    V_CALL(VGetArg(upenv, 39-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k397, env)}),
      VEncodePointer(&_V10string_D1026.sym, VPOINTER_OTHER),
      VGetArg(upenv, 35-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.29 32 1) (close _V0vanity_V0compiler_V0transpile_V20_k396) (bruijn ##x.501 0 0))
    V_CALL(VGetArg(upenv, 32-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k396, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k394) (close _V0vanity_V0compiler_V0transpile_V20_k395))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k394, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k395, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda74" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol? 36 14) (close _V0vanity_V0compiler_V0transpile_V20_k393) (bruijn x 0 0))
    V_CALL(VGetArg(upenv, 36-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k393, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda74) (bruijn ##input.30 28 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda74, env, runtime,
      VGetArg(upenv, 28-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda67" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k377) (close _V0vanity_V0compiler_V0transpile_V20_k392))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k377, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k392, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda67) (bruijn ##input.30 26 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda67, env, runtime,
      VGetArg(upenv, 26-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda66" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k370) (close _V0vanity_V0compiler_V0transpile_V20_k376))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k370, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k376, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda66) (bruijn ##input.30 24 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda66, env, runtime,
      VGetArg(upenv, 24-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda65" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k365) (close _V0vanity_V0compiler_V0transpile_V20_k369))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k365, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k369, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda65) (bruijn ##input.30 22 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda65, env, runtime,
      VGetArg(upenv, 22-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda64" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k360) (close _V0vanity_V0compiler_V0transpile_V20_k364))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k360, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k364, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda64) (bruijn ##input.30 20 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda64, env, runtime,
      VGetArg(upenv, 20-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda63" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k355) (close _V0vanity_V0compiler_V0transpile_V20_k359))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k355, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k359, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda63) (bruijn ##input.30 18 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda63, env, runtime,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda62" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k350) (close _V0vanity_V0compiler_V0transpile_V20_k354))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k350, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k354, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda62) (bruijn ##input.30 16 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda62, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda61" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k343) (close _V0vanity_V0compiler_V0transpile_V20_k349))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k343, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k349, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda61) (bruijn ##input.30 14 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda61, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda60" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k336) (close _V0vanity_V0compiler_V0transpile_V20_k342))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k336, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k342, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda60) (bruijn ##input.30 12 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda60, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda59" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k323) (close _V0vanity_V0compiler_V0transpile_V20_k335))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k323, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k335, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda59) (bruijn ##input.30 10 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda59, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda58" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k307) (close _V0vanity_V0compiler_V0transpile_V20_k322))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k307, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k322, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda58) (bruijn ##input.30 8 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda58, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda57" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k302) (close _V0vanity_V0compiler_V0transpile_V20_k306))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k302, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k306, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda57) (bruijn ##input.30 6 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda57, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda56" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k297) (close _V0vanity_V0compiler_V0transpile_V20_k301))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k297, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k301, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda56) (bruijn ##input.30 4 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda56, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda55" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k289) (close _V0vanity_V0compiler_V0transpile_V20_k296))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k289, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k296, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda55) (bruijn ##input.30 2 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda55, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda54" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k284) (close _V0vanity_V0compiler_V0transpile_V20_k288))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k284, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k288, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda53" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda54) (bruijn ##input.30 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda54, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda53) (bruijn expr 2 1))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda53, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda34, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda34, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 6 ((close _V0vanity_V0compiler_V0transpile_V20_lambda35) (close _V0vanity_V0compiler_V0transpile_V20_lambda37) (close _V0vanity_V0compiler_V0transpile_V20_lambda41) (close _V0vanity_V0compiler_V0transpile_V20_lambda44) (close _V0vanity_V0compiler_V0transpile_V20_lambda45) (close _V0vanity_V0compiler_V0transpile_V20_lambda50)) ((bruijn call/cc 5 6) (bruijn ##k.395 1 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda52)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[6]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 6, 6, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda35, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda37, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda41, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda44, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda45, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda50, env)});
    V_CALL(VGetArg(upenv, 5-1, 6), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda52, env)}));
    }
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda77, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 8 1) (bruijn ##k.665 0 0) (##string ##string.1027) (bruijn e 0 1))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      _var0,
      VEncodePointer(&_V10string_D1027.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 7 9) (bruijn ##k.664 1 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda77) (bruijn ##x.666 0 0))
    V_CALL(VGetArg(upenv, 7-1, 9), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda77, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda76, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn iota 6 4) (close _V0vanity_V0compiler_V0transpile_V20_k398) (bruijn num 0 1))
    V_CALL(VGetArg(upenv, 6-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k398, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k400, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn needs-used? 3 6) ((bruijn printf 7 2) (bruijn ##k.715 0 0) (##string ##string.1028)) ((bruijn ##k.715 0 0) #f))
if(VDecodeBool(
upenv->up->up->vars[6])) {
    V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10string_D1028.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k404, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 6 4) ((bruijn printf 10 2) (bruijn ##k.713 0 0) (##string ##string.1029)) ((bruijn ##k.713 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 6-1, 4))) {
    V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10string_D1029.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k408" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k408, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 13 2) (bruijn ##k.711 1 0) (##string ##string.1030))
    V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1030.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k407" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn debug? 10 1) ((bruijn printf 12 2) (close _V0vanity_V0compiler_V0transpile_V20_k408) (##string ##string.1031) (bruijn name 8 1)) ((bruijn ##k.711 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 10-1, 1))) {
    V_CALL(VGetArg(upenv, 12-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k408, env)}),
      VEncodePointer(&_V10string_D1031.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k414" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k414, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 17 2) (bruijn ##k.702 4 0) (##string ##string.1032))
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1032.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 16 2) (close _V0vanity_V0compiler_V0transpile_V20_k414) (##string ##string.1033))
    V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k414, env)}),
      VEncodePointer(&_V10string_D1033.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 15 2) (close _V0vanity_V0compiler_V0transpile_V20_k413) (##string ##string.1034) (bruijn num 11 3))
    V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k413, env)}),
      VEncodePointer(&_V10string_D1034.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 3));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 14 2) (close _V0vanity_V0compiler_V0transpile_V20_k412) (##string ##string.1035) (bruijn name 10 1))
    V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k412, env)}),
      VEncodePointer(&_V10string_D1035.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k418" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k418, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 17 2) (bruijn ##k.702 4 0) (##string ##string.1032))
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1032.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k417" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 16 2) (close _V0vanity_V0compiler_V0transpile_V20_k418) (##string ##string.1033))
    V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k418, env)}),
      VEncodePointer(&_V10string_D1033.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 15 2) (close _V0vanity_V0compiler_V0transpile_V20_k417) (##string ##string.1037) (bruijn num 11 3))
    V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k417, env)}),
      VEncodePointer(&_V10string_D1037.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 3));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k415" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k415, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 14 2) (close _V0vanity_V0compiler_V0transpile_V20_k416) (##string ##string.1035) (bruijn name 10 1))
    V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k416, env)}),
      VEncodePointer(&_V10string_D1035.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn check-args? 9 2) (if (bruijn variadic? 9 4) ((bruijn printf 13 2) (close _V0vanity_V0compiler_V0transpile_V20_k411) (##string ##string.1036) (bruijn num 9 3)) ((bruijn printf 13 2) (close _V0vanity_V0compiler_V0transpile_V20_k415) (##string ##string.1038) (bruijn num 9 3))) ((bruijn ##k.702 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 9-1, 2))) {
if(VDecodeBool(
VGetArg(upenv, 9-1, 4))) {
    V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k411, env)}),
      VEncodePointer(&_V10string_D1036.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 3));
} else {
    V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k415, env)}),
      VEncodePointer(&_V10string_D1038.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 3));
}
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k423" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k423, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 17 2) (bruijn ##k.698 3 0) (##string ##string.1039) (bruijn num 13 3) (bruijn ##x.700 0 0))
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1039.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 3),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k422" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list-ref 16 12) (close _V0vanity_V0compiler_V0transpile_V20_k423) (bruijn args 10 0) (bruijn ##x.701 0 0))
    V_CALL(VGetArg(upenv, 16-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k423, env)}),
      VGetArg(upenv, 10-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k421" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k421, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 15 13) (close _V0vanity_V0compiler_V0transpile_V20_k422) (bruijn num 11 3) 1)
    V_CALL(VGetArg(upenv, 15-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k422, env)}),
      VGetArg(upenv, 11-1, 3),
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn variadic? 10 4) ((bruijn printf 14 2) (close _V0vanity_V0compiler_V0transpile_V20_k421) (##string ##string.1040)) ((bruijn ##k.698 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 10-1, 4))) {
    V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k421, env)}),
      VEncodePointer(&_V10string_D1040.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k427" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k427, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 13 4) ((bruijn printf 17 2) (bruijn ##k.696 0 0) (##string ##string.1041)) ((bruijn printf 17 2) (bruijn ##k.696 0 0) (##string ##string.1042)))
if(VDecodeBool(
VGetArg(upenv, 13-1, 4))) {
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10string_D1041.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10string_D1042.sym, VPOINTER_OTHER));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k431" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k431, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 16 4) ((bruijn + 20 0) (bruijn ##k.695 0 0) (bruijn num 16 3) 1) ((bruijn ##k.695 0 0) (bruijn num 16 3)))
if(VDecodeBool(
VGetArg(upenv, 16-1, 4))) {
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      _var0,
      VGetArg(upenv, 16-1, 3),
      VEncodeInt(1l));
} else {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 16-1, 3));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k435" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k435, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 19 4) ((bruijn + 23 0) (bruijn ##k.693 0 0) (bruijn num 19 3) 1) ((bruijn ##k.693 0 0) (bruijn num 19 3)))
if(VDecodeBool(
VGetArg(upenv, 19-1, 4))) {
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      _var0,
      VGetArg(upenv, 19-1, 3),
      VEncodeInt(1l));
} else {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 19-1, 3));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k439" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k439, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 22 4) ((bruijn printf 26 2) (bruijn ##k.686 7 0) (##string ##string.1043) (bruijn num 22 3)) ((bruijn ##k.686 7 0) #f))
if(VDecodeBool(
VGetArg(upenv, 22-1, 4))) {
    V_CALL(VGetArg(upenv, 26-1, 2), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1043.sym, VPOINTER_OTHER),
      VGetArg(upenv, 22-1, 3));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda78, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda78, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn printf 26 2) (bruijn ##k.691 0 0) (##string ##string.1044) (bruijn i 0 1) (bruijn arg 0 2))
    V_CALL(VGetArg(upenv, 26-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10string_D1044.sym, VPOINTER_OTHER),
      _var1,
      _var2);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k438" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k438, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 25 41) (close _V0vanity_V0compiler_V0transpile_V20_k439) (close _V0vanity_V0compiler_V0transpile_V20_lambda78) (bruijn ##x.692 0 0) (bruijn args 19 0))
    V_CALL(VGetArg(upenv, 25-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k439, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda78, env)}),
      _var0,
      VGetArg(upenv, 19-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k437" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k437, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iota 24 4) (close _V0vanity_V0compiler_V0transpile_V20_k438) (bruijn num 20 3))
    V_CALL(VGetArg(upenv, 24-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k438, env)}),
      VGetArg(upenv, 20-1, 3));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k436" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 23 2) (close _V0vanity_V0compiler_V0transpile_V20_k437) (##string ##string.1045) (bruijn nargs 0 0) (bruijn nargs 0 0))
    V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k437, env)}),
      VEncodePointer(&_V10string_D1045.sym, VPOINTER_OTHER),
      _var0,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k434" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k435) (close _V0vanity_V0compiler_V0transpile_V20_k436))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k435, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k436, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k433" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 21 2) (close _V0vanity_V0compiler_V0transpile_V20_k434) (##string ##string.1046))
    V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k434, env)}),
      VEncodePointer(&_V10string_D1046.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k432" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k432, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 20 2) (close _V0vanity_V0compiler_V0transpile_V20_k433) (##string ##string.1047) (bruijn ##x.694 0 0))
    V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k433, env)}),
      VEncodePointer(&_V10string_D1047.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k430" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.685 1 0) ((close _V0vanity_V0compiler_V0transpile_V20_k431) (close _V0vanity_V0compiler_V0transpile_V20_k432)) ((bruijn ##k.686 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k431, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k432, env)}));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k442" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k442, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn variadic? 17 4) ((bruijn append 21 11) (bruijn ##k.683 0 0) (bruijn args 15 0) (##inline ##vcore.qcons '(##string ##string.1048) '())) ((bruijn ##k.683 0 0) (bruijn args 15 0)))
if(VDecodeBool(
VGetArg(upenv, 17-1, 4))) {
    V_CALL(VGetArg(upenv, 21-1, 11), runtime,
      _var0,
      VGetArg(upenv, 15-1, 0),
      VInlineCons(
        VEncodePointer(&_V10string_D1048.sym, VPOINTER_OTHER),
        VNULL));
} else {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 15-1, 0));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k445" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k445, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 23 2) (bruijn ##k.663 19 0) (##string ##string.984))
    V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V10string_D984.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k444" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 22 2) (close _V0vanity_V0compiler_V0transpile_V20_k445) (##string ##string.1032))
    V_CALL(VGetArg(upenv, 22-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k445, env)}),
      VEncodePointer(&_V10string_D1032.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k443" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k443, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 18 10) (close _V0vanity_V0compiler_V0transpile_V20_k444) (bruijn body 17 5) (bruijn ##x.682 0 0))
    V_CALL(VGetArg(upenv, 18-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k444, env)}),
      VGetArg(upenv, 17-1, 5),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k441" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k441, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k442) (close _V0vanity_V0compiler_V0transpile_V20_k443))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k442, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k443, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k440" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 19 2) (close _V0vanity_V0compiler_V0transpile_V20_k441) (##string ##string.1049) (bruijn body 15 5))
    V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k441, env)}),
      VEncodePointer(&_V10string_D1049.sym, VPOINTER_OTHER),
      VGetArg(upenv, 15-1, 5));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k429" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k429, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k430) (close _V0vanity_V0compiler_V0transpile_V20_k440))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k430, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k440, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k428" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn closes? 14 9) (close _V0vanity_V0compiler_V0transpile_V20_k429) (bruijn body 13 5))
    V_CALL(VGetArg(upenv, 14-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k429, env)}),
      VGetArg(upenv, 13-1, 5));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k426" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k427) (close _V0vanity_V0compiler_V0transpile_V20_k428))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k427, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k428, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda79, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 16 2) (bruijn ##k.697 0 0) (##string ##string.1050) (bruijn arg 0 1))
    V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10string_D1050.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k425" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k425, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 15 41) (close _V0vanity_V0compiler_V0transpile_V20_k426) (close _V0vanity_V0compiler_V0transpile_V20_lambda79) (bruijn args 9 0))
    V_CALL(VGetArg(upenv, 15-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k426, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda79, env)}),
      VGetArg(upenv, 9-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k424" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 14 2) (close _V0vanity_V0compiler_V0transpile_V20_k425) (##string ##string.1051) (bruijn name 10 1) (bruijn num 10 3))
    V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k425, env)}),
      VEncodePointer(&_V10string_D1051.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 1),
      VGetArg(upenv, 10-1, 3));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k419" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k419, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k420) (close _V0vanity_V0compiler_V0transpile_V20_k424))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k420, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k424, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k410) (close _V0vanity_V0compiler_V0transpile_V20_k419))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k410, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k419, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k407) (close _V0vanity_V0compiler_V0transpile_V20_k409))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k407, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k409, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 10 2) (close _V0vanity_V0compiler_V0transpile_V20_k406) (##string ##string.1042))
    V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k406, env)}),
      VEncodePointer(&_V10string_D1042.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k403" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k404) (close _V0vanity_V0compiler_V0transpile_V20_k405))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k404, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k405, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda80, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 9 2) (bruijn ##k.714 0 0) (##string ##string.1052) (bruijn arg 0 1))
    V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10string_D1052.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 8 41) (close _V0vanity_V0compiler_V0transpile_V20_k403) (close _V0vanity_V0compiler_V0transpile_V20_lambda80) (bruijn args 2 0))
    V_CALL(VGetArg(upenv, 8-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k403, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda80, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 7 2) (close _V0vanity_V0compiler_V0transpile_V20_k402) (##string ##string.1053) (bruijn name 3 1))
    V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k402, env)}),
      VEncodePointer(&_V10string_D1053.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k400) (close _V0vanity_V0compiler_V0transpile_V20_k401))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k400, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k401, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 7) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda75, got ~D~N"
  "-- expected 7~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda75, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
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
  // (letrec 1 ((close _V0vanity_V0compiler_V0transpile_V20_lambda76)) ((bruijn gen-args 0 0) (close _V0vanity_V0compiler_V0transpile_V20_k399) (bruijn num 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda76, env)});
    V_CALL(env->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k399, env)}),
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k466" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k466, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 25 2) (bruijn ##k.716 21 0) (##string ##string.987))
    V_CALL(VGetArg(upenv, 25-1, 2), runtime,
      VGetArg(upenv, 21-1, 0),
      VEncodePointer(&_V10string_D987.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k465" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 24 2) (close _V0vanity_V0compiler_V0transpile_V20_k466) (##string ##string.1054) (bruijn name 19 0))
    V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k466, env)}),
      VEncodePointer(&_V10string_D1054.sym, VPOINTER_OTHER),
      VGetArg(upenv, 19-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k475" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k475, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.111 11 1) (bruijn ##k.750 8 0) (bruijn ##x.759 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k474" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k474, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 35 2) (close _V0vanity_V0compiler_V0transpile_V20_k475) (##string ##string.1055) (##inline ##vcore.car (bruijn ##expr.113 8 0)))
    V_CALL(VGetArg(upenv, 35-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k475, env)}),
      VEncodePointer(&_V10string_D1055.sym, VPOINTER_OTHER),
      VInlineCar(
        VGetArg(upenv, 8-1, 0)));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k473" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.118 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.118 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.115 4 0))) ((bruijn printf 34 2) (close _V0vanity_V0compiler_V0transpile_V20_k474) (##string ##string.1056) (##inline ##vcore.car (bruijn ##expr.116 3 0))) ((bruijn ##k.750 6 0) #f)) ((bruijn ##k.750 6 0) #f)) ((bruijn ##k.750 6 0) #f))
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
    V_CALL(VGetArg(upenv, 34-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k474, env)}),
      VEncodePointer(&_V10string_D1056.sym, VPOINTER_OTHER),
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
static void _V0vanity_V0compiler_V0transpile_V20_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k472" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k472, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.755 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k473) (##inline ##vcore.cdr (bruijn ##expr.117 1 0))) ((bruijn ##k.750 5 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k473, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k471" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k471, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.117 0 0)) ((bruijn equal? 32 5) (close _V0vanity_V0compiler_V0transpile_V20_k472) '+ (##inline ##vcore.car (bruijn ##expr.117 0 0))) ((bruijn ##k.750 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL(VGetArg(upenv, 32-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k472, env)}),
      _V0_P,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k470" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k470, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.116 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k471) (##inline ##vcore.cdr (bruijn ##expr.116 0 0))) ((bruijn ##k.750 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k471, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k469" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.115 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k470) (##inline ##vcore.car (bruijn ##expr.115 0 0))) ((bruijn ##k.750 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k470, env, runtime,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k468" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.114 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k469) (##inline ##vcore.cdr (bruijn ##expr.114 0 0))) ((bruijn ##k.750 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k469, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k467" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k467, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.113 1 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k468) (##inline ##vcore.cdr (bruijn ##expr.113 1 0))) ((bruijn ##k.750 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k468, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k483" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k483, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.111 11 1) (bruijn ##k.738 6 0) (bruijn ##x.745 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k482" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k482, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 35 2) (close _V0vanity_V0compiler_V0transpile_V20_k483) (##string ##string.1057) (##inline ##vcore.car (bruijn ##expr.119 6 0)))
    V_CALL(VGetArg(upenv, 35-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k483, env)}),
      VEncodePointer(&_V10string_D1057.sym, VPOINTER_OTHER),
      VInlineCar(
        VGetArg(upenv, 6-1, 0)));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k481" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k481, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.123 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.123 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.121 2 0))) ((bruijn printf 34 2) (close _V0vanity_V0compiler_V0transpile_V20_k482) (##string ##string.1056) (##inline ##vcore.car (bruijn ##expr.122 1 0))) ((bruijn ##k.738 4 0) #f)) ((bruijn ##k.738 4 0) #f)) ((bruijn ##k.738 4 0) #f))
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
    V_CALL(VGetArg(upenv, 34-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k482, env)}),
      VEncodePointer(&_V10string_D1056.sym, VPOINTER_OTHER),
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
static void _V0vanity_V0compiler_V0transpile_V20_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k480" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k480, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.122 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k481) (##inline ##vcore.cdr (bruijn ##expr.122 0 0))) ((bruijn ##k.738 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k481, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k479" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k479, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.121 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k480) (##inline ##vcore.car (bruijn ##expr.121 0 0))) ((bruijn ##k.738 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k480, env, runtime,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k478" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k478, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.120 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k479) (##inline ##vcore.cdr (bruijn ##expr.120 0 0))) ((bruijn ##k.738 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k479, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k477" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k477, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.119 1 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k478) (##inline ##vcore.cdr (bruijn ##expr.119 1 0))) ((bruijn ##k.738 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k478, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k484" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k484, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 30 10) (bruijn ##k.734 5 0) (##string ##string.1058))
    V_CALL(VGetArg(upenv, 30-1, 10), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1058.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda86" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k477) (close _V0vanity_V0compiler_V0transpile_V20_k484))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k477, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k484, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k476" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda86) (bruijn ##input.112 2 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda86, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda85" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k467) (close _V0vanity_V0compiler_V0transpile_V20_k476))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k467, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k476, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda84" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda85) (bruijn ##input.112 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda85, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda84) (bruijn e 1 1))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda84, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda82, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 24 6) (bruijn ##k.733 0 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda83))
    V_CALL(VGetArg(upenv, 24-1, 6), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda83, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k464" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k464, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 23 41) (close _V0vanity_V0compiler_V0transpile_V20_k465) (close _V0vanity_V0compiler_V0transpile_V20_lambda82) (bruijn cases 14 0))
    V_CALL(VGetArg(upenv, 23-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k465, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda82, env)}),
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k463" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k463, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 22 2) (close _V0vanity_V0compiler_V0transpile_V20_k464) (##string ##string.1059) (bruijn name 17 0))
    V_CALL(VGetArg(upenv, 22-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k464, env)}),
      VEncodePointer(&_V10string_D1059.sym, VPOINTER_OTHER),
      VGetArg(upenv, 17-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k462" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k462, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 21 2) (close _V0vanity_V0compiler_V0transpile_V20_k463) (##string ##string.1060))
    V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k463, env)}),
      VEncodePointer(&_V10string_D1060.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k461" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k461, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 20 2) (close _V0vanity_V0compiler_V0transpile_V20_k462) (##string ##string.1061) (bruijn name 15 0))
    V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k462, env)}),
      VEncodePointer(&_V10string_D1061.sym, VPOINTER_OTHER),
      VGetArg(upenv, 15-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k460" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k460, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 19 2) (close _V0vanity_V0compiler_V0transpile_V20_k461) (##string ##string.1062))
    V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k461, env)}),
      VEncodePointer(&_V10string_D1062.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k459" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k459, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 18 2) (close _V0vanity_V0compiler_V0transpile_V20_k460) (##string ##string.1063))
    V_CALL(VGetArg(upenv, 18-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k460, env)}),
      VEncodePointer(&_V10string_D1063.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k458" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k458, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 17 2) (close _V0vanity_V0compiler_V0transpile_V20_k459) (##string ##string.1064))
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k459, env)}),
      VEncodePointer(&_V10string_D1064.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k457" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 16 2) (close _V0vanity_V0compiler_V0transpile_V20_k458) (##string ##string.1065) (bruijn name 11 0))
    V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k458, env)}),
      VEncodePointer(&_V10string_D1065.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k492" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k492, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.98 10 1) (bruijn ##k.780 7 0) (bruijn ##x.789 0 0))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k491" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k491, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.105 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.105 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.102 4 0))) ((bruijn print-fun-single 23 11) (close _V0vanity_V0compiler_V0transpile_V20_k492) (##inline ##vcore.car (bruijn ##expr.100 7 0)) #f (##inline ##vcore.car (bruijn ##expr.103 3 0)) #t (##inline ##vcore.car (bruijn ##expr.105 0 0)) #t) ((bruijn ##k.780 6 0) #f)) ((bruijn ##k.780 6 0) #f)) ((bruijn ##k.780 6 0) #f))
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
    V_CALL(VGetArg(upenv, 23-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k492, env)}),
      VInlineCar(
        VGetArg(upenv, 7-1, 0)),
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
static void _V0vanity_V0compiler_V0transpile_V20_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k490" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k490, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.785 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k491) (##inline ##vcore.cdr (bruijn ##expr.104 1 0))) ((bruijn ##k.780 5 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k491, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k489" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k489, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.104 0 0)) ((bruijn equal? 24 5) (close _V0vanity_V0compiler_V0transpile_V20_k490) '+ (##inline ##vcore.car (bruijn ##expr.104 0 0))) ((bruijn ##k.780 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k490, env)}),
      _V0_P,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k488" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k488, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.103 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k489) (##inline ##vcore.cdr (bruijn ##expr.103 0 0))) ((bruijn ##k.780 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k489, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k487" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.102 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k488) (##inline ##vcore.car (bruijn ##expr.102 0 0))) ((bruijn ##k.780 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k488, env, runtime,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k486" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k486, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.101 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k487) (##inline ##vcore.cdr (bruijn ##expr.101 0 0))) ((bruijn ##k.780 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k487, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k485" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k485, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.100 1 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k486) (##inline ##vcore.cdr (bruijn ##expr.100 1 0))) ((bruijn ##k.780 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k486, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k499" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k499, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.98 10 1) (bruijn ##k.769 5 0) (bruijn ##x.776 0 0))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k498" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k498, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.110 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.110 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.108 2 0))) ((bruijn print-fun-single 23 11) (close _V0vanity_V0compiler_V0transpile_V20_k499) (##inline ##vcore.car (bruijn ##expr.106 5 0)) #f (##inline ##vcore.car (bruijn ##expr.109 1 0)) #f (##inline ##vcore.car (bruijn ##expr.110 0 0)) #t) ((bruijn ##k.769 4 0) #f)) ((bruijn ##k.769 4 0) #f)) ((bruijn ##k.769 4 0) #f))
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
    V_CALL(VGetArg(upenv, 23-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k499, env)}),
      VInlineCar(
        VGetArg(upenv, 5-1, 0)),
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
static void _V0vanity_V0compiler_V0transpile_V20_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k497" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k497, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.109 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k498) (##inline ##vcore.cdr (bruijn ##expr.109 0 0))) ((bruijn ##k.769 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k498, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k496" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.108 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k497) (##inline ##vcore.car (bruijn ##expr.108 0 0))) ((bruijn ##k.769 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k497, env, runtime,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k495" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k495, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.107 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k496) (##inline ##vcore.cdr (bruijn ##expr.107 0 0))) ((bruijn ##k.769 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k496, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k494" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k494, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.106 1 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k495) (##inline ##vcore.cdr (bruijn ##expr.106 1 0))) ((bruijn ##k.769 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k495, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k500" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k500, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 22 10) (bruijn ##k.765 5 0) (##string ##string.1058))
    V_CALL(VGetArg(upenv, 22-1, 10), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1058.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda91" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k494) (close _V0vanity_V0compiler_V0transpile_V20_k500))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k494, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k500, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k493" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda91) (bruijn ##input.99 2 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda91, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda90" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k485) (close _V0vanity_V0compiler_V0transpile_V20_k493))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k485, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k493, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda89" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda90) (bruijn ##input.99 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda90, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda88, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda89) (bruijn e 1 1))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda89, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda87, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 16 6) (bruijn ##k.764 0 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda88))
    V_CALL(VGetArg(upenv, 16-1, 6), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda88, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k456" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 15 41) (close _V0vanity_V0compiler_V0transpile_V20_k457) (close _V0vanity_V0compiler_V0transpile_V20_lambda87) (bruijn cases 6 0))
    V_CALL(VGetArg(upenv, 15-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k457, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda87, env)}),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k455" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k455, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 14 2) (close _V0vanity_V0compiler_V0transpile_V20_k456) (##string ##string.984))
    V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k456, env)}),
      VEncodePointer(&_V10string_D984.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k454" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k454, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 13 2) (close _V0vanity_V0compiler_V0transpile_V20_k455) (##string ##string.1066))
    V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k455, env)}),
      VEncodePointer(&_V10string_D1066.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k508" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k508, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.85 10 1) (bruijn ##k.809 7 0) (bruijn ##x.818 0 0))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k507" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k507, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.92 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.92 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.89 4 0))) ((bruijn printf 23 2) (close _V0vanity_V0compiler_V0transpile_V20_k508) (##string ##string.1067) (##inline ##vcore.car (bruijn ##expr.90 3 0))) ((bruijn ##k.809 6 0) #f)) ((bruijn ##k.809 6 0) #f)) ((bruijn ##k.809 6 0) #f))
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
    V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k508, env)}),
      VEncodePointer(&_V10string_D1067.sym, VPOINTER_OTHER),
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
static void _V0vanity_V0compiler_V0transpile_V20_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k506" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k506, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.814 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k507) (##inline ##vcore.cdr (bruijn ##expr.91 1 0))) ((bruijn ##k.809 5 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k507, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k505" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.91 0 0)) ((bruijn equal? 21 5) (close _V0vanity_V0compiler_V0transpile_V20_k506) '+ (##inline ##vcore.car (bruijn ##expr.91 0 0))) ((bruijn ##k.809 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k506, env)}),
      _V0_P,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k504" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k504, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.90 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k505) (##inline ##vcore.cdr (bruijn ##expr.90 0 0))) ((bruijn ##k.809 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k505, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k503" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k503, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.89 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k504) (##inline ##vcore.car (bruijn ##expr.89 0 0))) ((bruijn ##k.809 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k504, env, runtime,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k502" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k502, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.88 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k503) (##inline ##vcore.cdr (bruijn ##expr.88 0 0))) ((bruijn ##k.809 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k503, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k501" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k501, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.87 1 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k502) (##inline ##vcore.cdr (bruijn ##expr.87 1 0))) ((bruijn ##k.809 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k502, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k515" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k515, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.85 10 1) (bruijn ##k.798 5 0) (bruijn ##x.805 0 0))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k514" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k514, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.97 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.97 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.95 2 0))) ((bruijn printf 23 2) (close _V0vanity_V0compiler_V0transpile_V20_k515) (##string ##string.1068) (##inline ##vcore.car (bruijn ##expr.96 1 0))) ((bruijn ##k.798 4 0) #f)) ((bruijn ##k.798 4 0) #f)) ((bruijn ##k.798 4 0) #f))
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
    V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k515, env)}),
      VEncodePointer(&_V10string_D1068.sym, VPOINTER_OTHER),
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
static void _V0vanity_V0compiler_V0transpile_V20_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k513" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k513, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.96 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k514) (##inline ##vcore.cdr (bruijn ##expr.96 0 0))) ((bruijn ##k.798 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k514, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k512" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k512, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.95 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k513) (##inline ##vcore.car (bruijn ##expr.95 0 0))) ((bruijn ##k.798 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k513, env, runtime,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k511" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k511, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.94 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k512) (##inline ##vcore.cdr (bruijn ##expr.94 0 0))) ((bruijn ##k.798 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k512, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k510" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k510, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.93 1 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k511) (##inline ##vcore.cdr (bruijn ##expr.93 1 0))) ((bruijn ##k.798 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k511, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k516" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k516, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 19 10) (bruijn ##k.794 5 0) (##string ##string.1058))
    V_CALL(VGetArg(upenv, 19-1, 10), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1058.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda96" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k510) (close _V0vanity_V0compiler_V0transpile_V20_k516))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k510, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k516, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k509" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k509, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda96) (bruijn ##input.86 2 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda96, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda95" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k501) (close _V0vanity_V0compiler_V0transpile_V20_k509))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k501, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k509, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda94" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda95) (bruijn ##input.86 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda95, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda94) (bruijn e 1 1))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda94, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 13 6) (bruijn ##k.793 0 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda93))
    V_CALL(VGetArg(upenv, 13-1, 6), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda93, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k453" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k453, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 12 41) (close _V0vanity_V0compiler_V0transpile_V20_k454) (close _V0vanity_V0compiler_V0transpile_V20_lambda92) (bruijn cases 3 0))
    V_CALL(VGetArg(upenv, 12-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k454, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda92, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k452" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 11 2) (close _V0vanity_V0compiler_V0transpile_V20_k453) (##string ##string.1069) (bruijn name 6 0))
    V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k453, env)}),
      VEncodePointer(&_V10string_D1069.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k451" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k451, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 10 2) (close _V0vanity_V0compiler_V0transpile_V20_k452) (##string ##string.1070) (bruijn fun 6 1))
    V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k452, env)}),
      VEncodePointer(&_V10string_D1070.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k450" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k450, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 9 2) (close _V0vanity_V0compiler_V0transpile_V20_k451) (##string ##string.1071) (bruijn name 4 0))
    V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k451, env)}),
      VEncodePointer(&_V10string_D1071.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k517" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k517, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.822 1 0) (##inline ##vcore.cons (bruijn ##x.823 0 0) (##inline ##vcore.cons '#f (##inline ##vcore.cons (bruijn e 1 2) '()))))
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
static void _V0vanity_V0compiler_V0transpile_V20_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda97, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda97, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn sprintf 9 1) (close _V0vanity_V0compiler_V0transpile_V20_k517) (##string ##string.1072) (bruijn i 0 1) (bruijn name 4 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k517, env)}),
      VEncodePointer(&_V10string_D1072.sym, VPOINTER_OTHER),
      _var1,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k449" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k449, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 8 9) (close _V0vanity_V0compiler_V0transpile_V20_k450) (close _V0vanity_V0compiler_V0transpile_V20_lambda97) (bruijn ##x.826 0 0) (bruijn cases 2 0))
    V_CALL(VGetArg(upenv, 8-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k450, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda97, env)}),
      _var0,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k448" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k448, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iota 7 4) (close _V0vanity_V0compiler_V0transpile_V20_k449) (bruijn ##x.827 0 0))
    V_CALL(VGetArg(upenv, 7-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k449, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k447" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k447, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 6 3) (close _V0vanity_V0compiler_V0transpile_V20_k448) (bruijn cases 0 0))
    V_CALL(VGetArg(upenv, 6-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k448, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k446" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k446, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cddr 5 8) (close _V0vanity_V0compiler_V0transpile_V20_k447) (bruijn fun 1 1))
    V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k447, env)}),
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 4 7) (close _V0vanity_V0compiler_V0transpile_V20_k446) (bruijn fun 0 1))
    V_CALL(upenv->up->up->up->vars[7], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k446, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k523" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k523, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 8 1) (bruijn ##k.848 5 0) (bruijn ##x.855 0 0))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k522" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k522, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.130 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.130 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.128 2 0))) ((bruijn print-fun-single 9 11) (close _V0vanity_V0compiler_V0transpile_V20_k523) (##inline ##vcore.car (bruijn ##expr.126 5 0)) (##inline ##vcore.car (bruijn ##expr.127 3 0)) (##inline ##vcore.car (bruijn ##expr.129 1 0)) #f (##inline ##vcore.car (bruijn ##expr.130 0 0)) #f) ((bruijn ##k.848 4 0) #f)) ((bruijn ##k.848 4 0) #f)) ((bruijn ##k.848 4 0) #f))
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
    V_CALL(VGetArg(upenv, 9-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k523, env)}),
      VInlineCar(
        VGetArg(upenv, 5-1, 0)),
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
static void _V0vanity_V0compiler_V0transpile_V20_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k521" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k521, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.129 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k522) (##inline ##vcore.cdr (bruijn ##expr.129 0 0))) ((bruijn ##k.848 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k522, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k520" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k520, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.128 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k521) (##inline ##vcore.car (bruijn ##expr.128 0 0))) ((bruijn ##k.848 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k521, env, runtime,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k519" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k519, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.127 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k520) (##inline ##vcore.cdr (bruijn ##expr.127 0 0))) ((bruijn ##k.848 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k520, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k518" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k518, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.126 1 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k519) (##inline ##vcore.cdr (bruijn ##expr.126 1 0))) ((bruijn ##k.848 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k519, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k532" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k532, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 12 1) (bruijn ##k.834 7 0) (bruijn ##x.843 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k531" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k531, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.136 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.136 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.133 4 0))) ((bruijn print-fun-single 13 11) (close _V0vanity_V0compiler_V0transpile_V20_k532) (##inline ##vcore.car (bruijn ##expr.131 7 0)) (##inline ##vcore.car (bruijn ##expr.132 5 0)) (##inline ##vcore.car (bruijn ##expr.134 3 0)) #t (##inline ##vcore.car (bruijn ##expr.136 0 0)) #f) ((bruijn ##k.834 6 0) #f)) ((bruijn ##k.834 6 0) #f)) ((bruijn ##k.834 6 0) #f))
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
    V_CALL(VGetArg(upenv, 13-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k532, env)}),
      VInlineCar(
        VGetArg(upenv, 7-1, 0)),
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
static void _V0vanity_V0compiler_V0transpile_V20_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k530" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k530, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.839 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k531) (##inline ##vcore.cdr (bruijn ##expr.135 1 0))) ((bruijn ##k.834 5 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k531, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k529" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k529, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.135 0 0)) ((bruijn equal? 14 5) (close _V0vanity_V0compiler_V0transpile_V20_k530) '+ (##inline ##vcore.car (bruijn ##expr.135 0 0))) ((bruijn ##k.834 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k530, env)}),
      _V0_P,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k528" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k528, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.134 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k529) (##inline ##vcore.cdr (bruijn ##expr.134 0 0))) ((bruijn ##k.834 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k529, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k527" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k527, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.133 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k528) (##inline ##vcore.car (bruijn ##expr.133 0 0))) ((bruijn ##k.834 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k528, env, runtime,
      VInlineCar(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k526" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k526, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.132 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k527) (##inline ##vcore.cdr (bruijn ##expr.132 0 0))) ((bruijn ##k.834 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k527, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k525" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k525, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.131 1 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k526) (##inline ##vcore.cdr (bruijn ##expr.131 1 0))) ((bruijn ##k.834 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k526, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k534" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k534, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 6 1) (bruijn ##k.829 6 0) (bruijn ##x.832 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k533" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k533, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-fun-case 7 12) (close _V0vanity_V0compiler_V0transpile_V20_k534) (bruijn fun 6 1))
    V_CALL(VGetArg(upenv, 7-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k534, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda102" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k525) (close _V0vanity_V0compiler_V0transpile_V20_k533))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k525, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k533, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k524" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k524, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda102) (bruijn ##input.125 2 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda102, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda101" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k518) (close _V0vanity_V0compiler_V0transpile_V20_k524))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k518, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k524, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda100" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda101) (bruijn ##input.125 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda101, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda99, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda100) (bruijn fun 1 1))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda100, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 4 6) (bruijn ##k.828 0 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda99))
    V_CALL(upenv->up->up->up->vars[6], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda99, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k537" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k537, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 7 39) (bruijn ##k.858 3 0) (##string ##string.1021))
    V_CALL(VGetArg(upenv, 7-1, 39), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1021.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k536" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k536, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-expr 3 10) (close _V0vanity_V0compiler_V0transpile_V20_k537) (##inline ##vcore.cons (bruijn expr 2 2) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn (##inline ##vcore.cons 'k (##inline ##vcore.cons '0 (##inline ##vcore.cons '0 '())))) '())) (##inline ##vcore.qcons '(##string ##string.1073) '()))
    V_CALL(upenv->up->up->vars[10], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k537, env)}),
      VInlineCons(
        upenv->up->vars[2],
        VInlineCons(
        VInlineCons(
        _V0bruijn,
        VInlineCons(
        _V0k,
        VInlineCons(
        VEncodeInt(0l),
        VInlineCons(
        VEncodeInt(0l),
        VNULL)))),
        VNULL)),
      VInlineCons(
        VEncodePointer(&_V10string_D1073.sym, VPOINTER_OTHER),
        VNULL));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k535" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k535, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 5 39) (close _V0vanity_V0compiler_V0transpile_V20_k536) (##string ##string.1074))
    V_CALL(VGetArg(upenv, 5-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k536, env)}),
      VEncodePointer(&_V10string_D1074.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda103, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda103, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn printf 4 2) (close _V0vanity_V0compiler_V0transpile_V20_k535) (##string ##string.1075) (bruijn i 0 1))
    V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k535, env)}),
      VEncodePointer(&_V10string_D1075.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k541(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k541" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k541, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.137 6 1) (bruijn ##k.883 3 0) (bruijn ##x.887 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k540" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k540, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.140 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.140 0 0))) ((bruijn displayln 10 39) (close _V0vanity_V0compiler_V0transpile_V20_k541) (##inline ##vcore.car (bruijn ##expr.140 0 0))) ((bruijn ##k.883 2 0) #f)) ((bruijn ##k.883 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k541, env)}),
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
static void _V0vanity_V0compiler_V0transpile_V20_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k539" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k539, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.884 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k540) (##inline ##vcore.cdr (bruijn ##expr.139 2 0))) ((bruijn ##k.883 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k540, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k538" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k538, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.139 1 0)) ((bruijn equal? 8 5) (close _V0vanity_V0compiler_V0transpile_V20_k539) '##foreign.declare (##inline ##vcore.car (bruijn ##expr.139 1 0))) ((bruijn ##k.883 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k539, env)}),
      _V10foreign_Ddeclare,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k546(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k546" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k546, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.143 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.143 0 0))) ((bruijn ##kk.137 8 1) (bruijn ##k.875 3 0) #f) ((bruijn ##k.875 3 0) #f)) ((bruijn ##k.875 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
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
static void _V0vanity_V0compiler_V0transpile_V20_k545(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k545" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k545, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.142 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k546) (##inline ##vcore.cdr (bruijn ##expr.142 0 0))) ((bruijn ##k.875 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k546, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k544(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k544" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k544, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.876 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k545) (##inline ##vcore.cdr (bruijn ##expr.141 2 0))) ((bruijn ##k.875 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k545, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k543(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k543" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k543, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.141 1 0)) ((bruijn equal? 10 5) (close _V0vanity_V0compiler_V0transpile_V20_k544) '##vcore.declare (##inline ##vcore.car (bruijn ##expr.141 1 0))) ((bruijn ##k.875 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k544, env)}),
      _V10vcore_Ddeclare,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k548(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k548" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k548, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.137 6 1) (bruijn ##k.870 6 0) (bruijn ##x.873 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k547(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k547" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k547, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 10 42) (close _V0vanity_V0compiler_V0transpile_V20_k548) (##string ##string.1076) (bruijn declare 6 1))
    V_CALL(VGetArg(upenv, 10-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k548, env)}),
      VEncodePointer(&_V10string_D1076.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda108" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k543) (close _V0vanity_V0compiler_V0transpile_V20_k547))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k543, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k547, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k542(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k542" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k542, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda108) (bruijn ##input.138 2 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda108, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda107" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k538) (close _V0vanity_V0compiler_V0transpile_V20_k542))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k538, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k542, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda106" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda107) (bruijn ##input.138 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda107, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda106) (bruijn declare 1 1))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda106, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 4 6) (bruijn ##k.869 0 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda105))
    V_CALL(upenv->up->up->up->vars[6], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda105, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k551" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k551, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##expr.147 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.147 0 0))) ((bruijn ##kk.144 5 1) (bruijn ##k.905 2 0) #f) ((bruijn ##k.905 2 0) #f)) ((bruijn ##k.905 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
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
static void _V0vanity_V0compiler_V0transpile_V20_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k550" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k550, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.906 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k551) (##inline ##vcore.cdr (bruijn ##expr.146 2 0))) ((bruijn ##k.905 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k551, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k549(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k549" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k549, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.146 1 0)) ((bruijn equal? 8 5) (close _V0vanity_V0compiler_V0transpile_V20_k550) '##foreign.declare (##inline ##vcore.car (bruijn ##expr.146 1 0))) ((bruijn ##k.905 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k550, env)}),
      _V10foreign_Ddeclare,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k557" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k557, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.144 9 1) (bruijn ##k.896 4 0) (bruijn ##x.901 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k556" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k556, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.150 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##expr.150 0 0))) ((bruijn printf 13 2) (close _V0vanity_V0compiler_V0transpile_V20_k557) (##string ##string.1077) (##inline ##vcore.car (bruijn ##expr.149 1 0)) (##inline ##vcore.car (bruijn ##expr.150 0 0))) ((bruijn ##k.896 3 0) #f)) ((bruijn ##k.896 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
    V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k557, env)}),
      VEncodePointer(&_V10string_D1077.sym, VPOINTER_OTHER),
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
static void _V0vanity_V0compiler_V0transpile_V20_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k555" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k555, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.149 0 0)) ((close _V0vanity_V0compiler_V0transpile_V20_k556) (##inline ##vcore.cdr (bruijn ##expr.149 0 0))) ((bruijn ##k.896 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k556, env, runtime,
      VInlineCdr(
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k554" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k554, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.897 0 0) ((close _V0vanity_V0compiler_V0transpile_V20_k555) (##inline ##vcore.cdr (bruijn ##expr.148 2 0))) ((bruijn ##k.896 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k555, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k553" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k553, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##expr.148 1 0)) ((bruijn equal? 10 5) (close _V0vanity_V0compiler_V0transpile_V20_k554) '##vcore.declare (##inline ##vcore.car (bruijn ##expr.148 1 0))) ((bruijn ##k.896 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k554, env)}),
      _V10vcore_Ddeclare,
      VInlineCar(
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k559" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k559, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.144 6 1) (bruijn ##k.891 6 0) (bruijn ##x.894 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k558" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k558, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 10 42) (close _V0vanity_V0compiler_V0transpile_V20_k559) (##string ##string.1078) (bruijn declare 6 1))
    V_CALL(VGetArg(upenv, 10-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k559, env)}),
      VEncodePointer(&_V10string_D1078.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda113" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k553) (close _V0vanity_V0compiler_V0transpile_V20_k558))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k553, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k558, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k552" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k552, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda113) (bruijn ##input.145 2 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda113, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda112" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k549) (close _V0vanity_V0compiler_V0transpile_V20_k552))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k549, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k552, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda111" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda112) (bruijn ##input.145 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda112, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda110, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda111) (bruijn declare 1 1))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda111, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 4 6) (bruijn ##k.890 0 0) (close _V0vanity_V0compiler_V0transpile_V20_lambda110))
    V_CALL(upenv->up->up->up->vars[6], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda110, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k571(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k571" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k571, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 16 39) (bruijn ##k.911 12 0) (##string ##string.1021))
    V_CALL(VGetArg(upenv, 16-1, 39), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V10string_D1021.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k570(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k570" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k570, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 15 2) (close _V0vanity_V0compiler_V0transpile_V20_k571) (##string ##string.1079))
    V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k571, env)}),
      VEncodePointer(&_V10string_D1079.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k569(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k569" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k569, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 14 39) (close _V0vanity_V0compiler_V0transpile_V20_k570) (##string ##string.1080))
    V_CALL(VGetArg(upenv, 14-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k570, env)}),
      VEncodePointer(&_V10string_D1080.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k568(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k568" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k568, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 13 39) (close _V0vanity_V0compiler_V0transpile_V20_k569) (##string ##string.1081))
    V_CALL(VGetArg(upenv, 13-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k569, env)}),
      VEncodePointer(&_V10string_D1081.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k567(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k567" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k567, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 12 2) (close _V0vanity_V0compiler_V0transpile_V20_k568) (##string ##string.1082))
    V_CALL(VGetArg(upenv, 12-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k568, env)}),
      VEncodePointer(&_V10string_D1082.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda115, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 12 2) (bruijn ##k.920 0 0) (##string ##string.1083) (bruijn i 0 1))
    V_CALL(VGetArg(upenv, 12-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10string_D1083.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k566(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k566" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k566, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 11 41) (close _V0vanity_V0compiler_V0transpile_V20_k567) (close _V0vanity_V0compiler_V0transpile_V20_lambda115) (bruijn ##x.921 0 0))
    V_CALL(VGetArg(upenv, 11-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k567, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda115, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k565(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k565" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k565, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iota 10 4) (close _V0vanity_V0compiler_V0transpile_V20_k566) (bruijn ##x.922 0 0))
    V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k566, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k564(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k564" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k564, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 9 3) (close _V0vanity_V0compiler_V0transpile_V20_k565) (bruijn toplevels 5 1))
    V_CALL(VGetArg(upenv, 9-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k565, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k563(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k563" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k563, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 8 2) (close _V0vanity_V0compiler_V0transpile_V20_k564) (##string ##string.1084))
    V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k564, env)}),
      VEncodePointer(&_V10string_D1084.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k562(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k562" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k562, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 7 2) (close _V0vanity_V0compiler_V0transpile_V20_k563) (##string ##string.1085))
    V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k563, env)}),
      VEncodePointer(&_V10string_D1085.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k561(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k561" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k561, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 6 41) (close _V0vanity_V0compiler_V0transpile_V20_k562) (bruijn print-toplevel 3 14) (bruijn ##x.924 0 0) (bruijn toplevels 2 1))
    V_CALL(VGetArg(upenv, 6-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k562, env)}),
      upenv->up->up->vars[14],
      _var0,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k560(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k560" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k560, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iota 5 4) (close _V0vanity_V0compiler_V0transpile_V20_k561) (bruijn ##x.925 0 0))
    V_CALL(VGetArg(upenv, 5-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k561, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn length 4 3) (close _V0vanity_V0compiler_V0transpile_V20_k560) (bruijn toplevels 0 1))
    V_CALL(upenv->up->up->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k560, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k585(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k585" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k585, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn shared? 16 2) ((bruijn ##k.943 0 0) (bruijn print-main? 11 0)) ((bruijn ##k.943 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 16-1, 2))) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 11-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k587(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k587" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k587, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.941 1 0) ((bruijn compiler-error 19 42) (bruijn ##k.942 0 0) (##string ##string.1086)) ((bruijn ##k.942 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 19-1, 42), runtime,
      _var0,
      VEncodePointer(&_V10string_D1086.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k589(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k589" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k589, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn print-main? 13 0) ((bruijn print-main 17 17) (bruijn ##k.940 0 0) (bruijn toplevels 18 7)) ((bruijn ##k.940 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 13-1, 0))) {
    V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      _var0,
      VGetArg(upenv, 18-1, 7));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k590(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k590" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k590, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.201 18 0) (bruijn print-main? 13 0))
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VGetArg(upenv, 13-1, 0));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k588(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k588" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k588, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k589) (close _V0vanity_V0compiler_V0transpile_V20_k590))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k589, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k590, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k586(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k586" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k586, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k587) (close _V0vanity_V0compiler_V0transpile_V20_k588))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k587, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k588, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k584(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k584" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k584, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k585) (close _V0vanity_V0compiler_V0transpile_V20_k586))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k585, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k586, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k583(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k583" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k583, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 16 41) (close _V0vanity_V0compiler_V0transpile_V20_k584) (bruijn print-declare 13 16) (bruijn declares 14 6))
    V_CALL(VGetArg(upenv, 16-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k584, env)}),
      VGetArg(upenv, 13-1, 16),
      VGetArg(upenv, 14-1, 6));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k582(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k582" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k582, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 15 41) (close _V0vanity_V0compiler_V0transpile_V20_k583) (bruijn print-fun 12 13) (bruijn functions 8 1))
    V_CALL(VGetArg(upenv, 15-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k583, env)}),
      VGetArg(upenv, 12-1, 13),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k581(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k581" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k581, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 14 41) (close _V0vanity_V0compiler_V0transpile_V20_k582) (bruijn print-foreign-function 14 40) (bruijn foreign-functions 12 4))
    V_CALL(VGetArg(upenv, 14-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k582, env)}),
      VGetArg(upenv, 14-1, 40),
      VGetArg(upenv, 12-1, 4));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k580(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k580" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k580, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 13 41) (close _V0vanity_V0compiler_V0transpile_V20_k581) (bruijn print-foreign-declare 10 15) (bruijn declares 11 6))
    V_CALL(VGetArg(upenv, 13-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k581, env)}),
      VGetArg(upenv, 10-1, 15),
      VGetArg(upenv, 11-1, 6));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k579(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k579" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k579, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-dllmain 9 8) (close _V0vanity_V0compiler_V0transpile_V20_k580) (bruijn literal-table 10 3))
    V_CALL(VGetArg(upenv, 9-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k580, env)}),
      VGetArg(upenv, 10-1, 3));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k578(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k578" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k578, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 11 41) (close _V0vanity_V0compiler_V0transpile_V20_k579) (bruijn print-literal-declaration 8 7) (bruijn literal-table 9 3))
    V_CALL(VGetArg(upenv, 11-1, 41), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k579, env)}),
      VGetArg(upenv, 8-1, 7),
      VGetArg(upenv, 9-1, 3));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k577(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k577" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k577, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 10 39) (close _V0vanity_V0compiler_V0transpile_V20_k578) (##string ##string.1087))
    V_CALL(VGetArg(upenv, 10-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k578, env)}),
      VEncodePointer(&_V10string_D1087.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k576(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k576" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k576, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 9 39) (close _V0vanity_V0compiler_V0transpile_V20_k577) (##string ##string.1088))
    V_CALL(VGetArg(upenv, 9-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k577, env)}),
      VEncodePointer(&_V10string_D1088.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k575(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k575" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k575, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn displayln 8 39) (close _V0vanity_V0compiler_V0transpile_V20_k576) (##string ##string.1089))
    V_CALL(VGetArg(upenv, 8-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k576, env)}),
      VEncodePointer(&_V10string_D1089.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda116" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda116, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn displayln 7 39) (close _V0vanity_V0compiler_V0transpile_V20_k575) (##string ##string.1090))
    V_CALL(VGetArg(upenv, 7-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k575, env)}),
      VEncodePointer(&_V10string_D1090.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k574(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k574" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k574, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda116) (bruijn ##x.926 1 0) (bruijn ##x.927 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda116, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k573(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k573" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k573, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 5 45) (close _V0vanity_V0compiler_V0transpile_V20_k574) (bruijn functions 3 5))
    V_CALL(VGetArg(upenv, 5-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k574, env)}),
      upenv->up->up->vars[5]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k572(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k572" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k572, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 4 44) (close _V0vanity_V0compiler_V0transpile_V20_k573) (bruijn ##x.944 0 0))
    V_CALL(upenv->up->up->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k573, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 8) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda3, got ~D~N"
  "-- expected 8~N"
  , argc);
 }
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
  // (letrec 18 ((close _V0vanity_V0compiler_V0transpile_V20_lambda4) (close _V0vanity_V0compiler_V0transpile_V20_lambda5) (close _V0vanity_V0compiler_V0transpile_V20_lambda7) (close _V0vanity_V0compiler_V0transpile_V20_lambda10) (close _V0vanity_V0compiler_V0transpile_V20_lambda12) (close _V0vanity_V0compiler_V0transpile_V20_lambda13) (close _V0vanity_V0compiler_V0transpile_V20_lambda14) (close _V0vanity_V0compiler_V0transpile_V20_lambda15) (close _V0vanity_V0compiler_V0transpile_V20_lambda16) (close _V0vanity_V0compiler_V0transpile_V20_lambda18) (close _V0vanity_V0compiler_V0transpile_V20_lambda34) (close _V0vanity_V0compiler_V0transpile_V20_lambda75) (close _V0vanity_V0compiler_V0transpile_V20_lambda81) (close _V0vanity_V0compiler_V0transpile_V20_lambda98) (close _V0vanity_V0compiler_V0transpile_V20_lambda103) (close _V0vanity_V0compiler_V0transpile_V20_lambda104) (close _V0vanity_V0compiler_V0transpile_V20_lambda109) (close _V0vanity_V0compiler_V0transpile_V20_lambda114)) ((bruijn null? 3 43) (close _V0vanity_V0compiler_V0transpile_V20_k572) (bruijn toplevels 1 7)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[18]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 18, 18, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda4, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda5, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda7, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda10, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda12, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda13, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda14, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda15, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda16, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda18, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda34, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda75, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda81, env)});
    env->vars[13] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda98, env)});
    env->vars[14] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda103, env)});
    env->vars[15] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda104, env)});
    env->vars[16] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda109, env)});
    env->vars[17] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda114, env)});
    V_CALL(upenv->up->up->vars[43], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k572, env)}),
      upenv->vars[7]);
    }
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k592(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k592" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k592, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.154 59 0) (##inline ##vcore.cons (##inline ##vcore.cons 'printout2 (bruijn printout2 3 1)) '()))
    V_CALL(VGetArg(upenv, 59-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        _V0printout2,
        upenv->up->up->vars[1]),
        VNULL));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k591(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k591" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k591, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k592) (bruijn gendllmain 2 0) (bruijn ##x.947 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k592, env)}),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k594(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k594" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k594, runtime, upenv, 1, argc, _var0) {
  // ((bruijn sprintf 5 1) (bruijn ##k.948 2 0) (##string ##string.1091) (bruijn x 3 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1091.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k593(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k593" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_k593, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k594) (bruijn x 2 0) (bruijn ##x.950 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k594, env)}),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 3 0) (close _V0vanity_V0compiler_V0transpile_V20_k593) (bruijn x 1 0) 1)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k593, env)}),
      upenv->vars[0],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda117" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k591) (close _V0vanity_V0compiler_V0transpile_V20_lambda118))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_k591, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda118, env)}));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda2, runtime, upenv, 46, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37, _var38, _var39, _var40, _var41, _var42, _var43, _var44, _var45) {
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
  // (letrec 2 (#f (close _V0vanity_V0compiler_V0transpile_V20_lambda3)) ((close _V0vanity_V0compiler_V0transpile_V20_lambda117) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeBool(false);
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda3, env)});
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda117, env, runtime,
      VEncodeInt(0l));
    }
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k54" };
 VRecordCall2(runtime, &dbg);
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
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda2) (bruijn ##x.155 45 0) (bruijn ##x.156 44 0) (bruijn ##x.157 43 0) (bruijn ##x.158 42 0) (bruijn ##x.159 41 0) (bruijn ##x.160 40 0) (bruijn ##x.161 39 0) (bruijn ##x.162 38 0) (bruijn ##x.163 37 0) (bruijn ##x.164 36 0) (bruijn ##x.165 35 0) (bruijn ##x.166 34 0) (bruijn ##x.167 33 0) (bruijn ##x.168 32 0) (bruijn ##x.169 31 0) (bruijn ##x.170 30 0) (bruijn ##x.171 29 0) (bruijn ##x.172 28 0) (bruijn ##x.173 27 0) (bruijn ##x.174 26 0) (bruijn ##x.175 25 0) (bruijn ##x.176 24 0) (bruijn ##x.177 23 0) (bruijn ##x.178 22 0) (bruijn ##x.179 21 0) (bruijn ##x.180 20 0) (bruijn ##x.181 19 0) (bruijn ##x.182 18 0) (bruijn ##x.183 17 0) (bruijn ##x.184 16 0) (bruijn ##x.185 15 0) (bruijn ##x.186 14 0) (bruijn ##x.187 13 0) (bruijn ##x.188 12 0) (bruijn ##x.189 11 0) (bruijn ##x.190 10 0) (bruijn ##x.191 9 0) (bruijn ##x.192 8 0) (bruijn ##x.193 7 0) (bruijn ##x.194 6 0) (bruijn ##x.195 5 0) (bruijn ##x.196 4 0) (bruijn ##x.197 3 0) (bruijn ##x.198 2 0) (bruijn ##x.199 1 0) (bruijn ##x.200 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0transpile_V20_lambda2, env, runtime,
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
static void _V0vanity_V0compiler_V0transpile_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k53" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 45 0) (close _V0vanity_V0compiler_V0transpile_V20_k54) 'reverse)
    V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k54, env)}),
      _V0reverse);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k52" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 44 0) (close _V0vanity_V0compiler_V0transpile_V20_k53) 'not)
    V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k53, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k51" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 43 0) (close _V0vanity_V0compiler_V0transpile_V20_k52) 'null?)
    V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k52, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k50" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 42 0) (close _V0vanity_V0compiler_V0transpile_V20_k51) 'compiler-error)
    V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k51, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k49" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 41 0) (close _V0vanity_V0compiler_V0transpile_V20_k50) 'for-each)
    V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k50, env)}),
      _V0for__each);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k48" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 40 0) (close _V0vanity_V0compiler_V0transpile_V20_k49) 'print-foreign-function)
    V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k49, env)}),
      _V0print__foreign__function);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k47" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 39 0) (close _V0vanity_V0compiler_V0transpile_V20_k48) 'displayln)
    V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k48, env)}),
      _V0displayln);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k46" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 38 0) (close _V0vanity_V0compiler_V0transpile_V20_k47) 'string-ref)
    V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k47, env)}),
      _V0string__ref);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k45" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 37 0) (close _V0vanity_V0compiler_V0transpile_V20_k46) '<)
    V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k46, env)}),
      _V0_L);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k44" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 36 0) (close _V0vanity_V0compiler_V0transpile_V20_k45) 'close-port)
    V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k45, env)}),
      _V0close__port);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k43" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 35 0) (close _V0vanity_V0compiler_V0transpile_V20_k44) 'get-output-string)
    V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k44, env)}),
      _V0get__output__string);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k42" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 34 0) (close _V0vanity_V0compiler_V0transpile_V20_k43) 'open-output-string)
    V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k43, env)}),
      _V0open__output__string);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k41" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 33 0) (close _V0vanity_V0compiler_V0transpile_V20_k42) 'integer?)
    V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k42, env)}),
      _V0integer_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k40" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 32 0) (close _V0vanity_V0compiler_V0transpile_V20_k41) 'number?)
    V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k41, env)}),
      _V0number_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k39" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 31 0) (close _V0vanity_V0compiler_V0transpile_V20_k40) 'char?)
    V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k40, env)}),
      _V0char_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k38" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 30 0) (close _V0vanity_V0compiler_V0transpile_V20_k39) 'eq?)
    V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k39, env)}),
      _V0eq_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k37" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 29 0) (close _V0vanity_V0compiler_V0transpile_V20_k38) 'symbol->string)
    V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k38, env)}),
      _V0symbol___Gstring);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k36" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 28 0) (close _V0vanity_V0compiler_V0transpile_V20_k37) 'string-length)
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k37, env)}),
      _V0string__length);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k35" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 27 0) (close _V0vanity_V0compiler_V0transpile_V20_k36) 'string?)
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k36, env)}),
      _V0string_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k34" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 26 0) (close _V0vanity_V0compiler_V0transpile_V20_k35) 'caar)
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k35, env)}),
      _V0caar);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k33" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 25 0) (close _V0vanity_V0compiler_V0transpile_V20_k34) 'cadar)
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k34, env)}),
      _V0cadar);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k32" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 24 0) (close _V0vanity_V0compiler_V0transpile_V20_k33) 'mangle-symbol)
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k33, env)}),
      _V0mangle__symbol);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k31" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 23 0) (close _V0vanity_V0compiler_V0transpile_V20_k32) 'lookup-inline-name)
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k32, env)}),
      _V0lookup__inline__name);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k30" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0compiler_V0transpile_V20_k31) 'cdr)
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k31, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k29" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0compiler_V0transpile_V20_k30) 'display)
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k30, env)}),
      _V0display);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k28" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0compiler_V0transpile_V20_k29) '=)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k29, env)}),
      _V0_E);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k27" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0transpile_V20_k28) 'call-with-values)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k28, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k26" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0transpile_V20_k27) 'lookup-intrinsic-name)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k27, env)}),
      _V0lookup__intrinsic__name);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k25" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0transpile_V20_k26) 'cadr)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k26, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k24" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0transpile_V20_k25) 'eqv?)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k25, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k23" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0transpile_V20_k24) 'pair?)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k24, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k22" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0transpile_V20_k23) 'symbol?)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k23, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k21" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0transpile_V20_k22) '-)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k22, env)}),
      _V0__);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k20" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0transpile_V20_k21) 'list-ref)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k21, env)}),
      _V0list__ref);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k19" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0transpile_V20_k20) 'append)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k20, env)}),
      _V0append);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k18" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0transpile_V20_k19) 'error)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k19, env)}),
      _V0error);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k17" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0transpile_V20_k18) 'map)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k18, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k16" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0transpile_V20_k17) 'cddr)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k17, env)}),
      _V0cddr);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k15" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0transpile_V20_k16) 'car)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k16, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k14" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0transpile_V20_k15) 'call/cc)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k15, env)}),
      _V0call_Wcc);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k13" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0transpile_V20_k14) 'equal?)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k14, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k12" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0transpile_V20_k13) 'iota)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k13, env)}),
      _V0iota);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k11" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0transpile_V20_k12) 'length)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k12, env)}),
      _V0length);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k10" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0transpile_V20_k11) 'printf)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k11, env)}),
      _V0printf);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k9" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0transpile_V20_k10) 'sprintf)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k10, env)}),
      _V0sprintf);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k8" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0transpile_V20_k9) '+)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k9, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k7" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0transpile_V20_k8) (##string ##string.1092) (bruijn ##x.951 6 0) (bruijn ##x.952 5 0) (bruijn ##x.953 4 0) (bruijn ##x.954 3 0) (bruijn ##x.955 2 0) (bruijn ##x.956 1 0) (bruijn ##x.957 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k8, env)}),
      VEncodePointer(&_V10string_D1092.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k6" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k7) (##string ##string.1093))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k7, env)}),
      VEncodePointer(&_V10string_D1093.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k5" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k6) (##string ##string.1094))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k6, env)}),
      VEncodePointer(&_V10string_D1094.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k4" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k5) (##string ##string.1095))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k5, env)}),
      VEncodePointer(&_V10string_D1095.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k3" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k4) (##string ##string.1096))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k4, env)}),
      VEncodePointer(&_V10string_D1096.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k2" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k3) (##string ##string.1097))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k3, env)}),
      VEncodePointer(&_V10string_D1097.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_k1" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k2) (##string ##string.1098))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k2, env)}),
      VEncodePointer(&_V10string_D1098.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0transpile_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k1) (##string ##string.1099))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k1, env)}),
      VEncodePointer(&_V10string_D1099.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0transpile_V20 = (VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda1;
