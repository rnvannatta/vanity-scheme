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
static struct { VBlob sym; char bytes[21]; } _V10string_D374 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[6]; } _V10string_D373 = { { VSTRING, 6 }, "utils" };
static struct { VBlob sym; char bytes[4]; } _V10string_D372 = { { VSTRING, 4 }, "ffi" };
static struct { VBlob sym; char bytes[5]; } _V0iota = { { VSYMBOL, 5 }, "iota" };
static struct { VBlob sym; char bytes[7]; } _V0length = { { VSYMBOL, 7 }, "length" };
static struct { VBlob sym; char bytes[7]; } _V0printf = { { VSYMBOL, 7 }, "printf" };
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
static struct { VBlob sym; char bytes[16]; } _V0open__input__file = { { VSYMBOL, 16 }, "open-input-file" };
static struct { VBlob sym; char bytes[14]; } _V0string__append = { { VSYMBOL, 14 }, "string-append" };
static struct { VBlob sym; char bytes[8]; } _V0sprintf = { { VSYMBOL, 8 }, "sprintf" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[11]; } _V0close__port = { { VSYMBOL, 11 }, "close-port" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[12]; } _V0string__copy = { { VSYMBOL, 12 }, "string-copy" };
static struct { VBlob sym; char bytes[5]; } _V0assv = { { VSYMBOL, 5 }, "assv" };
static struct { VBlob sym; char bytes[1]; } _V10string_D371 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[14]; } _V10string_D370 = { { VSTRING, 14 }, "VEncodeDouble" };
static struct { VBlob sym; char bytes[11]; } _V10string_D369 = { { VSTRING, 11 }, "VEncodeInt" };
static struct { VBlob sym; char bytes[12]; } _V10string_D368 = { { VSTRING, 12 }, "VEncodeChar" };
static struct { VBlob sym; char bytes[12]; } _V10string_D367 = { { VSTRING, 12 }, "VEncodeBool" };
static struct { VBlob sym; char bytes[22]; } _V10string_D366 = { { VSTRING, 22 }, "VCheckedDecodeCString" };
static struct { VBlob sym; char bytes[9]; } _V0c__string = { { VSYMBOL, 9 }, "c-string" };
static struct { VBlob sym; char bytes[20]; } _V10string_D365 = { { VSTRING, 20 }, "VCheckedDecodeVWORD" };
static struct { VBlob sym; char bytes[6]; } _V0vword = { { VSYMBOL, 6 }, "vword" };
static struct { VBlob sym; char bytes[6]; } _V0float = { { VSYMBOL, 6 }, "float" };
static struct { VBlob sym; char bytes[21]; } _V10string_D364 = { { VSTRING, 21 }, "VCheckedDecodeNumber" };
static struct { VBlob sym; char bytes[7]; } _V0double = { { VSYMBOL, 7 }, "double" };
static struct { VBlob sym; char bytes[27]; } _V10string_D363 = { { VSTRING, 27 }, "VCheckedDecodeUnsignedLong" };
static struct { VBlob sym; char bytes[14]; } _V0unsigned__long = { { VSYMBOL, 14 }, "unsigned-long" };
static struct { VBlob sym; char bytes[19]; } _V10string_D362 = { { VSTRING, 19 }, "VCheckedDecodeLong" };
static struct { VBlob sym; char bytes[5]; } _V0long = { { VSYMBOL, 5 }, "long" };
static struct { VBlob sym; char bytes[13]; } _V0unsigned__int = { { VSYMBOL, 13 }, "unsigned-int" };
static struct { VBlob sym; char bytes[18]; } _V10string_D361 = { { VSTRING, 18 }, "VCheckedDecodeInt" };
static struct { VBlob sym; char bytes[4]; } _V0int = { { VSYMBOL, 4 }, "int" };
static struct { VBlob sym; char bytes[28]; } _V10string_D360 = { { VSTRING, 28 }, "VCheckedDecodeUnsignedShort" };
static struct { VBlob sym; char bytes[15]; } _V0unsigned__short = { { VSYMBOL, 15 }, "unsigned-short" };
static struct { VBlob sym; char bytes[20]; } _V10string_D359 = { { VSTRING, 20 }, "VCheckedDecodeShort" };
static struct { VBlob sym; char bytes[6]; } _V0short = { { VSYMBOL, 6 }, "short" };
static struct { VBlob sym; char bytes[27]; } _V10string_D358 = { { VSTRING, 27 }, "VCheckedDecodeUnsignedChar" };
static struct { VBlob sym; char bytes[14]; } _V0unsigned__char = { { VSYMBOL, 14 }, "unsigned-char" };
static struct { VBlob sym; char bytes[25]; } _V10string_D357 = { { VSTRING, 25 }, "VCheckedDecodeSignedChar" };
static struct { VBlob sym; char bytes[12]; } _V0signed__char = { { VSYMBOL, 12 }, "signed-char" };
static struct { VBlob sym; char bytes[19]; } _V10string_D356 = { { VSTRING, 19 }, "VCheckedDecodeChar" };
static struct { VBlob sym; char bytes[5]; } _V0char = { { VSYMBOL, 5 }, "char" };
static struct { VBlob sym; char bytes[19]; } _V10string_D355 = { { VSTRING, 19 }, "VCheckedDecodeBool" };
static struct { VBlob sym; char bytes[5]; } _V0bool = { { VSYMBOL, 5 }, "bool" };
static struct { VBlob sym; char bytes[12]; } _V10string_D354 = { { VSTRING, 12 }, "_V30~A_shim" };
static struct { VBlob sym; char bytes[50]; } _V10string_D353 = { { VSTRING, 50 }, "Unsupported arg type in C foreign-function ~A: ~A" };
static struct { VBlob sym; char bytes[43]; } _V10string_D352 = { { VSTRING, 43 }, "Foreign function name must be a string: ~A" };
static struct { VBlob sym; char bytes[46]; } _V10string_D351 = { { VSTRING, 46 }, "Unsupported return type in C foreign-function" };
static struct { VBlob sym; char bytes[28]; } _V10string_D350 = { { VSTRING, 28 }, "Expected declaration string" };
static struct { VBlob sym; char bytes[19]; } _V10string_D349 = { { VSTRING, 19 }, "VForeignParseDeclC" };
static struct { VBlob sym; char bytes[32]; } _V10string_D348 = { { VSTRING, 32 }, "Invalid foreign function syntax" };
static struct { VBlob sym; char bytes[21]; } _V10string_D347 = { { VSTRING, 21 }, "VForeignParseHeaderC" };
static struct { VBlob sym; char bytes[21]; } _V10string_D346 = { { VSTRING, 21 }, "VForeignReleaseParse" };
static struct { VBlob sym; char bytes[30]; } _V10string_D345 = { { VSTRING, 30 }, "Invalid foreign import syntax" };
static struct { VBlob sym; char bytes[17]; } _V10foreign_Dimport = { { VSYMBOL, 17 }, "##foreign.import" };
static struct { VBlob sym; char bytes[2]; } _V10string_D344 = { { VSTRING, 2 }, "C" };
static struct { VBlob sym; char bytes[2]; } _V10string_D343 = { { VSTRING, 2 }, "/" };
static struct { VBlob sym; char bytes[15]; } _V10string_D342 = { { VSTRING, 15 }, "#include <~A>\n" };
static struct { VBlob sym; char bytes[18]; } _V10foreign_Ddeclare = { { VSYMBOL, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[22]; } _V10string_D341 = { { VSTRING, 22 }, "File must be a string" };
static struct { VBlob sym; char bytes[38]; } _V10string_D340 = { { VSTRING, 38 }, "Unsupported foreign function language" };
static struct { VBlob sym; char bytes[26]; } _V10string_D339 = { { VSTRING, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[19]; } _V10foreign_Dfunction = { { VSYMBOL, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[17]; } _V10string_D338 = { { VSTRING, 17 }, "~A(_arg~A, \"~A\")" };
static struct { VBlob sym; char bytes[6]; } _V10string_D337 = { { VSTRING, 6 }, "~A;~N" };
static struct { VBlob sym; char bytes[39]; } _V10string_D336 = { { VSTRING, 39 }, "void _V30~A_shim(V_CORE_ARGS, VWORD _k" };
static struct { VBlob sym; char bytes[15]; } _V10string_D335 = { { VSTRING, 15 }, ", VWORD _arg~A" };
static struct { VBlob sym; char bytes[34]; } _V10string_D334 = { { VSTRING, 34 }, "  V_ARG_CHECK2(\"~A\", ~A, argc);~N" };
static struct { VBlob sym; char bytes[58]; } _V10string_D333 = { { VSTRING, 58 }, "  V_GC_CHECK2_VARARGS((VFunc)~A, runtime, statics, ~A, ~A" };
static struct { VBlob sym; char bytes[9]; } _V10string_D332 = { { VSTRING, 9 }, ", _arg~A" };
static struct { VBlob sym; char bytes[6]; } _V10string_D331 = { { VSTRING, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[24]; } _V10string_D330 = { { VSTRING, 24 }, "    VWORD _ret = ~A(~A(" };
static struct { VBlob sym; char bytes[6]; } _V10string_D329 = { { VSTRING, 6 }, "));~N" };
static struct { VBlob sym; char bytes[31]; } _V10string_D328 = { { VSTRING, 31 }, "  V_CALL(_k, runtime, _ret);~N" };
static struct { VBlob sym; char bytes[9]; } _V10string_D327 = { { VSTRING, 9 }, "  }~N}~N" };
static struct { VBlob sym; char bytes[3]; } _V10string_D326 = { { VSTRING, 3 }, ", " };
static struct { VBlob sym; char bytes[23]; } _V0resolve__foreign__import = { { VSYMBOL, 23 }, "resolve-foreign-import" };
static struct { VBlob sym; char bytes[23]; } _V0print__foreign__function = { { VSYMBOL, 23 }, "print-foreign-function" };
static struct { VBlob sym; char bytes[26]; } _V0validate__foreign__function = { { VSYMBOL, 26 }, "validate-foreign-function" };
static struct { VBlob sym; char bytes[24]; } _V0mangle__foreign__function = { { VSYMBOL, 24 }, "mangle-foreign-function" };
static void ffi_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k35, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.37 10 0) (##inline ##sys.cons (##inline ##sys.cons (quote mangle-foreign-function) (bruijn mangle-foreign-function 10 3)) (##inline ##sys.cons (##inline ##sys.cons (quote validate-foreign-function) (bruijn validate-foreign-function 10 7)) (##inline ##sys.cons (##inline ##sys.cons (quote print-foreign-function) (bruijn print-foreign-function 10 10)) (##inline ##sys.cons (##inline ##sys.cons (quote resolve-foreign-import) (bruijn resolve-foreign-import 10 9)) (quote ()))))))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0mangle__foreign__function.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 3)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0validate__foreign__function.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 7)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0print__foreign__function.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 10)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0resolve__foreign__import.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 9)
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
static void _V0print__foreign__function_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k42, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.68 1 0) (##inline ##sys.cdr (bruijn ##expr.29 5 0)) (quote ()))
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
static void _V0loop_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k44, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.32 4 1) (bruijn ##k.79 1 0) (bruijn ##expr.34 2 1) (bruijn ##x.80 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.34 1 1))) ((bruijn reverse 25 11) (close _V0loop_k44) (bruijn ##args.31 1 2)) ((bruijn ##k.79 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 25-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k44, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k47, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.32 7 1) (bruijn ##k.73 2 0) (bruijn ##expr.34 5 1) (bruijn ##x.75 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 28 11) (close _V0loop_k47) (bruijn ##args.31 4 2))
V_CALL(VGetArg(upenv, 28-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k47, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
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
  // ((bruijn ##kk.33 0 1) (close _V0loop_k46) (##inline ##sys.cdr (bruijn ##expr.34 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.34 3 1)) (bruijn ##args.31 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k46, env)}),
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
  // ((bruijn call/cc 26 10) (bruijn ##k.72 0 0) (close _V0loop_lambda13))
V_CALL(VGetArg(upenv, 26-1, 10), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda13, env)})
    );
 }
}
static void _V0loop_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 25 9) (bruijn ##k.70 1 0) (close _V0loop_lambda12) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 25-1, 9), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda12, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // ((close _V0loop_k43) (close _V0loop_k45))
V_CALL_FUNC(_V0loop_k43, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k45, env)})
    );
 }
}
static void _V0print__foreign__function_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0print__foreign__function_k42) (bruijn loop 0 1) (close _V0loop_lambda11))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k42, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda11, env)})
    );
 }
}
static void _V0print__foreign__function_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
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
  // ((close _V0print__foreign__function_lambda10) (bruijn ##k.67 0 0) #f)
V_CALL_FUNC(_V0print__foreign__function_lambda10, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0print__foreign__function_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn call/cc 21 10) (bruijn ##k.66 0 0) (close _V0print__foreign__function_lambda9))
V_CALL(VGetArg(upenv, 21-1, 10), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda9, env)})
    );
 }
}
static void _V0print__foreign__function_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k76, runtime, upenv, 1, argc, _var0) {
  // ((bruijn print-arg 27 1) (bruijn ##k.103 1 0) (bruijn arg 1 1) (bruijn argname 1 2))
V_CALL(VGetArg(upenv, 27-1, 1), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]
    );
 }
}
static void _V0print__foreign__function_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // ((bruijn printf 52 3) (close _V0print__foreign__function_k76) (##string ##string.326))
V_CALL(VGetArg(upenv, 52-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k76, env)}),
      VEncodePointer(&_V10string_D326.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn for-each 51 5) (bruijn ##k.101 5 0) (close _V0print__foreign__function_lambda17) (bruijn ##x.105 1 0) (bruijn ##x.106 0 0))
V_CALL(VGetArg(upenv, 51-1, 5), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda17, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__function_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn cdr 50 4) (close _V0print__foreign__function_k75) (bruijn names 25 2))
V_CALL(VGetArg(upenv, 50-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k75, env)}),
      VGetArg(upenv, 25-1, 2)
    );
 }
}
static void _V0print__foreign__function_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn cdr 49 4) (close _V0print__foreign__function_k74) (bruijn args 28 2))
V_CALL(VGetArg(upenv, 49-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k74, env)}),
      VGetArg(upenv, 28-1, 2)
    );
 }
}
static void _V0print__foreign__function_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn print-arg 22 1) (close _V0print__foreign__function_k73) (bruijn ##x.107 1 0) (bruijn ##x.108 0 0))
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k73, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__function_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn car 47 6) (close _V0print__foreign__function_k72) (bruijn names 22 2))
V_CALL(VGetArg(upenv, 47-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k72, env)}),
      VGetArg(upenv, 22-1, 2)
    );
 }
}
static void _V0print__foreign__function_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.100 1 0) ((bruijn car 46 6) (close _V0print__foreign__function_k71) (bruijn args 25 2)) ((bruijn ##k.101 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 46-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k71, env)}),
      VGetArg(upenv, 25-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__foreign__function_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k79, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 48 3) (bruijn ##k.86 22 0) (##string ##string.327))
V_CALL(VGetArg(upenv, 48-1, 3), runtime,
      VGetArg(upenv, 22-1, 0),
      VEncodePointer(&_V10string_D327.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn printf 47 3) (close _V0print__foreign__function_k79) (##string ##string.328))
V_CALL(VGetArg(upenv, 47-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k79, env)}),
      VEncodePointer(&_V10string_D328.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn printf 46 3) (close _V0print__foreign__function_k78) (##string ##string.329))
V_CALL(VGetArg(upenv, 46-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k78, env)}),
      VEncodePointer(&_V10string_D329.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((close _V0print__foreign__function_k70) (close _V0print__foreign__function_k77))
V_CALL_FUNC(_V0print__foreign__function_k70, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k77, env)})
    );
 }
}
static void _V0print__foreign__function_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn pair? 44 7) (close _V0print__foreign__function_k69) (bruijn args 23 2))
V_CALL(VGetArg(upenv, 44-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k69, env)}),
      VGetArg(upenv, 23-1, 2)
    );
 }
}
static void _V0print__foreign__function_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn printf 43 3) (close _V0print__foreign__function_k68) (##string ##string.330) (bruijn ##x.109 0 0) (bruijn name 23 0))
V_CALL(VGetArg(upenv, 43-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k68, env)}),
      VEncodePointer(&_V10string_D330.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 23-1, 0)
    );
 }
}
static void _V0print__foreign__function_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn cdr 42 4) (close _V0print__foreign__function_k67) (bruijn ##x.110 0 0))
V_CALL(VGetArg(upenv, 42-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k67, env)}),
      _var0
    );
 }
}
static void _V0print__foreign__function_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn get-encoder 40 1) (close _V0print__foreign__function_k66) (##inline ##sys.car (bruijn ##expr.28 23 0)))
V_CALL(VGetArg(upenv, 40-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k66, env)}),
      VInlineCar(
VGetArg(upenv, 23-1, 0)
    )

    );
 }
}
static void _V0print__foreign__function_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn printf 40 3) (close _V0print__foreign__function_k65) (##string ##string.331))
V_CALL(VGetArg(upenv, 40-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k65, env)}),
      VEncodePointer(&_V10string_D331.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__foreign__function_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 40 3) (bruijn ##k.111 0 0) (##string ##string.332) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 40-1, 3), runtime,
      _var0,
      VEncodePointer(&_V10string_D332.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0print__foreign__function_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn for-each 39 5) (close _V0print__foreign__function_k64) (close _V0print__foreign__function_lambda18) (bruijn names 14 2))
V_CALL(VGetArg(upenv, 39-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k64, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda18, env)}),
      VGetArg(upenv, 14-1, 2)
    );
 }
}
static void _V0print__foreign__function_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn printf 38 3) (close _V0print__foreign__function_k63) (##string ##string.333) (bruijn mangled 13 1) (bruijn ##x.112 2 0) (bruijn ##x.113 0 0))
V_CALL(VGetArg(upenv, 38-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k63, env)}),
      VEncodePointer(&_V10string_D333.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 1),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__function_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn + 37 8) (close _V0print__foreign__function_k62) 1 (bruijn ##x.114 0 0))
V_CALL(VGetArg(upenv, 37-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k62, env)}),
      VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0print__foreign__function_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn length 36 2) (close _V0print__foreign__function_k61) (bruijn args 15 2))
V_CALL(VGetArg(upenv, 36-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k61, env)}),
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0print__foreign__function_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 35 8) (close _V0print__foreign__function_k60) 1 (bruijn ##x.115 0 0))
V_CALL(VGetArg(upenv, 35-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k60, env)}),
      VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0print__foreign__function_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 34 2) (close _V0print__foreign__function_k59) (bruijn args 13 2))
V_CALL(VGetArg(upenv, 34-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k59, env)}),
      VGetArg(upenv, 13-1, 2)
    );
 }
}
static void _V0print__foreign__function_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 33 3) (close _V0print__foreign__function_k58) (##string ##string.334) (bruijn mangled 8 1) (bruijn ##x.116 0 0))
V_CALL(VGetArg(upenv, 33-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k58, env)}),
      VEncodePointer(&_V10string_D334.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1),
      _var0
    );
 }
}
static void _V0print__foreign__function_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 32 8) (close _V0print__foreign__function_k57) 1 (bruijn ##x.117 0 0))
V_CALL(VGetArg(upenv, 32-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k57, env)}),
      VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0print__foreign__function_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 31 2) (close _V0print__foreign__function_k56) (bruijn args 10 2))
V_CALL(VGetArg(upenv, 31-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k56, env)}),
      VGetArg(upenv, 10-1, 2)
    );
 }
}
static void _V0print__foreign__function_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn printf 30 3) (close _V0print__foreign__function_k55) (##string ##string.331))
V_CALL(VGetArg(upenv, 30-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k55, env)}),
      VEncodePointer(&_V10string_D331.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0print__foreign__function_lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn printf 30 3) (bruijn ##k.118 0 0) (##string ##string.335) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 30-1, 3), runtime,
      _var0,
      VEncodePointer(&_V10string_D335.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0print__foreign__function_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn for-each 29 5) (close _V0print__foreign__function_k54) (close _V0print__foreign__function_lambda19) (bruijn names 4 2))
V_CALL(VGetArg(upenv, 29-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k54, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda19, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0print__foreign__function_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn printf 28 3) (close _V0print__foreign__function_k53) (##string ##string.336) (bruijn name 8 0))
V_CALL(VGetArg(upenv, 28-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k53, env)}),
      VEncodePointer(&_V10string_D336.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 0)
    );
 }
}
static void _V0print__foreign__function_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn printf 27 3) (close _V0print__foreign__function_k52) (##string ##string.337) (##inline ##sys.car (bruijn ##expr.27 10 0)))
V_CALL(VGetArg(upenv, 27-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k52, env)}),
      VEncodePointer(&_V10string_D337.sym, VPOINTER_OTHER),
      VInlineCar(
VGetArg(upenv, 10-1, 0)
    )

    );
 }
}
static void _V0print__arg_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__arg_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__arg_k81, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printf 29 3) (bruijn ##k.119 2 0) (##string ##string.338) (bruijn ##x.120 0 0) (bruijn argname 2 2) (bruijn name 9 0))
V_CALL(VGetArg(upenv, 29-1, 3), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D338.sym, VPOINTER_OTHER),
      _var0,
      upenv->up->vars[2],
      VGetArg(upenv, 9-1, 0)
    );
 }
}
static void _V0print__arg_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__arg_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__arg_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 28 4) (close _V0print__arg_k81) (bruijn ##x.121 0 0))
V_CALL(VGetArg(upenv, 28-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__arg_k81, env)}),
      _var0
    );
 }
}
static void _V0print__arg_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // ((bruijn get-decoder 26 2) (close _V0print__arg_k80) (bruijn arg 0 1))
V_CALL(VGetArg(upenv, 26-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__arg_k80, env)}),
      _var1
    );
 }
}
static void _V0print__foreign__function_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0print__foreign__function_k51) (bruijn print-arg 0 1) (close _V0print__arg_lambda20))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k51, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__arg_lambda20, env)})
    );
 }
}
static void _V0print__foreign__function_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0print__foreign__function_lambda16) (bruijn ##k.85 0 0) #f)
V_CALL_FUNC(_V0print__foreign__function_lambda16, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0print__foreign__function_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k82, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 13 1) (bruijn ##k.82 4 0) (bruijn ##x.84 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__function_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((close _V0print__foreign__function_lambda15) (close _V0print__foreign__function_k82) (bruijn ##x.122 2 0) (bruijn ##x.123 0 0))
V_CALL_FUNC(_V0print__foreign__function_lambda15, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k82, env)}),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0print__foreign__function_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn iota 23 1) (close _V0print__foreign__function_k50) (bruijn ##x.124 0 0))
V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k50, env)}),
      _var0
    );
 }
}
static void _V0print__foreign__function_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn length 22 2) (close _V0print__foreign__function_k49) (bruijn args 1 2))
V_CALL(VGetArg(upenv, 22-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k49, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0print__foreign__function_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn mangle-foreign-function 20 3) (close _V0print__foreign__function_k48) (bruijn name 1 0)) ((bruijn ##k.82 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k48, env)}),
      upenv->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0print__foreign__function_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 20 9) (bruijn ##k.59 6 0) (close _V0print__foreign__function_lambda8) (close _V0print__foreign__function_lambda14))
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda8, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda14, env)})
    );
 }
}
static void _V0print__foreign__function_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.29 0 0)) ((close _V0print__foreign__function_k41) (##inline ##sys.car (bruijn ##expr.29 0 0))) ((bruijn ##k.59 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__foreign__function_k41, env, runtime,
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
static void _V0print__foreign__function_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 0)) ((close _V0print__foreign__function_k40) (##inline ##sys.cdr (bruijn ##expr.28 0 0))) ((bruijn ##k.59 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__foreign__function_k40, env, runtime,
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
static void _V0print__foreign__function_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 0)) ((close _V0print__foreign__function_k39) (##inline ##sys.cdr (bruijn ##expr.27 0 0))) ((bruijn ##k.59 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__foreign__function_k39, env, runtime,
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
static void _V0print__foreign__function_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 0)) ((close _V0print__foreign__function_k38) (##inline ##sys.cdr (bruijn ##expr.26 0 0))) ((bruijn ##k.59 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0print__foreign__function_k38, env, runtime,
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
static void _V0print__foreign__function_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.61 0 0) ((close _V0print__foreign__function_k37) (##inline ##sys.cdr (bruijn ##expr.25 1 1))) ((bruijn ##k.59 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0print__foreign__function_k37, env, runtime,
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
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 1)) ((bruijn equal? 14 12) (close _V0print__foreign__function_k36) (quote ##foreign.function) (##inline ##sys.car (bruijn ##expr.25 0 1))) ((bruijn ##k.59 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k36, env)}),
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
static void _V0print__foreign__function_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0print__foreign__function_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_k83, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 14 13) (bruijn ##k.57 1 0) (##string ##string.339))
V_CALL(VGetArg(upenv, 14-1, 13), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D339.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0print__foreign__function_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0print__foreign__function_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0print__foreign__function_lambda7) (close _V0print__foreign__function_k83) (bruijn ##input.24 0 1))
V_CALL_FUNC(_V0print__foreign__function_lambda7, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_k83, env)}),
      _var1
    );
 }
}
static void _V0print__foreign__function_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
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
  // ((close _V0print__foreign__function_lambda6) (bruijn ##k.56 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0print__foreign__function_lambda6, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0print__foreign__function_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
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
  // ((bruijn call/cc 11 10) (bruijn ##k.55 0 0) (close _V0print__foreign__function_lambda5))
V_CALL(VGetArg(upenv, 11-1, 10), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda5, env)})
    );
 }
}
static void ffi_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close ffi_k35) (bruijn print-foreign-function 9 10) (close _V0print__foreign__function_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k35, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0print__foreign__function_lambda4, env)})
    );
 }
}
static void _V0resolve__foreign__import_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k94, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.154 1 0) ((bruijn error 25 13) (bruijn ##k.155 0 0) (##string ##string.340) (bruijn expr 15 1)) ((bruijn ##k.155 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 25-1, 13), runtime,
      _var0,
      VEncodePointer(&_V10string_D340.sym, VPOINTER_OTHER),
      VGetArg(upenv, 15-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0resolve__foreign__import_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k98, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.151 1 0) ((bruijn error 28 13) (bruijn ##k.152 0 0) (##string ##string.341) (bruijn expr 18 1)) ((bruijn ##k.152 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 28-1, 13), runtime,
      _var0,
      VEncodePointer(&_V10string_D341.sym, VPOINTER_OTHER),
      VGetArg(upenv, 18-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0resolve__foreign__import_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k108, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.18 21 1) (bruijn ##k.134 19 0) (bruijn ##x.140 0 0))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VGetArg(upenv, 19-1, 0),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn cons 36 17) (close _V0resolve__foreign__import_k108) (##inline ##sys.cons (quote ##foreign.declare) (##inline ##sys.cons (bruijn ##x.148 1 0) (quote ()))) (bruijn ##x.146 0 0))
V_CALL(VGetArg(upenv, 36-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k108, env)}),
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
static void _V0resolve__foreign__import_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn unwrap-declares 34 8) (close _V0resolve__foreign__import_k107) (bruijn parse 3 0))
V_CALL(VGetArg(upenv, 34-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k107, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0resolve__foreign__import_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn sprintf 34 16) (close _V0resolve__foreign__import_k106) (##string ##string.342) (bruijn file 12 0))
V_CALL(VGetArg(upenv, 34-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k106, env)}),
      VEncodePointer(&_V10string_D342.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 0)
    );
 }
}
static void _V0resolve__foreign__import_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn close-port 33 18) (close _V0resolve__foreign__import_k105) (bruijn fd 3 0))
V_CALL(VGetArg(upenv, 33-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k105, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0resolve__foreign__import_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn release-parse 21 2) (close _V0resolve__foreign__import_k104))
V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k104, env)})
    );
 }
}
static void _V0resolve__foreign__import_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn deep-copy 30 4) (close _V0resolve__foreign__import_k103) (bruijn ##x.149 0 0))
V_CALL(VGetArg(upenv, 30-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k103, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn parse-header-c 19 1) (close _V0resolve__foreign__import_k102) (bruijn fd 0 0))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k102, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn open-input-file 29 14) (close _V0resolve__foreign__import_k101) (bruijn ##x.150 0 0))
V_CALL(VGetArg(upenv, 29-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k101, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-append 28 15) (close _V0resolve__foreign__import_k100) (bruijn path 18 2) (##string ##string.343) (bruijn file 6 0))
V_CALL(VGetArg(upenv, 28-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k100, env)}),
      VGetArg(upenv, 18-1, 2),
      VEncodePointer(&_V10string_D343.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0)
    );
 }
}
static void _V0resolve__foreign__import_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0resolve__foreign__import_k98) (close _V0resolve__foreign__import_k99))
V_CALL_FUNC(_V0resolve__foreign__import_k98, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k99, env)})
    );
 }
}
static void _V0resolve__foreign__import_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 26 19) (close _V0resolve__foreign__import_k97) (bruijn ##x.153 0 0))
V_CALL(VGetArg(upenv, 26-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k97, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string? 25 20) (close _V0resolve__foreign__import_k96) (bruijn file 3 0))
V_CALL(VGetArg(upenv, 25-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k96, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0resolve__foreign__import_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0resolve__foreign__import_k94) (close _V0resolve__foreign__import_k95))
V_CALL_FUNC(_V0resolve__foreign__import_k94, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k95, env)})
    );
 }
}
static void _V0resolve__foreign__import_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 23 19) (close _V0resolve__foreign__import_k93) (bruijn ##x.156 0 0))
V_CALL(VGetArg(upenv, 23-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k93, env)}),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 1 0))) ((bruijn equal? 22 12) (close _V0resolve__foreign__import_k92) (##inline ##sys.car (bruijn ##expr.21 2 0)) (##string ##string.344)) ((bruijn ##k.134 4 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 22-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k92, env)}),
      VInlineCar(
upenv->up->vars[0]
    )
,
      VEncodePointer(&_V10string_D344.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0resolve__foreign__import_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 0)) ((close _V0resolve__foreign__import_k91) (##inline ##sys.car (bruijn ##expr.22 0 0))) ((bruijn ##k.134 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0resolve__foreign__import_k91, env, runtime,
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
static void _V0resolve__foreign__import_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 0)) ((close _V0resolve__foreign__import_k90) (##inline ##sys.cdr (bruijn ##expr.21 0 0))) ((bruijn ##k.134 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0resolve__foreign__import_k90, env, runtime,
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
static void _V0resolve__foreign__import_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.136 0 0) ((close _V0resolve__foreign__import_k89) (##inline ##sys.cdr (bruijn ##expr.20 1 1))) ((bruijn ##k.134 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0resolve__foreign__import_k89, env, runtime,
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
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 1)) ((bruijn equal? 18 12) (close _V0resolve__foreign__import_k88) (quote ##foreign.import) (##inline ##sys.car (bruijn ##expr.20 0 1))) ((bruijn ##k.134 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k88, env)}),
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
static void _V0resolve__foreign__import_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k110, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.18 3 1) (bruijn ##k.131 2 0) (bruijn ##x.133 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn error 18 13) (close _V0resolve__foreign__import_k110) (##string ##string.345) (bruijn expr 8 1))
V_CALL(VGetArg(upenv, 18-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k110, env)}),
      VEncodePointer(&_V10string_D345.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0resolve__foreign__import_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0resolve__foreign__import_lambda25) (close _V0resolve__foreign__import_k109) (bruijn ##input.19 0 1))
V_CALL_FUNC(_V0resolve__foreign__import_lambda25, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k109, env)}),
      _var1
    );
 }
}
static void _V0resolve__foreign__import_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
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
  // ((close _V0resolve__foreign__import_lambda24) (bruijn ##k.130 0 0) (bruijn expr 6 1))
V_CALL_FUNC(_V0resolve__foreign__import_lambda24, env, runtime,
      _var0,
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0resolve__foreign__import_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 15 10) (bruijn ##k.127 4 0) (close _V0resolve__foreign__import_lambda23))
V_CALL(VGetArg(upenv, 15-1, 10), runtime,
      upenv->up->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_lambda23, env)})
    );
 }
}
static void _V0resolve__foreign__import_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0resolve__foreign__import_k87) (bruijn release-parse 3 2) (bruijn ##x.159 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k87, env)}),
      VEncodeInt(3l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.function (close _V0resolve__foreign__import_k86) (##string ##string.346))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k86, env)}),
      VEncodePointer(&_V10string_D346.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0resolve__foreign__import_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0resolve__foreign__import_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0resolve__foreign__import_k85) (bruijn parse-header-c 1 1) (bruijn ##x.160 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k85, env)}),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0resolve__foreign__import_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V0resolve__foreign__import_lambda22, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (##vcore.function (close _V0resolve__foreign__import_k84) (##string ##string.347))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_k84, env)}),
      VEncodePointer(&_V10string_D347.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0resolve__foreign__import_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // ((close _V0resolve__foreign__import_lambda22) (bruijn ##k.126 0 0) #f #f)
V_CALL_FUNC(_V0resolve__foreign__import_lambda22, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void ffi_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close ffi_k34) (bruijn resolve-foreign-import 8 9) (close _V0resolve__foreign__import_lambda21))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k34, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0resolve__foreign__import_lambda21, env)})
    );
 }
}
static void _V0unwrap__declares_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0unwrap__declares_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__declares_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.161 0 0) #f)
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
 }
}
static void ffi_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close ffi_k33) (bruijn unwrap-declares 7 8) (close _V0unwrap__declares_lambda26))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k33, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__declares_lambda26, env)})
    );
 }
}
static void _V0validate__foreign__function_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k122, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.182 1 0) ((bruijn error 24 13) (bruijn ##k.183 0 0) (##string ##string.340) (bruijn lang 4 0)) ((bruijn ##k.183 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 24-1, 13), runtime,
      _var0,
      VEncodePointer(&_V10string_D340.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0validate__foreign__function_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k127, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 13 1) (bruijn ##k.171 11 0) #f)
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodeBool(false)
    );
 }
}
static void _V0validate__foreign__function_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn release-parse 18 2) (close _V0validate__foreign__function_k127))
V_CALL(VGetArg(upenv, 18-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k127, env)})
    );
 }
}
static void _V0validate__foreign__function_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn is-one-function 17 3) (close _V0validate__foreign__function_k126) (bruijn ##x.180 0 0))
V_CALL(VGetArg(upenv, 17-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k126, env)}),
      _var0
    );
 }
}
static void _V0validate__foreign__function_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn deep-copy 24 4) (close _V0validate__foreign__function_k125) (bruijn ##x.181 0 0))
V_CALL(VGetArg(upenv, 24-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k125, env)}),
      _var0
    );
 }
}
static void _V0validate__foreign__function_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn parse-decl-c 15 1) (close _V0validate__foreign__function_k124) (##inline ##sys.car (bruijn ##expr.17 3 0)))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k124, env)}),
      VInlineCar(
upenv->up->up->vars[0]
    )

    );
 }
}
static void _V0validate__foreign__function_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0validate__foreign__function_k122) (close _V0validate__foreign__function_k123))
V_CALL_FUNC(_V0validate__foreign__function_k122, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k123, env)})
    );
 }
}
static void _V0validate__foreign__function_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 22 19) (close _V0validate__foreign__function_k121) (bruijn ##x.184 0 0))
V_CALL(VGetArg(upenv, 22-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k121, env)}),
      _var0
    );
 }
}
static void _V0validate__foreign__function_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.17 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.17 0 0))) ((bruijn equal? 21 12) (close _V0validate__foreign__function_k120) (bruijn lang 1 0) (##string ##string.344)) ((bruijn ##k.171 4 0) #f)) ((bruijn ##k.171 4 0) #f))
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
V_CALL(VGetArg(upenv, 21-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k120, env)}),
      upenv->vars[0],
      VEncodePointer(&_V10string_D344.sym, VPOINTER_OTHER)
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
static void _V0validate__foreign__function_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0validate__foreign__function_k119) (##inline ##sys.cdr (bruijn ##expr.16 1 0)))
V_CALL_FUNC(_V0validate__foreign__function_k119, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0validate__foreign__function_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.16 0 0)) ((close _V0validate__foreign__function_k118) (##inline ##sys.car (bruijn ##expr.16 0 0))) ((bruijn ##k.171 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0validate__foreign__function_k118, env, runtime,
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
static void _V0validate__foreign__function_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.173 0 0) ((close _V0validate__foreign__function_k117) (##inline ##sys.cdr (bruijn ##expr.15 1 1))) ((bruijn ##k.171 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0validate__foreign__function_k117, env, runtime,
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
static void _V0validate__foreign__function_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.15 0 1)) ((bruijn equal? 17 12) (close _V0validate__foreign__function_k116) (quote ##foreign.function) (##inline ##sys.car (bruijn ##expr.15 0 1))) ((bruijn ##k.171 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 17-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k116, env)}),
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
static void _V0validate__foreign__function_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k129, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.13 3 1) (bruijn ##k.168 2 0) (bruijn ##x.170 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0validate__foreign__function_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 17 13) (close _V0validate__foreign__function_k129) (##string ##string.348) (bruijn expr 9 1))
V_CALL(VGetArg(upenv, 17-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k129, env)}),
      VEncodePointer(&_V10string_D348.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0validate__foreign__function_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0validate__foreign__function_lambda31) (close _V0validate__foreign__function_k128) (bruijn ##input.14 0 1))
V_CALL_FUNC(_V0validate__foreign__function_lambda31, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k128, env)}),
      _var1
    );
 }
}
static void _V0validate__foreign__function_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0validate__foreign__function_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0validate__foreign__function_lambda30) (bruijn ##k.167 0 0) (bruijn expr 7 1))
V_CALL_FUNC(_V0validate__foreign__function_lambda30, env, runtime,
      _var0,
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0validate__foreign__function_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 14 10) (bruijn ##k.163 5 0) (close _V0validate__foreign__function_lambda29))
V_CALL(VGetArg(upenv, 14-1, 10), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_lambda29, env)})
    );
 }
}
static void _V0is__one__function_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0is__one__function_lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0is__one__function_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.187 0 0) #f)
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
 }
}
static void _V0validate__foreign__function_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0validate__foreign__function_k115) (bruijn is-one-function 4 3) (close _V0is__one__function_lambda32))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k115, env)}),
      VEncodeInt(4l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0is__one__function_lambda32, env)})
    );
 }
}
static void _V0validate__foreign__function_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0validate__foreign__function_k114) (bruijn release-parse 3 2) (bruijn ##x.188 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k114, env)}),
      VEncodeInt(3l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V0validate__foreign__function_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.function (close _V0validate__foreign__function_k113) (##string ##string.346))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k113, env)}),
      VEncodePointer(&_V10string_D346.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0validate__foreign__function_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__foreign__function_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0validate__foreign__function_k112) (bruijn parse-decl-c 1 1) (bruijn ##x.189 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k112, env)}),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0validate__foreign__function_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda28, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (##vcore.function (close _V0validate__foreign__function_k111) (##string ##string.349))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_k111, env)}),
      VEncodePointer(&_V10string_D349.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0validate__foreign__function_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0validate__foreign__function_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__foreign__function_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0validate__foreign__function_lambda28) (bruijn ##k.162 0 0) #f #f #f)
V_CALL_FUNC(_V0validate__foreign__function_lambda28, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void ffi_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close ffi_k32) (bruijn validate-foreign-function 6 7) (close _V0validate__foreign__function_lambda27))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k32, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__foreign__function_lambda27, env)})
    );
 }
}
static void _V0unwrap__function_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VError("Not enough arguments to _V0unwrap__function_lambda33, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0unwrap__function_lambda33, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  // ((bruijn ##k.190 0 0) #f)
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
 }
}
static void ffi_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close ffi_k31) (bruijn unwrap-function 5 6) (close _V0unwrap__function_lambda33))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k31, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0unwrap__function_lambda33, env)})
    );
 }
}
static void _V0validate__args_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k139, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.204 1 0) (##inline ##sys.cdr (bruijn ##expr.7 5 0)) (quote ()))
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
static void _V0loop_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k141, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.10 4 1) (bruijn ##k.215 1 0) (bruijn ##expr.12 2 1) (bruijn ##x.216 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.12 1 1))) ((bruijn reverse 23 11) (close _V0loop_k141) (bruijn ##args.9 1 2)) ((bruijn ##k.215 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 23-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k141, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k144, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.10 7 1) (bruijn ##k.209 2 0) (bruijn ##expr.12 5 1) (bruijn ##x.211 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 26 11) (close _V0loop_k144) (bruijn ##args.9 4 2))
V_CALL(VGetArg(upenv, 26-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k144, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.11 0 1) (close _V0loop_k143) (##inline ##sys.cdr (bruijn ##expr.12 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.12 3 1)) (bruijn ##args.9 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k143, env)}),
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
static void _V0loop_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 24 10) (bruijn ##k.208 0 0) (close _V0loop_lambda43))
V_CALL(VGetArg(upenv, 24-1, 10), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda43, env)})
    );
 }
}
static void _V0loop_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 23 9) (bruijn ##k.206 1 0) (close _V0loop_lambda42) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 23-1, 9), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda42, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda41, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda41, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k140) (close _V0loop_k142))
V_CALL_FUNC(_V0loop_k140, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k142, env)})
    );
 }
}
static void _V0validate__args_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_lambda40, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0validate__args_k139) (bruijn loop 0 1) (close _V0loop_lambda41))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k139, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda41, env)})
    );
 }
}
static void _V0validate__args_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0validate__args_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0validate__args_lambda40) (bruijn ##k.203 0 0) #f)
V_CALL_FUNC(_V0validate__args_lambda40, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0validate__args_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_lambda38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 10) (bruijn ##k.202 0 0) (close _V0validate__args_lambda39))
V_CALL(VGetArg(upenv, 19-1, 10), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_lambda39, env)})
    );
 }
}
static void _V0validate__args_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k147, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.238 1 0) ((bruijn error 22 13) (bruijn ##k.239 0 0) (##string ##string.350) (bruijn expr 16 1) (bruijn decl 8 0)) ((bruijn ##k.239 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 22-1, 13), runtime,
      _var0,
      VEncodePointer(&_V10string_D350.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 8-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0validate__args_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k151, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.235 1 0) ((bruijn error 25 13) (bruijn ##k.236 0 0) (##string ##string.340) (bruijn lang 13 0)) ((bruijn ##k.236 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 25-1, 13), runtime,
      _var0,
      VEncodePointer(&_V10string_D340.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0validate__args_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k155, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.232 1 0) ((bruijn error 28 13) (bruijn ##k.233 0 0) (##string ##string.351) (bruijn expr 22 1) (bruijn ret 12 0)) ((bruijn ##k.233 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 28-1, 13), runtime,
      _var0,
      VEncodePointer(&_V10string_D351.sym, VPOINTER_OTHER),
      VGetArg(upenv, 22-1, 1),
      VGetArg(upenv, 12-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0validate__args_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k159, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.229 1 0) ((bruijn error 31 13) (bruijn ##k.230 0 0) (##string ##string.352) (bruijn name 13 0)) ((bruijn ##k.230 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 31-1, 13), runtime,
      _var0,
      VEncodePointer(&_V10string_D352.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0validate__args_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k161, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 25 1) (bruijn ##k.218 13 0) (bruijn expr 26 1))
V_CALL(VGetArg(upenv, 25-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 26-1, 1)
    );
 }
}
static void _V0validate__args_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k163, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.227 0 0) ((bruijn error 34 13) (bruijn ##k.226 2 0) (##string ##string.353) (bruijn name 16 0) (bruijn arg 2 1)) ((bruijn ##k.226 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 34-1, 13), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D353.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 0),
      upenv->up->vars[1]
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0validate__args_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 33 19) (close _V0validate__args_k163) (bruijn ##x.228 0 0))
V_CALL(VGetArg(upenv, 33-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k163, env)}),
      _var0
    );
 }
}
static void _V0validate__args_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0validate__args_lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn get-decoder 31 2) (close _V0validate__args_k162) (bruijn arg 0 1))
V_CALL(VGetArg(upenv, 31-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k162, env)}),
      _var1
    );
 }
}
static void _V0validate__args_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn for-each 31 5) (close _V0validate__args_k161) (close _V0validate__args_lambda45) (bruijn args 12 2))
V_CALL(VGetArg(upenv, 31-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k161, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_lambda45, env)}),
      VGetArg(upenv, 12-1, 2)
    );
 }
}
static void _V0validate__args_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0validate__args_k159) (close _V0validate__args_k160))
V_CALL_FUNC(_V0validate__args_k159, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k160, env)})
    );
 }
}
static void _V0validate__args_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 29 19) (close _V0validate__args_k158) (bruijn ##x.231 0 0))
V_CALL(VGetArg(upenv, 29-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k158, env)}),
      _var0
    );
 }
}
static void _V0validate__args_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string? 28 20) (close _V0validate__args_k157) (bruijn name 10 0))
V_CALL(VGetArg(upenv, 28-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k157, env)}),
      VGetArg(upenv, 10-1, 0)
    );
 }
}
static void _V0validate__args_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0validate__args_k155) (close _V0validate__args_k156))
V_CALL_FUNC(_V0validate__args_k155, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k156, env)})
    );
 }
}
static void _V0validate__args_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 26 19) (close _V0validate__args_k154) (bruijn ##x.234 0 0))
V_CALL(VGetArg(upenv, 26-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k154, env)}),
      _var0
    );
 }
}
static void _V0validate__args_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn get-encoder 24 1) (close _V0validate__args_k153) (bruijn ret 9 0))
V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k153, env)}),
      VGetArg(upenv, 9-1, 0)
    );
 }
}
static void _V0validate__args_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0validate__args_k151) (close _V0validate__args_k152))
V_CALL_FUNC(_V0validate__args_k151, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k152, env)})
    );
 }
}
static void _V0validate__args_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 23 19) (close _V0validate__args_k150) (bruijn ##x.237 0 0))
V_CALL(VGetArg(upenv, 23-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k150, env)}),
      _var0
    );
 }
}
static void _V0validate__args_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn equal? 22 12) (close _V0validate__args_k149) (bruijn lang 10 0) (##string ##string.344))
V_CALL(VGetArg(upenv, 22-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k149, env)}),
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10string_D344.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0validate__args_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0validate__args_k147) (close _V0validate__args_k148))
V_CALL_FUNC(_V0validate__args_k147, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k148, env)})
    );
 }
}
static void _V0validate__args_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 20 19) (close _V0validate__args_k146) (bruijn ##x.240 0 0))
V_CALL(VGetArg(upenv, 20-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k146, env)}),
      _var0
    );
 }
}
static void _V0validate__args_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0validate__args_lambda44, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_lambda44, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn string? 19 20) (close _V0validate__args_k145) (bruijn decl 5 0)) ((bruijn ##k.218 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k145, env)}),
      VGetArg(upenv, 5-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0validate__args_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 18 9) (bruijn ##k.195 9 0) (close _V0validate__args_lambda38) (close _V0validate__args_lambda44))
V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      VGetArg(upenv, 9-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_lambda38, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_lambda44, env)})
    );
 }
}
static void _V0validate__args_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.7 0 0)) ((close _V0validate__args_k138) (##inline ##sys.car (bruijn ##expr.7 0 0))) ((bruijn ##k.195 8 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0validate__args_k138, env, runtime,
      VInlineCar(
_var0
    )

    );
} else {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0validate__args_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0validate__args_k137) (##inline ##sys.cdr (bruijn ##expr.6 1 0)))
V_CALL_FUNC(_V0validate__args_k137, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0validate__args_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.6 0 0)) ((close _V0validate__args_k136) (##inline ##sys.car (bruijn ##expr.6 0 0))) ((bruijn ##k.195 6 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0validate__args_k136, env, runtime,
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
static void _V0validate__args_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0validate__args_k135) (##inline ##sys.cdr (bruijn ##expr.5 1 0)))
V_CALL_FUNC(_V0validate__args_k135, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0validate__args_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.5 0 0)) ((close _V0validate__args_k134) (##inline ##sys.car (bruijn ##expr.5 0 0))) ((bruijn ##k.195 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0validate__args_k134, env, runtime,
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
static void _V0validate__args_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0validate__args_k133) (##inline ##sys.cdr (bruijn ##expr.4 1 0)))
V_CALL_FUNC(_V0validate__args_k133, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0validate__args_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 0)) ((close _V0validate__args_k132) (##inline ##sys.car (bruijn ##expr.4 0 0))) ((bruijn ##k.195 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0validate__args_k132, env, runtime,
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
static void _V0validate__args_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.197 0 0) ((close _V0validate__args_k131) (##inline ##sys.cdr (bruijn ##expr.3 1 1))) ((bruijn ##k.195 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0validate__args_k131, env, runtime,
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
static void _V0validate__args_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.3 0 1)) ((bruijn equal? 9 12) (close _V0validate__args_k130) (quote ##foreign.function) (##inline ##sys.car (bruijn ##expr.3 0 1))) ((bruijn ##k.195 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 9-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k130, env)}),
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
static void _V0validate__args_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0validate__args_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_k164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 9 13) (bruijn ##k.193 1 0) (##string ##string.339))
V_CALL(VGetArg(upenv, 9-1, 13), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D339.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0validate__args_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0validate__args_lambda37) (close _V0validate__args_k164) (bruijn ##input.2 0 1))
V_CALL_FUNC(_V0validate__args_lambda37, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_k164, env)}),
      _var1
    );
 }
}
static void _V0validate__args_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0validate__args_lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_lambda35, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0validate__args_lambda36) (bruijn ##k.192 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0validate__args_lambda36, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0validate__args_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0validate__args_lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0validate__args_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 6 10) (bruijn ##k.191 0 0) (close _V0validate__args_lambda35))
V_CALL(VGetArg(upenv, 6-1, 10), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_lambda35, env)})
    );
 }
}
static void ffi_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close ffi_k30) (bruijn validate-args 4 5) (close _V0validate__args_lambda34))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k30, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0validate__args_lambda34, env)})
    );
 }
}
static void _V0deep__copy_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k170, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 11 17) (bruijn ##k.242 6 0) (bruijn ##x.245 2 0) (bruijn ##x.246 0 0))
V_CALL(VGetArg(upenv, 11-1, 17), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0deep__copy_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn deep-copy 9 4) (close _V0deep__copy_k170) (bruijn ##x.247 0 0))
V_CALL(VGetArg(upenv, 9-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k170, env)}),
      _var0
    );
 }
}
static void _V0deep__copy_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 9 4) (close _V0deep__copy_k169) (bruijn x 4 1))
V_CALL(VGetArg(upenv, 9-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k169, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0deep__copy_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn deep-copy 7 4) (close _V0deep__copy_k168) (bruijn ##x.248 0 0))
V_CALL(VGetArg(upenv, 7-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k168, env)}),
      _var0
    );
 }
}
static void _V0deep__copy_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.244 0 0) ((bruijn car 7 6) (close _V0deep__copy_k167) (bruijn x 2 1)) ((bruijn ##k.242 2 0) (bruijn x 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k167, env)}),
      upenv->up->vars[1]
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[1]
    );
}
 }
}
static void _V0deep__copy_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0deep__copy_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.243 0 0) ((bruijn string-copy 6 21) (bruijn ##k.242 1 0) (bruijn x 1 1)) ((bruijn pair? 6 7) (close _V0deep__copy_k166) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 21), runtime,
      upenv->vars[0],
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k166, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0deep__copy_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0deep__copy_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deep__copy_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string? 5 20) (close _V0deep__copy_k165) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 5-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_k165, env)}),
      _var1
    );
 }
}
static void ffi_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close ffi_k29) (bruijn deep-copy 3 4) (close _V0deep__copy_lambda46))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k29, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deep__copy_lambda46, env)})
    );
 }
}
static void _V0mangle__foreign__function_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0mangle__foreign__function_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0mangle__foreign__function_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 4 16) (bruijn ##k.249 0 0) (##string ##string.354) (bruijn name 0 1))
V_CALL(upenv->up->up->up->vars[16], runtime,
      _var0,
      VEncodePointer(&_V10string_D354.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void ffi_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close ffi_k28) (bruijn mangle-foreign-function 2 3) (close _V0mangle__foreign__function_lambda47))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k28, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0mangle__foreign__function_lambda47, env)})
    );
 }
}
static void _V0get__decoder_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0get__decoder_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__decoder_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn assv 3 22) (bruijn ##k.250 0 0) (bruijn type 0 1) (##inline ##sys.qcons (##inline ##sys.qcons (quote bool) (quote (##string ##string.355))) (##inline ##sys.qcons (##inline ##sys.qcons (quote char) (quote (##string ##string.356))) (##inline ##sys.qcons (##inline ##sys.qcons (quote signed-char) (quote (##string ##string.357))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-char) (quote (##string ##string.358))) (##inline ##sys.qcons (##inline ##sys.qcons (quote short) (quote (##string ##string.359))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-short) (quote (##string ##string.360))) (##inline ##sys.qcons (##inline ##sys.qcons (quote int) (quote (##string ##string.361))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-int) (quote (##string ##string.361))) (##inline ##sys.qcons (##inline ##sys.qcons (quote long) (quote (##string ##string.362))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-long) (quote (##string ##string.363))) (##inline ##sys.qcons (##inline ##sys.qcons (quote double) (quote (##string ##string.364))) (##inline ##sys.qcons (##inline ##sys.qcons (quote float) (quote (##string ##string.364))) (##inline ##sys.qcons (##inline ##sys.qcons (quote vword) (quote (##string ##string.365))) (##inline ##sys.qcons (##inline ##sys.qcons (quote c-string) (quote (##string ##string.366))) (quote ()))))))))))))))))
V_CALL(upenv->up->up->vars[22], runtime,
      _var0,
      _var1,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0bool.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D355.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D356.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0signed__char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D357.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D358.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0short.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D359.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__short.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D360.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0int.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D361.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__int.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D361.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0long.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D362.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__long.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D363.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0double.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D364.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0float.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D364.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vword.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D365.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0c__string.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D366.sym, VPOINTER_OTHER)
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
static void ffi_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close ffi_k27) (bruijn get-decoder 1 2) (close _V0get__decoder_lambda48))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k27, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__decoder_lambda48, env)})
    );
 }
}
static void _V0get__encoder_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0get__encoder_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0get__encoder_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn assv 2 22) (bruijn ##k.279 0 0) (bruijn type 0 1) (##inline ##sys.qcons (##inline ##sys.qcons (quote bool) (quote (##string ##string.367))) (##inline ##sys.qcons (##inline ##sys.qcons (quote char) (quote (##string ##string.368))) (##inline ##sys.qcons (##inline ##sys.qcons (quote signed-char) (quote (##string ##string.369))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-char) (quote (##string ##string.369))) (##inline ##sys.qcons (##inline ##sys.qcons (quote short) (quote (##string ##string.369))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-short) (quote (##string ##string.369))) (##inline ##sys.qcons (##inline ##sys.qcons (quote int) (quote (##string ##string.369))) (##inline ##sys.qcons (##inline ##sys.qcons (quote unsigned-int) (quote (##string ##string.369))) (##inline ##sys.qcons (##inline ##sys.qcons (quote double) (quote (##string ##string.370))) (##inline ##sys.qcons (##inline ##sys.qcons (quote float) (quote (##string ##string.370))) (##inline ##sys.qcons (##inline ##sys.qcons (quote vword) (quote (##string ##string.371))) (quote ())))))))))))))
V_CALL(upenv->up->vars[22], runtime,
      _var0,
      _var1,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0bool.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D367.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D368.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0signed__char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D369.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__char.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D369.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0short.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D369.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__short.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D369.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0int.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D369.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0unsigned__int.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D369.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0double.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D370.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0float.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D370.sym, VPOINTER_OTHER)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0vword.sym, VPOINTER_OTHER),
      VEncodePointer(&_V10string_D371.sym, VPOINTER_OTHER)
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

    );
 }
}
static void ffi_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10) {
 V_GC_CHECK2_VARARGS((VFunc)ffi_lambda3, runtime, upenv, 11, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10) {
  struct { VEnv env; VWORD argv[11]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 11; env->var_len = 11; env->up = upenv;
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
  // (set! (close ffi_k26) (bruijn get-encoder 0 1) (close _V0get__encoder_lambda49))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k26, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0get__encoder_lambda49, env)})
    );
 }
}
static void ffi_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22) {
 V_GC_CHECK2_VARARGS((VFunc)ffi_lambda2, runtime, upenv, 23, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22) {
  struct { VEnv env; VWORD argv[23]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 23; env->var_len = 23; env->up = upenv;
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
  // ((close ffi_lambda3) (bruijn ##k.36 0 0) #f #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(ffi_lambda3, env, runtime,
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
      VEncodeBool(false)
    );
 }
}
static void ffi_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close ffi_lambda2) (bruijn ##k.35 25 0) (bruijn ##x.302 21 0) (bruijn ##x.303 20 0) (bruijn ##x.304 19 0) (bruijn ##x.305 18 0) (bruijn ##x.306 17 0) (bruijn ##x.307 16 0) (bruijn ##x.308 15 0) (bruijn ##x.309 14 0) (bruijn ##x.310 13 0) (bruijn ##x.311 12 0) (bruijn ##x.312 11 0) (bruijn ##x.313 10 0) (bruijn ##x.314 9 0) (bruijn ##x.315 8 0) (bruijn ##x.316 7 0) (bruijn ##x.317 6 0) (bruijn ##x.318 5 0) (bruijn ##x.319 4 0) (bruijn ##x.320 3 0) (bruijn ##x.321 2 0) (bruijn ##x.322 1 0) (bruijn ##x.323 0 0))
V_CALL_FUNC(ffi_lambda2, env, runtime,
      VGetArg(upenv, 25-1, 0),
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
static void ffi_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close ffi_k25) (quote assv))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k25, env)}),
      VEncodePointer(&_V0assv.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close ffi_k24) (quote string-copy))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k24, env)}),
      VEncodePointer(&_V0string__copy.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close ffi_k23) (quote string?))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k23, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close ffi_k22) (quote not))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k22, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close ffi_k21) (quote close-port))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k21, env)}),
      VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close ffi_k20) (quote cons))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k20, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close ffi_k19) (quote sprintf))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k19, env)}),
      VEncodePointer(&_V0sprintf.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close ffi_k18) (quote string-append))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k18, env)}),
      VEncodePointer(&_V0string__append.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close ffi_k17) (quote open-input-file))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k17, env)}),
      VEncodePointer(&_V0open__input__file.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close ffi_k16) (quote error))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k16, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close ffi_k15) (quote equal?))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k15, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close ffi_k14) (quote reverse))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k14, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close ffi_k13) (quote call/cc))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k13, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close ffi_k12) (quote call-with-values))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k12, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close ffi_k11) (quote +))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k11, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close ffi_k10) (quote pair?))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k10, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close ffi_k9) (quote car))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k9, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close ffi_k8) (quote for-each))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k8, env)}),
      VEncodePointer(&_V0for__each.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close ffi_k7) (quote cdr))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k7, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close ffi_k6) (quote printf))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k6, env)}),
      VEncodePointer(&_V0printf.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close ffi_k5) (quote length))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k5, env)}),
      VEncodePointer(&_V0length.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close ffi_k4) (quote iota))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k4, env)}),
      VEncodePointer(&_V0iota.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close ffi_k3) (##string ##string.372) (bruijn ##x.324 1 0) (bruijn ##x.325 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k3, env)}),
      VEncodePointer(&_V10string_D372.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0
    );
 }
}
static void ffi_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close ffi_k2) (##string ##string.373))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k2, env)}),
      VEncodePointer(&_V10string_D373.sym, VPOINTER_OTHER)
    );
 }
}
static void ffi_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to ffi_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)ffi_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close ffi_k1) (##string ##string.374))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)ffi_k1, env)}),
      VEncodePointer(&_V10string_D374.sym, VPOINTER_OTHER)
    );
 }
}
VFunc ffi = (VFunc)ffi_lambda1;
