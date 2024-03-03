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
static struct { VBlob sym; char bytes[21]; } _V10string_D1138 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1137 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1136 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[34]; } _V10string_D1135 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1134 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
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
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0system;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0system = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "system" };
VWEAK VWORD _V0install__root;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0install__root = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "install-root" };
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
VWEAK VWORD _V0resolve__foreign__import;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0resolve__foreign__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "resolve-foreign-import" };
VWEAK VWORD _V0print__foreign__function;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0print__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "print-foreign-function" };
VWEAK VWORD _V0validate__foreign__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0validate__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "validate-foreign-function" };
VWEAK VWORD _V0mangle__foreign__function;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0mangle__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "mangle-foreign-function" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1133 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A;~N" };
static struct { VBlob sym; char bytes[39]; } _V10string_D1132 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "void _V30~A_shim(V_CORE_ARGS, VWORD _k" };
static struct { VBlob sym; char bytes[15]; } _V10string_D1131 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, ", VWORD _arg~A" };
static struct { VBlob sym; char bytes[34]; } _V10string_D1130 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "  V_ARG_CHECK2(\"~A\", ~A, argc);~N" };
static struct { VBlob sym; char bytes[62]; } _V10string_D1129 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "  V_GC_CHECK2_VARARGS((VFunc)~A, runtime, statics, ~A, ~A, _k" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1128 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, ", _arg~A" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1127 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1126 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "));~N" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1125 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "  }~N}~N" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1124 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "  V_CALL(_k, runtime, _ret);~N" };
static struct { VBlob sym; char bytes[32]; } _V10string_D1123 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  V_CALL(_k, runtime, VVOID);~N" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1122 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ", " };
static struct { VBlob sym; char bytes[24]; } _V10string_D1121 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    VWORD _ret = ~A(~A(" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1120 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "(~A(" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1119 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "~A(_arg~A, \"~A\")" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1118 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeVWORD" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1117 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeNumber" };
static struct { VBlob sym; char bytes[18]; } _V10string_D1116 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VCheckedDecodeInt" };
static struct { VBlob sym; char bytes[28]; } _V10string_D1115 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeUnsignedShort" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1114 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeShort" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1113 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "VCheckedDecodeUnsignedChar" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1112 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "VCheckedDecodeSignedChar" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1111 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VCheckedDecodeChar" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1110 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VCheckedDecodeBool" };
static struct { VBlob sym; char bytes[29]; } _V10string_D1109 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "VCheckedDecodeForeignPointer" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1108 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VCheckedDecodeVoidPtr" };
VWEAK VWORD _V0void__pointer;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "void-pointer" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1107 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "VCheckedDecodeConstVoidPtr" };
VWEAK VWORD _V0const__void__pointer;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0const__void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "const-void-pointer" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1106 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "VCheckedDecodeConstCString" };
VWEAK VWORD _V0const__c__string;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0const__c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "const-c-string" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1105 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VCheckedDecodeCString" };
VWEAK VWORD _V0c__string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "c-string" };
VWEAK VWORD _V0VWORD;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0VWORD = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "VWORD" };
static struct { VBlob sym; char bytes[14]; } _V10string_D1104 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VEncodeDouble" };
static struct { VBlob sym; char bytes[11]; } _V10string_D1103 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VEncodeInt" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1102 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeChar" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1101 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeBool" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1100 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VEncodeForeignPointer" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1099 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "_V30~A_shim" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1098 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VForeignParseHeaderC" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1097 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Invalid foreign import syntax" };
VWEAK VWORD _V10foreign_Dimport;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10foreign_Dimport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##foreign.import" };
static struct { VBlob sym; char bytes[15]; } _V10string_D1096 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "#include <~A>\n" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1095 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "File must be a string" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1094 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "include/vscheme/stdc/sysv_amd64/" };
static struct { VBlob sym; char bytes[63]; } _V10string_D1093 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "gcc -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w ~A -I~A/~A" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1092 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1091 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "[ ~A ]" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1090 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "Unable to open header file" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1089 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VForeignParseDeclC" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1088 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VForeignReleaseParse" };
static struct { VBlob sym; char bytes[32]; } _V10string_D1087 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "Invalid foreign function syntax" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1086 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Unsupported foreign function language" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1085 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Declaration is not a single function" };
static struct { VBlob sym; char bytes[18]; } _V10string_D1084 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "naked_declaration" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1083 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "unknown entry in ffi table" };
static struct { VBlob sym; char bytes[40]; } _V10string_D1082 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "variable redeclared as different symbol" };
static struct { VBlob sym; char bytes[1]; } _V10string_D1081 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1080 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "C" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[8]; } _V10string_D1079 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "typedef" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1078 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "declaration" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1077 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "toplevel" };
VWEAK VWORD _V0enum;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0enum = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "enum" };
static struct { VBlob sym; char bytes[26]; } _V10string_D1076 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "Unsupported C declaration" };
static struct { VBlob sym; char bytes[43]; } _V10string_D1075 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Unsupported arg type in C foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1074 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Not a simple function declaration: ~A" };
static struct { VBlob sym; char bytes[46]; } _V10string_D1073 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "Unsupported return type in C foreign-function" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1072 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "Unsupported C typedef" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1071 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "Not a simple typedef" };
VWEAK VWORD _V0restrict;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0restrict = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "restrict" };
VWEAK VWORD _V0static;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0static = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "static" };
static struct { VBlob sym; char bytes[40]; } _V10string_D1070 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "Can only have one type in a declaration" };
static struct { VBlob sym; char bytes[43]; } _V10string_D1069 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Multiple storage specifiers in declaration" };
static struct { VBlob sym; char bytes[44]; } _V10string_D1068 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "Unexpected storage specifier in declaration" };
VWEAK VWORD _V0extern;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0extern = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "extern" };
VWEAK VWORD _V0register;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0register = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "register" };
VWEAK VWORD _V0auto;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0auto = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "auto" };
VWEAK VWORD _V0volatile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0volatile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "volatile" };
VWEAK VWORD _V0signed;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0signed = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "signed" };
VWEAK VWORD _V0unsigned;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0unsigned = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "unsigned" };
VWEAK VWORD _V0longs;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0longs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "longs" };
VWEAK VWORD _V0special;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0special = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "special" };
static struct { VBlob sym; char bytes[29]; } _V10string_D1067 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "unsupported type combination" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1066 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "enum" };
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
static struct { VBlob sym; char bytes[17]; } _V10string_D1065 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "unknown typename" };
VWEAK VWORD _V0_UBool;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0_UBool = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "_Bool" };
VWEAK VWORD _V0double;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0double = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "double" };
VWEAK VWORD _V0float;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0float = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "float" };
VWEAK VWORD _V0void;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0void = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "void" };
VWEAK VWORD _V0variable;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0variable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "variable" };
static struct { VBlob sym; char bytes[26]; } _V10string_D1064 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0pointer;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "pointer" };
static struct { VBlob sym; char bytes[8]; } _V10string_D1063 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "pointer" };
static struct { VBlob sym; char bytes[15]; } _V10string_D1062 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "parameter_list" };
VWEAK VWORD _V0function;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "function" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1061 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "function" };
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
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0system = VEncodePointer(VLookupConstant("_V0system", &_VW_V0system), VPOINTER_OTHER);
  _V0install__root = VEncodePointer(VLookupConstant("_V0install__root", &_VW_V0install__root), VPOINTER_OTHER);
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
  _V0resolve__foreign__import = VEncodePointer(VLookupConstant("_V0resolve__foreign__import", &_VW_V0resolve__foreign__import), VPOINTER_OTHER);
  _V0print__foreign__function = VEncodePointer(VLookupConstant("_V0print__foreign__function", &_VW_V0print__foreign__function), VPOINTER_OTHER);
  _V0validate__foreign__function = VEncodePointer(VLookupConstant("_V0validate__foreign__function", &_VW_V0validate__foreign__function), VPOINTER_OTHER);
  _V0mangle__foreign__function = VEncodePointer(VLookupConstant("_V0mangle__foreign__function", &_VW_V0mangle__foreign__function), VPOINTER_OTHER);
  _V0void__pointer = VEncodePointer(VLookupConstant("_V0void__pointer", &_VW_V0void__pointer), VPOINTER_OTHER);
  _V0const__void__pointer = VEncodePointer(VLookupConstant("_V0const__void__pointer", &_VW_V0const__void__pointer), VPOINTER_OTHER);
  _V0const__c__string = VEncodePointer(VLookupConstant("_V0const__c__string", &_VW_V0const__c__string), VPOINTER_OTHER);
  _V0c__string = VEncodePointer(VLookupConstant("_V0c__string", &_VW_V0c__string), VPOINTER_OTHER);
  _V0VWORD = VEncodePointer(VLookupConstant("_V0VWORD", &_VW_V0VWORD), VPOINTER_OTHER);
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
static void _V0vanity_V0compiler_V0ffi_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k49, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.4 0 0))) ((bruijn ##kk.1 4 1) (bruijn ##k.197 2 0) (##inline ##sys.car (bruijn ##expr.4 0 0))) ((bruijn ##k.197 2 0) #f)) ((bruijn ##k.197 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->vars[0],
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
static void _V0vanity_V0compiler_V0ffi_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.198 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k49) (##inline ##sys.cdr (bruijn ##expr.3 2 0))) ((bruijn ##k.197 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k49, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.3 1 0)) ((bruijn equal? 7 39) (close _V0vanity_V0compiler_V0ffi_V20_k48) 'const (##inline ##sys.car (bruijn ##expr.3 1 0))) ((bruijn ##k.197 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 7-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k48, env)}),
      _V0const,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k50, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 2 1) (bruijn ##k.194 2 0) (bruijn x 3 1))
V_CALL(upenv->up->vars[1], runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda6" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k47) (close _V0vanity_V0compiler_V0ffi_V20_k50))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k47, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k50, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda6) (bruijn x 1 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda6, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 4 37) (bruijn ##k.193 0 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda5))
V_CALL(upenv->up->up->up->vars[37], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda5, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k58, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 12 19) (bruijn ##k.203 8 0) (bruijn ##x.205 2 0) (bruijn ##x.206 0 0))
V_CALL(VGetArg(upenv, 12-1, 19), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reduce-args 8 1) (close _V0vanity_V0compiler_V0ffi_V20_k58) (bruijn ##x.207 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k58, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 10 31) (close _V0vanity_V0compiler_V0ffi_V20_k57) (bruijn args 6 1))
V_CALL(VGetArg(upenv, 10-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k57, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 9 25) (close _V0vanity_V0compiler_V0ffi_V20_k56) (bruijn ##x.208 0 0))
V_CALL(VGetArg(upenv, 9-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k56, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reduce-declare 7 0) (close _V0vanity_V0compiler_V0ffi_V20_k55) (bruijn ##x.209 1 0) (bruijn ##x.210 0 0) (bruijn table 6 3))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k55, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadar 7 8) (close _V0vanity_V0compiler_V0ffi_V20_k54) (bruijn args 3 1))
V_CALL(VGetArg(upenv, 7-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k54, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reduce-type 5 2) (close _V0vanity_V0compiler_V0ffi_V20_k53) (bruijn ##x.211 0 0) (bruijn table 4 3) #f)
V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k53, env)}),
      _var0,
      upenv->up->up->up->vars[3],
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.204 0 0) ((bruijn ##k.203 1 0) '()) ((bruijn caar 5 5) (close _V0vanity_V0compiler_V0ffi_V20_k52) (bruijn args 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 5-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k52, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 4 14) (close _V0vanity_V0compiler_V0ffi_V20_k51) (bruijn args 0 1))
V_CALL(upenv->up->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k51, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k61, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.282 1 0) (##sys.blob=? (bruijn ##k.283 0 0) (##string ##string.1061) (##inline ##sys.car (bruijn ##expr.7 3 0))) ((bruijn ##k.283 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1061.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->up->up->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k64, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.5 7 1) (bruijn ##k.273 4 0) (##inline ##sys.cons 'function (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.8 1 0)) (##inline ##sys.cons (bruijn ##x.280 0 0) '()))))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
        _V0function,
        VInlineCons(
        VInlineCar(
        upenv->vars[0]),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.8 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.8 0 0))) ((bruijn drop-const 8 0) (close _V0vanity_V0compiler_V0ffi_V20_k64) (bruijn ret 7 1)) ((bruijn ##k.273 3 0) #f)) ((bruijn ##k.273 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k64, env)}),
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
static void _V0vanity_V0compiler_V0ffi_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.274 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k63) (##inline ##sys.cdr (bruijn ##expr.7 3 0))) ((bruijn ##k.273 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k63, env, runtime,
      VInlineCdr(
        upenv->up->up->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k61) (close _V0vanity_V0compiler_V0ffi_V20_k62))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k61, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k62, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.7 1 0)) (##sys.string? (close _V0vanity_V0compiler_V0ffi_V20_k60) (##inline ##sys.car (bruijn ##expr.7 1 0))) ((bruijn ##k.273 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k60, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k68, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.268 1 0) (##sys.blob=? (bruijn ##k.269 0 0) (##string ##string.1061) (##inline ##sys.car (bruijn ##expr.9 3 0))) ((bruijn ##k.269 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1061.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->up->up->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k74, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.264 1 0) (##sys.blob=? (bruijn ##k.265 0 0) (##string ##string.1062) (##inline ##sys.car (bruijn ##expr.12 2 0))) ((bruijn ##k.265 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1062.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->up->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k77, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.15 4 1) (bruijn ##k.251 1 0) (bruijn ##expr.17 2 1) (bruijn ##x.252 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.17 1 1))) ((bruijn reverse 22 38) (close _V0vanity_V0compiler_V0ffi_V20_k77) (bruijn ##args.14 1 2)) ((bruijn ##k.251 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 22-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k77, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k80, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.15 7 1) (bruijn ##k.245 2 0) (bruijn ##expr.17 5 1) (bruijn ##x.247 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 25 38) (close _V0vanity_V0compiler_V0ffi_V20_k80) (bruijn ##args.14 4 2))
V_CALL(VGetArg(upenv, 25-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k80, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.16 0 1) (close _V0vanity_V0compiler_V0ffi_V20_k79) (##inline ##sys.cdr (bruijn ##expr.17 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.17 3 1)) (bruijn ##args.14 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k79, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 23 37) (bruijn ##k.244 0 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda17))
V_CALL(VGetArg(upenv, 23-1, 37), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda17, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 22 36) (bruijn ##k.242 1 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda16) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda16, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k76) (close _V0vanity_V0compiler_V0ffi_V20_k78))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k76, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k78, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0ffi_V20_lambda15)) ((bruijn loop 0 0) (bruijn ##k.241 1 0) (##inline ##sys.cdr (bruijn ##expr.12 5 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda15, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 5-1, 0)),
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 18 37) (bruijn ##k.240 0 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda14))
V_CALL(VGetArg(upenv, 18-1, 37), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda14, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k83, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.5 16 1) (bruijn ##k.254 3 0) (##inline ##sys.cons 'function (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.10 8 0)) (##inline ##sys.cons (bruijn ##x.260 2 0) (bruijn ##x.261 0 0)))))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
        _V0function,
        VInlineCons(
        VInlineCar(
        VGetArg(upenv, 8-1, 0)),
        VInlineCons(
        upenv->up->vars[0],
        _var0))));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 20 3) (close _V0vanity_V0compiler_V0ffi_V20_k83) (bruijn drop-const 17 0) (bruijn ##x.262 0 0))
V_CALL(VGetArg(upenv, 20-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k83, env)}),
      VGetArg(upenv, 17-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reduce-args 16 1) (close _V0vanity_V0compiler_V0ffi_V20_k82) (bruijn args 1 2))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k82, env)}),
      upenv->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda18, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda18, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.11 4 0))) ((bruijn drop-const 15 0) (close _V0vanity_V0compiler_V0ffi_V20_k81) (bruijn ret 14 1)) ((bruijn ##k.254 0 0) #f)) ((bruijn ##k.254 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->up->up->vars[0])))) {
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k81, env)}),
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
static void _V0vanity_V0compiler_V0ffi_V20_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.239 0 0) ((bruijn call-with-values 17 36) (bruijn ##k.234 7 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda13) (close _V0vanity_V0compiler_V0ffi_V20_lambda18)) ((bruijn ##k.234 7 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 36), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda13, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda18, env)}));
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k74) (close _V0vanity_V0compiler_V0ffi_V20_k75))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k74, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k75, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.12 0 0)) (##sys.string? (close _V0vanity_V0compiler_V0ffi_V20_k73) (##inline ##sys.car (bruijn ##expr.12 0 0))) ((bruijn ##k.234 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k73, env)}),
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.11 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k72) (##inline ##sys.car (bruijn ##expr.11 0 0))) ((bruijn ##k.234 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k72, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.10 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k71) (##inline ##sys.cdr (bruijn ##expr.10 0 0))) ((bruijn ##k.234 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k71, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.235 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k70) (##inline ##sys.cdr (bruijn ##expr.9 3 0))) ((bruijn ##k.234 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k70, env, runtime,
      VInlineCdr(
        upenv->up->up->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k68) (close _V0vanity_V0compiler_V0ffi_V20_k69))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k68, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k69, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.9 1 0)) (##sys.string? (close _V0vanity_V0compiler_V0ffi_V20_k67) (##inline ##sys.car (bruijn ##expr.9 1 0))) ((bruijn ##k.234 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k67, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k87, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.229 1 0) (##sys.blob=? (bruijn ##k.230 0 0) (##string ##string.1063) (##inline ##sys.car (bruijn ##expr.18 3 0))) ((bruijn ##k.230 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1063.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->up->up->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k91, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.5 12 1) (bruijn ##k.222 5 0) (bruijn ##x.226 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reduce-declare-loop 13 2) (close _V0vanity_V0compiler_V0ffi_V20_k91) (bruijn ##x.227 0 0) (##inline ##sys.car (bruijn ##expr.19 1 0)))
V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k91, env)}),
      _var0,
      VInlineCar(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.19 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.19 0 0))) ((bruijn list 15 2) (close _V0vanity_V0compiler_V0ffi_V20_k90) 'pointer (bruijn ret 11 1)) ((bruijn ##k.222 3 0) #f)) ((bruijn ##k.222 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k90, env)}),
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
static void _V0vanity_V0compiler_V0ffi_V20_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.223 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k89) (##inline ##sys.cdr (bruijn ##expr.18 3 0))) ((bruijn ##k.222 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k89, env, runtime,
      VInlineCdr(
        upenv->up->up->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k87) (close _V0vanity_V0compiler_V0ffi_V20_k88))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k87, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k88, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.18 1 0)) (##sys.string? (close _V0vanity_V0compiler_V0ffi_V20_k86) (##inline ##sys.car (bruijn ##expr.18 1 0))) ((bruijn ##k.222 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k86, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k93, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 14 40) (bruijn ##k.213 9 0) (##string ##string.1064))
V_CALL(VGetArg(upenv, 14-1, 40), runtime,
      VGetArg(upenv, 9-1, 0),
      VEncodePointer(&_V10string_D1064.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda20" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.5 8 1) (close _V0vanity_V0compiler_V0ffi_V20_k93) (##inline ##sys.cons 'variable (##inline ##sys.cons (bruijn ret 9 1) (##inline ##sys.cons (bruijn expr 0 0) '()))))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k93, env)}),
      VInlineCons(
        _V0variable,
        VInlineCons(
        VGetArg(upenv, 9-1, 1),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda20) (bruijn ##input.6 6 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda20, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda19" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k85) (close _V0vanity_V0compiler_V0ffi_V20_k92))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k85, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k92, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda19) (bruijn ##input.6 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda19, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda12" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k66) (close _V0vanity_V0compiler_V0ffi_V20_k84))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k66, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k84, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda12) (bruijn ##input.6 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda12, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda11" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k59) (close _V0vanity_V0compiler_V0ffi_V20_k65))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k59, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k65, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda10" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda11) (bruijn ##input.6 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda11, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda10) (bruijn decl 1 2))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda10, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda8, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 4 37) (bruijn ##k.212 0 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda9))
V_CALL(upenv->up->up->up->vars[37], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda9, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda3, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda3, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 3 ((close _V0vanity_V0compiler_V0ffi_V20_lambda4) (close _V0vanity_V0compiler_V0ffi_V20_lambda7) (close _V0vanity_V0compiler_V0ffi_V20_lambda8)) ((bruijn reduce-declare-loop 0 2) (bruijn ##k.192 1 0) (bruijn ret 1 1) (bruijn decl 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda4, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda7, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda8, env)});
V_CALL(env->vars[2], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
    }
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k96, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 5 21) (bruijn ##k.297 1 0) (bruijn ##x.298 0 0))
V_CALL(VGetArg(upenv, 5-1, 21), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.296 1 0) ((bruijn memv 4 0) (close _V0vanity_V0compiler_V0ffi_V20_k96) (bruijn special 2 1) (##inline ##sys.qcons 'void (##inline ##sys.qcons 'float (##inline ##sys.qcons 'double (##inline ##sys.qcons '_Bool '()))))) ((bruijn ##k.297 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k96, env)}),
      upenv->up->vars[1],
      VInlineCons(
        _V0void,
        VInlineCons(
        _V0float,
        VInlineCons(
        _V0double,
        VInlineCons(
        _V0_UBool,
        VNULL)))));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k102, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 11 30) (bruijn ##k.293 1 0) (bruijn ##x.294 0 0) (bruijn special 9 1))
V_CALL(VGetArg(upenv, 11-1, 30), runtime,
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.292 1 0) ((bruijn cadar 10 8) (close _V0vanity_V0compiler_V0ffi_V20_k102) (bruijn table 4 1)) ((bruijn ##k.293 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k102, env)}),
      upenv->up->up->up->vars[1]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k104, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.288 5 0) (bruijn ##x.291 0 0))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.290 0 0) ((bruijn caddar 10 6) (bruijn ##k.288 4 0) (bruijn table 4 1)) ((bruijn cdr 10 31) (close _V0vanity_V0compiler_V0ffi_V20_k104) (bruijn table 4 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 6), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 10-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k104, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k101) (close _V0vanity_V0compiler_V0ffi_V20_k103))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k101, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k103, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 8 30) (close _V0vanity_V0compiler_V0ffi_V20_k100) (bruijn ##x.295 0 0) 'typedef)
V_CALL(VGetArg(upenv, 8-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k100, env)}),
      _var0,
      _V0typedef);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.289 0 0) ((bruijn compiler-error 7 23) (bruijn ##k.288 1 0) (##string ##string.1065) (bruijn special 5 1)) ((bruijn caar 7 5) (close _V0vanity_V0compiler_V0ffi_V20_k99) (bruijn table 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1065.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 1));
} else {
V_CALL(VGetArg(upenv, 7-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k99, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 6 14) (close _V0vanity_V0compiler_V0ffi_V20_k98) (bruijn table 0 1))
V_CALL(VGetArg(upenv, 6-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k98, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.287 0 0) (letrec 1 ((close _V0vanity_V0compiler_V0ffi_V20_lambda22)) ((bruijn loop 0 0) (bruijn ##k.286 3 0) (bruijn table 3 2))) ((bruijn ##k.286 2 0) #f))
if(VDecodeBool(
_var0)) {
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda22, env)});
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
static void _V0vanity_V0compiler_V0ffi_V20_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k95) (close _V0vanity_V0compiler_V0ffi_V20_k97))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k95, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k97, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda21, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn symbol? 2 1) (close _V0vanity_V0compiler_V0ffi_V20_k94) (bruijn special 0 1))
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k94, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k110, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.27 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.27 0 0))) ((bruijn ##kk.21 8 1) (bruijn ##k.520 5 0) 'char) ((bruijn ##k.520 5 0) #f)) ((bruijn ##k.520 5 0) #f)) ((bruijn ##k.520 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.26 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k110) (##inline ##sys.cdr (bruijn ##expr.26 0 0))) ((bruijn ##k.520 4 0) #f)) ((bruijn ##k.520 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k110, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.25 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k109) (##inline ##sys.cdr (bruijn ##expr.25 0 0))) ((bruijn ##k.520 3 0) #f)) ((bruijn ##k.520 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k109, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.24 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.24 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k108) (##inline ##sys.cdr (bruijn ##expr.24 0 0))) ((bruijn ##k.520 2 0) #f)) ((bruijn ##k.520 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeInt(0l),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k108, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.521 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k107) (##inline ##sys.cdr (bruijn ##expr.23 2 0))) ((bruijn ##k.520 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k107, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.23 1 0)) ((bruijn equal? 8 39) (close _V0vanity_V0compiler_V0ffi_V20_k106) 'char (##inline ##sys.car (bruijn ##expr.23 1 0))) ((bruijn ##k.520 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 8-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k106, env)}),
      _V0char,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k117, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.32 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.32 0 0))) ((bruijn ##kk.21 10 1) (bruijn ##k.502 5 0) 'unsigned-char) ((bruijn ##k.502 5 0) #f)) ((bruijn ##k.502 5 0) #f)) ((bruijn ##k.502 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.31 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k117) (##inline ##sys.cdr (bruijn ##expr.31 0 0))) ((bruijn ##k.502 4 0) #f)) ((bruijn ##k.502 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(true),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k117, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.30 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k116) (##inline ##sys.cdr (bruijn ##expr.30 0 0))) ((bruijn ##k.502 3 0) #f)) ((bruijn ##k.502 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k116, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.29 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.29 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k115) (##inline ##sys.cdr (bruijn ##expr.29 0 0))) ((bruijn ##k.502 2 0) #f)) ((bruijn ##k.502 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeInt(0l),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k115, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.503 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k114) (##inline ##sys.cdr (bruijn ##expr.28 2 0))) ((bruijn ##k.502 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k114, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.28 1 0)) ((bruijn equal? 10 39) (close _V0vanity_V0compiler_V0ffi_V20_k113) 'char (##inline ##sys.car (bruijn ##expr.28 1 0))) ((bruijn ##k.502 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 10-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k113, env)}),
      _V0char,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k124, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.37 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.37 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.37 0 0))) ((bruijn ##kk.21 12 1) (bruijn ##k.484 5 0) 'signed-char) ((bruijn ##k.484 5 0) #f)) ((bruijn ##k.484 5 0) #f)) ((bruijn ##k.484 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(true),
        VInlineCar(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.36 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.36 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k124) (##inline ##sys.cdr (bruijn ##expr.36 0 0))) ((bruijn ##k.484 4 0) #f)) ((bruijn ##k.484 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k124, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.35 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.35 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k123) (##inline ##sys.cdr (bruijn ##expr.35 0 0))) ((bruijn ##k.484 3 0) #f)) ((bruijn ##k.484 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k123, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.34 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.34 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k122) (##inline ##sys.cdr (bruijn ##expr.34 0 0))) ((bruijn ##k.484 2 0) #f)) ((bruijn ##k.484 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeInt(0l),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k122, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.485 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k121) (##inline ##sys.cdr (bruijn ##expr.33 2 0))) ((bruijn ##k.484 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k121, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.33 1 0)) ((bruijn equal? 12 39) (close _V0vanity_V0compiler_V0ffi_V20_k120) 'char (##inline ##sys.car (bruijn ##expr.33 1 0))) ((bruijn ##k.484 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k120, env)}),
      _V0char,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k131, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.42 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.42 0 0))) ((bruijn ##kk.21 14 1) (bruijn ##k.468 5 0) 'int) ((bruijn ##k.468 5 0) #f)) ((bruijn ##k.468 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.41 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.41 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k131) (##inline ##sys.cdr (bruijn ##expr.41 0 0))) ((bruijn ##k.468 4 0) #f)) ((bruijn ##k.468 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k131, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.40 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.40 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k130) (##inline ##sys.cdr (bruijn ##expr.40 0 0))) ((bruijn ##k.468 3 0) #f)) ((bruijn ##k.468 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k130, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.39 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.39 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k129) (##inline ##sys.cdr (bruijn ##expr.39 0 0))) ((bruijn ##k.468 2 0) #f)) ((bruijn ##k.468 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeInt(0l),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k129, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.469 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k128) (##inline ##sys.cdr (bruijn ##expr.38 2 0))) ((bruijn ##k.468 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k128, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.38 1 0)) ((bruijn equal? 14 39) (close _V0vanity_V0compiler_V0ffi_V20_k127) 'int (##inline ##sys.car (bruijn ##expr.38 1 0))) ((bruijn ##k.468 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 14-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k127, env)}),
      _V0int,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k138, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.47 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.47 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.47 0 0))) ((bruijn ##kk.21 16 1) (bruijn ##k.450 5 0) 'unsigned-int) ((bruijn ##k.450 5 0) #f)) ((bruijn ##k.450 5 0) #f)) ((bruijn ##k.450 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.46 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.46 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k138) (##inline ##sys.cdr (bruijn ##expr.46 0 0))) ((bruijn ##k.450 4 0) #f)) ((bruijn ##k.450 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(true),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k138, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.45 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.45 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k137) (##inline ##sys.cdr (bruijn ##expr.45 0 0))) ((bruijn ##k.450 3 0) #f)) ((bruijn ##k.450 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k137, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.44 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.44 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k136) (##inline ##sys.cdr (bruijn ##expr.44 0 0))) ((bruijn ##k.450 2 0) #f)) ((bruijn ##k.450 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeInt(0l),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k136, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.451 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k135) (##inline ##sys.cdr (bruijn ##expr.43 2 0))) ((bruijn ##k.450 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k135, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.43 1 0)) ((bruijn equal? 16 39) (close _V0vanity_V0compiler_V0ffi_V20_k134) 'int (##inline ##sys.car (bruijn ##expr.43 1 0))) ((bruijn ##k.450 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 16-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k134, env)}),
      _V0int,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k145, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.52 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.52 0 0))) ((bruijn ##kk.21 18 1) (bruijn ##k.434 5 0) 'long) ((bruijn ##k.434 5 0) #f)) ((bruijn ##k.434 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.51 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.51 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k145) (##inline ##sys.cdr (bruijn ##expr.51 0 0))) ((bruijn ##k.434 4 0) #f)) ((bruijn ##k.434 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k145, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.50 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.50 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k144) (##inline ##sys.cdr (bruijn ##expr.50 0 0))) ((bruijn ##k.434 3 0) #f)) ((bruijn ##k.434 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k144, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.49 0 0)) (if (##inline ##sys.eq? 1 (##inline ##sys.car (bruijn ##expr.49 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k143) (##inline ##sys.cdr (bruijn ##expr.49 0 0))) ((bruijn ##k.434 2 0) #f)) ((bruijn ##k.434 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeInt(1l),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k143, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.435 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k142) (##inline ##sys.cdr (bruijn ##expr.48 2 0))) ((bruijn ##k.434 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k142, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.48 1 0)) ((bruijn equal? 18 39) (close _V0vanity_V0compiler_V0ffi_V20_k141) 'int (##inline ##sys.car (bruijn ##expr.48 1 0))) ((bruijn ##k.434 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 18-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k141, env)}),
      _V0int,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k152, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.57 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.57 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.57 0 0))) ((bruijn ##kk.21 20 1) (bruijn ##k.416 5 0) 'unsigned-long) ((bruijn ##k.416 5 0) #f)) ((bruijn ##k.416 5 0) #f)) ((bruijn ##k.416 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.56 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k152) (##inline ##sys.cdr (bruijn ##expr.56 0 0))) ((bruijn ##k.416 4 0) #f)) ((bruijn ##k.416 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(true),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k152, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.55 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.55 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k151) (##inline ##sys.cdr (bruijn ##expr.55 0 0))) ((bruijn ##k.416 3 0) #f)) ((bruijn ##k.416 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k151, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.54 0 0)) (if (##inline ##sys.eq? 1 (##inline ##sys.car (bruijn ##expr.54 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k150) (##inline ##sys.cdr (bruijn ##expr.54 0 0))) ((bruijn ##k.416 2 0) #f)) ((bruijn ##k.416 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeInt(1l),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k150, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.417 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k149) (##inline ##sys.cdr (bruijn ##expr.53 2 0))) ((bruijn ##k.416 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k149, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.53 1 0)) ((bruijn equal? 20 39) (close _V0vanity_V0compiler_V0ffi_V20_k148) 'int (##inline ##sys.car (bruijn ##expr.53 1 0))) ((bruijn ##k.416 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 20-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k148, env)}),
      _V0int,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k159, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.62 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.62 0 0))) ((bruijn ##kk.21 22 1) (bruijn ##k.400 5 0) 'long-long) ((bruijn ##k.400 5 0) #f)) ((bruijn ##k.400 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.61 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.61 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k159) (##inline ##sys.cdr (bruijn ##expr.61 0 0))) ((bruijn ##k.400 4 0) #f)) ((bruijn ##k.400 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k159, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.60 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.60 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k158) (##inline ##sys.cdr (bruijn ##expr.60 0 0))) ((bruijn ##k.400 3 0) #f)) ((bruijn ##k.400 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k158, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.59 0 0)) (if (##inline ##sys.eq? 2 (##inline ##sys.car (bruijn ##expr.59 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k157) (##inline ##sys.cdr (bruijn ##expr.59 0 0))) ((bruijn ##k.400 2 0) #f)) ((bruijn ##k.400 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeInt(2l),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k157, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.401 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k156) (##inline ##sys.cdr (bruijn ##expr.58 2 0))) ((bruijn ##k.400 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k156, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.58 1 0)) ((bruijn equal? 22 39) (close _V0vanity_V0compiler_V0ffi_V20_k155) 'int (##inline ##sys.car (bruijn ##expr.58 1 0))) ((bruijn ##k.400 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 22-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k155, env)}),
      _V0int,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k166, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.67 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.67 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.67 0 0))) ((bruijn ##kk.21 24 1) (bruijn ##k.382 5 0) 'unsigned-long-long) ((bruijn ##k.382 5 0) #f)) ((bruijn ##k.382 5 0) #f)) ((bruijn ##k.382 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.66 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.66 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k166) (##inline ##sys.cdr (bruijn ##expr.66 0 0))) ((bruijn ##k.382 4 0) #f)) ((bruijn ##k.382 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(true),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k166, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.65 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.65 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k165) (##inline ##sys.cdr (bruijn ##expr.65 0 0))) ((bruijn ##k.382 3 0) #f)) ((bruijn ##k.382 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k165, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.64 0 0)) (if (##inline ##sys.eq? 2 (##inline ##sys.car (bruijn ##expr.64 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k164) (##inline ##sys.cdr (bruijn ##expr.64 0 0))) ((bruijn ##k.382 2 0) #f)) ((bruijn ##k.382 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeInt(2l),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k164, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.383 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k163) (##inline ##sys.cdr (bruijn ##expr.63 2 0))) ((bruijn ##k.382 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k163, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.63 1 0)) ((bruijn equal? 24 39) (close _V0vanity_V0compiler_V0ffi_V20_k162) 'int (##inline ##sys.car (bruijn ##expr.63 1 0))) ((bruijn ##k.382 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 24-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k162, env)}),
      _V0int,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k173, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.72 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.72 0 0))) ((bruijn ##kk.21 26 1) (bruijn ##k.366 5 0) 'short) ((bruijn ##k.366 5 0) #f)) ((bruijn ##k.366 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.71 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.71 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k173) (##inline ##sys.cdr (bruijn ##expr.71 0 0))) ((bruijn ##k.366 4 0) #f)) ((bruijn ##k.366 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k173, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.70 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.70 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k172) (##inline ##sys.cdr (bruijn ##expr.70 0 0))) ((bruijn ##k.366 3 0) #f)) ((bruijn ##k.366 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(true),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k172, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.69 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k171) (##inline ##sys.cdr (bruijn ##expr.69 0 0))) ((bruijn ##k.366 2 0) #f)) ((bruijn ##k.366 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeInt(0l),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k171, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.367 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k170) (##inline ##sys.cdr (bruijn ##expr.68 2 0))) ((bruijn ##k.366 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k170, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.68 1 0)) ((bruijn equal? 26 39) (close _V0vanity_V0compiler_V0ffi_V20_k169) 'int (##inline ##sys.car (bruijn ##expr.68 1 0))) ((bruijn ##k.366 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 26-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k169, env)}),
      _V0int,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k180, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.77 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.77 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.77 0 0))) ((bruijn ##kk.21 28 1) (bruijn ##k.348 5 0) 'unsigned-short) ((bruijn ##k.348 5 0) #f)) ((bruijn ##k.348 5 0) #f)) ((bruijn ##k.348 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.76 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k180) (##inline ##sys.cdr (bruijn ##expr.76 0 0))) ((bruijn ##k.348 4 0) #f)) ((bruijn ##k.348 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(true),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k180, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.75 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.75 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k179) (##inline ##sys.cdr (bruijn ##expr.75 0 0))) ((bruijn ##k.348 3 0) #f)) ((bruijn ##k.348 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(true),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k179, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.74 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.74 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k178) (##inline ##sys.cdr (bruijn ##expr.74 0 0))) ((bruijn ##k.348 2 0) #f)) ((bruijn ##k.348 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeInt(0l),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k178, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.349 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k177) (##inline ##sys.cdr (bruijn ##expr.73 2 0))) ((bruijn ##k.348 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k177, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.73 1 0)) ((bruijn equal? 28 39) (close _V0vanity_V0compiler_V0ffi_V20_k176) 'int (##inline ##sys.car (bruijn ##expr.73 1 0))) ((bruijn ##k.348 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 28-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k176, env)}),
      _V0int,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k190, runtime, upenv, 1, argc, _var0) {
  // ((bruijn equal? 38 39) (bruijn ##k.340 1 0) (bruijn ##x.341 0 0) (##string ##string.1066))
V_CALL(VGetArg(upenv, 38-1, 39), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V10string_D1066.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.339 1 0) ((bruijn car 37 33) (close _V0vanity_V0compiler_V0ffi_V20_k190) (bruijn special 6 0)) ((bruijn ##k.340 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 37-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k190, env)}),
      VGetArg(upenv, 6-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k193, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##x.83 0 0) ((bruijn ##k.338 1 0) (bruijn ##x.83 0 0)) ((bruijn ##k.338 1 0) (bruijn special 8 0)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
V_CALL(upenv->vars[0], runtime,
      VGetArg(upenv, 8-1, 0));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.337 1 0) ((bruijn ##k.338 0 0) 'unsigned-int) ((bruijn find-typedef 37 1) (close _V0vanity_V0compiler_V0ffi_V20_k193) (bruijn special 7 0) (bruijn table 36 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      _V0unsigned__int);
} else {
V_CALL(VGetArg(upenv, 37-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k193, env)}),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 36-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k194, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.21 33 1) (bruijn ##k.326 8 0) (bruijn ##x.336 0 0))
V_CALL(VGetArg(upenv, 33-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k192) (close _V0vanity_V0compiler_V0ffi_V20_k194))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k192, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k194, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k189) (close _V0vanity_V0compiler_V0ffi_V20_k191))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k189, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k191, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.82 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.82 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.82 0 0))) ((bruijn pair? 35 34) (close _V0vanity_V0compiler_V0ffi_V20_k188) (bruijn special 4 0)) ((bruijn ##k.326 5 0) #f)) ((bruijn ##k.326 5 0) #f)) ((bruijn ##k.326 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 35-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k188, env)}),
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
static void _V0vanity_V0compiler_V0ffi_V20_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.81 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.81 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k187) (##inline ##sys.cdr (bruijn ##expr.81 0 0))) ((bruijn ##k.326 4 0) #f)) ((bruijn ##k.326 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k187, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.80 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.80 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k186) (##inline ##sys.cdr (bruijn ##expr.80 0 0))) ((bruijn ##k.326 3 0) #f)) ((bruijn ##k.326 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeBool(false),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k186, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.79 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.79 0 0))) ((close _V0vanity_V0compiler_V0ffi_V20_k185) (##inline ##sys.cdr (bruijn ##expr.79 0 0))) ((bruijn ##k.326 2 0) #f)) ((bruijn ##k.326 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineEq(
        VEncodeInt(0l),
        VInlineCar(
        _var0)))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k185, env, runtime,
      VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k184) (##inline ##sys.cdr (bruijn ##expr.78 2 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k184, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.78 1 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k183) (##inline ##sys.car (bruijn ##expr.78 1 0))) ((bruijn ##k.326 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k183, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k197, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.21 27 1) (bruijn ##k.305 27 0) (bruijn ##x.318 0 0))
V_CALL(VGetArg(upenv, 27-1, 1), runtime,
      VGetArg(upenv, 27-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 31 23) (close _V0vanity_V0compiler_V0ffi_V20_k197) (##string ##string.1067) (bruijn ##x.319 0 0))
V_CALL(VGetArg(upenv, 31-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k197, env)}),
      VEncodePointer(&_V10string_D1067.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 30 3) (close _V0vanity_V0compiler_V0ffi_V20_k196) (bruijn list 30 2) (bruijn args 26 1) (##inline ##sys.qcons 'special (##inline ##sys.qcons 'longs (##inline ##sys.qcons 'short (##inline ##sys.qcons 'unsigned (##inline ##sys.qcons 'signed '()))))))
V_CALL(VGetArg(upenv, 30-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k196, env)}),
      VGetArg(upenv, 30-1, 2),
      VGetArg(upenv, 26-1, 1),
      VInlineCons(
        _V0special,
        VInlineCons(
        _V0longs,
        VInlineCons(
        _V0short,
        VInlineCons(
        _V0unsigned,
        VInlineCons(
        _V0signed,
        VNULL))))));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda38" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k182) (close _V0vanity_V0compiler_V0ffi_V20_k195))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k182, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k195, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda38) (bruijn ##input.22 22 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda38, env, runtime,
      VGetArg(upenv, 22-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda37" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k175) (close _V0vanity_V0compiler_V0ffi_V20_k181))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k175, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k181, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda37) (bruijn ##input.22 20 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda37, env, runtime,
      VGetArg(upenv, 20-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda36" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k168) (close _V0vanity_V0compiler_V0ffi_V20_k174))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k168, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k174, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda36) (bruijn ##input.22 18 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda36, env, runtime,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda35" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k161) (close _V0vanity_V0compiler_V0ffi_V20_k167))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k161, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k167, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda35) (bruijn ##input.22 16 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda35, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda34" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k154) (close _V0vanity_V0compiler_V0ffi_V20_k160))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k154, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k160, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda34) (bruijn ##input.22 14 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda34, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda33" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k147) (close _V0vanity_V0compiler_V0ffi_V20_k153))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k147, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k153, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda33) (bruijn ##input.22 12 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda33, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k140) (close _V0vanity_V0compiler_V0ffi_V20_k146))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k140, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k146, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda32) (bruijn ##input.22 10 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda32, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda31" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k133) (close _V0vanity_V0compiler_V0ffi_V20_k139))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k133, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k139, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda31) (bruijn ##input.22 8 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda31, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k126) (close _V0vanity_V0compiler_V0ffi_V20_k132))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k126, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k132, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda30) (bruijn ##input.22 6 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda30, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda29" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k119) (close _V0vanity_V0compiler_V0ffi_V20_k125))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k119, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k125, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda29) (bruijn ##input.22 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda29, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda28" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k112) (close _V0vanity_V0compiler_V0ffi_V20_k118))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k112, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k118, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda28) (bruijn ##input.22 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda28, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda27" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k105) (close _V0vanity_V0compiler_V0ffi_V20_k111))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k105, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k111, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda26" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda27) (bruijn ##input.22 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda27, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda26) (bruijn args 1 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda26, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda24, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda24, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn call/cc 4 37) (bruijn ##k.304 0 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda25))
V_CALL(upenv->up->up->up->vars[37], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda25, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda39, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda39, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn const? 0 1) ((bruijn list 4 2) (bruijn ##k.537 0 0) 'const (bruijn type 0 2)) ((bruijn ##k.537 0 0) (bruijn type 0 2)))
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
static void _V0vanity_V0compiler_V0ffi_V20_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k198, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.539 0 0) ((bruijn string->symbol 5 4) (bruijn ##k.538 1 0) (bruijn x 1 1)) ((bruijn ##k.538 1 0) (bruijn x 1 1)))
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
static void _V0vanity_V0compiler_V0ffi_V20_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda40, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string? 4 22) (close _V0vanity_V0compiler_V0ffi_V20_k198) (bruijn x 0 1))
V_CALL(upenv->up->up->up->vars[22], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k198, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k200, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn special 2 3) ((bruijn ##k.544 0 0) (bruijn special 2 3)) ((bruijn ##k.544 0 0) 'int))
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
static void _V0vanity_V0compiler_V0ffi_V20_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k202, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append-const 5 1) (bruijn ##k.540 3 0) (bruijn const 3 4) (bruijn ##x.542 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[4],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn decide 4 0) (close _V0vanity_V0compiler_V0ffi_V20_k202) (bruijn ##x.543 0 0) (bruijn longs 2 5) (bruijn short 2 6) (bruijn unsigned 2 7) (bruijn signed 2 8))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k202, env)}),
      _var0,
      upenv->up->vars[5],
      upenv->up->vars[6],
      upenv->up->vars[7],
      upenv->up->vars[8]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k205, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.540 4 0) (bruijn ##x.546 0 0) (bruijn storage 4 2) (bruijn special 4 3) #t (bruijn longs 4 5) (bruijn short 4 6) (bruijn unsigned 4 7) (bruijn signed 4 8))
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
static void _V0vanity_V0compiler_V0ffi_V20_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k207, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.575 1 0) ((bruijn ##k.576 0 0) (bruijn ##p.575 1 0)) ((bruijn eqv? 10 30) (bruijn ##k.576 0 0) (bruijn ##x.20 3 0) 'volatile))
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
static void _V0vanity_V0compiler_V0ffi_V20_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k209, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.540 6 0) (bruijn ##x.548 0 0) (bruijn storage 6 2) (bruijn special 6 3) (bruijn const 6 4) (bruijn longs 6 5) (bruijn short 6 6) (bruijn unsigned 6 7) (bruijn signed 6 8))
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
static void _V0vanity_V0compiler_V0ffi_V20_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k214, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.574 0 0) ((bruijn ##k.571 3 0) (bruijn ##p.574 0 0)) ((bruijn eqv? 15 30) (bruijn ##k.571 3 0) (bruijn ##x.20 8 0) 'auto))
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
static void _V0vanity_V0compiler_V0ffi_V20_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.573 0 0) ((bruijn ##k.571 2 0) (bruijn ##p.573 0 0)) ((bruijn eqv? 14 30) (close _V0vanity_V0compiler_V0ffi_V20_k214) (bruijn ##x.20 7 0) 'register))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 14-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k214, env)}),
      VGetArg(upenv, 7-1, 0),
      _V0register);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.572 0 0) ((bruijn ##k.571 1 0) (bruijn ##p.572 0 0)) ((bruijn eqv? 13 30) (close _V0vanity_V0compiler_V0ffi_V20_k213) (bruijn ##x.20 6 0) 'typedef))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 13-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k213, env)}),
      VGetArg(upenv, 6-1, 0),
      _V0typedef);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.570 1 0) ((bruijn ##k.571 0 0) (bruijn ##p.570 1 0)) ((bruijn eqv? 12 30) (close _V0vanity_V0compiler_V0ffi_V20_k212) (bruijn ##x.20 5 0) 'extern))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 12-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k212, env)}),
      VGetArg(upenv, 5-1, 0),
      _V0extern);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k217, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.556 1 0) ((bruijn compiler-error 14 23) (bruijn ##k.557 0 0) (##string ##string.1068)) ((bruijn car 14 33) (bruijn ##k.557 0 0) (bruijn t 9 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 14-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1068.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 14-1, 33), runtime,
      _var0,
      VGetArg(upenv, 9-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k220, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 16 23) (bruijn ##k.554 1 0) (##string ##string.1069) (bruijn storage 11 2) (bruijn ##x.555 0 0))
V_CALL(VGetArg(upenv, 16-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1069.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 2),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn storage 10 2) ((bruijn car 15 33) (close _V0vanity_V0compiler_V0ffi_V20_k220) (bruijn t 10 1)) ((bruijn ##k.554 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 10-1, 2))) {
V_CALL(VGetArg(upenv, 15-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k220, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k223, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 13 0) (bruijn ##k.540 12 0) (bruijn ##x.552 1 0) (bruijn ##x.553 0 0) (bruijn special 12 3) (bruijn const 12 4) (bruijn longs 12 5) (bruijn short 12 6) (bruijn unsigned 12 7) (bruijn signed 12 8))
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
static void _V0vanity_V0compiler_V0ffi_V20_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 16 33) (close _V0vanity_V0compiler_V0ffi_V20_k223) (bruijn t 11 1))
V_CALL(VGetArg(upenv, 16-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k223, env)}),
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 15 31) (close _V0vanity_V0compiler_V0ffi_V20_k222) (bruijn t 10 1))
V_CALL(VGetArg(upenv, 15-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k222, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k219) (close _V0vanity_V0compiler_V0ffi_V20_k221))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k219, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k221, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k217) (close _V0vanity_V0compiler_V0ffi_V20_k218))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k217, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k218, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k226, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 11 0) (bruijn ##k.540 10 0) (bruijn ##x.559 1 0) (bruijn storage 10 2) (bruijn special 10 3) (bruijn const 10 4) (bruijn ##x.560 0 0) (bruijn short 10 6) (bruijn unsigned 10 7) (bruijn signed 10 8))
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
static void _V0vanity_V0compiler_V0ffi_V20_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 14 35) (close _V0vanity_V0compiler_V0ffi_V20_k226) (bruijn longs 9 5) 1)
V_CALL(VGetArg(upenv, 14-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k226, env)}),
      VGetArg(upenv, 9-1, 5),
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k228, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 11 0) (bruijn ##k.540 10 0) (bruijn ##x.562 0 0) (bruijn storage 10 2) (bruijn special 10 3) (bruijn const 10 4) (bruijn longs 10 5) #t (bruijn unsigned 10 7) (bruijn signed 10 8))
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
static void _V0vanity_V0compiler_V0ffi_V20_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k230, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 12 0) (bruijn ##k.540 11 0) (bruijn ##x.564 0 0) (bruijn storage 11 2) (bruijn special 11 3) (bruijn const 11 4) (bruijn longs 11 5) (bruijn short 11 6) #t (bruijn signed 11 8))
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
static void _V0vanity_V0compiler_V0ffi_V20_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k232, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 13 0) (bruijn ##k.540 12 0) (bruijn ##x.566 0 0) (bruijn storage 12 2) (bruijn special 12 3) (bruijn const 12 4) (bruijn longs 12 5) (bruijn short 12 6) (bruijn unsigned 12 7) #t)
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
static void _V0vanity_V0compiler_V0ffi_V20_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k233, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 17 23) (bruijn ##k.540 12 0) (##string ##string.1070) (bruijn ##x.567 0 0) (bruijn special 12 3))
V_CALL(VGetArg(upenv, 17-1, 23), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V10string_D1070.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 12-1, 3));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k235, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 14 0) (bruijn ##k.540 13 0) (bruijn ##x.568 1 0) (bruijn storage 13 2) (bruijn ##x.569 0 0) (bruijn const 13 4) (bruijn longs 13 5) (bruijn short 13 6) (bruijn unsigned 13 7) (bruijn signed 13 8))
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
static void _V0vanity_V0compiler_V0ffi_V20_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 17 33) (close _V0vanity_V0compiler_V0ffi_V20_k235) (bruijn t 12 1))
V_CALL(VGetArg(upenv, 17-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k235, env)}),
      VGetArg(upenv, 12-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.565 0 0) ((bruijn cdr 16 31) (close _V0vanity_V0compiler_V0ffi_V20_k232) (bruijn t 11 1)) (if (bruijn special 11 3) ((bruijn car 16 33) (close _V0vanity_V0compiler_V0ffi_V20_k233) (bruijn t 11 1)) ((bruijn cdr 16 31) (close _V0vanity_V0compiler_V0ffi_V20_k234) (bruijn t 11 1))))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k232, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
if(VDecodeBool(
VGetArg(upenv, 11-1, 3))) {
V_CALL(VGetArg(upenv, 16-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k233, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
V_CALL(VGetArg(upenv, 16-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k234, env)}),
      VGetArg(upenv, 11-1, 1));
}
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.563 0 0) ((bruijn cdr 15 31) (close _V0vanity_V0compiler_V0ffi_V20_k230) (bruijn t 10 1)) ((bruijn eqv? 15 30) (close _V0vanity_V0compiler_V0ffi_V20_k231) (bruijn ##x.20 8 0) 'signed))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k230, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
V_CALL(VGetArg(upenv, 15-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k231, env)}),
      VGetArg(upenv, 8-1, 0),
      _V0signed);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.561 0 0) ((bruijn cdr 14 31) (close _V0vanity_V0compiler_V0ffi_V20_k228) (bruijn t 9 1)) ((bruijn eqv? 14 30) (close _V0vanity_V0compiler_V0ffi_V20_k229) (bruijn ##x.20 7 0) 'unsigned))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k228, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
V_CALL(VGetArg(upenv, 14-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k229, env)}),
      VGetArg(upenv, 7-1, 0),
      _V0unsigned);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.558 0 0) ((bruijn cdr 13 31) (close _V0vanity_V0compiler_V0ffi_V20_k225) (bruijn t 8 1)) ((bruijn eqv? 13 30) (close _V0vanity_V0compiler_V0ffi_V20_k227) (bruijn ##x.20 6 0) 'short))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k225, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
V_CALL(VGetArg(upenv, 13-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k227, env)}),
      VGetArg(upenv, 6-1, 0),
      _V0short);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.549 0 0) ((bruijn not 12 21) (close _V0vanity_V0compiler_V0ffi_V20_k216) (bruijn storage-declaration? 10 3)) ((bruijn eqv? 12 30) (close _V0vanity_V0compiler_V0ffi_V20_k224) (bruijn ##x.20 5 0) 'long))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k216, env)}),
      VGetArg(upenv, 10-1, 3));
} else {
V_CALL(VGetArg(upenv, 12-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k224, env)}),
      VGetArg(upenv, 5-1, 0),
      _V0long);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k211) (close _V0vanity_V0compiler_V0ffi_V20_k215))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k211, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k215, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.547 0 0) ((bruijn cdr 10 31) (close _V0vanity_V0compiler_V0ffi_V20_k209) (bruijn t 5 1)) ((bruijn eqv? 10 30) (close _V0vanity_V0compiler_V0ffi_V20_k210) (bruijn ##x.20 3 0) 'static))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k209, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
V_CALL(VGetArg(upenv, 10-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k210, env)}),
      upenv->up->up->vars[0],
      _V0static);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k207) (close _V0vanity_V0compiler_V0ffi_V20_k208))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k207, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k208, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.545 0 0) ((bruijn cdr 8 31) (close _V0vanity_V0compiler_V0ffi_V20_k205) (bruijn t 3 1)) ((bruijn eqv? 8 30) (close _V0vanity_V0compiler_V0ffi_V20_k206) (bruijn ##x.20 1 0) 'restrict))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k205, env)}),
      upenv->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 8-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k206, env)}),
      upenv->vars[0],
      _V0restrict);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 7 30) (close _V0vanity_V0compiler_V0ffi_V20_k204) (bruijn ##x.20 0 0) 'const)
V_CALL(VGetArg(upenv, 7-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k204, env)}),
      _var0,
      _V0const);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.541 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k200) (close _V0vanity_V0compiler_V0ffi_V20_k201)) ((bruijn car 6 33) (close _V0vanity_V0compiler_V0ffi_V20_k203) (bruijn t 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k200, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k201, env)}));
} else {
V_CALL(VGetArg(upenv, 6-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k203, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 9) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda41, got ~D~N"
  "-- expected 9~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda41, runtime, upenv, 9, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8) {
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
  // ((bruijn null? 5 14) (close _V0vanity_V0compiler_V0ffi_V20_k199) (bruijn t 0 1))
V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k199, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k236, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.303 3 0) (bruijn ##x.577 0 0) #f #f #f 0 #f #f #f)
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
static void _V0vanity_V0compiler_V0ffi_V20_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda23, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda23, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 3 ((close _V0vanity_V0compiler_V0ffi_V20_lambda24) (close _V0vanity_V0compiler_V0ffi_V20_lambda39) (close _V0vanity_V0compiler_V0ffi_V20_lambda40)) (letrec 1 ((close _V0vanity_V0compiler_V0ffi_V20_lambda41)) ((bruijn map 4 3) (close _V0vanity_V0compiler_V0ffi_V20_k236) (bruijn maybe-string->symbol 1 2) (bruijn t 2 1))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda24, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda39, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda40, env)});
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda41, env)});
V_CALL(upenv->up->up->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k236, env)}),
      upenv->vars[2],
      upenv->up->vars[1]);
    }
    }
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k245, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.593 1 0) ((bruijn compiler-error 13 23) (bruijn ##k.594 0 0) (##string ##string.1071) (bruijn expr 10 0)) ((bruijn ##k.594 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 13-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1071.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k247, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.84 10 1) (bruijn ##k.583 8 0) (##inline ##sys.cons 'typedef (##inline ##sys.cons (bruijn ##x.591 0 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.87 6 0)) '()))))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VInlineCons(
        _V0typedef,
        VInlineCons(
        _var0,
        VInlineCons(
        VInlineCar(
        VGetArg(upenv, 6-1, 0)),
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string->symbol 13 4) (close _V0vanity_V0compiler_V0ffi_V20_k247) (bruijn name 3 0))
V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k247, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k245) (close _V0vanity_V0compiler_V0ffi_V20_k246))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k245, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k246, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 11 21) (close _V0vanity_V0compiler_V0ffi_V20_k244) (bruijn ##x.595 0 0))
V_CALL(VGetArg(upenv, 11-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k244, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.88 1 0))) ((bruijn string? 10 22) (close _V0vanity_V0compiler_V0ffi_V20_k243) (bruijn name 0 0)) ((bruijn ##k.583 4 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 10-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k243, env)}),
      _var0);
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.88 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k242) (##inline ##sys.car (bruijn ##expr.88 0 0))) ((bruijn ##k.583 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k242, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.87 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k241) (##inline ##sys.cdr (bruijn ##expr.87 0 0))) ((bruijn ##k.583 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k241, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.584 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k240) (##inline ##sys.cdr (bruijn ##expr.86 2 0))) ((bruijn ##k.583 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k240, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.86 1 0)) ((bruijn equal? 6 39) (close _V0vanity_V0compiler_V0ffi_V20_k239) 'variable (##inline ##sys.car (bruijn ##expr.86 1 0))) ((bruijn ##k.583 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 6-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k239, env)}),
      _V0variable,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k249, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.84 3 1) (bruijn ##k.579 3 0) (bruijn ##x.581 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 6 23) (close _V0vanity_V0compiler_V0ffi_V20_k249) (##string ##string.1072) (bruijn expr 3 0))
V_CALL(VGetArg(upenv, 6-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k249, env)}),
      VEncodePointer(&_V10string_D1072.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda44" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k238) (close _V0vanity_V0compiler_V0ffi_V20_k248))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k238, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k248, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda44) (bruijn expr 1 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda44, env, runtime,
      upenv->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 3 37) (bruijn ##k.578 1 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda43))
V_CALL(upenv->up->up->vars[37], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda43, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda42, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda42, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn reduce-declare 1 0) (close _V0vanity_V0compiler_V0ffi_V20_k237) (bruijn ret 0 1) (bruijn decl 0 2) (bruijn table 0 3))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k237, env)}),
      _var1,
      _var2,
      _var3);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k260, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.620 1 0) ((bruijn compiler-error 15 23) (bruijn ##k.621 0 0) (##string ##string.1073) (bruijn expr 12 0)) ((bruijn ##k.621 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 15-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1073.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k264, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.617 1 0) ((bruijn compiler-error 18 23) (bruijn ##k.618 0 0) (##string ##string.1074) (bruijn expr 15 0)) ((bruijn ##k.618 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 18-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1074.sym, VPOINTER_OTHER),
      VGetArg(upenv, 15-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k267, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 16 1) (bruijn ##k.603 14 0) (##inline ##sys.cons 'function (##inline ##sys.cons (bruijn ##x.612 0 0) (##inline ##sys.cons (bruijn ret 9 0) (bruijn args 8 0)))))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      VInlineCons(
        _V0function,
        VInlineCons(
        _var0,
        VInlineCons(
        VGetArg(upenv, 9-1, 0),
        VGetArg(upenv, 8-1, 0)))));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string->symbol 19 4) (close _V0vanity_V0compiler_V0ffi_V20_k267) (bruijn name 10 0))
V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k267, env)}),
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k269, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.615 0 0) ((bruijn compiler-error 21 23) (bruijn ##k.614 2 0) (##string ##string.1075) (bruijn name 12 0) (bruijn arg 2 1)) ((bruijn ##k.614 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 23), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1075.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 0),
      upenv->up->vars[1]);
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 20 21) (close _V0vanity_V0compiler_V0ffi_V20_k269) (bruijn ##x.616 0 0))
V_CALL(VGetArg(upenv, 20-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k269, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn get-decoder 18 15) (close _V0vanity_V0compiler_V0ffi_V20_k268) (bruijn arg 0 1))
V_CALL(VGetArg(upenv, 18-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k268, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 18 32) (close _V0vanity_V0compiler_V0ffi_V20_k266) (close _V0vanity_V0compiler_V0ffi_V20_lambda48) (bruijn args 6 0))
V_CALL(VGetArg(upenv, 18-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k266, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda48, env)}),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k264) (close _V0vanity_V0compiler_V0ffi_V20_k265))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k264, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k265, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 16 21) (close _V0vanity_V0compiler_V0ffi_V20_k263) (bruijn ##x.619 0 0))
V_CALL(VGetArg(upenv, 16-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k263, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string? 15 22) (close _V0vanity_V0compiler_V0ffi_V20_k262) (bruijn name 6 0))
V_CALL(VGetArg(upenv, 15-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k262, env)}),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k260) (close _V0vanity_V0compiler_V0ffi_V20_k261))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k260, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k261, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 13 21) (close _V0vanity_V0compiler_V0ffi_V20_k259) (bruijn ##x.622 0 0))
V_CALL(VGetArg(upenv, 13-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k259, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn get-encoder 11 14) (close _V0vanity_V0compiler_V0ffi_V20_k258) (bruijn ret 1 0))
V_CALL(VGetArg(upenv, 11-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k258, env)}),
      upenv->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k257) (##inline ##sys.cdr (bruijn ##expr.93 1 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k257, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.93 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k256) (##inline ##sys.car (bruijn ##expr.93 0 0))) ((bruijn ##k.603 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k256, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k255) (##inline ##sys.cdr (bruijn ##expr.92 1 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k255, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k254) (##inline ##sys.car (bruijn ##expr.92 0 0))) ((bruijn ##k.603 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k254, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.604 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k253) (##inline ##sys.cdr (bruijn ##expr.91 2 0))) ((bruijn ##k.603 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k253, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.91 1 0)) ((bruijn equal? 6 39) (close _V0vanity_V0compiler_V0ffi_V20_k252) 'function (##inline ##sys.car (bruijn ##expr.91 1 0))) ((bruijn ##k.603 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 6-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k252, env)}),
      _V0function,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k271, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 3 1) (bruijn ##k.599 3 0) (bruijn ##x.601 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 6 23) (close _V0vanity_V0compiler_V0ffi_V20_k271) (##string ##string.1076) (bruijn expr 3 0))
V_CALL(VGetArg(upenv, 6-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k271, env)}),
      VEncodePointer(&_V10string_D1076.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda47" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k251) (close _V0vanity_V0compiler_V0ffi_V20_k270))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k251, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k270, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda47) (bruijn expr 1 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda47, env, runtime,
      upenv->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 3 37) (bruijn ##k.598 1 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda46))
V_CALL(upenv->up->up->vars[37], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda46, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda45, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda45, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn reduce-declare 1 0) (close _V0vanity_V0compiler_V0ffi_V20_k250) (bruijn ret 0 1) (bruijn decl 0 2) (bruijn table 0 3))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k250, env)}),
      _var1,
      _var2,
      _var3);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k274, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.635 1 0) ((bruijn cadar 7 8) (bruijn ##k.636 0 0) (bruijn enums 3 1)) ((bruijn ##k.636 0 0) (bruijn val 3 2)))
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
static void _V0vanity_V0compiler_V0ffi_V20_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k280, runtime, upenv, 1, argc, _var0) {
  // ((bruijn unwrap-enums-iter 9 0) (bruijn ##k.625 8 0) (bruijn ##x.627 4 0) (bruijn ##x.628 3 0) (bruijn ##x.629 0 0))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 11 19) (close _V0vanity_V0compiler_V0ffi_V20_k280) (##inline ##sys.cons 'enum (##inline ##sys.cons (bruijn ##x.632 0 0) (##inline ##sys.cons (bruijn val 4 0) '()))) (bruijn table 7 3))
V_CALL(VGetArg(upenv, 11-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k280, env)}),
      VInlineCons(
        _V0enum,
        VInlineCons(
        _var0,
        VInlineCons(
        upenv->up->up->up->vars[0],
        VNULL))),
      VGetArg(upenv, 7-1, 3));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string->symbol 10 4) (close _V0vanity_V0compiler_V0ffi_V20_k279) (bruijn ##x.634 0 0))
V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k279, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn caar 9 5) (close _V0vanity_V0compiler_V0ffi_V20_k278) (bruijn enums 5 1))
V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k278, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 8 35) (close _V0vanity_V0compiler_V0ffi_V20_k277) (bruijn val 1 0) 1)
V_CALL(VGetArg(upenv, 8-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k277, env)}),
      upenv->vars[0],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 7 31) (close _V0vanity_V0compiler_V0ffi_V20_k276) (bruijn enums 3 1))
V_CALL(VGetArg(upenv, 7-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k276, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k274) (close _V0vanity_V0compiler_V0ffi_V20_k275))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k274, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k275, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.626 0 0) ((bruijn ##k.625 1 0) (bruijn table 1 3)) ((bruijn cadar 5 8) (close _V0vanity_V0compiler_V0ffi_V20_k273) (bruijn enums 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[3]);
} else {
V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k273, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda50, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda50, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 4 14) (close _V0vanity_V0compiler_V0ffi_V20_k272) (bruijn enums 0 1))
V_CALL(upenv->up->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k272, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k285, runtime, upenv, 1, argc, _var0) {
  // ((bruijn equal? 10 39) (bruijn ##k.642 1 0) (bruijn ##x.643 0 0) (##string ##string.1066))
V_CALL(VGetArg(upenv, 10-1, 39), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V10string_D1066.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.641 1 0) ((bruijn caar 9 5) (close _V0vanity_V0compiler_V0ffi_V20_k285) (bruijn ret 4 1)) ((bruijn ##k.642 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k285, env)}),
      upenv->up->up->up->vars[1]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k287, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn enums 0 0) ((bruijn unwrap-enums-iter 7 0) (bruijn ##k.637 5 0) (bruijn enums 0 0) 0 (bruijn table 8 2)) ((bruijn ##k.637 5 0) (bruijn table 8 2)))
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
static void _V0vanity_V0compiler_V0ffi_V20_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k288, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.637 5 0) (bruijn ##x.640 0 0))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.639 0 0) ((bruijn caddar 9 6) (close _V0vanity_V0compiler_V0ffi_V20_k287) (bruijn ret 4 1)) ((bruijn cdr 9 31) (close _V0vanity_V0compiler_V0ffi_V20_k288) (bruijn ret 4 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k287, env)}),
      upenv->up->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 9-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k288, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k284) (close _V0vanity_V0compiler_V0ffi_V20_k286))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k284, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k286, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pair? 7 34) (close _V0vanity_V0compiler_V0ffi_V20_k283) (bruijn ##x.644 0 0))
V_CALL(VGetArg(upenv, 7-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k283, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.638 0 0) ((bruijn ##k.637 1 0) (bruijn table 4 2)) ((bruijn car 6 33) (close _V0vanity_V0compiler_V0ffi_V20_k282) (bruijn ret 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->up->up->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 6-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k282, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 5 14) (close _V0vanity_V0compiler_V0ffi_V20_k281) (bruijn ret 0 1))
V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k281, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda49, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda49, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0vanity_V0compiler_V0ffi_V20_lambda50)) (letrec 1 ((close _V0vanity_V0compiler_V0ffi_V20_lambda51)) ((bruijn loop 0 0) (bruijn ##k.624 2 0) (bruijn ret 2 1))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda50, env)});
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda51, env)});
V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1]);
    }
    }
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k291, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.682 1 0) (##sys.blob=? (bruijn ##k.683 0 0) (##string ##string.1077) (##inline ##sys.car (bruijn ##expr.96 3 0))) ((bruijn ##k.683 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1077.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->up->up->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k292, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.679 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.96 3 0))) ((bruijn ##kk.94 5 1) (bruijn ##k.678 2 0) (bruijn table 6 2)) ((bruijn ##k.678 2 0) #f)) ((bruijn ##k.678 2 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
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
static void _V0vanity_V0compiler_V0ffi_V20_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k291) (close _V0vanity_V0compiler_V0ffi_V20_k292))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k291, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k292, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.96 1 0)) (##sys.string? (close _V0vanity_V0compiler_V0ffi_V20_k290) (##inline ##sys.car (bruijn ##expr.96 1 0))) ((bruijn ##k.678 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k290, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k296, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.673 1 0) (##sys.blob=? (bruijn ##k.674 0 0) (##string ##string.1077) (##inline ##sys.car (bruijn ##expr.97 3 0))) ((bruijn ##k.674 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1077.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->up->up->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k301, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.669 1 0) (##sys.blob=? (bruijn ##k.670 0 0) (##string ##string.1078) (##inline ##sys.car (bruijn ##expr.99 2 0))) ((bruijn ##k.670 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1078.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->up->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k311, runtime, upenv, 1, argc, _var0) {
  // ((bruijn unwrap-typedef 25 3) (bruijn ##k.666 1 0) (bruijn ret 6 2) (bruijn ##x.667 0 0) (bruijn table 4 2))
V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      upenv->vars[0],
      VGetArg(upenv, 6-1, 2),
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k312, runtime, upenv, 1, argc, _var0) {
  // ((bruijn unwrap-function 25 4) (bruijn ##k.666 1 0) (bruijn ret 6 2) (bruijn ##x.668 0 0) (bruijn table 4 2))
V_CALL(VGetArg(upenv, 25-1, 4), runtime,
      upenv->vars[0],
      VGetArg(upenv, 6-1, 2),
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn typedef? 5 0) ((bruijn car 25 33) (close _V0vanity_V0compiler_V0ffi_V20_k311) (bruijn mydecls 3 1)) ((bruijn car 25 33) (close _V0vanity_V0compiler_V0ffi_V20_k312) (bruijn mydecls 3 1)))
if(VDecodeBool(
VGetArg(upenv, 5-1, 0))) {
V_CALL(VGetArg(upenv, 25-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k311, env)}),
      upenv->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 25-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k312, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k314, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.660 4 0) (bruijn ##x.663 2 0) (bruijn ##x.664 0 0))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 25 19) (close _V0vanity_V0compiler_V0ffi_V20_k314) (bruijn ##x.665 0 0) (bruijn table 3 2))
V_CALL(VGetArg(upenv, 25-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k314, env)}),
      _var0,
      upenv->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k310) (close _V0vanity_V0compiler_V0ffi_V20_k313))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k310, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k313, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.661 0 0) ((bruijn unwrap-declares 22 6) (bruijn ##k.660 1 0) (##inline ##sys.cons '(##string ##string.1077) (##inline ##sys.cdr (bruijn ##expr.98 12 0))) (bruijn table 1 2)) ((bruijn cdr 23 31) (close _V0vanity_V0compiler_V0ffi_V20_k309) (bruijn mydecls 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 6), runtime,
      upenv->vars[0],
      VInlineCons(
        VEncodePointer(&_V10string_D1077.sym, VPOINTER_OTHER),
        VInlineCdr(
        VGetArg(upenv, 12-1, 0))),
      upenv->vars[2]);
} else {
V_CALL(VGetArg(upenv, 23-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k309, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda58, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda58, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 22 14) (close _V0vanity_V0compiler_V0ffi_V20_k308) (bruijn mydecls 0 1))
V_CALL(VGetArg(upenv, 22-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k308, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k315, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.94 19 1) (bruijn ##k.650 14 0) (bruijn ##x.656 0 0))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda57" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda57, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0vanity_V0compiler_V0ffi_V20_lambda58)) ((bruijn loop 0 0) (close _V0vanity_V0compiler_V0ffi_V20_k315) (##inline ##sys.cdr (bruijn ##expr.100 6 0)) (bruijn table 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda58, env)});
V_CALL(env->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k315, env)}),
      VInlineCdr(
        VGetArg(upenv, 6-1, 0)),
      upenv->vars[1]);
    }
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda57) (bruijn ##x.657 2 0) (bruijn ##x.658 1 0) (bruijn ##x.659 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda57, env, runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reduce-type 17 2) (close _V0vanity_V0compiler_V0ffi_V20_k307) (bruijn ret 2 0) (bruijn table 16 2) #t)
V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k307, env)}),
      upenv->up->vars[0],
      VGetArg(upenv, 16-1, 2),
      VEncodeBool(true));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn unwrap-enums 16 5) (close _V0vanity_V0compiler_V0ffi_V20_k306) (bruijn ret 1 0) (bruijn table 15 2))
V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k306, env)}),
      upenv->vars[0],
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn member 16 7) (close _V0vanity_V0compiler_V0ffi_V20_k305) (##string ##string.1079) (bruijn ret 0 0))
V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k305, env)}),
      VEncodePointer(&_V10string_D1079.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.100 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k304) (##inline ##sys.car (bruijn ##expr.100 0 0))) ((bruijn ##k.650 7 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k304, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.654 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k303) (##inline ##sys.cdr (bruijn ##expr.99 2 0))) ((bruijn ##k.650 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k303, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k301) (close _V0vanity_V0compiler_V0ffi_V20_k302))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k301, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k302, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.99 0 0)) (##sys.string? (close _V0vanity_V0compiler_V0ffi_V20_k300) (##inline ##sys.car (bruijn ##expr.99 0 0))) ((bruijn ##k.650 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k300, env)}),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.98 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k299) (##inline ##sys.car (bruijn ##expr.98 0 0))) ((bruijn ##k.650 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k299, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.651 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k298) (##inline ##sys.cdr (bruijn ##expr.97 3 0))) ((bruijn ##k.650 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k298, env, runtime,
      VInlineCdr(
        upenv->up->up->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k296) (close _V0vanity_V0compiler_V0ffi_V20_k297))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k296, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k297, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.97 1 0)) (##sys.string? (close _V0vanity_V0compiler_V0ffi_V20_k295) (##inline ##sys.car (bruijn ##expr.97 1 0))) ((bruijn ##k.650 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k295, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k316, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 8 40) (bruijn ##k.646 5 0) (##string ##string.1064))
V_CALL(VGetArg(upenv, 8-1, 40), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1064.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda56" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k294) (close _V0vanity_V0compiler_V0ffi_V20_k316))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k294, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k316, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda56) (bruijn ##input.95 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda56, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda55" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k289) (close _V0vanity_V0compiler_V0ffi_V20_k293))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k289, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k293, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda54" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda55) (bruijn ##input.95 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda55, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda54) (bruijn parse 1 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda54, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda52, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda52, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 2 37) (bruijn ##k.645 0 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda53))
V_CALL(upenv->up->vars[37], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda53, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k321, runtime, upenv, 1, argc, _var0) {
  // ((bruijn duplicate-mismatch 6 0) (bruijn ##k.687 5 0) (bruijn x 5 1) (bruijn entry 5 2) (bruijn ##x.690 0 0) (bruijn err-proc 5 4))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 5-1, 2),
      _var0,
      VGetArg(upenv, 5-1, 4));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k325, runtime, upenv, 1, argc, _var0) {
  // ((bruijn err-proc 8 4) (bruijn ##k.687 8 0) (bruijn ##x.692 0 0))
V_CALL(VGetArg(upenv, 8-1, 4), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.691 0 0) ((bruijn car 11 33) (close _V0vanity_V0compiler_V0ffi_V20_k325) (bruijn table 7 3)) ((bruijn ##k.687 7 0) #t))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k325, env)}),
      VGetArg(upenv, 7-1, 3));
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(true));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 10 21) (close _V0vanity_V0compiler_V0ffi_V20_k324) (bruijn ##x.693 0 0))
V_CALL(VGetArg(upenv, 10-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k324, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn equal? 9 39) (close _V0vanity_V0compiler_V0ffi_V20_k323) (bruijn entry 5 2) (bruijn ##x.694 0 0))
V_CALL(VGetArg(upenv, 9-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k323, env)}),
      VGetArg(upenv, 5-1, 2),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.689 0 0) ((bruijn cdr 8 31) (close _V0vanity_V0compiler_V0ffi_V20_k321) (bruijn table 4 3)) ((bruijn car 8 33) (close _V0vanity_V0compiler_V0ffi_V20_k322) (bruijn table 4 3)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k321, env)}),
      upenv->up->up->up->vars[3]);
} else {
V_CALL(VGetArg(upenv, 8-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k322, env)}),
      upenv->up->up->up->vars[3]);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 7 21) (close _V0vanity_V0compiler_V0ffi_V20_k320) (bruijn ##x.695 0 0))
V_CALL(VGetArg(upenv, 7-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k320, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 6 30) (close _V0vanity_V0compiler_V0ffi_V20_k319) (bruijn x 2 1) (bruijn ##x.696 0 0))
V_CALL(VGetArg(upenv, 6-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k319, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.688 0 0) ((bruijn ##k.687 1 0) #f) ((bruijn cadar 5 8) (close _V0vanity_V0compiler_V0ffi_V20_k318) (bruijn table 1 3)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k318, env)}),
      upenv->vars[3]);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda60, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda60, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn null? 4 14) (close _V0vanity_V0compiler_V0ffi_V20_k317) (bruijn table 0 3))
V_CALL(upenv->up->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k317, env)}),
      _var3);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k337, runtime, upenv, 1, argc, _var0) {
  // ((bruijn table->defines 16 7) (bruijn ##k.744 1 0) (bruijn ##x.745 0 0) (bruijn acc 15 2))
V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k340, runtime, upenv, 1, argc, _var0) {
  // ((bruijn table->defines 18 7) (bruijn ##k.744 3 0) (bruijn ##x.746 2 0) (bruijn ##x.747 0 0))
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 18 19) (close _V0vanity_V0compiler_V0ffi_V20_k340) (##inline ##sys.cons 'define (##inline ##sys.cons (bruijn name 7 0) (##inline ##sys.cons (##inline ##sys.cons '##foreign.function (##inline ##sys.cons '(##string ##string.1080) (##inline ##sys.cons '(##string ##string.1081) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.105 6 0)) (##inline ##sys.cons (bruijn ##x.756 0 0) (##inline ##sys.cdr (bruijn ##expr.105 6 0))))))) '()))) (bruijn acc 16 2))
V_CALL(VGetArg(upenv, 18-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k340, env)}),
      VInlineCons(
        _V0define,
        VInlineCons(
        VGetArg(upenv, 7-1, 0),
        VInlineCons(
        VInlineCons(
        _V10foreign_Dfunction,
        VInlineCons(
        VEncodePointer(&_V10string_D1080.sym, VPOINTER_OTHER),
        VInlineCons(
        VEncodePointer(&_V10string_D1081.sym, VPOINTER_OTHER),
        VInlineCons(
        VInlineCar(
        VGetArg(upenv, 6-1, 0)),
        VInlineCons(
        _var0,
        VInlineCdr(
        VGetArg(upenv, 6-1, 0))))))),
        VNULL))),
      VGetArg(upenv, 16-1, 2));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol->string 17 9) (close _V0vanity_V0compiler_V0ffi_V20_k339) (bruijn name 6 0))
V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k339, env)}),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.743 1 0) ((bruijn cdr 16 31) (close _V0vanity_V0compiler_V0ffi_V20_k337) (bruijn table 14 1)) ((bruijn cdr 16 31) (close _V0vanity_V0compiler_V0ffi_V20_k338) (bruijn table 14 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 16-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k337, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
V_CALL(VGetArg(upenv, 16-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k338, env)}),
      VGetArg(upenv, 14-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k341" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k341, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.101 11 1) (bruijn ##k.738 8 0) (bruijn ##x.742 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k336) (close _V0vanity_V0compiler_V0ffi_V20_k341))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k336, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k341, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k342, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 16 23) (bruijn ##k.759 1 0) (##string ##string.1082) (bruijn ##x.760 0 0) (bruijn conflict 1 1))
V_CALL(VGetArg(upenv, 16-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1082.sym, VPOINTER_OTHER),
      _var0,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda63, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 15 33) (close _V0vanity_V0compiler_V0ffi_V20_k342) (bruijn table 13 1))
V_CALL(VGetArg(upenv, 15-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k342, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn duplicate-mismatch 11 0) (close _V0vanity_V0compiler_V0ffi_V20_k335) (bruijn name 3 0) (bruijn ##x.757 1 0) (bruijn ##x.758 0 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda63))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k335, env)}),
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda63, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 13 31) (close _V0vanity_V0compiler_V0ffi_V20_k334) (bruijn table 11 1))
V_CALL(VGetArg(upenv, 13-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k334, env)}),
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.105 0 0)) ((bruijn car 12 33) (close _V0vanity_V0compiler_V0ffi_V20_k333) (bruijn table 10 1)) ((bruijn ##k.738 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 12-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k333, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k332) (##inline ##sys.cdr (bruijn ##expr.104 1 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k332, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.104 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k331) (##inline ##sys.car (bruijn ##expr.104 0 0))) ((bruijn ##k.738 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k331, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.739 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k330) (##inline ##sys.cdr (bruijn ##expr.103 2 0))) ((bruijn ##k.738 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k330, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.103 1 0)) ((bruijn equal? 8 39) (close _V0vanity_V0compiler_V0ffi_V20_k329) 'function (##inline ##sys.car (bruijn ##expr.103 1 0))) ((bruijn ##k.738 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 8-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k329, env)}),
      _V0function,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k353, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.101 14 1) (bruijn ##k.720 9 0) (bruijn ##x.725 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn table->defines 17 7) (close _V0vanity_V0compiler_V0ffi_V20_k353) (bruijn ##x.727 1 0) (bruijn ##x.728 0 0))
V_CALL(VGetArg(upenv, 17-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k353, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 17 19) (close _V0vanity_V0compiler_V0ffi_V20_k352) (##inline ##sys.cons 'define (##inline ##sys.cons (bruijn name 4 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.108 3 0)) '()))) (bruijn acc 15 2))
V_CALL(VGetArg(upenv, 17-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k352, env)}),
      VInlineCons(
        _V0define,
        VInlineCons(
        upenv->up->up->up->vars[0],
        VInlineCons(
        VInlineCar(
        upenv->up->up->vars[0]),
        VNULL))),
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 16 31) (close _V0vanity_V0compiler_V0ffi_V20_k351) (bruijn table 14 1))
V_CALL(VGetArg(upenv, 16-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k351, env)}),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k354, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 17 23) (bruijn ##k.733 1 0) (##string ##string.1082) (bruijn ##x.734 0 0) (bruijn conflict 1 1))
V_CALL(VGetArg(upenv, 17-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1082.sym, VPOINTER_OTHER),
      _var0,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda65, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 16 33) (close _V0vanity_V0compiler_V0ffi_V20_k354) (bruijn table 14 1))
V_CALL(VGetArg(upenv, 16-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k354, env)}),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn duplicate-mismatch 12 0) (close _V0vanity_V0compiler_V0ffi_V20_k350) (bruijn name 2 0) #f (bruijn ##x.732 0 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda65))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k350, env)}),
      upenv->up->vars[0],
      VEncodeBool(false),
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda65, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.108 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.108 0 0))) ((bruijn cdr 14 31) (close _V0vanity_V0compiler_V0ffi_V20_k349) (bruijn table 12 1)) ((bruijn ##k.720 4 0) #f)) ((bruijn ##k.720 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 14-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k349, env)}),
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
static void _V0vanity_V0compiler_V0ffi_V20_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k348) (##inline ##sys.cdr (bruijn ##expr.107 1 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k348, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.107 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k347) (##inline ##sys.car (bruijn ##expr.107 0 0))) ((bruijn ##k.720 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k347, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.721 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k346) (##inline ##sys.cdr (bruijn ##expr.106 2 0))) ((bruijn ##k.720 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k346, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.106 1 0)) ((bruijn equal? 10 39) (close _V0vanity_V0compiler_V0ffi_V20_k345) 'enum (##inline ##sys.car (bruijn ##expr.106 1 0))) ((bruijn ##k.720 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 10-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k345, env)}),
      _V0enum,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k364, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.101 15 1) (bruijn ##k.705 8 0) (bruijn ##x.710 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn table->defines 18 7) (close _V0vanity_V0compiler_V0ffi_V20_k364) (bruijn ##x.712 0 0) (bruijn acc 17 2))
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k364, env)}),
      _var0,
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k362" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 18 31) (close _V0vanity_V0compiler_V0ffi_V20_k363) (bruijn table 16 1))
V_CALL(VGetArg(upenv, 18-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k363, env)}),
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k365, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 19 23) (bruijn ##k.715 1 0) (##string ##string.1082) (bruijn ##x.716 0 0) (bruijn conflict 1 1))
V_CALL(VGetArg(upenv, 19-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1082.sym, VPOINTER_OTHER),
      _var0,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 18 33) (close _V0vanity_V0compiler_V0ffi_V20_k365) (bruijn table 16 1))
V_CALL(VGetArg(upenv, 18-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k365, env)}),
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn duplicate-mismatch 14 0) (close _V0vanity_V0compiler_V0ffi_V20_k362) (##inline ##sys.car (bruijn ##expr.110 3 0)) (bruijn ##x.713 1 0) (bruijn ##x.714 0 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda67))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k362, env)}),
      VInlineCar(
        upenv->up->up->vars[0]),
      upenv->vars[0],
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda67, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 16 31) (close _V0vanity_V0compiler_V0ffi_V20_k361) (bruijn table 14 1))
V_CALL(VGetArg(upenv, 16-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k361, env)}),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.111 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.111 0 0))) ((bruijn car 15 33) (close _V0vanity_V0compiler_V0ffi_V20_k360) (bruijn table 13 1)) ((bruijn ##k.705 3 0) #f)) ((bruijn ##k.705 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 15-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k360, env)}),
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
static void _V0vanity_V0compiler_V0ffi_V20_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.110 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k359) (##inline ##sys.cdr (bruijn ##expr.110 0 0))) ((bruijn ##k.705 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k359, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.706 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k358) (##inline ##sys.cdr (bruijn ##expr.109 2 0))) ((bruijn ##k.705 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k358, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.109 1 0)) ((bruijn equal? 12 39) (close _V0vanity_V0compiler_V0ffi_V20_k357) 'typedef (##inline ##sys.car (bruijn ##expr.109 1 0))) ((bruijn ##k.705 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k357, env)}),
      _V0typedef,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k368, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.101 9 1) (bruijn ##k.698 9 0) (bruijn ##x.702 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k367" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 13 23) (close _V0vanity_V0compiler_V0ffi_V20_k368) (##string ##string.1083) (bruijn ##x.703 0 0))
V_CALL(VGetArg(upenv, 13-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k368, env)}),
      VEncodePointer(&_V10string_D1083.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 12 33) (close _V0vanity_V0compiler_V0ffi_V20_k367) (bruijn table 10 1))
V_CALL(VGetArg(upenv, 12-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k367, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda66" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k356) (close _V0vanity_V0compiler_V0ffi_V20_k366))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k356, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k366, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda66) (bruijn ##input.102 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda66, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda64" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k344) (close _V0vanity_V0compiler_V0ffi_V20_k355))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k344, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k355, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda64) (bruijn ##input.102 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda64, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda62" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k328) (close _V0vanity_V0compiler_V0ffi_V20_k343))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k328, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k343, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda62) (bruijn ##input.102 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda62, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 5 33) (close _V0vanity_V0compiler_V0ffi_V20_k327) (bruijn table 3 1))
V_CALL(VGetArg(upenv, 5-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k327, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.697 0 0) ((bruijn ##k.686 2 0) (bruijn acc 2 2)) ((bruijn call/cc 4 37) (bruijn ##k.686 2 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda61)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[2]);
} else {
V_CALL(upenv->up->up->up->vars[37], runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda61, env)}));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda59, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda59, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0vanity_V0compiler_V0ffi_V20_lambda60)) ((bruijn null? 3 14) (close _V0vanity_V0compiler_V0ffi_V20_k326) (bruijn table 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda60, env)});
V_CALL(upenv->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k326, env)}),
      upenv->vars[1]);
    }
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k374, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 8 19) (bruijn ##k.762 6 0) (bruijn ##x.765 2 0) (bruijn ##x.766 0 0))
V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn deep-copy 6 8) (close _V0vanity_V0compiler_V0ffi_V20_k374) (bruijn ##x.767 0 0))
V_CALL(VGetArg(upenv, 6-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k374, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 31) (close _V0vanity_V0compiler_V0ffi_V20_k373) (bruijn x 4 1))
V_CALL(VGetArg(upenv, 6-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k373, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn deep-copy 4 8) (close _V0vanity_V0compiler_V0ffi_V20_k372) (bruijn ##x.768 0 0))
V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k372, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.764 0 0) ((bruijn car 4 33) (close _V0vanity_V0compiler_V0ffi_V20_k371) (bruijn x 2 1)) ((bruijn ##k.762 2 0) (bruijn x 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k371, env)}),
      upenv->up->vars[1]);
} else {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.763 0 0) ((bruijn string-copy 3 10) (bruijn ##k.762 1 0) (bruijn x 1 1)) ((bruijn pair? 3 34) (close _V0vanity_V0compiler_V0ffi_V20_k370) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[10], runtime,
      upenv->vars[0],
      upenv->vars[1]);
} else {
V_CALL(upenv->up->up->vars[34], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k370, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda68, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda68, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string? 2 22) (close _V0vanity_V0compiler_V0ffi_V20_k369) (bruijn x 0 1))
V_CALL(upenv->up->vars[22], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k369, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k379, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.807 1 0) (##sys.blob=? (bruijn ##k.808 0 0) (##string ##string.1077) (##inline ##sys.car (bruijn ##expr.119 3 0))) ((bruijn ##k.808 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1077.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->up->up->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k384, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.803 1 0) (##sys.blob=? (bruijn ##k.804 0 0) (##string ##string.1078) (##inline ##sys.car (bruijn ##expr.121 2 0))) ((bruijn ##k.804 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1078.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->up->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k388, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.117 12 1) (bruijn ##k.791 9 0) (bruijn ##x.800 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.123 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.123 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.120 5 0))) ((bruijn cdadr 18 11) (close _V0vanity_V0compiler_V0ffi_V20_k388) (bruijn parse 12 1)) ((bruijn ##k.791 8 0) #f)) ((bruijn ##k.791 8 0) #f)) ((bruijn ##k.791 8 0) #f))
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
        VGetArg(upenv, 5-1, 0))))) {
V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k388, env)}),
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
static void _V0vanity_V0compiler_V0ffi_V20_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.122 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k387) (##inline ##sys.cdr (bruijn ##expr.122 0 0))) ((bruijn ##k.791 7 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k387, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.795 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k386) (##inline ##sys.cdr (bruijn ##expr.121 2 0))) ((bruijn ##k.791 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k386, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k384) (close _V0vanity_V0compiler_V0ffi_V20_k385))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k384, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k385, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k382" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 0)) (##sys.string? (close _V0vanity_V0compiler_V0ffi_V20_k383) (##inline ##sys.car (bruijn ##expr.121 0 0))) ((bruijn ##k.791 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k383, env)}),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.120 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k382) (##inline ##sys.car (bruijn ##expr.120 0 0))) ((bruijn ##k.791 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k382, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.792 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k381) (##inline ##sys.cdr (bruijn ##expr.119 3 0))) ((bruijn ##k.791 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k381, env, runtime,
      VInlineCdr(
        upenv->up->up->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k379) (close _V0vanity_V0compiler_V0ffi_V20_k380))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k379, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k380, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.119 1 0)) (##sys.string? (close _V0vanity_V0compiler_V0ffi_V20_k378) (##inline ##sys.car (bruijn ##expr.119 1 0))) ((bruijn ##k.791 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k378, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k392, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.786 1 0) (##sys.blob=? (bruijn ##k.787 0 0) (##string ##string.1084) (##inline ##sys.car (bruijn ##expr.124 3 0))) ((bruijn ##k.787 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1084.sym, VPOINTER_OTHER),
      VInlineCar(
        upenv->up->up->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k396" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k396, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.117 10 1) (bruijn ##k.779 5 0) (bruijn ##x.784 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.126 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.126 0 0))) ((bruijn cdr 16 31) (close _V0vanity_V0compiler_V0ffi_V20_k396) (bruijn parse 10 1)) ((bruijn ##k.779 4 0) #f)) ((bruijn ##k.779 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 16-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k396, env)}),
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
static void _V0vanity_V0compiler_V0ffi_V20_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.125 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k395) (##inline ##sys.cdr (bruijn ##expr.125 0 0))) ((bruijn ##k.779 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k395, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.780 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k394) (##inline ##sys.cdr (bruijn ##expr.124 3 0))) ((bruijn ##k.779 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k394, env, runtime,
      VInlineCdr(
        upenv->up->up->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k392) (close _V0vanity_V0compiler_V0ffi_V20_k393))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k392, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k393, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.124 1 0)) (##sys.string? (close _V0vanity_V0compiler_V0ffi_V20_k391) (##inline ##sys.car (bruijn ##expr.124 1 0))) ((bruijn ##k.779 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k391, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k398, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.117 6 1) (bruijn ##k.773 6 0) #f)
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 12 23) (close _V0vanity_V0compiler_V0ffi_V20_k398) (##string ##string.1085) (bruijn parse 6 1))
V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k398, env)}),
      VEncodePointer(&_V10string_D1085.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda74" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k390) (close _V0vanity_V0compiler_V0ffi_V20_k397))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k390, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k397, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda74) (bruijn ##input.118 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda74, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda73" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k377) (close _V0vanity_V0compiler_V0ffi_V20_k389))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k377, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k389, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda72" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda73) (bruijn ##input.118 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda73, env, runtime,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda71, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda72) (bruijn parse 1 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda72, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 6 37) (bruijn ##k.772 0 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda71))
V_CALL(VGetArg(upenv, 6-1, 37), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda71, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k407" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k407, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.835 1 0) ((bruijn compiler-error 16 23) (bruijn ##k.836 0 0) (##string ##string.1086) (bruijn lang 5 0)) ((bruijn ##k.836 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 16-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1086.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k419" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k419, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.112 21 1) (bruijn ##k.815 19 0) (##inline ##sys.cons '##foreign.function (##inline ##sys.cons '(##string ##string.1080) (##inline ##sys.cons (bruijn decl 14 0) (##inline ##sys.cons (bruijn ##x.826 2 0) (##inline ##sys.cons (bruijn ##x.828 1 0) (bruijn ##x.829 0 0)))))))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VGetArg(upenv, 19-1, 0),
      VInlineCons(
        _V10foreign_Dfunction,
        VInlineCons(
        VEncodePointer(&_V10string_D1080.sym, VPOINTER_OTHER),
        VInlineCons(
        VGetArg(upenv, 14-1, 0),
        VInlineCons(
        upenv->up->vars[0],
        VInlineCons(
        upenv->vars[0],
        _var0))))));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k418" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdddr 26 13) (close _V0vanity_V0compiler_V0ffi_V20_k419) (bruijn ff 2 0))
V_CALL(VGetArg(upenv, 26-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k419, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k417" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 25 25) (close _V0vanity_V0compiler_V0ffi_V20_k418) (bruijn ff 1 0))
V_CALL(VGetArg(upenv, 25-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k418, env)}),
      upenv->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn caddr 24 12) (close _V0vanity_V0compiler_V0ffi_V20_k417) (bruijn ff 0 0))
V_CALL(VGetArg(upenv, 24-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k417, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k415" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k415, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn unwrap-function 22 4) (close _V0vanity_V0compiler_V0ffi_V20_k416) (bruijn ##x.830 1 0) (bruijn ##x.831 0 0) '())
V_CALL(VGetArg(upenv, 22-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k416, env)}),
      upenv->vars[0],
      _var0,
      VNULL);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k414" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 22 25) (close _V0vanity_V0compiler_V0ffi_V20_k415) (bruijn parse 3 0))
V_CALL(VGetArg(upenv, 22-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k415, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reduce-type 20 2) (close _V0vanity_V0compiler_V0ffi_V20_k414) (bruijn ##x.832 0 0) '() #t)
V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k414, env)}),
      _var0,
      VNULL,
      VEncodeBool(true));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 20 33) (close _V0vanity_V0compiler_V0ffi_V20_k413) (bruijn parse 1 0))
V_CALL(VGetArg(upenv, 20-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k413, env)}),
      upenv->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn release-parse 14 1) (close _V0vanity_V0compiler_V0ffi_V20_k412))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k412, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn is-one-decl 13 2) (close _V0vanity_V0compiler_V0ffi_V20_k411) (bruijn ##x.833 0 0))
V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k411, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn deep-copy 16 8) (close _V0vanity_V0compiler_V0ffi_V20_k410) (bruijn ##x.834 0 0))
V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k410, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k408" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn parse-decl-c 11 0) (close _V0vanity_V0compiler_V0ffi_V20_k409) (bruijn decl 3 0))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k409, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k407) (close _V0vanity_V0compiler_V0ffi_V20_k408))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k407, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k408, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 14 21) (close _V0vanity_V0compiler_V0ffi_V20_k406) (bruijn ##x.837 0 0))
V_CALL(VGetArg(upenv, 14-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k406, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.116 1 0))) ((bruijn equal? 13 39) (close _V0vanity_V0compiler_V0ffi_V20_k405) (bruijn lang 2 0) (##string ##string.1080)) ((bruijn ##k.815 5 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 13-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k405, env)}),
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1080.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k403" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.116 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k404) (##inline ##sys.car (bruijn ##expr.116 0 0))) ((bruijn ##k.815 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k404, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k403) (##inline ##sys.cdr (bruijn ##expr.115 1 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k403, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.115 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k402) (##inline ##sys.car (bruijn ##expr.115 0 0))) ((bruijn ##k.815 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k402, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.816 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k401) (##inline ##sys.cdr (bruijn ##expr.114 2 0))) ((bruijn ##k.815 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k401, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.114 1 0)) ((bruijn equal? 8 39) (close _V0vanity_V0compiler_V0ffi_V20_k400) '##foreign.function (##inline ##sys.car (bruijn ##expr.114 1 0))) ((bruijn ##k.815 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 8-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k400, env)}),
      _V10foreign_Dfunction,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k421" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k421, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.112 3 1) (bruijn ##k.811 3 0) (bruijn ##x.813 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 8 23) (close _V0vanity_V0compiler_V0ffi_V20_k421) (##string ##string.1087) (bruijn expr 6 1))
V_CALL(VGetArg(upenv, 8-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k421, env)}),
      VEncodePointer(&_V10string_D1087.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda76" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k399) (close _V0vanity_V0compiler_V0ffi_V20_k420))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k399, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k420, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda75, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda76) (bruijn expr 4 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda76, env, runtime,
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 3 ((bruijn ##x.770 2 0) (bruijn ##x.771 1 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda70)) ((bruijn call/cc 5 37) (bruijn ##k.769 3 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda75)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = upenv->up->vars[0];
    env->vars[1] = upenv->vars[0];
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda70, env)});
V_CALL(VGetArg(upenv, 5-1, 37), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda75, env)}));
    }
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k375" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.function (close _V0vanity_V0compiler_V0ffi_V20_k376) (##string ##string.1088))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k376, env)}),
      VEncodePointer(&_V10string_D1088.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda69, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.function (close _V0vanity_V0compiler_V0ffi_V20_k375) (##string ##string.1089))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k375, env)}),
      VEncodePointer(&_V10string_D1089.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k428" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k428, runtime, upenv, 1, argc, _var0) {
  // ((bruijn find-file 8 10) (bruijn ##k.840 7 0) (bruijn file 7 1) (bruijn ##x.843 0 0))
V_CALL(VGetArg(upenv, 8-1, 10), runtime,
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 7-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k427" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k427, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.842 0 0) ((bruijn ##k.840 6 0) (bruijn path 3 0)) ((bruijn cdr 8 31) (close _V0vanity_V0compiler_V0ffi_V20_k428) (bruijn paths 6 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      upenv->up->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 8-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k428, env)}),
      VGetArg(upenv, 6-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k426" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 7 15) (close _V0vanity_V0compiler_V0ffi_V20_k427) 0 (bruijn ##x.844 0 0))
V_CALL(VGetArg(upenv, 7-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k427, env)}),
      VEncodeInt(0l),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k425" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k425, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn system 6 16) (close _V0vanity_V0compiler_V0ffi_V20_k426) (bruijn ##x.845 0 0))
V_CALL(VGetArg(upenv, 6-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k426, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k424" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn sprintf 5 24) (close _V0vanity_V0compiler_V0ffi_V20_k425) (##string ##string.1091) (bruijn path 0 0))
V_CALL(VGetArg(upenv, 5-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k425, env)}),
      VEncodePointer(&_V10string_D1091.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k423" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn sprintf 4 24) (close _V0vanity_V0compiler_V0ffi_V20_k424) (##string ##string.1092) (bruijn ##x.846 0 0) (bruijn file 2 1))
V_CALL(upenv->up->up->up->vars[24], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k424, env)}),
      VEncodePointer(&_V10string_D1092.sym, VPOINTER_OTHER),
      _var0,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k422" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.841 0 0) ((bruijn compiler-error 3 23) (bruijn ##k.840 1 0) (##string ##string.1090) (bruijn file 1 1)) ((bruijn car 3 33) (close _V0vanity_V0compiler_V0ffi_V20_k423) (bruijn paths 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[23], runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1090.sym, VPOINTER_OTHER),
      upenv->vars[1]);
} else {
V_CALL(upenv->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k423, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda77, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda77, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 2 14) (close _V0vanity_V0compiler_V0ffi_V20_k422) (bruijn paths 0 2))
V_CALL(upenv->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k422, env)}),
      _var2);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 2 24) (bruijn ##k.847 0 0) (##string ##string.1093) (bruijn file 0 1) (bruijn install-root 2 17) (##string ##string.1094))
V_CALL(upenv->up->vars[24], runtime,
      _var0,
      VEncodePointer(&_V10string_D1093.sym, VPOINTER_OTHER),
      _var1,
      upenv->up->vars[17],
      VEncodePointer(&_V10string_D1094.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k438" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k438, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.875 1 0) ((bruijn compiler-error 15 23) (bruijn ##k.876 0 0) (##string ##string.1086) (bruijn expr 13 1)) ((bruijn ##k.876 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 15-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1086.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k442" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k442, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.872 1 0) ((bruijn compiler-error 18 23) (bruijn ##k.873 0 0) (##string ##string.1095) (bruijn expr 16 1)) ((bruijn ##k.873 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 18-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1095.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k454" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k454, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.127 23 1) (bruijn ##k.855 21 0) (bruijn ##x.860 0 0))
V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      VGetArg(upenv, 21-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k453" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k453, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 28 19) (close _V0vanity_V0compiler_V0ffi_V20_k454) (##inline ##sys.cons '##foreign.declare (##inline ##sys.cons (bruijn ##x.869 2 0) '())) (bruijn ##x.866 0 0))
V_CALL(VGetArg(upenv, 28-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k454, env)}),
      VInlineCons(
        _V10foreign_Ddeclare,
        VInlineCons(
        upenv->up->vars[0],
        VNULL)),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k452" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn table->defines 26 7) (close _V0vanity_V0compiler_V0ffi_V20_k453) (bruijn ##x.867 0 0) '())
V_CALL(VGetArg(upenv, 26-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k453, env)}),
      _var0,
      VNULL);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k451" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k451, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn unwrap-declares 25 6) (close _V0vanity_V0compiler_V0ffi_V20_k452) (bruijn parse 3 0) '())
V_CALL(VGetArg(upenv, 25-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k452, env)}),
      upenv->up->up->vars[0],
      VNULL);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k450" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k450, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn sprintf 25 24) (close _V0vanity_V0compiler_V0ffi_V20_k451) (##string ##string.1096) (bruijn file 13 0))
V_CALL(VGetArg(upenv, 25-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k451, env)}),
      VEncodePointer(&_V10string_D1096.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k449" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k449, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 24 20) (close _V0vanity_V0compiler_V0ffi_V20_k450) (bruijn fd 3 0))
V_CALL(VGetArg(upenv, 24-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k450, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k448" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k448, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn release-parse 18 1) (close _V0vanity_V0compiler_V0ffi_V20_k449))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k449, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k447" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k447, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn deep-copy 21 8) (close _V0vanity_V0compiler_V0ffi_V20_k448) (bruijn ##x.870 0 0))
V_CALL(VGetArg(upenv, 21-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k448, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k446" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k446, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn parse-header-c 16 0) (close _V0vanity_V0compiler_V0ffi_V20_k447) (bruijn fd 0 0))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k447, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k445" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k445, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn open-input-process 20 18) (close _V0vanity_V0compiler_V0ffi_V20_k446) (bruijn cmd 0 0))
V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k446, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k444" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-preprocess-command 18 11) (close _V0vanity_V0compiler_V0ffi_V20_k445) (bruijn ##x.871 0 0))
V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k445, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k443" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k443, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn find-file 17 10) (close _V0vanity_V0compiler_V0ffi_V20_k444) (bruijn file 6 0) (bruijn paths 16 2))
V_CALL(VGetArg(upenv, 17-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k444, env)}),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 16-1, 2));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k441" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k441, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k442) (close _V0vanity_V0compiler_V0ffi_V20_k443))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k442, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k443, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k440" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 16 21) (close _V0vanity_V0compiler_V0ffi_V20_k441) (bruijn ##x.874 0 0))
V_CALL(VGetArg(upenv, 16-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k441, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k439" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k439, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string? 15 22) (close _V0vanity_V0compiler_V0ffi_V20_k440) (bruijn file 3 0))
V_CALL(VGetArg(upenv, 15-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k440, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k437" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k437, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k438) (close _V0vanity_V0compiler_V0ffi_V20_k439))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k438, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k439, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k436" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 13 21) (close _V0vanity_V0compiler_V0ffi_V20_k437) (bruijn ##x.877 0 0))
V_CALL(VGetArg(upenv, 13-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k437, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k435" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k435, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.131 1 0))) ((bruijn equal? 12 39) (close _V0vanity_V0compiler_V0ffi_V20_k436) (##inline ##sys.car (bruijn ##expr.130 2 0)) (##string ##string.1080)) ((bruijn ##k.855 4 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 12-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k436, env)}),
      VInlineCar(
        upenv->up->vars[0]),
      VEncodePointer(&_V10string_D1080.sym, VPOINTER_OTHER));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k434" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.131 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k435) (##inline ##sys.car (bruijn ##expr.131 0 0))) ((bruijn ##k.855 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k435, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k433" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.130 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k434) (##inline ##sys.cdr (bruijn ##expr.130 0 0))) ((bruijn ##k.855 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k434, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k432" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k432, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.856 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k433) (##inline ##sys.cdr (bruijn ##expr.129 2 0))) ((bruijn ##k.855 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k433, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k431" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k431, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.129 1 0)) ((bruijn equal? 8 39) (close _V0vanity_V0compiler_V0ffi_V20_k432) '##foreign.import (##inline ##sys.car (bruijn ##expr.129 1 0))) ((bruijn ##k.855 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 8-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k432, env)}),
      _V10foreign_Dimport,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k456" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k456, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.127 3 1) (bruijn ##k.851 3 0) (bruijn ##x.853 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k455" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k455, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 8 23) (close _V0vanity_V0compiler_V0ffi_V20_k456) (##string ##string.1097) (bruijn expr 6 1))
V_CALL(VGetArg(upenv, 8-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k456, env)}),
      VEncodePointer(&_V10string_D1097.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda81" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k431) (close _V0vanity_V0compiler_V0ffi_V20_k455))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k431, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k455, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda80, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda81) (bruijn expr 4 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda81, env, runtime,
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k430" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 2 ((bruijn ##x.849 2 0) (bruijn ##x.850 1 0)) ((bruijn call/cc 5 37) (bruijn ##k.848 3 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda80)))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda80, env)}));
    }
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k429" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k429, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.function (close _V0vanity_V0compiler_V0ffi_V20_k430) (##string ##string.1088))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k430, env)}),
      VEncodePointer(&_V10string_D1088.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda79, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda79, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (##vcore.function (close _V0vanity_V0compiler_V0ffi_V20_k429) (##string ##string.1098))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k429, env)}),
      VEncodePointer(&_V10string_D1098.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda82, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 2 24) (bruijn ##k.880 0 0) (##string ##string.1099) (bruijn name 0 1))
V_CALL(upenv->up->vars[24], runtime,
      _var0,
      VEncodePointer(&_V10string_D1099.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k459" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k459, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 5 30) (bruijn ##k.910 1 0) (bruijn ##x.911 0 0) 'pointer)
V_CALL(VGetArg(upenv, 5-1, 30), runtime,
      upenv->vars[0],
      _var0,
      _V0pointer);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k458" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k458, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.909 1 0) ((bruijn car 4 33) (close _V0vanity_V0compiler_V0ffi_V20_k459) (bruijn type 2 1)) ((bruijn ##k.910 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(upenv->up->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k459, env)}),
      upenv->up->vars[1]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k460" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k460, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.882 0 0) ((bruijn ##k.881 2 0) (##inline ##sys.qcons (##inline ##sys.qcons 'pointer (##inline ##sys.qcons 'void '())) '(##string ##string.1100))) ((bruijn assv 4 26) (bruijn ##k.881 2 0) (bruijn type 2 1) (##inline ##sys.qcons (##inline ##sys.qcons 'void '#t) (##inline ##sys.qcons (##inline ##sys.qcons '_Bool '(##string ##string.1101)) (##inline ##sys.qcons (##inline ##sys.qcons 'char '(##string ##string.1102)) (##inline ##sys.qcons (##inline ##sys.qcons 'signed-char '(##string ##string.1103)) (##inline ##sys.qcons (##inline ##sys.qcons 'unsigned-char '(##string ##string.1103)) (##inline ##sys.qcons (##inline ##sys.qcons 'short '(##string ##string.1103)) (##inline ##sys.qcons (##inline ##sys.qcons 'unsigned-short '(##string ##string.1103)) (##inline ##sys.qcons (##inline ##sys.qcons 'int '(##string ##string.1103)) (##inline ##sys.qcons (##inline ##sys.qcons 'unsigned-int '(##string ##string.1103)) (##inline ##sys.qcons (##inline ##sys.qcons 'double '(##string ##string.1104)) (##inline ##sys.qcons (##inline ##sys.qcons 'float '(##string ##string.1104)) (##inline ##sys.qcons (##inline ##sys.qcons 'VWORD '(##string ##string.1081)) '()))))))))))))))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
        VInlineCons(
        _V0pointer,
        VInlineCons(
        _V0void,
        VNULL)),
        VEncodePointer(&_V10string_D1100.sym, VPOINTER_OTHER)));
} else {
V_CALL(upenv->up->up->up->vars[26], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VInlineCons(
        VInlineCons(
        _V0void,
        VEncodeBool(true)),
        VInlineCons(
        VInlineCons(
        _V0_UBool,
        VEncodePointer(&_V10string_D1101.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0char,
        VEncodePointer(&_V10string_D1102.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0signed__char,
        VEncodePointer(&_V10string_D1103.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0unsigned__char,
        VEncodePointer(&_V10string_D1103.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0short,
        VEncodePointer(&_V10string_D1103.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0unsigned__short,
        VEncodePointer(&_V10string_D1103.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0int,
        VEncodePointer(&_V10string_D1103.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0unsigned__int,
        VEncodePointer(&_V10string_D1103.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0double,
        VEncodePointer(&_V10string_D1104.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0float,
        VEncodePointer(&_V10string_D1104.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0VWORD,
        VEncodePointer(&_V10string_D1081.sym, VPOINTER_OTHER)),
        VNULL)))))))))))));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k457" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k458) (close _V0vanity_V0compiler_V0ffi_V20_k460))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k458, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k460, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 2 34) (close _V0vanity_V0compiler_V0ffi_V20_k457) (bruijn type 0 1))
V_CALL(upenv->up->vars[34], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k457, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k463" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k463, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 5 30) (bruijn ##k.979 1 0) (bruijn ##x.980 0 0) 'pointer)
V_CALL(VGetArg(upenv, 5-1, 30), runtime,
      upenv->vars[0],
      _var0,
      _V0pointer);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k462" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k462, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.978 1 0) ((bruijn car 4 33) (close _V0vanity_V0compiler_V0ffi_V20_k463) (bruijn type 2 1)) ((bruijn ##k.979 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(upenv->up->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k463, env)}),
      upenv->up->vars[1]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k467" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k467, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.943 1 0) ((bruijn ##kk.132 3 1) (bruijn ##k.944 0 0) (##inline ##sys.qcons 'c-string '(##string ##string.1105))) ((bruijn ##k.944 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(upenv->up->up->vars[1], runtime,
      _var0,
      VInlineCons(
        _V0c__string,
        VEncodePointer(&_V10string_D1105.sym, VPOINTER_OTHER)));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k472" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k472, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.937 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.135 1 0))) ((bruijn ##kk.132 8 1) (bruijn ##k.934 3 0) (##inline ##sys.qcons 'const-c-string '(##string ##string.1106))) ((bruijn ##k.934 3 0) #f)) ((bruijn ##k.934 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
        _V0const__c__string,
        VEncodePointer(&_V10string_D1106.sym, VPOINTER_OTHER)));
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
static void _V0vanity_V0compiler_V0ffi_V20_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k471" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k471, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.135 0 0)) ((bruijn equal? 12 39) (close _V0vanity_V0compiler_V0ffi_V20_k472) 'char (##inline ##sys.car (bruijn ##expr.135 0 0))) ((bruijn ##k.934 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 12-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k472, env)}),
      _V0char,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k470" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k470, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.935 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k471) (##inline ##sys.cdr (bruijn ##expr.134 2 0))) ((bruijn ##k.934 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k471, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k469" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.134 1 0)) ((bruijn equal? 10 39) (close _V0vanity_V0compiler_V0ffi_V20_k470) 'const (##inline ##sys.car (bruijn ##expr.134 1 0))) ((bruijn ##k.934 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 10-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k470, env)}),
      _V0const,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k477" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k477, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.927 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.137 1 0))) ((bruijn ##kk.132 10 1) (bruijn ##k.924 3 0) (##inline ##sys.qcons 'const-void-pointer '(##string ##string.1107))) ((bruijn ##k.924 3 0) #f)) ((bruijn ##k.924 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
        _V0const__void__pointer,
        VEncodePointer(&_V10string_D1107.sym, VPOINTER_OTHER)));
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
static void _V0vanity_V0compiler_V0ffi_V20_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k476" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 0)) ((bruijn equal? 14 39) (close _V0vanity_V0compiler_V0ffi_V20_k477) 'void (##inline ##sys.car (bruijn ##expr.137 0 0))) ((bruijn ##k.924 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 14-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k477, env)}),
      _V0void,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k475" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k475, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.925 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k476) (##inline ##sys.cdr (bruijn ##expr.136 2 0))) ((bruijn ##k.924 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k476, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k474" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k474, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.136 1 0)) ((bruijn equal? 12 39) (close _V0vanity_V0compiler_V0ffi_V20_k475) 'const (##inline ##sys.car (bruijn ##expr.136 1 0))) ((bruijn ##k.924 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k475, env)}),
      _V0const,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k480" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k480, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.920 1 0) ((bruijn ##kk.132 9 1) (bruijn ##k.921 0 0) (##inline ##sys.qcons 'void-pointer '(##string ##string.1108))) ((bruijn ##k.921 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      _var0,
      VInlineCons(
        _V0void__pointer,
        VEncodePointer(&_V10string_D1108.sym, VPOINTER_OTHER)));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k481" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k481, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.132 9 1) (bruijn ##k.914 9 0) (##inline ##sys.qcons 'void-pointer '(##string ##string.1109)))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons(
        _V0void__pointer,
        VEncodePointer(&_V10string_D1109.sym, VPOINTER_OTHER)));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k479" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k479, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k480) (close _V0vanity_V0compiler_V0ffi_V20_k481))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k480, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k481, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k478" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k478, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn equal? 12 39) (close _V0vanity_V0compiler_V0ffi_V20_k479) 'void (bruijn ##input.133 6 0))
V_CALL(VGetArg(upenv, 12-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k479, env)}),
      _V0void,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda87" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k474) (close _V0vanity_V0compiler_V0ffi_V20_k478))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k474, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k478, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k473" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda87) (bruijn ##input.133 4 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda87, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda86" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k469) (close _V0vanity_V0compiler_V0ffi_V20_k473))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k469, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k473, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k468" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda86) (bruijn ##input.133 2 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda86, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k466" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k466, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k467) (close _V0vanity_V0compiler_V0ffi_V20_k468))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k467, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k468, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k465" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn equal? 6 39) (close _V0vanity_V0compiler_V0ffi_V20_k466) 'char (bruijn ##input.133 0 0))
V_CALL(VGetArg(upenv, 6-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k466, env)}),
      _V0char,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cadr 5 25) (close _V0vanity_V0compiler_V0ffi_V20_k465) (bruijn type 3 1))
V_CALL(VGetArg(upenv, 5-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k465, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k464" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k464, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.913 0 0) ((bruijn call/cc 4 37) (bruijn ##k.912 2 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda85)) ((bruijn assv 4 26) (bruijn ##k.912 2 0) (bruijn type 2 1) (##inline ##sys.qcons (##inline ##sys.qcons '_Bool '(##string ##string.1110)) (##inline ##sys.qcons (##inline ##sys.qcons 'char '(##string ##string.1111)) (##inline ##sys.qcons (##inline ##sys.qcons 'signed-char '(##string ##string.1112)) (##inline ##sys.qcons (##inline ##sys.qcons 'unsigned-char '(##string ##string.1113)) (##inline ##sys.qcons (##inline ##sys.qcons 'short '(##string ##string.1114)) (##inline ##sys.qcons (##inline ##sys.qcons 'unsigned-short '(##string ##string.1115)) (##inline ##sys.qcons (##inline ##sys.qcons 'int '(##string ##string.1116)) (##inline ##sys.qcons (##inline ##sys.qcons 'unsigned-int '(##string ##string.1116)) (##inline ##sys.qcons (##inline ##sys.qcons 'long '(##string ##string.1116)) (##inline ##sys.qcons (##inline ##sys.qcons 'unsigned-long '(##string ##string.1116)) (##inline ##sys.qcons (##inline ##sys.qcons 'long-long '(##string ##string.1116)) (##inline ##sys.qcons (##inline ##sys.qcons 'unsigned-long-long '(##string ##string.1116)) (##inline ##sys.qcons (##inline ##sys.qcons 'double '(##string ##string.1117)) (##inline ##sys.qcons (##inline ##sys.qcons 'float '(##string ##string.1117)) (##inline ##sys.qcons (##inline ##sys.qcons 'VWORD '(##string ##string.1118)) (##inline ##sys.qcons (##inline ##sys.qcons 'c-string '(##string ##string.1105)) '()))))))))))))))))))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[37], runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda85, env)}));
} else {
V_CALL(upenv->up->up->up->vars[26], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VInlineCons(
        VInlineCons(
        _V0_UBool,
        VEncodePointer(&_V10string_D1110.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0char,
        VEncodePointer(&_V10string_D1111.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0signed__char,
        VEncodePointer(&_V10string_D1112.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0unsigned__char,
        VEncodePointer(&_V10string_D1113.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0short,
        VEncodePointer(&_V10string_D1114.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0unsigned__short,
        VEncodePointer(&_V10string_D1115.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0int,
        VEncodePointer(&_V10string_D1116.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0unsigned__int,
        VEncodePointer(&_V10string_D1116.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0long,
        VEncodePointer(&_V10string_D1116.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0unsigned__long,
        VEncodePointer(&_V10string_D1116.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0long__long,
        VEncodePointer(&_V10string_D1116.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0unsigned__long__long,
        VEncodePointer(&_V10string_D1116.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0double,
        VEncodePointer(&_V10string_D1117.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0float,
        VEncodePointer(&_V10string_D1117.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0VWORD,
        VEncodePointer(&_V10string_D1118.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0c__string,
        VEncodePointer(&_V10string_D1105.sym, VPOINTER_OTHER)),
        VNULL)))))))))))))))));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k461" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k461, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k462) (close _V0vanity_V0compiler_V0ffi_V20_k464))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k462, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k464, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 2 34) (close _V0vanity_V0compiler_V0ffi_V20_k461) (bruijn type 0 1))
V_CALL(upenv->up->vars[34], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k461, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k491" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k491, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.147 4 1) (bruijn ##k.1002 1 0) (bruijn ##expr.149 2 1) (bruijn ##x.1003 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k490" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k490, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.149 1 1))) ((bruijn reverse 17 38) (close _V0vanity_V0compiler_V0ffi_V20_k491) (bruijn ##args.146 1 2)) ((bruijn ##k.1002 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 17-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k491, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k494" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k494, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.147 7 1) (bruijn ##k.996 2 0) (bruijn ##expr.149 5 1) (bruijn ##x.998 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k493" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 20 38) (close _V0vanity_V0compiler_V0ffi_V20_k494) (bruijn ##args.146 4 2))
V_CALL(VGetArg(upenv, 20-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k494, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda95, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda95, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.148 0 1) (close _V0vanity_V0compiler_V0ffi_V20_k493) (##inline ##sys.cdr (bruijn ##expr.149 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.149 3 1)) (bruijn ##args.146 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k493, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 18 37) (bruijn ##k.995 0 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda95))
V_CALL(VGetArg(upenv, 18-1, 37), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda95, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k492" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 17 36) (bruijn ##k.993 1 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda94) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 17-1, 36), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda94, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda93, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda93, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k490) (close _V0vanity_V0compiler_V0ffi_V20_k492))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k490, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k492, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0ffi_V20_lambda93)) ((bruijn loop 0 0) (bruijn ##k.992 1 0) (##inline ##sys.cdr (bruijn ##expr.144 4 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda93, env)});
V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        upenv->up->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 13 37) (bruijn ##k.991 0 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda92))
V_CALL(VGetArg(upenv, 13-1, 37), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda92, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k499" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k499, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 21 29) (bruijn ##k.1010 2 0) (##string ##string.1119) (bruijn ##x.1011 0 0) (bruijn argname 2 2) (bruijn name 9 0))
V_CALL(VGetArg(upenv, 21-1, 29), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1119.sym, VPOINTER_OTHER),
      _var0,
      upenv->up->vars[2],
      VGetArg(upenv, 9-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k498" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k498, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 20 31) (close _V0vanity_V0compiler_V0ffi_V20_k499) (bruijn ##x.1012 0 0))
V_CALL(VGetArg(upenv, 20-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k499, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda98, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda98, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn get-decoder 18 15) (close _V0vanity_V0compiler_V0ffi_V20_k498) (bruijn arg 0 1))
V_CALL(VGetArg(upenv, 18-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k498, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k517" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k517, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 36 29) (bruijn ##k.1037 2 0) (##string ##string.1121) (bruijn ##x.1038 0 0) (bruijn name 24 0))
V_CALL(VGetArg(upenv, 36-1, 29), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1121.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 24-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k516" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k516, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 35 31) (close _V0vanity_V0compiler_V0ffi_V20_k517) (bruijn ##x.1039 0 0))
V_CALL(VGetArg(upenv, 35-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k517, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k515" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k515, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1036 1 0) ((bruijn printf 34 29) (bruijn ##k.1037 0 0) (##string ##string.1120) (bruijn name 22 0)) ((bruijn get-encoder 33 14) (close _V0vanity_V0compiler_V0ffi_V20_k516) (bruijn ret 24 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 34-1, 29), runtime,
      _var0,
      VEncodePointer(&_V10string_D1120.sym, VPOINTER_OTHER),
      VGetArg(upenv, 22-1, 0));
} else {
V_CALL(VGetArg(upenv, 33-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k516, env)}),
      VGetArg(upenv, 24-1, 0));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k526" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k526, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-arg 25 0) (bruijn ##k.1030 1 0) (bruijn arg 1 1) (bruijn argname 1 2))
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda99, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda99, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn printf 42 29) (close _V0vanity_V0compiler_V0ffi_V20_k526) (##string ##string.1122))
V_CALL(VGetArg(upenv, 42-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k526, env)}),
      VEncodePointer(&_V10string_D1122.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k525" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k525, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 41 32) (bruijn ##k.1028 5 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda99) (bruijn ##x.1032 1 0) (bruijn ##x.1033 0 0))
V_CALL(VGetArg(upenv, 41-1, 32), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda99, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k524" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k524, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 40 31) (close _V0vanity_V0compiler_V0ffi_V20_k525) (bruijn names 23 1))
V_CALL(VGetArg(upenv, 40-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k525, env)}),
      VGetArg(upenv, 23-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k523" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k523, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 39 31) (close _V0vanity_V0compiler_V0ffi_V20_k524) (bruijn args 26 2))
V_CALL(VGetArg(upenv, 39-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k524, env)}),
      VGetArg(upenv, 26-1, 2));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k522" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k522, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn print-arg 20 0) (close _V0vanity_V0compiler_V0ffi_V20_k523) (bruijn ##x.1034 1 0) (bruijn ##x.1035 0 0))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k523, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k521" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k521, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 37 33) (close _V0vanity_V0compiler_V0ffi_V20_k522) (bruijn names 20 1))
V_CALL(VGetArg(upenv, 37-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k522, env)}),
      VGetArg(upenv, 20-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k520" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k520, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1027 1 0) ((bruijn car 36 33) (close _V0vanity_V0compiler_V0ffi_V20_k521) (bruijn args 23 2)) ((bruijn ##k.1028 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 36-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k521, env)}),
      VGetArg(upenv, 23-1, 2));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k530" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k530, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1025 1 0) ((bruijn printf 39 29) (bruijn ##k.1026 0 0) (##string ##string.1123)) ((bruijn printf 39 29) (bruijn ##k.1026 0 0) (##string ##string.1124)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 39-1, 29), runtime,
      _var0,
      VEncodePointer(&_V10string_D1123.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 39-1, 29), runtime,
      _var0,
      VEncodePointer(&_V10string_D1124.sym, VPOINTER_OTHER));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k532" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k532, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.138 37 1) (bruijn ##k.1005 27 0) (bruijn ##x.1007 0 0))
V_CALL(VGetArg(upenv, 37-1, 1), runtime,
      VGetArg(upenv, 27-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k531" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k531, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 39 29) (close _V0vanity_V0compiler_V0ffi_V20_k532) (##string ##string.1125))
V_CALL(VGetArg(upenv, 39-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k532, env)}),
      VEncodePointer(&_V10string_D1125.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k529" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k529, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k530) (close _V0vanity_V0compiler_V0ffi_V20_k531))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k530, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k531, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k528" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k528, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 37 30) (close _V0vanity_V0compiler_V0ffi_V20_k529) (bruijn ret 27 0) 'void)
V_CALL(VGetArg(upenv, 37-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k529, env)}),
      VGetArg(upenv, 27-1, 0),
      _V0void);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k527" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k527, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 36 29) (close _V0vanity_V0compiler_V0ffi_V20_k528) (##string ##string.1126))
V_CALL(VGetArg(upenv, 36-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k528, env)}),
      VEncodePointer(&_V10string_D1126.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k519" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k519, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k520) (close _V0vanity_V0compiler_V0ffi_V20_k527))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k520, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k527, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k518" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k518, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn pair? 34 34) (close _V0vanity_V0compiler_V0ffi_V20_k519) (bruijn args 21 2))
V_CALL(VGetArg(upenv, 34-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k519, env)}),
      VGetArg(upenv, 21-1, 2));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k514" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k514, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k515) (close _V0vanity_V0compiler_V0ffi_V20_k518))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k515, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k518, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k513" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k513, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 32 30) (close _V0vanity_V0compiler_V0ffi_V20_k514) (bruijn ret 22 0) 'void)
V_CALL(VGetArg(upenv, 32-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k514, env)}),
      VGetArg(upenv, 22-1, 0),
      _V0void);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k512" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k512, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 31 29) (close _V0vanity_V0compiler_V0ffi_V20_k513) (##string ##string.1127))
V_CALL(VGetArg(upenv, 31-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k513, env)}),
      VEncodePointer(&_V10string_D1127.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda100, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 31 29) (bruijn ##k.1040 0 0) (##string ##string.1128) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 31-1, 29), runtime,
      _var0,
      VEncodePointer(&_V10string_D1128.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k511" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k511, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 30 32) (close _V0vanity_V0compiler_V0ffi_V20_k512) (close _V0vanity_V0compiler_V0ffi_V20_lambda100) (bruijn names 13 1))
V_CALL(VGetArg(upenv, 30-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k512, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda100, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k510" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k510, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 29 29) (close _V0vanity_V0compiler_V0ffi_V20_k511) (##string ##string.1129) (bruijn mangled 12 0) (bruijn ##x.1041 2 0) (bruijn ##x.1042 0 0))
V_CALL(VGetArg(upenv, 29-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k511, env)}),
      VEncodePointer(&_V10string_D1129.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k509" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k509, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 28 35) (close _V0vanity_V0compiler_V0ffi_V20_k510) 1 (bruijn ##x.1043 0 0))
V_CALL(VGetArg(upenv, 28-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k510, env)}),
      VEncodeInt(1l),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k508" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k508, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 27 28) (close _V0vanity_V0compiler_V0ffi_V20_k509) (bruijn args 14 2))
V_CALL(VGetArg(upenv, 27-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k509, env)}),
      VGetArg(upenv, 14-1, 2));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k507" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k507, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 26 35) (close _V0vanity_V0compiler_V0ffi_V20_k508) 1 (bruijn ##x.1044 0 0))
V_CALL(VGetArg(upenv, 26-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k508, env)}),
      VEncodeInt(1l),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k506" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k506, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 25 28) (close _V0vanity_V0compiler_V0ffi_V20_k507) (bruijn args 12 2))
V_CALL(VGetArg(upenv, 25-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k507, env)}),
      VGetArg(upenv, 12-1, 2));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k505" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 24 29) (close _V0vanity_V0compiler_V0ffi_V20_k506) (##string ##string.1130) (bruijn mangled 7 0) (bruijn ##x.1045 0 0))
V_CALL(VGetArg(upenv, 24-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k506, env)}),
      VEncodePointer(&_V10string_D1130.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k504" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k504, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 23 35) (close _V0vanity_V0compiler_V0ffi_V20_k505) 1 (bruijn ##x.1046 0 0))
V_CALL(VGetArg(upenv, 23-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k505, env)}),
      VEncodeInt(1l),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k503" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k503, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 22 28) (close _V0vanity_V0compiler_V0ffi_V20_k504) (bruijn args 9 2))
V_CALL(VGetArg(upenv, 22-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k504, env)}),
      VGetArg(upenv, 9-1, 2));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k502" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k502, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 21 29) (close _V0vanity_V0compiler_V0ffi_V20_k503) (##string ##string.1127))
V_CALL(VGetArg(upenv, 21-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k503, env)}),
      VEncodePointer(&_V10string_D1127.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 21 29) (bruijn ##k.1047 0 0) (##string ##string.1131) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 21-1, 29), runtime,
      _var0,
      VEncodePointer(&_V10string_D1131.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k501" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k501, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn for-each 20 32) (close _V0vanity_V0compiler_V0ffi_V20_k502) (close _V0vanity_V0compiler_V0ffi_V20_lambda101) (bruijn names 3 1))
V_CALL(VGetArg(upenv, 20-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k502, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda101, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k500" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k500, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printf 19 29) (close _V0vanity_V0compiler_V0ffi_V20_k501) (##string ##string.1132) (bruijn name 7 0))
V_CALL(VGetArg(upenv, 19-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k501, env)}),
      VEncodePointer(&_V10string_D1132.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda97" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda97, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0compiler_V0ffi_V20_lambda98)) ((bruijn printf 18 29) (close _V0vanity_V0compiler_V0ffi_V20_k500) (##string ##string.1133) (##inline ##sys.car (bruijn ##expr.142 10 0))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda98, env)});
V_CALL(VGetArg(upenv, 18-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k500, env)}),
      VEncodePointer(&_V10string_D1133.sym, VPOINTER_OTHER),
      VInlineCar(
        VGetArg(upenv, 10-1, 0)));
    }
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k497" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k497, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda97) (bruijn ##x.1008 2 0) (bruijn ##x.1009 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda97, env, runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k496" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn iota 15 27) (close _V0vanity_V0compiler_V0ffi_V20_k497) (bruijn ##x.1048 0 0))
V_CALL(VGetArg(upenv, 15-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k497, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k495" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k495, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn length 14 28) (close _V0vanity_V0compiler_V0ffi_V20_k496) (bruijn args 1 2))
V_CALL(VGetArg(upenv, 14-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k496, env)}),
      upenv->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda96, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda96, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn mangle-foreign-function 12 13) (close _V0vanity_V0compiler_V0ffi_V20_k495) (bruijn name 1 0)) ((bruijn ##k.1005 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 12-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k495, env)}),
      upenv->vars[0]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k489" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k489, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 12 36) (bruijn ##k.985 7 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda91) (close _V0vanity_V0compiler_V0ffi_V20_lambda96))
V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda91, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda96, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k488" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k488, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.144 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k489) (##inline ##sys.car (bruijn ##expr.144 0 0))) ((bruijn ##k.985 6 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k489, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k487" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k488) (##inline ##sys.cdr (bruijn ##expr.143 1 0)))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k488, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k486" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k486, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.143 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k487) (##inline ##sys.car (bruijn ##expr.143 0 0))) ((bruijn ##k.985 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k487, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k485" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k485, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.142 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k486) (##inline ##sys.cdr (bruijn ##expr.142 0 0))) ((bruijn ##k.985 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k486, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k484" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k484, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.141 0 0)) ((close _V0vanity_V0compiler_V0ffi_V20_k485) (##inline ##sys.cdr (bruijn ##expr.141 0 0))) ((bruijn ##k.985 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k485, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k483" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k483, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.986 0 0) ((close _V0vanity_V0compiler_V0ffi_V20_k484) (##inline ##sys.cdr (bruijn ##expr.140 2 0))) ((bruijn ##k.985 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k484, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k482" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k482, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.140 1 0)) ((bruijn equal? 5 39) (close _V0vanity_V0compiler_V0ffi_V20_k483) '##foreign.function (##inline ##sys.car (bruijn ##expr.140 1 0))) ((bruijn ##k.985 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 5-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k483, env)}),
      _V10foreign_Dfunction,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k533" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k533, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 5 40) (bruijn ##k.982 2 0) (##string ##string.1064))
V_CALL(VGetArg(upenv, 5-1, 40), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1064.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda90" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_k482) (close _V0vanity_V0compiler_V0ffi_V20_k533))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_k482, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k533, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda89, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda89, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda90) (bruijn expr 1 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda90, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda88, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 2 37) (bruijn ##k.981 0 0) (close _V0vanity_V0compiler_V0ffi_V20_lambda89))
V_CALL(upenv->up->vars[37], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda89, env)}));
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
  // (letrec 17 ((close _V0vanity_V0compiler_V0ffi_V20_lambda3) (close _V0vanity_V0compiler_V0ffi_V20_lambda21) (close _V0vanity_V0compiler_V0ffi_V20_lambda23) (close _V0vanity_V0compiler_V0ffi_V20_lambda42) (close _V0vanity_V0compiler_V0ffi_V20_lambda45) (close _V0vanity_V0compiler_V0ffi_V20_lambda49) (close _V0vanity_V0compiler_V0ffi_V20_lambda52) (close _V0vanity_V0compiler_V0ffi_V20_lambda59) (close _V0vanity_V0compiler_V0ffi_V20_lambda68) (close _V0vanity_V0compiler_V0ffi_V20_lambda69) (close _V0vanity_V0compiler_V0ffi_V20_lambda77) (close _V0vanity_V0compiler_V0ffi_V20_lambda78) (close _V0vanity_V0compiler_V0ffi_V20_lambda79) (close _V0vanity_V0compiler_V0ffi_V20_lambda82) (close _V0vanity_V0compiler_V0ffi_V20_lambda83) (close _V0vanity_V0compiler_V0ffi_V20_lambda84) (close _V0vanity_V0compiler_V0ffi_V20_lambda88)) ((bruijn ##k.150 48 0) (##inline ##sys.cons (##inline ##sys.cons 'mangle-foreign-function (bruijn mangle-foreign-function 0 13)) (##inline ##sys.cons (##inline ##sys.cons 'validate-foreign-function (bruijn validate-foreign-function 0 9)) (##inline ##sys.cons (##inline ##sys.cons 'print-foreign-function (bruijn print-foreign-function 0 16)) (##inline ##sys.cons (##inline ##sys.cons 'resolve-foreign-import (bruijn resolve-foreign-import 0 12)) '()))))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[17]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 17, 17, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda21, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda23, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda42, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda45, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda49, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda52, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda59, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda68, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda69, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda77, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda78, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda79, env)});
    env->vars[13] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda82, env)});
    env->vars[14] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda83, env)});
    env->vars[15] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda84, env)});
    env->vars[16] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda88, env)});
V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        _V0mangle__foreign__function,
        env->vars[13]),
        VInlineCons(
        VInlineCons(
        _V0validate__foreign__function,
        env->vars[9]),
        VInlineCons(
        VInlineCons(
        _V0print__foreign__function,
        env->vars[16]),
        VInlineCons(
        VInlineCons(
        _V0resolve__foreign__import,
        env->vars[12]),
        VNULL)))));
    }
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda2) (bruijn ##x.151 40 0) (bruijn ##x.152 39 0) (bruijn ##x.153 38 0) (bruijn ##x.154 37 0) (bruijn ##x.155 36 0) (bruijn ##x.156 35 0) (bruijn ##x.157 34 0) (bruijn ##x.158 33 0) (bruijn ##x.159 32 0) (bruijn ##x.160 31 0) (bruijn ##x.161 30 0) (bruijn ##x.162 29 0) (bruijn ##x.163 28 0) (bruijn ##x.164 27 0) (bruijn ##x.165 26 0) (bruijn ##x.166 25 0) (bruijn ##x.167 24 0) (bruijn ##x.168 23 0) (bruijn ##x.169 22 0) (bruijn ##x.170 21 0) (bruijn ##x.171 20 0) (bruijn ##x.172 19 0) (bruijn ##x.173 18 0) (bruijn ##x.174 17 0) (bruijn ##x.175 16 0) (bruijn ##x.176 15 0) (bruijn ##x.177 14 0) (bruijn ##x.178 13 0) (bruijn ##x.179 12 0) (bruijn ##x.180 11 0) (bruijn ##x.181 10 0) (bruijn ##x.182 9 0) (bruijn ##x.183 8 0) (bruijn ##x.184 7 0) (bruijn ##x.185 6 0) (bruijn ##x.186 5 0) (bruijn ##x.187 4 0) (bruijn ##x.188 3 0) (bruijn ##x.189 2 0) (bruijn ##x.190 1 0) (bruijn ##x.191 0 0))
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
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 40 0) (close _V0vanity_V0compiler_V0ffi_V20_k46) 'error)
V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k46, env)}),
      _V0error);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 39 0) (close _V0vanity_V0compiler_V0ffi_V20_k45) 'equal?)
V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k45, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 38 0) (close _V0vanity_V0compiler_V0ffi_V20_k44) 'reverse)
V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k44, env)}),
      _V0reverse);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 37 0) (close _V0vanity_V0compiler_V0ffi_V20_k43) 'call/cc)
V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k43, env)}),
      _V0call_Wcc);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 36 0) (close _V0vanity_V0compiler_V0ffi_V20_k42) 'call-with-values)
V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k42, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 35 0) (close _V0vanity_V0compiler_V0ffi_V20_k41) '+)
V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k41, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 34 0) (close _V0vanity_V0compiler_V0ffi_V20_k40) 'pair?)
V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k40, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 33 0) (close _V0vanity_V0compiler_V0ffi_V20_k39) 'car)
V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k39, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 32 0) (close _V0vanity_V0compiler_V0ffi_V20_k38) 'for-each)
V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k38, env)}),
      _V0for__each);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 31 0) (close _V0vanity_V0compiler_V0ffi_V20_k37) 'cdr)
V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k37, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 30 0) (close _V0vanity_V0compiler_V0ffi_V20_k36) 'eqv?)
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k36, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 29 0) (close _V0vanity_V0compiler_V0ffi_V20_k35) 'printf)
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k35, env)}),
      _V0printf);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 0) (close _V0vanity_V0compiler_V0ffi_V20_k34) 'length)
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k34, env)}),
      _V0length);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close _V0vanity_V0compiler_V0ffi_V20_k33) 'iota)
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k33, env)}),
      _V0iota);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close _V0vanity_V0compiler_V0ffi_V20_k32) 'assv)
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k32, env)}),
      _V0assv);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close _V0vanity_V0compiler_V0ffi_V20_k31) 'cadr)
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k31, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close _V0vanity_V0compiler_V0ffi_V20_k30) 'sprintf)
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k30, env)}),
      _V0sprintf);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close _V0vanity_V0compiler_V0ffi_V20_k29) 'compiler-error)
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k29, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0compiler_V0ffi_V20_k28) 'string?)
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k28, env)}),
      _V0string_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0compiler_V0ffi_V20_k27) 'not)
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k27, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0compiler_V0ffi_V20_k26) 'close-port)
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k26, env)}),
      _V0close__port);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0ffi_V20_k25) 'cons)
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k25, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0ffi_V20_k24) 'open-input-process)
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k24, env)}),
      _V0open__input__process);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0ffi_V20_k23) 'install-root)
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k23, env)}),
      _V0install__root);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0ffi_V20_k22) 'system)
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k22, env)}),
      _V0system);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0ffi_V20_k21) '=)
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k21, env)}),
      _V0_E);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0ffi_V20_k20) 'null?)
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k20, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0ffi_V20_k19) 'cdddr)
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k19, env)}),
      _V0cdddr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0ffi_V20_k18) 'caddr)
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k18, env)}),
      _V0caddr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0ffi_V20_k17) 'cdadr)
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k17, env)}),
      _V0cdadr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0ffi_V20_k16) 'string-copy)
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k16, env)}),
      _V0string__copy);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0ffi_V20_k15) 'symbol->string)
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k15, env)}),
      _V0symbol___Gstring);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0ffi_V20_k14) 'cadar)
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k14, env)}),
      _V0cadar);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0ffi_V20_k13) 'member)
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k13, env)}),
      _V0member);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0ffi_V20_k12) 'caddar)
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k12, env)}),
      _V0caddar);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0ffi_V20_k11) 'caar)
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k11, env)}),
      _V0caar);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0ffi_V20_k10) 'string->symbol)
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k10, env)}),
      _V0string___Gsymbol);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0ffi_V20_k9) 'map)
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k9, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0ffi_V20_k8) 'list)
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k8, env)}),
      _V0list);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0ffi_V20_k7) 'symbol?)
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k7, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0ffi_V20_k6) 'memv)
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k6, env)}),
      _V0memv);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0ffi_V20_k5) (##string ##string.1134) (bruijn ##x.1057 3 0) (bruijn ##x.1058 2 0) (bruijn ##x.1059 1 0) (bruijn ##x.1060 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k5, env)}),
      VEncodePointer(&_V10string_D1134.sym, VPOINTER_OTHER),
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
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k4) (##string ##string.1135))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k4, env)}),
      VEncodePointer(&_V10string_D1135.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k3) (##string ##string.1136))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k3, env)}),
      VEncodePointer(&_V10string_D1136.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k2) (##string ##string.1137))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k2, env)}),
      VEncodePointer(&_V10string_D1137.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k1) (##string ##string.1138))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k1, env)}),
      VEncodePointer(&_V10string_D1138.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0ffi_V20 = (VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda1;
