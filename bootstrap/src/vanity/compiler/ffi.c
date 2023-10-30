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
static struct { VBlob sym; char bytes[21]; } _V10string_D1202 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1201 = { { VSTRING, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1200 = { { VSTRING, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[34]; } _V10string_D1199 = { { VSTRING, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1198 = { { VSTRING, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[5]; } _V0iota = { { VSYMBOL, 5 }, "iota" };
static struct { VBlob sym; char bytes[7]; } _V0length = { { VSYMBOL, 7 }, "length" };
static struct { VBlob sym; char bytes[7]; } _V0printf = { { VSYMBOL, 7 }, "printf" };
static struct { VBlob sym; char bytes[5]; } _V0eqv_Q = { { VSYMBOL, 5 }, "eqv\?" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[9]; } _V0for__each = { { VSYMBOL, 9 }, "for-each" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[17]; } _V0call__with__values = { { VSYMBOL, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[8]; } _V0call_Wcc = { { VSYMBOL, 8 }, "call/cc" };
static struct { VBlob sym; char bytes[8]; } _V0reverse = { { VSYMBOL, 8 }, "reverse" };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[5]; } _V0assv = { { VSYMBOL, 5 }, "assv" };
static struct { VBlob sym; char bytes[8]; } _V0sprintf = { { VSYMBOL, 8 }, "sprintf" };
static struct { VBlob sym; char bytes[19]; } _V0open__input__process = { { VSYMBOL, 19 }, "open-input-process" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[11]; } _V0close__port = { { VSYMBOL, 11 }, "close-port" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[15]; } _V0compiler__error = { { VSYMBOL, 15 }, "compiler-error" };
static struct { VBlob sym; char bytes[13]; } _V0install__root = { { VSYMBOL, 13 }, "install-root" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[2]; } _V0_E = { { VSYMBOL, 2 }, "=" };
static struct { VBlob sym; char bytes[7]; } _V0system = { { VSYMBOL, 7 }, "system" };
static struct { VBlob sym; char bytes[6]; } _V0cdadr = { { VSYMBOL, 6 }, "cdadr" };
static struct { VBlob sym; char bytes[6]; } _V0caddr = { { VSYMBOL, 6 }, "caddr" };
static struct { VBlob sym; char bytes[6]; } _V0cdddr = { { VSYMBOL, 6 }, "cdddr" };
static struct { VBlob sym; char bytes[12]; } _V0string__copy = { { VSYMBOL, 12 }, "string-copy" };
static struct { VBlob sym; char bytes[6]; } _V0cadar = { { VSYMBOL, 6 }, "cadar" };
static struct { VBlob sym; char bytes[15]; } _V0symbol___Gstring = { { VSYMBOL, 15 }, "symbol->string" };
static struct { VBlob sym; char bytes[7]; } _V0member = { { VSYMBOL, 7 }, "member" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[5]; } _V0caar = { { VSYMBOL, 5 }, "caar" };
static struct { VBlob sym; char bytes[7]; } _V0caddar = { { VSYMBOL, 7 }, "caddar" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[5]; } _V0memv = { { VSYMBOL, 5 }, "memv" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[8]; } _V10string_D1197 = { { VSTRING, 8 }, "pointer" };
static struct { VBlob sym; char bytes[15]; } _V10string_D1196 = { { VSTRING, 15 }, "parameter_list" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1195 = { { VSTRING, 9 }, "function" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1194 = { { VSTRING, 17 }, "unknown typename" };
static struct { VBlob sym; char bytes[6]; } _V0longs = { { VSYMBOL, 6 }, "longs" };
static struct { VBlob sym; char bytes[8]; } _V0special = { { VSYMBOL, 8 }, "special" };
static struct { VBlob sym; char bytes[29]; } _V10string_D1193 = { { VSTRING, 29 }, "unsupported type combination" };
static struct { VBlob sym; char bytes[9]; } _V0restrict = { { VSYMBOL, 9 }, "restrict" };
static struct { VBlob sym; char bytes[7]; } _V0static = { { VSYMBOL, 7 }, "static" };
static struct { VBlob sym; char bytes[9]; } _V0unsigned = { { VSYMBOL, 9 }, "unsigned" };
static struct { VBlob sym; char bytes[7]; } _V0signed = { { VSYMBOL, 7 }, "signed" };
static struct { VBlob sym; char bytes[40]; } _V10string_D1192 = { { VSTRING, 40 }, "Can only have one type in a declaration" };
static struct { VBlob sym; char bytes[43]; } _V10string_D1191 = { { VSTRING, 43 }, "Multiple storage specifiers in declaration" };
static struct { VBlob sym; char bytes[44]; } _V10string_D1190 = { { VSTRING, 44 }, "Unexpected storage specifier in declaration" };
static struct { VBlob sym; char bytes[7]; } _V0extern = { { VSYMBOL, 7 }, "extern" };
static struct { VBlob sym; char bytes[9]; } _V0register = { { VSYMBOL, 9 }, "register" };
static struct { VBlob sym; char bytes[5]; } _V0auto = { { VSYMBOL, 5 }, "auto" };
static struct { VBlob sym; char bytes[9]; } _V0volatile = { { VSYMBOL, 9 }, "volatile" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1189 = { { VSTRING, 22 }, "Unsupported C typedef" };
static struct { VBlob sym; char bytes[9]; } _V0variable = { { VSYMBOL, 9 }, "variable" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1188 = { { VSTRING, 21 }, "Not a simple typedef" };
static struct { VBlob sym; char bytes[26]; } _V10string_D1187 = { { VSTRING, 26 }, "Unsupported C declaration" };
static struct { VBlob sym; char bytes[43]; } _V10string_D1186 = { { VSTRING, 43 }, "Unsupported arg type in C foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1185 = { { VSTRING, 38 }, "Not a simple function declaration: ~A" };
static struct { VBlob sym; char bytes[46]; } _V10string_D1184 = { { VSTRING, 46 }, "Unsupported return type in C foreign-function" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1183 = { { VSTRING, 5 }, "enum" };
static struct { VBlob sym; char bytes[8]; } _V10string_D1182 = { { VSTRING, 8 }, "typedef" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1181 = { { VSTRING, 27 }, "unknown entry in ffi table" };
static struct { VBlob sym; char bytes[8]; } _V0typedef = { { VSYMBOL, 8 }, "typedef" };
static struct { VBlob sym; char bytes[5]; } _V0enum = { { VSYMBOL, 5 }, "enum" };
static struct { VBlob sym; char bytes[9]; } _V0function = { { VSYMBOL, 9 }, "function" };
static struct { VBlob sym; char bytes[40]; } _V10string_D1180 = { { VSTRING, 40 }, "variable redeclared as different symbol" };
static struct { VBlob sym; char bytes[7]; } _V0define = { { VSYMBOL, 7 }, "define" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1179 = { { VSTRING, 19 }, "VForeignParseDeclC" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1178 = { { VSTRING, 37 }, "Declaration is not a single function" };
static struct { VBlob sym; char bytes[18]; } _V10string_D1177 = { { VSTRING, 18 }, "naked_declaration" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1176 = { { VSTRING, 12 }, "declaration" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1175 = { { VSTRING, 9 }, "toplevel" };
static struct { VBlob sym; char bytes[32]; } _V10string_D1174 = { { VSTRING, 32 }, "Invalid foreign function syntax" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1173 = { { VSTRING, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1172 = { { VSTRING, 7 }, "[ ~A ]" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1171 = { { VSTRING, 27 }, "Unable to open header file" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1170 = { { VSTRING, 33 }, "include/vscheme/stdc/sysv_amd64/" };
static struct { VBlob sym; char bytes[63]; } _V10string_D1169 = { { VSTRING, 63 }, "gcc -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w ~A -I~A/~A" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1168 = { { VSTRING, 21 }, "VForeignParseHeaderC" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1167 = { { VSTRING, 21 }, "VForeignReleaseParse" };
static struct { VBlob sym; char bytes[30]; } _V10string_D1166 = { { VSTRING, 30 }, "Invalid foreign import syntax" };
static struct { VBlob sym; char bytes[17]; } _V10foreign_Dimport = { { VSYMBOL, 17 }, "##foreign.import" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1165 = { { VSTRING, 2 }, "C" };
static struct { VBlob sym; char bytes[15]; } _V10string_D1164 = { { VSTRING, 15 }, "#include <~A>\n" };
static struct { VBlob sym; char bytes[18]; } _V10foreign_Ddeclare = { { VSYMBOL, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1163 = { { VSTRING, 22 }, "File must be a string" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1162 = { { VSTRING, 38 }, "Unsupported foreign function language" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1161 = { { VSTRING, 12 }, "_V30~A_shim" };
static struct { VBlob sym; char bytes[1]; } _V10string_D1160 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[14]; } _V10string_D1159 = { { VSTRING, 14 }, "VEncodeDouble" };
static struct { VBlob sym; char bytes[11]; } _V10string_D1158 = { { VSTRING, 11 }, "VEncodeInt" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1157 = { { VSTRING, 12 }, "VEncodeChar" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1156 = { { VSTRING, 12 }, "VEncodeBool" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1155 = { { VSTRING, 22 }, "VEncodeForeignPointer" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1154 = { { VSTRING, 20 }, "VCheckedDecodeVWORD" };
static struct { VBlob sym; char bytes[6]; } _V0VWORD = { { VSYMBOL, 6 }, "VWORD" };
static struct { VBlob sym; char bytes[6]; } _V0float = { { VSYMBOL, 6 }, "float" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1153 = { { VSTRING, 21 }, "VCheckedDecodeNumber" };
static struct { VBlob sym; char bytes[7]; } _V0double = { { VSYMBOL, 7 }, "double" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1152 = { { VSTRING, 27 }, "VCheckedDecodeUnsignedLong" };
static struct { VBlob sym; char bytes[14]; } _V0unsigned__long = { { VSYMBOL, 14 }, "unsigned-long" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1151 = { { VSTRING, 19 }, "VCheckedDecodeLong" };
static struct { VBlob sym; char bytes[5]; } _V0long = { { VSYMBOL, 5 }, "long" };
static struct { VBlob sym; char bytes[13]; } _V0unsigned__int = { { VSYMBOL, 13 }, "unsigned-int" };
static struct { VBlob sym; char bytes[18]; } _V10string_D1150 = { { VSTRING, 18 }, "VCheckedDecodeInt" };
static struct { VBlob sym; char bytes[4]; } _V0int = { { VSYMBOL, 4 }, "int" };
static struct { VBlob sym; char bytes[28]; } _V10string_D1149 = { { VSTRING, 28 }, "VCheckedDecodeUnsignedShort" };
static struct { VBlob sym; char bytes[15]; } _V0unsigned__short = { { VSYMBOL, 15 }, "unsigned-short" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1148 = { { VSTRING, 20 }, "VCheckedDecodeShort" };
static struct { VBlob sym; char bytes[6]; } _V0short = { { VSYMBOL, 6 }, "short" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1147 = { { VSTRING, 27 }, "VCheckedDecodeUnsignedChar" };
static struct { VBlob sym; char bytes[14]; } _V0unsigned__char = { { VSYMBOL, 14 }, "unsigned-char" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1146 = { { VSTRING, 25 }, "VCheckedDecodeSignedChar" };
static struct { VBlob sym; char bytes[12]; } _V0signed__char = { { VSYMBOL, 12 }, "signed-char" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1145 = { { VSTRING, 19 }, "VCheckedDecodeChar" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1144 = { { VSTRING, 19 }, "VCheckedDecodeBool" };
static struct { VBlob sym; char bytes[6]; } _V0_UBool = { { VSYMBOL, 6 }, "_Bool" };
static struct { VBlob sym; char bytes[29]; } _V10string_D1143 = { { VSTRING, 29 }, "VCheckedDecodeForeignPointer" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1142 = { { VSTRING, 22 }, "VCheckedDecodeVoidPtr" };
static struct { VBlob sym; char bytes[13]; } _V0void__pointer = { { VSYMBOL, 13 }, "void-pointer" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1141 = { { VSTRING, 27 }, "VCheckedDecodeConstVoidPtr" };
static struct { VBlob sym; char bytes[19]; } _V0const__void__pointer = { { VSYMBOL, 19 }, "const-void-pointer" };
static struct { VBlob sym; char bytes[6]; } _V0const = { { VSYMBOL, 6 }, "const" };
static struct { VBlob sym; char bytes[5]; } _V0char = { { VSYMBOL, 5 }, "char" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1140 = { { VSTRING, 27 }, "VCheckedDecodeConstCString" };
static struct { VBlob sym; char bytes[15]; } _V0const__c__string = { { VSYMBOL, 15 }, "const-c-string" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1139 = { { VSTRING, 22 }, "VCheckedDecodeCString" };
static struct { VBlob sym; char bytes[9]; } _V0c__string = { { VSYMBOL, 9 }, "c-string" };
static struct { VBlob sym; char bytes[8]; } _V0pointer = { { VSYMBOL, 8 }, "pointer" };
static struct { VBlob sym; char bytes[26]; } _V10string_D1138 = { { VSTRING, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[19]; } _V10foreign_Dfunction = { { VSYMBOL, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1137 = { { VSTRING, 17 }, "~A(_arg~A, \"~A\")" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1136 = { { VSTRING, 6 }, "~A;~N" };
static struct { VBlob sym; char bytes[39]; } _V10string_D1135 = { { VSTRING, 39 }, "void _V30~A_shim(V_CORE_ARGS, VWORD _k" };
static struct { VBlob sym; char bytes[15]; } _V10string_D1134 = { { VSTRING, 15 }, ", VWORD _arg~A" };
static struct { VBlob sym; char bytes[34]; } _V10string_D1133 = { { VSTRING, 34 }, "  V_ARG_CHECK2(\"~A\", ~A, argc);~N" };
static struct { VBlob sym; char bytes[62]; } _V10string_D1132 = { { VSTRING, 62 }, "  V_GC_CHECK2_VARARGS((VFunc)~A, runtime, statics, ~A, ~A, _k" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1131 = { { VSTRING, 9 }, ", _arg~A" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1130 = { { VSTRING, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1129 = { { VSTRING, 6 }, "));~N" };
static struct { VBlob sym; char bytes[5]; } _V0void = { { VSYMBOL, 5 }, "void" };
static struct { VBlob sym; char bytes[9]; } _V10string_D1128 = { { VSTRING, 9 }, "  }~N}~N" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1127 = { { VSTRING, 31 }, "  V_CALL(_k, runtime, _ret);~N" };
static struct { VBlob sym; char bytes[32]; } _V10string_D1126 = { { VSTRING, 32 }, "  V_CALL(_k, runtime, VVOID);~N" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1125 = { { VSTRING, 3 }, ", " };
static struct { VBlob sym; char bytes[24]; } _V10string_D1124 = { { VSTRING, 24 }, "    VWORD _ret = ~A(~A(" };
static struct { VBlob sym; char bytes[5]; } _V10string_D1123 = { { VSTRING, 5 }, "(~A(" };
static struct { VBlob sym; char bytes[23]; } _V0resolve__foreign__import = { { VSYMBOL, 23 }, "resolve-foreign-import" };
static struct { VBlob sym; char bytes[23]; } _V0print__foreign__function = { { VSYMBOL, 23 }, "print-foreign-function" };
static struct { VBlob sym; char bytes[26]; } _V0validate__foreign__function = { { VSYMBOL, 26 }, "validate-foreign-function" };
static struct { VBlob sym; char bytes[24]; } _V0mangle__foreign__function = { { VSYMBOL, 24 }, "mangle-foreign-function" };
static void _V0vanity_V0compiler_V0ffi_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k63" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k63, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.152 17 0) (##inline ##sys.cons (##inline ##sys.cons (quote mangle-foreign-function) (bruijn mangle-foreign-function 17 14)) (##inline ##sys.cons (##inline ##sys.cons (quote validate-foreign-function) (bruijn validate-foreign-function 17 10)) (##inline ##sys.cons (##inline ##sys.cons (quote print-foreign-function) (bruijn print-foreign-function 17 17)) (##inline ##sys.cons (##inline ##sys.cons (quote resolve-foreign-import) (bruijn resolve-foreign-import 17 13)) (quote ()))))))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0mangle__foreign__function.sym, VPOINTER_OTHER),
      VGetArg(upenv, 17-1, 14)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0validate__foreign__function.sym, VPOINTER_OTHER),
      VGetArg(upenv, 17-1, 10)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0print__foreign__function.sym, VPOINTER_OTHER),
      VGetArg(upenv, 17-1, 17)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0resolve__foreign__import.sym, VPOINTER_OTHER),
      VGetArg(upenv, 17-1, 13)
    )
,
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0print__foreign__function_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k71" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k71, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.190 1 0) (##inline ##sys.cdr (bruijn ##expr.144 5 0)) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
VGetArg(upenv, 5-1, 0)
    )
,
      VNULL
    );
 }
}
static void _V0loop_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k73" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k73, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.147 4 1) (bruijn ##k.201 1 0) (bruijn ##expr.149 2 1) (bruijn ##x.202 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k72" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.149 1 1))) ((bruijn reverse 33 12) (close _V0loop_k73) (bruijn ##args.146 1 2)) ((bruijn ##k.201 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 33-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k73, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k76" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k76, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.147 7 1) (bruijn ##k.195 2 0) (bruijn ##expr.149 5 1) (bruijn ##x.197 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k75" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 36 12) (close _V0loop_k76) (bruijn ##args.146 4 2))
V_CALL(VGetArg(upenv, 36-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k76, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda13" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.148 0 1) (close _V0loop_k75) (##inline ##sys.cdr (bruijn ##expr.149 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.149 3 1)) (bruijn ##args.146 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k75, env)}),
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
static void _V0loop_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 34 11) (bruijn ##k.194 0 0) (close _V0loop_lambda13))
V_CALL(VGetArg(upenv, 34-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda13, env)})
    );
 }
}
static void _V0loop_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k74" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 33 10) (bruijn ##k.192 1 0) (close _V0loop_lambda12) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 33-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda12, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda11" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda11, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k72) (close _V0loop_k74))
V_CALL_FUNC(_V0loop_k72, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k74, env)})
    );
 }
}
static void _V0print__foreign__function_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__foreign__function_lambda10" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0print__foreign__function_k71) (bruijn loop 0 1) (close _V0loop_lambda11))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k71, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda11, env)})
    );
 }
}
static void _V0print__foreign__function_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__foreign__function_lambda9" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__foreign__function_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__foreign__function_lambda10) (bruijn ##k.189 0 0) #f)
V_CALL_FUNC(_V0print__foreign__function_lambda10, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0print__foreign__function_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_lambda8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 29 11) (bruijn ##k.188 0 0) (close _V0print__foreign__function_lambda9))
V_CALL(VGetArg(upenv, 29-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda9, env)})
    );
 }
}
static void _V0print__foreign__function_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k98" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k98, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 53 3) (bruijn ##k.234 2 0) (##string ##string.1124) (bruijn ##x.235 0 0) (bruijn name 25 0))
V_CALL(VGetArg(upenv, 53-1, 3), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1124.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 25-1, 0)
    );
 }
}
static void _V0print__foreign__function_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k97" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 52 5) (close _V0print__foreign__function_k98) (bruijn ##x.236 0 0))
V_CALL(VGetArg(upenv, 52-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k98, env)}),
      _var0
    );
 }
}
static void _V0print__foreign__function_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k96" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.233 1 0) ((bruijn printf 51 3) (bruijn ##k.234 0 0) (##string ##string.1123) (bruijn name 23 0)) ((bruijn get-encoder 50 15) (close _V0print__foreign__function_k97) (bruijn ret 25 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 51-1, 3), runtime,
      _var0,
      VEncodePointer(&_V10string_D1123.sym, VPOINTER_OTHER),
      VGetArg(upenv, 23-1, 0)
    );
} else {
V_CALL(VGetArg(upenv, 50-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k97, env)}),
      VGetArg(upenv, 25-1, 0)
    );
}
 }
}
static void _V0print__foreign__function_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k107" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k107, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-arg 26 1) (bruijn ##k.227 1 0) (bruijn arg 1 1) (bruijn argname 1 2))
V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]
    );
 }
}
static void _V0print__foreign__function_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0print__foreign__function_lambda17" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0print__foreign__function_lambda17, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda17, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn printf 59 3) (close _V0print__foreign__function_k107) (##string ##string.1125))
V_CALL(VGetArg(upenv, 59-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k107, env)}),
      VEncodePointer(&_V10string_D1125.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k106" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 58 6) (bruijn ##k.225 5 0) (close _V0print__foreign__function_lambda17) (bruijn ##x.229 1 0) (bruijn ##x.230 0 0))
V_CALL(VGetArg(upenv, 58-1, 6), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda17, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__function_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k105" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 57 5) (close _V0print__foreign__function_k106) (bruijn names 24 2))
V_CALL(VGetArg(upenv, 57-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k106, env)}),
      VGetArg(upenv, 24-1, 2)
    );
 }
}
static void _V0print__foreign__function_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k104" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 56 5) (close _V0print__foreign__function_k105) (bruijn args 27 2))
V_CALL(VGetArg(upenv, 56-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k105, env)}),
      VGetArg(upenv, 27-1, 2)
    );
 }
}
static void _V0print__foreign__function_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k103" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn print-arg 21 1) (close _V0print__foreign__function_k104) (bruijn ##x.231 1 0) (bruijn ##x.232 0 0))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k104, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__function_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k102" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 54 7) (close _V0print__foreign__function_k103) (bruijn names 21 2))
V_CALL(VGetArg(upenv, 54-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k103, env)}),
      VGetArg(upenv, 21-1, 2)
    );
 }
}
static void _V0print__foreign__function_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k101" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.224 1 0) ((bruijn car 53 7) (close _V0print__foreign__function_k102) (bruijn args 24 2)) ((bruijn ##k.225 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 53-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k102, env)}),
      VGetArg(upenv, 24-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__foreign__function_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k111" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k111, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.222 1 0) ((bruijn printf 56 3) (bruijn ##k.223 0 0) (##string ##string.1126)) ((bruijn printf 56 3) (bruijn ##k.223 0 0) (##string ##string.1127)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 56-1, 3), runtime,
      _var0,
      VEncodePointer(&_V10string_D1126.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 56-1, 3), runtime,
      _var0,
      VEncodePointer(&_V10string_D1127.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0print__foreign__function_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k112" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k112, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 56 3) (bruijn ##k.208 22 0) (##string ##string.1128))
V_CALL(VGetArg(upenv, 56-1, 3), runtime,
      VGetArg(upenv, 22-1, 0),
      VEncodePointer(&_V10string_D1128.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k110" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__foreign__function_k111) (close _V0print__foreign__function_k112))
V_CALL_FUNC(_V0print__foreign__function_k111, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k112, env)})
    );
 }
}
static void _V0print__foreign__function_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k109" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 54 4) (close _V0print__foreign__function_k110) (bruijn ret 28 0) (quote void))
V_CALL(VGetArg(upenv, 54-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k110, env)}),
      VGetArg(upenv, 28-1, 0),
      VEncodePointer(&_V0void.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k108" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 53 3) (close _V0print__foreign__function_k109) (##string ##string.1129))
V_CALL(VGetArg(upenv, 53-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k109, env)}),
      VEncodePointer(&_V10string_D1129.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k100" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__foreign__function_k101) (close _V0print__foreign__function_k108))
V_CALL_FUNC(_V0print__foreign__function_k101, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k108, env)})
    );
 }
}
static void _V0print__foreign__function_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k99" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 51 8) (close _V0print__foreign__function_k100) (bruijn args 22 2))
V_CALL(VGetArg(upenv, 51-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k100, env)}),
      VGetArg(upenv, 22-1, 2)
    );
 }
}
static void _V0print__foreign__function_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k95" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__foreign__function_k96) (close _V0print__foreign__function_k99))
V_CALL_FUNC(_V0print__foreign__function_k96, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k99, env)})
    );
 }
}
static void _V0print__foreign__function_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k94" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 49 4) (close _V0print__foreign__function_k95) (bruijn ret 23 0) (quote void))
V_CALL(VGetArg(upenv, 49-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k95, env)}),
      VGetArg(upenv, 23-1, 0),
      VEncodePointer(&_V0void.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k93" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 48 3) (close _V0print__foreign__function_k94) (##string ##string.1130))
V_CALL(VGetArg(upenv, 48-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k94, env)}),
      VEncodePointer(&_V10string_D1130.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__foreign__function_lambda18" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__foreign__function_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 48 3) (bruijn ##k.237 0 0) (##string ##string.1131) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 48-1, 3), runtime,
      _var0,
      VEncodePointer(&_V10string_D1131.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0print__foreign__function_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k92" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 47 6) (close _V0print__foreign__function_k93) (close _V0print__foreign__function_lambda18) (bruijn names 14 2))
V_CALL(VGetArg(upenv, 47-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k93, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda18, env)}),
      VGetArg(upenv, 14-1, 2)
    );
 }
}
static void _V0print__foreign__function_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k91" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 46 3) (close _V0print__foreign__function_k92) (##string ##string.1132) (bruijn mangled 13 1) (bruijn ##x.238 2 0) (bruijn ##x.239 0 0))
V_CALL(VGetArg(upenv, 46-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k92, env)}),
      VEncodePointer(&_V10string_D1132.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 1),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__function_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k90" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 45 9) (close _V0print__foreign__function_k91) 1 (bruijn ##x.240 0 0))
V_CALL(VGetArg(upenv, 45-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k91, env)}),
      VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0print__foreign__function_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k89" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 44 2) (close _V0print__foreign__function_k90) (bruijn args 15 2))
V_CALL(VGetArg(upenv, 44-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k90, env)}),
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0print__foreign__function_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k88" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 43 9) (close _V0print__foreign__function_k89) 1 (bruijn ##x.241 0 0))
V_CALL(VGetArg(upenv, 43-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k89, env)}),
      VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0print__foreign__function_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k87" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 42 2) (close _V0print__foreign__function_k88) (bruijn args 13 2))
V_CALL(VGetArg(upenv, 42-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k88, env)}),
      VGetArg(upenv, 13-1, 2)
    );
 }
}
static void _V0print__foreign__function_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k86" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 41 3) (close _V0print__foreign__function_k87) (##string ##string.1133) (bruijn mangled 8 1) (bruijn ##x.242 0 0))
V_CALL(VGetArg(upenv, 41-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k87, env)}),
      VEncodePointer(&_V10string_D1133.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1),
      _var0
    );
 }
}
static void _V0print__foreign__function_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k85" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 40 9) (close _V0print__foreign__function_k86) 1 (bruijn ##x.243 0 0))
V_CALL(VGetArg(upenv, 40-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k86, env)}),
      VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0print__foreign__function_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k84" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 39 2) (close _V0print__foreign__function_k85) (bruijn args 10 2))
V_CALL(VGetArg(upenv, 39-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k85, env)}),
      VGetArg(upenv, 10-1, 2)
    );
 }
}
static void _V0print__foreign__function_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k83" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 38 3) (close _V0print__foreign__function_k84) (##string ##string.1130))
V_CALL(VGetArg(upenv, 38-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k84, env)}),
      VEncodePointer(&_V10string_D1130.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__foreign__function_lambda19" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__foreign__function_lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 38 3) (bruijn ##k.244 0 0) (##string ##string.1134) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 38-1, 3), runtime,
      _var0,
      VEncodePointer(&_V10string_D1134.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0print__foreign__function_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k82" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 37 6) (close _V0print__foreign__function_k83) (close _V0print__foreign__function_lambda19) (bruijn names 4 2))
V_CALL(VGetArg(upenv, 37-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k83, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda19, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0print__foreign__function_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k81" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 36 3) (close _V0print__foreign__function_k82) (##string ##string.1135) (bruijn name 8 0))
V_CALL(VGetArg(upenv, 36-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k82, env)}),
      VEncodePointer(&_V10string_D1135.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 0)
    );
 }
}
static void _V0print__foreign__function_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k80" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 35 3) (close _V0print__foreign__function_k81) (##string ##string.1136) (##inline ##sys.car (bruijn ##expr.142 11 0)))
V_CALL(VGetArg(upenv, 35-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k81, env)}),
      VEncodePointer(&_V10string_D1136.sym, VPOINTER_OTHER),
      VInlineCar(
VGetArg(upenv, 11-1, 0)
    )

    );
 }
}
static void _V0print__arg_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__arg_k114" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__arg_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__arg_k114, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 37 3) (bruijn ##k.245 2 0) (##string ##string.1137) (bruijn ##x.246 0 0) (bruijn argname 2 2) (bruijn name 9 0))
V_CALL(VGetArg(upenv, 37-1, 3), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1137.sym, VPOINTER_OTHER),
      _var0,
      upenv->up->vars[2],
      VGetArg(upenv, 9-1, 0)
    );
 }
}
static void _V0print__arg_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__arg_k113" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__arg_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__arg_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 36 5) (close _V0print__arg_k114) (bruijn ##x.247 0 0))
V_CALL(VGetArg(upenv, 36-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__arg_k114, env)}),
      _var0
    );
 }
}
static void _V0print__arg_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0print__arg_lambda20" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0print__arg_lambda20, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__arg_lambda20, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn get-decoder 34 16) (close _V0print__arg_k113) (bruijn arg 0 1))
V_CALL(VGetArg(upenv, 34-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__arg_k113, env)}),
      _var1
    );
 }
}
static void _V0print__foreign__function_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__foreign__function_lambda16" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0print__foreign__function_k80) (bruijn print-arg 0 1) (close _V0print__arg_lambda20))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k80, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__arg_lambda20, env)})
    );
 }
}
static void _V0print__foreign__function_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0print__foreign__function_lambda15" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0print__foreign__function_lambda16) (bruijn ##k.207 0 0) #f)
V_CALL_FUNC(_V0print__foreign__function_lambda16, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0print__foreign__function_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k115" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k115, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.138 14 1) (bruijn ##k.204 4 0) (bruijn ##x.206 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__function_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k79" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__foreign__function_lambda15) (close _V0print__foreign__function_k115) (bruijn ##x.248 2 0) (bruijn ##x.249 0 0))
V_CALL_FUNC(_V0print__foreign__function_lambda15, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k115, env)}),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__function_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k78" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iota 31 1) (close _V0print__foreign__function_k79) (bruijn ##x.250 0 0))
V_CALL(VGetArg(upenv, 31-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k79, env)}),
      _var0
    );
 }
}
static void _V0print__foreign__function_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k77" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 30 2) (close _V0print__foreign__function_k78) (bruijn args 1 2))
V_CALL(VGetArg(upenv, 30-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k78, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0print__foreign__function_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0print__foreign__function_lambda14" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0print__foreign__function_lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda14, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn mangle-foreign-function 28 14) (close _V0print__foreign__function_k77) (bruijn name 1 0)) ((bruijn ##k.204 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 28-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k77, env)}),
      upenv->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__foreign__function_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k70" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 28 10) (bruijn ##k.181 7 0) (close _V0print__foreign__function_lambda8) (close _V0print__foreign__function_lambda14))
V_CALL(VGetArg(upenv, 28-1, 10), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda8, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda14, env)})
    );
 }
}
static void _V0print__foreign__function_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k69" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.144 0 0)) ((close _V0print__foreign__function_k70) (##inline ##sys.car (bruijn ##expr.144 0 0))) ((bruijn ##k.181 6 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__foreign__function_k70, env, runtime,
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
static void _V0print__foreign__function_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k68" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__foreign__function_k69) (##inline ##sys.cdr (bruijn ##expr.143 1 0)))
V_CALL_FUNC(_V0print__foreign__function_k69, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0print__foreign__function_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k67" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.143 0 0)) ((close _V0print__foreign__function_k68) (##inline ##sys.car (bruijn ##expr.143 0 0))) ((bruijn ##k.181 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__foreign__function_k68, env, runtime,
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
static void _V0print__foreign__function_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k66" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.142 0 0)) ((close _V0print__foreign__function_k67) (##inline ##sys.cdr (bruijn ##expr.142 0 0))) ((bruijn ##k.181 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__foreign__function_k67, env, runtime,
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
static void _V0print__foreign__function_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k65" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.141 0 0)) ((close _V0print__foreign__function_k66) (##inline ##sys.cdr (bruijn ##expr.141 0 0))) ((bruijn ##k.181 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__foreign__function_k66, env, runtime,
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
static void _V0print__foreign__function_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k64" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.183 0 0) ((close _V0print__foreign__function_k65) (##inline ##sys.cdr (bruijn ##expr.140 1 1))) ((bruijn ##k.181 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__foreign__function_k65, env, runtime,
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
static void _V0print__foreign__function_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__foreign__function_lambda7" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.140 0 1)) ((bruijn equal? 21 13) (close _V0print__foreign__function_k64) (quote ##foreign.function) (##inline ##sys.car (bruijn ##expr.140 0 1))) ((bruijn ##k.181 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k64, env)}),
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
static void _V0print__foreign__function_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k116" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k116, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 21 14) (bruijn ##k.179 1 0) (##string ##string.1138))
V_CALL(VGetArg(upenv, 21-1, 14), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1138.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__foreign__function_lambda6" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__foreign__function_lambda7) (close _V0print__foreign__function_k116) (bruijn ##input.139 0 1))
V_CALL_FUNC(_V0print__foreign__function_lambda7, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k116, env)}),
      _var1
    );
 }
}
static void _V0print__foreign__function_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__foreign__function_lambda5" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__foreign__function_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__foreign__function_lambda6) (bruijn ##k.178 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0print__foreign__function_lambda6, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0print__foreign__function_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0print__foreign__function_lambda4" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0print__foreign__function_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 18 11) (bruijn ##k.177 0 0) (close _V0print__foreign__function_lambda5))
V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda5, env)})
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k62" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k63) (bruijn print-foreign-function 16 17) (close _V0print__foreign__function_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k63, env)}),
      VEncodeInt(16l), VEncodeInt(17l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda4, env)})
    );
 }
}
static void _V0get__decoder_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k119" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k119, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 20 4) (bruijn ##k.315 1 0) (bruijn ##x.316 0 0) (quote pointer))
V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V0pointer.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0get__decoder_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k118" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.314 1 0) ((bruijn car 19 7) (close _V0get__decoder_k119) (bruijn type 2 1)) ((bruijn ##k.315 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 19-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k119, env)}),
      upenv->up->vars[1]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0get__decoder_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k123" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k123, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.283 1 0) ((bruijn ##kk.132 3 1) (bruijn ##k.284 0 0) (##inline ##sys.qcons (quote c-string) (quote (##string ##string.1139)))) ((bruijn ##k.284 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(upenv->up->up->vars[1], runtime,
      _var0,
      VInlineCons(
VEncodePointer(&_V0c__string.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1139.sym, VPOINTER_OTHER)
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0get__decoder_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k127" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k127, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.277 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.135 1 0))) ((bruijn ##kk.132 7 1) (bruijn ##k.273 3 0) (##inline ##sys.qcons (quote const-c-string) (quote (##string ##string.1140)))) ((bruijn ##k.273 3 0) #f)) ((bruijn ##k.273 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0const__c__string.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1140.sym, VPOINTER_OTHER)
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
static void _V0get__decoder_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k126" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.135 0 0)) ((bruijn equal? 26 13) (close _V0get__decoder_k127) (quote char) (##inline ##sys.car (bruijn ##expr.135 0 0))) ((bruijn ##k.273 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 26-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k127, env)}),
      VEncodePointer(&_V0char.sym, VPOINTER_OTHER),
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
static void _V0get__decoder_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k125" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.275 0 0) ((close _V0get__decoder_k126) (##inline ##sys.cdr (bruijn ##expr.134 1 1))) ((bruijn ##k.273 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0get__decoder_k126, env, runtime,
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
static void _V0get__decoder_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0get__decoder_lambda23" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.134 0 1)) ((bruijn equal? 24 13) (close _V0get__decoder_k125) (quote const) (##inline ##sys.car (bruijn ##expr.134 0 1))) ((bruijn ##k.273 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k125, env)}),
      VEncodePointer(&_V0const.sym, VPOINTER_OTHER),
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
static void _V0get__decoder_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k131" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k131, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.267 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.137 1 0))) ((bruijn ##kk.132 8 1) (bruijn ##k.263 3 0) (##inline ##sys.qcons (quote const-void-pointer) (quote (##string ##string.1141)))) ((bruijn ##k.263 3 0) #f)) ((bruijn ##k.263 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0const__void__pointer.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1141.sym, VPOINTER_OTHER)
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
static void _V0get__decoder_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k130" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 0)) ((bruijn equal? 27 13) (close _V0get__decoder_k131) (quote void) (##inline ##sys.car (bruijn ##expr.137 0 0))) ((bruijn ##k.263 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 27-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k131, env)}),
      VEncodePointer(&_V0void.sym, VPOINTER_OTHER),
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
static void _V0get__decoder_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k129" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.265 0 0) ((close _V0get__decoder_k130) (##inline ##sys.cdr (bruijn ##expr.136 1 1))) ((bruijn ##k.263 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0get__decoder_k130, env, runtime,
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
static void _V0get__decoder_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0get__decoder_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.136 0 1)) ((bruijn equal? 25 13) (close _V0get__decoder_k129) (quote const) (##inline ##sys.car (bruijn ##expr.136 0 1))) ((bruijn ##k.263 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k129, env)}),
      VEncodePointer(&_V0const.sym, VPOINTER_OTHER),
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
static void _V0get__decoder_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k134" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k134, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.260 1 0) ((bruijn ##kk.132 7 1) (bruijn ##k.261 0 0) (##inline ##sys.qcons (quote void-pointer) (quote (##string ##string.1142)))) ((bruijn ##k.261 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      _var0,
      VInlineCons(
VEncodePointer(&_V0void__pointer.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1142.sym, VPOINTER_OTHER)
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0get__decoder_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k135" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k135, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.132 7 1) (bruijn ##k.254 7 0) (##inline ##sys.qcons (quote void-pointer) (quote (##string ##string.1143))))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons(
VEncodePointer(&_V0void__pointer.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1143.sym, VPOINTER_OTHER)
    )

    );
 }
}
static void _V0get__decoder_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k133" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0get__decoder_k134) (close _V0get__decoder_k135))
V_CALL_FUNC(_V0get__decoder_k134, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k135, env)})
    );
 }
}
static void _V0get__decoder_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k132" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn equal? 25 13) (close _V0get__decoder_k133) (quote void) (bruijn ##input.133 4 0))
V_CALL(VGetArg(upenv, 25-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k133, env)}),
      VEncodePointer(&_V0void.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0get__decoder_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k128" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0get__decoder_lambda24) (close _V0get__decoder_k132) (bruijn ##input.133 3 0))
V_CALL_FUNC(_V0get__decoder_lambda24, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k132, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0get__decoder_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k124" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0get__decoder_lambda23) (close _V0get__decoder_k128) (bruijn ##input.133 2 0))
V_CALL_FUNC(_V0get__decoder_lambda23, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k128, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0get__decoder_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k122" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0get__decoder_k123) (close _V0get__decoder_k124))
V_CALL_FUNC(_V0get__decoder_k123, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k124, env)})
    );
 }
}
static void _V0get__decoder_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k121" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn equal? 21 13) (close _V0get__decoder_k122) (quote char) (bruijn ##input.133 0 0))
V_CALL(VGetArg(upenv, 21-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k122, env)}),
      VEncodePointer(&_V0char.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0get__decoder_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0get__decoder_lambda22" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0get__decoder_lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cadr 20 15) (close _V0get__decoder_k121) (bruijn type 3 1))
V_CALL(VGetArg(upenv, 20-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k121, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0get__decoder_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k120" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.253 0 0) ((bruijn call/cc 19 11) (bruijn ##k.252 2 0) (close _V0get__decoder_lambda22)) ((bruijn assv 19 16) (bruijn ##k.252 2 0) (bruijn type 2 1) (##inline ##sys.qcons (##inline ##sys.qcons (quote _Bool) (quote (##string ##string.1144))) (##inline ##sys.qcons (##inline ##sys.qcons (quote char) (quote (##string ##string.1145))) (##inline ##sys.qcons (##inline ##sys.qcons (quote signed-char) (quote (##string ##string.1146))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-char) (quote (##string ##string.1147))) (##inline ##sys.qcons (##inline ##sys.qcons (quote short) (quote (##string ##string.1148))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-short) (quote (##string ##string.1149))) (##inline ##sys.qcons (##inline ##sys.qcons (quote int) (quote (##string ##string.1150))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-int) (quote (##string ##string.1150))) (##inline ##sys.qcons (##inline ##sys.qcons (quote long) (quote (##string ##string.1151))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-long) (quote (##string ##string.1152))) (##inline ##sys.qcons (##inline ##sys.qcons (quote double) (quote (##string ##string.1153))) (##inline ##sys.qcons (##inline ##sys.qcons (quote float) (quote (##string ##string.1153))) (##inline ##sys.qcons (##inline ##sys.qcons (quote VWORD) (quote (##string ##string.1154))) (##inline ##sys.qcons (##inline ##sys.qcons (quote c-string) (quote (##string ##string.1139))) (quote ())))))))))))))))))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 11), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_lambda22, env)})
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_UBool.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1144.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1145.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0signed__char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1146.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1147.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0short.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1148.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__short.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1149.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0int.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1150.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__int.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1150.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0long.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1151.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__long.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1152.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0double.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1153.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0float.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1153.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0VWORD.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1154.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0c__string.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1139.sym, VPOINTER_OTHER)
    )
,
      VNULL
    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    );
}
 }
}
static void _V0get__decoder_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k117" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0get__decoder_k118) (close _V0get__decoder_k120))
V_CALL_FUNC(_V0get__decoder_k118, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k120, env)})
    );
 }
}
static void _V0get__decoder_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0get__decoder_lambda21" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0get__decoder_lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 17 8) (close _V0get__decoder_k117) (bruijn type 0 1))
V_CALL(VGetArg(upenv, 17-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k117, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k61" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k62) (bruijn get-decoder 15 16) (close _V0get__decoder_lambda21))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k62, env)}),
      VEncodeInt(15l), VEncodeInt(16l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_lambda21, env)})
    );
 }
}
static void _V0get__encoder_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__encoder_k138" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__encoder_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__encoder_k138, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 19 4) (bruijn ##k.346 1 0) (bruijn ##x.347 0 0) (quote pointer))
V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V0pointer.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0get__encoder_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__encoder_k137" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__encoder_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__encoder_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.345 1 0) ((bruijn car 18 7) (close _V0get__encoder_k138) (bruijn type 2 1)) ((bruijn ##k.346 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__encoder_k138, env)}),
      upenv->up->vars[1]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0get__encoder_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__encoder_k139" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__encoder_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__encoder_k139, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.318 0 0) ((bruijn ##k.317 2 0) (##inline ##sys.qcons (##inline ##sys.qcons (quote pointer) (##inline ##sys.qcons (quote void) (quote ()))) (quote (##string ##string.1155)))) ((bruijn assv 18 16) (bruijn ##k.317 2 0) (bruijn type 2 1) (##inline ##sys.qcons (##inline ##sys.qcons (quote void) (quote #t)) (##inline ##sys.qcons (##inline ##sys.qcons (quote _Bool) (quote (##string ##string.1156))) (##inline ##sys.qcons (##inline ##sys.qcons (quote char) (quote (##string ##string.1157))) (##inline ##sys.qcons (##inline ##sys.qcons (quote signed-char) (quote (##string ##string.1158))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-char) (quote (##string ##string.1158))) (##inline ##sys.qcons (##inline ##sys.qcons (quote short) (quote (##string ##string.1158))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-short) (quote (##string ##string.1158))) (##inline ##sys.qcons (##inline ##sys.qcons (quote int) (quote (##string ##string.1158))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-int) (quote (##string ##string.1158))) (##inline ##sys.qcons (##inline ##sys.qcons (quote double) (quote (##string ##string.1159))) (##inline ##sys.qcons (##inline ##sys.qcons (quote float) (quote (##string ##string.1159))) (##inline ##sys.qcons (##inline ##sys.qcons (quote VWORD) (quote (##string ##string.1160))) (quote ())))))))))))))))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0pointer.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0void.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VEncodePointer(&_V10string_D1155.sym, VPOINTER_OTHER)
    )

    );
} else {
V_CALL(VGetArg(upenv, 18-1, 16), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0void.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0_UBool.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1156.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1157.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0signed__char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1158.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1158.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0short.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1158.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__short.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1158.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0int.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1158.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__int.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1158.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0double.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1159.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0float.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1159.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0VWORD.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1160.sym, VPOINTER_OTHER)
    )
,
      VNULL
    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    )

    );
}
 }
}
static void _V0get__encoder_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__encoder_k136" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__encoder_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__encoder_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0get__encoder_k137) (close _V0get__encoder_k139))
V_CALL_FUNC(_V0get__encoder_k137, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__encoder_k139, env)})
    );
 }
}
static void _V0get__encoder_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0get__encoder_lambda25" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0get__encoder_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__encoder_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 16 8) (close _V0get__encoder_k136) (bruijn type 0 1))
V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__encoder_k136, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k60" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k61) (bruijn get-encoder 14 15) (close _V0get__encoder_lambda25))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k61, env)}),
      VEncodeInt(14l), VEncodeInt(15l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__encoder_lambda25, env)})
    );
 }
}
static void _V0mangle__foreign__function_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0mangle__foreign__function_lambda26" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0mangle__foreign__function_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__foreign__function_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 15 17) (bruijn ##k.348 0 0) (##string ##string.1161) (bruijn name 0 1))
V_CALL(VGetArg(upenv, 15-1, 17), runtime,
      _var0,
      VEncodePointer(&_V10string_D1161.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k59" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k60) (bruijn mangle-foreign-function 13 14) (close _V0mangle__foreign__function_lambda26))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k60, env)}),
      VEncodeInt(13l), VEncodeInt(14l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__foreign__function_lambda26, env)})
    );
 }
}
static void _V0resolve__foreign__import_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k150" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k150, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.378 1 0) ((bruijn compiler-error 29 23) (bruijn ##k.379 0 0) (##string ##string.1162) (bruijn expr 15 1)) ((bruijn ##k.379 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 29-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1162.sym, VPOINTER_OTHER),
      VGetArg(upenv, 15-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0resolve__foreign__import_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k154" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k154, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.375 1 0) ((bruijn compiler-error 32 23) (bruijn ##k.376 0 0) (##string ##string.1163) (bruijn expr 18 1)) ((bruijn ##k.376 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 32-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1163.sym, VPOINTER_OTHER),
      VGetArg(upenv, 18-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0resolve__foreign__import_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k166" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k166, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.127 23 1) (bruijn ##k.357 21 0) (bruijn ##x.363 0 0))
V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      VGetArg(upenv, 21-1, 0),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k165" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 42 19) (close _V0resolve__foreign__import_k166) (##inline ##sys.cons (quote ##foreign.declare) (##inline ##sys.cons (bruijn ##x.372 2 0) (quote ()))) (bruijn ##x.369 0 0))
V_CALL(VGetArg(upenv, 42-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k166, env)}),
      VInlineCons(
VEncodePointer(&_V10foreign_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->vars[0],
      VNULL
    )

    )
,
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k164" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn table->defines 40 8) (close _V0resolve__foreign__import_k165) (bruijn ##x.370 0 0) (quote ()))
V_CALL(VGetArg(upenv, 40-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k165, env)}),
      _var0,
      VNULL
    );
 }
}
static void _V0resolve__foreign__import_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k163" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn unwrap-declares 39 7) (close _V0resolve__foreign__import_k164) (bruijn parse 3 0) (quote ()))
V_CALL(VGetArg(upenv, 39-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k164, env)}),
      upenv->up->up->vars[0],
      VNULL
    );
 }
}
static void _V0resolve__foreign__import_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k162" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn sprintf 39 17) (close _V0resolve__foreign__import_k163) (##string ##string.1164) (bruijn file 13 0))
V_CALL(VGetArg(upenv, 39-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k163, env)}),
      VEncodePointer(&_V10string_D1164.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 0)
    );
 }
}
static void _V0resolve__foreign__import_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k161" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn close-port 38 20) (close _V0resolve__foreign__import_k162) (bruijn fd 3 0))
V_CALL(VGetArg(upenv, 38-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k162, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0resolve__foreign__import_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k160" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn release-parse 22 2) (close _V0resolve__foreign__import_k161))
V_CALL(VGetArg(upenv, 22-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k161, env)})
    );
 }
}
static void _V0resolve__foreign__import_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k159" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn deep-copy 35 9) (close _V0resolve__foreign__import_k160) (bruijn ##x.373 0 0))
V_CALL(VGetArg(upenv, 35-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k160, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k158" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn parse-header-c 20 1) (close _V0resolve__foreign__import_k159) (bruijn fd 0 0))
V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k159, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k157" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn open-input-process 34 18) (close _V0resolve__foreign__import_k158) (bruijn cmd 0 0))
V_CALL(VGetArg(upenv, 34-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k158, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k156" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-preprocess-command 32 12) (close _V0resolve__foreign__import_k157) (bruijn ##x.374 0 0))
V_CALL(VGetArg(upenv, 32-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k157, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k155" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn find-file 31 11) (close _V0resolve__foreign__import_k156) (bruijn file 6 0) (bruijn paths 18 2))
V_CALL(VGetArg(upenv, 31-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k156, env)}),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 18-1, 2)
    );
 }
}
static void _V0resolve__foreign__import_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k153" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0resolve__foreign__import_k154) (close _V0resolve__foreign__import_k155))
V_CALL_FUNC(_V0resolve__foreign__import_k154, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k155, env)})
    );
 }
}
static void _V0resolve__foreign__import_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k152" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 30 21) (close _V0resolve__foreign__import_k153) (bruijn ##x.377 0 0))
V_CALL(VGetArg(upenv, 30-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k153, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k151" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string? 29 22) (close _V0resolve__foreign__import_k152) (bruijn file 3 0))
V_CALL(VGetArg(upenv, 29-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k152, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0resolve__foreign__import_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k149" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0resolve__foreign__import_k150) (close _V0resolve__foreign__import_k151))
V_CALL_FUNC(_V0resolve__foreign__import_k150, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k151, env)})
    );
 }
}
static void _V0resolve__foreign__import_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k148" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 27 21) (close _V0resolve__foreign__import_k149) (bruijn ##x.380 0 0))
V_CALL(VGetArg(upenv, 27-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k149, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k147" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.131 1 0))) ((bruijn equal? 26 13) (close _V0resolve__foreign__import_k148) (##inline ##sys.car (bruijn ##expr.130 2 0)) (##string ##string.1165)) ((bruijn ##k.357 4 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 26-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k148, env)}),
      VInlineCar(
upenv->up->vars[0]
    )
,
      VEncodePointer(&_V10string_D1165.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0resolve__foreign__import_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k146" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.131 0 0)) ((close _V0resolve__foreign__import_k147) (##inline ##sys.car (bruijn ##expr.131 0 0))) ((bruijn ##k.357 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0resolve__foreign__import_k147, env, runtime,
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
static void _V0resolve__foreign__import_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k145" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.130 0 0)) ((close _V0resolve__foreign__import_k146) (##inline ##sys.cdr (bruijn ##expr.130 0 0))) ((bruijn ##k.357 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0resolve__foreign__import_k146, env, runtime,
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
static void _V0resolve__foreign__import_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k144" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.359 0 0) ((close _V0resolve__foreign__import_k145) (##inline ##sys.cdr (bruijn ##expr.129 1 1))) ((bruijn ##k.357 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0resolve__foreign__import_k145, env, runtime,
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
static void _V0resolve__foreign__import_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_lambda31" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.129 0 1)) ((bruijn equal? 22 13) (close _V0resolve__foreign__import_k144) (quote ##foreign.import) (##inline ##sys.car (bruijn ##expr.129 0 1))) ((bruijn ##k.357 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k144, env)}),
      VEncodePointer(&_V10foreign_Dimport.sym, VPOINTER_OTHER),
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
static void _V0resolve__foreign__import_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k168" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k168, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.127 3 1) (bruijn ##k.354 2 0) (bruijn ##x.356 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k167" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn compiler-error 22 23) (close _V0resolve__foreign__import_k168) (##string ##string.1166) (bruijn expr 8 1))
V_CALL(VGetArg(upenv, 22-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k168, env)}),
      VEncodePointer(&_V10string_D1166.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0resolve__foreign__import_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_lambda30" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0resolve__foreign__import_lambda31) (close _V0resolve__foreign__import_k167) (bruijn ##input.128 0 1))
V_CALL_FUNC(_V0resolve__foreign__import_lambda31, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k167, env)}),
      _var1
    );
 }
}
static void _V0resolve__foreign__import_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_lambda29" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0resolve__foreign__import_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0resolve__foreign__import_lambda30) (bruijn ##k.353 0 0) (bruijn expr 6 1))
V_CALL_FUNC(_V0resolve__foreign__import_lambda30, env, runtime,
      _var0,
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0resolve__foreign__import_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k143" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 11) (bruijn ##k.350 4 0) (close _V0resolve__foreign__import_lambda29))
V_CALL(VGetArg(upenv, 19-1, 11), runtime,
      upenv->up->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_lambda29, env)})
    );
 }
}
static void _V0resolve__foreign__import_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k142" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0resolve__foreign__import_k143) (bruijn release-parse 3 2) (bruijn ##x.383 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k143, env)}),
      VEncodeInt(3l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k141" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.function (close _V0resolve__foreign__import_k142) (##string ##string.1167))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k142, env)}),
      VEncodePointer(&_V10string_D1167.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0resolve__foreign__import_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k140" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0resolve__foreign__import_k141) (bruijn parse-header-c 1 1) (bruijn ##x.384 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k141, env)}),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_lambda28" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_lambda28, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (##vcore.function (close _V0resolve__foreign__import_k140) (##string ##string.1168))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k140, env)}),
      VEncodePointer(&_V10string_D1168.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0resolve__foreign__import_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_lambda27" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0resolve__foreign__import_lambda27, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_lambda27, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0resolve__foreign__import_lambda28) (bruijn ##k.349 0 0) #f #f)
V_CALL_FUNC(_V0resolve__foreign__import_lambda28, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k58" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k59) (bruijn resolve-foreign-import 12 13) (close _V0resolve__foreign__import_lambda27))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k59, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_lambda27, env)})
    );
 }
}
static void _V0make__preprocess__command_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0make__preprocess__command_lambda32" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0make__preprocess__command_lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__preprocess__command_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 13 17) (bruijn ##k.385 0 0) (##string ##string.1169) (bruijn file 0 1) (bruijn install-root 13 24) (##string ##string.1170))
V_CALL(VGetArg(upenv, 13-1, 17), runtime,
      _var0,
      VEncodePointer(&_V10string_D1169.sym, VPOINTER_OTHER),
      _var1,
      VGetArg(upenv, 13-1, 24),
      VEncodePointer(&_V10string_D1170.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k57" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k58) (bruijn make-preprocess-command 11 12) (close _V0make__preprocess__command_lambda32))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k58, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__preprocess__command_lambda32, env)})
    );
 }
}
static void _V0find__file_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0find__file_k175" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0find__file_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__file_k175, runtime, upenv, 1, argc, _var0) {
  // ((bruijn find-file 18 11) (bruijn ##k.386 7 0) (bruijn file 7 1) (bruijn ##x.389 0 0))
V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 7-1, 1),
      _var0
    );
 }
}
static void _V0find__file_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0find__file_k174" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0find__file_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__file_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.388 0 0) ((bruijn ##k.386 6 0) (bruijn path 3 0)) ((bruijn cdr 18 5) (close _V0find__file_k175) (bruijn paths 6 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      upenv->up->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__file_k175, env)}),
      VGetArg(upenv, 6-1, 2)
    );
}
 }
}
static void _V0find__file_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0find__file_k173" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0find__file_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__file_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 17 26) (close _V0find__file_k174) 0 (bruijn ##x.390 0 0))
V_CALL(VGetArg(upenv, 17-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__file_k174, env)}),
      VEncodeInt(0l),
      _var0
    );
 }
}
static void _V0find__file_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0find__file_k172" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0find__file_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__file_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn system 16 27) (close _V0find__file_k173) (bruijn ##x.391 0 0))
V_CALL(VGetArg(upenv, 16-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__file_k173, env)}),
      _var0
    );
 }
}
static void _V0find__file_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0find__file_k171" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0find__file_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__file_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn sprintf 15 17) (close _V0find__file_k172) (##string ##string.1172) (bruijn path 0 0))
V_CALL(VGetArg(upenv, 15-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__file_k172, env)}),
      VEncodePointer(&_V10string_D1172.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0find__file_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0find__file_k170" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0find__file_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__file_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn sprintf 14 17) (close _V0find__file_k171) (##string ##string.1173) (bruijn ##x.392 0 0) (bruijn file 2 1))
V_CALL(VGetArg(upenv, 14-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__file_k171, env)}),
      VEncodePointer(&_V10string_D1173.sym, VPOINTER_OTHER),
      _var0,
      upenv->up->vars[1]
    );
 }
}
static void _V0find__file_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0find__file_k169" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0find__file_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__file_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.387 0 0) ((bruijn compiler-error 13 23) (bruijn ##k.386 1 0) (##string ##string.1171) (bruijn file 1 1)) ((bruijn car 13 7) (close _V0find__file_k170) (bruijn paths 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1171.sym, VPOINTER_OTHER),
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 13-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__file_k170, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0find__file_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0find__file_lambda33" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0find__file_lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__file_lambda33, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 12 25) (close _V0find__file_k169) (bruijn paths 0 2))
V_CALL(VGetArg(upenv, 12-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__file_k169, env)}),
      _var2
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k56" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k57) (bruijn find-file 10 11) (close _V0find__file_lambda33))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k57, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__file_lambda33, env)})
    );
 }
}
static void _V0validate__foreign__function_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k188" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k188, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.423 1 0) ((bruijn compiler-error 28 23) (bruijn ##k.424 0 0) (##string ##string.1162) (bruijn lang 5 0)) ((bruijn ##k.424 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 28-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1162.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0validate__foreign__function_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k200" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k200, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.122 21 1) (bruijn ##k.402 19 0) (##inline ##sys.cons (quote ##foreign.function) (##inline ##sys.cons (quote (##string ##string.1165)) (##inline ##sys.cons (bruijn decl 14 0) (##inline ##sys.cons (bruijn ##x.414 2 0) (##inline ##sys.cons (bruijn ##x.416 1 0) (bruijn ##x.417 0 0)))))))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VGetArg(upenv, 19-1, 0),
      VInlineCons(
VEncodePointer(&_V10foreign_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D1165.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 14-1, 0),
      VInlineCons(
upenv->up->vars[0],
      VInlineCons(
upenv->vars[0],
      _var0
    )

    )

    )

    )

    )

    );
 }
}
static void _V0validate__foreign__function_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k199" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdddr 38 30) (close _V0validate__foreign__function_k200) (bruijn ff 2 0))
V_CALL(VGetArg(upenv, 38-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k200, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0validate__foreign__function_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k198" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 37 15) (close _V0validate__foreign__function_k199) (bruijn ff 1 0))
V_CALL(VGetArg(upenv, 37-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k199, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0validate__foreign__function_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k197" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caddr 36 29) (close _V0validate__foreign__function_k198) (bruijn ff 0 0))
V_CALL(VGetArg(upenv, 36-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k198, env)}),
      _var0
    );
 }
}
static void _V0validate__foreign__function_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k196" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn unwrap-function 34 5) (close _V0validate__foreign__function_k197) (bruijn ##x.418 1 0) (bruijn ##x.419 0 0) (quote ()))
V_CALL(VGetArg(upenv, 34-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k197, env)}),
      upenv->vars[0],
      _var0,
      VNULL
    );
 }
}
static void _V0validate__foreign__function_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k195" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 34 15) (close _V0validate__foreign__function_k196) (bruijn parse 3 0))
V_CALL(VGetArg(upenv, 34-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k196, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0validate__foreign__function_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k194" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reduce-type 32 3) (close _V0validate__foreign__function_k195) (bruijn ##x.420 0 0) (quote ()) #t)
V_CALL(VGetArg(upenv, 32-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k195, env)}),
      _var0,
      VNULL,
      VEncodeBool(true)
    );
 }
}
static void _V0validate__foreign__function_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k193" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 32 7) (close _V0validate__foreign__function_k194) (bruijn parse 1 0))
V_CALL(VGetArg(upenv, 32-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k194, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0validate__foreign__function_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k192" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn release-parse 19 2) (close _V0validate__foreign__function_k193))
V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k193, env)})
    );
 }
}
static void _V0validate__foreign__function_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k191" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn is-one-decl 18 3) (close _V0validate__foreign__function_k192) (bruijn ##x.421 0 0))
V_CALL(VGetArg(upenv, 18-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k192, env)}),
      _var0
    );
 }
}
static void _V0validate__foreign__function_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k190" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn deep-copy 28 9) (close _V0validate__foreign__function_k191) (bruijn ##x.422 0 0))
V_CALL(VGetArg(upenv, 28-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k191, env)}),
      _var0
    );
 }
}
static void _V0validate__foreign__function_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k189" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn parse-decl-c 16 1) (close _V0validate__foreign__function_k190) (bruijn decl 3 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k190, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0validate__foreign__function_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k187" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0validate__foreign__function_k188) (close _V0validate__foreign__function_k189))
V_CALL_FUNC(_V0validate__foreign__function_k188, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k189, env)})
    );
 }
}
static void _V0validate__foreign__function_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k186" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 26 21) (close _V0validate__foreign__function_k187) (bruijn ##x.425 0 0))
V_CALL(VGetArg(upenv, 26-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k187, env)}),
      _var0
    );
 }
}
static void _V0validate__foreign__function_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k185" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.126 1 0))) ((bruijn equal? 25 13) (close _V0validate__foreign__function_k186) (bruijn lang 2 0) (##string ##string.1165)) ((bruijn ##k.402 5 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 25-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k186, env)}),
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1165.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0validate__foreign__function_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k184" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.126 0 0)) ((close _V0validate__foreign__function_k185) (##inline ##sys.car (bruijn ##expr.126 0 0))) ((bruijn ##k.402 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0validate__foreign__function_k185, env, runtime,
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
static void _V0validate__foreign__function_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k183" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0validate__foreign__function_k184) (##inline ##sys.cdr (bruijn ##expr.125 1 0)))
V_CALL_FUNC(_V0validate__foreign__function_k184, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0validate__foreign__function_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k182" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.125 0 0)) ((close _V0validate__foreign__function_k183) (##inline ##sys.car (bruijn ##expr.125 0 0))) ((bruijn ##k.402 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0validate__foreign__function_k183, env, runtime,
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
static void _V0validate__foreign__function_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k181" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.404 0 0) ((close _V0validate__foreign__function_k182) (##inline ##sys.cdr (bruijn ##expr.124 1 1))) ((bruijn ##k.402 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0validate__foreign__function_k182, env, runtime,
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
static void _V0validate__foreign__function_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_lambda38" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.124 0 1)) ((bruijn equal? 20 13) (close _V0validate__foreign__function_k181) (quote ##foreign.function) (##inline ##sys.car (bruijn ##expr.124 0 1))) ((bruijn ##k.402 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k181, env)}),
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
static void _V0validate__foreign__function_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k202" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k202, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.122 3 1) (bruijn ##k.399 2 0) (bruijn ##x.401 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0validate__foreign__function_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k201" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn compiler-error 20 23) (close _V0validate__foreign__function_k202) (##string ##string.1174) (bruijn expr 9 1))
V_CALL(VGetArg(upenv, 20-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k202, env)}),
      VEncodePointer(&_V10string_D1174.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0validate__foreign__function_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_lambda37" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0validate__foreign__function_lambda38) (close _V0validate__foreign__function_k201) (bruijn ##input.123 0 1))
V_CALL_FUNC(_V0validate__foreign__function_lambda38, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k201, env)}),
      _var1
    );
 }
}
static void _V0validate__foreign__function_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_lambda36" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0validate__foreign__function_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0validate__foreign__function_lambda37) (bruijn ##k.398 0 0) (bruijn expr 7 1))
V_CALL_FUNC(_V0validate__foreign__function_lambda37, env, runtime,
      _var0,
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0validate__foreign__function_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k180" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 17 11) (bruijn ##k.394 5 0) (close _V0validate__foreign__function_lambda36))
V_CALL(VGetArg(upenv, 17-1, 11), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_lambda36, env)})
    );
 }
}
static void _V0is__one__decl_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k204" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k204, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.464 1 0) (##sys.blob=? (bruijn ##k.465 0 0) (##string ##string.1175) (##inline ##sys.car (bruijn ##expr.114 2 1))) ((bruijn ##k.465 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1175.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->up->vars[1]
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0is__one__decl_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k209" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k209, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.460 1 0) (##sys.blob=? (bruijn ##k.461 0 0) (##string ##string.1176) (##inline ##sys.car (bruijn ##expr.116 2 0))) ((bruijn ##k.461 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1176.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->up->vars[0]
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0is__one__decl_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k213" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k213, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.112 11 1) (bruijn ##k.447 9 0) (bruijn ##x.457 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0
    );
 }
}
static void _V0is__one__decl_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k212" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.118 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.118 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.115 5 0))) ((bruijn cdadr 28 28) (close _V0is__one__decl_k213) (bruijn parse 11 1)) ((bruijn ##k.447 8 0) #f)) ((bruijn ##k.447 8 0) #f)) ((bruijn ##k.447 8 0) #f))
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
VGetArg(upenv, 5-1, 0)
    )

    )
)) {
V_CALL(VGetArg(upenv, 28-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k213, env)}),
      VGetArg(upenv, 11-1, 1)
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
} else {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0is__one__decl_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k211" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.117 0 0)) ((close _V0is__one__decl_k212) (##inline ##sys.cdr (bruijn ##expr.117 0 0))) ((bruijn ##k.447 7 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0is__one__decl_k212, env, runtime,
      VInlineCdr(
_var0
    )

    );
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0is__one__decl_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k210" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.452 0 0) ((close _V0is__one__decl_k211) (##inline ##sys.cdr (bruijn ##expr.116 2 0))) ((bruijn ##k.447 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0is__one__decl_k211, env, runtime,
      VInlineCdr(
upenv->up->vars[0]
    )

    );
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0is__one__decl_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k208" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0is__one__decl_k209) (close _V0is__one__decl_k210))
V_CALL_FUNC(_V0is__one__decl_k209, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k210, env)})
    );
 }
}
static void _V0is__one__decl_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k207" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.116 0 0)) (##sys.string? (close _V0is__one__decl_k208) (##inline ##sys.car (bruijn ##expr.116 0 0))) ((bruijn ##k.447 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k208, env)}),
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
static void _V0is__one__decl_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k206" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.115 0 0)) ((close _V0is__one__decl_k207) (##inline ##sys.car (bruijn ##expr.115 0 0))) ((bruijn ##k.447 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0is__one__decl_k207, env, runtime,
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
static void _V0is__one__decl_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k205" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.449 0 0) ((close _V0is__one__decl_k206) (##inline ##sys.cdr (bruijn ##expr.114 2 1))) ((bruijn ##k.447 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0is__one__decl_k206, env, runtime,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0is__one__decl_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k203" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0is__one__decl_k204) (close _V0is__one__decl_k205))
V_CALL_FUNC(_V0is__one__decl_k204, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k205, env)})
    );
 }
}
static void _V0is__one__decl_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0is__one__decl_lambda42" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.114 0 1)) (##sys.string? (close _V0is__one__decl_k203) (##inline ##sys.car (bruijn ##expr.114 0 1))) ((bruijn ##k.447 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k203, env)}),
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
static void _V0is__one__decl_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k216" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k216, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.443 1 0) (##sys.blob=? (bruijn ##k.444 0 0) (##string ##string.1177) (##inline ##sys.car (bruijn ##expr.119 2 1))) ((bruijn ##k.444 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1177.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->up->vars[1]
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0is__one__decl_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k220" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k220, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.112 8 1) (bruijn ##k.435 5 0) (bruijn ##x.441 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0is__one__decl_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k219" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.121 0 0))) ((bruijn cdr 25 5) (close _V0is__one__decl_k220) (bruijn parse 8 1)) ((bruijn ##k.435 4 0) #f)) ((bruijn ##k.435 4 0) #f))
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
V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k220, env)}),
      VGetArg(upenv, 8-1, 1)
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
static void _V0is__one__decl_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k218" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.120 0 0)) ((close _V0is__one__decl_k219) (##inline ##sys.cdr (bruijn ##expr.120 0 0))) ((bruijn ##k.435 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0is__one__decl_k219, env, runtime,
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
static void _V0is__one__decl_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k217" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.437 0 0) ((close _V0is__one__decl_k218) (##inline ##sys.cdr (bruijn ##expr.119 2 1))) ((bruijn ##k.435 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0is__one__decl_k218, env, runtime,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0is__one__decl_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k215" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0is__one__decl_k216) (close _V0is__one__decl_k217))
V_CALL_FUNC(_V0is__one__decl_k216, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k217, env)})
    );
 }
}
static void _V0is__one__decl_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0is__one__decl_lambda43" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.119 0 1)) (##sys.string? (close _V0is__one__decl_k215) (##inline ##sys.car (bruijn ##expr.119 0 1))) ((bruijn ##k.435 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k215, env)}),
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
static void _V0is__one__decl_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k222" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k222, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.112 4 1) (bruijn ##k.430 3 0) #f)
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0is__one__decl_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k221" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn compiler-error 21 23) (close _V0is__one__decl_k222) (##string ##string.1178) (bruijn parse 4 1))
V_CALL(VGetArg(upenv, 21-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k222, env)}),
      VEncodePointer(&_V10string_D1178.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0is__one__decl_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k214" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0is__one__decl_lambda43) (close _V0is__one__decl_k221) (bruijn ##input.113 1 1))
V_CALL_FUNC(_V0is__one__decl_lambda43, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k221, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0is__one__decl_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0is__one__decl_lambda41" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0is__one__decl_lambda42) (close _V0is__one__decl_k214) (bruijn ##input.113 0 1))
V_CALL_FUNC(_V0is__one__decl_lambda42, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k214, env)}),
      _var1
    );
 }
}
static void _V0is__one__decl_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0is__one__decl_lambda40" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0is__one__decl_lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_lambda40, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0is__one__decl_lambda41) (bruijn ##k.429 0 0) (bruijn parse 1 1))
V_CALL_FUNC(_V0is__one__decl_lambda41, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0is__one__decl_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0is__one__decl_lambda39" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0is__one__decl_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 17 11) (bruijn ##k.428 0 0) (close _V0is__one__decl_lambda40))
V_CALL(VGetArg(upenv, 17-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_lambda40, env)})
    );
 }
}
static void _V0validate__foreign__function_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k179" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0validate__foreign__function_k180) (bruijn is-one-decl 4 3) (close _V0is__one__decl_lambda39))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k180, env)}),
      VEncodeInt(4l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_lambda39, env)})
    );
 }
}
static void _V0validate__foreign__function_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k178" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0validate__foreign__function_k179) (bruijn release-parse 3 2) (bruijn ##x.468 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k179, env)}),
      VEncodeInt(3l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V0validate__foreign__function_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k177" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.function (close _V0validate__foreign__function_k178) (##string ##string.1167))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k178, env)}),
      VEncodePointer(&_V10string_D1167.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0validate__foreign__function_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k176" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0validate__foreign__function_k177) (bruijn parse-decl-c 1 1) (bruijn ##x.469 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k177, env)}),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0validate__foreign__function_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_lambda35" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda35, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (##vcore.function (close _V0validate__foreign__function_k176) (##string ##string.1179))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k176, env)}),
      VEncodePointer(&_V10string_D1179.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0validate__foreign__function_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_lambda34" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0validate__foreign__function_lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0validate__foreign__function_lambda35) (bruijn ##k.393 0 0) #f #f #f)
V_CALL_FUNC(_V0validate__foreign__function_lambda35, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k55" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k56) (bruijn validate-foreign-function 9 10) (close _V0validate__foreign__function_lambda34))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k56, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_lambda34, env)})
    );
 }
}
static void _V0deep__copy_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0deep__copy_k228" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k228, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 16 19) (bruijn ##k.470 6 0) (bruijn ##x.473 2 0) (bruijn ##x.474 0 0))
V_CALL(VGetArg(upenv, 16-1, 19), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0deep__copy_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0deep__copy_k227" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn deep-copy 14 9) (close _V0deep__copy_k228) (bruijn ##x.475 0 0))
V_CALL(VGetArg(upenv, 14-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k228, env)}),
      _var0
    );
 }
}
static void _V0deep__copy_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0deep__copy_k226" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 14 5) (close _V0deep__copy_k227) (bruijn x 4 1))
V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k227, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0deep__copy_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0deep__copy_k225" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn deep-copy 12 9) (close _V0deep__copy_k226) (bruijn ##x.476 0 0))
V_CALL(VGetArg(upenv, 12-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k226, env)}),
      _var0
    );
 }
}
static void _V0deep__copy_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0deep__copy_k224" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.472 0 0) ((bruijn car 12 7) (close _V0deep__copy_k225) (bruijn x 2 1)) ((bruijn ##k.470 2 0) (bruijn x 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k225, env)}),
      upenv->up->vars[1]
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[1]
    );
}
 }
}
static void _V0deep__copy_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0deep__copy_k223" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.471 0 0) ((bruijn string-copy 11 31) (bruijn ##k.470 1 0) (bruijn x 1 1)) ((bruijn pair? 11 8) (close _V0deep__copy_k224) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 31), runtime,
      upenv->vars[0],
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 11-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k224, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0deep__copy_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0deep__copy_lambda44" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0deep__copy_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string? 10 22) (close _V0deep__copy_k223) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 10-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k223, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k54" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k55) (bruijn deep-copy 8 9) (close _V0deep__copy_lambda44))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k55, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_lambda44, env)})
    );
 }
}
static void _V0table___Gdefines_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k240" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k240, runtime, upenv, 1, argc, _var0) {
  // ((bruijn table->defines 23 8) (bruijn ##k.527 1 0) (bruijn ##x.528 0 0) (bruijn acc 15 2))
V_CALL(VGetArg(upenv, 23-1, 8), runtime,
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0table___Gdefines_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k243" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k243, runtime, upenv, 1, argc, _var0) {
  // ((bruijn table->defines 25 8) (bruijn ##k.527 3 0) (bruijn ##x.529 2 0) (bruijn ##x.530 0 0))
V_CALL(VGetArg(upenv, 25-1, 8), runtime,
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0table___Gdefines_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k242" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 25 19) (close _V0table___Gdefines_k243) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn name 7 0) (##inline ##sys.cons (##inline ##sys.cons (quote ##foreign.function) (##inline ##sys.cons (quote (##string ##string.1165)) (##inline ##sys.cons (quote (##string ##string.1160)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.105 6 0)) (##inline ##sys.cons (bruijn ##x.539 0 0) (##inline ##sys.cdr (bruijn ##expr.105 6 0))))))) (quote ())))) (bruijn acc 16 2))
V_CALL(VGetArg(upenv, 25-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k243, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 7-1, 0),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10foreign_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D1165.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D1160.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
VGetArg(upenv, 6-1, 0)
    )
,
      VInlineCons(
_var0,
      VInlineCdr(
VGetArg(upenv, 6-1, 0)
    )

    )

    )

    )

    )

    )
,
      VNULL
    )

    )

    )
,
      VGetArg(upenv, 16-1, 2)
    );
 }
}
static void _V0table___Gdefines_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k241" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol->string 24 33) (close _V0table___Gdefines_k242) (bruijn name 6 0))
V_CALL(VGetArg(upenv, 24-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k242, env)}),
      VGetArg(upenv, 6-1, 0)
    );
 }
}
static void _V0table___Gdefines_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k239" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.526 1 0) ((bruijn cdr 23 5) (close _V0table___Gdefines_k240) (bruijn table 14 1)) ((bruijn cdr 23 5) (close _V0table___Gdefines_k241) (bruijn table 14 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k240, env)}),
      VGetArg(upenv, 14-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k241, env)}),
      VGetArg(upenv, 14-1, 1)
    );
}
 }
}
static void _V0table___Gdefines_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k244" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k244, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.101 10 1) (bruijn ##k.520 8 0) (bruijn ##x.525 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0table___Gdefines_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k238" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0table___Gdefines_k239) (close _V0table___Gdefines_k244))
V_CALL_FUNC(_V0table___Gdefines_k239, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k244, env)})
    );
 }
}
static void _V0table___Gdefines_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k245" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k245, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 23 23) (bruijn ##k.542 1 0) (##string ##string.1180) (bruijn ##x.543 0 0) (bruijn conflict 1 1))
V_CALL(VGetArg(upenv, 23-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1180.sym, VPOINTER_OTHER),
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0table___Gdefines_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0table___Gdefines_lambda49" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0table___Gdefines_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 22 7) (close _V0table___Gdefines_k245) (bruijn table 13 1))
V_CALL(VGetArg(upenv, 22-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k245, env)}),
      VGetArg(upenv, 13-1, 1)
    );
 }
}
static void _V0table___Gdefines_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k237" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn duplicate-mismatch 11 1) (close _V0table___Gdefines_k238) (bruijn name 3 0) (bruijn ##x.540 1 0) (bruijn ##x.541 0 0) (close _V0table___Gdefines_lambda49))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k238, env)}),
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_lambda49, env)})
    );
 }
}
static void _V0table___Gdefines_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k236" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 20 5) (close _V0table___Gdefines_k237) (bruijn table 11 1))
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k237, env)}),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0table___Gdefines_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k235" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.105 0 0)) ((bruijn car 19 7) (close _V0table___Gdefines_k236) (bruijn table 10 1)) ((bruijn ##k.520 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k236, env)}),
      VGetArg(upenv, 10-1, 1)
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0table___Gdefines_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k234" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0table___Gdefines_k235) (##inline ##sys.cdr (bruijn ##expr.104 1 0)))
V_CALL_FUNC(_V0table___Gdefines_k235, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0table___Gdefines_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k233" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.104 0 0)) ((close _V0table___Gdefines_k234) (##inline ##sys.car (bruijn ##expr.104 0 0))) ((bruijn ##k.520 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0table___Gdefines_k234, env, runtime,
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
static void _V0table___Gdefines_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k232" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.522 0 0) ((close _V0table___Gdefines_k233) (##inline ##sys.cdr (bruijn ##expr.103 1 1))) ((bruijn ##k.520 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0table___Gdefines_k233, env, runtime,
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
static void _V0table___Gdefines_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0table___Gdefines_lambda48" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.103 0 1)) ((bruijn equal? 15 13) (close _V0table___Gdefines_k232) (quote function) (##inline ##sys.car (bruijn ##expr.103 0 1))) ((bruijn ##k.520 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 15-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k232, env)}),
      VEncodePointer(&_V0function.sym, VPOINTER_OTHER),
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
static void _V0table___Gdefines_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k255" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k255, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.101 12 1) (bruijn ##k.502 9 0) (bruijn ##x.508 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0
    );
 }
}
static void _V0table___Gdefines_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k254" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn table->defines 23 8) (close _V0table___Gdefines_k255) (bruijn ##x.510 1 0) (bruijn ##x.511 0 0))
V_CALL(VGetArg(upenv, 23-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k255, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0table___Gdefines_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k253" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 23 19) (close _V0table___Gdefines_k254) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn name 4 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.108 3 0)) (quote ())))) (bruijn acc 14 2))
V_CALL(VGetArg(upenv, 23-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k254, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->up->vars[0],
      VInlineCons(
VInlineCar(
upenv->up->up->vars[0]
    )
,
      VNULL
    )

    )

    )
,
      VGetArg(upenv, 14-1, 2)
    );
 }
}
static void _V0table___Gdefines_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k252" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 22 5) (close _V0table___Gdefines_k253) (bruijn table 13 1))
V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k253, env)}),
      VGetArg(upenv, 13-1, 1)
    );
 }
}
static void _V0table___Gdefines_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k256" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k256, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 23 23) (bruijn ##k.516 1 0) (##string ##string.1180) (bruijn ##x.517 0 0) (bruijn conflict 1 1))
V_CALL(VGetArg(upenv, 23-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1180.sym, VPOINTER_OTHER),
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0table___Gdefines_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0table___Gdefines_lambda51" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0table___Gdefines_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 22 7) (close _V0table___Gdefines_k256) (bruijn table 13 1))
V_CALL(VGetArg(upenv, 22-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k256, env)}),
      VGetArg(upenv, 13-1, 1)
    );
 }
}
static void _V0table___Gdefines_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k251" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn duplicate-mismatch 11 1) (close _V0table___Gdefines_k252) (bruijn name 2 0) #f (bruijn ##x.515 0 0) (close _V0table___Gdefines_lambda51))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k252, env)}),
      upenv->up->vars[0],
      VEncodeBool(false),
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_lambda51, env)})
    );
 }
}
static void _V0table___Gdefines_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k250" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.108 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.108 0 0))) ((bruijn cdr 20 5) (close _V0table___Gdefines_k251) (bruijn table 11 1)) ((bruijn ##k.502 4 0) #f)) ((bruijn ##k.502 4 0) #f))
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
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k251, env)}),
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
static void _V0table___Gdefines_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k249" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0table___Gdefines_k250) (##inline ##sys.cdr (bruijn ##expr.107 1 0)))
V_CALL_FUNC(_V0table___Gdefines_k250, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0table___Gdefines_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k248" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.107 0 0)) ((close _V0table___Gdefines_k249) (##inline ##sys.car (bruijn ##expr.107 0 0))) ((bruijn ##k.502 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0table___Gdefines_k249, env, runtime,
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
static void _V0table___Gdefines_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k247" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.504 0 0) ((close _V0table___Gdefines_k248) (##inline ##sys.cdr (bruijn ##expr.106 1 1))) ((bruijn ##k.502 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0table___Gdefines_k248, env, runtime,
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
static void _V0table___Gdefines_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0table___Gdefines_lambda50" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.106 0 1)) ((bruijn equal? 16 13) (close _V0table___Gdefines_k247) (quote enum) (##inline ##sys.car (bruijn ##expr.106 0 1))) ((bruijn ##k.502 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k247, env)}),
      VEncodePointer(&_V0enum.sym, VPOINTER_OTHER),
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
static void _V0table___Gdefines_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k265" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k265, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.101 12 1) (bruijn ##k.487 8 0) (bruijn ##x.493 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0table___Gdefines_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k264" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn table->defines 23 8) (close _V0table___Gdefines_k265) (bruijn ##x.495 0 0) (bruijn acc 15 2))
V_CALL(VGetArg(upenv, 23-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k265, env)}),
      _var0,
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0table___Gdefines_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k263" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 23 5) (close _V0table___Gdefines_k264) (bruijn table 14 1))
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k264, env)}),
      VGetArg(upenv, 14-1, 1)
    );
 }
}
static void _V0table___Gdefines_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k266" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k266, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 24 23) (bruijn ##k.498 1 0) (##string ##string.1180) (bruijn ##x.499 0 0) (bruijn conflict 1 1))
V_CALL(VGetArg(upenv, 24-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1180.sym, VPOINTER_OTHER),
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0table___Gdefines_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0table___Gdefines_lambda53" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0table___Gdefines_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 23 7) (close _V0table___Gdefines_k266) (bruijn table 14 1))
V_CALL(VGetArg(upenv, 23-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k266, env)}),
      VGetArg(upenv, 14-1, 1)
    );
 }
}
static void _V0table___Gdefines_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k262" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn duplicate-mismatch 12 1) (close _V0table___Gdefines_k263) (##inline ##sys.car (bruijn ##expr.110 3 0)) (bruijn ##x.496 1 0) (bruijn ##x.497 0 0) (close _V0table___Gdefines_lambda53))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k263, env)}),
      VInlineCar(
upenv->up->up->vars[0]
    )
,
      upenv->vars[0],
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_lambda53, env)})
    );
 }
}
static void _V0table___Gdefines_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k261" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 21 5) (close _V0table___Gdefines_k262) (bruijn table 12 1))
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k262, env)}),
      VGetArg(upenv, 12-1, 1)
    );
 }
}
static void _V0table___Gdefines_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k260" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.111 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.111 0 0))) ((bruijn car 20 7) (close _V0table___Gdefines_k261) (bruijn table 11 1)) ((bruijn ##k.487 3 0) #f)) ((bruijn ##k.487 3 0) #f))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k261, env)}),
      VGetArg(upenv, 11-1, 1)
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
static void _V0table___Gdefines_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k259" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.110 0 0)) ((close _V0table___Gdefines_k260) (##inline ##sys.cdr (bruijn ##expr.110 0 0))) ((bruijn ##k.487 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0table___Gdefines_k260, env, runtime,
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
static void _V0table___Gdefines_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k258" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.489 0 0) ((close _V0table___Gdefines_k259) (##inline ##sys.cdr (bruijn ##expr.109 1 1))) ((bruijn ##k.487 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0table___Gdefines_k259, env, runtime,
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
static void _V0table___Gdefines_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0table___Gdefines_lambda52" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.109 0 1)) ((bruijn equal? 17 13) (close _V0table___Gdefines_k258) (quote typedef) (##inline ##sys.car (bruijn ##expr.109 0 1))) ((bruijn ##k.487 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 17-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k258, env)}),
      VEncodePointer(&_V0typedef.sym, VPOINTER_OTHER),
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
static void _V0table___Gdefines_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k269" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k269, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.101 6 1) (bruijn ##k.481 6 0) (bruijn ##x.485 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0table___Gdefines_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k268" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn compiler-error 18 23) (close _V0table___Gdefines_k269) (##string ##string.1181) (bruijn ##x.486 0 0))
V_CALL(VGetArg(upenv, 18-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k269, env)}),
      VEncodePointer(&_V10string_D1181.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0table___Gdefines_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k267" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 17 7) (close _V0table___Gdefines_k268) (bruijn table 8 1))
V_CALL(VGetArg(upenv, 17-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k268, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0table___Gdefines_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k257" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0table___Gdefines_lambda52) (close _V0table___Gdefines_k267) (bruijn ##input.102 2 0))
V_CALL_FUNC(_V0table___Gdefines_lambda52, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k267, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0table___Gdefines_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k246" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0table___Gdefines_lambda50) (close _V0table___Gdefines_k257) (bruijn ##input.102 1 0))
V_CALL_FUNC(_V0table___Gdefines_lambda50, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k257, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0table___Gdefines_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k231" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0table___Gdefines_lambda48) (close _V0table___Gdefines_k246) (bruijn ##input.102 0 0))
V_CALL_FUNC(_V0table___Gdefines_lambda48, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k246, env)}),
      _var0
    );
 }
}
static void _V0table___Gdefines_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0table___Gdefines_lambda47" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0table___Gdefines_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 13 7) (close _V0table___Gdefines_k231) (bruijn table 4 1))
V_CALL(VGetArg(upenv, 13-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k231, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0table___Gdefines_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k230" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.480 0 0) ((bruijn ##k.478 2 0) (bruijn acc 3 2)) ((bruijn call/cc 12 11) (bruijn ##k.478 2 0) (close _V0table___Gdefines_lambda47)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[2]
    );
} else {
V_CALL(VGetArg(upenv, 12-1, 11), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_lambda47, env)})
    );
}
 }
}
static void _V0table___Gdefines_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0table___Gdefines_k229" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0table___Gdefines_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 11 25) (close _V0table___Gdefines_k230) (bruijn table 2 1))
V_CALL(VGetArg(upenv, 11-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k230, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0duplicate__mismatch_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0duplicate__mismatch_k274" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0duplicate__mismatch_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0duplicate__mismatch_k274, runtime, upenv, 1, argc, _var0) {
  // ((bruijn duplicate-mismatch 6 1) (bruijn ##k.545 5 0) (bruijn x 5 1) (bruijn entry 5 2) (bruijn ##x.548 0 0) (bruijn err-proc 5 4))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 5-1, 2),
      _var0,
      VGetArg(upenv, 5-1, 4)
    );
 }
}
static void _V0duplicate__mismatch_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0duplicate__mismatch_k278" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0duplicate__mismatch_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0duplicate__mismatch_k278, runtime, upenv, 1, argc, _var0) {
  // ((bruijn err-proc 8 4) (bruijn ##k.545 8 0) (bruijn ##x.550 0 0))
V_CALL(VGetArg(upenv, 8-1, 4), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0duplicate__mismatch_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0duplicate__mismatch_k277" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0duplicate__mismatch_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0duplicate__mismatch_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.549 0 0) ((bruijn car 18 7) (close _V0duplicate__mismatch_k278) (bruijn table 7 3)) ((bruijn ##k.545 7 0) #t))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0duplicate__mismatch_k278, env)}),
      VGetArg(upenv, 7-1, 3)
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(true)
    );
}
 }
}
static void _V0duplicate__mismatch_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0duplicate__mismatch_k276" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0duplicate__mismatch_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0duplicate__mismatch_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 17 21) (close _V0duplicate__mismatch_k277) (bruijn ##x.551 0 0))
V_CALL(VGetArg(upenv, 17-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0duplicate__mismatch_k277, env)}),
      _var0
    );
 }
}
static void _V0duplicate__mismatch_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0duplicate__mismatch_k275" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0duplicate__mismatch_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0duplicate__mismatch_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn equal? 16 13) (close _V0duplicate__mismatch_k276) (bruijn entry 5 2) (bruijn ##x.552 0 0))
V_CALL(VGetArg(upenv, 16-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0duplicate__mismatch_k276, env)}),
      VGetArg(upenv, 5-1, 2),
      _var0
    );
 }
}
static void _V0duplicate__mismatch_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0duplicate__mismatch_k273" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0duplicate__mismatch_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0duplicate__mismatch_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.547 0 0) ((bruijn cdr 15 5) (close _V0duplicate__mismatch_k274) (bruijn table 4 3)) ((bruijn car 15 7) (close _V0duplicate__mismatch_k275) (bruijn table 4 3)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0duplicate__mismatch_k274, env)}),
      upenv->up->up->up->vars[3]
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0duplicate__mismatch_k275, env)}),
      upenv->up->up->up->vars[3]
    );
}
 }
}
static void _V0duplicate__mismatch_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0duplicate__mismatch_k272" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0duplicate__mismatch_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0duplicate__mismatch_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 14 21) (close _V0duplicate__mismatch_k273) (bruijn ##x.553 0 0))
V_CALL(VGetArg(upenv, 14-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0duplicate__mismatch_k273, env)}),
      _var0
    );
 }
}
static void _V0duplicate__mismatch_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0duplicate__mismatch_k271" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0duplicate__mismatch_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0duplicate__mismatch_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 13 4) (close _V0duplicate__mismatch_k272) (bruijn x 2 1) (bruijn ##x.554 0 0))
V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0duplicate__mismatch_k272, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0duplicate__mismatch_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0duplicate__mismatch_k270" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0duplicate__mismatch_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0duplicate__mismatch_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.546 0 0) ((bruijn ##k.545 1 0) #f) ((bruijn cadar 12 32) (close _V0duplicate__mismatch_k271) (bruijn table 1 3)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 12-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0duplicate__mismatch_k271, env)}),
      upenv->vars[3]
    );
}
 }
}
static void _V0duplicate__mismatch_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V0duplicate__mismatch_lambda54" };
 VRecordCall(&dbg);
 if(argc != 5) {
  VError("Not enough arguments to _V0duplicate__mismatch_lambda54, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0duplicate__mismatch_lambda54, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn null? 11 25) (close _V0duplicate__mismatch_k270) (bruijn table 0 3))
V_CALL(VGetArg(upenv, 11-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0duplicate__mismatch_k270, env)}),
      _var3
    );
 }
}
static void _V0table___Gdefines_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0table___Gdefines_lambda46" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0table___Gdefines_k229) (bruijn duplicate-mismatch 0 1) (close _V0duplicate__mismatch_lambda54))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_k229, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0duplicate__mismatch_lambda54, env)})
    );
 }
}
static void _V0table___Gdefines_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0table___Gdefines_lambda45" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0table___Gdefines_lambda45, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0table___Gdefines_lambda45, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0table___Gdefines_lambda46) (bruijn ##k.477 0 0) #f)
V_CALL_FUNC(_V0table___Gdefines_lambda46, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k53" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k54) (bruijn table->defines 7 8) (close _V0table___Gdefines_lambda45))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k54, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0table___Gdefines_lambda45, env)})
    );
 }
}
static void _V0unwrap__declares_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k280" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k280, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.596 1 0) (##sys.blob=? (bruijn ##k.597 0 0) (##string ##string.1175) (##inline ##sys.car (bruijn ##expr.96 2 1))) ((bruijn ##k.597 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1175.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->up->vars[1]
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__declares_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k281" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k281, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.593 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.96 2 1))) ((bruijn ##kk.94 4 1) (bruijn ##k.591 2 0) (bruijn table 5 2)) ((bruijn ##k.591 2 0) #f)) ((bruijn ##k.591 2 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->vars[1]
    )

    )
)) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 2)
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
static void _V0unwrap__declares_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k279" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__declares_k280) (close _V0unwrap__declares_k281))
V_CALL_FUNC(_V0unwrap__declares_k280, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k281, env)})
    );
 }
}
static void _V0unwrap__declares_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__declares_lambda58" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.96 0 1)) (##sys.string? (close _V0unwrap__declares_k279) (##inline ##sys.car (bruijn ##expr.96 0 1))) ((bruijn ##k.591 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k279, env)}),
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
static void _V0unwrap__declares_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k284" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k284, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.587 1 0) (##sys.blob=? (bruijn ##k.588 0 0) (##string ##string.1175) (##inline ##sys.car (bruijn ##expr.97 2 1))) ((bruijn ##k.588 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1175.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->up->vars[1]
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__declares_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k289" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k289, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.583 1 0) (##sys.blob=? (bruijn ##k.584 0 0) (##string ##string.1176) (##inline ##sys.car (bruijn ##expr.99 2 0))) ((bruijn ##k.584 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1176.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->up->vars[0]
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__declares_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k296" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k296, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.569 1 0) (##inline ##sys.cdr (bruijn ##expr.100 7 0)) (bruijn table 2 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
VGetArg(upenv, 7-1, 0)
    )
,
      upenv->up->vars[2]
    );
 }
}
static void _V0loop_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k300" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k300, runtime, upenv, 1, argc, _var0) {
  // ((bruijn unwrap-typedef 29 4) (bruijn ##k.577 1 0) (bruijn ret 6 3) (bruijn ##x.578 0 0) (bruijn table 4 2))
V_CALL(VGetArg(upenv, 29-1, 4), runtime,
      upenv->vars[0],
      VGetArg(upenv, 6-1, 3),
      _var0,
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k301" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k301, runtime, upenv, 1, argc, _var0) {
  // ((bruijn unwrap-function 29 5) (bruijn ##k.577 1 0) (bruijn ret 6 3) (bruijn ##x.579 0 0) (bruijn table 4 2))
V_CALL(VGetArg(upenv, 29-1, 5), runtime,
      upenv->vars[0],
      VGetArg(upenv, 6-1, 3),
      _var0,
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k299" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn typedef? 5 1) ((bruijn car 29 7) (close _V0loop_k300) (bruijn mydecls 3 1)) ((bruijn car 29 7) (close _V0loop_k301) (bruijn mydecls 3 1)))
if(VDecodeBool(
VGetArg(upenv, 5-1, 1))) {
V_CALL(VGetArg(upenv, 29-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k300, env)}),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 29-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k301, env)}),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0loop_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k303" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k303, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.571 4 0) (bruijn ##x.574 2 0) (bruijn ##x.575 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k302" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 29 19) (close _V0loop_k303) (bruijn ##x.576 0 0) (bruijn table 3 2))
V_CALL(VGetArg(upenv, 29-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k303, env)}),
      _var0,
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k298" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k299) (close _V0loop_k302))
V_CALL_FUNC(_V0loop_k299, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k302, env)})
    );
 }
}
static void _V0loop_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k297" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.572 0 0) ((bruijn unwrap-declares 26 7) (bruijn ##k.571 1 0) (##inline ##sys.cons (quote (##string ##string.1175)) (##inline ##sys.cdr (bruijn ##expr.98 12 0))) (bruijn table 1 2)) ((bruijn cdr 27 5) (close _V0loop_k298) (bruijn mydecls 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 26-1, 7), runtime,
      upenv->vars[0],
      VInlineCons(
VEncodePointer(&_V10string_D1175.sym, VPOINTER_OTHER),
      VInlineCdr(
VGetArg(upenv, 12-1, 0)
    )

    )
,
      upenv->vars[2]
    );
} else {
V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k298, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda62" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda62, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda62, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 26 25) (close _V0loop_k297) (bruijn mydecls 0 1))
V_CALL(VGetArg(upenv, 26-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k297, env)}),
      _var1
    );
 }
}
static void _V0unwrap__declares_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__declares_lambda61" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0unwrap__declares_k296) (bruijn loop 0 1) (close _V0loop_lambda62))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k296, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda62, env)})
    );
 }
}
static void _V0unwrap__declares_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0unwrap__declares_lambda60" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_lambda60, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0unwrap__declares_lambda61) (bruijn ##k.568 0 0) #f)
V_CALL_FUNC(_V0unwrap__declares_lambda61, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0unwrap__declares_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k304" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k304, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.94 15 1) (bruijn ##k.560 12 0) (bruijn ##x.567 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0
    );
 }
}
static void _V0unwrap__declares_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k295" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__declares_lambda60) (close _V0unwrap__declares_k304) (bruijn ##x.580 2 0) (bruijn ##x.581 1 0) (bruijn ##x.582 0 0))
V_CALL_FUNC(_V0unwrap__declares_lambda60, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k304, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0unwrap__declares_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k294" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reduce-type 21 3) (close _V0unwrap__declares_k295) (bruijn ret 2 0) (bruijn table 14 2) #t)
V_CALL(VGetArg(upenv, 21-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k295, env)}),
      upenv->up->vars[0],
      VGetArg(upenv, 14-1, 2),
      VEncodeBool(true)
    );
 }
}
static void _V0unwrap__declares_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k293" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn unwrap-enums 20 6) (close _V0unwrap__declares_k294) (bruijn ret 1 0) (bruijn table 13 2))
V_CALL(VGetArg(upenv, 20-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k294, env)}),
      upenv->vars[0],
      VGetArg(upenv, 13-1, 2)
    );
 }
}
static void _V0unwrap__declares_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k292" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn member 20 34) (close _V0unwrap__declares_k293) (##string ##string.1182) (bruijn ret 0 0))
V_CALL(VGetArg(upenv, 20-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k293, env)}),
      VEncodePointer(&_V10string_D1182.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0unwrap__declares_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k291" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.100 0 0)) ((close _V0unwrap__declares_k292) (##inline ##sys.car (bruijn ##expr.100 0 0))) ((bruijn ##k.560 7 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0unwrap__declares_k292, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__declares_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k290" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.565 0 0) ((close _V0unwrap__declares_k291) (##inline ##sys.cdr (bruijn ##expr.99 2 0))) ((bruijn ##k.560 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0unwrap__declares_k291, env, runtime,
      VInlineCdr(
upenv->up->vars[0]
    )

    );
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__declares_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k288" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__declares_k289) (close _V0unwrap__declares_k290))
V_CALL_FUNC(_V0unwrap__declares_k289, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k290, env)})
    );
 }
}
static void _V0unwrap__declares_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k287" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.99 0 0)) (##sys.string? (close _V0unwrap__declares_k288) (##inline ##sys.car (bruijn ##expr.99 0 0))) ((bruijn ##k.560 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k288, env)}),
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
static void _V0unwrap__declares_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k286" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.98 0 0)) ((close _V0unwrap__declares_k287) (##inline ##sys.car (bruijn ##expr.98 0 0))) ((bruijn ##k.560 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0unwrap__declares_k287, env, runtime,
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
static void _V0unwrap__declares_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k285" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.562 0 0) ((close _V0unwrap__declares_k286) (##inline ##sys.cdr (bruijn ##expr.97 2 1))) ((bruijn ##k.560 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0unwrap__declares_k286, env, runtime,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__declares_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k283" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__declares_k284) (close _V0unwrap__declares_k285))
V_CALL_FUNC(_V0unwrap__declares_k284, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k285, env)})
    );
 }
}
static void _V0unwrap__declares_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__declares_lambda59" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_lambda59, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.97 0 1)) (##sys.string? (close _V0unwrap__declares_k283) (##inline ##sys.car (bruijn ##expr.97 0 1))) ((bruijn ##k.560 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k283, env)}),
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
static void _V0unwrap__declares_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k305" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k305, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 12 14) (bruijn ##k.557 2 0) (##string ##string.1138))
V_CALL(VGetArg(upenv, 12-1, 14), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1138.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0unwrap__declares_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k282" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__declares_lambda59) (close _V0unwrap__declares_k305) (bruijn ##input.95 1 1))
V_CALL_FUNC(_V0unwrap__declares_lambda59, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k305, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0unwrap__declares_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__declares_lambda57" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0unwrap__declares_lambda58) (close _V0unwrap__declares_k282) (bruijn ##input.95 0 1))
V_CALL_FUNC(_V0unwrap__declares_lambda58, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k282, env)}),
      _var1
    );
 }
}
static void _V0unwrap__declares_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__declares_lambda56" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0unwrap__declares_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_lambda56, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0unwrap__declares_lambda57) (bruijn ##k.556 0 0) (bruijn parse 1 1))
V_CALL_FUNC(_V0unwrap__declares_lambda57, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0unwrap__declares_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0unwrap__declares_lambda55" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0unwrap__declares_lambda55, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_lambda55, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 8 11) (bruijn ##k.555 0 0) (close _V0unwrap__declares_lambda56))
V_CALL(VGetArg(upenv, 8-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_lambda56, env)})
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k52" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k53) (bruijn unwrap-declares 6 7) (close _V0unwrap__declares_lambda55))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k53, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_lambda55, env)})
    );
 }
}
static void _V0unwrap__enums_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__enums_k307" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__enums_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums_k307, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.603 1 0) (bruijn ret 4 1))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k312" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k312, runtime, upenv, 1, argc, _var0) {
  // ((bruijn equal? 16 13) (bruijn ##k.610 1 0) (bruijn ##x.611 0 0) (##string ##string.1183))
V_CALL(VGetArg(upenv, 16-1, 13), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V10string_D1183.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k311" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.609 1 0) ((bruijn caar 15 36) (close _V0loop_k312) (bruijn ret 4 1)) ((bruijn ##k.610 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 15-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k312, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k314" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k314, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn enums 0 0) ((bruijn unwrap-enums-iter 8 1) (bruijn ##k.605 5 0) (bruijn enums 0 0) 0 (bruijn table 9 2)) ((bruijn ##k.605 5 0) (bruijn table 9 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 9-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VGetArg(upenv, 9-1, 2)
    );
}
 }
}
static void _V0loop_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k315" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k315, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.605 5 0) (bruijn ##x.608 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0loop_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k313" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.607 0 0) ((bruijn caddar 15 37) (close _V0loop_k314) (bruijn ret 4 1)) ((bruijn cdr 15 5) (close _V0loop_k315) (bruijn ret 4 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k314, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k315, env)}),
      upenv->up->up->up->vars[1]
    );
}
 }
}
static void _V0loop_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k310" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k311) (close _V0loop_k313))
V_CALL_FUNC(_V0loop_k311, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k313, env)})
    );
 }
}
static void _V0loop_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k309" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 13 8) (close _V0loop_k310) (bruijn ##x.612 0 0))
V_CALL(VGetArg(upenv, 13-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k310, env)}),
      _var0
    );
 }
}
static void _V0loop_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k308" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.606 0 0) ((bruijn ##k.605 1 0) (bruijn table 5 2)) ((bruijn car 12 7) (close _V0loop_k309) (bruijn ret 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VGetArg(upenv, 5-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k309, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda66" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda66, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 11 25) (close _V0loop_k308) (bruijn ret 0 1))
V_CALL(VGetArg(upenv, 11-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k308, env)}),
      _var1
    );
 }
}
static void _V0unwrap__enums_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__enums_lambda65" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums_lambda65, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0unwrap__enums_k307) (bruijn loop 0 1) (close _V0loop_lambda66))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__enums_k307, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda66, env)})
    );
 }
}
static void _V0unwrap__enums_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__enums_k306" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__enums_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__enums_lambda65) (bruijn ##k.601 1 0) #f)
V_CALL_FUNC(_V0unwrap__enums_lambda65, env, runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0unwrap__enums__iter_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__enums__iter_k318" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__enums__iter_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums__iter_k318, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.623 1 0) ((bruijn cadar 12 32) (bruijn ##k.624 0 0) (bruijn enums 3 1)) ((bruijn ##k.624 0 0) (bruijn val 3 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 12-1, 32), runtime,
      _var0,
      upenv->up->up->vars[1]
    );
} else {
V_CALL(_var0, runtime,
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0unwrap__enums__iter_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__enums__iter_k324" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__enums__iter_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums__iter_k324, runtime, upenv, 1, argc, _var0) {
  // ((bruijn unwrap-enums-iter 9 1) (bruijn ##k.613 8 0) (bruijn ##x.615 4 0) (bruijn ##x.616 3 0) (bruijn ##x.617 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0unwrap__enums__iter_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__enums__iter_k323" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__enums__iter_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums__iter_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 16 19) (close _V0unwrap__enums__iter_k324) (##inline ##sys.cons (quote enum) (##inline ##sys.cons (bruijn ##x.620 0 0) (##inline ##sys.cons (bruijn val 4 0) (quote ())))) (bruijn table 7 3))
V_CALL(VGetArg(upenv, 16-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__enums__iter_k324, env)}),
      VInlineCons(
VEncodePointer(&_V0enum.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VInlineCons(
upenv->up->up->up->vars[0],
      VNULL
    )

    )

    )
,
      VGetArg(upenv, 7-1, 3)
    );
 }
}
static void _V0unwrap__enums__iter_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__enums__iter_k322" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__enums__iter_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums__iter_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string->symbol 15 35) (close _V0unwrap__enums__iter_k323) (bruijn ##x.622 0 0))
V_CALL(VGetArg(upenv, 15-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__enums__iter_k323, env)}),
      _var0
    );
 }
}
static void _V0unwrap__enums__iter_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__enums__iter_k321" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__enums__iter_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums__iter_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caar 14 36) (close _V0unwrap__enums__iter_k322) (bruijn enums 5 1))
V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__enums__iter_k322, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0unwrap__enums__iter_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__enums__iter_k320" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__enums__iter_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums__iter_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 13 9) (close _V0unwrap__enums__iter_k321) (bruijn val 1 0) 1)
V_CALL(VGetArg(upenv, 13-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__enums__iter_k321, env)}),
      upenv->vars[0],
      VEncodeInt(1l)
    );
 }
}
static void _V0unwrap__enums__iter_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__enums__iter_k319" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__enums__iter_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums__iter_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 12 5) (close _V0unwrap__enums__iter_k320) (bruijn enums 3 1))
V_CALL(VGetArg(upenv, 12-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__enums__iter_k320, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0unwrap__enums__iter_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__enums__iter_k317" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__enums__iter_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums__iter_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__enums__iter_k318) (close _V0unwrap__enums__iter_k319))
V_CALL_FUNC(_V0unwrap__enums__iter_k318, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__enums__iter_k319, env)})
    );
 }
}
static void _V0unwrap__enums__iter_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__enums__iter_k316" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__enums__iter_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums__iter_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.614 0 0) ((bruijn ##k.613 1 0) (bruijn table 1 3)) ((bruijn cadar 10 32) (close _V0unwrap__enums__iter_k317) (bruijn enums 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[3]
    );
} else {
V_CALL(VGetArg(upenv, 10-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__enums__iter_k317, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0unwrap__enums__iter_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0unwrap__enums__iter_lambda67" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0unwrap__enums__iter_lambda67, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums__iter_lambda67, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 9 25) (close _V0unwrap__enums__iter_k316) (bruijn enums 0 1))
V_CALL(VGetArg(upenv, 9-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__enums__iter_k316, env)}),
      _var1
    );
 }
}
static void _V0unwrap__enums_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__enums_lambda64" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums_lambda64, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0unwrap__enums_k306) (bruijn unwrap-enums-iter 0 1) (close _V0unwrap__enums__iter_lambda67))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__enums_k306, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__enums__iter_lambda67, env)})
    );
 }
}
static void _V0unwrap__enums_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0unwrap__enums_lambda63" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0unwrap__enums_lambda63, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__enums_lambda63, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0unwrap__enums_lambda64) (bruijn ##k.600 0 0) #f)
V_CALL_FUNC(_V0unwrap__enums_lambda64, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k51" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k52) (bruijn unwrap-enums 5 6) (close _V0unwrap__enums_lambda63))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k52, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__enums_lambda63, env)})
    );
 }
}
static void _V0unwrap__function_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k334" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k334, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.648 1 0) ((bruijn compiler-error 19 23) (bruijn ##k.649 0 0) (##string ##string.1184) (bruijn expr 12 0)) ((bruijn ##k.649 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 19-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1184.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__function_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k338" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k338, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.645 1 0) ((bruijn compiler-error 22 23) (bruijn ##k.646 0 0) (##string ##string.1185) (bruijn expr 15 0)) ((bruijn ##k.646 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 22-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1185.sym, VPOINTER_OTHER),
      VGetArg(upenv, 15-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__function_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k341" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k341, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 16 1) (bruijn ##k.630 14 0) (##inline ##sys.cons (quote function) (##inline ##sys.cons (bruijn ##x.640 0 0) (##inline ##sys.cons (bruijn ret 9 0) (bruijn args 8 0)))))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      VInlineCons(
VEncodePointer(&_V0function.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VInlineCons(
VGetArg(upenv, 9-1, 0),
      VGetArg(upenv, 8-1, 0)
    )

    )

    )

    );
 }
}
static void _V0unwrap__function_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k340" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string->symbol 23 35) (close _V0unwrap__function_k341) (bruijn name 10 0))
V_CALL(VGetArg(upenv, 23-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k341, env)}),
      VGetArg(upenv, 10-1, 0)
    );
 }
}
static void _V0unwrap__function_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k343" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k343, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.643 0 0) ((bruijn compiler-error 25 23) (bruijn ##k.642 2 0) (##string ##string.1186) (bruijn name 12 0) (bruijn arg 2 1)) ((bruijn ##k.642 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 23), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D1186.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 0),
      upenv->up->vars[1]
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__function_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k342" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 24 21) (close _V0unwrap__function_k343) (bruijn ##x.644 0 0))
V_CALL(VGetArg(upenv, 24-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k343, env)}),
      _var0
    );
 }
}
static void _V0unwrap__function_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__function_lambda72" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0unwrap__function_lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_lambda72, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn get-decoder 22 16) (close _V0unwrap__function_k342) (bruijn arg 0 1))
V_CALL(VGetArg(upenv, 22-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k342, env)}),
      _var1
    );
 }
}
static void _V0unwrap__function_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k339" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 22 6) (close _V0unwrap__function_k340) (close _V0unwrap__function_lambda72) (bruijn args 6 0))
V_CALL(VGetArg(upenv, 22-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k340, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_lambda72, env)}),
      VGetArg(upenv, 6-1, 0)
    );
 }
}
static void _V0unwrap__function_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k337" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__function_k338) (close _V0unwrap__function_k339))
V_CALL_FUNC(_V0unwrap__function_k338, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k339, env)})
    );
 }
}
static void _V0unwrap__function_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k336" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 20 21) (close _V0unwrap__function_k337) (bruijn ##x.647 0 0))
V_CALL(VGetArg(upenv, 20-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k337, env)}),
      _var0
    );
 }
}
static void _V0unwrap__function_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k335" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string? 19 22) (close _V0unwrap__function_k336) (bruijn name 6 0))
V_CALL(VGetArg(upenv, 19-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k336, env)}),
      VGetArg(upenv, 6-1, 0)
    );
 }
}
static void _V0unwrap__function_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k333" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__function_k334) (close _V0unwrap__function_k335))
V_CALL_FUNC(_V0unwrap__function_k334, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k335, env)})
    );
 }
}
static void _V0unwrap__function_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k332" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 17 21) (close _V0unwrap__function_k333) (bruijn ##x.650 0 0))
V_CALL(VGetArg(upenv, 17-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k333, env)}),
      _var0
    );
 }
}
static void _V0unwrap__function_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k331" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn get-encoder 15 15) (close _V0unwrap__function_k332) (bruijn ret 1 0))
V_CALL(VGetArg(upenv, 15-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k332, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0unwrap__function_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k330" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__function_k331) (##inline ##sys.cdr (bruijn ##expr.93 1 0)))
V_CALL_FUNC(_V0unwrap__function_k331, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0unwrap__function_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k329" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.93 0 0)) ((close _V0unwrap__function_k330) (##inline ##sys.car (bruijn ##expr.93 0 0))) ((bruijn ##k.630 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0unwrap__function_k330, env, runtime,
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
static void _V0unwrap__function_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k328" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__function_k329) (##inline ##sys.cdr (bruijn ##expr.92 1 0)))
V_CALL_FUNC(_V0unwrap__function_k329, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0unwrap__function_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k327" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 0)) ((close _V0unwrap__function_k328) (##inline ##sys.car (bruijn ##expr.92 0 0))) ((bruijn ##k.630 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0unwrap__function_k328, env, runtime,
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
static void _V0unwrap__function_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k326" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.632 0 0) ((close _V0unwrap__function_k327) (##inline ##sys.cdr (bruijn ##expr.91 1 1))) ((bruijn ##k.630 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0unwrap__function_k327, env, runtime,
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
static void _V0unwrap__function_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__function_lambda71" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_lambda71, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.91 0 1)) ((bruijn equal? 10 13) (close _V0unwrap__function_k326) (quote function) (##inline ##sys.car (bruijn ##expr.91 0 1))) ((bruijn ##k.630 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 10-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k326, env)}),
      VEncodePointer(&_V0function.sym, VPOINTER_OTHER),
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
static void _V0unwrap__function_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k345" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k345, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.89 3 1) (bruijn ##k.627 2 0) (bruijn ##x.629 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0unwrap__function_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k344" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn compiler-error 10 23) (close _V0unwrap__function_k345) (##string ##string.1187) (bruijn expr 3 0))
V_CALL(VGetArg(upenv, 10-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k345, env)}),
      VEncodePointer(&_V10string_D1187.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0unwrap__function_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__function_lambda70" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0unwrap__function_lambda71) (close _V0unwrap__function_k344) (bruijn ##input.90 0 1))
V_CALL_FUNC(_V0unwrap__function_lambda71, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k344, env)}),
      _var1
    );
 }
}
static void _V0unwrap__function_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__function_lambda69" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0unwrap__function_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_lambda69, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0unwrap__function_lambda70) (bruijn ##k.626 0 0) (bruijn expr 1 0))
V_CALL_FUNC(_V0unwrap__function_lambda70, env, runtime,
      _var0,
      upenv->vars[0]
    );
 }
}
static void _V0unwrap__function_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k325" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 7 11) (bruijn ##k.625 1 0) (close _V0unwrap__function_lambda69))
V_CALL(VGetArg(upenv, 7-1, 11), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_lambda69, env)})
    );
 }
}
static void _V0unwrap__function_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0unwrap__function_lambda68" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0unwrap__function_lambda68, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_lambda68, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn reduce-declare 5 1) (close _V0unwrap__function_k325) (bruijn ret 0 1) (bruijn decl 0 2) (bruijn table 0 3))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k325, env)}),
      _var1,
      _var2,
      _var3
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k50" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k51) (bruijn unwrap-function 4 5) (close _V0unwrap__function_lambda68))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k51, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_lambda68, env)})
    );
 }
}
static void _V0unwrap__typedef_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_k353" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__typedef_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_k353, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.668 1 0) ((bruijn compiler-error 16 23) (bruijn ##k.669 0 0) (##string ##string.1188) (bruijn expr 10 0)) ((bruijn ##k.669 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 16-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1188.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__typedef_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_k355" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__typedef_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_k355, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.84 10 1) (bruijn ##k.657 8 0) (##inline ##sys.cons (quote typedef) (##inline ##sys.cons (bruijn ##x.666 0 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.87 6 0)) (quote ())))))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VInlineCons(
VEncodePointer(&_V0typedef.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VInlineCons(
VInlineCar(
VGetArg(upenv, 6-1, 0)
    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0unwrap__typedef_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_k354" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__typedef_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string->symbol 16 35) (close _V0unwrap__typedef_k355) (bruijn name 3 0))
V_CALL(VGetArg(upenv, 16-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__typedef_k355, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0unwrap__typedef_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_k352" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__typedef_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__typedef_k353) (close _V0unwrap__typedef_k354))
V_CALL_FUNC(_V0unwrap__typedef_k353, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__typedef_k354, env)})
    );
 }
}
static void _V0unwrap__typedef_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_k351" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__typedef_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 14 21) (close _V0unwrap__typedef_k352) (bruijn ##x.670 0 0))
V_CALL(VGetArg(upenv, 14-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__typedef_k352, env)}),
      _var0
    );
 }
}
static void _V0unwrap__typedef_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_k350" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__typedef_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.88 1 0))) ((bruijn string? 13 22) (close _V0unwrap__typedef_k351) (bruijn name 0 0)) ((bruijn ##k.657 4 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 13-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__typedef_k351, env)}),
      _var0
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__typedef_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_k349" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__typedef_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.88 0 0)) ((close _V0unwrap__typedef_k350) (##inline ##sys.car (bruijn ##expr.88 0 0))) ((bruijn ##k.657 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0unwrap__typedef_k350, env, runtime,
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
static void _V0unwrap__typedef_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_k348" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__typedef_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.87 0 0)) ((close _V0unwrap__typedef_k349) (##inline ##sys.cdr (bruijn ##expr.87 0 0))) ((bruijn ##k.657 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0unwrap__typedef_k349, env, runtime,
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
static void _V0unwrap__typedef_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_k347" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__typedef_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.659 0 0) ((close _V0unwrap__typedef_k348) (##inline ##sys.cdr (bruijn ##expr.86 1 1))) ((bruijn ##k.657 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0unwrap__typedef_k348, env, runtime,
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
static void _V0unwrap__typedef_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_lambda76" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_lambda76, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.86 0 1)) ((bruijn equal? 9 13) (close _V0unwrap__typedef_k347) (quote variable) (##inline ##sys.car (bruijn ##expr.86 0 1))) ((bruijn ##k.657 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 9-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__typedef_k347, env)}),
      VEncodePointer(&_V0variable.sym, VPOINTER_OTHER),
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
static void _V0unwrap__typedef_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_k357" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__typedef_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_k357, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.84 3 1) (bruijn ##k.654 2 0) (bruijn ##x.656 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0unwrap__typedef_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_k356" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__typedef_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn compiler-error 9 23) (close _V0unwrap__typedef_k357) (##string ##string.1189) (bruijn expr 3 0))
V_CALL(VGetArg(upenv, 9-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__typedef_k357, env)}),
      VEncodePointer(&_V10string_D1189.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0unwrap__typedef_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_lambda75" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_lambda75, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0unwrap__typedef_lambda76) (close _V0unwrap__typedef_k356) (bruijn ##input.85 0 1))
V_CALL_FUNC(_V0unwrap__typedef_lambda76, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__typedef_k356, env)}),
      _var1
    );
 }
}
static void _V0unwrap__typedef_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_lambda74" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0unwrap__typedef_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_lambda74, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0unwrap__typedef_lambda75) (bruijn ##k.653 0 0) (bruijn expr 1 0))
V_CALL_FUNC(_V0unwrap__typedef_lambda75, env, runtime,
      _var0,
      upenv->vars[0]
    );
 }
}
static void _V0unwrap__typedef_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_k346" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__typedef_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 6 11) (bruijn ##k.652 1 0) (close _V0unwrap__typedef_lambda74))
V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__typedef_lambda74, env)})
    );
 }
}
static void _V0unwrap__typedef_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0unwrap__typedef_lambda73" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0unwrap__typedef_lambda73, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__typedef_lambda73, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn reduce-declare 4 1) (close _V0unwrap__typedef_k346) (bruijn ret 0 1) (bruijn decl 0 2) (bruijn table 0 3))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__typedef_k346, env)}),
      _var1,
      _var2,
      _var3
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k49" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k50) (bruijn unwrap-typedef 3 4) (close _V0unwrap__typedef_lambda73))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k50, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__typedef_lambda73, env)})
    );
 }
}
static void _V0reduce__type_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__type_k362" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__type_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__type_k362, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.678 2 0) (bruijn ##x.680 0 0) #f #f #f 0 #f #f #f)
V_CALL(upenv->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeInt(0l),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void _V0reduce__type_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__type_k361" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__type_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__type_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 10 39) (close _V0reduce__type_k362) (bruijn maybe-string->symbol 5 3) (bruijn t 6 1))
V_CALL(VGetArg(upenv, 10-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__type_k362, env)}),
      VGetArg(upenv, 5-1, 3),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0loop_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k364" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k364, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn special 2 3) ((bruijn ##k.685 0 0) (bruijn special 2 3)) ((bruijn ##k.685 0 0) (quote int)))
if(VDecodeBool(
upenv->up->vars[3])) {
V_CALL(_var0, runtime,
      upenv->up->vars[3]
    );
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V0int.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k366" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k366, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append-const 8 2) (bruijn ##k.681 3 0) (bruijn const 3 4) (bruijn ##x.683 0 0))
V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[4],
      _var0
    );
 }
}
static void _V0loop_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k365" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn decide 7 1) (close _V0loop_k366) (bruijn ##x.684 0 0) (bruijn longs 2 5) (bruijn short 2 6) (bruijn unsigned 2 7) (bruijn signed 2 8))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k366, env)}),
      _var0,
      upenv->up->vars[5],
      upenv->up->vars[6],
      upenv->up->vars[7],
      upenv->up->vars[8]
    );
 }
}
static void _V0loop_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k369" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k369, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.681 4 0) (bruijn ##x.687 0 0) (bruijn storage 4 2) (bruijn special 4 3) #t (bruijn longs 4 5) (bruijn short 4 6) (bruijn unsigned 4 7) (bruijn signed 4 8))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2],
      upenv->up->up->up->vars[3],
      VEncodeBool(true),
      upenv->up->up->up->vars[5],
      upenv->up->up->up->vars[6],
      upenv->up->up->up->vars[7],
      upenv->up->up->up->vars[8]
    );
 }
}
static void _V0loop_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k371" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k371, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.716 1 0) ((bruijn ##k.717 0 0) (bruijn ##p.716 1 0)) ((bruijn eqv? 15 4) (bruijn ##k.717 0 0) (bruijn ##x.83 3 0) (quote volatile)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      _var0,
      upenv->up->up->vars[0],
      VEncodePointer(&_V0volatile.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k373" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k373, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.681 6 0) (bruijn ##x.689 0 0) (bruijn storage 6 2) (bruijn special 6 3) (bruijn const 6 4) (bruijn longs 6 5) (bruijn short 6 6) (bruijn unsigned 6 7) (bruijn signed 6 8))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 6-1, 2),
      VGetArg(upenv, 6-1, 3),
      VGetArg(upenv, 6-1, 4),
      VGetArg(upenv, 6-1, 5),
      VGetArg(upenv, 6-1, 6),
      VGetArg(upenv, 6-1, 7),
      VGetArg(upenv, 6-1, 8)
    );
 }
}
static void _V0loop_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k378" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k378, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.715 0 0) ((bruijn ##k.712 3 0) (bruijn ##p.715 0 0)) ((bruijn eqv? 20 4) (bruijn ##k.712 3 0) (bruijn ##x.83 8 0) (quote auto)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V0auto.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k377" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.714 0 0) ((bruijn ##k.712 2 0) (bruijn ##p.714 0 0)) ((bruijn eqv? 19 4) (close _V0loop_k378) (bruijn ##x.83 7 0) (quote register)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k378, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V0register.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k376" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.713 0 0) ((bruijn ##k.712 1 0) (bruijn ##p.713 0 0)) ((bruijn eqv? 18 4) (close _V0loop_k377) (bruijn ##x.83 6 0) (quote typedef)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 18-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k377, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V0typedef.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k375" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.711 1 0) ((bruijn ##k.712 0 0) (bruijn ##p.711 1 0)) ((bruijn eqv? 17 4) (close _V0loop_k376) (bruijn ##x.83 5 0) (quote extern)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 17-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k376, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0extern.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k381" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k381, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.697 1 0) ((bruijn compiler-error 19 23) (bruijn ##k.698 0 0) (##string ##string.1190)) ((bruijn car 19 7) (bruijn ##k.698 0 0) (bruijn t 9 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 19-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10string_D1190.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 7), runtime,
      _var0,
      VGetArg(upenv, 9-1, 1)
    );
}
 }
}
static void _V0loop_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k384" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k384, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 21 23) (bruijn ##k.695 1 0) (##string ##string.1191) (bruijn storage 11 2) (bruijn ##x.696 0 0))
V_CALL(VGetArg(upenv, 21-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1191.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 2),
      _var0
    );
 }
}
static void _V0loop_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k383" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn storage 10 2) ((bruijn car 20 7) (close _V0loop_k384) (bruijn t 10 1)) ((bruijn ##k.695 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 10-1, 2))) {
V_CALL(VGetArg(upenv, 20-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k384, env)}),
      VGetArg(upenv, 10-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k387" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k387, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 13 1) (bruijn ##k.681 12 0) (bruijn ##x.693 1 0) (bruijn ##x.694 0 0) (bruijn special 12 3) (bruijn const 12 4) (bruijn longs 12 5) (bruijn short 12 6) (bruijn unsigned 12 7) (bruijn signed 12 8))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 12-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 12-1, 3),
      VGetArg(upenv, 12-1, 4),
      VGetArg(upenv, 12-1, 5),
      VGetArg(upenv, 12-1, 6),
      VGetArg(upenv, 12-1, 7),
      VGetArg(upenv, 12-1, 8)
    );
 }
}
static void _V0loop_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k386" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 21 7) (close _V0loop_k387) (bruijn t 11 1))
V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k387, env)}),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0loop_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k385" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 20 5) (close _V0loop_k386) (bruijn t 10 1))
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k386, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0loop_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k382" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k383) (close _V0loop_k385))
V_CALL_FUNC(_V0loop_k383, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k385, env)})
    );
 }
}
static void _V0loop_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k380" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k381) (close _V0loop_k382))
V_CALL_FUNC(_V0loop_k381, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k382, env)})
    );
 }
}
static void _V0loop_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k390" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k390, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 11 1) (bruijn ##k.681 10 0) (bruijn ##x.700 1 0) (bruijn storage 10 2) (bruijn special 10 3) (bruijn const 10 4) (bruijn ##x.701 0 0) (bruijn short 10 6) (bruijn unsigned 10 7) (bruijn signed 10 8))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 10-1, 2),
      VGetArg(upenv, 10-1, 3),
      VGetArg(upenv, 10-1, 4),
      _var0,
      VGetArg(upenv, 10-1, 6),
      VGetArg(upenv, 10-1, 7),
      VGetArg(upenv, 10-1, 8)
    );
 }
}
static void _V0loop_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k389" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 19 9) (close _V0loop_k390) (bruijn longs 9 5) 1)
V_CALL(VGetArg(upenv, 19-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k390, env)}),
      VGetArg(upenv, 9-1, 5),
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k392" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k392, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 11 1) (bruijn ##k.681 10 0) (bruijn ##x.703 0 0) (bruijn storage 10 2) (bruijn special 10 3) (bruijn const 10 4) (bruijn longs 10 5) #t (bruijn unsigned 10 7) (bruijn signed 10 8))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      _var0,
      VGetArg(upenv, 10-1, 2),
      VGetArg(upenv, 10-1, 3),
      VGetArg(upenv, 10-1, 4),
      VGetArg(upenv, 10-1, 5),
      VEncodeBool(true),
      VGetArg(upenv, 10-1, 7),
      VGetArg(upenv, 10-1, 8)
    );
 }
}
static void _V0loop_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k394" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k394, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 12 1) (bruijn ##k.681 11 0) (bruijn ##x.705 0 0) (bruijn storage 11 2) (bruijn special 11 3) (bruijn const 11 4) (bruijn longs 11 5) (bruijn short 11 6) #t (bruijn signed 11 8))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 2),
      VGetArg(upenv, 11-1, 3),
      VGetArg(upenv, 11-1, 4),
      VGetArg(upenv, 11-1, 5),
      VGetArg(upenv, 11-1, 6),
      VEncodeBool(true),
      VGetArg(upenv, 11-1, 8)
    );
 }
}
static void _V0loop_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k396" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k396, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 13 1) (bruijn ##k.681 12 0) (bruijn ##x.707 0 0) (bruijn storage 12 2) (bruijn special 12 3) (bruijn const 12 4) (bruijn longs 12 5) (bruijn short 12 6) (bruijn unsigned 12 7) #t)
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0,
      VGetArg(upenv, 12-1, 2),
      VGetArg(upenv, 12-1, 3),
      VGetArg(upenv, 12-1, 4),
      VGetArg(upenv, 12-1, 5),
      VGetArg(upenv, 12-1, 6),
      VGetArg(upenv, 12-1, 7),
      VEncodeBool(true)
    );
 }
}
static void _V0loop_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k397" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k397, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 22 23) (bruijn ##k.681 12 0) (##string ##string.1192) (bruijn ##x.708 0 0) (bruijn special 12 3))
V_CALL(VGetArg(upenv, 22-1, 23), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V10string_D1192.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 12-1, 3)
    );
 }
}
static void _V0loop_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k399" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k399, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 14 1) (bruijn ##k.681 13 0) (bruijn ##x.709 1 0) (bruijn storage 13 2) (bruijn ##x.710 0 0) (bruijn const 13 4) (bruijn longs 13 5) (bruijn short 13 6) (bruijn unsigned 13 7) (bruijn signed 13 8))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 13-1, 2),
      _var0,
      VGetArg(upenv, 13-1, 4),
      VGetArg(upenv, 13-1, 5),
      VGetArg(upenv, 13-1, 6),
      VGetArg(upenv, 13-1, 7),
      VGetArg(upenv, 13-1, 8)
    );
 }
}
static void _V0loop_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k398" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 22 7) (close _V0loop_k399) (bruijn t 12 1))
V_CALL(VGetArg(upenv, 22-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k399, env)}),
      VGetArg(upenv, 12-1, 1)
    );
 }
}
static void _V0loop_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k395" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.706 0 0) ((bruijn cdr 21 5) (close _V0loop_k396) (bruijn t 11 1)) (if (bruijn special 11 3) ((bruijn car 21 7) (close _V0loop_k397) (bruijn t 11 1)) ((bruijn cdr 21 5) (close _V0loop_k398) (bruijn t 11 1))))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k396, env)}),
      VGetArg(upenv, 11-1, 1)
    );
} else {
if(VDecodeBool(
VGetArg(upenv, 11-1, 3))) {
V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k397, env)}),
      VGetArg(upenv, 11-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k398, env)}),
      VGetArg(upenv, 11-1, 1)
    );
}
}
 }
}
static void _V0loop_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k393" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.704 0 0) ((bruijn cdr 20 5) (close _V0loop_k394) (bruijn t 10 1)) ((bruijn eqv? 20 4) (close _V0loop_k395) (bruijn ##x.83 8 0) (quote signed)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k394, env)}),
      VGetArg(upenv, 10-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k395, env)}),
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V0signed.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k391" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.702 0 0) ((bruijn cdr 19 5) (close _V0loop_k392) (bruijn t 9 1)) ((bruijn eqv? 19 4) (close _V0loop_k393) (bruijn ##x.83 7 0) (quote unsigned)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k392, env)}),
      VGetArg(upenv, 9-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k393, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V0unsigned.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k388" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.699 0 0) ((bruijn cdr 18 5) (close _V0loop_k389) (bruijn t 8 1)) ((bruijn eqv? 18 4) (close _V0loop_k391) (bruijn ##x.83 6 0) (quote short)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k389, env)}),
      VGetArg(upenv, 8-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 18-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k391, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V0short.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k379" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.690 0 0) ((bruijn not 17 21) (close _V0loop_k380) (bruijn storage-declaration? 13 3)) ((bruijn eqv? 17 4) (close _V0loop_k388) (bruijn ##x.83 5 0) (quote long)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k380, env)}),
      VGetArg(upenv, 13-1, 3)
    );
} else {
V_CALL(VGetArg(upenv, 17-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k388, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0long.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k374" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k375) (close _V0loop_k379))
V_CALL_FUNC(_V0loop_k375, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k379, env)})
    );
 }
}
static void _V0loop_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k372" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.688 0 0) ((bruijn cdr 15 5) (close _V0loop_k373) (bruijn t 5 1)) ((bruijn eqv? 15 4) (close _V0loop_k374) (bruijn ##x.83 3 0) (quote static)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k373, env)}),
      VGetArg(upenv, 5-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k374, env)}),
      upenv->up->up->vars[0],
      VEncodePointer(&_V0static.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k370" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k371) (close _V0loop_k372))
V_CALL_FUNC(_V0loop_k371, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k372, env)})
    );
 }
}
static void _V0loop_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k368" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.686 0 0) ((bruijn cdr 13 5) (close _V0loop_k369) (bruijn t 3 1)) ((bruijn eqv? 13 4) (close _V0loop_k370) (bruijn ##x.83 1 0) (quote restrict)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k369, env)}),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k370, env)}),
      upenv->vars[0],
      VEncodePointer(&_V0restrict.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k367" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 12 4) (close _V0loop_k368) (bruijn ##x.83 0 0) (quote const))
V_CALL(VGetArg(upenv, 12-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k368, env)}),
      _var0,
      VEncodePointer(&_V0const.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k363" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.682 0 0) ((close _V0loop_k364) (close _V0loop_k365)) ((bruijn car 11 7) (close _V0loop_k367) (bruijn t 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0loop_k364, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k365, env)})
    );
} else {
V_CALL(VGetArg(upenv, 11-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k367, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 static VDebugInfo dbg = { "_V0loop_lambda80" };
 VRecordCall(&dbg);
 if(argc != 9) {
  VError("Not enough arguments to _V0loop_lambda80, got ~D~N"
  "-- expected 9~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda80, runtime, upenv, 9, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8) {
  struct { VEnv env; VWORD argv[9]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 9; env->var_len = 9; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  env->vars[8] = _var8;
  // ((bruijn null? 10 25) (close _V0loop_k363) (bruijn t 0 1))
V_CALL(VGetArg(upenv, 10-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k363, env)}),
      _var1
    );
 }
}
static void _V0reduce__type_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0reduce__type_lambda79" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__type_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0reduce__type_k361) (bruijn loop 0 1) (close _V0loop_lambda80))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__type_k361, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda80, env)})
    );
 }
}
static void _V0reduce__type_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__type_k360" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__type_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__type_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0reduce__type_lambda79) (bruijn ##k.674 3 0) #f)
V_CALL_FUNC(_V0reduce__type_lambda79, env, runtime,
      upenv->up->up->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0maybe__string___Gsymbol_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0maybe__string___Gsymbol_k400" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0maybe__string___Gsymbol_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0maybe__string___Gsymbol_k400, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.719 0 0) ((bruijn string->symbol 9 35) (bruijn ##k.718 1 0) (bruijn x 1 1)) ((bruijn ##k.718 1 0) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 35), runtime,
      upenv->vars[0],
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]
    );
}
 }
}
static void _V0maybe__string___Gsymbol_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0maybe__string___Gsymbol_lambda81" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0maybe__string___Gsymbol_lambda81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0maybe__string___Gsymbol_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string? 8 22) (close _V0maybe__string___Gsymbol_k400) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 8-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0maybe__string___Gsymbol_k400, env)}),
      _var1
    );
 }
}
static void _V0reduce__type_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__type_k359" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__type_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__type_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0reduce__type_k360) (bruijn maybe-string->symbol 2 3) (close _V0maybe__string___Gsymbol_lambda81))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__type_k360, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0maybe__string___Gsymbol_lambda81, env)})
    );
 }
}
static void _V0append__const_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0append__const_lambda82" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0append__const_lambda82, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append__const_lambda82, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn const? 0 1) ((bruijn list 7 38) (bruijn ##k.720 0 0) (quote const) (bruijn type 0 2)) ((bruijn ##k.720 0 0) (bruijn type 0 2)))
if(VDecodeBool(
_var1)) {
V_CALL(VGetArg(upenv, 7-1, 38), runtime,
      _var0,
      VEncodePointer(&_V0const.sym, VPOINTER_OTHER),
      _var2
    );
} else {
V_CALL(_var0, runtime,
      _var2
    );
}
 }
}
static void _V0reduce__type_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__type_k358" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__type_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__type_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0reduce__type_k359) (bruijn append-const 1 2) (close _V0append__const_lambda82))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__type_k359, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append__const_lambda82, env)})
    );
 }
}
static void _V0decide_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k405" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k405, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.26 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.26 0 0))) ((bruijn ##kk.20 7 1) (bruijn ##k.938 5 0) (quote char)) ((bruijn ##k.938 5 0) #f)) ((bruijn ##k.938 5 0) #f)) ((bruijn ##k.938 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
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
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0char.sym, VPOINTER_OTHER)
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
static void _V0decide_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k404" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.25 0 0))) ((close _V0decide_k405) (##inline ##sys.cdr (bruijn ##expr.25 0 0))) ((bruijn ##k.938 4 0) #f)) ((bruijn ##k.938 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k405, env, runtime,
      VInlineCdr(
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
static void _V0decide_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k403" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.24 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.24 0 0))) ((close _V0decide_k404) (##inline ##sys.cdr (bruijn ##expr.24 0 0))) ((bruijn ##k.938 3 0) #f)) ((bruijn ##k.938 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k404, env, runtime,
      VInlineCdr(
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
static void _V0decide_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k402" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.23 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.23 0 0))) ((close _V0decide_k403) (##inline ##sys.cdr (bruijn ##expr.23 0 0))) ((bruijn ##k.938 2 0) #f)) ((bruijn ##k.938 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeInt(0l),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k403, env, runtime,
      VInlineCdr(
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
static void _V0decide_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k401" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.940 0 0) ((close _V0decide_k402) (##inline ##sys.cdr (bruijn ##expr.22 1 1))) ((bruijn ##k.938 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k402, env, runtime,
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
static void _V0decide_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda86" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 1)) ((bruijn equal? 9 13) (close _V0decide_k401) (quote char) (##inline ##sys.car (bruijn ##expr.22 0 1))) ((bruijn ##k.938 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 9-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k401, env)}),
      VEncodePointer(&_V0char.sym, VPOINTER_OTHER),
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
static void _V0decide_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k411" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k411, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.31 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.31 0 0))) ((bruijn ##kk.20 8 1) (bruijn ##k.920 5 0) (quote unsigned-char)) ((bruijn ##k.920 5 0) #f)) ((bruijn ##k.920 5 0) #f)) ((bruijn ##k.920 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
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
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0unsigned__char.sym, VPOINTER_OTHER)
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
static void _V0decide_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k410" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.30 0 0))) ((close _V0decide_k411) (##inline ##sys.cdr (bruijn ##expr.30 0 0))) ((bruijn ##k.920 4 0) #f)) ((bruijn ##k.920 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(true),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k411, env, runtime,
      VInlineCdr(
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
static void _V0decide_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k409" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.29 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.29 0 0))) ((close _V0decide_k410) (##inline ##sys.cdr (bruijn ##expr.29 0 0))) ((bruijn ##k.920 3 0) #f)) ((bruijn ##k.920 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k410, env, runtime,
      VInlineCdr(
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
static void _V0decide_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k408" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.28 0 0))) ((close _V0decide_k409) (##inline ##sys.cdr (bruijn ##expr.28 0 0))) ((bruijn ##k.920 2 0) #f)) ((bruijn ##k.920 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeInt(0l),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k409, env, runtime,
      VInlineCdr(
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
static void _V0decide_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k407" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.922 0 0) ((close _V0decide_k408) (##inline ##sys.cdr (bruijn ##expr.27 1 1))) ((bruijn ##k.920 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k408, env, runtime,
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
static void _V0decide_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda87" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda87, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 1)) ((bruijn equal? 10 13) (close _V0decide_k407) (quote char) (##inline ##sys.car (bruijn ##expr.27 0 1))) ((bruijn ##k.920 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 10-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k407, env)}),
      VEncodePointer(&_V0char.sym, VPOINTER_OTHER),
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
static void _V0decide_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k417" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k417, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.36 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.36 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.36 0 0))) ((bruijn ##kk.20 9 1) (bruijn ##k.902 5 0) (quote signed-char)) ((bruijn ##k.902 5 0) #f)) ((bruijn ##k.902 5 0) #f)) ((bruijn ##k.902 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(true),
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
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0signed__char.sym, VPOINTER_OTHER)
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
static void _V0decide_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k416" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.35 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.35 0 0))) ((close _V0decide_k417) (##inline ##sys.cdr (bruijn ##expr.35 0 0))) ((bruijn ##k.902 4 0) #f)) ((bruijn ##k.902 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k417, env, runtime,
      VInlineCdr(
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
static void _V0decide_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k415" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k415, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.34 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.34 0 0))) ((close _V0decide_k416) (##inline ##sys.cdr (bruijn ##expr.34 0 0))) ((bruijn ##k.902 3 0) #f)) ((bruijn ##k.902 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k416, env, runtime,
      VInlineCdr(
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
static void _V0decide_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k414" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.33 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.33 0 0))) ((close _V0decide_k415) (##inline ##sys.cdr (bruijn ##expr.33 0 0))) ((bruijn ##k.902 2 0) #f)) ((bruijn ##k.902 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeInt(0l),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k415, env, runtime,
      VInlineCdr(
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
static void _V0decide_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k413" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.904 0 0) ((close _V0decide_k414) (##inline ##sys.cdr (bruijn ##expr.32 1 1))) ((bruijn ##k.902 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k414, env, runtime,
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
static void _V0decide_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda88" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda88, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 1)) ((bruijn equal? 11 13) (close _V0decide_k413) (quote char) (##inline ##sys.car (bruijn ##expr.32 0 1))) ((bruijn ##k.902 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 11-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k413, env)}),
      VEncodePointer(&_V0char.sym, VPOINTER_OTHER),
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
static void _V0decide_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k423" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k423, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.41 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.41 0 0))) ((bruijn ##kk.20 10 1) (bruijn ##k.886 5 0) (quote int)) ((bruijn ##k.886 5 0) #f)) ((bruijn ##k.886 5 0) #f))
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
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0int.sym, VPOINTER_OTHER)
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
static void _V0decide_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k422" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.40 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.40 0 0))) ((close _V0decide_k423) (##inline ##sys.cdr (bruijn ##expr.40 0 0))) ((bruijn ##k.886 4 0) #f)) ((bruijn ##k.886 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k423, env, runtime,
      VInlineCdr(
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
static void _V0decide_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k421" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k421, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.39 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.39 0 0))) ((close _V0decide_k422) (##inline ##sys.cdr (bruijn ##expr.39 0 0))) ((bruijn ##k.886 3 0) #f)) ((bruijn ##k.886 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k422, env, runtime,
      VInlineCdr(
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
static void _V0decide_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k420" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.38 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.38 0 0))) ((close _V0decide_k421) (##inline ##sys.cdr (bruijn ##expr.38 0 0))) ((bruijn ##k.886 2 0) #f)) ((bruijn ##k.886 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeInt(0l),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k421, env, runtime,
      VInlineCdr(
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
static void _V0decide_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k419" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k419, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.888 0 0) ((close _V0decide_k420) (##inline ##sys.cdr (bruijn ##expr.37 1 1))) ((bruijn ##k.886 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k420, env, runtime,
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
static void _V0decide_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda89" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda89, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.37 0 1)) ((bruijn equal? 12 13) (close _V0decide_k419) (quote int) (##inline ##sys.car (bruijn ##expr.37 0 1))) ((bruijn ##k.886 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 12-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k419, env)}),
      VEncodePointer(&_V0int.sym, VPOINTER_OTHER),
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
static void _V0decide_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k429" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k429, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.46 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.46 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.46 0 0))) ((bruijn ##kk.20 11 1) (bruijn ##k.868 5 0) (quote unsigned-int)) ((bruijn ##k.868 5 0) #f)) ((bruijn ##k.868 5 0) #f)) ((bruijn ##k.868 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
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
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0unsigned__int.sym, VPOINTER_OTHER)
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
static void _V0decide_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k428" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.45 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.45 0 0))) ((close _V0decide_k429) (##inline ##sys.cdr (bruijn ##expr.45 0 0))) ((bruijn ##k.868 4 0) #f)) ((bruijn ##k.868 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(true),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k429, env, runtime,
      VInlineCdr(
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
static void _V0decide_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k427" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k427, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.44 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.44 0 0))) ((close _V0decide_k428) (##inline ##sys.cdr (bruijn ##expr.44 0 0))) ((bruijn ##k.868 3 0) #f)) ((bruijn ##k.868 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k428, env, runtime,
      VInlineCdr(
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
static void _V0decide_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k426" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.43 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.43 0 0))) ((close _V0decide_k427) (##inline ##sys.cdr (bruijn ##expr.43 0 0))) ((bruijn ##k.868 2 0) #f)) ((bruijn ##k.868 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeInt(0l),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k427, env, runtime,
      VInlineCdr(
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
static void _V0decide_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k425" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k425, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.870 0 0) ((close _V0decide_k426) (##inline ##sys.cdr (bruijn ##expr.42 1 1))) ((bruijn ##k.868 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k426, env, runtime,
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
static void _V0decide_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda90" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda90, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.42 0 1)) ((bruijn equal? 13 13) (close _V0decide_k425) (quote int) (##inline ##sys.car (bruijn ##expr.42 0 1))) ((bruijn ##k.868 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k425, env)}),
      VEncodePointer(&_V0int.sym, VPOINTER_OTHER),
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
static void _V0decide_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k435" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k435, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.51 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.51 0 0))) ((bruijn ##kk.20 12 1) (bruijn ##k.852 5 0) (quote long)) ((bruijn ##k.852 5 0) #f)) ((bruijn ##k.852 5 0) #f))
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
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0long.sym, VPOINTER_OTHER)
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
static void _V0decide_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k434" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.50 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.50 0 0))) ((close _V0decide_k435) (##inline ##sys.cdr (bruijn ##expr.50 0 0))) ((bruijn ##k.852 4 0) #f)) ((bruijn ##k.852 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k435, env, runtime,
      VInlineCdr(
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
static void _V0decide_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k433" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.49 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.49 0 0))) ((close _V0decide_k434) (##inline ##sys.cdr (bruijn ##expr.49 0 0))) ((bruijn ##k.852 3 0) #f)) ((bruijn ##k.852 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k434, env, runtime,
      VInlineCdr(
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
static void _V0decide_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k432" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k432, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.48 0 0)) (if (##inline ##sys.eq? 1 (##inline ##sys.car (bruijn ##expr.48 0 0))) ((close _V0decide_k433) (##inline ##sys.cdr (bruijn ##expr.48 0 0))) ((bruijn ##k.852 2 0) #f)) ((bruijn ##k.852 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeInt(1l),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k433, env, runtime,
      VInlineCdr(
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
static void _V0decide_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k431" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k431, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.854 0 0) ((close _V0decide_k432) (##inline ##sys.cdr (bruijn ##expr.47 1 1))) ((bruijn ##k.852 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k432, env, runtime,
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
static void _V0decide_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda91" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda91, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.47 0 1)) ((bruijn equal? 14 13) (close _V0decide_k431) (quote int) (##inline ##sys.car (bruijn ##expr.47 0 1))) ((bruijn ##k.852 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k431, env)}),
      VEncodePointer(&_V0int.sym, VPOINTER_OTHER),
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
static void _V0decide_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k441" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k441, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.56 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.56 0 0))) ((bruijn ##kk.20 13 1) (bruijn ##k.834 5 0) (quote unsigned-long)) ((bruijn ##k.834 5 0) #f)) ((bruijn ##k.834 5 0) #f)) ((bruijn ##k.834 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
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
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0unsigned__long.sym, VPOINTER_OTHER)
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
static void _V0decide_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k440" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.55 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.55 0 0))) ((close _V0decide_k441) (##inline ##sys.cdr (bruijn ##expr.55 0 0))) ((bruijn ##k.834 4 0) #f)) ((bruijn ##k.834 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(true),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k441, env, runtime,
      VInlineCdr(
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
static void _V0decide_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k439" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k439, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.54 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.54 0 0))) ((close _V0decide_k440) (##inline ##sys.cdr (bruijn ##expr.54 0 0))) ((bruijn ##k.834 3 0) #f)) ((bruijn ##k.834 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k440, env, runtime,
      VInlineCdr(
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
static void _V0decide_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k438" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k438, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.53 0 0)) (if (##inline ##sys.eq? 1 (##inline ##sys.car (bruijn ##expr.53 0 0))) ((close _V0decide_k439) (##inline ##sys.cdr (bruijn ##expr.53 0 0))) ((bruijn ##k.834 2 0) #f)) ((bruijn ##k.834 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeInt(1l),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k439, env, runtime,
      VInlineCdr(
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
static void _V0decide_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k437" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k437, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.836 0 0) ((close _V0decide_k438) (##inline ##sys.cdr (bruijn ##expr.52 1 1))) ((bruijn ##k.834 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k438, env, runtime,
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
static void _V0decide_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda92" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.52 0 1)) ((bruijn equal? 15 13) (close _V0decide_k437) (quote int) (##inline ##sys.car (bruijn ##expr.52 0 1))) ((bruijn ##k.834 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 15-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k437, env)}),
      VEncodePointer(&_V0int.sym, VPOINTER_OTHER),
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
static void _V0decide_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k447" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k447, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.61 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.61 0 0))) ((bruijn ##kk.20 14 1) (bruijn ##k.818 5 0) (quote long)) ((bruijn ##k.818 5 0) #f)) ((bruijn ##k.818 5 0) #f))
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
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0long.sym, VPOINTER_OTHER)
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
static void _V0decide_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k446" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k446, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.60 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.60 0 0))) ((close _V0decide_k447) (##inline ##sys.cdr (bruijn ##expr.60 0 0))) ((bruijn ##k.818 4 0) #f)) ((bruijn ##k.818 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k447, env, runtime,
      VInlineCdr(
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
static void _V0decide_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k445" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k445, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.59 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.59 0 0))) ((close _V0decide_k446) (##inline ##sys.cdr (bruijn ##expr.59 0 0))) ((bruijn ##k.818 3 0) #f)) ((bruijn ##k.818 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k446, env, runtime,
      VInlineCdr(
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
static void _V0decide_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k444" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.58 0 0)) (if (##inline ##sys.eq? 2 (##inline ##sys.car (bruijn ##expr.58 0 0))) ((close _V0decide_k445) (##inline ##sys.cdr (bruijn ##expr.58 0 0))) ((bruijn ##k.818 2 0) #f)) ((bruijn ##k.818 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeInt(2l),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k445, env, runtime,
      VInlineCdr(
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
static void _V0decide_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k443" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k443, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.820 0 0) ((close _V0decide_k444) (##inline ##sys.cdr (bruijn ##expr.57 1 1))) ((bruijn ##k.818 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k444, env, runtime,
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
static void _V0decide_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda93" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.57 0 1)) ((bruijn equal? 16 13) (close _V0decide_k443) (quote int) (##inline ##sys.car (bruijn ##expr.57 0 1))) ((bruijn ##k.818 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k443, env)}),
      VEncodePointer(&_V0int.sym, VPOINTER_OTHER),
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
static void _V0decide_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k453" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k453, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.66 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.66 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.66 0 0))) ((bruijn ##kk.20 15 1) (bruijn ##k.800 5 0) (quote unsigned-long)) ((bruijn ##k.800 5 0) #f)) ((bruijn ##k.800 5 0) #f)) ((bruijn ##k.800 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
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
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0unsigned__long.sym, VPOINTER_OTHER)
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
static void _V0decide_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k452" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.65 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.65 0 0))) ((close _V0decide_k453) (##inline ##sys.cdr (bruijn ##expr.65 0 0))) ((bruijn ##k.800 4 0) #f)) ((bruijn ##k.800 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(true),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k453, env, runtime,
      VInlineCdr(
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
static void _V0decide_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k451" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k451, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.64 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.64 0 0))) ((close _V0decide_k452) (##inline ##sys.cdr (bruijn ##expr.64 0 0))) ((bruijn ##k.800 3 0) #f)) ((bruijn ##k.800 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k452, env, runtime,
      VInlineCdr(
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
static void _V0decide_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k450" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k450, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.63 0 0)) (if (##inline ##sys.eq? 2 (##inline ##sys.car (bruijn ##expr.63 0 0))) ((close _V0decide_k451) (##inline ##sys.cdr (bruijn ##expr.63 0 0))) ((bruijn ##k.800 2 0) #f)) ((bruijn ##k.800 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeInt(2l),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k451, env, runtime,
      VInlineCdr(
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
static void _V0decide_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k449" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k449, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.802 0 0) ((close _V0decide_k450) (##inline ##sys.cdr (bruijn ##expr.62 1 1))) ((bruijn ##k.800 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k450, env, runtime,
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
static void _V0decide_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda94" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda94, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.62 0 1)) ((bruijn equal? 17 13) (close _V0decide_k449) (quote int) (##inline ##sys.car (bruijn ##expr.62 0 1))) ((bruijn ##k.800 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 17-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k449, env)}),
      VEncodePointer(&_V0int.sym, VPOINTER_OTHER),
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
static void _V0decide_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k459" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k459, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.71 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.71 0 0))) ((bruijn ##kk.20 16 1) (bruijn ##k.784 5 0) (quote short)) ((bruijn ##k.784 5 0) #f)) ((bruijn ##k.784 5 0) #f))
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
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0short.sym, VPOINTER_OTHER)
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
static void _V0decide_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k458" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k458, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.70 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.70 0 0))) ((close _V0decide_k459) (##inline ##sys.cdr (bruijn ##expr.70 0 0))) ((bruijn ##k.784 4 0) #f)) ((bruijn ##k.784 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k459, env, runtime,
      VInlineCdr(
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
static void _V0decide_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k457" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.69 0 0))) ((close _V0decide_k458) (##inline ##sys.cdr (bruijn ##expr.69 0 0))) ((bruijn ##k.784 3 0) #f)) ((bruijn ##k.784 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(true),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k458, env, runtime,
      VInlineCdr(
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
static void _V0decide_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k456" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.68 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.68 0 0))) ((close _V0decide_k457) (##inline ##sys.cdr (bruijn ##expr.68 0 0))) ((bruijn ##k.784 2 0) #f)) ((bruijn ##k.784 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeInt(0l),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k457, env, runtime,
      VInlineCdr(
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
static void _V0decide_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k455" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k455, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.786 0 0) ((close _V0decide_k456) (##inline ##sys.cdr (bruijn ##expr.67 1 1))) ((bruijn ##k.784 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k456, env, runtime,
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
static void _V0decide_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda95" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda95, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.67 0 1)) ((bruijn equal? 18 13) (close _V0decide_k455) (quote int) (##inline ##sys.car (bruijn ##expr.67 0 1))) ((bruijn ##k.784 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k455, env)}),
      VEncodePointer(&_V0int.sym, VPOINTER_OTHER),
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
static void _V0decide_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k465" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k465, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.76 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.76 0 0))) ((bruijn ##kk.20 17 1) (bruijn ##k.766 5 0) (quote unsigned-short)) ((bruijn ##k.766 5 0) #f)) ((bruijn ##k.766 5 0) #f)) ((bruijn ##k.766 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
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
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0unsigned__short.sym, VPOINTER_OTHER)
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
static void _V0decide_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k464" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k464, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.75 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.75 0 0))) ((close _V0decide_k465) (##inline ##sys.cdr (bruijn ##expr.75 0 0))) ((bruijn ##k.766 4 0) #f)) ((bruijn ##k.766 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(true),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k465, env, runtime,
      VInlineCdr(
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
static void _V0decide_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k463" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k463, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.74 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.74 0 0))) ((close _V0decide_k464) (##inline ##sys.cdr (bruijn ##expr.74 0 0))) ((bruijn ##k.766 3 0) #f)) ((bruijn ##k.766 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(true),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k464, env, runtime,
      VInlineCdr(
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
static void _V0decide_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k462" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k462, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.73 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.73 0 0))) ((close _V0decide_k463) (##inline ##sys.cdr (bruijn ##expr.73 0 0))) ((bruijn ##k.766 2 0) #f)) ((bruijn ##k.766 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeInt(0l),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k463, env, runtime,
      VInlineCdr(
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
static void _V0decide_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k461" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k461, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.768 0 0) ((close _V0decide_k462) (##inline ##sys.cdr (bruijn ##expr.72 1 1))) ((bruijn ##k.766 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k462, env, runtime,
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
static void _V0decide_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda96" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.72 0 1)) ((bruijn equal? 19 13) (close _V0decide_k461) (quote int) (##inline ##sys.car (bruijn ##expr.72 0 1))) ((bruijn ##k.766 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k461, env)}),
      VEncodePointer(&_V0int.sym, VPOINTER_OTHER),
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
static void _V0decide_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k474" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k474, runtime, upenv, 1, argc, _var0) {
  // ((bruijn equal? 28 13) (bruijn ##k.759 1 0) (bruijn ##x.760 0 0) (##string ##string.1183))
V_CALL(VGetArg(upenv, 28-1, 13), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V10string_D1183.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0decide_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k473" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.758 1 0) ((bruijn car 27 7) (close _V0decide_k474) (bruijn special 6 0)) ((bruijn ##k.759 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 27-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k474, env)}),
      VGetArg(upenv, 6-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0decide_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda98" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.757 0 0) (bruijn x 0 1))
V_CALL(_var0, runtime,
      _var1
    );
 }
}
static void _V0decide_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k477" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k477, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##x.82 0 0) ((close _V0decide_lambda98) (bruijn ##k.756 1 0) (bruijn ##x.82 0 0)) ((bruijn ##k.756 1 0) (bruijn special 8 0)))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_lambda98, env, runtime,
      upenv->vars[0],
      _var0
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VGetArg(upenv, 8-1, 0)
    );
}
 }
}
static void _V0decide_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k476" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.755 1 0) ((bruijn ##k.756 0 0) (quote unsigned-int)) ((bruijn find-typedef 27 2) (close _V0decide_k477) (bruijn special 7 0) (bruijn table 24 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V0unsigned__int.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 27-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k477, env)}),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 24-1, 2)
    );
}
 }
}
static void _V0decide_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k478" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k478, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.20 21 1) (bruijn ##k.743 8 0) (bruijn ##x.754 0 0))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0decide_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k475" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k475, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_k476) (close _V0decide_k478))
V_CALL_FUNC(_V0decide_k476, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k478, env)})
    );
 }
}
static void _V0decide_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k472" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k472, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_k473) (close _V0decide_k475))
V_CALL_FUNC(_V0decide_k473, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k475, env)})
    );
 }
}
static void _V0decide_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k471" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k471, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.81 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.81 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.81 0 0))) ((bruijn pair? 25 8) (close _V0decide_k472) (bruijn special 4 0)) ((bruijn ##k.743 5 0) #f)) ((bruijn ##k.743 5 0) #f)) ((bruijn ##k.743 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
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
V_CALL(VGetArg(upenv, 25-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k472, env)}),
      upenv->up->up->up->vars[0]
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
static void _V0decide_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k470" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k470, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.80 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.80 0 0))) ((close _V0decide_k471) (##inline ##sys.cdr (bruijn ##expr.80 0 0))) ((bruijn ##k.743 4 0) #f)) ((bruijn ##k.743 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k471, env, runtime,
      VInlineCdr(
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
static void _V0decide_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k469" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.79 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.79 0 0))) ((close _V0decide_k470) (##inline ##sys.cdr (bruijn ##expr.79 0 0))) ((bruijn ##k.743 3 0) #f)) ((bruijn ##k.743 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeBool(false),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k470, env, runtime,
      VInlineCdr(
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
static void _V0decide_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k468" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.78 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.78 0 0))) ((close _V0decide_k469) (##inline ##sys.cdr (bruijn ##expr.78 0 0))) ((bruijn ##k.743 2 0) #f)) ((bruijn ##k.743 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineEq(
VEncodeInt(0l),
      VInlineCar(
_var0
    )

    )
)) {
V_CALL_FUNC(_V0decide_k469, env, runtime,
      VInlineCdr(
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
static void _V0decide_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k467" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k467, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_k468) (##inline ##sys.cdr (bruijn ##expr.77 1 1)))
V_CALL_FUNC(_V0decide_k468, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0decide_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda97" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda97, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.77 0 1)) ((close _V0decide_k467) (##inline ##sys.car (bruijn ##expr.77 0 1))) ((bruijn ##k.743 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0decide_k467, env, runtime,
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
static void _V0decide_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k481" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k481, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.20 15 1) (bruijn ##k.723 14 0) (bruijn ##x.736 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      _var0
    );
 }
}
static void _V0decide_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k480" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k480, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn compiler-error 21 23) (close _V0decide_k481) (##string ##string.1193) (bruijn ##x.737 0 0))
V_CALL(VGetArg(upenv, 21-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k481, env)}),
      VEncodePointer(&_V10string_D1193.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0decide_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k479" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k479, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 20 39) (close _V0decide_k480) (bruijn list 20 38) (bruijn args 14 1) (##inline ##sys.qcons (quote special) (##inline ##sys.qcons (quote longs) (##inline ##sys.qcons (quote short) (##inline ##sys.qcons (quote unsigned) (##inline ##sys.qcons (quote signed) (quote ())))))))
V_CALL(VGetArg(upenv, 20-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k480, env)}),
      VGetArg(upenv, 20-1, 38),
      VGetArg(upenv, 14-1, 1),
      VInlineCons(
VEncodePointer(&_V0special.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0longs.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0short.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0unsigned.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0signed.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    )

    )

    )

    );
 }
}
static void _V0decide_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k466" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k466, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda97) (close _V0decide_k479) (bruijn ##input.21 11 1))
V_CALL_FUNC(_V0decide_lambda97, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k479, env)}),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0decide_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k460" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k460, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda96) (close _V0decide_k466) (bruijn ##input.21 10 1))
V_CALL_FUNC(_V0decide_lambda96, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k466, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0decide_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k454" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k454, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda95) (close _V0decide_k460) (bruijn ##input.21 9 1))
V_CALL_FUNC(_V0decide_lambda95, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k460, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0decide_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k448" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k448, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda94) (close _V0decide_k454) (bruijn ##input.21 8 1))
V_CALL_FUNC(_V0decide_lambda94, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k454, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0decide_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k442" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k442, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda93) (close _V0decide_k448) (bruijn ##input.21 7 1))
V_CALL_FUNC(_V0decide_lambda93, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k448, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0decide_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k436" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda92) (close _V0decide_k442) (bruijn ##input.21 6 1))
V_CALL_FUNC(_V0decide_lambda92, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k442, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0decide_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k430" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda91) (close _V0decide_k436) (bruijn ##input.21 5 1))
V_CALL_FUNC(_V0decide_lambda91, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k436, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0decide_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k424" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda90) (close _V0decide_k430) (bruijn ##input.21 4 1))
V_CALL_FUNC(_V0decide_lambda90, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k430, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0decide_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k418" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda89) (close _V0decide_k424) (bruijn ##input.21 3 1))
V_CALL_FUNC(_V0decide_lambda89, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k424, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0decide_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k412" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda88) (close _V0decide_k418) (bruijn ##input.21 2 1))
V_CALL_FUNC(_V0decide_lambda88, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k418, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0decide_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k406" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda87) (close _V0decide_k412) (bruijn ##input.21 1 1))
V_CALL_FUNC(_V0decide_lambda87, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k412, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0decide_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda85" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0decide_lambda86) (close _V0decide_k406) (bruijn ##input.21 0 1))
V_CALL_FUNC(_V0decide_lambda86, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k406, env)}),
      _var1
    );
 }
}
static void _V0decide_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda84" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0decide_lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0decide_lambda85) (bruijn ##k.722 0 0) (bruijn args 1 1))
V_CALL_FUNC(_V0decide_lambda85, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0decide_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0decide_lambda83" };
 VRecordCall(&dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0decide_lambda83, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda83, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn call/cc 6 11) (bruijn ##k.721 0 0) (close _V0decide_lambda84))
V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_lambda84, env)})
    );
 }
}
static void _V0reduce__type_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0reduce__type_lambda78" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__type_lambda78, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (set! (close _V0reduce__type_k358) (bruijn decide 0 1) (close _V0decide_lambda83))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__type_k358, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_lambda83, env)})
    );
 }
}
static void _V0reduce__type_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0reduce__type_lambda77" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0reduce__type_lambda77, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__type_lambda77, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0reduce__type_lambda78) (bruijn ##k.673 0 0) #f #f #f)
V_CALL_FUNC(_V0reduce__type_lambda78, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k48" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k49) (bruijn reduce-type 2 3) (close _V0reduce__type_lambda77))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k49, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__type_lambda77, env)})
    );
 }
}
static void _V0find__typedef_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0find__typedef_k484" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0find__typedef_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__typedef_k484, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 6 21) (bruijn ##k.969 1 0) (bruijn ##x.970 0 0))
V_CALL(VGetArg(upenv, 6-1, 21), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0find__typedef_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0find__typedef_k483" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0find__typedef_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__typedef_k483, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.968 1 0) ((bruijn memv 5 40) (close _V0find__typedef_k484) (bruijn special 2 1) (##inline ##sys.qcons (quote void) (##inline ##sys.qcons (quote float) (##inline ##sys.qcons (quote double) (##inline ##sys.qcons (quote _Bool) (quote ())))))) ((bruijn ##k.969 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 5-1, 40), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__typedef_k484, env)}),
      upenv->up->vars[1],
      VInlineCons(
VEncodePointer(&_V0void.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0float.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0double.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0_UBool.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    )

    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0find__typedef_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0find__typedef_k486" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0find__typedef_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__typedef_k486, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.958 1 0) (bruijn table 4 2))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k491" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k491, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 12 4) (bruijn ##k.965 1 0) (bruijn ##x.966 0 0) (bruijn special 9 1))
V_CALL(VGetArg(upenv, 12-1, 4), runtime,
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0loop_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k490" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.964 1 0) ((bruijn cadar 11 32) (close _V0loop_k491) (bruijn table 4 1)) ((bruijn ##k.965 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 11-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k491, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k493" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k493, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 1) (bruijn ##k.960 5 0) (bruijn ##x.963 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0loop_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k492" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.962 0 0) ((bruijn caddar 11 37) (bruijn ##k.960 4 0) (bruijn table 4 1)) ((bruijn cdr 11 5) (close _V0loop_k493) (bruijn table 4 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 37), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 11-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k493, env)}),
      upenv->up->up->up->vars[1]
    );
}
 }
}
static void _V0loop_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k489" };
 VRecordCall(&dbg);
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
  // ((close _V0loop_k490) (close _V0loop_k492))
V_CALL_FUNC(_V0loop_k490, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k492, env)})
    );
 }
}
static void _V0loop_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k488" };
 VRecordCall(&dbg);
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
  // ((bruijn eqv? 9 4) (close _V0loop_k489) (bruijn ##x.967 0 0) (quote typedef))
V_CALL(VGetArg(upenv, 9-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k489, env)}),
      _var0,
      VEncodePointer(&_V0typedef.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k487" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.961 0 0) ((bruijn compiler-error 8 23) (bruijn ##k.960 1 0) (##string ##string.1194) (bruijn special 5 1)) ((bruijn caar 8 36) (close _V0loop_k488) (bruijn table 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1194.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k488, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda101" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 7 25) (close _V0loop_k487) (bruijn table 0 1))
V_CALL(VGetArg(upenv, 7-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k487, env)}),
      _var1
    );
 }
}
static void _V0find__typedef_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0find__typedef_lambda100" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0find__typedef_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0find__typedef_k486) (bruijn loop 0 1) (close _V0loop_lambda101))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__typedef_k486, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda101, env)})
    );
 }
}
static void _V0find__typedef_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0find__typedef_k485" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0find__typedef_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__typedef_k485, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.957 0 0) ((close _V0find__typedef_lambda100) (bruijn ##k.956 2 0) #f) ((bruijn ##k.956 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0find__typedef_lambda100, env, runtime,
      upenv->up->vars[0],
      VEncodeBool(false)
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0find__typedef_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0find__typedef_k482" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0find__typedef_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__typedef_k482, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0find__typedef_k483) (close _V0find__typedef_k485))
V_CALL_FUNC(_V0find__typedef_k483, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__typedef_k485, env)})
    );
 }
}
static void _V0find__typedef_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0find__typedef_lambda99" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0find__typedef_lambda99, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__typedef_lambda99, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn symbol? 3 41) (close _V0find__typedef_k482) (bruijn special 0 1))
V_CALL(upenv->up->up->vars[41], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__typedef_k482, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k47" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k48) (bruijn find-typedef 1 2) (close _V0find__typedef_lambda99))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k48, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__typedef_lambda99, env)})
    );
 }
}
static void _V0reduce__declare_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare_k496" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare_k496, runtime, upenv, 1, argc, _var0) {
  // ((bruijn reduce-declare-loop 3 3) (bruijn ##k.976 3 0) (bruijn ret 4 1) (bruijn decl 4 2))
V_CALL(upenv->up->up->vars[3], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->up->vars[1],
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0reduce__declare__loop_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k498" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k498, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1054 1 0) (##sys.blob=? (bruijn ##k.1055 0 0) (##string ##string.1195) (##inline ##sys.car (bruijn ##expr.7 2 1))) ((bruijn ##k.1055 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1195.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->up->vars[1]
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0reduce__declare__loop_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k501" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k501, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.5 6 1) (bruijn ##k.1044 4 0) (##inline ##sys.cons (quote function) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.8 1 0)) (##inline ##sys.cons (bruijn ##x.1052 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0function.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
upenv->vars[0]
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
static void _V0reduce__declare__loop_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k500" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k500, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.8 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.8 0 0))) ((bruijn drop-const 9 1) (close _V0reduce__declare__loop_k501) (bruijn ret 6 1)) ((bruijn ##k.1044 3 0) #f)) ((bruijn ##k.1044 3 0) #f))
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
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k501, env)}),
      VGetArg(upenv, 6-1, 1)
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
static void _V0reduce__declare__loop_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k499" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k499, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1046 0 0) ((close _V0reduce__declare__loop_k500) (##inline ##sys.cdr (bruijn ##expr.7 2 1))) ((bruijn ##k.1044 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0reduce__declare__loop_k500, env, runtime,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0reduce__declare__loop_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k497" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k497, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0reduce__declare__loop_k498) (close _V0reduce__declare__loop_k499))
V_CALL_FUNC(_V0reduce__declare__loop_k498, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k499, env)})
    );
 }
}
static void _V0reduce__declare__loop_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_lambda107" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_lambda107, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.7 0 1)) (##sys.string? (close _V0reduce__declare__loop_k497) (##inline ##sys.car (bruijn ##expr.7 0 1))) ((bruijn ##k.1044 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k497, env)}),
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
static void _V0reduce__declare__loop_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k504" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k504, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1040 1 0) (##sys.blob=? (bruijn ##k.1041 0 0) (##string ##string.1195) (##inline ##sys.car (bruijn ##expr.9 2 1))) ((bruijn ##k.1041 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1195.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->up->vars[1]
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0reduce__declare__loop_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k510" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k510, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1036 1 0) (##sys.blob=? (bruijn ##k.1037 0 0) (##string ##string.1196) (##inline ##sys.car (bruijn ##expr.12 2 0))) ((bruijn ##k.1037 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1196.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->up->vars[0]
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0reduce__declare__loop_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k512" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k512, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1012 1 0) (##inline ##sys.cdr (bruijn ##expr.12 6 0)) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
VGetArg(upenv, 6-1, 0)
    )
,
      VNULL
    );
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
  // ((bruijn ##kk.15 4 1) (bruijn ##k.1023 1 0) (bruijn ##expr.17 2 1) (bruijn ##x.1024 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
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
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.17 1 1))) ((bruijn reverse 22 12) (close _V0loop_k514) (bruijn ##args.14 1 2)) ((bruijn ##k.1023 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 22-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k514, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
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
  // ((bruijn ##kk.15 7 1) (bruijn ##k.1017 2 0) (bruijn ##expr.17 5 1) (bruijn ##x.1019 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
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
  // ((bruijn reverse 25 12) (close _V0loop_k517) (bruijn ##args.14 4 2))
V_CALL(VGetArg(upenv, 25-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k517, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda114" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.16 0 1) (close _V0loop_k516) (##inline ##sys.cdr (bruijn ##expr.17 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.17 3 1)) (bruijn ##args.14 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k516, env)}),
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
static void _V0loop_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda113" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 23 11) (bruijn ##k.1016 0 0) (close _V0loop_lambda114))
V_CALL(VGetArg(upenv, 23-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda114, env)})
    );
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
  // ((bruijn call-with-values 22 10) (bruijn ##k.1014 1 0) (close _V0loop_lambda113) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 22-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda113, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda112" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda112, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda112, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k513) (close _V0loop_k515))
V_CALL_FUNC(_V0loop_k513, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k515, env)})
    );
 }
}
static void _V0reduce__declare__loop_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_lambda111" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_lambda111, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0reduce__declare__loop_k512) (bruijn loop 0 1) (close _V0loop_lambda112))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k512, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda112, env)})
    );
 }
}
static void _V0reduce__declare__loop_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_lambda110" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0reduce__declare__loop_lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_lambda110, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0reduce__declare__loop_lambda111) (bruijn ##k.1011 0 0) #f)
V_CALL_FUNC(_V0reduce__declare__loop_lambda111, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0reduce__declare__loop_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_lambda109" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_lambda109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 18 11) (bruijn ##k.1010 0 0) (close _V0reduce__declare__loop_lambda110))
V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_lambda110, env)})
    );
 }
}
static void _V0reduce__declare__loop_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k520" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k520, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.5 14 1) (bruijn ##k.1026 3 0) (##inline ##sys.cons (quote function) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.10 8 0)) (##inline ##sys.cons (bruijn ##x.1032 2 0) (bruijn ##x.1033 0 0)))))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0function.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
VGetArg(upenv, 8-1, 0)
    )
,
      VInlineCons(
upenv->up->vars[0],
      _var0
    )

    )

    )

    );
 }
}
static void _V0reduce__declare__loop_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k519" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k519, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 20 39) (close _V0reduce__declare__loop_k520) (bruijn drop-const 17 1) (bruijn ##x.1034 0 0))
V_CALL(VGetArg(upenv, 20-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k520, env)}),
      VGetArg(upenv, 17-1, 1),
      _var0
    );
 }
}
static void _V0reduce__declare__loop_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k518" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k518, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reduce-args 16 2) (close _V0reduce__declare__loop_k519) (bruijn args 1 2))
V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k519, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0reduce__declare__loop_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_lambda115" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0reduce__declare__loop_lambda115, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_lambda115, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.11 4 0))) ((bruijn drop-const 15 1) (close _V0reduce__declare__loop_k518) (bruijn ret 12 1)) ((bruijn ##k.1026 0 0) #f)) ((bruijn ##k.1026 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->up->up->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k518, env)}),
      VGetArg(upenv, 12-1, 1)
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
static void _V0reduce__declare__loop_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k511" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k511, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1009 0 0) ((bruijn call-with-values 17 10) (bruijn ##k.1003 7 0) (close _V0reduce__declare__loop_lambda109) (close _V0reduce__declare__loop_lambda115)) ((bruijn ##k.1003 7 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 10), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_lambda109, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_lambda115, env)})
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0reduce__declare__loop_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k509" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k509, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0reduce__declare__loop_k510) (close _V0reduce__declare__loop_k511))
V_CALL_FUNC(_V0reduce__declare__loop_k510, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k511, env)})
    );
 }
}
static void _V0reduce__declare__loop_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k508" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k508, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.12 0 0)) (##sys.string? (close _V0reduce__declare__loop_k509) (##inline ##sys.car (bruijn ##expr.12 0 0))) ((bruijn ##k.1003 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k509, env)}),
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
static void _V0reduce__declare__loop_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k507" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k507, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.11 0 0)) ((close _V0reduce__declare__loop_k508) (##inline ##sys.car (bruijn ##expr.11 0 0))) ((bruijn ##k.1003 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0reduce__declare__loop_k508, env, runtime,
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
static void _V0reduce__declare__loop_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k506" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k506, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.10 0 0)) ((close _V0reduce__declare__loop_k507) (##inline ##sys.cdr (bruijn ##expr.10 0 0))) ((bruijn ##k.1003 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0reduce__declare__loop_k507, env, runtime,
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
static void _V0reduce__declare__loop_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k505" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1005 0 0) ((close _V0reduce__declare__loop_k506) (##inline ##sys.cdr (bruijn ##expr.9 2 1))) ((bruijn ##k.1003 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0reduce__declare__loop_k506, env, runtime,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0reduce__declare__loop_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k503" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k503, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0reduce__declare__loop_k504) (close _V0reduce__declare__loop_k505))
V_CALL_FUNC(_V0reduce__declare__loop_k504, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k505, env)})
    );
 }
}
static void _V0reduce__declare__loop_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_lambda108" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_lambda108, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.9 0 1)) (##sys.string? (close _V0reduce__declare__loop_k503) (##inline ##sys.car (bruijn ##expr.9 0 1))) ((bruijn ##k.1003 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k503, env)}),
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
static void _V0reduce__declare__loop_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k523" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k523, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.999 1 0) (##sys.blob=? (bruijn ##k.1000 0 0) (##string ##string.1197) (##inline ##sys.car (bruijn ##expr.18 2 1))) ((bruijn ##k.1000 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1197.sym, VPOINTER_OTHER),
      VInlineCar(
upenv->up->vars[1]
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0reduce__declare__loop_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k527" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k527, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.5 9 1) (bruijn ##k.991 5 0) (bruijn ##x.996 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0reduce__declare__loop_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k526" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k526, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reduce-declare-loop 12 3) (close _V0reduce__declare__loop_k527) (bruijn ##x.997 0 0) (##inline ##sys.car (bruijn ##expr.19 1 0)))
V_CALL(VGetArg(upenv, 12-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k527, env)}),
      _var0,
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0reduce__declare__loop_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k525" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k525, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.19 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.19 0 0))) ((bruijn list 14 38) (close _V0reduce__declare__loop_k526) (quote pointer) (bruijn ret 8 1)) ((bruijn ##k.991 3 0) #f)) ((bruijn ##k.991 3 0) #f))
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
V_CALL(VGetArg(upenv, 14-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k526, env)}),
      VEncodePointer(&_V0pointer.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1)
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
static void _V0reduce__declare__loop_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k524" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k524, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.993 0 0) ((close _V0reduce__declare__loop_k525) (##inline ##sys.cdr (bruijn ##expr.18 2 1))) ((bruijn ##k.991 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0reduce__declare__loop_k525, env, runtime,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0reduce__declare__loop_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k522" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k522, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0reduce__declare__loop_k523) (close _V0reduce__declare__loop_k524))
V_CALL_FUNC(_V0reduce__declare__loop_k523, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k524, env)})
    );
 }
}
static void _V0reduce__declare__loop_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_lambda116" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_lambda116, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.18 0 1)) (##sys.string? (close _V0reduce__declare__loop_k522) (##inline ##sys.car (bruijn ##expr.18 0 1))) ((bruijn ##k.991 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k522, env)}),
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
static void _V0reduce__declare__loop_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_lambda117" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_lambda117, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.5 5 1) (bruijn ##k.987 0 0) (##inline ##sys.cons (quote variable) (##inline ##sys.cons (bruijn ret 6 1) (##inline ##sys.cons (bruijn expr 0 1) (quote ())))))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      _var0,
      VInlineCons(
VEncodePointer(&_V0variable.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 6-1, 1),
      VInlineCons(
_var1,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0reduce__declare__loop_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k529" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k529, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 12 14) (bruijn ##k.982 4 0) (##string ##string.1138))
V_CALL(VGetArg(upenv, 12-1, 14), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1138.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0reduce__declare__loop_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k528" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k528, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0reduce__declare__loop_lambda117) (close _V0reduce__declare__loop_k529) (bruijn ##input.6 3 1))
V_CALL_FUNC(_V0reduce__declare__loop_lambda117, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k529, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0reduce__declare__loop_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k521" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k521, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0reduce__declare__loop_lambda116) (close _V0reduce__declare__loop_k528) (bruijn ##input.6 2 1))
V_CALL_FUNC(_V0reduce__declare__loop_lambda116, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k528, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0reduce__declare__loop_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_k502" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare__loop_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_k502, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0reduce__declare__loop_lambda108) (close _V0reduce__declare__loop_k521) (bruijn ##input.6 1 1))
V_CALL_FUNC(_V0reduce__declare__loop_lambda108, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k521, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0reduce__declare__loop_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_lambda106" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_lambda106, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0reduce__declare__loop_lambda107) (close _V0reduce__declare__loop_k502) (bruijn ##input.6 0 1))
V_CALL_FUNC(_V0reduce__declare__loop_lambda107, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_k502, env)}),
      _var1
    );
 }
}
static void _V0reduce__declare__loop_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_lambda105" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0reduce__declare__loop_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0reduce__declare__loop_lambda106) (bruijn ##k.981 0 0) (bruijn decl 1 2))
V_CALL_FUNC(_V0reduce__declare__loop_lambda106, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0reduce__declare__loop_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0reduce__declare__loop_lambda104" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0reduce__declare__loop_lambda104, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare__loop_lambda104, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 6 11) (bruijn ##k.980 0 0) (close _V0reduce__declare__loop_lambda105))
V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_lambda105, env)})
    );
 }
}
static void _V0reduce__declare_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare_k495" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare_k495, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0reduce__declare_k496) (bruijn reduce-declare-loop 2 3) (close _V0reduce__declare__loop_lambda104))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare_k496, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare__loop_lambda104, env)})
    );
 }
}
static void _V0reduce__args_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__args_k537" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__args_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__args_k537, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 13 19) (bruijn ##k.1058 8 0) (bruijn ##x.1060 2 0) (bruijn ##x.1061 0 0))
V_CALL(VGetArg(upenv, 13-1, 19), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0reduce__args_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__args_k536" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__args_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__args_k536, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reduce-args 9 2) (close _V0reduce__args_k537) (bruijn ##x.1062 0 0))
V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__args_k537, env)}),
      _var0
    );
 }
}
static void _V0reduce__args_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__args_k535" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__args_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__args_k535, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 11 5) (close _V0reduce__args_k536) (bruijn args 6 1))
V_CALL(VGetArg(upenv, 11-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__args_k536, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0reduce__args_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__args_k534" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__args_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__args_k534, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 10 15) (close _V0reduce__args_k535) (bruijn ##x.1063 0 0))
V_CALL(VGetArg(upenv, 10-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__args_k535, env)}),
      _var0
    );
 }
}
static void _V0reduce__args_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__args_k533" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__args_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__args_k533, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reduce-declare 8 1) (close _V0reduce__args_k534) (bruijn ##x.1064 1 0) (bruijn ##x.1065 0 0) (bruijn table 7 3))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__args_k534, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 7-1, 3)
    );
 }
}
static void _V0reduce__args_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__args_k532" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__args_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__args_k532, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadar 8 32) (close _V0reduce__args_k533) (bruijn args 3 1))
V_CALL(VGetArg(upenv, 8-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__args_k533, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0reduce__args_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__args_k531" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__args_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__args_k531, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reduce-type 6 3) (close _V0reduce__args_k532) (bruijn ##x.1066 0 0) (bruijn table 5 3) #f)
V_CALL(VGetArg(upenv, 6-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__args_k532, env)}),
      _var0,
      VGetArg(upenv, 5-1, 3),
      VEncodeBool(false)
    );
 }
}
static void _V0reduce__args_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__args_k530" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__args_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__args_k530, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1059 0 0) ((bruijn ##k.1058 1 0) (quote ())) ((bruijn caar 6 36) (close _V0reduce__args_k531) (bruijn args 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__args_k531, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0reduce__args_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0reduce__args_lambda118" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0reduce__args_lambda118, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__args_lambda118, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 5 25) (close _V0reduce__args_k530) (bruijn args 0 1))
V_CALL(VGetArg(upenv, 5-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__args_k530, env)}),
      _var1
    );
 }
}
static void _V0reduce__declare_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0reduce__declare_k494" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0reduce__declare_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare_k494, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0reduce__declare_k495) (bruijn reduce-args 1 2) (close _V0reduce__args_lambda118))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare_k495, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__args_lambda118, env)})
    );
 }
}
static void _V0drop__const_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop__const_k539" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop__const_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__const_k539, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.4 0 0))) ((bruijn ##kk.1 4 1) (bruijn ##k.1071 2 0) (##inline ##sys.car (bruijn ##expr.4 0 0))) ((bruijn ##k.1071 2 0) #f)) ((bruijn ##k.1071 2 0) #f))
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
static void _V0drop__const_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop__const_k538" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop__const_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__const_k538, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1073 0 0) ((close _V0drop__const_k539) (##inline ##sys.cdr (bruijn ##expr.3 1 1))) ((bruijn ##k.1071 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0drop__const_k539, env, runtime,
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
static void _V0drop__const_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0drop__const_lambda122" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__const_lambda122, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.3 0 1)) ((bruijn equal? 7 13) (close _V0drop__const_k538) (quote const) (##inline ##sys.car (bruijn ##expr.3 0 1))) ((bruijn ##k.1071 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 7-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__const_k538, env)}),
      VEncodePointer(&_V0const.sym, VPOINTER_OTHER),
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
static void _V0drop__const_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop__const_k540" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop__const_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__const_k540, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 2 1) (bruijn ##k.1069 1 0) (bruijn x 3 1))
V_CALL(upenv->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->up->vars[1]
    );
 }
}
static void _V0drop__const_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0drop__const_lambda121" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__const_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0drop__const_lambda122) (close _V0drop__const_k540) (bruijn ##input.2 0 1))
V_CALL_FUNC(_V0drop__const_lambda122, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__const_k540, env)}),
      _var1
    );
 }
}
static void _V0drop__const_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0drop__const_lambda120" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0drop__const_lambda120, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__const_lambda120, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0drop__const_lambda121) (bruijn ##k.1068 0 0) (bruijn x 1 1))
V_CALL_FUNC(_V0drop__const_lambda121, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0drop__const_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0drop__const_lambda119" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0drop__const_lambda119, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__const_lambda119, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 4 11) (bruijn ##k.1067 0 0) (close _V0drop__const_lambda120))
V_CALL(upenv->up->up->up->vars[11], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__const_lambda120, env)})
    );
 }
}
static void _V0reduce__declare_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0reduce__declare_lambda103" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare_lambda103, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (set! (close _V0reduce__declare_k494) (bruijn drop-const 0 1) (close _V0drop__const_lambda119))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare_k494, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__const_lambda119, env)})
    );
 }
}
static void _V0reduce__declare_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0reduce__declare_lambda102" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0reduce__declare_lambda102, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reduce__declare_lambda102, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0reduce__declare_lambda103) (bruijn ##k.975 0 0) #f #f #f)
V_CALL_FUNC(_V0reduce__declare_lambda103, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda3, runtime, upenv, 18, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17) {
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k47) (bruijn reduce-declare 0 1) (close _V0reduce__declare_lambda102))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k47, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reduce__declare_lambda102, env)})
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda2, runtime, upenv, 42, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37, _var38, _var39, _var40, _var41) {
  struct { VEnv env; VWORD argv[42]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 42; env->var_len = 42; env->up = upenv;
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
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda3) (bruijn ##k.151 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda3, env, runtime,
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
static void _V0vanity_V0compiler_V0ffi_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k46" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda2) (bruijn ##k.150 46 0) (bruijn ##x.1078 40 0) (bruijn ##x.1079 39 0) (bruijn ##x.1080 38 0) (bruijn ##x.1081 37 0) (bruijn ##x.1082 36 0) (bruijn ##x.1083 35 0) (bruijn ##x.1084 34 0) (bruijn ##x.1085 33 0) (bruijn ##x.1086 32 0) (bruijn ##x.1087 31 0) (bruijn ##x.1088 30 0) (bruijn ##x.1089 29 0) (bruijn ##x.1090 28 0) (bruijn ##x.1091 27 0) (bruijn ##x.1092 26 0) (bruijn ##x.1093 25 0) (bruijn ##x.1094 24 0) (bruijn ##x.1095 23 0) (bruijn ##x.1096 22 0) (bruijn ##x.1097 21 0) (bruijn ##x.1098 20 0) (bruijn ##x.1099 19 0) (bruijn ##x.1100 18 0) (bruijn ##x.1101 17 0) (bruijn ##x.1102 16 0) (bruijn ##x.1103 15 0) (bruijn ##x.1104 14 0) (bruijn ##x.1105 13 0) (bruijn ##x.1106 12 0) (bruijn ##x.1107 11 0) (bruijn ##x.1108 10 0) (bruijn ##x.1109 9 0) (bruijn ##x.1110 8 0) (bruijn ##x.1111 7 0) (bruijn ##x.1112 6 0) (bruijn ##x.1113 5 0) (bruijn ##x.1114 4 0) (bruijn ##x.1115 3 0) (bruijn ##x.1116 2 0) (bruijn ##x.1117 1 0) (bruijn ##x.1118 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda2, env, runtime,
      VGetArg(upenv, 46-1, 0),
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
static void _V0vanity_V0compiler_V0ffi_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k45" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 40 0) (close _V0vanity_V0compiler_V0ffi_V20_k46) (quote symbol?))
V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k46, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k44" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 39 0) (close _V0vanity_V0compiler_V0ffi_V20_k45) (quote memv))
V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k45, env)}),
      VEncodePointer(&_V0memv.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k43" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 38 0) (close _V0vanity_V0compiler_V0ffi_V20_k44) (quote map))
V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k44, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k42" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 37 0) (close _V0vanity_V0compiler_V0ffi_V20_k43) (quote list))
V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k43, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k41" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 36 0) (close _V0vanity_V0compiler_V0ffi_V20_k42) (quote caddar))
V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k42, env)}),
      VEncodePointer(&_V0caddar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k40" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 35 0) (close _V0vanity_V0compiler_V0ffi_V20_k41) (quote caar))
V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k41, env)}),
      VEncodePointer(&_V0caar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k39" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 34 0) (close _V0vanity_V0compiler_V0ffi_V20_k40) (quote string->symbol))
V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k40, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 33 0) (close _V0vanity_V0compiler_V0ffi_V20_k39) (quote member))
V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k39, env)}),
      VEncodePointer(&_V0member.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k37" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 32 0) (close _V0vanity_V0compiler_V0ffi_V20_k38) (quote symbol->string))
V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k38, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k36" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 31 0) (close _V0vanity_V0compiler_V0ffi_V20_k37) (quote cadar))
V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k37, env)}),
      VEncodePointer(&_V0cadar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k35" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 30 0) (close _V0vanity_V0compiler_V0ffi_V20_k36) (quote string-copy))
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k36, env)}),
      VEncodePointer(&_V0string__copy.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k34" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 29 0) (close _V0vanity_V0compiler_V0ffi_V20_k35) (quote cdddr))
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k35, env)}),
      VEncodePointer(&_V0cdddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k33" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 0) (close _V0vanity_V0compiler_V0ffi_V20_k34) (quote caddr))
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k34, env)}),
      VEncodePointer(&_V0caddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k32" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close _V0vanity_V0compiler_V0ffi_V20_k33) (quote cdadr))
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k33, env)}),
      VEncodePointer(&_V0cdadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k31" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close _V0vanity_V0compiler_V0ffi_V20_k32) (quote system))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k32, env)}),
      VEncodePointer(&_V0system.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k30" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close _V0vanity_V0compiler_V0ffi_V20_k31) (quote =))
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k31, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k29" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close _V0vanity_V0compiler_V0ffi_V20_k30) (quote null?))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k30, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k28" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close _V0vanity_V0compiler_V0ffi_V20_k29) (quote install-root))
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k29, env)}),
      VEncodePointer(&_V0install__root.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k27" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0compiler_V0ffi_V20_k28) (quote compiler-error))
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k28, env)}),
      VEncodePointer(&_V0compiler__error.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k26" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0compiler_V0ffi_V20_k27) (quote string?))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k27, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0compiler_V0ffi_V20_k26) (quote not))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k26, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k24" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0ffi_V20_k25) (quote close-port))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k25, env)}),
      VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k23" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0ffi_V20_k24) (quote cons))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k24, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0ffi_V20_k23) (quote open-input-process))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k23, env)}),
      VEncodePointer(&_V0open__input__process.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0ffi_V20_k22) (quote sprintf))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k22, env)}),
      VEncodePointer(&_V0sprintf.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k20" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0ffi_V20_k21) (quote assv))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k21, env)}),
      VEncodePointer(&_V0assv.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0ffi_V20_k20) (quote cadr))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k20, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0ffi_V20_k19) (quote error))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k19, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0ffi_V20_k18) (quote equal?))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k18, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0ffi_V20_k17) (quote reverse))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k17, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0ffi_V20_k16) (quote call/cc))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k16, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0ffi_V20_k15) (quote call-with-values))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k15, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0ffi_V20_k14) (quote +))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k14, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0ffi_V20_k13) (quote pair?))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k13, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0ffi_V20_k12) (quote car))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k12, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0ffi_V20_k11) (quote for-each))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k11, env)}),
      VEncodePointer(&_V0for__each.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0ffi_V20_k10) (quote cdr))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k10, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0ffi_V20_k9) (quote eqv?))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k9, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k7" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0ffi_V20_k8) (quote printf))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k8, env)}),
      VEncodePointer(&_V0printf.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k6" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0ffi_V20_k7) (quote length))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k7, env)}),
      VEncodePointer(&_V0length.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k5" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0ffi_V20_k6) (quote iota))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k6, env)}),
      VEncodePointer(&_V0iota.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k4" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0ffi_V20_k5) (##string ##string.1198) (bruijn ##x.1119 3 0) (bruijn ##x.1120 2 0) (bruijn ##x.1121 1 0) (bruijn ##x.1122 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k5, env)}),
      VEncodePointer(&_V10string_D1198.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k3" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k4) (##string ##string.1199))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k4, env)}),
      VEncodePointer(&_V10string_D1199.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k2" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k3) (##string ##string.1200))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k3, env)}),
      VEncodePointer(&_V10string_D1200.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k2) (##string ##string.1201))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k2, env)}),
      VEncodePointer(&_V10string_D1201.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k1) (##string ##string.1202))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k1, env)}),
      VEncodePointer(&_V10string_D1202.sym, VPOINTER_OTHER)
    );
 }
}
VFunc _V0vanity_V0compiler_V0ffi_V20 = (VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda1;
