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
static struct { VBlob sym; char bytes[21]; } _V10string_D1015 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1014 = { { VSTRING, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1013 = { { VSTRING, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
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
static struct { VBlob sym; char bytes[23]; } _V0search__open__input__file = { { VSYMBOL, 23 }, "search-open-input-file" };
static struct { VBlob sym; char bytes[8]; } _V0sprintf = { { VSYMBOL, 8 }, "sprintf" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[11]; } _V0close__port = { { VSYMBOL, 11 }, "close-port" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[9]; } _V0list__ref = { { VSYMBOL, 9 }, "list-ref" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[6]; } _V0cdadr = { { VSYMBOL, 6 }, "cdadr" };
static struct { VBlob sym; char bytes[12]; } _V0string__copy = { { VSYMBOL, 12 }, "string-copy" };
static struct { VBlob sym; char bytes[5]; } _V0assv = { { VSYMBOL, 5 }, "assv" };
static struct { VBlob sym; char bytes[14]; } _V10string_D1012 = { { VSTRING, 14 }, "VEncodeDouble" };
static struct { VBlob sym; char bytes[11]; } _V10string_D1011 = { { VSTRING, 11 }, "VEncodeInt" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1010 = { { VSTRING, 12 }, "VEncodeChar" };
static struct { VBlob sym; char bytes[12]; } _V10string_D1009 = { { VSTRING, 12 }, "VEncodeBool" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1008 = { { VSTRING, 22 }, "VEncodeForeignPointer" };
static struct { VBlob sym; char bytes[7]; } _V0size_Ut = { { VSYMBOL, 7 }, "size_t" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1007 = { { VSTRING, 20 }, "VCheckedDecodeVWORD" };
static struct { VBlob sym; char bytes[6]; } _V0vword = { { VSYMBOL, 6 }, "vword" };
static struct { VBlob sym; char bytes[6]; } _V0float = { { VSYMBOL, 6 }, "float" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1006 = { { VSTRING, 21 }, "VCheckedDecodeNumber" };
static struct { VBlob sym; char bytes[7]; } _V0double = { { VSYMBOL, 7 }, "double" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1005 = { { VSTRING, 27 }, "VCheckedDecodeUnsignedLong" };
static struct { VBlob sym; char bytes[19]; } _V10string_D1004 = { { VSTRING, 19 }, "VCheckedDecodeLong" };
static struct { VBlob sym; char bytes[18]; } _V10string_D1003 = { { VSTRING, 18 }, "VCheckedDecodeInt" };
static struct { VBlob sym; char bytes[28]; } _V10string_D1002 = { { VSTRING, 28 }, "VCheckedDecodeUnsignedShort" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1001 = { { VSTRING, 20 }, "VCheckedDecodeShort" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1000 = { { VSTRING, 27 }, "VCheckedDecodeUnsignedChar" };
static struct { VBlob sym; char bytes[25]; } _V10string_D999 = { { VSTRING, 25 }, "VCheckedDecodeSignedChar" };
static struct { VBlob sym; char bytes[19]; } _V10string_D998 = { { VSTRING, 19 }, "VCheckedDecodeChar" };
static struct { VBlob sym; char bytes[19]; } _V10string_D997 = { { VSTRING, 19 }, "VCheckedDecodeBool" };
static struct { VBlob sym; char bytes[5]; } _V0bool = { { VSYMBOL, 5 }, "bool" };
static struct { VBlob sym; char bytes[29]; } _V10string_D996 = { { VSTRING, 29 }, "VCheckedDecodeForeignPointer" };
static struct { VBlob sym; char bytes[22]; } _V10string_D995 = { { VSTRING, 22 }, "VCheckedDecodeVoidPtr" };
static struct { VBlob sym; char bytes[13]; } _V0void__pointer = { { VSYMBOL, 13 }, "void-pointer" };
static struct { VBlob sym; char bytes[27]; } _V10string_D994 = { { VSTRING, 27 }, "VCheckedDecodeConstVoidPtr" };
static struct { VBlob sym; char bytes[19]; } _V0const__void__pointer = { { VSYMBOL, 19 }, "const-void-pointer" };
static struct { VBlob sym; char bytes[27]; } _V10string_D993 = { { VSTRING, 27 }, "VCheckedDecodeConstCString" };
static struct { VBlob sym; char bytes[15]; } _V0const__c__string = { { VSYMBOL, 15 }, "const-c-string" };
static struct { VBlob sym; char bytes[22]; } _V10string_D992 = { { VSTRING, 22 }, "VCheckedDecodeCString" };
static struct { VBlob sym; char bytes[9]; } _V0c__string = { { VSYMBOL, 9 }, "c-string" };
static struct { VBlob sym; char bytes[12]; } _V10string_D991 = { { VSTRING, 12 }, "_V30~A_shim" };
static struct { VBlob sym; char bytes[19]; } _V10string_D990 = { { VSTRING, 19 }, "VForeignParseDeclC" };
static struct { VBlob sym; char bytes[37]; } _V10string_D989 = { { VSTRING, 37 }, "Declaration is not a single function" };
static struct { VBlob sym; char bytes[18]; } _V10string_D988 = { { VSTRING, 18 }, "naked_declaration" };
static struct { VBlob sym; char bytes[32]; } _V10string_D987 = { { VSTRING, 32 }, "Invalid foreign function syntax" };
static struct { VBlob sym; char bytes[9]; } _V0variable = { { VSYMBOL, 9 }, "variable" };
static struct { VBlob sym; char bytes[8]; } _V0pointer = { { VSYMBOL, 8 }, "pointer" };
static struct { VBlob sym; char bytes[8]; } _V10string_D986 = { { VSTRING, 8 }, "pointer" };
static struct { VBlob sym; char bytes[15]; } _V10string_D985 = { { VSTRING, 15 }, "parameter_list" };
static struct { VBlob sym; char bytes[9]; } _V10string_D984 = { { VSTRING, 9 }, "function" };
static struct { VBlob sym; char bytes[6]; } _V0longs = { { VSYMBOL, 6 }, "longs" };
static struct { VBlob sym; char bytes[8]; } _V0special = { { VSYMBOL, 8 }, "special" };
static struct { VBlob sym; char bytes[29]; } _V10string_D983 = { { VSTRING, 29 }, "unsupported type combination" };
static struct { VBlob sym; char bytes[15]; } _V0unsigned__short = { { VSYMBOL, 15 }, "unsigned-short" };
static struct { VBlob sym; char bytes[14]; } _V0unsigned__long = { { VSYMBOL, 14 }, "unsigned-long" };
static struct { VBlob sym; char bytes[13]; } _V0unsigned__int = { { VSYMBOL, 13 }, "unsigned-int" };
static struct { VBlob sym; char bytes[12]; } _V0signed__char = { { VSYMBOL, 12 }, "signed-char" };
static struct { VBlob sym; char bytes[14]; } _V0unsigned__char = { { VSYMBOL, 14 }, "unsigned-char" };
static struct { VBlob sym; char bytes[5]; } _V0char = { { VSYMBOL, 5 }, "char" };
static struct { VBlob sym; char bytes[6]; } _V0const = { { VSYMBOL, 6 }, "const" };
static struct { VBlob sym; char bytes[9]; } _V0restrict = { { VSYMBOL, 9 }, "restrict" };
static struct { VBlob sym; char bytes[5]; } _V0long = { { VSYMBOL, 5 }, "long" };
static struct { VBlob sym; char bytes[6]; } _V0short = { { VSYMBOL, 6 }, "short" };
static struct { VBlob sym; char bytes[9]; } _V0unsigned = { { VSYMBOL, 9 }, "unsigned" };
static struct { VBlob sym; char bytes[7]; } _V0signed = { { VSYMBOL, 7 }, "signed" };
static struct { VBlob sym; char bytes[40]; } _V10string_D982 = { { VSTRING, 40 }, "Can only have one type in a declaration" };
static struct { VBlob sym; char bytes[9]; } _V0volatile = { { VSYMBOL, 9 }, "volatile" };
static struct { VBlob sym; char bytes[4]; } _V0int = { { VSYMBOL, 4 }, "int" };
static struct { VBlob sym; char bytes[26]; } _V10string_D981 = { { VSTRING, 26 }, "Unsupported C declaration" };
static struct { VBlob sym; char bytes[9]; } _V0function = { { VSYMBOL, 9 }, "function" };
static struct { VBlob sym; char bytes[43]; } _V10string_D980 = { { VSTRING, 43 }, "Unsupported arg type in C foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10string_D979 = { { VSTRING, 38 }, "Not a simple function declaration: ~A" };
static struct { VBlob sym; char bytes[46]; } _V10string_D978 = { { VSTRING, 46 }, "Unsupported return type in C foreign-function" };
static struct { VBlob sym; char bytes[1]; } _V10string_D977 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[7]; } _V0define = { { VSYMBOL, 7 }, "define" };
static struct { VBlob sym; char bytes[12]; } _V10string_D976 = { { VSTRING, 12 }, "declaration" };
static struct { VBlob sym; char bytes[9]; } _V10string_D975 = { { VSTRING, 9 }, "toplevel" };
static struct { VBlob sym; char bytes[21]; } _V10string_D974 = { { VSTRING, 21 }, "VForeignParseHeaderC" };
static struct { VBlob sym; char bytes[21]; } _V10string_D973 = { { VSTRING, 21 }, "VForeignReleaseParse" };
static struct { VBlob sym; char bytes[30]; } _V10string_D972 = { { VSTRING, 30 }, "Invalid foreign import syntax" };
static struct { VBlob sym; char bytes[17]; } _V10foreign_Dimport = { { VSYMBOL, 17 }, "##foreign.import" };
static struct { VBlob sym; char bytes[2]; } _V10string_D971 = { { VSTRING, 2 }, "C" };
static struct { VBlob sym; char bytes[15]; } _V10string_D970 = { { VSTRING, 15 }, "#include <~A>\n" };
static struct { VBlob sym; char bytes[18]; } _V10foreign_Ddeclare = { { VSYMBOL, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[22]; } _V10string_D969 = { { VSTRING, 22 }, "File must be a string" };
static struct { VBlob sym; char bytes[38]; } _V10string_D968 = { { VSTRING, 38 }, "Unsupported foreign function language" };
static struct { VBlob sym; char bytes[26]; } _V10string_D967 = { { VSTRING, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[19]; } _V10foreign_Dfunction = { { VSYMBOL, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[17]; } _V10string_D966 = { { VSTRING, 17 }, "~A(_arg~A, \"~A\")" };
static struct { VBlob sym; char bytes[6]; } _V10string_D965 = { { VSTRING, 6 }, "~A;~N" };
static struct { VBlob sym; char bytes[39]; } _V10string_D964 = { { VSTRING, 39 }, "void _V30~A_shim(V_CORE_ARGS, VWORD _k" };
static struct { VBlob sym; char bytes[15]; } _V10string_D963 = { { VSTRING, 15 }, ", VWORD _arg~A" };
static struct { VBlob sym; char bytes[34]; } _V10string_D962 = { { VSTRING, 34 }, "  V_ARG_CHECK2(\"~A\", ~A, argc);~N" };
static struct { VBlob sym; char bytes[62]; } _V10string_D961 = { { VSTRING, 62 }, "  V_GC_CHECK2_VARARGS((VFunc)~A, runtime, statics, ~A, ~A, _k" };
static struct { VBlob sym; char bytes[9]; } _V10string_D960 = { { VSTRING, 9 }, ", _arg~A" };
static struct { VBlob sym; char bytes[6]; } _V10string_D959 = { { VSTRING, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[6]; } _V10string_D958 = { { VSTRING, 6 }, "));~N" };
static struct { VBlob sym; char bytes[5]; } _V0void = { { VSYMBOL, 5 }, "void" };
static struct { VBlob sym; char bytes[9]; } _V10string_D957 = { { VSTRING, 9 }, "  }~N}~N" };
static struct { VBlob sym; char bytes[31]; } _V10string_D956 = { { VSTRING, 31 }, "  V_CALL(_k, runtime, _ret);~N" };
static struct { VBlob sym; char bytes[32]; } _V10string_D955 = { { VSTRING, 32 }, "  V_CALL(_k, runtime, VVOID);~N" };
static struct { VBlob sym; char bytes[3]; } _V10string_D954 = { { VSTRING, 3 }, ", " };
static struct { VBlob sym; char bytes[24]; } _V10string_D953 = { { VSTRING, 24 }, "    VWORD _ret = ~A(~A(" };
static struct { VBlob sym; char bytes[5]; } _V10string_D952 = { { VSTRING, 5 }, "(~A(" };
static struct { VBlob sym; char bytes[23]; } _V0resolve__foreign__import = { { VSYMBOL, 23 }, "resolve-foreign-import" };
static struct { VBlob sym; char bytes[23]; } _V0print__foreign__function = { { VSYMBOL, 23 }, "print-foreign-function" };
static struct { VBlob sym; char bytes[26]; } _V0validate__foreign__function = { { VSYMBOL, 26 }, "validate-foreign-function" };
static struct { VBlob sym; char bytes[24]; } _V0mangle__foreign__function = { { VSYMBOL, 24 }, "mangle-foreign-function" };
static void _V0vanity_V0compiler_V0ffi_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k46" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k46, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.148 14 0) (##inline ##sys.cons (##inline ##sys.cons (quote mangle-foreign-function) (bruijn mangle-foreign-function 14 3)) (##inline ##sys.cons (##inline ##sys.cons (quote validate-foreign-function) (bruijn validate-foreign-function 14 5)) (##inline ##sys.cons (##inline ##sys.cons (quote print-foreign-function) (bruijn print-foreign-function 14 14)) (##inline ##sys.cons (##inline ##sys.cons (quote resolve-foreign-import) (bruijn resolve-foreign-import 14 13)) (quote ()))))))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0mangle__foreign__function.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 3)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0validate__foreign__function.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 5)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0print__foreign__function.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 14)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0resolve__foreign__import.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 13)
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
static void _V0print__foreign__function_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k54" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k54, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.183 1 0) (##inline ##sys.cdr (bruijn ##expr.140 5 0)) (quote ()))
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
static void _V0loop_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k56" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k56, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.143 4 1) (bruijn ##k.194 1 0) (bruijn ##expr.145 2 1) (bruijn ##x.195 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k55" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.145 1 1))) ((bruijn reverse 30 12) (close _V0loop_k56) (bruijn ##args.142 1 2)) ((bruijn ##k.194 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 30-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k56, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k59" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k59, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.143 7 1) (bruijn ##k.188 2 0) (bruijn ##expr.145 5 1) (bruijn ##x.190 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k58" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 33 12) (close _V0loop_k59) (bruijn ##args.142 4 2))
V_CALL(VGetArg(upenv, 33-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k59, env)}),
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
  // ((bruijn ##kk.144 0 1) (close _V0loop_k58) (##inline ##sys.cdr (bruijn ##expr.145 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.145 3 1)) (bruijn ##args.142 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k58, env)}),
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
  // ((bruijn call/cc 31 11) (bruijn ##k.187 0 0) (close _V0loop_lambda13))
V_CALL(VGetArg(upenv, 31-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda13, env)})
    );
 }
}
static void _V0loop_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k57" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 30 10) (bruijn ##k.185 1 0) (close _V0loop_lambda12) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 30-1, 10), runtime,
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
  // ((close _V0loop_k55) (close _V0loop_k57))
V_CALL_FUNC(_V0loop_k55, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k57, env)})
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
  // (set! (close _V0print__foreign__function_k54) (bruijn loop 0 1) (close _V0loop_lambda11))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k54, env)}),
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
  // ((close _V0print__foreign__function_lambda10) (bruijn ##k.182 0 0) #f)
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
  // ((bruijn call/cc 26 11) (bruijn ##k.181 0 0) (close _V0print__foreign__function_lambda9))
V_CALL(VGetArg(upenv, 26-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda9, env)})
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
  // ((bruijn printf 50 3) (bruijn ##k.227 2 0) (##string ##string.953) (bruijn ##x.228 0 0) (bruijn name 25 0))
V_CALL(VGetArg(upenv, 50-1, 3), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D953.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 25-1, 0)
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
  // ((bruijn cdr 49 5) (close _V0print__foreign__function_k81) (bruijn ##x.229 0 0))
V_CALL(VGetArg(upenv, 49-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k81, env)}),
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
  // (if (bruijn ##p.226 1 0) ((bruijn printf 48 3) (bruijn ##k.227 0 0) (##string ##string.952) (bruijn name 23 0)) ((bruijn get-encoder 47 1) (close _V0print__foreign__function_k80) (bruijn ret 25 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 48-1, 3), runtime,
      _var0,
      VEncodePointer(&_V10string_D952.sym, VPOINTER_OTHER),
      VGetArg(upenv, 23-1, 0)
    );
} else {
V_CALL(VGetArg(upenv, 47-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k80, env)}),
      VGetArg(upenv, 25-1, 0)
    );
}
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
  // ((bruijn print-arg 26 1) (bruijn ##k.220 1 0) (bruijn arg 1 1) (bruijn argname 1 2))
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
  // ((bruijn printf 56 3) (close _V0print__foreign__function_k90) (##string ##string.954))
V_CALL(VGetArg(upenv, 56-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k90, env)}),
      VEncodePointer(&_V10string_D954.sym, VPOINTER_OTHER)
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
  // ((bruijn for-each 55 6) (bruijn ##k.218 5 0) (close _V0print__foreign__function_lambda17) (bruijn ##x.222 1 0) (bruijn ##x.223 0 0))
V_CALL(VGetArg(upenv, 55-1, 6), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda17, env)}),
      upenv->vars[0],
      _var0
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
  // ((bruijn cdr 54 5) (close _V0print__foreign__function_k89) (bruijn names 24 2))
V_CALL(VGetArg(upenv, 54-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k89, env)}),
      VGetArg(upenv, 24-1, 2)
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
  // ((bruijn cdr 53 5) (close _V0print__foreign__function_k88) (bruijn args 27 2))
V_CALL(VGetArg(upenv, 53-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k88, env)}),
      VGetArg(upenv, 27-1, 2)
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
  // ((bruijn print-arg 21 1) (close _V0print__foreign__function_k87) (bruijn ##x.224 1 0) (bruijn ##x.225 0 0))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k87, env)}),
      upenv->vars[0],
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
  // ((bruijn car 51 7) (close _V0print__foreign__function_k86) (bruijn names 21 2))
V_CALL(VGetArg(upenv, 51-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k86, env)}),
      VGetArg(upenv, 21-1, 2)
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
  // (if (bruijn ##p.217 1 0) ((bruijn car 50 7) (close _V0print__foreign__function_k85) (bruijn args 24 2)) ((bruijn ##k.218 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 50-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k85, env)}),
      VGetArg(upenv, 24-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
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
  // (if (bruijn ##p.215 1 0) ((bruijn printf 53 3) (bruijn ##k.216 0 0) (##string ##string.955)) ((bruijn printf 53 3) (bruijn ##k.216 0 0) (##string ##string.956)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 53-1, 3), runtime,
      _var0,
      VEncodePointer(&_V10string_D955.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 53-1, 3), runtime,
      _var0,
      VEncodePointer(&_V10string_D956.sym, VPOINTER_OTHER)
    );
}
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
  // ((bruijn printf 53 3) (bruijn ##k.201 22 0) (##string ##string.957))
V_CALL(VGetArg(upenv, 53-1, 3), runtime,
      VGetArg(upenv, 22-1, 0),
      VEncodePointer(&_V10string_D957.sym, VPOINTER_OTHER)
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
  // ((close _V0print__foreign__function_k94) (close _V0print__foreign__function_k95))
V_CALL_FUNC(_V0print__foreign__function_k94, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k95, env)})
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
  // ((bruijn eqv? 51 4) (close _V0print__foreign__function_k93) (bruijn ret 28 0) (quote void))
V_CALL(VGetArg(upenv, 51-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k93, env)}),
      VGetArg(upenv, 28-1, 0),
      VEncodePointer(&_V0void.sym, VPOINTER_OTHER)
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
  // ((bruijn printf 50 3) (close _V0print__foreign__function_k92) (##string ##string.958))
V_CALL(VGetArg(upenv, 50-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k92, env)}),
      VEncodePointer(&_V10string_D958.sym, VPOINTER_OTHER)
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
  // ((close _V0print__foreign__function_k84) (close _V0print__foreign__function_k91))
V_CALL_FUNC(_V0print__foreign__function_k84, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k91, env)})
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
  // ((bruijn pair? 48 8) (close _V0print__foreign__function_k83) (bruijn args 22 2))
V_CALL(VGetArg(upenv, 48-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k83, env)}),
      VGetArg(upenv, 22-1, 2)
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
  // ((close _V0print__foreign__function_k79) (close _V0print__foreign__function_k82))
V_CALL_FUNC(_V0print__foreign__function_k79, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k82, env)})
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
  // ((bruijn eqv? 46 4) (close _V0print__foreign__function_k78) (bruijn ret 23 0) (quote void))
V_CALL(VGetArg(upenv, 46-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k78, env)}),
      VGetArg(upenv, 23-1, 0),
      VEncodePointer(&_V0void.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k76" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 45 3) (close _V0print__foreign__function_k77) (##string ##string.959))
V_CALL(VGetArg(upenv, 45-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k77, env)}),
      VEncodePointer(&_V10string_D959.sym, VPOINTER_OTHER)
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
  // ((bruijn printf 45 3) (bruijn ##k.230 0 0) (##string ##string.960) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 45-1, 3), runtime,
      _var0,
      VEncodePointer(&_V10string_D960.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0print__foreign__function_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k75" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 44 6) (close _V0print__foreign__function_k76) (close _V0print__foreign__function_lambda18) (bruijn names 14 2))
V_CALL(VGetArg(upenv, 44-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k76, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda18, env)}),
      VGetArg(upenv, 14-1, 2)
    );
 }
}
static void _V0print__foreign__function_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k74" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 43 3) (close _V0print__foreign__function_k75) (##string ##string.961) (bruijn mangled 13 1) (bruijn ##x.231 2 0) (bruijn ##x.232 0 0))
V_CALL(VGetArg(upenv, 43-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k75, env)}),
      VEncodePointer(&_V10string_D961.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 1),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__function_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k73" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 42 9) (close _V0print__foreign__function_k74) 1 (bruijn ##x.233 0 0))
V_CALL(VGetArg(upenv, 42-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k74, env)}),
      VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0print__foreign__function_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k72" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 41 2) (close _V0print__foreign__function_k73) (bruijn args 15 2))
V_CALL(VGetArg(upenv, 41-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k73, env)}),
      VGetArg(upenv, 15-1, 2)
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 40 9) (close _V0print__foreign__function_k72) 1 (bruijn ##x.234 0 0))
V_CALL(VGetArg(upenv, 40-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k72, env)}),
      VEncodeInt(1l),
      _var0
    );
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
  // ((bruijn length 39 2) (close _V0print__foreign__function_k71) (bruijn args 13 2))
V_CALL(VGetArg(upenv, 39-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k71, env)}),
      VGetArg(upenv, 13-1, 2)
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
  // ((bruijn printf 38 3) (close _V0print__foreign__function_k70) (##string ##string.962) (bruijn mangled 8 1) (bruijn ##x.235 0 0))
V_CALL(VGetArg(upenv, 38-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k70, env)}),
      VEncodePointer(&_V10string_D962.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1),
      _var0
    );
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
  // ((bruijn + 37 9) (close _V0print__foreign__function_k69) 1 (bruijn ##x.236 0 0))
V_CALL(VGetArg(upenv, 37-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k69, env)}),
      VEncodeInt(1l),
      _var0
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
  // ((bruijn length 36 2) (close _V0print__foreign__function_k68) (bruijn args 10 2))
V_CALL(VGetArg(upenv, 36-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k68, env)}),
      VGetArg(upenv, 10-1, 2)
    );
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
  // ((bruijn printf 35 3) (close _V0print__foreign__function_k67) (##string ##string.959))
V_CALL(VGetArg(upenv, 35-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k67, env)}),
      VEncodePointer(&_V10string_D959.sym, VPOINTER_OTHER)
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
  // ((bruijn printf 35 3) (bruijn ##k.237 0 0) (##string ##string.963) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 35-1, 3), runtime,
      _var0,
      VEncodePointer(&_V10string_D963.sym, VPOINTER_OTHER),
      _var1
    );
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
  // ((bruijn for-each 34 6) (close _V0print__foreign__function_k66) (close _V0print__foreign__function_lambda19) (bruijn names 4 2))
V_CALL(VGetArg(upenv, 34-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k66, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda19, env)}),
      upenv->up->up->up->vars[2]
    );
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
  // ((bruijn printf 33 3) (close _V0print__foreign__function_k65) (##string ##string.964) (bruijn name 8 0))
V_CALL(VGetArg(upenv, 33-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k65, env)}),
      VEncodePointer(&_V10string_D964.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 0)
    );
 }
}
static void _V0print__foreign__function_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k63" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 32 3) (close _V0print__foreign__function_k64) (##string ##string.965) (##inline ##sys.car (bruijn ##expr.138 11 0)))
V_CALL(VGetArg(upenv, 32-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k64, env)}),
      VEncodePointer(&_V10string_D965.sym, VPOINTER_OTHER),
      VInlineCar(
VGetArg(upenv, 11-1, 0)
    )

    );
 }
}
static void _V0print__arg_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__arg_k97" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__arg_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__arg_k97, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 34 3) (bruijn ##k.238 2 0) (##string ##string.966) (bruijn ##x.239 0 0) (bruijn argname 2 2) (bruijn name 9 0))
V_CALL(VGetArg(upenv, 34-1, 3), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D966.sym, VPOINTER_OTHER),
      _var0,
      upenv->up->vars[2],
      VGetArg(upenv, 9-1, 0)
    );
 }
}
static void _V0print__arg_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__arg_k96" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__arg_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__arg_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 33 5) (close _V0print__arg_k97) (bruijn ##x.240 0 0))
V_CALL(VGetArg(upenv, 33-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__arg_k97, env)}),
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
  // ((bruijn get-decoder 31 2) (close _V0print__arg_k96) (bruijn arg 0 1))
V_CALL(VGetArg(upenv, 31-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__arg_k96, env)}),
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
  // (set! (close _V0print__foreign__function_k63) (bruijn print-arg 0 1) (close _V0print__arg_lambda20))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k63, env)}),
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
  // ((close _V0print__foreign__function_lambda16) (bruijn ##k.200 0 0) #f)
V_CALL_FUNC(_V0print__foreign__function_lambda16, env, runtime,
      _var0,
      VEncodeBool(false)
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
  // ((bruijn ##kk.134 14 1) (bruijn ##k.197 4 0) (bruijn ##x.199 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__function_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k62" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__foreign__function_lambda15) (close _V0print__foreign__function_k98) (bruijn ##x.241 2 0) (bruijn ##x.242 0 0))
V_CALL_FUNC(_V0print__foreign__function_lambda15, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k98, env)}),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__function_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k61" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iota 28 1) (close _V0print__foreign__function_k62) (bruijn ##x.243 0 0))
V_CALL(VGetArg(upenv, 28-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k62, env)}),
      _var0
    );
 }
}
static void _V0print__foreign__function_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k60" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 27 2) (close _V0print__foreign__function_k61) (bruijn args 1 2))
V_CALL(VGetArg(upenv, 27-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k61, env)}),
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
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn mangle-foreign-function 25 3) (close _V0print__foreign__function_k60) (bruijn name 1 0)) ((bruijn ##k.197 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k60, env)}),
      upenv->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__foreign__function_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k53" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 25 10) (bruijn ##k.174 7 0) (close _V0print__foreign__function_lambda8) (close _V0print__foreign__function_lambda14))
V_CALL(VGetArg(upenv, 25-1, 10), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda8, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda14, env)})
    );
 }
}
static void _V0print__foreign__function_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k52" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.140 0 0)) ((close _V0print__foreign__function_k53) (##inline ##sys.car (bruijn ##expr.140 0 0))) ((bruijn ##k.174 6 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__foreign__function_k53, env, runtime,
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
static void _V0print__foreign__function_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k51" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0print__foreign__function_k52) (##inline ##sys.cdr (bruijn ##expr.139 1 0)))
V_CALL_FUNC(_V0print__foreign__function_k52, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0print__foreign__function_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k50" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.139 0 0)) ((close _V0print__foreign__function_k51) (##inline ##sys.car (bruijn ##expr.139 0 0))) ((bruijn ##k.174 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__foreign__function_k51, env, runtime,
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
static void _V0print__foreign__function_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k49" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.138 0 0)) ((close _V0print__foreign__function_k50) (##inline ##sys.cdr (bruijn ##expr.138 0 0))) ((bruijn ##k.174 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__foreign__function_k50, env, runtime,
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
static void _V0print__foreign__function_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k48" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 0)) ((close _V0print__foreign__function_k49) (##inline ##sys.cdr (bruijn ##expr.137 0 0))) ((bruijn ##k.174 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__foreign__function_k49, env, runtime,
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
static void _V0print__foreign__function_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k47" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.176 0 0) ((close _V0print__foreign__function_k48) (##inline ##sys.cdr (bruijn ##expr.136 1 1))) ((bruijn ##k.174 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__foreign__function_k48, env, runtime,
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
  // (if (##inline ##sys.pair? (bruijn ##expr.136 0 1)) ((bruijn equal? 18 13) (close _V0print__foreign__function_k47) (quote ##foreign.function) (##inline ##sys.car (bruijn ##expr.136 0 1))) ((bruijn ##k.174 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k47, env)}),
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
static void _V0print__foreign__function_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0print__foreign__function_k99" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k99, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 18 14) (bruijn ##k.172 1 0) (##string ##string.967))
V_CALL(VGetArg(upenv, 18-1, 14), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D967.sym, VPOINTER_OTHER)
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
  // ((close _V0print__foreign__function_lambda7) (close _V0print__foreign__function_k99) (bruijn ##input.135 0 1))
V_CALL_FUNC(_V0print__foreign__function_lambda7, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k99, env)}),
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
  // ((close _V0print__foreign__function_lambda6) (bruijn ##k.171 0 0) (bruijn expr 1 1))
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
  // ((bruijn call/cc 15 11) (bruijn ##k.170 0 0) (close _V0print__foreign__function_lambda5))
V_CALL(VGetArg(upenv, 15-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda5, env)})
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k46) (bruijn print-foreign-function 13 14) (close _V0print__foreign__function_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k46, env)}),
      VEncodeInt(13l), VEncodeInt(14l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda4, env)})
    );
 }
}
static void _V0resolve__foreign__import_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k110" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k110, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.272 1 0) ((bruijn error 29 14) (bruijn ##k.273 0 0) (##string ##string.968) (bruijn expr 15 1)) ((bruijn ##k.273 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 29-1, 14), runtime,
      _var0,
      VEncodePointer(&_V10string_D968.sym, VPOINTER_OTHER),
      VGetArg(upenv, 15-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0resolve__foreign__import_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k114" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k114, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.269 1 0) ((bruijn error 32 14) (bruijn ##k.270 0 0) (##string ##string.969) (bruijn expr 18 1)) ((bruijn ##k.270 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 32-1, 14), runtime,
      _var0,
      VEncodePointer(&_V10string_D969.sym, VPOINTER_OTHER),
      VGetArg(upenv, 18-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0resolve__foreign__import_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k123" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k123, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.129 20 1) (bruijn ##k.253 18 0) (bruijn ##x.259 0 0))
V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VGetArg(upenv, 18-1, 0),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k122" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 39 17) (close _V0resolve__foreign__import_k123) (##inline ##sys.cons (quote ##foreign.declare) (##inline ##sys.cons (bruijn ##x.267 1 0) (quote ()))) (bruijn ##x.265 0 0))
V_CALL(VGetArg(upenv, 39-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k123, env)}),
      VInlineCons(
VEncodePointer(&_V10foreign_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      VNULL
    )

    )
,
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k121" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn unwrap-declares 37 12) (close _V0resolve__foreign__import_k122) (bruijn parse 3 0))
V_CALL(VGetArg(upenv, 37-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k122, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0resolve__foreign__import_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k120" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn sprintf 37 16) (close _V0resolve__foreign__import_k121) (##string ##string.970) (bruijn file 11 0))
V_CALL(VGetArg(upenv, 37-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k121, env)}),
      VEncodePointer(&_V10string_D970.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 0)
    );
 }
}
static void _V0resolve__foreign__import_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k119" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn close-port 36 18) (close _V0resolve__foreign__import_k120) (bruijn fd 3 0))
V_CALL(VGetArg(upenv, 36-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k120, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0resolve__foreign__import_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k118" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn release-parse 20 2) (close _V0resolve__foreign__import_k119))
V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k119, env)})
    );
 }
}
static void _V0resolve__foreign__import_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k117" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn deep-copy 33 4) (close _V0resolve__foreign__import_k118) (bruijn ##x.268 0 0))
V_CALL(VGetArg(upenv, 33-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k118, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k116" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn parse-header-c 18 1) (close _V0resolve__foreign__import_k117) (bruijn fd 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k117, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k115" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn search-open-input-file 32 15) (close _V0resolve__foreign__import_k116) (bruijn file 6 0) (bruijn paths 18 2))
V_CALL(VGetArg(upenv, 32-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k116, env)}),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 18-1, 2)
    );
 }
}
static void _V0resolve__foreign__import_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k113" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0resolve__foreign__import_k114) (close _V0resolve__foreign__import_k115))
V_CALL_FUNC(_V0resolve__foreign__import_k114, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k115, env)})
    );
 }
}
static void _V0resolve__foreign__import_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k112" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 30 19) (close _V0resolve__foreign__import_k113) (bruijn ##x.271 0 0))
V_CALL(VGetArg(upenv, 30-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k113, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k111" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string? 29 20) (close _V0resolve__foreign__import_k112) (bruijn file 3 0))
V_CALL(VGetArg(upenv, 29-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k112, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0resolve__foreign__import_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k109" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0resolve__foreign__import_k110) (close _V0resolve__foreign__import_k111))
V_CALL_FUNC(_V0resolve__foreign__import_k110, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k111, env)})
    );
 }
}
static void _V0resolve__foreign__import_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k108" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 27 19) (close _V0resolve__foreign__import_k109) (bruijn ##x.274 0 0))
V_CALL(VGetArg(upenv, 27-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k109, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k107" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.133 1 0))) ((bruijn equal? 26 13) (close _V0resolve__foreign__import_k108) (##inline ##sys.car (bruijn ##expr.132 2 0)) (##string ##string.971)) ((bruijn ##k.253 4 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 26-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k108, env)}),
      VInlineCar(
upenv->up->vars[0]
    )
,
      VEncodePointer(&_V10string_D971.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0resolve__foreign__import_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k106" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.133 0 0)) ((close _V0resolve__foreign__import_k107) (##inline ##sys.car (bruijn ##expr.133 0 0))) ((bruijn ##k.253 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0resolve__foreign__import_k107, env, runtime,
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
static void _V0resolve__foreign__import_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k105" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.132 0 0)) ((close _V0resolve__foreign__import_k106) (##inline ##sys.cdr (bruijn ##expr.132 0 0))) ((bruijn ##k.253 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0resolve__foreign__import_k106, env, runtime,
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
static void _V0resolve__foreign__import_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k104" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.255 0 0) ((close _V0resolve__foreign__import_k105) (##inline ##sys.cdr (bruijn ##expr.131 1 1))) ((bruijn ##k.253 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0resolve__foreign__import_k105, env, runtime,
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
static void _V0resolve__foreign__import_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_lambda25" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.131 0 1)) ((bruijn equal? 22 13) (close _V0resolve__foreign__import_k104) (quote ##foreign.import) (##inline ##sys.car (bruijn ##expr.131 0 1))) ((bruijn ##k.253 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k104, env)}),
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
static void _V0resolve__foreign__import_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k125" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k125, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.129 3 1) (bruijn ##k.250 2 0) (bruijn ##x.252 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k124" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 22 14) (close _V0resolve__foreign__import_k125) (##string ##string.972) (bruijn expr 8 1))
V_CALL(VGetArg(upenv, 22-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k125, env)}),
      VEncodePointer(&_V10string_D972.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0resolve__foreign__import_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0resolve__foreign__import_lambda25) (close _V0resolve__foreign__import_k124) (bruijn ##input.130 0 1))
V_CALL_FUNC(_V0resolve__foreign__import_lambda25, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k124, env)}),
      _var1
    );
 }
}
static void _V0resolve__foreign__import_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_lambda23" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0resolve__foreign__import_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0resolve__foreign__import_lambda24) (bruijn ##k.249 0 0) (bruijn expr 6 1))
V_CALL_FUNC(_V0resolve__foreign__import_lambda24, env, runtime,
      _var0,
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0resolve__foreign__import_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k103" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 11) (bruijn ##k.246 4 0) (close _V0resolve__foreign__import_lambda23))
V_CALL(VGetArg(upenv, 19-1, 11), runtime,
      upenv->up->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_lambda23, env)})
    );
 }
}
static void _V0resolve__foreign__import_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k102" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0resolve__foreign__import_k103) (bruijn release-parse 3 2) (bruijn ##x.277 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k103, env)}),
      VEncodeInt(3l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k101" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.function (close _V0resolve__foreign__import_k102) (##string ##string.973))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k102, env)}),
      VEncodePointer(&_V10string_D973.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0resolve__foreign__import_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_k100" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0resolve__foreign__import_k101) (bruijn parse-header-c 1 1) (bruijn ##x.278 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k101, env)}),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_lambda22" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_lambda22, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (##vcore.function (close _V0resolve__foreign__import_k100) (##string ##string.974))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k100, env)}),
      VEncodePointer(&_V10string_D974.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0resolve__foreign__import_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0resolve__foreign__import_lambda21" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0resolve__foreign__import_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_lambda21, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0resolve__foreign__import_lambda22) (bruijn ##k.245 0 0) #f #f)
V_CALL_FUNC(_V0resolve__foreign__import_lambda22, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false)
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k45) (bruijn resolve-foreign-import 12 13) (close _V0resolve__foreign__import_lambda21))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k45, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_lambda21, env)})
    );
 }
}
static void _V0unwrap__declares_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k127" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k127, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.337 1 0) (##sys.blob=? (bruijn ##k.338 0 0) (##string ##string.975) (##inline ##sys.car (bruijn ##expr.119 2 1))) ((bruijn ##k.338 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D975.sym, VPOINTER_OTHER),
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
static void _V0unwrap__declares_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k128" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k128, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.334 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.119 2 1))) ((bruijn ##kk.117 4 1) (bruijn ##k.332 2 0) (quote ())) ((bruijn ##k.332 2 0) #f)) ((bruijn ##k.332 2 0) #f))
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
      VNULL
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
static void _V0unwrap__declares_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k126" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__declares_k127) (close _V0unwrap__declares_k128))
V_CALL_FUNC(_V0unwrap__declares_k127, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k128, env)})
    );
 }
}
static void _V0unwrap__declares_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__declares_lambda29" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.119 0 1)) (##sys.string? (close _V0unwrap__declares_k126) (##inline ##sys.car (bruijn ##expr.119 0 1))) ((bruijn ##k.332 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k126, env)}),
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
static void _V0unwrap__declares_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k131" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k131, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.328 1 0) (##sys.blob=? (bruijn ##k.329 0 0) (##string ##string.975) (##inline ##sys.car (bruijn ##expr.120 2 1))) ((bruijn ##k.329 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D975.sym, VPOINTER_OTHER),
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
static void _V0unwrap__declares_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k136" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k136, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.324 1 0) (##sys.blob=? (bruijn ##k.325 0 0) (##string ##string.976) (##inline ##sys.car (bruijn ##expr.122 2 0))) ((bruijn ##k.325 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D976.sym, VPOINTER_OTHER),
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
static void _V0unwrap__declares_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k146" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k146, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.117 18 1) (bruijn ##k.304 15 0) (bruijn ##x.312 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 15-1, 0),
      _var0
    );
 }
}
static void _V0unwrap__declares_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k145" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 31 17) (close _V0unwrap__declares_k146) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn ##x.320 1 0) (##inline ##sys.cons (bruijn ff 3 0) (quote ())))) (bruijn ##x.314 0 0))
V_CALL(VGetArg(upenv, 31-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k146, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
upenv->up->up->vars[0],
      VNULL
    )

    )

    )
,
      _var0
    );
 }
}
static void _V0unwrap__declares_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k144" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn unwrap-declares 29 12) (close _V0unwrap__declares_k145) (##inline ##sys.cons (quote (##string ##string.975)) (##inline ##sys.cons (##inline ##sys.cons (quote (##string ##string.976)) (##inline ##sys.cons (bruijn ret 5 0) (##inline ##sys.cdr (bruijn ##expr.124 4 0)))) (##inline ##sys.cdr (bruijn ##expr.121 10 0)))))
V_CALL(VGetArg(upenv, 29-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k145, env)}),
      VInlineCons(
VEncodePointer(&_V10string_D975.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10string_D976.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 0),
      VInlineCdr(
upenv->up->up->up->vars[0]
    )

    )

    )
,
      VInlineCdr(
VGetArg(upenv, 10-1, 0)
    )

    )

    )

    );
 }
}
static void _V0unwrap__declares_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k143" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string->symbol 29 21) (close _V0unwrap__declares_k144) (bruijn ##x.322 0 0))
V_CALL(VGetArg(upenv, 29-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k144, env)}),
      _var0
    );
 }
}
static void _V0unwrap__declares_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k142" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list-ref 28 22) (close _V0unwrap__declares_k143) (bruijn ff 0 0) 4)
V_CALL(VGetArg(upenv, 28-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k143, env)}),
      _var0,
      VEncodeInt(4l)
    );
 }
}
static void _V0unwrap__declares_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k141" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn unwrap-function 26 11) (close _V0unwrap__declares_k142) (##string ##string.977) (bruijn ##x.323 0 0))
V_CALL(VGetArg(upenv, 26-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k142, env)}),
      VEncodePointer(&_V10string_D977.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0unwrap__declares_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k140" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.124 0 0)) ((bruijn list 26 23) (close _V0unwrap__declares_k141) (bruijn ret 1 0) (##inline ##sys.car (bruijn ##expr.124 0 0))) ((bruijn ##k.304 9 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 26-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k141, env)}),
      upenv->vars[0],
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__declares_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k139" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__declares_k140) (##inline ##sys.cdr (bruijn ##expr.123 1 0)))
V_CALL_FUNC(_V0unwrap__declares_k140, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0unwrap__declares_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k138" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.123 0 0)) ((close _V0unwrap__declares_k139) (##inline ##sys.car (bruijn ##expr.123 0 0))) ((bruijn ##k.304 7 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0unwrap__declares_k139, env, runtime,
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
static void _V0unwrap__declares_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k137" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.309 0 0) ((close _V0unwrap__declares_k138) (##inline ##sys.cdr (bruijn ##expr.122 2 0))) ((bruijn ##k.304 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0unwrap__declares_k138, env, runtime,
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
static void _V0unwrap__declares_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k135" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__declares_k136) (close _V0unwrap__declares_k137))
V_CALL_FUNC(_V0unwrap__declares_k136, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k137, env)})
    );
 }
}
static void _V0unwrap__declares_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k134" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.122 0 0)) (##sys.string? (close _V0unwrap__declares_k135) (##inline ##sys.car (bruijn ##expr.122 0 0))) ((bruijn ##k.304 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k135, env)}),
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
static void _V0unwrap__declares_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k133" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 0)) ((close _V0unwrap__declares_k134) (##inline ##sys.car (bruijn ##expr.121 0 0))) ((bruijn ##k.304 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0unwrap__declares_k134, env, runtime,
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
static void _V0unwrap__declares_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k132" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.306 0 0) ((close _V0unwrap__declares_k133) (##inline ##sys.cdr (bruijn ##expr.120 2 1))) ((bruijn ##k.304 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0unwrap__declares_k133, env, runtime,
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
static void _V0unwrap__declares_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k130" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__declares_k131) (close _V0unwrap__declares_k132))
V_CALL_FUNC(_V0unwrap__declares_k131, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k132, env)})
    );
 }
}
static void _V0unwrap__declares_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__declares_lambda30" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.120 0 1)) (##sys.string? (close _V0unwrap__declares_k130) (##inline ##sys.car (bruijn ##expr.120 0 1))) ((bruijn ##k.304 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k130, env)}),
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
static void _V0unwrap__declares_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k149" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k149, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.300 1 0) (##sys.blob=? (bruijn ##k.301 0 0) (##string ##string.975) (##inline ##sys.car (bruijn ##expr.125 2 1))) ((bruijn ##k.301 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D975.sym, VPOINTER_OTHER),
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
static void _V0unwrap__declares_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k154" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k154, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.296 1 0) (##sys.blob=? (bruijn ##k.297 0 0) (##string ##string.976) (##inline ##sys.car (bruijn ##expr.127 2 0))) ((bruijn ##k.297 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D976.sym, VPOINTER_OTHER),
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
static void _V0unwrap__declares_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k157" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k157, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.117 12 1) (bruijn ##k.285 8 0) (bruijn ##x.293 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0unwrap__declares_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k156" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.128 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.128 0 0))) ((bruijn unwrap-declares 24 12) (close _V0unwrap__declares_k157) (##inline ##sys.cons (quote (##string ##string.975)) (##inline ##sys.cdr (bruijn ##expr.126 4 0)))) ((bruijn ##k.285 7 0) #f)) ((bruijn ##k.285 7 0) #f))
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
V_CALL(VGetArg(upenv, 24-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k157, env)}),
      VInlineCons(
VEncodePointer(&_V10string_D975.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->up->up->up->vars[0]
    )

    )

    );
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false)
    );
}
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__declares_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k155" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.290 0 0) ((close _V0unwrap__declares_k156) (##inline ##sys.cdr (bruijn ##expr.127 2 0))) ((bruijn ##k.285 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0unwrap__declares_k156, env, runtime,
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
static void _V0unwrap__declares_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k153" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__declares_k154) (close _V0unwrap__declares_k155))
V_CALL_FUNC(_V0unwrap__declares_k154, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k155, env)})
    );
 }
}
static void _V0unwrap__declares_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k152" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.127 0 0)) (##sys.string? (close _V0unwrap__declares_k153) (##inline ##sys.car (bruijn ##expr.127 0 0))) ((bruijn ##k.285 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k153, env)}),
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
static void _V0unwrap__declares_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k151" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.126 0 0)) ((close _V0unwrap__declares_k152) (##inline ##sys.car (bruijn ##expr.126 0 0))) ((bruijn ##k.285 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0unwrap__declares_k152, env, runtime,
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
static void _V0unwrap__declares_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k150" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.287 0 0) ((close _V0unwrap__declares_k151) (##inline ##sys.cdr (bruijn ##expr.125 2 1))) ((bruijn ##k.285 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0unwrap__declares_k151, env, runtime,
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
static void _V0unwrap__declares_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k148" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__declares_k149) (close _V0unwrap__declares_k150))
V_CALL_FUNC(_V0unwrap__declares_k149, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k150, env)})
    );
 }
}
static void _V0unwrap__declares_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__declares_lambda31" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.125 0 1)) (##sys.string? (close _V0unwrap__declares_k148) (##inline ##sys.car (bruijn ##expr.125 0 1))) ((bruijn ##k.285 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k148, env)}),
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
static void _V0unwrap__declares_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k158" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k158, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 18 14) (bruijn ##k.281 3 0) (##string ##string.967))
V_CALL(VGetArg(upenv, 18-1, 14), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D967.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0unwrap__declares_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k147" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__declares_lambda31) (close _V0unwrap__declares_k158) (bruijn ##input.118 2 1))
V_CALL_FUNC(_V0unwrap__declares_lambda31, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k158, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0unwrap__declares_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__declares_k129" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__declares_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__declares_lambda30) (close _V0unwrap__declares_k147) (bruijn ##input.118 1 1))
V_CALL_FUNC(_V0unwrap__declares_lambda30, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k147, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0unwrap__declares_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__declares_lambda28" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0unwrap__declares_lambda29) (close _V0unwrap__declares_k129) (bruijn ##input.118 0 1))
V_CALL_FUNC(_V0unwrap__declares_lambda29, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_k129, env)}),
      _var1
    );
 }
}
static void _V0unwrap__declares_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__declares_lambda27" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0unwrap__declares_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0unwrap__declares_lambda28) (bruijn ##k.280 0 0) (bruijn parse 1 1))
V_CALL_FUNC(_V0unwrap__declares_lambda28, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0unwrap__declares_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__declares_lambda26" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0unwrap__declares_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 13 11) (bruijn ##k.279 0 0) (close _V0unwrap__declares_lambda27))
V_CALL(VGetArg(upenv, 13-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_lambda27, env)})
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k44) (bruijn unwrap-declares 11 12) (close _V0unwrap__declares_lambda26))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k44, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_lambda26, env)})
    );
 }
}
static void _V0unwrap__function_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k168" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k168, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.365 1 0) ((bruijn error 25 14) (bruijn ##k.366 0 0) (##string ##string.978) (bruijn expr 12 0)) ((bruijn ##k.366 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 25-1, 14), runtime,
      _var0,
      VEncodePointer(&_V10string_D978.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__function_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k172" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k172, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.362 1 0) ((bruijn error 28 14) (bruijn ##k.363 0 0) (##string ##string.979) (bruijn expr 15 0)) ((bruijn ##k.363 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 28-1, 14), runtime,
      _var0,
      VEncodePointer(&_V10string_D979.sym, VPOINTER_OTHER),
      VGetArg(upenv, 15-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__function_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k174" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k174, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.112 15 1) (bruijn ##k.346 13 0) (##inline ##sys.cons (quote ##foreign.function) (##inline ##sys.cons (quote (##string ##string.971)) (##inline ##sys.cons (bruijn decl 17 1) (##inline ##sys.cons (bruijn ret 10 0) (##inline ##sys.cons (bruijn name 8 0) (bruijn args 7 0)))))))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      VInlineCons(
VEncodePointer(&_V10foreign_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D971.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 17-1, 1),
      VInlineCons(
VGetArg(upenv, 10-1, 0),
      VInlineCons(
VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 7-1, 0)
    )

    )

    )

    )

    )

    );
 }
}
static void _V0unwrap__function_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k176" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k176, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.360 0 0) ((bruijn error 31 14) (bruijn ##k.359 2 0) (##string ##string.980) (bruijn name 10 0) (bruijn arg 2 1)) ((bruijn ##k.359 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 31-1, 14), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D980.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 0),
      upenv->up->vars[1]
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0unwrap__function_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k175" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 30 19) (close _V0unwrap__function_k176) (bruijn ##x.361 0 0))
V_CALL(VGetArg(upenv, 30-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k176, env)}),
      _var0
    );
 }
}
static void _V0unwrap__function_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__function_lambda36" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0unwrap__function_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn get-decoder 28 2) (close _V0unwrap__function_k175) (bruijn arg 0 1))
V_CALL(VGetArg(upenv, 28-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k175, env)}),
      _var1
    );
 }
}
static void _V0unwrap__function_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k173" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 28 6) (close _V0unwrap__function_k174) (close _V0unwrap__function_lambda36) (bruijn args 6 0))
V_CALL(VGetArg(upenv, 28-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k174, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_lambda36, env)}),
      VGetArg(upenv, 6-1, 0)
    );
 }
}
static void _V0unwrap__function_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k171" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__function_k172) (close _V0unwrap__function_k173))
V_CALL_FUNC(_V0unwrap__function_k172, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k173, env)})
    );
 }
}
static void _V0unwrap__function_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k170" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 26 19) (close _V0unwrap__function_k171) (bruijn ##x.364 0 0))
V_CALL(VGetArg(upenv, 26-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k171, env)}),
      _var0
    );
 }
}
static void _V0unwrap__function_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k169" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string? 25 20) (close _V0unwrap__function_k170) (bruijn name 4 0))
V_CALL(VGetArg(upenv, 25-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k170, env)}),
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0unwrap__function_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k167" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__function_k168) (close _V0unwrap__function_k169))
V_CALL_FUNC(_V0unwrap__function_k168, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k169, env)})
    );
 }
}
static void _V0unwrap__function_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k166" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 23 19) (close _V0unwrap__function_k167) (bruijn ##x.367 0 0))
V_CALL(VGetArg(upenv, 23-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k167, env)}),
      _var0
    );
 }
}
static void _V0unwrap__function_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k165" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn get-encoder 21 1) (close _V0unwrap__function_k166) (bruijn ret 3 0))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k166, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0unwrap__function_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k164" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__function_k165) (##inline ##sys.cdr (bruijn ##expr.116 1 0)))
V_CALL_FUNC(_V0unwrap__function_k165, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0unwrap__function_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k163" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.116 0 0)) ((close _V0unwrap__function_k164) (##inline ##sys.car (bruijn ##expr.116 0 0))) ((bruijn ##k.346 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0unwrap__function_k164, env, runtime,
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
static void _V0unwrap__function_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k162" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0unwrap__function_k163) (##inline ##sys.cdr (bruijn ##expr.115 1 0)))
V_CALL_FUNC(_V0unwrap__function_k163, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0unwrap__function_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k161" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.115 0 0)) ((close _V0unwrap__function_k162) (##inline ##sys.car (bruijn ##expr.115 0 0))) ((bruijn ##k.346 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0unwrap__function_k162, env, runtime,
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
static void _V0unwrap__function_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k160" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.348 0 0) ((close _V0unwrap__function_k161) (##inline ##sys.cdr (bruijn ##expr.114 1 1))) ((bruijn ##k.346 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0unwrap__function_k161, env, runtime,
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
static void _V0unwrap__function_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__function_lambda35" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_lambda35, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.114 0 1)) ((bruijn equal? 16 13) (close _V0unwrap__function_k160) (quote function) (##inline ##sys.car (bruijn ##expr.114 0 1))) ((bruijn ##k.346 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k160, env)}),
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
static void _V0unwrap__function_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k178" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k178, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.112 3 1) (bruijn ##k.343 2 0) (bruijn ##x.345 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0unwrap__function_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k177" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 16 14) (close _V0unwrap__function_k178) (##string ##string.981) (bruijn expr 3 0))
V_CALL(VGetArg(upenv, 16-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k178, env)}),
      VEncodePointer(&_V10string_D981.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0unwrap__function_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__function_lambda34" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0unwrap__function_lambda35) (close _V0unwrap__function_k177) (bruijn ##input.113 0 1))
V_CALL_FUNC(_V0unwrap__function_lambda35, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k177, env)}),
      _var1
    );
 }
}
static void _V0unwrap__function_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0unwrap__function_lambda33" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0unwrap__function_lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_lambda33, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0unwrap__function_lambda34) (bruijn ##k.342 0 0) (bruijn expr 1 0))
V_CALL_FUNC(_V0unwrap__function_lambda34, env, runtime,
      _var0,
      upenv->vars[0]
    );
 }
}
static void _V0unwrap__function_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0unwrap__function_k159" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0unwrap__function_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 13 11) (bruijn ##k.341 1 0) (close _V0unwrap__function_lambda33))
V_CALL(VGetArg(upenv, 13-1, 11), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_lambda33, env)})
    );
 }
}
static void _V0unwrap__function_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0unwrap__function_lambda32" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0unwrap__function_lambda32, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_lambda32, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn preprocess-declare 11 8) (close _V0unwrap__function_k159) (bruijn expr 0 2))
V_CALL(VGetArg(upenv, 11-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_k159, env)}),
      _var2
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k43) (bruijn unwrap-function 10 11) (close _V0unwrap__function_lambda32))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k43, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_lambda32, env)})
    );
 }
}
static void _V0preprocess__type_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__type_k183" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__type_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__type_k183, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.374 2 0) (bruijn ##x.376 0 0) #f #f 0 #f #f #f)
V_CALL(upenv->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeInt(0l),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void _V0preprocess__type_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__type_k182" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__type_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__type_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 17 25) (close _V0preprocess__type_k183) (bruijn maybe-string->symbol 5 3) (bruijn t 6 1))
V_CALL(VGetArg(upenv, 17-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__type_k183, env)}),
      VGetArg(upenv, 5-1, 3),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0loop_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k185" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k185, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn special 2 2) ((bruijn ##k.381 0 0) (bruijn special 2 2)) ((bruijn ##k.381 0 0) (quote int)))
if(VDecodeBool(
upenv->up->vars[2])) {
V_CALL(_var0, runtime,
      upenv->up->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodePointer(&_V0int.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k187" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k187, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append-const 8 2) (bruijn ##k.377 3 0) (bruijn const 3 3) (bruijn ##x.379 0 0))
V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[3],
      _var0
    );
 }
}
static void _V0loop_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k186" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn decide 7 1) (close _V0loop_k187) (bruijn ##x.380 0 0) (bruijn longs 2 4) (bruijn short 2 5) (bruijn unsigned 2 6) (bruijn signed 2 7))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k187, env)}),
      _var0,
      upenv->up->vars[4],
      upenv->up->vars[5],
      upenv->up->vars[6],
      upenv->up->vars[7]
    );
 }
}
static void _V0loop_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k190" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k190, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.377 4 0) (bruijn ##x.383 0 0) (bruijn special 4 2) #t (bruijn longs 4 4) (bruijn short 4 5) (bruijn unsigned 4 6) (bruijn signed 4 7))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2],
      VEncodeBool(true),
      upenv->up->up->up->vars[4],
      upenv->up->up->up->vars[5],
      upenv->up->up->up->vars[6],
      upenv->up->up->up->vars[7]
    );
 }
}
static void _V0loop_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k192" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k192, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.398 1 0) ((bruijn ##k.399 0 0) (bruijn ##p.398 1 0)) ((bruijn eqv? 22 4) (bruijn ##k.399 0 0) (bruijn ##x.111 3 0) (quote volatile)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 4), runtime,
      _var0,
      upenv->up->up->vars[0],
      VEncodePointer(&_V0volatile.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k194" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k194, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 1) (bruijn ##k.377 6 0) (bruijn ##x.385 0 0) (bruijn special 6 2) (bruijn const 6 3) (bruijn longs 6 4) (bruijn short 6 5) (bruijn unsigned 6 6) (bruijn signed 6 7))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 6-1, 2),
      VGetArg(upenv, 6-1, 3),
      VGetArg(upenv, 6-1, 4),
      VGetArg(upenv, 6-1, 5),
      VGetArg(upenv, 6-1, 6),
      VGetArg(upenv, 6-1, 7)
    );
 }
}
static void _V0loop_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k197" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k197, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 9 1) (bruijn ##k.377 8 0) (bruijn ##x.387 1 0) (bruijn special 8 2) (bruijn const 8 3) (bruijn ##x.388 0 0) (bruijn short 8 5) (bruijn unsigned 8 6) (bruijn signed 8 7))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 8-1, 2),
      VGetArg(upenv, 8-1, 3),
      _var0,
      VGetArg(upenv, 8-1, 5),
      VGetArg(upenv, 8-1, 6),
      VGetArg(upenv, 8-1, 7)
    );
 }
}
static void _V0loop_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k196" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 24 9) (close _V0loop_k197) (bruijn longs 7 4) 1)
V_CALL(VGetArg(upenv, 24-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k197, env)}),
      VGetArg(upenv, 7-1, 4),
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k199" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k199, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 9 1) (bruijn ##k.377 8 0) (bruijn ##x.390 0 0) (bruijn special 8 2) (bruijn const 8 3) (bruijn longs 8 4) #t (bruijn unsigned 8 6) (bruijn signed 8 7))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0,
      VGetArg(upenv, 8-1, 2),
      VGetArg(upenv, 8-1, 3),
      VGetArg(upenv, 8-1, 4),
      VEncodeBool(true),
      VGetArg(upenv, 8-1, 6),
      VGetArg(upenv, 8-1, 7)
    );
 }
}
static void _V0loop_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k201" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k201, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 10 1) (bruijn ##k.377 9 0) (bruijn ##x.392 0 0) (bruijn special 9 2) (bruijn const 9 3) (bruijn longs 9 4) (bruijn short 9 5) #t (bruijn signed 9 7))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0,
      VGetArg(upenv, 9-1, 2),
      VGetArg(upenv, 9-1, 3),
      VGetArg(upenv, 9-1, 4),
      VGetArg(upenv, 9-1, 5),
      VEncodeBool(true),
      VGetArg(upenv, 9-1, 7)
    );
 }
}
static void _V0loop_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k203" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k203, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 11 1) (bruijn ##k.377 10 0) (bruijn ##x.394 0 0) (bruijn special 10 2) (bruijn const 10 3) (bruijn longs 10 4) (bruijn short 10 5) (bruijn unsigned 10 6) #t)
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      _var0,
      VGetArg(upenv, 10-1, 2),
      VGetArg(upenv, 10-1, 3),
      VGetArg(upenv, 10-1, 4),
      VGetArg(upenv, 10-1, 5),
      VGetArg(upenv, 10-1, 6),
      VEncodeBool(true)
    );
 }
}
static void _V0loop_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k204" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k204, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 27 14) (bruijn ##k.377 10 0) (##string ##string.982) (bruijn ##x.395 0 0) (bruijn special 10 2))
V_CALL(VGetArg(upenv, 27-1, 14), runtime,
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10string_D982.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 10-1, 2)
    );
 }
}
static void _V0loop_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k206" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k206, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 12 1) (bruijn ##k.377 11 0) (bruijn ##x.396 1 0) (bruijn ##x.397 0 0) (bruijn const 11 3) (bruijn longs 11 4) (bruijn short 11 5) (bruijn unsigned 11 6) (bruijn signed 11 7))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 11-1, 3),
      VGetArg(upenv, 11-1, 4),
      VGetArg(upenv, 11-1, 5),
      VGetArg(upenv, 11-1, 6),
      VGetArg(upenv, 11-1, 7)
    );
 }
}
static void _V0loop_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k205" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 27 7) (close _V0loop_k206) (bruijn t 10 1))
V_CALL(VGetArg(upenv, 27-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k206, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0loop_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k202" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.393 0 0) ((bruijn cdr 26 5) (close _V0loop_k203) (bruijn t 9 1)) (if (bruijn special 9 2) ((bruijn car 26 7) (close _V0loop_k204) (bruijn t 9 1)) ((bruijn cdr 26 5) (close _V0loop_k205) (bruijn t 9 1))))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 26-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k203, env)}),
      VGetArg(upenv, 9-1, 1)
    );
} else {
if(VDecodeBool(
VGetArg(upenv, 9-1, 2))) {
V_CALL(VGetArg(upenv, 26-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k204, env)}),
      VGetArg(upenv, 9-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 26-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k205, env)}),
      VGetArg(upenv, 9-1, 1)
    );
}
}
 }
}
static void _V0loop_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k200" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.391 0 0) ((bruijn cdr 25 5) (close _V0loop_k201) (bruijn t 8 1)) ((bruijn eqv? 25 4) (close _V0loop_k202) (bruijn ##x.111 6 0) (quote signed)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k201, env)}),
      VGetArg(upenv, 8-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 25-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k202, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V0signed.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k198" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.389 0 0) ((bruijn cdr 24 5) (close _V0loop_k199) (bruijn t 7 1)) ((bruijn eqv? 24 4) (close _V0loop_k200) (bruijn ##x.111 5 0) (quote unsigned)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k199, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 24-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k200, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V0unsigned.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k195" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.386 0 0) ((bruijn cdr 23 5) (close _V0loop_k196) (bruijn t 6 1)) ((bruijn eqv? 23 4) (close _V0loop_k198) (bruijn ##x.111 4 0) (quote short)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k196, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 23-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k198, env)}),
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V0short.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k193" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.384 0 0) ((bruijn cdr 22 5) (close _V0loop_k194) (bruijn t 5 1)) ((bruijn eqv? 22 4) (close _V0loop_k195) (bruijn ##x.111 3 0) (quote long)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k194, env)}),
      VGetArg(upenv, 5-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k195, env)}),
      upenv->up->up->vars[0],
      VEncodePointer(&_V0long.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k191" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k192) (close _V0loop_k193))
V_CALL_FUNC(_V0loop_k192, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k193, env)})
    );
 }
}
static void _V0loop_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k189" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.382 0 0) ((bruijn cdr 20 5) (close _V0loop_k190) (bruijn t 3 1)) ((bruijn eqv? 20 4) (close _V0loop_k191) (bruijn ##x.111 1 0) (quote restrict)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k190, env)}),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k191, env)}),
      upenv->vars[0],
      VEncodePointer(&_V0restrict.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0loop_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k188" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 19 4) (close _V0loop_k189) (bruijn ##x.111 0 0) (quote const))
V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k189, env)}),
      _var0,
      VEncodePointer(&_V0const.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k184" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.378 0 0) ((close _V0loop_k185) (close _V0loop_k186)) ((bruijn car 18 7) (close _V0loop_k188) (bruijn t 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0loop_k185, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k186, env)})
    );
} else {
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k188, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7) {
 static VDebugInfo dbg = { "_V0loop_lambda40" };
 VRecordCall(&dbg);
 if(argc != 8) {
  VError("Not enough arguments to _V0loop_lambda40, got ~D~N"
  "-- expected 8~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda40, runtime, upenv, 8, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7) {
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
  // ((bruijn null? 17 24) (close _V0loop_k184) (bruijn t 0 1))
V_CALL(VGetArg(upenv, 17-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k184, env)}),
      _var1
    );
 }
}
static void _V0preprocess__type_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0preprocess__type_lambda39" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__type_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0preprocess__type_k182) (bruijn loop 0 1) (close _V0loop_lambda40))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__type_k182, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda40, env)})
    );
 }
}
static void _V0preprocess__type_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__type_k181" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__type_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__type_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0preprocess__type_lambda39) (bruijn ##k.370 3 0) #f)
V_CALL_FUNC(_V0preprocess__type_lambda39, env, runtime,
      upenv->up->up->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0maybe__string___Gsymbol_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0maybe__string___Gsymbol_k207" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0maybe__string___Gsymbol_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0maybe__string___Gsymbol_k207, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.401 0 0) ((bruijn string->symbol 16 21) (bruijn ##k.400 1 0) (bruijn x 1 1)) ((bruijn ##k.400 1 0) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 21), runtime,
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
static void _V0maybe__string___Gsymbol_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0maybe__string___Gsymbol_lambda41" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0maybe__string___Gsymbol_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0maybe__string___Gsymbol_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string? 15 20) (close _V0maybe__string___Gsymbol_k207) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 15-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0maybe__string___Gsymbol_k207, env)}),
      _var1
    );
 }
}
static void _V0preprocess__type_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__type_k180" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__type_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__type_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0preprocess__type_k181) (bruijn maybe-string->symbol 2 3) (close _V0maybe__string___Gsymbol_lambda41))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__type_k181, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0maybe__string___Gsymbol_lambda41, env)})
    );
 }
}
static void _V0append__const_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0append__const_lambda42" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0append__const_lambda42, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append__const_lambda42, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn const? 0 1) ((bruijn list 14 23) (bruijn ##k.402 0 0) (quote const) (bruijn type 0 2)) ((bruijn ##k.402 0 0) (bruijn type 0 2)))
if(VDecodeBool(
_var1)) {
V_CALL(VGetArg(upenv, 14-1, 23), runtime,
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
static void _V0preprocess__type_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__type_k179" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__type_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__type_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0preprocess__type_k180) (bruijn append-const 1 2) (close _V0append__const_lambda42))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__type_k180, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append__const_lambda42, env)})
    );
 }
}
static void _V0decide_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k212" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k212, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.55 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.55 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.55 0 0))) ((bruijn ##kk.49 7 1) (bruijn ##k.613 5 0) (quote char)) ((bruijn ##k.613 5 0) #f)) ((bruijn ##k.613 5 0) #f)) ((bruijn ##k.613 5 0) #f))
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
static void _V0decide_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k211" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.54 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.54 0 0))) ((close _V0decide_k212) (##inline ##sys.cdr (bruijn ##expr.54 0 0))) ((bruijn ##k.613 4 0) #f)) ((bruijn ##k.613 4 0) #f))
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
V_CALL_FUNC(_V0decide_k212, env, runtime,
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
static void _V0decide_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k210" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.53 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.53 0 0))) ((close _V0decide_k211) (##inline ##sys.cdr (bruijn ##expr.53 0 0))) ((bruijn ##k.613 3 0) #f)) ((bruijn ##k.613 3 0) #f))
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
V_CALL_FUNC(_V0decide_k211, env, runtime,
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
static void _V0decide_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k209" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.52 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.52 0 0))) ((close _V0decide_k210) (##inline ##sys.cdr (bruijn ##expr.52 0 0))) ((bruijn ##k.613 2 0) #f)) ((bruijn ##k.613 2 0) #f))
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
V_CALL_FUNC(_V0decide_k210, env, runtime,
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
static void _V0decide_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k208" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.615 0 0) ((close _V0decide_k209) (##inline ##sys.cdr (bruijn ##expr.51 1 1))) ((bruijn ##k.613 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k209, env, runtime,
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
static void _V0decide_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda46" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.51 0 1)) ((bruijn equal? 16 13) (close _V0decide_k208) (quote char) (##inline ##sys.car (bruijn ##expr.51 0 1))) ((bruijn ##k.613 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k208, env)}),
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
static void _V0decide_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k218" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k218, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.60 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.60 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.60 0 0))) ((bruijn ##kk.49 8 1) (bruijn ##k.595 5 0) (quote unsigned-char)) ((bruijn ##k.595 5 0) #f)) ((bruijn ##k.595 5 0) #f)) ((bruijn ##k.595 5 0) #f))
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
static void _V0decide_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k217" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.59 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.59 0 0))) ((close _V0decide_k218) (##inline ##sys.cdr (bruijn ##expr.59 0 0))) ((bruijn ##k.595 4 0) #f)) ((bruijn ##k.595 4 0) #f))
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
V_CALL_FUNC(_V0decide_k218, env, runtime,
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
static void _V0decide_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k216" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.58 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.58 0 0))) ((close _V0decide_k217) (##inline ##sys.cdr (bruijn ##expr.58 0 0))) ((bruijn ##k.595 3 0) #f)) ((bruijn ##k.595 3 0) #f))
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
V_CALL_FUNC(_V0decide_k217, env, runtime,
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
static void _V0decide_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k215" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.57 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.57 0 0))) ((close _V0decide_k216) (##inline ##sys.cdr (bruijn ##expr.57 0 0))) ((bruijn ##k.595 2 0) #f)) ((bruijn ##k.595 2 0) #f))
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
V_CALL_FUNC(_V0decide_k216, env, runtime,
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
static void _V0decide_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k214" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.597 0 0) ((close _V0decide_k215) (##inline ##sys.cdr (bruijn ##expr.56 1 1))) ((bruijn ##k.595 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k215, env, runtime,
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
static void _V0decide_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda47" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 1)) ((bruijn equal? 17 13) (close _V0decide_k214) (quote char) (##inline ##sys.car (bruijn ##expr.56 0 1))) ((bruijn ##k.595 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 17-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k214, env)}),
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
static void _V0decide_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k224" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k224, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.65 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.65 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.65 0 0))) ((bruijn ##kk.49 9 1) (bruijn ##k.577 5 0) (quote signed-char)) ((bruijn ##k.577 5 0) #f)) ((bruijn ##k.577 5 0) #f)) ((bruijn ##k.577 5 0) #f))
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
static void _V0decide_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k223" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.64 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.64 0 0))) ((close _V0decide_k224) (##inline ##sys.cdr (bruijn ##expr.64 0 0))) ((bruijn ##k.577 4 0) #f)) ((bruijn ##k.577 4 0) #f))
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
V_CALL_FUNC(_V0decide_k224, env, runtime,
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
static void _V0decide_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k222" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.63 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.63 0 0))) ((close _V0decide_k223) (##inline ##sys.cdr (bruijn ##expr.63 0 0))) ((bruijn ##k.577 3 0) #f)) ((bruijn ##k.577 3 0) #f))
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
V_CALL_FUNC(_V0decide_k223, env, runtime,
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
static void _V0decide_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k221" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.62 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.62 0 0))) ((close _V0decide_k222) (##inline ##sys.cdr (bruijn ##expr.62 0 0))) ((bruijn ##k.577 2 0) #f)) ((bruijn ##k.577 2 0) #f))
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
V_CALL_FUNC(_V0decide_k222, env, runtime,
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
static void _V0decide_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k220" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.579 0 0) ((close _V0decide_k221) (##inline ##sys.cdr (bruijn ##expr.61 1 1))) ((bruijn ##k.577 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k221, env, runtime,
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
static void _V0decide_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda48" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.61 0 1)) ((bruijn equal? 18 13) (close _V0decide_k220) (quote char) (##inline ##sys.car (bruijn ##expr.61 0 1))) ((bruijn ##k.577 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k220, env)}),
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
static void _V0decide_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k230" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k230, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.70 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.70 0 0))) ((bruijn ##kk.49 10 1) (bruijn ##k.561 5 0) (quote int)) ((bruijn ##k.561 5 0) #f)) ((bruijn ##k.561 5 0) #f))
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
static void _V0decide_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k229" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.69 0 0))) ((close _V0decide_k230) (##inline ##sys.cdr (bruijn ##expr.69 0 0))) ((bruijn ##k.561 4 0) #f)) ((bruijn ##k.561 4 0) #f))
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
V_CALL_FUNC(_V0decide_k230, env, runtime,
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
static void _V0decide_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k228" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.68 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.68 0 0))) ((close _V0decide_k229) (##inline ##sys.cdr (bruijn ##expr.68 0 0))) ((bruijn ##k.561 3 0) #f)) ((bruijn ##k.561 3 0) #f))
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
V_CALL_FUNC(_V0decide_k229, env, runtime,
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
static void _V0decide_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k227" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.67 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.67 0 0))) ((close _V0decide_k228) (##inline ##sys.cdr (bruijn ##expr.67 0 0))) ((bruijn ##k.561 2 0) #f)) ((bruijn ##k.561 2 0) #f))
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
V_CALL_FUNC(_V0decide_k228, env, runtime,
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
static void _V0decide_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k226" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.563 0 0) ((close _V0decide_k227) (##inline ##sys.cdr (bruijn ##expr.66 1 1))) ((bruijn ##k.561 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k227, env, runtime,
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
static void _V0decide_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda49" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.66 0 1)) ((bruijn equal? 19 13) (close _V0decide_k226) (quote int) (##inline ##sys.car (bruijn ##expr.66 0 1))) ((bruijn ##k.561 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k226, env)}),
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
static void _V0decide_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k236" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k236, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.75 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.75 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.75 0 0))) ((bruijn ##kk.49 11 1) (bruijn ##k.543 5 0) (quote unsigned-int)) ((bruijn ##k.543 5 0) #f)) ((bruijn ##k.543 5 0) #f)) ((bruijn ##k.543 5 0) #f))
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
static void _V0decide_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k235" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.74 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.74 0 0))) ((close _V0decide_k236) (##inline ##sys.cdr (bruijn ##expr.74 0 0))) ((bruijn ##k.543 4 0) #f)) ((bruijn ##k.543 4 0) #f))
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
V_CALL_FUNC(_V0decide_k236, env, runtime,
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
static void _V0decide_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k234" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.73 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.73 0 0))) ((close _V0decide_k235) (##inline ##sys.cdr (bruijn ##expr.73 0 0))) ((bruijn ##k.543 3 0) #f)) ((bruijn ##k.543 3 0) #f))
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
V_CALL_FUNC(_V0decide_k235, env, runtime,
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
static void _V0decide_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k233" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.72 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.72 0 0))) ((close _V0decide_k234) (##inline ##sys.cdr (bruijn ##expr.72 0 0))) ((bruijn ##k.543 2 0) #f)) ((bruijn ##k.543 2 0) #f))
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
V_CALL_FUNC(_V0decide_k234, env, runtime,
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
static void _V0decide_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k232" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.545 0 0) ((close _V0decide_k233) (##inline ##sys.cdr (bruijn ##expr.71 1 1))) ((bruijn ##k.543 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k233, env, runtime,
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
static void _V0decide_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda50" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.71 0 1)) ((bruijn equal? 20 13) (close _V0decide_k232) (quote int) (##inline ##sys.car (bruijn ##expr.71 0 1))) ((bruijn ##k.543 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k232, env)}),
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
static void _V0decide_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k242" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k242, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.80 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.80 0 0))) ((bruijn ##kk.49 12 1) (bruijn ##k.527 5 0) (quote long)) ((bruijn ##k.527 5 0) #f)) ((bruijn ##k.527 5 0) #f))
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
static void _V0decide_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k241" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.79 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.79 0 0))) ((close _V0decide_k242) (##inline ##sys.cdr (bruijn ##expr.79 0 0))) ((bruijn ##k.527 4 0) #f)) ((bruijn ##k.527 4 0) #f))
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
V_CALL_FUNC(_V0decide_k242, env, runtime,
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
static void _V0decide_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k240" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.78 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.78 0 0))) ((close _V0decide_k241) (##inline ##sys.cdr (bruijn ##expr.78 0 0))) ((bruijn ##k.527 3 0) #f)) ((bruijn ##k.527 3 0) #f))
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
V_CALL_FUNC(_V0decide_k241, env, runtime,
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
static void _V0decide_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k239" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.77 0 0)) (if (##inline ##sys.eq? 1 (##inline ##sys.car (bruijn ##expr.77 0 0))) ((close _V0decide_k240) (##inline ##sys.cdr (bruijn ##expr.77 0 0))) ((bruijn ##k.527 2 0) #f)) ((bruijn ##k.527 2 0) #f))
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
V_CALL_FUNC(_V0decide_k240, env, runtime,
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
static void _V0decide_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k238" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.529 0 0) ((close _V0decide_k239) (##inline ##sys.cdr (bruijn ##expr.76 1 1))) ((bruijn ##k.527 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k239, env, runtime,
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
static void _V0decide_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda51" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 1)) ((bruijn equal? 21 13) (close _V0decide_k238) (quote int) (##inline ##sys.car (bruijn ##expr.76 0 1))) ((bruijn ##k.527 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k238, env)}),
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
static void _V0decide_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k248" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k248, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.85 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.85 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.85 0 0))) ((bruijn ##kk.49 13 1) (bruijn ##k.509 5 0) (quote unsigned-long)) ((bruijn ##k.509 5 0) #f)) ((bruijn ##k.509 5 0) #f)) ((bruijn ##k.509 5 0) #f))
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
static void _V0decide_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k247" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.84 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.84 0 0))) ((close _V0decide_k248) (##inline ##sys.cdr (bruijn ##expr.84 0 0))) ((bruijn ##k.509 4 0) #f)) ((bruijn ##k.509 4 0) #f))
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
V_CALL_FUNC(_V0decide_k248, env, runtime,
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
static void _V0decide_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k246" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.83 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.83 0 0))) ((close _V0decide_k247) (##inline ##sys.cdr (bruijn ##expr.83 0 0))) ((bruijn ##k.509 3 0) #f)) ((bruijn ##k.509 3 0) #f))
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
V_CALL_FUNC(_V0decide_k247, env, runtime,
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
static void _V0decide_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k245" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.82 0 0)) (if (##inline ##sys.eq? 1 (##inline ##sys.car (bruijn ##expr.82 0 0))) ((close _V0decide_k246) (##inline ##sys.cdr (bruijn ##expr.82 0 0))) ((bruijn ##k.509 2 0) #f)) ((bruijn ##k.509 2 0) #f))
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
V_CALL_FUNC(_V0decide_k246, env, runtime,
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
static void _V0decide_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k244" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.511 0 0) ((close _V0decide_k245) (##inline ##sys.cdr (bruijn ##expr.81 1 1))) ((bruijn ##k.509 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k245, env, runtime,
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
static void _V0decide_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda52" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.81 0 1)) ((bruijn equal? 22 13) (close _V0decide_k244) (quote int) (##inline ##sys.car (bruijn ##expr.81 0 1))) ((bruijn ##k.509 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k244, env)}),
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
static void _V0decide_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k254" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k254, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.90 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.90 0 0))) ((bruijn ##kk.49 14 1) (bruijn ##k.493 5 0) (quote long)) ((bruijn ##k.493 5 0) #f)) ((bruijn ##k.493 5 0) #f))
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
static void _V0decide_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k253" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.89 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.89 0 0))) ((close _V0decide_k254) (##inline ##sys.cdr (bruijn ##expr.89 0 0))) ((bruijn ##k.493 4 0) #f)) ((bruijn ##k.493 4 0) #f))
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
V_CALL_FUNC(_V0decide_k254, env, runtime,
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
static void _V0decide_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k252" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.88 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.88 0 0))) ((close _V0decide_k253) (##inline ##sys.cdr (bruijn ##expr.88 0 0))) ((bruijn ##k.493 3 0) #f)) ((bruijn ##k.493 3 0) #f))
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
V_CALL_FUNC(_V0decide_k253, env, runtime,
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
static void _V0decide_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k251" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.87 0 0)) (if (##inline ##sys.eq? 2 (##inline ##sys.car (bruijn ##expr.87 0 0))) ((close _V0decide_k252) (##inline ##sys.cdr (bruijn ##expr.87 0 0))) ((bruijn ##k.493 2 0) #f)) ((bruijn ##k.493 2 0) #f))
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
V_CALL_FUNC(_V0decide_k252, env, runtime,
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
static void _V0decide_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k250" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.495 0 0) ((close _V0decide_k251) (##inline ##sys.cdr (bruijn ##expr.86 1 1))) ((bruijn ##k.493 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k251, env, runtime,
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
static void _V0decide_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda53" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.86 0 1)) ((bruijn equal? 23 13) (close _V0decide_k250) (quote int) (##inline ##sys.car (bruijn ##expr.86 0 1))) ((bruijn ##k.493 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k250, env)}),
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
static void _V0decide_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k260" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k260, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.95 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.95 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.95 0 0))) ((bruijn ##kk.49 15 1) (bruijn ##k.475 5 0) (quote unsigned-long)) ((bruijn ##k.475 5 0) #f)) ((bruijn ##k.475 5 0) #f)) ((bruijn ##k.475 5 0) #f))
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
static void _V0decide_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k259" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.94 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.94 0 0))) ((close _V0decide_k260) (##inline ##sys.cdr (bruijn ##expr.94 0 0))) ((bruijn ##k.475 4 0) #f)) ((bruijn ##k.475 4 0) #f))
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
V_CALL_FUNC(_V0decide_k260, env, runtime,
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
static void _V0decide_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k258" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.93 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.93 0 0))) ((close _V0decide_k259) (##inline ##sys.cdr (bruijn ##expr.93 0 0))) ((bruijn ##k.475 3 0) #f)) ((bruijn ##k.475 3 0) #f))
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
V_CALL_FUNC(_V0decide_k259, env, runtime,
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
static void _V0decide_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k257" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 0)) (if (##inline ##sys.eq? 2 (##inline ##sys.car (bruijn ##expr.92 0 0))) ((close _V0decide_k258) (##inline ##sys.cdr (bruijn ##expr.92 0 0))) ((bruijn ##k.475 2 0) #f)) ((bruijn ##k.475 2 0) #f))
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
V_CALL_FUNC(_V0decide_k258, env, runtime,
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
static void _V0decide_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k256" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.477 0 0) ((close _V0decide_k257) (##inline ##sys.cdr (bruijn ##expr.91 1 1))) ((bruijn ##k.475 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k257, env, runtime,
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
static void _V0decide_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda54" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.91 0 1)) ((bruijn equal? 24 13) (close _V0decide_k256) (quote int) (##inline ##sys.car (bruijn ##expr.91 0 1))) ((bruijn ##k.475 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k256, env)}),
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
static void _V0decide_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k266" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k266, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.100 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.100 0 0))) ((bruijn ##kk.49 16 1) (bruijn ##k.459 5 0) (quote short)) ((bruijn ##k.459 5 0) #f)) ((bruijn ##k.459 5 0) #f))
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
static void _V0decide_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k265" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.99 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.99 0 0))) ((close _V0decide_k266) (##inline ##sys.cdr (bruijn ##expr.99 0 0))) ((bruijn ##k.459 4 0) #f)) ((bruijn ##k.459 4 0) #f))
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
V_CALL_FUNC(_V0decide_k266, env, runtime,
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
static void _V0decide_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k264" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.98 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.98 0 0))) ((close _V0decide_k265) (##inline ##sys.cdr (bruijn ##expr.98 0 0))) ((bruijn ##k.459 3 0) #f)) ((bruijn ##k.459 3 0) #f))
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
V_CALL_FUNC(_V0decide_k265, env, runtime,
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
static void _V0decide_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k263" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.97 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.97 0 0))) ((close _V0decide_k264) (##inline ##sys.cdr (bruijn ##expr.97 0 0))) ((bruijn ##k.459 2 0) #f)) ((bruijn ##k.459 2 0) #f))
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
V_CALL_FUNC(_V0decide_k264, env, runtime,
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
static void _V0decide_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k262" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.461 0 0) ((close _V0decide_k263) (##inline ##sys.cdr (bruijn ##expr.96 1 1))) ((bruijn ##k.459 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k263, env, runtime,
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
static void _V0decide_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda55" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.96 0 1)) ((bruijn equal? 25 13) (close _V0decide_k262) (quote int) (##inline ##sys.car (bruijn ##expr.96 0 1))) ((bruijn ##k.459 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k262, env)}),
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
static void _V0decide_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k272" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k272, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.105 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.105 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.105 0 0))) ((bruijn ##kk.49 17 1) (bruijn ##k.441 5 0) (quote unsigned-short)) ((bruijn ##k.441 5 0) #f)) ((bruijn ##k.441 5 0) #f)) ((bruijn ##k.441 5 0) #f))
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
static void _V0decide_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k271" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.104 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.104 0 0))) ((close _V0decide_k272) (##inline ##sys.cdr (bruijn ##expr.104 0 0))) ((bruijn ##k.441 4 0) #f)) ((bruijn ##k.441 4 0) #f))
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
V_CALL_FUNC(_V0decide_k272, env, runtime,
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
static void _V0decide_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k270" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.103 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.103 0 0))) ((close _V0decide_k271) (##inline ##sys.cdr (bruijn ##expr.103 0 0))) ((bruijn ##k.441 3 0) #f)) ((bruijn ##k.441 3 0) #f))
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
V_CALL_FUNC(_V0decide_k271, env, runtime,
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
static void _V0decide_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k269" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.102 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.102 0 0))) ((close _V0decide_k270) (##inline ##sys.cdr (bruijn ##expr.102 0 0))) ((bruijn ##k.441 2 0) #f)) ((bruijn ##k.441 2 0) #f))
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
V_CALL_FUNC(_V0decide_k270, env, runtime,
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
static void _V0decide_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k268" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.443 0 0) ((close _V0decide_k269) (##inline ##sys.cdr (bruijn ##expr.101 1 1))) ((bruijn ##k.441 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0decide_k269, env, runtime,
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
static void _V0decide_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda56" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda56, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.101 0 1)) ((bruijn equal? 26 13) (close _V0decide_k268) (quote int) (##inline ##sys.car (bruijn ##expr.101 0 1))) ((bruijn ##k.441 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 26-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k268, env)}),
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
static void _V0decide_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k277" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k277, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.110 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.110 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.110 0 0))) ((bruijn ##kk.49 17 1) (bruijn ##k.425 4 0) (##inline ##sys.car (bruijn ##expr.106 4 1))) ((bruijn ##k.425 4 0) #f)) ((bruijn ##k.425 4 0) #f)) ((bruijn ##k.425 4 0) #f))
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
      upenv->up->up->up->vars[0],
      VInlineCar(
upenv->up->up->up->vars[1]
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
static void _V0decide_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k276" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.109 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.109 0 0))) ((close _V0decide_k277) (##inline ##sys.cdr (bruijn ##expr.109 0 0))) ((bruijn ##k.425 3 0) #f)) ((bruijn ##k.425 3 0) #f))
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
V_CALL_FUNC(_V0decide_k277, env, runtime,
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
static void _V0decide_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k275" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.108 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.108 0 0))) ((close _V0decide_k276) (##inline ##sys.cdr (bruijn ##expr.108 0 0))) ((bruijn ##k.425 2 0) #f)) ((bruijn ##k.425 2 0) #f))
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
V_CALL_FUNC(_V0decide_k276, env, runtime,
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
static void _V0decide_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k274" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.107 0 0)) (if (##inline ##sys.eq? 0 (##inline ##sys.car (bruijn ##expr.107 0 0))) ((close _V0decide_k275) (##inline ##sys.cdr (bruijn ##expr.107 0 0))) ((bruijn ##k.425 1 0) #f)) ((bruijn ##k.425 1 0) #f))
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
V_CALL_FUNC(_V0decide_k275, env, runtime,
      VInlineCdr(
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
static void _V0decide_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda57" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.106 0 1)) ((close _V0decide_k274) (##inline ##sys.cdr (bruijn ##expr.106 0 1))) ((bruijn ##k.425 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0decide_k274, env, runtime,
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
static void _V0decide_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k280" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k280, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.49 15 1) (bruijn ##k.405 14 0) (bruijn ##x.418 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      _var0
    );
 }
}
static void _V0decide_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k279" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 28 14) (close _V0decide_k280) (##string ##string.983) (bruijn ##x.419 0 0))
V_CALL(VGetArg(upenv, 28-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k280, env)}),
      VEncodePointer(&_V10string_D983.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0decide_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k278" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 27 25) (close _V0decide_k279) (bruijn list 27 23) (bruijn args 14 1) (##inline ##sys.qcons (quote special) (##inline ##sys.qcons (quote longs) (##inline ##sys.qcons (quote short) (##inline ##sys.qcons (quote unsigned) (##inline ##sys.qcons (quote signed) (quote ())))))))
V_CALL(VGetArg(upenv, 27-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k279, env)}),
      VGetArg(upenv, 27-1, 23),
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
static void _V0decide_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k273" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda57) (close _V0decide_k278) (bruijn ##input.50 11 1))
V_CALL_FUNC(_V0decide_lambda57, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k278, env)}),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0decide_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k267" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda56) (close _V0decide_k273) (bruijn ##input.50 10 1))
V_CALL_FUNC(_V0decide_lambda56, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k273, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0decide_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k261" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda55) (close _V0decide_k267) (bruijn ##input.50 9 1))
V_CALL_FUNC(_V0decide_lambda55, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k267, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0decide_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k255" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda54) (close _V0decide_k261) (bruijn ##input.50 8 1))
V_CALL_FUNC(_V0decide_lambda54, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k261, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0decide_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k249" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda53) (close _V0decide_k255) (bruijn ##input.50 7 1))
V_CALL_FUNC(_V0decide_lambda53, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k255, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0decide_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k243" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda52) (close _V0decide_k249) (bruijn ##input.50 6 1))
V_CALL_FUNC(_V0decide_lambda52, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k249, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0decide_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k237" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda51) (close _V0decide_k243) (bruijn ##input.50 5 1))
V_CALL_FUNC(_V0decide_lambda51, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k243, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0decide_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k231" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda50) (close _V0decide_k237) (bruijn ##input.50 4 1))
V_CALL_FUNC(_V0decide_lambda50, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k237, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0decide_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k225" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda49) (close _V0decide_k231) (bruijn ##input.50 3 1))
V_CALL_FUNC(_V0decide_lambda49, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k231, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0decide_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k219" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda48) (close _V0decide_k225) (bruijn ##input.50 2 1))
V_CALL_FUNC(_V0decide_lambda48, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k225, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0decide_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decide_k213" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decide_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0decide_lambda47) (close _V0decide_k219) (bruijn ##input.50 1 1))
V_CALL_FUNC(_V0decide_lambda47, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k219, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0decide_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda45" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0decide_lambda46) (close _V0decide_k213) (bruijn ##input.50 0 1))
V_CALL_FUNC(_V0decide_lambda46, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_k213, env)}),
      _var1
    );
 }
}
static void _V0decide_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decide_lambda44" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0decide_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0decide_lambda45) (bruijn ##k.404 0 0) (bruijn args 1 1))
V_CALL_FUNC(_V0decide_lambda45, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0decide_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0decide_lambda43" };
 VRecordCall(&dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0decide_lambda43, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0decide_lambda43, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn call/cc 13 11) (bruijn ##k.403 0 0) (close _V0decide_lambda44))
V_CALL(VGetArg(upenv, 13-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_lambda44, env)})
    );
 }
}
static void _V0preprocess__type_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0preprocess__type_lambda38" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__type_lambda38, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (set! (close _V0preprocess__type_k179) (bruijn decide 0 1) (close _V0decide_lambda43))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__type_k179, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0decide_lambda43, env)})
    );
 }
}
static void _V0preprocess__type_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0preprocess__type_lambda37" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0preprocess__type_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__type_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0preprocess__type_lambda38) (bruijn ##k.369 0 0) #f #f #f)
V_CALL_FUNC(_V0preprocess__type_lambda38, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k42) (bruijn preprocess-type 9 10) (close _V0preprocess__type_lambda37))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k42, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__type_lambda37, env)})
    );
 }
}
static void _V0preprocess__args_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__args_k286" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__args_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__args_k286, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 16 17) (bruijn ##k.631 6 0) (bruijn ##x.633 2 0) (bruijn ##x.634 0 0))
V_CALL(VGetArg(upenv, 16-1, 17), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0preprocess__args_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__args_k285" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__args_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__args_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn preprocess-args 14 9) (close _V0preprocess__args_k286) (bruijn ##x.635 0 0))
V_CALL(VGetArg(upenv, 14-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__args_k286, env)}),
      _var0
    );
 }
}
static void _V0preprocess__args_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__args_k284" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__args_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__args_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 14 5) (close _V0preprocess__args_k285) (bruijn args 4 1))
V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__args_k285, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0preprocess__args_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__args_k283" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__args_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__args_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 13 26) (close _V0preprocess__args_k284) (bruijn ##x.636 0 0))
V_CALL(VGetArg(upenv, 13-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__args_k284, env)}),
      _var0
    );
 }
}
static void _V0preprocess__args_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__args_k282" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__args_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__args_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn preprocess-declare 11 8) (close _V0preprocess__args_k283) (bruijn ##x.637 0 0))
V_CALL(VGetArg(upenv, 11-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__args_k283, env)}),
      _var0
    );
 }
}
static void _V0preprocess__args_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__args_k281" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__args_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__args_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.632 0 0) ((bruijn ##k.631 1 0) (quote ())) ((bruijn car 11 7) (close _V0preprocess__args_k282) (bruijn args 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL
    );
} else {
V_CALL(VGetArg(upenv, 11-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__args_k282, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0preprocess__args_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0preprocess__args_lambda58" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0preprocess__args_lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__args_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 10 24) (close _V0preprocess__args_k281) (bruijn args 0 1))
V_CALL(VGetArg(upenv, 10-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__args_k281, env)}),
      _var1
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k41) (bruijn preprocess-args 8 9) (close _V0preprocess__args_lambda58))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k41, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__args_lambda58, env)})
    );
 }
}
static void _V0preprocess__declare_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare_k290" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare_k290, runtime, upenv, 1, argc, _var0) {
  // ((bruijn preprocess-declare-loop 12 7) (bruijn ##k.638 4 0) (bruijn ##x.639 0 0))
V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0preprocess__declare_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare_k289" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 12 23) (close _V0preprocess__declare_k290) (bruijn ##x.640 1 0) (bruijn ##x.641 0 0))
V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare_k290, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0preprocess__declare_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare_k288" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 11 26) (close _V0preprocess__declare_k289) (bruijn decl 2 1))
V_CALL(VGetArg(upenv, 11-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare_k289, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0preprocess__declare_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare_k287" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn preprocess-type 9 10) (close _V0preprocess__declare_k288) (bruijn ##x.642 0 0))
V_CALL(VGetArg(upenv, 9-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare_k288, env)}),
      _var0
    );
 }
}
static void _V0preprocess__declare_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0preprocess__declare_lambda59" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0preprocess__declare_lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare_lambda59, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 9 7) (close _V0preprocess__declare_k287) (bruijn decl 0 1))
V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare_k287, env)}),
      _var1
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k40) (bruijn preprocess-declare 7 8) (close _V0preprocess__declare_lambda59))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k40, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare_lambda59, env)})
    );
 }
}
static void _V0preprocess__declare__loop_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k294" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k294, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.734 1 0) (##sys.blob=? (bruijn ##k.735 0 0) (##string ##string.984) (##inline ##sys.car (bruijn ##expr.30 2 0))) ((bruijn ##k.735 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D984.sym, VPOINTER_OTHER),
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
static void _V0preprocess__declare__loop_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k297" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k297, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.26 8 1) (bruijn ##k.720 6 0) (##inline ##sys.cons (quote function) (##inline ##sys.cons (bruijn ##x.730 0 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.31 1 0)) (quote ())))))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
VEncodePointer(&_V0function.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VInlineCons(
VInlineCar(
upenv->vars[0]
    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0preprocess__declare__loop_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k296" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.31 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.29 4 0))) ((bruijn drop-const 15 6) (close _V0preprocess__declare__loop_k297) (##inline ##sys.car (bruijn ##expr.28 5 1))) ((bruijn ##k.720 5 0) #f)) ((bruijn ##k.720 5 0) #f)) ((bruijn ##k.720 5 0) #f))
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
V_CALL(VGetArg(upenv, 15-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k297, env)}),
      VInlineCar(
VGetArg(upenv, 5-1, 1)
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
static void _V0preprocess__declare__loop_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k295" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.724 0 0) ((close _V0preprocess__declare__loop_k296) (##inline ##sys.cdr (bruijn ##expr.30 2 0))) ((bruijn ##k.720 4 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0preprocess__declare__loop_k296, env, runtime,
      VInlineCdr(
upenv->up->vars[0]
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0preprocess__declare__loop_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k293" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0preprocess__declare__loop_k294) (close _V0preprocess__declare__loop_k295))
V_CALL_FUNC(_V0preprocess__declare__loop_k294, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k295, env)})
    );
 }
}
static void _V0preprocess__declare__loop_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k292" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 0)) (##sys.string? (close _V0preprocess__declare__loop_k293) (##inline ##sys.car (bruijn ##expr.30 0 0))) ((bruijn ##k.720 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k293, env)}),
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
static void _V0preprocess__declare__loop_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k291" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.29 0 0)) ((close _V0preprocess__declare__loop_k292) (##inline ##sys.car (bruijn ##expr.29 0 0))) ((bruijn ##k.720 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0preprocess__declare__loop_k292, env, runtime,
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
static void _V0preprocess__declare__loop_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_lambda63" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_lambda63, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 1)) ((close _V0preprocess__declare__loop_k291) (##inline ##sys.cdr (bruijn ##expr.28 0 1))) ((bruijn ##k.720 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0preprocess__declare__loop_k291, env, runtime,
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
static void _V0preprocess__declare__loop_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k302" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k302, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.716 1 0) (##sys.blob=? (bruijn ##k.717 0 0) (##string ##string.984) (##inline ##sys.car (bruijn ##expr.34 2 0))) ((bruijn ##k.717 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D984.sym, VPOINTER_OTHER),
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
static void _V0preprocess__declare__loop_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k308" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k308, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.712 1 0) (##sys.blob=? (bruijn ##k.713 0 0) (##string ##string.985) (##inline ##sys.car (bruijn ##expr.37 2 0))) ((bruijn ##k.713 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D985.sym, VPOINTER_OTHER),
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
static void _V0preprocess__declare__loop_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k310" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k310, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.686 1 0) (##inline ##sys.cdr (bruijn ##expr.37 6 0)) (quote ()))
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
static void _V0loop_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k312" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k312, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.40 4 1) (bruijn ##k.697 1 0) (bruijn ##expr.42 2 1) (bruijn ##x.698 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
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
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.42 1 1))) ((bruijn reverse 26 12) (close _V0loop_k312) (bruijn ##args.39 1 2)) ((bruijn ##k.697 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 26-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k312, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
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
  // ((bruijn ##kk.40 7 1) (bruijn ##k.691 2 0) (bruijn ##expr.42 5 1) (bruijn ##x.693 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 29 12) (close _V0loop_k315) (bruijn ##args.39 4 2))
V_CALL(VGetArg(upenv, 29-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k315, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda70" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.41 0 1) (close _V0loop_k314) (##inline ##sys.cdr (bruijn ##expr.42 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.42 3 1)) (bruijn ##args.39 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k314, env)}),
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
static void _V0loop_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda69" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 27 11) (bruijn ##k.690 0 0) (close _V0loop_lambda70))
V_CALL(VGetArg(upenv, 27-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda70, env)})
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
  // ((bruijn call-with-values 26 10) (bruijn ##k.688 1 0) (close _V0loop_lambda69) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 26-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda69, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda68" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda68, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda68, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k311) (close _V0loop_k313))
V_CALL_FUNC(_V0loop_k311, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k313, env)})
    );
 }
}
static void _V0preprocess__declare__loop_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_lambda67" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0preprocess__declare__loop_k310) (bruijn loop 0 1) (close _V0loop_lambda68))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k310, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda68, env)})
    );
 }
}
static void _V0preprocess__declare__loop_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_lambda66" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0preprocess__declare__loop_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_lambda66, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0preprocess__declare__loop_lambda67) (bruijn ##k.685 0 0) #f)
V_CALL_FUNC(_V0preprocess__declare__loop_lambda67, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0preprocess__declare__loop_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_lambda65" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_lambda65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 22 11) (bruijn ##k.684 0 0) (close _V0preprocess__declare__loop_lambda66))
V_CALL(VGetArg(upenv, 22-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_lambda66, env)})
    );
 }
}
static void _V0preprocess__declare__loop_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k318" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k318, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.26 16 1) (bruijn ##k.700 3 0) (##inline ##sys.cons (quote function) (##inline ##sys.cons (bruijn ##x.706 2 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.35 8 0)) (bruijn ##x.708 0 0)))))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0function.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->vars[0],
      VInlineCons(
VInlineCar(
VGetArg(upenv, 8-1, 0)
    )
,
      _var0
    )

    )

    )

    );
 }
}
static void _V0preprocess__declare__loop_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k317" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 24 25) (close _V0preprocess__declare__loop_k318) (bruijn drop-const 23 6) (bruijn ##x.709 0 0))
V_CALL(VGetArg(upenv, 24-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k318, env)}),
      VGetArg(upenv, 23-1, 6),
      _var0
    );
 }
}
static void _V0preprocess__declare__loop_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k316" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn preprocess-args 22 9) (close _V0preprocess__declare__loop_k317) (bruijn args 1 2))
V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k317, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0preprocess__declare__loop_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_lambda71" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0preprocess__declare__loop_lambda71, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_lambda71, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.36 4 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.33 9 0))) ((bruijn drop-const 21 6) (close _V0preprocess__declare__loop_k316) (##inline ##sys.car (bruijn ##expr.32 10 1))) ((bruijn ##k.700 0 0) #f)) ((bruijn ##k.700 0 0) #f)) ((bruijn ##k.700 0 0) #f))
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
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
VGetArg(upenv, 9-1, 0)
    )

    )
)) {
V_CALL(VGetArg(upenv, 21-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k316, env)}),
      VInlineCar(
VGetArg(upenv, 10-1, 1)
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
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0preprocess__declare__loop_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k309" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.683 0 0) ((bruijn call-with-values 21 10) (bruijn ##k.675 9 0) (close _V0preprocess__declare__loop_lambda65) (close _V0preprocess__declare__loop_lambda71)) ((bruijn ##k.675 9 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 10), runtime,
      VGetArg(upenv, 9-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_lambda65, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_lambda71, env)})
    );
} else {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0preprocess__declare__loop_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k307" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0preprocess__declare__loop_k308) (close _V0preprocess__declare__loop_k309))
V_CALL_FUNC(_V0preprocess__declare__loop_k308, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k309, env)})
    );
 }
}
static void _V0preprocess__declare__loop_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k306" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.37 0 0)) (##sys.string? (close _V0preprocess__declare__loop_k307) (##inline ##sys.car (bruijn ##expr.37 0 0))) ((bruijn ##k.675 7 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k307, env)}),
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
static void _V0preprocess__declare__loop_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k305" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.36 0 0)) ((close _V0preprocess__declare__loop_k306) (##inline ##sys.car (bruijn ##expr.36 0 0))) ((bruijn ##k.675 6 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0preprocess__declare__loop_k306, env, runtime,
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
static void _V0preprocess__declare__loop_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k304" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.35 0 0)) ((close _V0preprocess__declare__loop_k305) (##inline ##sys.cdr (bruijn ##expr.35 0 0))) ((bruijn ##k.675 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0preprocess__declare__loop_k305, env, runtime,
      VInlineCdr(
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
static void _V0preprocess__declare__loop_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k303" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.679 0 0) ((close _V0preprocess__declare__loop_k304) (##inline ##sys.cdr (bruijn ##expr.34 2 0))) ((bruijn ##k.675 4 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0preprocess__declare__loop_k304, env, runtime,
      VInlineCdr(
upenv->up->vars[0]
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0preprocess__declare__loop_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k301" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0preprocess__declare__loop_k302) (close _V0preprocess__declare__loop_k303))
V_CALL_FUNC(_V0preprocess__declare__loop_k302, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k303, env)})
    );
 }
}
static void _V0preprocess__declare__loop_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k300" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.34 0 0)) (##sys.string? (close _V0preprocess__declare__loop_k301) (##inline ##sys.car (bruijn ##expr.34 0 0))) ((bruijn ##k.675 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k301, env)}),
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
static void _V0preprocess__declare__loop_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k299" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.33 0 0)) ((close _V0preprocess__declare__loop_k300) (##inline ##sys.car (bruijn ##expr.33 0 0))) ((bruijn ##k.675 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0preprocess__declare__loop_k300, env, runtime,
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
static void _V0preprocess__declare__loop_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_lambda64" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_lambda64, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 1)) ((close _V0preprocess__declare__loop_k299) (##inline ##sys.cdr (bruijn ##expr.32 0 1))) ((bruijn ##k.675 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0preprocess__declare__loop_k299, env, runtime,
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
static void _V0preprocess__declare__loop_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k323" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k323, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.671 1 0) (##sys.blob=? (bruijn ##k.672 0 0) (##string ##string.986) (##inline ##sys.car (bruijn ##expr.45 2 0))) ((bruijn ##k.672 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D986.sym, VPOINTER_OTHER),
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
static void _V0preprocess__declare__loop_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k328" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k328, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.26 12 1) (bruijn ##k.658 8 0) (bruijn ##x.666 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0preprocess__declare__loop_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k327" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn preprocess-declare-loop 19 7) (close _V0preprocess__declare__loop_k328) (bruijn ##x.667 0 0))
V_CALL(VGetArg(upenv, 19-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k328, env)}),
      _var0
    );
 }
}
static void _V0preprocess__declare__loop_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k326" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 19 23) (close _V0preprocess__declare__loop_k327) (bruijn ##x.668 0 0) (##inline ##sys.car (bruijn ##expr.46 1 0)))
V_CALL(VGetArg(upenv, 19-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k327, env)}),
      _var0,
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0preprocess__declare__loop_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k325" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.46 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.46 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.44 4 0))) ((bruijn list 18 23) (close _V0preprocess__declare__loop_k326) (quote pointer) (##inline ##sys.car (bruijn ##expr.43 5 1))) ((bruijn ##k.658 5 0) #f)) ((bruijn ##k.658 5 0) #f)) ((bruijn ##k.658 5 0) #f))
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
V_CALL(VGetArg(upenv, 18-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k326, env)}),
      VEncodePointer(&_V0pointer.sym, VPOINTER_OTHER),
      VInlineCar(
VGetArg(upenv, 5-1, 1)
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
static void _V0preprocess__declare__loop_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k324" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.662 0 0) ((close _V0preprocess__declare__loop_k325) (##inline ##sys.cdr (bruijn ##expr.45 2 0))) ((bruijn ##k.658 4 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0preprocess__declare__loop_k325, env, runtime,
      VInlineCdr(
upenv->up->vars[0]
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0preprocess__declare__loop_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k322" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0preprocess__declare__loop_k323) (close _V0preprocess__declare__loop_k324))
V_CALL_FUNC(_V0preprocess__declare__loop_k323, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k324, env)})
    );
 }
}
static void _V0preprocess__declare__loop_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k321" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.45 0 0)) (##sys.string? (close _V0preprocess__declare__loop_k322) (##inline ##sys.car (bruijn ##expr.45 0 0))) ((bruijn ##k.658 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k322, env)}),
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
static void _V0preprocess__declare__loop_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k320" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.44 0 0)) ((close _V0preprocess__declare__loop_k321) (##inline ##sys.car (bruijn ##expr.44 0 0))) ((bruijn ##k.658 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0preprocess__declare__loop_k321, env, runtime,
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
static void _V0preprocess__declare__loop_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_lambda72" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_lambda72, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.43 0 1)) ((close _V0preprocess__declare__loop_k320) (##inline ##sys.cdr (bruijn ##expr.43 0 1))) ((bruijn ##k.658 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0preprocess__declare__loop_k320, env, runtime,
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
static void _V0preprocess__declare__loop_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k330" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k330, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.48 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.48 0 0))) ((bruijn ##kk.26 6 1) (bruijn ##k.650 1 0) (##inline ##sys.cons (quote variable) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.47 1 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.48 0 0)) (quote ()))))) ((bruijn ##k.650 1 0) #f)) ((bruijn ##k.650 1 0) #f))
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
      upenv->vars[0],
      VInlineCons(
VEncodePointer(&_V0variable.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
upenv->vars[1]
    )
,
      VInlineCons(
VInlineCar(
_var0
    )
,
      VNULL
    )

    )

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
static void _V0preprocess__declare__loop_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_lambda73" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_lambda73, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.47 0 1)) ((close _V0preprocess__declare__loop_k330) (##inline ##sys.cdr (bruijn ##expr.47 0 1))) ((bruijn ##k.650 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0preprocess__declare__loop_k330, env, runtime,
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
static void _V0preprocess__declare__loop_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k331" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k331, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 14 14) (bruijn ##k.645 4 0) (##string ##string.967))
V_CALL(VGetArg(upenv, 14-1, 14), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D967.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0preprocess__declare__loop_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k329" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0preprocess__declare__loop_lambda73) (close _V0preprocess__declare__loop_k331) (bruijn ##input.27 3 1))
V_CALL_FUNC(_V0preprocess__declare__loop_lambda73, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k331, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0preprocess__declare__loop_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k319" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0preprocess__declare__loop_lambda72) (close _V0preprocess__declare__loop_k329) (bruijn ##input.27 2 1))
V_CALL_FUNC(_V0preprocess__declare__loop_lambda72, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k329, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0preprocess__declare__loop_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_k298" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0preprocess__declare__loop_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0preprocess__declare__loop_lambda64) (close _V0preprocess__declare__loop_k319) (bruijn ##input.27 1 1))
V_CALL_FUNC(_V0preprocess__declare__loop_lambda64, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k319, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0preprocess__declare__loop_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_lambda62" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_lambda62, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0preprocess__declare__loop_lambda63) (close _V0preprocess__declare__loop_k298) (bruijn ##input.27 0 1))
V_CALL_FUNC(_V0preprocess__declare__loop_lambda63, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_k298, env)}),
      _var1
    );
 }
}
static void _V0preprocess__declare__loop_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_lambda61" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0preprocess__declare__loop_lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0preprocess__declare__loop_lambda62) (bruijn ##k.644 0 0) (bruijn decl 1 1))
V_CALL_FUNC(_V0preprocess__declare__loop_lambda62, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0preprocess__declare__loop_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0preprocess__declare__loop_lambda60" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0preprocess__declare__loop_lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0preprocess__declare__loop_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 8 11) (bruijn ##k.643 0 0) (close _V0preprocess__declare__loop_lambda61))
V_CALL(VGetArg(upenv, 8-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_lambda61, env)})
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k39) (bruijn preprocess-declare-loop 6 7) (close _V0preprocess__declare__loop_lambda60))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k39, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0preprocess__declare__loop_lambda60, env)})
    );
 }
}
static void _V0drop__const_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop__const_k333" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop__const_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__const_k333, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.25 0 0))) ((bruijn ##kk.22 4 1) (bruijn ##k.742 2 0) (##inline ##sys.car (bruijn ##expr.25 0 0))) ((bruijn ##k.742 2 0) #f)) ((bruijn ##k.742 2 0) #f))
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
static void _V0drop__const_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop__const_k332" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop__const_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__const_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.744 0 0) ((close _V0drop__const_k333) (##inline ##sys.cdr (bruijn ##expr.24 1 1))) ((bruijn ##k.742 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0drop__const_k333, env, runtime,
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
static void _V0drop__const_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0drop__const_lambda77" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__const_lambda77, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.24 0 1)) ((bruijn equal? 10 13) (close _V0drop__const_k332) (quote const) (##inline ##sys.car (bruijn ##expr.24 0 1))) ((bruijn ##k.742 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 10-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__const_k332, env)}),
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
static void _V0drop__const_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0drop__const_k334" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0drop__const_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__const_k334, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.22 2 1) (bruijn ##k.740 1 0) (bruijn x 3 1))
V_CALL(upenv->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->up->vars[1]
    );
 }
}
static void _V0drop__const_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0drop__const_lambda76" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__const_lambda76, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0drop__const_lambda77) (close _V0drop__const_k334) (bruijn ##input.23 0 1))
V_CALL_FUNC(_V0drop__const_lambda77, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__const_k334, env)}),
      _var1
    );
 }
}
static void _V0drop__const_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0drop__const_lambda75" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0drop__const_lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__const_lambda75, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0drop__const_lambda76) (bruijn ##k.739 0 0) (bruijn x 1 1))
V_CALL_FUNC(_V0drop__const_lambda76, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0drop__const_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0drop__const_lambda74" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0drop__const_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0drop__const_lambda74, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 7 11) (bruijn ##k.738 0 0) (close _V0drop__const_lambda75))
V_CALL(VGetArg(upenv, 7-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__const_lambda75, env)})
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k38) (bruijn drop-const 5 6) (close _V0drop__const_lambda74))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k38, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0drop__const_lambda74, env)})
    );
 }
}
static void _V0validate__foreign__function_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k347" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k347, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.769 1 0) ((bruijn error 23 14) (bruijn ##k.770 0 0) (##string ##string.968) (bruijn lang 5 0)) ((bruijn ##k.770 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 23-1, 14), runtime,
      _var0,
      VEncodePointer(&_V10string_D968.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0validate__foreign__function_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k353" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k353, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 15 1) (bruijn ##k.758 13 0) (bruijn ##x.764 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      _var0
    );
 }
}
static void _V0validate__foreign__function_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k352" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn unwrap-function 26 11) (close _V0validate__foreign__function_k353) (bruijn decl 7 0) (bruijn parse 1 0))
V_CALL(VGetArg(upenv, 26-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k353, env)}),
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0]
    );
 }
}
static void _V0validate__foreign__function_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k351" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn release-parse 19 2) (close _V0validate__foreign__function_k352))
V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k352, env)})
    );
 }
}
static void _V0validate__foreign__function_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k350" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn is-one-decl 18 3) (close _V0validate__foreign__function_k351) (bruijn ##x.767 0 0))
V_CALL(VGetArg(upenv, 18-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k351, env)}),
      _var0
    );
 }
}
static void _V0validate__foreign__function_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k349" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn deep-copy 23 4) (close _V0validate__foreign__function_k350) (bruijn ##x.768 0 0))
V_CALL(VGetArg(upenv, 23-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k350, env)}),
      _var0
    );
 }
}
static void _V0validate__foreign__function_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k348" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn parse-decl-c 16 1) (close _V0validate__foreign__function_k349) (bruijn decl 3 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k349, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0validate__foreign__function_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k346" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0validate__foreign__function_k347) (close _V0validate__foreign__function_k348))
V_CALL_FUNC(_V0validate__foreign__function_k347, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k348, env)})
    );
 }
}
static void _V0validate__foreign__function_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k345" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 21 19) (close _V0validate__foreign__function_k346) (bruijn ##x.771 0 0))
V_CALL(VGetArg(upenv, 21-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k346, env)}),
      _var0
    );
 }
}
static void _V0validate__foreign__function_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k344" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.21 1 0))) ((bruijn equal? 20 13) (close _V0validate__foreign__function_k345) (bruijn lang 2 0) (##string ##string.971)) ((bruijn ##k.758 5 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 20-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k345, env)}),
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D971.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0validate__foreign__function_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k343" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 0)) ((close _V0validate__foreign__function_k344) (##inline ##sys.car (bruijn ##expr.21 0 0))) ((bruijn ##k.758 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0validate__foreign__function_k344, env, runtime,
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
static void _V0validate__foreign__function_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k342" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0validate__foreign__function_k343) (##inline ##sys.cdr (bruijn ##expr.20 1 0)))
V_CALL_FUNC(_V0validate__foreign__function_k343, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0validate__foreign__function_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k341" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 0)) ((close _V0validate__foreign__function_k342) (##inline ##sys.car (bruijn ##expr.20 0 0))) ((bruijn ##k.758 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0validate__foreign__function_k342, env, runtime,
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
static void _V0validate__foreign__function_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k340" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.760 0 0) ((close _V0validate__foreign__function_k341) (##inline ##sys.cdr (bruijn ##expr.19 1 1))) ((bruijn ##k.758 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0validate__foreign__function_k341, env, runtime,
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
static void _V0validate__foreign__function_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_lambda82" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda82, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.19 0 1)) ((bruijn equal? 15 13) (close _V0validate__foreign__function_k340) (quote ##foreign.function) (##inline ##sys.car (bruijn ##expr.19 0 1))) ((bruijn ##k.758 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 15-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k340, env)}),
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
static void _V0validate__foreign__function_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k355" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k355, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 3 1) (bruijn ##k.755 2 0) (bruijn ##x.757 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0validate__foreign__function_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k354" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 15 14) (close _V0validate__foreign__function_k355) (##string ##string.987) (bruijn expr 9 1))
V_CALL(VGetArg(upenv, 15-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k355, env)}),
      VEncodePointer(&_V10string_D987.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0validate__foreign__function_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_lambda81" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0validate__foreign__function_lambda82) (close _V0validate__foreign__function_k354) (bruijn ##input.18 0 1))
V_CALL_FUNC(_V0validate__foreign__function_lambda82, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k354, env)}),
      _var1
    );
 }
}
static void _V0validate__foreign__function_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_lambda80" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0validate__foreign__function_lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda80, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0validate__foreign__function_lambda81) (bruijn ##k.754 0 0) (bruijn expr 7 1))
V_CALL_FUNC(_V0validate__foreign__function_lambda81, env, runtime,
      _var0,
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0validate__foreign__function_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k339" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 12 11) (bruijn ##k.750 5 0) (close _V0validate__foreign__function_lambda80))
V_CALL(VGetArg(upenv, 12-1, 11), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_lambda80, env)})
    );
 }
}
static void _V0is__one__decl_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k357" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k357, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.810 1 0) (##sys.blob=? (bruijn ##k.811 0 0) (##string ##string.975) (##inline ##sys.car (bruijn ##expr.9 2 1))) ((bruijn ##k.811 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D975.sym, VPOINTER_OTHER),
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
static void _V0is__one__decl_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k362" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k362, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.806 1 0) (##sys.blob=? (bruijn ##k.807 0 0) (##string ##string.976) (##inline ##sys.car (bruijn ##expr.11 2 0))) ((bruijn ##k.807 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D976.sym, VPOINTER_OTHER),
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
static void _V0is__one__decl_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k366" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k366, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 11 1) (bruijn ##k.793 9 0) (bruijn ##x.803 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0
    );
 }
}
static void _V0is__one__decl_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k365" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.13 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.13 0 0))) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.10 5 0))) ((bruijn cdadr 23 27) (close _V0is__one__decl_k366) (bruijn parse 11 1)) ((bruijn ##k.793 8 0) #f)) ((bruijn ##k.793 8 0) #f)) ((bruijn ##k.793 8 0) #f))
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
V_CALL(VGetArg(upenv, 23-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k366, env)}),
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
static void _V0is__one__decl_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k364" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.12 0 0)) ((close _V0is__one__decl_k365) (##inline ##sys.cdr (bruijn ##expr.12 0 0))) ((bruijn ##k.793 7 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0is__one__decl_k365, env, runtime,
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
static void _V0is__one__decl_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k363" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.798 0 0) ((close _V0is__one__decl_k364) (##inline ##sys.cdr (bruijn ##expr.11 2 0))) ((bruijn ##k.793 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0is__one__decl_k364, env, runtime,
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
static void _V0is__one__decl_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k361" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0is__one__decl_k362) (close _V0is__one__decl_k363))
V_CALL_FUNC(_V0is__one__decl_k362, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k363, env)})
    );
 }
}
static void _V0is__one__decl_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k360" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.11 0 0)) (##sys.string? (close _V0is__one__decl_k361) (##inline ##sys.car (bruijn ##expr.11 0 0))) ((bruijn ##k.793 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k361, env)}),
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
static void _V0is__one__decl_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k359" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.10 0 0)) ((close _V0is__one__decl_k360) (##inline ##sys.car (bruijn ##expr.10 0 0))) ((bruijn ##k.793 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0is__one__decl_k360, env, runtime,
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
static void _V0is__one__decl_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k358" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.795 0 0) ((close _V0is__one__decl_k359) (##inline ##sys.cdr (bruijn ##expr.9 2 1))) ((bruijn ##k.793 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0is__one__decl_k359, env, runtime,
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
static void _V0is__one__decl_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k356" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0is__one__decl_k357) (close _V0is__one__decl_k358))
V_CALL_FUNC(_V0is__one__decl_k357, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k358, env)})
    );
 }
}
static void _V0is__one__decl_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0is__one__decl_lambda86" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.9 0 1)) (##sys.string? (close _V0is__one__decl_k356) (##inline ##sys.car (bruijn ##expr.9 0 1))) ((bruijn ##k.793 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k356, env)}),
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
static void _V0is__one__decl_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k369" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k369, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.789 1 0) (##sys.blob=? (bruijn ##k.790 0 0) (##string ##string.988) (##inline ##sys.car (bruijn ##expr.14 2 1))) ((bruijn ##k.790 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D988.sym, VPOINTER_OTHER),
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
static void _V0is__one__decl_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k373" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k373, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 8 1) (bruijn ##k.781 5 0) (bruijn ##x.787 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0is__one__decl_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k372" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.16 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.16 0 0))) ((bruijn cdr 20 5) (close _V0is__one__decl_k373) (bruijn parse 8 1)) ((bruijn ##k.781 4 0) #f)) ((bruijn ##k.781 4 0) #f))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k373, env)}),
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
static void _V0is__one__decl_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k371" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.15 0 0)) ((close _V0is__one__decl_k372) (##inline ##sys.cdr (bruijn ##expr.15 0 0))) ((bruijn ##k.781 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0is__one__decl_k372, env, runtime,
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
static void _V0is__one__decl_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k370" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.783 0 0) ((close _V0is__one__decl_k371) (##inline ##sys.cdr (bruijn ##expr.14 2 1))) ((bruijn ##k.781 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0is__one__decl_k371, env, runtime,
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
static void _V0is__one__decl_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k368" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0is__one__decl_k369) (close _V0is__one__decl_k370))
V_CALL_FUNC(_V0is__one__decl_k369, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k370, env)})
    );
 }
}
static void _V0is__one__decl_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0is__one__decl_lambda87" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_lambda87, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.14 0 1)) (##sys.string? (close _V0is__one__decl_k368) (##inline ##sys.car (bruijn ##expr.14 0 1))) ((bruijn ##k.781 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k368, env)}),
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
static void _V0is__one__decl_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k375" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k375, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.7 4 1) (bruijn ##k.776 3 0) #f)
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0is__one__decl_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k374" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 16 14) (close _V0is__one__decl_k375) (##string ##string.989) (bruijn parse 4 1))
V_CALL(VGetArg(upenv, 16-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k375, env)}),
      VEncodePointer(&_V10string_D989.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0is__one__decl_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0is__one__decl_k367" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0is__one__decl_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0is__one__decl_lambda87) (close _V0is__one__decl_k374) (bruijn ##input.8 1 1))
V_CALL_FUNC(_V0is__one__decl_lambda87, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k374, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0is__one__decl_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0is__one__decl_lambda85" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0is__one__decl_lambda86) (close _V0is__one__decl_k367) (bruijn ##input.8 0 1))
V_CALL_FUNC(_V0is__one__decl_lambda86, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_k367, env)}),
      _var1
    );
 }
}
static void _V0is__one__decl_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0is__one__decl_lambda84" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0is__one__decl_lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0is__one__decl_lambda85) (bruijn ##k.775 0 0) (bruijn parse 1 1))
V_CALL_FUNC(_V0is__one__decl_lambda85, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0is__one__decl_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0is__one__decl_lambda83" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0is__one__decl_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__decl_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 12 11) (bruijn ##k.774 0 0) (close _V0is__one__decl_lambda84))
V_CALL(VGetArg(upenv, 12-1, 11), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_lambda84, env)})
    );
 }
}
static void _V0validate__foreign__function_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k338" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0validate__foreign__function_k339) (bruijn is-one-decl 4 3) (close _V0is__one__decl_lambda83))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k339, env)}),
      VEncodeInt(4l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__decl_lambda83, env)})
    );
 }
}
static void _V0validate__foreign__function_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k337" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0validate__foreign__function_k338) (bruijn release-parse 3 2) (bruijn ##x.814 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k338, env)}),
      VEncodeInt(3l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V0validate__foreign__function_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k336" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.function (close _V0validate__foreign__function_k337) (##string ##string.973))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k337, env)}),
      VEncodePointer(&_V10string_D973.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0validate__foreign__function_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_k335" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0validate__foreign__function_k336) (bruijn parse-decl-c 1 1) (bruijn ##x.815 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k336, env)}),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0validate__foreign__function_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_lambda79" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda79, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (##vcore.function (close _V0validate__foreign__function_k335) (##string ##string.990))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k335, env)}),
      VEncodePointer(&_V10string_D990.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0validate__foreign__function_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0validate__foreign__function_lambda78" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0validate__foreign__function_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0validate__foreign__function_lambda79) (bruijn ##k.749 0 0) #f #f #f)
V_CALL_FUNC(_V0validate__foreign__function_lambda79, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k37) (bruijn validate-foreign-function 4 5) (close _V0validate__foreign__function_lambda78))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k37, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_lambda78, env)})
    );
 }
}
static void _V0deep__copy_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0deep__copy_k381" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k381, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 11 17) (bruijn ##k.816 6 0) (bruijn ##x.819 2 0) (bruijn ##x.820 0 0))
V_CALL(VGetArg(upenv, 11-1, 17), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0deep__copy_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0deep__copy_k380" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn deep-copy 9 4) (close _V0deep__copy_k381) (bruijn ##x.821 0 0))
V_CALL(VGetArg(upenv, 9-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k381, env)}),
      _var0
    );
 }
}
static void _V0deep__copy_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0deep__copy_k379" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 9 5) (close _V0deep__copy_k380) (bruijn x 4 1))
V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k380, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0deep__copy_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0deep__copy_k378" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn deep-copy 7 4) (close _V0deep__copy_k379) (bruijn ##x.822 0 0))
V_CALL(VGetArg(upenv, 7-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k379, env)}),
      _var0
    );
 }
}
static void _V0deep__copy_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0deep__copy_k377" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.818 0 0) ((bruijn car 7 7) (close _V0deep__copy_k378) (bruijn x 2 1)) ((bruijn ##k.816 2 0) (bruijn x 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k378, env)}),
      upenv->up->vars[1]
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[1]
    );
}
 }
}
static void _V0deep__copy_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0deep__copy_k376" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.817 0 0) ((bruijn string-copy 6 28) (bruijn ##k.816 1 0) (bruijn x 1 1)) ((bruijn pair? 6 8) (close _V0deep__copy_k377) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 28), runtime,
      upenv->vars[0],
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k377, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0deep__copy_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0deep__copy_lambda88" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0deep__copy_lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_lambda88, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string? 5 20) (close _V0deep__copy_k376) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 5-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k376, env)}),
      _var1
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k36) (bruijn deep-copy 3 4) (close _V0deep__copy_lambda88))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k36, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_lambda88, env)})
    );
 }
}
static void _V0mangle__foreign__function_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0mangle__foreign__function_lambda89" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0mangle__foreign__function_lambda89, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__foreign__function_lambda89, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 4 16) (bruijn ##k.823 0 0) (##string ##string.991) (bruijn name 0 1))
V_CALL(upenv->up->up->up->vars[16], runtime,
      _var0,
      VEncodePointer(&_V10string_D991.sym, VPOINTER_OTHER),
      _var1
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k35) (bruijn mangle-foreign-function 2 3) (close _V0mangle__foreign__function_lambda89))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k35, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__foreign__function_lambda89, env)})
    );
 }
}
static void _V0get__decoder_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k384" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k384, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 6 4) (bruijn ##k.889 1 0) (bruijn ##x.890 0 0) (quote pointer))
V_CALL(VGetArg(upenv, 6-1, 4), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V0pointer.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0get__decoder_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k383" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.888 1 0) ((bruijn car 5 7) (close _V0get__decoder_k384) (bruijn type 2 1)) ((bruijn ##k.889 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 5-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k384, env)}),
      upenv->up->vars[1]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0get__decoder_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k388" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k388, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.855 1 0) ((bruijn ##kk.1 3 1) (bruijn ##k.856 0 0) (##inline ##sys.qcons (quote c-string) (quote (##string ##string.992)))) ((bruijn ##k.856 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(upenv->up->up->vars[1], runtime,
      _var0,
      VInlineCons(
VEncodePointer(&_V0c__string.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D992.sym, VPOINTER_OTHER)
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0get__decoder_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k392" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k392, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.849 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.4 1 0))) ((bruijn ##kk.1 7 1) (bruijn ##k.845 3 0) (##inline ##sys.qcons (quote const-c-string) (quote (##string ##string.993)))) ((bruijn ##k.845 3 0) #f)) ((bruijn ##k.845 3 0) #f))
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
      VEncodePointer(&_V10string_D993.sym, VPOINTER_OTHER)
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
static void _V0get__decoder_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k391" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 0)) ((bruijn equal? 12 13) (close _V0get__decoder_k392) (quote char) (##inline ##sys.car (bruijn ##expr.4 0 0))) ((bruijn ##k.845 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 12-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k392, env)}),
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
static void _V0get__decoder_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k390" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.847 0 0) ((close _V0get__decoder_k391) (##inline ##sys.cdr (bruijn ##expr.3 1 1))) ((bruijn ##k.845 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0get__decoder_k391, env, runtime,
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
static void _V0get__decoder_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0get__decoder_lambda92" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.3 0 1)) ((bruijn equal? 10 13) (close _V0get__decoder_k390) (quote const) (##inline ##sys.car (bruijn ##expr.3 0 1))) ((bruijn ##k.845 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 10-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k390, env)}),
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
static void _V0get__decoder_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k396" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k396, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.839 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.6 1 0))) ((bruijn ##kk.1 8 1) (bruijn ##k.835 3 0) (##inline ##sys.qcons (quote const-void-pointer) (quote (##string ##string.994)))) ((bruijn ##k.835 3 0) #f)) ((bruijn ##k.835 3 0) #f))
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
      VEncodePointer(&_V10string_D994.sym, VPOINTER_OTHER)
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
static void _V0get__decoder_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k395" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.6 0 0)) ((bruijn equal? 13 13) (close _V0get__decoder_k396) (quote void) (##inline ##sys.car (bruijn ##expr.6 0 0))) ((bruijn ##k.835 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k396, env)}),
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
static void _V0get__decoder_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k394" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.837 0 0) ((close _V0get__decoder_k395) (##inline ##sys.cdr (bruijn ##expr.5 1 1))) ((bruijn ##k.835 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0get__decoder_k395, env, runtime,
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
static void _V0get__decoder_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0get__decoder_lambda93" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.5 0 1)) ((bruijn equal? 11 13) (close _V0get__decoder_k394) (quote const) (##inline ##sys.car (bruijn ##expr.5 0 1))) ((bruijn ##k.835 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 11-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k394, env)}),
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
static void _V0get__decoder_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k399" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k399, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.832 1 0) ((bruijn ##kk.1 7 1) (bruijn ##k.833 0 0) (##inline ##sys.qcons (quote void-pointer) (quote (##string ##string.995)))) ((bruijn ##k.833 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      _var0,
      VInlineCons(
VEncodePointer(&_V0void__pointer.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D995.sym, VPOINTER_OTHER)
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0get__decoder_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k400" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k400, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 7 1) (bruijn ##k.826 7 0) (##inline ##sys.qcons (quote void-pointer) (quote (##string ##string.996))))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons(
VEncodePointer(&_V0void__pointer.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D996.sym, VPOINTER_OTHER)
    )

    );
 }
}
static void _V0get__decoder_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k398" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0get__decoder_k399) (close _V0get__decoder_k400))
V_CALL_FUNC(_V0get__decoder_k399, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k400, env)})
    );
 }
}
static void _V0get__decoder_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k397" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn equal? 11 13) (close _V0get__decoder_k398) (quote void) (bruijn ##input.2 4 0))
V_CALL(VGetArg(upenv, 11-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k398, env)}),
      VEncodePointer(&_V0void.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0get__decoder_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k393" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0get__decoder_lambda93) (close _V0get__decoder_k397) (bruijn ##input.2 3 0))
V_CALL_FUNC(_V0get__decoder_lambda93, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k397, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0get__decoder_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k389" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0get__decoder_lambda92) (close _V0get__decoder_k393) (bruijn ##input.2 2 0))
V_CALL_FUNC(_V0get__decoder_lambda92, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k393, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0get__decoder_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k387" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0get__decoder_k388) (close _V0get__decoder_k389))
V_CALL_FUNC(_V0get__decoder_k388, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k389, env)})
    );
 }
}
static void _V0get__decoder_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k386" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn equal? 7 13) (close _V0get__decoder_k387) (quote char) (bruijn ##input.2 0 0))
V_CALL(VGetArg(upenv, 7-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k387, env)}),
      VEncodePointer(&_V0char.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0get__decoder_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0get__decoder_lambda91" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0get__decoder_lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_lambda91, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cadr 6 26) (close _V0get__decoder_k386) (bruijn type 3 1))
V_CALL(VGetArg(upenv, 6-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k386, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0get__decoder_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k385" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.825 0 0) ((bruijn call/cc 5 11) (bruijn ##k.824 2 0) (close _V0get__decoder_lambda91)) ((bruijn assv 5 29) (bruijn ##k.824 2 0) (bruijn type 2 1) (##inline ##sys.qcons (##inline ##sys.qcons (quote bool) (quote (##string ##string.997))) (##inline ##sys.qcons (##inline ##sys.qcons (quote char) (quote (##string ##string.998))) (##inline ##sys.qcons (##inline ##sys.qcons (quote signed-char) (quote (##string ##string.999))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-char) (quote (##string ##string.1000))) (##inline ##sys.qcons (##inline ##sys.qcons (quote short) (quote (##string ##string.1001))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-short) (quote (##string ##string.1002))) (##inline ##sys.qcons (##inline ##sys.qcons (quote int) (quote (##string ##string.1003))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-int) (quote (##string ##string.1003))) (##inline ##sys.qcons (##inline ##sys.qcons (quote long) (quote (##string ##string.1004))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-long) (quote (##string ##string.1005))) (##inline ##sys.qcons (##inline ##sys.qcons (quote double) (quote (##string ##string.1006))) (##inline ##sys.qcons (##inline ##sys.qcons (quote float) (quote (##string ##string.1006))) (##inline ##sys.qcons (##inline ##sys.qcons (quote vword) (quote (##string ##string.1007))) (##inline ##sys.qcons (##inline ##sys.qcons (quote c-string) (quote (##string ##string.992))) (##inline ##sys.qcons (##inline ##sys.qcons (quote size_t) (quote (##string ##string.1005))) (quote ()))))))))))))))))))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 11), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_lambda91, env)})
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 29), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0bool.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D997.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D998.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0signed__char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D999.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1000.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0short.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1001.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__short.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1002.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0int.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1003.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__int.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1003.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0long.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1004.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__long.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1005.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0double.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1006.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0float.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1006.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vword.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1007.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0c__string.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D992.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0size_Ut.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1005.sym, VPOINTER_OTHER)
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

    )

    );
}
 }
}
static void _V0get__decoder_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__decoder_k382" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__decoder_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0get__decoder_k383) (close _V0get__decoder_k385))
V_CALL_FUNC(_V0get__decoder_k383, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k385, env)})
    );
 }
}
static void _V0get__decoder_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0get__decoder_lambda90" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0get__decoder_lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_lambda90, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 3 8) (close _V0get__decoder_k382) (bruijn type 0 1))
V_CALL(upenv->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_k382, env)}),
      _var1
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k34) (bruijn get-decoder 1 2) (close _V0get__decoder_lambda90))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k34, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_lambda90, env)})
    );
 }
}
static void _V0get__encoder_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0get__encoder_k401" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0get__encoder_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__encoder_k401, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.892 0 0) ((bruijn ##k.891 1 0) (##inline ##sys.qcons (##inline ##sys.qcons (quote pointer) (##inline ##sys.qcons (quote void) (quote ()))) (quote (##string ##string.1008)))) ((bruijn assv 3 29) (bruijn ##k.891 1 0) (bruijn type 1 1) (##inline ##sys.qcons (##inline ##sys.qcons (quote void) (quote #t)) (##inline ##sys.qcons (##inline ##sys.qcons (quote bool) (quote (##string ##string.1009))) (##inline ##sys.qcons (##inline ##sys.qcons (quote char) (quote (##string ##string.1010))) (##inline ##sys.qcons (##inline ##sys.qcons (quote signed-char) (quote (##string ##string.1011))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-char) (quote (##string ##string.1011))) (##inline ##sys.qcons (##inline ##sys.qcons (quote short) (quote (##string ##string.1011))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-short) (quote (##string ##string.1011))) (##inline ##sys.qcons (##inline ##sys.qcons (quote int) (quote (##string ##string.1011))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-int) (quote (##string ##string.1011))) (##inline ##sys.qcons (##inline ##sys.qcons (quote double) (quote (##string ##string.1012))) (##inline ##sys.qcons (##inline ##sys.qcons (quote float) (quote (##string ##string.1012))) (##inline ##sys.qcons (##inline ##sys.qcons (quote vword) (quote (##string ##string.977))) (quote ())))))))))))))))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0pointer.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0void.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VEncodePointer(&_V10string_D1008.sym, VPOINTER_OTHER)
    )

    );
} else {
V_CALL(upenv->up->up->vars[29], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0void.sym, VPOINTER_OTHER),
      VEncodeBool(true)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0bool.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1009.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1010.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0signed__char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1011.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1011.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0short.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1011.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__short.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1011.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0int.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1011.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__int.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1011.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0double.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1012.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0float.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D1012.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vword.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D977.sym, VPOINTER_OTHER)
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
static void _V0get__encoder_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0get__encoder_lambda94" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0get__encoder_lambda94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__encoder_lambda94, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn equal? 2 13) (close _V0get__encoder_k401) (bruijn type 0 1) (##inline ##sys.qcons (quote pointer) (##inline ##sys.qcons (quote void) (quote ()))))
V_CALL(upenv->up->vars[13], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__encoder_k401, env)}),
      _var1,
      VInlineCons(
VEncodePointer(&_V0pointer.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0void.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda3, runtime, upenv, 15, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14) {
  struct { VEnv env; VWORD argv[15]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 15; env->var_len = 15; env->up = upenv;
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
  // (set! (close _V0vanity_V0compiler_V0ffi_V20_k33) (bruijn get-encoder 0 1) (close _V0get__encoder_lambda94))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k33, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__encoder_lambda94, env)})
    );
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda2, runtime, upenv, 30, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29) {
  struct { VEnv env; VWORD argv[30]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 30; env->var_len = 30; env->up = upenv;
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
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda3) (bruijn ##k.147 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
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
      VEncodeBool(false)
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
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda2) (bruijn ##k.146 32 0) (bruijn ##x.921 28 0) (bruijn ##x.922 27 0) (bruijn ##x.923 26 0) (bruijn ##x.924 25 0) (bruijn ##x.925 24 0) (bruijn ##x.926 23 0) (bruijn ##x.927 22 0) (bruijn ##x.928 21 0) (bruijn ##x.929 20 0) (bruijn ##x.930 19 0) (bruijn ##x.931 18 0) (bruijn ##x.932 17 0) (bruijn ##x.933 16 0) (bruijn ##x.934 15 0) (bruijn ##x.935 14 0) (bruijn ##x.936 13 0) (bruijn ##x.937 12 0) (bruijn ##x.938 11 0) (bruijn ##x.939 10 0) (bruijn ##x.940 9 0) (bruijn ##x.941 8 0) (bruijn ##x.942 7 0) (bruijn ##x.943 6 0) (bruijn ##x.944 5 0) (bruijn ##x.945 4 0) (bruijn ##x.946 3 0) (bruijn ##x.947 2 0) (bruijn ##x.948 1 0) (bruijn ##x.949 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda2, env, runtime,
      VGetArg(upenv, 32-1, 0),
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
  // ((bruijn ##vcore.import 28 0) (close _V0vanity_V0compiler_V0ffi_V20_k32) (quote assv))
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k32, env)}),
      VEncodePointer(&_V0assv.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 27 0) (close _V0vanity_V0compiler_V0ffi_V20_k31) (quote string-copy))
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k31, env)}),
      VEncodePointer(&_V0string__copy.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 26 0) (close _V0vanity_V0compiler_V0ffi_V20_k30) (quote cdadr))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k30, env)}),
      VEncodePointer(&_V0cdadr.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 25 0) (close _V0vanity_V0compiler_V0ffi_V20_k29) (quote cadr))
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k29, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 24 0) (close _V0vanity_V0compiler_V0ffi_V20_k28) (quote map))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k28, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 23 0) (close _V0vanity_V0compiler_V0ffi_V20_k27) (quote null?))
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k27, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0compiler_V0ffi_V20_k26) (quote list))
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k26, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0compiler_V0ffi_V20_k25) (quote list-ref))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k25, env)}),
      VEncodePointer(&_V0list__ref.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0compiler_V0ffi_V20_k24) (quote string->symbol))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k24, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0ffi_V20_k23) (quote string?))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k23, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0ffi_V20_k22) (quote not))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k22, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0ffi_V20_k21) (quote close-port))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k21, env)}),
      VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0ffi_V20_k20) (quote cons))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k20, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0ffi_V20_k19) (quote sprintf))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k19, env)}),
      VEncodePointer(&_V0sprintf.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0ffi_V20_k18) (quote search-open-input-file))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k18, env)}),
      VEncodePointer(&_V0search__open__input__file.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0ffi_V20_k17) (quote error))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k17, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0ffi_V20_k16) (quote equal?))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k16, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0ffi_V20_k15) (quote reverse))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k15, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0ffi_V20_k14) (quote call/cc))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k14, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0ffi_V20_k13) (quote call-with-values))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k13, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0ffi_V20_k12) (quote +))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k12, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0ffi_V20_k11) (quote pair?))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k11, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0ffi_V20_k10) (quote car))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k10, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0ffi_V20_k9) (quote for-each))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k9, env)}),
      VEncodePointer(&_V0for__each.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0ffi_V20_k8) (quote cdr))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k8, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0ffi_V20_k7) (quote eqv?))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k7, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0ffi_V20_k6) (quote printf))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k6, env)}),
      VEncodePointer(&_V0printf.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0ffi_V20_k5) (quote length))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k5, env)}),
      VEncodePointer(&_V0length.sym, VPOINTER_OTHER)
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
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0ffi_V20_k4) (quote iota))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k4, env)}),
      VEncodePointer(&_V0iota.sym, VPOINTER_OTHER)
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0ffi_V20_k3) (##string ##string.1013) (bruijn ##x.950 1 0) (bruijn ##x.951 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k3, env)}),
      VEncodePointer(&_V10string_D1013.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k2) (##string ##string.1014))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k2, env)}),
      VEncodePointer(&_V10string_D1014.sym, VPOINTER_OTHER)
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k1) (##string ##string.1015))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k1, env)}),
      VEncodePointer(&_V10string_D1015.sym, VPOINTER_OTHER)
    );
 }
}
VFunc _V0vanity_V0compiler_V0ffi_V20 = (VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda1;