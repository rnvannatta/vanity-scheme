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
static struct { VBlob sym; char bytes[21]; } _V10string_D2124 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[6]; } _V10string_D2123 = { { VSTRING, 6 }, "utils" };
static struct { VBlob sym; char bytes[6]; } _V10string_D2122 = { { VSTRING, 6 }, "match" };
static struct { VBlob sym; char bytes[10]; } _V10string_D2121 = { { VSTRING, 10 }, "variables" };
static struct { VBlob sym; char bytes[7]; } _V10string_D2120 = { { VSTRING, 7 }, "expand" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[7]; } _V0gensym = { { VSYMBOL, 7 }, "gensym" };
static struct { VBlob sym; char bytes[16]; } _V0transform__match = { { VSYMBOL, 16 }, "transform-match" };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[8]; } _V0reverse = { { VSYMBOL, 8 }, "reverse" };
static struct { VBlob sym; char bytes[8]; } _V0call_Wcc = { { VSYMBOL, 8 }, "call/cc" };
static struct { VBlob sym; char bytes[6]; } _V0atom_Q = { { VSYMBOL, 6 }, "atom\?" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[6]; } _V0apply = { { VSYMBOL, 6 }, "apply" };
static struct { VBlob sym; char bytes[15]; } _V0mangle__library = { { VSYMBOL, 15 }, "mangle-library" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[15]; } _V0free__variables = { { VSYMBOL, 15 }, "free-variables" };
static struct { VBlob sym; char bytes[5]; } _V0fold = { { VSYMBOL, 5 }, "fold" };
static struct { VBlob sym; char bytes[5]; } _V0cddr = { { VSYMBOL, 5 }, "cddr" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[2]; } _V0__ = { { VSYMBOL, 2 }, "-" };
static struct { VBlob sym; char bytes[2]; } _V0_E = { { VSYMBOL, 2 }, "=" };
static struct { VBlob sym; char bytes[17]; } _V0unquote__splicing = { { VSYMBOL, 17 }, "unquote-splicing" };
static struct { VBlob sym; char bytes[7]; } _V0append = { { VSYMBOL, 7 }, "append" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dcons = { { VSYMBOL, 11 }, "##sys.cons" };
static struct { VBlob sym; char bytes[8]; } _V0unquote = { { VSYMBOL, 8 }, "unquote" };
static struct { VBlob sym; char bytes[43]; } _V10string_D2119 = { { VSTRING, 43 }, "expressions not permitted in libraries yet" };
static struct { VBlob sym; char bytes[7]; } _V0export = { { VSYMBOL, 7 }, "export" };
static struct { VBlob sym; char bytes[41]; } _V10string_D2118 = { { VSTRING, 41 }, "imports to library must all be c strings" };
static struct { VBlob sym; char bytes[43]; } _V10string_D2117 = { { VSTRING, 43 }, "library has free variables but no imports:" };
static struct { VBlob sym; char bytes[20]; } _V10vcore_Dmake__import = { { VSYMBOL, 20 }, "##vcore.make-import" };
static struct { VBlob sym; char bytes[15]; } _V10vcore_Dimport = { { VSYMBOL, 15 }, "##vcore.import" };
static struct { VBlob sym; char bytes[20]; } _V10string_D2116 = { { VSTRING, 20 }, "duplicate in lambda" };
static struct { VBlob sym; char bytes[15]; } _V10string_D2115 = { { VSTRING, 15 }, "invalid lambda" };
static struct { VBlob sym; char bytes[20]; } _V10string_D2114 = { { VSTRING, 20 }, "invalid lambda args" };
static struct { VBlob sym; char bytes[14]; } _V10string_D2113 = { { VSTRING, 14 }, "malformed let" };
static struct { VBlob sym; char bytes[17]; } _V10string_D2112 = { { VSTRING, 17 }, "no matching case" };
static struct { VBlob sym; char bytes[49]; } _V10string_D2111 = { { VSTRING, 49 }, "##vcore.declare's first argument is not a string" };
static struct { VBlob sym; char bytes[61]; } _V10string_D2110 = { { VSTRING, 61 }, "##vcore.declare's second argument is not a lambda expression" };
static struct { VBlob sym; char bytes[17]; } _V10vcore_Dfunction = { { VSYMBOL, 17 }, "##vcore.function" };
static struct { VBlob sym; char bytes[3]; } _V0ok = { { VSYMBOL, 3 }, "ok" };
static struct { VBlob sym; char bytes[16]; } _V10vcore_Ddeclare = { { VSYMBOL, 16 }, "##vcore.declare" };
static struct { VBlob sym; char bytes[17]; } _V10string_D2109 = { { VSTRING, 17 }, "malformed define" };
static struct { VBlob sym; char bytes[40]; } _V10string_D2108 = { { VSTRING, 40 }, "define's first argument is not a symbol" };
static struct { VBlob sym; char bytes[21]; } _V10vcore_Dload__library = { { VSYMBOL, 21 }, "##vcore.load-library" };
static struct { VBlob sym; char bytes[20]; } _V10vcore_Dmultidefine = { { VSYMBOL, 20 }, "##vcore.multidefine" };
static struct { VBlob sym; char bytes[7]; } _V0import = { { VSYMBOL, 7 }, "import" };
static struct { VBlob sym; char bytes[25]; } _V10string_D2107 = { { VSTRING, 25 }, "malformed define-library" };
static struct { VBlob sym; char bytes[15]; } _V0define__library = { { VSYMBOL, 15 }, "define-library" };
static struct { VBlob sym; char bytes[27]; } _V10string_D2106 = { { VSTRING, 27 }, "stray null list in program" };
static struct { VBlob sym; char bytes[31]; } _V10string_D2105 = { { VSTRING, 31 }, "stray improper list in program" };
static struct { VBlob sym; char bytes[51]; } _V10string_D2104 = { { VSTRING, 51 }, "function application's first arg is not a function" };
static struct { VBlob sym; char bytes[6]; } _V0match = { { VSYMBOL, 6 }, "match" };
static struct { VBlob sym; char bytes[7]; } _V0define = { { VSYMBOL, 7 }, "define" };
static struct { VBlob sym; char bytes[24]; } _V10string_D2103 = { { VSTRING, 24 }, "stray define in program" };
static struct { VBlob sym; char bytes[15]; } _V10string_D2102 = { { VSTRING, 15 }, "malformed set!" };
static struct { VBlob sym; char bytes[38]; } _V10string_D2101 = { { VSTRING, 38 }, "set!'s first argument is not a symbol" };
static struct { VBlob sym; char bytes[14]; } _V10string_D2100 = { { VSTRING, 14 }, "malformed cut" };
static struct { VBlob sym; char bytes[6]; } _V0_L_D_D_D_G = { { VSYMBOL, 6 }, "<...>" };
static struct { VBlob sym; char bytes[39]; } _V10string_D2099 = { { VSTRING, 39 }, "cut: ellipses syntax not supported yet" };
static struct { VBlob sym; char bytes[3]; } _V0_L_G = { { VSYMBOL, 3 }, "<>" };
static struct { VBlob sym; char bytes[4]; } _V0cut = { { VSYMBOL, 4 }, "cut" };
static struct { VBlob sym; char bytes[9]; } _V0cut__iter = { { VSYMBOL, 9 }, "cut-iter" };
static struct { VBlob sym; char bytes[25]; } _V10string_D2098 = { { VSTRING, 25 }, "exhausted case statement" };
static struct { VBlob sym; char bytes[5]; } _V0eqv_Q = { { VSYMBOL, 5 }, "eqv\?" };
static struct { VBlob sym; char bytes[5]; } _V0case = { { VSYMBOL, 5 }, "case" };
static struct { VBlob sym; char bytes[10]; } _V0case__iter = { { VSYMBOL, 10 }, "case-iter" };
static struct { VBlob sym; char bytes[15]; } _V10string_D2097 = { { VSTRING, 15 }, "malformed cond" };
static struct { VBlob sym; char bytes[25]; } _V10string_D2096 = { { VSTRING, 25 }, "exhausted cond statement" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[3]; } _V0_E_G = { { VSYMBOL, 3 }, "=>" };
static struct { VBlob sym; char bytes[2]; } _V10string_D2095 = { { VSTRING, 2 }, "x" };
static struct { VBlob sym; char bytes[5]; } _V0cond = { { VSYMBOL, 5 }, "cond" };
static struct { VBlob sym; char bytes[5]; } _V0else = { { VSYMBOL, 5 }, "else" };
static struct { VBlob sym; char bytes[3]; } _V0or = { { VSYMBOL, 3 }, "or" };
static struct { VBlob sym; char bytes[4]; } _V0and = { { VSYMBOL, 4 }, "and" };
static struct { VBlob sym; char bytes[13]; } _V10string_D2094 = { { VSTRING, 13 }, "malformed if" };
static struct { VBlob sym; char bytes[3]; } _V0if = { { VSYMBOL, 3 }, "if" };
static struct { VBlob sym; char bytes[16]; } _V10string_D2093 = { { VSTRING, 16 }, "malformed begin" };
static struct { VBlob sym; char bytes[15]; } _V10string_D2092 = { { VSTRING, 15 }, "malformed let*" };
static struct { VBlob sym; char bytes[5]; } _V0let_S = { { VSYMBOL, 5 }, "let*" };
static struct { VBlob sym; char bytes[8]; } _V0letrec_S = { { VSYMBOL, 8 }, "letrec*" };
static struct { VBlob sym; char bytes[17]; } _V10string_D2091 = { { VSTRING, 17 }, "malformed letrec" };
static struct { VBlob sym; char bytes[5]; } _V0set_B = { { VSYMBOL, 5 }, "set!" };
static struct { VBlob sym; char bytes[7]; } _V0letrec = { { VSYMBOL, 7 }, "letrec" };
static struct { VBlob sym; char bytes[22]; } _V10string_D2090 = { { VSTRING, 22 }, "malformed let-values*" };
static struct { VBlob sym; char bytes[6]; } _V0begin = { { VSYMBOL, 6 }, "begin" };
static struct { VBlob sym; char bytes[12]; } _V0let_S__values = { { VSYMBOL, 12 }, "let*-values" };
static struct { VBlob sym; char bytes[17]; } _V0call__with__values = { { VSYMBOL, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[4]; } _V0let = { { VSYMBOL, 4 }, "let" };
static struct { VBlob sym; char bytes[6]; } _V0quote = { { VSYMBOL, 6 }, "quote" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dqcons = { { VSYMBOL, 12 }, "##sys.qcons" };
static struct { VBlob sym; char bytes[11]; } _V0quasiquote = { { VSYMBOL, 11 }, "quasiquote" };
static struct { VBlob sym; char bytes[22]; } _V10string_D2089 = { { VSTRING, 22 }, "malformed case-lambda" };
static struct { VBlob sym; char bytes[12]; } _V0case__lambda = { { VSYMBOL, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[7]; } _V0lambda = { { VSYMBOL, 7 }, "lambda" };
static struct { VBlob sym; char bytes[16]; } _V0expand__toplevel = { { VSYMBOL, 16 }, "expand-toplevel" };
static void expand_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k43" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k43, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.253 9 0) (##inline ##sys.cons (##inline ##sys.cons (quote expand-toplevel) (bruijn expand-toplevel 9 8)) (quote ())))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 0)), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0expand__toplevel.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 8)
    )
,
      VNULL
    )

    );
 }
}
static void _V0expand__syntax_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k47" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k47, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 6 1) (bruijn ##k.1286 4 0) (bruijn ##x.1289 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k46" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 16 1) (close _V0expand__syntax_k47) (quote lambda) (bruijn ##x.1290 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k47, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0expand__syntax_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k45" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-lambda 14 6) (close _V0expand__syntax_k46) (bruijn ##x.1291 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k46, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k44" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1288 0 0) ((bruijn cdr 14 2) (close _V0expand__syntax_k45) (bruijn expr 4 1)) ((bruijn ##k.1286 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k45, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda8" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.104 0 1)) ((bruijn equal? 13 7) (close _V0expand__syntax_k44) (quote lambda) (##inline ##sys.car (bruijn ##expr.104 0 1))) ((bruijn ##k.1286 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k44, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k50" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k50, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1265 1 0) (bruijn ##expr.106 4 1) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL
    );
 }
}
static void _V0loop_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda17" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.109 1 1) (bruijn ##k.1273 0 0) (##inline ##sys.cdr (bruijn ##expr.110 5 1)) (##inline ##sys.cons (bruijn lamb 0 1) (bruijn ##lamb.107 5 2)))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 5-1, 1)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 5-1, 2)
    )

    );
 }
}
static void _V0loop_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k54" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k54, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.108 8 1) (bruijn ##k.1270 2 0) (bruijn ##expr.110 6 1) (bruijn ##x.1272 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0
    );
 }
}
static void _V0loop_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k53" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 25 8) (close _V0loop_k54) (bruijn ##lamb.107 5 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k54, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda16" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda17) (close _V0loop_k53) (##inline ##sys.car (bruijn ##expr.110 4 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda17, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k53, env)}),
      VInlineCar(
upenv->up->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 23 9) (bruijn ##k.1269 0 0) (close _V0loop_lambda16))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda16, env)})
    );
 }
}
static void _V0loop_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k52" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 22 10) (bruijn ##k.1267 2 0) (close _V0loop_lambda15) (bruijn loop 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 10)), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda15, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k51" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.108 3 1) (close _V0loop_k52) (bruijn ##expr.110 1 1) (bruijn ##x.1278 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k52, env)}),
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0loop_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda20" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.109 1 1) (bruijn ##k.1273 0 0) (##inline ##sys.cdr (bruijn ##expr.110 3 1)) (##inline ##sys.cons (bruijn lamb 0 1) (bruijn ##lamb.107 3 2)))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      _var0,
      VInlineCdr(
upenv->up->up->vars[1]
    )
,
      VInlineCons(
_var1,
      upenv->up->up->vars[2]
    )

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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k56, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.108 6 1) (bruijn ##k.1270 2 0) (bruijn ##expr.110 4 1) (bruijn ##x.1272 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[1],
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 23 8) (close _V0loop_k56) (bruijn ##lamb.107 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k56, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda19" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda20) (close _V0loop_k55) (##inline ##sys.car (bruijn ##expr.110 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda20, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k55, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 21 9) (bruijn ##k.1269 0 0) (close _V0loop_lambda19))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda19, env)})
    );
 }
}
static void _V0loop_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda14" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda14, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.110 0 1))) ((bruijn reverse 20 8) (close _V0loop_k51) (bruijn ##lamb.107 0 2)) ((bruijn call-with-values 20 10) (bruijn ##k.1267 0 0) (close _V0loop_lambda18) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k51, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda18, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0expand__syntax_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda13" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0expand__syntax_k50) (bruijn loop 0 1) (close _V0loop_lambda14))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k50, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda14, env)})
    );
 }
}
static void _V0expand__syntax_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda12" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda13) (bruijn ##k.1264 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda13, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__syntax_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 17 9) (bruijn ##k.1263 0 0) (close _V0expand__syntax_lambda12))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda12, env)})
    );
 }
}
static void _V0expand__syntax_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k57" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k57, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 7 1) (bruijn ##k.1280 1 0) (##inline ##sys.cons (quote case-lambda) (bruijn ##x.1283 0 0)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->vars[0],
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      _var0
    )

    );
 }
}
static void _V0expand__syntax_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda21" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda21, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 17 14) (close _V0expand__syntax_k57) (bruijn expand-lambda 16 6) (bruijn lamb 0 2)) ((bruijn ##k.1280 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k57, env)}),
      VGetArg(upenv, 16-1, 6),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda10" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 16 10) (bruijn ##k.1262 0 0) (close _V0expand__syntax_lambda11) (close _V0expand__syntax_lambda21))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda11, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda21, env)})
    );
 }
}
static void _V0expand__syntax_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k49" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1261 0 0) ((close _V0expand__syntax_lambda10) (bruijn ##k.1259 1 0) (##inline ##sys.cdr (bruijn ##expr.105 1 1))) ((bruijn ##k.1259 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda10, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda9" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.105 0 1)) ((bruijn equal? 14 7) (close _V0expand__syntax_k49) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.105 0 1))) ((bruijn ##k.1259 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k49, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k60" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k60, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 6 1) (bruijn ##k.1254 2 0) (bruijn ##x.1257 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k59" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1256 0 0) ((bruijn error 16 15) (close _V0expand__syntax_k60) (##string ##string.2089) (bruijn expr 6 1)) ((bruijn ##k.1254 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k60, env)}),
      VEncodePointer(&_V10string_D2089.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda22" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.111 0 1)) ((bruijn equal? 15 7) (close _V0expand__syntax_k59) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.111 0 1))) ((bruijn ##k.1254 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k59, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k64" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k64, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 10 1) (bruijn ##k.1246 2 0) (bruijn ##x.1248 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k63" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 19 9) (close _V0expand__syntax_k64) (bruijn ##x.1249 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k64, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda25" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.113 1 1))) ((bruijn expand-quasiquote 18 2) (close _V0expand__syntax_k63) 1 (bruijn x 0 1)) ((bruijn ##k.1246 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k63, env)}),
      VEncodeInt(1l),
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.113 0 1)) ((close _V0expand__syntax_lambda25) (bruijn ##k.1244 0 0) (##inline ##sys.car (bruijn ##expr.113 0 1))) ((bruijn ##k.1244 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda25, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k62" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1243 0 0) ((close _V0expand__syntax_lambda24) (bruijn ##k.1241 1 0) (##inline ##sys.cdr (bruijn ##expr.112 1 1))) ((bruijn ##k.1241 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda24, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda23" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.112 0 1)) ((bruijn equal? 16 7) (close _V0expand__syntax_k62) (quote quasiquote) (##inline ##sys.car (bruijn ##expr.112 0 1))) ((bruijn ##k.1241 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k62, env)}),
      VEncodePointer(&_V0quasiquote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k67" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k67, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 12 1) (bruijn ##k.1225 1 0) (bruijn ##x.1227 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda30" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.115 3 1))) ((bruijn expand-syntax 21 9) (close _V0expand__syntax_k67) (##inline ##sys.cons (quote ##sys.qcons) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn a 1 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn b 0 1) (quote ()))) (quote ()))))) ((bruijn ##k.1225 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k67, env)}),
      VInlineCons(
VEncodePointer(&_V10sys_Dqcons.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[1],
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VNULL
    )

    )
,
      VNULL
    )

    )

    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda29" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda30) (bruijn ##k.1224 0 0) (##inline ##sys.cdr (bruijn ##expr.116 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda30, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda28" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.116 0 1)) ((close _V0expand__syntax_lambda29) (bruijn ##k.1222 0 0) (##inline ##sys.car (bruijn ##expr.116 0 1))) ((bruijn ##k.1222 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda29, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda27" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.115 0 1)) ((close _V0expand__syntax_lambda28) (bruijn ##k.1220 0 0) (##inline ##sys.car (bruijn ##expr.115 0 1))) ((bruijn ##k.1220 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda28, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k66" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1219 0 0) ((close _V0expand__syntax_lambda27) (bruijn ##k.1217 1 0) (##inline ##sys.cdr (bruijn ##expr.114 1 1))) ((bruijn ##k.1217 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda27, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda26" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.114 0 1)) ((bruijn equal? 17 7) (close _V0expand__syntax_k66) (quote quote) (##inline ##sys.car (bruijn ##expr.114 0 1))) ((bruijn ##k.1217 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k66, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda33" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda33, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.118 1 1))) ((bruijn ##kk.102 10 1) (bruijn ##k.1209 0 0) (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn x 0 1) (quote ())))) ((bruijn ##k.1209 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      _var0,
      VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VNULL
    )

    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda32" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.118 0 1)) ((close _V0expand__syntax_lambda33) (bruijn ##k.1207 0 0) (##inline ##sys.car (bruijn ##expr.118 0 1))) ((bruijn ##k.1207 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda33, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k69" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1206 0 0) ((close _V0expand__syntax_lambda32) (bruijn ##k.1204 1 0) (##inline ##sys.cdr (bruijn ##expr.117 1 1))) ((bruijn ##k.1204 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda32, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda31" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.117 0 1)) ((bruijn equal? 18 7) (close _V0expand__syntax_k69) (quote quote) (##inline ##sys.car (bruijn ##expr.117 0 1))) ((bruijn ##k.1204 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k69, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k73" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k73, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 11 1) (bruijn ##k.1198 3 0) (bruijn ##x.1201 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k72" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-let 20 7) (close _V0expand__syntax_k73) (bruijn ##x.1202 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k73, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k71" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1200 0 0) ((bruijn cdr 20 2) (close _V0expand__syntax_k72) (bruijn expr 10 1)) ((bruijn ##k.1198 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k72, env)}),
      VGetArg(upenv, 10-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda34" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.119 0 1)) ((bruijn equal? 19 7) (close _V0expand__syntax_k71) (quote let) (##inline ##sys.car (bruijn ##expr.119 0 1))) ((bruijn ##k.1198 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k71, env)}),
      VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k76" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k76, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 19 1) (bruijn ##k.1175 1 0) (bruijn ##x.1176 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda43" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 28 9) (close _V0expand__syntax_k76) (##inline ##sys.cons (quote call-with-values) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn producer 2 1) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 4 1) (##inline ##sys.cons (##inline ##sys.cons (quote let*-values) (##inline ##sys.cons (bruijn rest 1 1) (bruijn body 0 1))) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k76, env)}),
      VInlineCons(
VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
upenv->up->vars[1],
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0let_S__values.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[1],
      _var1
    )

    )
,
      VNULL
    )

    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda42" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda43) (bruijn ##k.1174 0 0) (##inline ##sys.cdr (bruijn ##expr.121 6 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda43, env)}, runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )

    );
 }
}
static void _V0expand__syntax_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda41" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.124 1 1))) ((close _V0expand__syntax_lambda42) (bruijn ##k.1172 0 0) (##inline ##sys.cdr (bruijn ##expr.122 4 1))) ((bruijn ##k.1172 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda42, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda40" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda40, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.124 0 1)) ((close _V0expand__syntax_lambda41) (bruijn ##k.1170 0 0) (##inline ##sys.car (bruijn ##expr.124 0 1))) ((bruijn ##k.1170 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda41, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda39" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda40) (bruijn ##k.1169 0 0) (##inline ##sys.cdr (bruijn ##expr.123 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda40, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda38" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.123 0 1)) ((close _V0expand__syntax_lambda39) (bruijn ##k.1167 0 0) (##inline ##sys.car (bruijn ##expr.123 0 1))) ((bruijn ##k.1167 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda39, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda37" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.122 0 1)) ((close _V0expand__syntax_lambda38) (bruijn ##k.1165 0 0) (##inline ##sys.car (bruijn ##expr.122 0 1))) ((bruijn ##k.1165 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda38, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda36" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 1)) ((close _V0expand__syntax_lambda37) (bruijn ##k.1163 0 0) (##inline ##sys.car (bruijn ##expr.121 0 1))) ((bruijn ##k.1163 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda37, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k75" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1162 0 0) ((close _V0expand__syntax_lambda36) (bruijn ##k.1160 1 0) (##inline ##sys.cdr (bruijn ##expr.120 1 1))) ((bruijn ##k.1160 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda36, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda35" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda35, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.120 0 1)) ((bruijn equal? 20 7) (close _V0expand__syntax_k75) (quote let*-values) (##inline ##sys.car (bruijn ##expr.120 0 1))) ((bruijn ##k.1160 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k75, env)}),
      VEncodePointer(&_V0let_S__values.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k79" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k79, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 14 1) (bruijn ##k.1153 1 0) (bruijn ##x.1154 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda46" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 23 9) (close _V0expand__syntax_k79) (##inline ##sys.cons (quote begin) (bruijn body 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k79, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__syntax_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda45" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.126 0 1)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.126 0 1))) ((close _V0expand__syntax_lambda46) (bruijn ##k.1150 0 0) (##inline ##sys.cdr (bruijn ##expr.126 0 1))) ((bruijn ##k.1150 0 0) #f)) ((bruijn ##k.1150 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCar(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda46, env)}, runtime,
      _var0,
      VInlineCdr(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k78" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1149 0 0) ((close _V0expand__syntax_lambda45) (bruijn ##k.1147 1 0) (##inline ##sys.cdr (bruijn ##expr.125 1 1))) ((bruijn ##k.1147 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda45, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda44" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.125 0 1)) ((bruijn equal? 21 7) (close _V0expand__syntax_k78) (quote let*-values) (##inline ##sys.car (bruijn ##expr.125 0 1))) ((bruijn ##k.1147 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k78, env)}),
      VEncodePointer(&_V0let_S__values.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k82" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k82, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 14 1) (bruijn ##k.1142 1 0) (bruijn ##x.1143 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda48" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn error 24 15) (close _V0expand__syntax_k82) (##string ##string.2090) (##inline ##sys.cons (quote letrec) (bruijn noise 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k82, env)}),
      VEncodePointer(&_V10string_D2090.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__syntax_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k81" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1141 0 0) ((close _V0expand__syntax_lambda48) (bruijn ##k.1139 1 0) (##inline ##sys.cdr (bruijn ##expr.127 1 1))) ((bruijn ##k.1139 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda48, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda47" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.127 0 1)) ((bruijn equal? 22 7) (close _V0expand__syntax_k81) (quote let*-values) (##inline ##sys.car (bruijn ##expr.127 0 1))) ((bruijn ##k.1139 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k81, env)}),
      VEncodePointer(&_V0let_S__values.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k85" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1093 1 0) (bruijn ##expr.130 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda61" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.137 1 1))) ((bruijn ##kk.134 4 1) (bruijn ##k.1107 0 0) (##inline ##sys.cdr (bruijn ##expr.135 9 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.131 9 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.132 9 3))) ((bruijn ##k.1107 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 9-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 9-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 9-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda60" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 1)) ((close _V0loop_lambda61) (bruijn ##k.1105 0 0) (##inline ##sys.car (bruijn ##expr.137 0 1))) ((bruijn ##k.1105 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda61, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda59" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda59, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda60) (bruijn ##k.1104 0 0) (##inline ##sys.cdr (bruijn ##expr.136 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda60, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda58" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.136 0 1)) ((close _V0loop_lambda59) (bruijn ##k.1102 0 0) (##inline ##sys.car (bruijn ##expr.136 0 1))) ((bruijn ##k.1102 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda59, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k91" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k91, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 10 1) (bruijn ##k.1098 3 0) (bruijn ##expr.135 8 1) (bruijn ##x.1100 1 0) (bruijn ##x.1101 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 8-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k90" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 37 8) (close _V0loop_k91) (bruijn ##vals.132 7 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 37-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k91, env)}),
      VGetArg(upenv, 7-1, 3)
    );
 }
}
static void _V0loop_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k89" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 36 8) (close _V0loop_k90) (bruijn ##xs.131 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 36-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k90, env)}),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda57" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda58) (close _V0loop_k89) (##inline ##sys.car (bruijn ##expr.135 5 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda58, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k89, env)}),
      VInlineCar(
VGetArg(upenv, 5-1, 1)
    )

    );
 }
}
static void _V0loop_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda56" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 34 9) (bruijn ##k.1097 0 0) (close _V0loop_lambda57))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda57, env)})
    );
 }
}
static void _V0loop_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k88" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 33 10) (bruijn ##k.1095 3 0) (close _V0loop_lambda56) (bruijn loop 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 10)), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda56, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k87" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.133 4 1) (close _V0loop_k88) (bruijn ##expr.135 2 1) (bruijn ##x.1118 1 0) (bruijn ##x.1119 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k88, env)}),
      upenv->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k86" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 31 8) (close _V0loop_k87) (bruijn ##vals.132 1 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k87, env)}),
      upenv->vars[3]
    );
 }
}
static void _V0loop_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda67" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.137 1 1))) ((bruijn ##kk.134 4 1) (bruijn ##k.1107 0 0) (##inline ##sys.cdr (bruijn ##expr.135 6 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.131 6 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.132 6 3))) ((bruijn ##k.1107 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 6-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 6-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda66" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda66, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 1)) ((close _V0loop_lambda67) (bruijn ##k.1105 0 0) (##inline ##sys.car (bruijn ##expr.137 0 1))) ((bruijn ##k.1105 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda67, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda65" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda65, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda66) (bruijn ##k.1104 0 0) (##inline ##sys.cdr (bruijn ##expr.136 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda66, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda64" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda64, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.136 0 1)) ((close _V0loop_lambda65) (bruijn ##k.1102 0 0) (##inline ##sys.car (bruijn ##expr.136 0 1))) ((bruijn ##k.1102 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda65, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k94" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k94, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 7 1) (bruijn ##k.1098 3 0) (bruijn ##expr.135 5 1) (bruijn ##x.1100 1 0) (bruijn ##x.1101 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k93" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 34 8) (close _V0loop_k94) (bruijn ##vals.132 4 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k94, env)}),
      upenv->up->up->up->vars[3]
    );
 }
}
static void _V0loop_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k92" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 33 8) (close _V0loop_k93) (bruijn ##xs.131 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k93, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda63" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda63, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda64) (close _V0loop_k92) (##inline ##sys.car (bruijn ##expr.135 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda64, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k92, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda62" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 31 9) (bruijn ##k.1097 0 0) (close _V0loop_lambda63))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda63, env)})
    );
 }
}
static void _V0loop_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda55" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda55, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda55, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.135 0 1))) ((bruijn reverse 30 8) (close _V0loop_k86) (bruijn ##xs.131 0 2)) ((bruijn call-with-values 30 10) (bruijn ##k.1095 0 0) (close _V0loop_lambda62) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k86, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda62, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0expand__syntax_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda54" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0expand__syntax_k85) (bruijn loop 0 1) (close _V0loop_lambda55))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k85, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda55, env)})
    );
 }
}
static void _V0expand__syntax_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda53" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda54) (bruijn ##k.1092 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda54, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__syntax_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda52" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 27 9) (bruijn ##k.1091 0 0) (close _V0expand__syntax_lambda53))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda53, env)})
    );
 }
}
static void _V0expand__syntax_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k98" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k98, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 21 1) (bruijn ##k.1123 4 0) (bruijn ##x.1124 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k97" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 30 9) (close _V0expand__syntax_k98) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 4 2) (bruijn ##x.1130 1 0))) (bruijn ##x.1127 0 0)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k98, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->up->vars[2],
      upenv->vars[0]
    )

    )
,
      _var0
    )

    );
 }
}
static void _V0expand__syntax_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda70" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1128 0 0) #f)
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__syntax_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k96" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 30 14) (close _V0expand__syntax_k97) (close _V0expand__syntax_lambda70) (bruijn xs 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k97, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda70, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0expand__syntax_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k95" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append 29 3) (close _V0expand__syntax_k96) (bruijn ##x.1131 0 0) (bruijn body 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k96, env)}),
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0expand__syntax_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda71" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda71, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda71, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##k.1132 0 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn x 0 1) (##inline ##sys.cons (bruijn val 0 2) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VInlineCons(
VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VInlineCons(
_var2,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda69" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda69, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 28 14) (close _V0expand__syntax_k95) (close _V0expand__syntax_lambda71) (bruijn xs 1 2) (bruijn vals 1 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k95, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda71, env)}),
      upenv->vars[2],
      upenv->vars[3]
    );
 }
}
static void _V0expand__syntax_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda68" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0expand__syntax_lambda68, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda68, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0expand__syntax_lambda69) (bruijn ##k.1121 0 0) (##inline ##sys.cdr (bruijn ##expr.129 2 1))) ((bruijn ##k.1121 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda69, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda51" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 26 10) (bruijn ##k.1090 0 0) (close _V0expand__syntax_lambda52) (close _V0expand__syntax_lambda68))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda52, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda68, env)})
    );
 }
}
static void _V0expand__syntax_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda50" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.129 0 1)) ((close _V0expand__syntax_lambda51) (bruijn ##k.1088 0 0) (##inline ##sys.car (bruijn ##expr.129 0 1))) ((bruijn ##k.1088 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda51, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k84" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1087 0 0) ((close _V0expand__syntax_lambda50) (bruijn ##k.1085 1 0) (##inline ##sys.cdr (bruijn ##expr.128 1 1))) ((bruijn ##k.1085 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda50, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda49" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.128 0 1)) ((bruijn equal? 23 7) (close _V0expand__syntax_k84) (quote letrec) (##inline ##sys.car (bruijn ##expr.128 0 1))) ((bruijn ##k.1085 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k84, env)}),
      VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k101" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k101, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 16 1) (bruijn ##k.1080 1 0) (bruijn ##x.1081 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda73" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda73, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn error 26 15) (close _V0expand__syntax_k101) (##string ##string.2091) (##inline ##sys.cons (quote letrec) (bruijn noise 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k101, env)}),
      VEncodePointer(&_V10string_D2091.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__syntax_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k100" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1079 0 0) ((close _V0expand__syntax_lambda73) (bruijn ##k.1077 1 0) (##inline ##sys.cdr (bruijn ##expr.138 1 1))) ((bruijn ##k.1077 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda73, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda72" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda72, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.138 0 1)) ((bruijn equal? 24 7) (close _V0expand__syntax_k100) (quote letrec) (##inline ##sys.car (bruijn ##expr.138 0 1))) ((bruijn ##k.1077 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k100, env)}),
      VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k104" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k104, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 17 1) (bruijn ##k.1072 1 0) (bruijn ##x.1073 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda75" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda75, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 26 9) (close _V0expand__syntax_k104) (##inline ##sys.cons (quote letrec) (bruijn rest 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k104, env)}),
      VInlineCons(
VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__syntax_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k103" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1071 0 0) ((close _V0expand__syntax_lambda75) (bruijn ##k.1069 1 0) (##inline ##sys.cdr (bruijn ##expr.139 1 1))) ((bruijn ##k.1069 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda75, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda74" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda74, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.139 0 1)) ((bruijn equal? 25 7) (close _V0expand__syntax_k103) (quote letrec*) (##inline ##sys.car (bruijn ##expr.139 0 1))) ((bruijn ##k.1069 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k103, env)}),
      VEncodePointer(&_V0letrec_S.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k107" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k107, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1032 1 0) (bruijn ##expr.145 4 1) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL
    );
 }
}
static void _V0loop_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda90" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda90, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.148 1 1) (bruijn ##k.1040 0 0) (##inline ##sys.cdr (bruijn ##expr.149 5 1)) (##inline ##sys.cons (bruijn rest 0 1) (bruijn ##rest.146 5 2)))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 5-1, 1)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 5-1, 2)
    )

    );
 }
}
static void _V0loop_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k111" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k111, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.147 8 1) (bruijn ##k.1037 2 0) (bruijn ##expr.149 6 1) (bruijn ##x.1039 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0
    );
 }
}
static void _V0loop_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k110" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 43 8) (close _V0loop_k111) (bruijn ##rest.146 5 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k111, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda89" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda89, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda89, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda90) (close _V0loop_k110) (##inline ##sys.car (bruijn ##expr.149 4 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda90, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k110, env)}),
      VInlineCar(
upenv->up->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda88" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 41 9) (bruijn ##k.1036 0 0) (close _V0loop_lambda89))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda89, env)})
    );
 }
}
static void _V0loop_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k109" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 40 10) (bruijn ##k.1034 2 0) (close _V0loop_lambda88) (bruijn loop 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 40-1, 10)), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda88, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k108" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.147 3 1) (close _V0loop_k109) (bruijn ##expr.149 1 1) (bruijn ##x.1045 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k109, env)}),
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0loop_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda93" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.148 1 1) (bruijn ##k.1040 0 0) (##inline ##sys.cdr (bruijn ##expr.149 3 1)) (##inline ##sys.cons (bruijn rest 0 1) (bruijn ##rest.146 3 2)))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      _var0,
      VInlineCdr(
upenv->up->up->vars[1]
    )
,
      VInlineCons(
_var1,
      upenv->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k113" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k113, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.147 6 1) (bruijn ##k.1037 2 0) (bruijn ##expr.149 4 1) (bruijn ##x.1039 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k112" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 41 8) (close _V0loop_k113) (bruijn ##rest.146 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k113, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda92" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda93) (close _V0loop_k112) (##inline ##sys.car (bruijn ##expr.149 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda93, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k112, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda91" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 39 9) (bruijn ##k.1036 0 0) (close _V0loop_lambda92))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 39-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda92, env)})
    );
 }
}
static void _V0loop_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda87" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda87, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda87, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.149 0 1))) ((bruijn reverse 38 8) (close _V0loop_k108) (bruijn ##rest.146 0 2)) ((bruijn call-with-values 38 10) (bruijn ##k.1034 0 0) (close _V0loop_lambda91) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 38-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k108, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 38-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda91, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0expand__syntax_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda86" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0expand__syntax_k107) (bruijn loop 0 1) (close _V0loop_lambda87))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k107, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda87, env)})
    );
 }
}
static void _V0expand__syntax_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda85" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda86) (bruijn ##k.1031 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda86, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__syntax_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda84" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 35 9) (bruijn ##k.1030 0 0) (close _V0expand__syntax_lambda85))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda85, env)})
    );
 }
}
static void _V0expand__syntax_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k114" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k114, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 26 1) (bruijn ##k.1049 1 0) (bruijn ##x.1050 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda95" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda95, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 35 9) (close _V0expand__syntax_k114) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn x 5 1) (##inline ##sys.cons (bruijn val 3 1) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let*) (##inline ##sys.cons (bruijn rest 1 2) (bruijn body 0 1))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k114, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(upenv, 5-1, 1),
      VInlineCons(
upenv->up->up->vars[1],
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0let_S.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[2],
      _var1
    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda94" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda94, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda94, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0expand__syntax_lambda95) (bruijn ##k.1047 0 0) (##inline ##sys.cdr (bruijn ##expr.141 7 1))) ((bruijn ##k.1047 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda95, env)}, runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 7-1, 1)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda83" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 34 10) (bruijn ##k.1029 0 0) (close _V0expand__syntax_lambda84) (close _V0expand__syntax_lambda94))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda84, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda94, env)})
    );
 }
}
static void _V0expand__syntax_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda82" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda82, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.144 1 1))) ((close _V0expand__syntax_lambda83) (bruijn ##k.1027 0 0) (##inline ##sys.cdr (bruijn ##expr.142 4 1))) ((bruijn ##k.1027 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda83, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda81" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.144 0 1)) ((close _V0expand__syntax_lambda82) (bruijn ##k.1025 0 0) (##inline ##sys.car (bruijn ##expr.144 0 1))) ((bruijn ##k.1025 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda82, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda80" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda80, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda81) (bruijn ##k.1024 0 0) (##inline ##sys.cdr (bruijn ##expr.143 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda81, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda79" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.143 0 1)) ((close _V0expand__syntax_lambda80) (bruijn ##k.1022 0 0) (##inline ##sys.car (bruijn ##expr.143 0 1))) ((bruijn ##k.1022 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda80, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda78" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.142 0 1)) ((close _V0expand__syntax_lambda79) (bruijn ##k.1020 0 0) (##inline ##sys.car (bruijn ##expr.142 0 1))) ((bruijn ##k.1020 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda79, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda77" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda77, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.141 0 1)) ((close _V0expand__syntax_lambda78) (bruijn ##k.1018 0 0) (##inline ##sys.car (bruijn ##expr.141 0 1))) ((bruijn ##k.1018 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda78, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k106" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1017 0 0) ((close _V0expand__syntax_lambda77) (bruijn ##k.1015 1 0) (##inline ##sys.cdr (bruijn ##expr.140 1 1))) ((bruijn ##k.1015 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda77, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda76" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda76, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.140 0 1)) ((bruijn equal? 26 7) (close _V0expand__syntax_k106) (quote let*) (##inline ##sys.car (bruijn ##expr.140 0 1))) ((bruijn ##k.1015 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k106, env)}),
      VEncodePointer(&_V0let_S.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k117" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k117, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 20 1) (bruijn ##k.1008 1 0) (bruijn ##x.1009 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda98" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 29 9) (close _V0expand__syntax_k117) (##inline ##sys.cons (quote begin) (bruijn body 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k117, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__syntax_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda97" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda97, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.151 0 1)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.151 0 1))) ((close _V0expand__syntax_lambda98) (bruijn ##k.1005 0 0) (##inline ##sys.cdr (bruijn ##expr.151 0 1))) ((bruijn ##k.1005 0 0) #f)) ((bruijn ##k.1005 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCar(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda98, env)}, runtime,
      _var0,
      VInlineCdr(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k116" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1004 0 0) ((close _V0expand__syntax_lambda97) (bruijn ##k.1002 1 0) (##inline ##sys.cdr (bruijn ##expr.150 1 1))) ((bruijn ##k.1002 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda97, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda96" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.150 0 1)) ((bruijn equal? 27 7) (close _V0expand__syntax_k116) (quote let*) (##inline ##sys.car (bruijn ##expr.150 0 1))) ((bruijn ##k.1002 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k116, env)}),
      VEncodePointer(&_V0let_S.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k120" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k120, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 20 1) (bruijn ##k.997 1 0) (bruijn ##x.998 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda100" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn error 30 15) (close _V0expand__syntax_k120) (##string ##string.2092) (##inline ##sys.cons (quote let*) (bruijn noise 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k120, env)}),
      VEncodePointer(&_V10string_D2092.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0let_S.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__syntax_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k119" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.996 0 0) ((close _V0expand__syntax_lambda100) (bruijn ##k.994 1 0) (##inline ##sys.cdr (bruijn ##expr.152 1 1))) ((bruijn ##k.994 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda100, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda99" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda99, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.152 0 1)) ((bruijn equal? 28 7) (close _V0expand__syntax_k119) (quote let*) (##inline ##sys.car (bruijn ##expr.152 0 1))) ((bruijn ##k.994 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k119, env)}),
      VEncodePointer(&_V0let_S.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k123" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k123, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 22 1) (bruijn ##k.987 1 0) (bruijn ##x.989 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda103" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda103, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.154 1 1))) ((bruijn expand-syntax 31 9) (close _V0expand__syntax_k123) (bruijn x 0 1)) ((bruijn ##k.987 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k123, env)}),
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda102" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda102, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.154 0 1)) ((close _V0expand__syntax_lambda103) (bruijn ##k.985 0 0) (##inline ##sys.car (bruijn ##expr.154 0 1))) ((bruijn ##k.985 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda103, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k122" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.984 0 0) ((close _V0expand__syntax_lambda102) (bruijn ##k.982 1 0) (##inline ##sys.cdr (bruijn ##expr.153 1 1))) ((bruijn ##k.982 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda102, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda101" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.153 0 1)) ((bruijn equal? 29 7) (close _V0expand__syntax_k122) (quote begin) (##inline ##sys.car (bruijn ##expr.153 0 1))) ((bruijn ##k.982 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k122, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k127" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k127, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 26 1) (bruijn ##k.969 2 0) (##inline ##sys.cons (quote begin) (##inline ##sys.cons (bruijn ##x.973 1 0) (##inline ##sys.cons (bruijn ##x.975 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 1)), runtime,
      upenv->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k126" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 35 9) (close _V0expand__syntax_k127) (bruijn y 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k127, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__syntax_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda108" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda108, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.157 1 1))) ((bruijn expand-syntax 34 9) (close _V0expand__syntax_k126) (bruijn x 2 1)) ((bruijn ##k.969 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k126, env)}),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda107" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda107, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.157 0 1)) ((close _V0expand__syntax_lambda108) (bruijn ##k.967 0 0) (##inline ##sys.car (bruijn ##expr.157 0 1))) ((bruijn ##k.967 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda108, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda106" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda106, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda107) (bruijn ##k.966 0 0) (##inline ##sys.cdr (bruijn ##expr.156 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda107, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda105" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.156 0 1)) ((close _V0expand__syntax_lambda106) (bruijn ##k.964 0 0) (##inline ##sys.car (bruijn ##expr.156 0 1))) ((bruijn ##k.964 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda106, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k125" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.963 0 0) ((close _V0expand__syntax_lambda105) (bruijn ##k.961 1 0) (##inline ##sys.cdr (bruijn ##expr.155 1 1))) ((bruijn ##k.961 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda105, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda104" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.155 0 1)) ((bruijn equal? 30 7) (close _V0expand__syntax_k125) (quote begin) (##inline ##sys.car (bruijn ##expr.155 0 1))) ((bruijn ##k.961 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k125, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k130" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k130, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 25 1) (bruijn ##k.951 1 0) (bruijn ##x.952 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda112" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda112, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 34 9) (close _V0expand__syntax_k130) (##inline ##sys.cons (quote begin) (##inline ##sys.cons (bruijn x 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (bruijn y 0 1)) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k130, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      _var1
    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda111" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda111, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda112) (bruijn ##k.950 0 0) (##inline ##sys.cdr (bruijn ##expr.159 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda112, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda110" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda110, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.159 0 1)) ((close _V0expand__syntax_lambda111) (bruijn ##k.948 0 0) (##inline ##sys.car (bruijn ##expr.159 0 1))) ((bruijn ##k.948 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda111, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k129" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.947 0 0) ((close _V0expand__syntax_lambda110) (bruijn ##k.945 1 0) (##inline ##sys.cdr (bruijn ##expr.158 1 1))) ((bruijn ##k.945 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda110, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda109" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.158 0 1)) ((bruijn equal? 31 7) (close _V0expand__syntax_k129) (quote begin) (##inline ##sys.car (bruijn ##expr.158 0 1))) ((bruijn ##k.945 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k129, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k133" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k133, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 24 1) (bruijn ##k.940 1 0) (bruijn ##x.941 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda114" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn error 34 15) (close _V0expand__syntax_k133) (##string ##string.2093) (##inline ##sys.cons (quote begin) (bruijn noise 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k133, env)}),
      VEncodePointer(&_V10string_D2093.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__syntax_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k132" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.939 0 0) ((close _V0expand__syntax_lambda114) (bruijn ##k.937 1 0) (##inline ##sys.cdr (bruijn ##expr.160 1 1))) ((bruijn ##k.937 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda114, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda113" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda113, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.160 0 1)) ((bruijn equal? 32 7) (close _V0expand__syntax_k132) (quote begin) (##inline ##sys.car (bruijn ##expr.160 0 1))) ((bruijn ##k.937 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k132, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k136" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k136, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 28 1) (bruijn ##k.924 1 0) (bruijn ##x.926 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda119" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda119, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.163 1 1))) ((bruijn expand-syntax 37 9) (close _V0expand__syntax_k136) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 2 1) (##inline ##sys.cons (bruijn x 0 1) (##inline ##sys.cons (quote #f) (quote ())))))) ((bruijn ##k.924 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 37-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k136, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->vars[1],
      VInlineCons(
_var1,
      VInlineCons(
VEncodeBool(false),
      VNULL
    )

    )

    )

    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda118" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda118, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.163 0 1)) ((close _V0expand__syntax_lambda119) (bruijn ##k.922 0 0) (##inline ##sys.car (bruijn ##expr.163 0 1))) ((bruijn ##k.922 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda119, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda117" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda117, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda118) (bruijn ##k.921 0 0) (##inline ##sys.cdr (bruijn ##expr.162 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda118, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda116" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda116, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.162 0 1)) ((close _V0expand__syntax_lambda117) (bruijn ##k.919 0 0) (##inline ##sys.car (bruijn ##expr.162 0 1))) ((bruijn ##k.919 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda117, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k135" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.918 0 0) ((close _V0expand__syntax_lambda116) (bruijn ##k.916 1 0) (##inline ##sys.cdr (bruijn ##expr.161 1 1))) ((bruijn ##k.916 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda116, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda115" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda115, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.161 0 1)) ((bruijn equal? 33 7) (close _V0expand__syntax_k135) (quote if) (##inline ##sys.car (bruijn ##expr.161 0 1))) ((bruijn ##k.916 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k135, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k141" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k141, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 33 1) (bruijn ##k.899 3 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn ##x.903 2 0) (##inline ##sys.cons (bruijn ##x.905 1 0) (##inline ##sys.cons (bruijn ##x.907 0 0) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 1)), runtime,
      upenv->up->up->vars[0],
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
static void _V0expand__syntax_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k140" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 42 9) (close _V0expand__syntax_k141) (bruijn y 2 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k141, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0expand__syntax_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k139" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 41 9) (close _V0expand__syntax_k140) (bruijn x 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k140, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__syntax_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda126" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda126, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.167 1 1))) ((bruijn expand-syntax 40 9) (close _V0expand__syntax_k139) (bruijn p 4 1)) ((bruijn ##k.899 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 40-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k139, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda125" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda125, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.167 0 1)) ((close _V0expand__syntax_lambda126) (bruijn ##k.897 0 0) (##inline ##sys.car (bruijn ##expr.167 0 1))) ((bruijn ##k.897 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda126, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda124" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda124, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda125) (bruijn ##k.896 0 0) (##inline ##sys.cdr (bruijn ##expr.166 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda125, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda123" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda123, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.166 0 1)) ((close _V0expand__syntax_lambda124) (bruijn ##k.894 0 0) (##inline ##sys.car (bruijn ##expr.166 0 1))) ((bruijn ##k.894 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda124, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda122" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda122, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda123) (bruijn ##k.893 0 0) (##inline ##sys.cdr (bruijn ##expr.165 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda123, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda121" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.165 0 1)) ((close _V0expand__syntax_lambda122) (bruijn ##k.891 0 0) (##inline ##sys.car (bruijn ##expr.165 0 1))) ((bruijn ##k.891 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda122, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k138" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.890 0 0) ((close _V0expand__syntax_lambda121) (bruijn ##k.888 1 0) (##inline ##sys.cdr (bruijn ##expr.164 1 1))) ((bruijn ##k.888 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda121, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda120" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda120, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.164 0 1)) ((bruijn equal? 34 7) (close _V0expand__syntax_k138) (quote if) (##inline ##sys.car (bruijn ##expr.164 0 1))) ((bruijn ##k.888 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k138, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k144" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k144, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 27 1) (bruijn ##k.883 1 0) (bruijn ##x.884 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda128" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda128, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn error 37 15) (close _V0expand__syntax_k144) (##string ##string.2094) (##inline ##sys.cons (quote if) (bruijn noise 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 37-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k144, env)}),
      VEncodePointer(&_V10string_D2094.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__syntax_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k143" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.882 0 0) ((close _V0expand__syntax_lambda128) (bruijn ##k.880 1 0) (##inline ##sys.cdr (bruijn ##expr.168 1 1))) ((bruijn ##k.880 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda128, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda127" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda127, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.168 0 1)) ((bruijn equal? 35 7) (close _V0expand__syntax_k143) (quote if) (##inline ##sys.car (bruijn ##expr.168 0 1))) ((bruijn ##k.880 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k143, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k146" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k146, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.876 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.169 1 1))) ((bruijn ##kk.102 26 1) (bruijn ##k.874 1 0) #t) ((bruijn ##k.874 1 0) #f)) ((bruijn ##k.874 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 1)), runtime,
      upenv->vars[0],
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda129" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda129, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.169 0 1)) ((bruijn equal? 36 7) (close _V0expand__syntax_k146) (quote and) (##inline ##sys.car (bruijn ##expr.169 0 1))) ((bruijn ##k.874 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 36-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k146, env)}),
      VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k149" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k149, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 30 1) (bruijn ##k.867 1 0) (bruijn ##x.869 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda132" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda132, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.171 1 1))) ((bruijn expand-syntax 39 9) (close _V0expand__syntax_k149) (bruijn x 0 1)) ((bruijn ##k.867 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 39-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k149, env)}),
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda131" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda131, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.171 0 1)) ((close _V0expand__syntax_lambda132) (bruijn ##k.865 0 0) (##inline ##sys.car (bruijn ##expr.171 0 1))) ((bruijn ##k.865 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda132, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k148" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.864 0 0) ((close _V0expand__syntax_lambda131) (bruijn ##k.862 1 0) (##inline ##sys.cdr (bruijn ##expr.170 1 1))) ((bruijn ##k.862 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda131, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda130" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda130, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.170 0 1)) ((bruijn equal? 37 7) (close _V0expand__syntax_k148) (quote and) (##inline ##sys.car (bruijn ##expr.170 0 1))) ((bruijn ##k.862 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 37-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k148, env)}),
      VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k153" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k153, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 34 1) (bruijn ##k.848 2 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn ##x.852 1 0) (##inline ##sys.cons (bruijn ##x.854 0 0) (##inline ##sys.cons (quote #f) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 1)), runtime,
      upenv->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
_var0,
      VInlineCons(
VEncodeBool(false),
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0expand__syntax_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k152" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 43 9) (close _V0expand__syntax_k153) (bruijn y 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k153, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__syntax_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda137" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda137, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.174 1 1))) ((bruijn expand-syntax 42 9) (close _V0expand__syntax_k152) (bruijn x 2 1)) ((bruijn ##k.848 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k152, env)}),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda136" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda136, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.174 0 1)) ((close _V0expand__syntax_lambda137) (bruijn ##k.846 0 0) (##inline ##sys.car (bruijn ##expr.174 0 1))) ((bruijn ##k.846 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda137, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda135" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda135, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda136) (bruijn ##k.845 0 0) (##inline ##sys.cdr (bruijn ##expr.173 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda136, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda134" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda134, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.173 0 1)) ((close _V0expand__syntax_lambda135) (bruijn ##k.843 0 0) (##inline ##sys.car (bruijn ##expr.173 0 1))) ((bruijn ##k.843 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda135, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k151" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.842 0 0) ((close _V0expand__syntax_lambda134) (bruijn ##k.840 1 0) (##inline ##sys.cdr (bruijn ##expr.172 1 1))) ((bruijn ##k.840 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda134, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda133" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda133, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.172 0 1)) ((bruijn equal? 38 7) (close _V0expand__syntax_k151) (quote and) (##inline ##sys.car (bruijn ##expr.172 0 1))) ((bruijn ##k.840 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 38-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k151, env)}),
      VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k156" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k156, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 33 1) (bruijn ##k.829 1 0) (bruijn ##x.830 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda141" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda141, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 42 9) (close _V0expand__syntax_k156) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn x 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote and) (bruijn y 0 1)) (##inline ##sys.cons (quote #f) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k156, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
      _var1
    )
,
      VInlineCons(
VEncodeBool(false),
      VNULL
    )

    )

    )

    )

    );
 }
}
static void _V0expand__syntax_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda140" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda140, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda141) (bruijn ##k.828 0 0) (##inline ##sys.cdr (bruijn ##expr.176 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda141, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda139" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda139, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.176 0 1)) ((close _V0expand__syntax_lambda140) (bruijn ##k.826 0 0) (##inline ##sys.car (bruijn ##expr.176 0 1))) ((bruijn ##k.826 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda140, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k155" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.825 0 0) ((close _V0expand__syntax_lambda139) (bruijn ##k.823 1 0) (##inline ##sys.cdr (bruijn ##expr.175 1 1))) ((bruijn ##k.823 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda139, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda138" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda138, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.175 0 1)) ((bruijn equal? 39 7) (close _V0expand__syntax_k155) (quote and) (##inline ##sys.car (bruijn ##expr.175 0 1))) ((bruijn ##k.823 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 39-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k155, env)}),
      VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k158" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k158, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.819 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.177 1 1))) ((bruijn ##kk.102 30 1) (bruijn ##k.817 1 0) #f) ((bruijn ##k.817 1 0) #f)) ((bruijn ##k.817 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 1)), runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda142" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda142, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.177 0 1)) ((bruijn equal? 40 7) (close _V0expand__syntax_k158) (quote or) (##inline ##sys.car (bruijn ##expr.177 0 1))) ((bruijn ##k.817 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 40-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k158, env)}),
      VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k161" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k161, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 34 1) (bruijn ##k.810 1 0) (bruijn ##x.812 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda145" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda145, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.179 1 1))) ((bruijn expand-syntax 43 9) (close _V0expand__syntax_k161) (bruijn x 0 1)) ((bruijn ##k.810 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k161, env)}),
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda144" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda144, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.179 0 1)) ((close _V0expand__syntax_lambda145) (bruijn ##k.808 0 0) (##inline ##sys.car (bruijn ##expr.179 0 1))) ((bruijn ##k.808 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda145, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k160" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.807 0 0) ((close _V0expand__syntax_lambda144) (bruijn ##k.805 1 0) (##inline ##sys.cdr (bruijn ##expr.178 1 1))) ((bruijn ##k.805 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda144, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda143" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda143, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.178 0 1)) ((bruijn equal? 41 7) (close _V0expand__syntax_k160) (quote or) (##inline ##sys.car (bruijn ##expr.178 0 1))) ((bruijn ##k.805 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 41-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k160, env)}),
      VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k165" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k165, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 38 1) (bruijn ##k.792 2 0) (##inline ##sys.cons (quote or) (##inline ##sys.cons (bruijn ##x.796 1 0) (##inline ##sys.cons (bruijn ##x.798 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 38-1, 1)), runtime,
      upenv->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k164" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 47 9) (close _V0expand__syntax_k165) (bruijn y 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 47-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k165, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__syntax_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda150" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda150, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.182 1 1))) ((bruijn expand-syntax 46 9) (close _V0expand__syntax_k164) (bruijn x 2 1)) ((bruijn ##k.792 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 46-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k164, env)}),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda149" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda149, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.182 0 1)) ((close _V0expand__syntax_lambda150) (bruijn ##k.790 0 0) (##inline ##sys.car (bruijn ##expr.182 0 1))) ((bruijn ##k.790 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda150, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda148" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda148, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda149) (bruijn ##k.789 0 0) (##inline ##sys.cdr (bruijn ##expr.181 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda149, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda147" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda147, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.181 0 1)) ((close _V0expand__syntax_lambda148) (bruijn ##k.787 0 0) (##inline ##sys.car (bruijn ##expr.181 0 1))) ((bruijn ##k.787 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda148, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k163" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.786 0 0) ((close _V0expand__syntax_lambda147) (bruijn ##k.784 1 0) (##inline ##sys.cdr (bruijn ##expr.180 1 1))) ((bruijn ##k.784 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda147, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda146" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda146, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.180 0 1)) ((bruijn equal? 42 7) (close _V0expand__syntax_k163) (quote or) (##inline ##sys.car (bruijn ##expr.180 0 1))) ((bruijn ##k.784 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k163, env)}),
      VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k168" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k168, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 37 1) (bruijn ##k.774 1 0) (bruijn ##x.775 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 37-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda154" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda154, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 46 9) (close _V0expand__syntax_k168) (##inline ##sys.cons (quote or) (##inline ##sys.cons (bruijn x 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote or) (bruijn y 0 1)) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 46-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k168, env)}),
      VInlineCons(
VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      _var1
    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda153" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda153, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda154) (bruijn ##k.773 0 0) (##inline ##sys.cdr (bruijn ##expr.184 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda154, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda152" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda152, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 1)) ((close _V0expand__syntax_lambda153) (bruijn ##k.771 0 0) (##inline ##sys.car (bruijn ##expr.184 0 1))) ((bruijn ##k.771 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda153, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k167" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.770 0 0) ((close _V0expand__syntax_lambda152) (bruijn ##k.768 1 0) (##inline ##sys.cdr (bruijn ##expr.183 1 1))) ((bruijn ##k.768 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda152, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda151" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda151, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.183 0 1)) ((bruijn equal? 43 7) (close _V0expand__syntax_k167) (quote or) (##inline ##sys.car (bruijn ##expr.183 0 1))) ((bruijn ##k.768 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 43-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k167, env)}),
      VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k172" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k172, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 39 1) (bruijn ##k.758 1 0) (bruijn ##x.760 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 39-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda158" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda158, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.186 3 1))) ((bruijn expand-syntax 48 9) (close _V0expand__syntax_k172) (##inline ##sys.cons (quote begin) (bruijn body 0 1))) ((bruijn ##k.758 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 48-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k172, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      _var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k171" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.757 0 0) ((close _V0expand__syntax_lambda158) (bruijn ##k.755 1 0) (##inline ##sys.cdr (bruijn ##expr.187 1 1))) ((bruijn ##k.755 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda158, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda157" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda157, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.187 0 1)) ((bruijn equal? 47 7) (close _V0expand__syntax_k171) (quote else) (##inline ##sys.car (bruijn ##expr.187 0 1))) ((bruijn ##k.755 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 47-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k171, env)}),
      VEncodePointer(&_V0else.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda156" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda156, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.186 0 1)) ((close _V0expand__syntax_lambda157) (bruijn ##k.753 0 0) (##inline ##sys.car (bruijn ##expr.186 0 1))) ((bruijn ##k.753 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda157, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k170" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.752 0 0) ((close _V0expand__syntax_lambda156) (bruijn ##k.750 1 0) (##inline ##sys.cdr (bruijn ##expr.185 1 1))) ((bruijn ##k.750 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda156, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda155" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda155, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.185 0 1)) ((bruijn equal? 44 7) (close _V0expand__syntax_k170) (quote cond) (##inline ##sys.car (bruijn ##expr.185 0 1))) ((bruijn ##k.750 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k170, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda167" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda167, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn expand-syntax 55 9) (bruijn ##k.725 0 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn foobar 0 1) (##inline ##sys.cons (bruijn p 7 1) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn foobar 0 1) (##inline ##sys.cons (##inline ##sys.cons (bruijn f 3 1) (##inline ##sys.cons (bruijn foobar 0 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote cond) (bruijn rest 2 1)) (quote ()))))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 9)), runtime,
      _var0,
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
_var1,
      VInlineCons(
VGetArg(upenv, 7-1, 1),
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VInlineCons(
VInlineCons(
upenv->up->up->vars[1],
      VInlineCons(
_var1,
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      upenv->up->vars[1]
    )
,
      VNULL
    )

    )

    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k177" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k177, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 45 1) (bruijn ##k.723 2 0) (bruijn ##x.724 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 45-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k176" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda167) (close _V0expand__syntax_k177) (bruijn ##x.739 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda167, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k177, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda166" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda166, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn gensym 54 4) (close _V0expand__syntax_k176) (##string ##string.2095))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 54-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k176, env)}),
      VEncodePointer(&_V10string_D2095.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__syntax_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda165" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda165, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.192 1 1))) ((close _V0expand__syntax_lambda166) (bruijn ##k.721 0 0) (##inline ##sys.cdr (bruijn ##expr.189 6 1))) ((bruijn ##k.721 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda166, env)}, runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda164" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda164, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.192 0 1)) ((close _V0expand__syntax_lambda165) (bruijn ##k.719 0 0) (##inline ##sys.car (bruijn ##expr.192 0 1))) ((bruijn ##k.719 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda165, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k175" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.718 0 0) ((close _V0expand__syntax_lambda164) (bruijn ##k.716 1 0) (##inline ##sys.cdr (bruijn ##expr.191 1 1))) ((bruijn ##k.716 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda164, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda163" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda163, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.191 0 1)) ((bruijn equal? 50 7) (close _V0expand__syntax_k175) (quote =>) (##inline ##sys.car (bruijn ##expr.191 0 1))) ((bruijn ##k.716 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k175, env)}),
      VEncodePointer(&_V0_E_G.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda162" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda162, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda163) (bruijn ##k.715 0 0) (##inline ##sys.cdr (bruijn ##expr.190 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda163, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda161" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda161, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.190 0 1)) ((close _V0expand__syntax_lambda162) (bruijn ##k.713 0 0) (##inline ##sys.car (bruijn ##expr.190 0 1))) ((bruijn ##k.713 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda162, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda160" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda160, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.189 0 1)) ((close _V0expand__syntax_lambda161) (bruijn ##k.711 0 0) (##inline ##sys.car (bruijn ##expr.189 0 1))) ((bruijn ##k.711 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda161, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k174" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.710 0 0) ((close _V0expand__syntax_lambda160) (bruijn ##k.708 1 0) (##inline ##sys.cdr (bruijn ##expr.188 1 1))) ((bruijn ##k.708 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda160, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda159" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda159, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.188 0 1)) ((bruijn equal? 45 7) (close _V0expand__syntax_k174) (quote cond) (##inline ##sys.car (bruijn ##expr.188 0 1))) ((bruijn ##k.708 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 45-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k174, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k180" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k180, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 42 1) (bruijn ##k.694 1 0) (bruijn ##x.695 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 42-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda173" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda173, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 51 9) (close _V0expand__syntax_k180) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 2 1) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (bruijn body 1 1)) (##inline ##sys.cons (##inline ##sys.cons (quote cond) (bruijn rest 0 1)) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 51-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k180, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      upenv->vars[1]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      _var1
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
static void _V0expand__syntax_lambda172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda172" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda172, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda173) (bruijn ##k.693 0 0) (##inline ##sys.cdr (bruijn ##expr.194 3 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda173, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda171" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda171, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda172) (bruijn ##k.692 0 0) (##inline ##sys.cdr (bruijn ##expr.195 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda172, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda170" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda170, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.195 0 1)) ((close _V0expand__syntax_lambda171) (bruijn ##k.690 0 0) (##inline ##sys.car (bruijn ##expr.195 0 1))) ((bruijn ##k.690 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda171, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda169" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda169, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.194 0 1)) ((close _V0expand__syntax_lambda170) (bruijn ##k.688 0 0) (##inline ##sys.car (bruijn ##expr.194 0 1))) ((bruijn ##k.688 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda170, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k179" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.687 0 0) ((close _V0expand__syntax_lambda169) (bruijn ##k.685 1 0) (##inline ##sys.cdr (bruijn ##expr.193 1 1))) ((bruijn ##k.685 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda169, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda168" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda168, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.193 0 1)) ((bruijn equal? 46 7) (close _V0expand__syntax_k179) (quote cond) (##inline ##sys.car (bruijn ##expr.193 0 1))) ((bruijn ##k.685 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 46-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k179, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k182" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k182, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.679 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.196 1 1))) ((bruijn ##kk.102 37 1) (bruijn ##k.677 1 0) (##inline ##sys.cons (quote error) (##inline ##sys.cons (quote (##string ##string.2096)) (quote ())))) ((bruijn ##k.677 1 0) #f)) ((bruijn ##k.677 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 37-1, 1)), runtime,
      upenv->vars[0],
      VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D2096.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda174" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda174, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.196 0 1)) ((bruijn equal? 47 7) (close _V0expand__syntax_k182) (quote cond) (##inline ##sys.car (bruijn ##expr.196 0 1))) ((bruijn ##k.677 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 47-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k182, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k185" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k185, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 40 1) (bruijn ##k.672 1 0) (bruijn ##x.673 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 40-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda176" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda176, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn error 50 15) (close _V0expand__syntax_k185) (##string ##string.2097) (##inline ##sys.cons (quote cond) (bruijn noise 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k185, env)}),
      VEncodePointer(&_V10string_D2097.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__syntax_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k184" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.671 0 0) ((close _V0expand__syntax_lambda176) (bruijn ##k.669 1 0) (##inline ##sys.cdr (bruijn ##expr.197 1 1))) ((bruijn ##k.669 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda176, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda175" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda175, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.197 0 1)) ((bruijn equal? 48 7) (close _V0expand__syntax_k184) (quote cond) (##inline ##sys.car (bruijn ##expr.197 0 1))) ((bruijn ##k.669 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 48-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k184, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda181" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda181, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn expand-syntax 54 9) (bruijn ##k.655 0 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn foobar 0 1) (##inline ##sys.cons (bruijn x 3 1) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote case-iter) (##inline ##sys.cons (bruijn foobar 0 1) (bruijn rest 2 1))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 54-1, 9)), runtime,
      _var0,
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
_var1,
      VInlineCons(
upenv->up->up->vars[1],
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0case__iter.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      upenv->up->vars[1]
    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k189" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k189, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 44 1) (bruijn ##k.653 2 0) (bruijn ##x.654 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k188" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda181) (close _V0expand__syntax_k189) (bruijn ##x.664 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda181, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k189, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_lambda180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda180" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda180, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn gensym 53 4) (close _V0expand__syntax_k188) (##string ##string.2095))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k188, env)}),
      VEncodePointer(&_V10string_D2095.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__syntax_lambda179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda179" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda179, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda180) (bruijn ##k.652 0 0) (##inline ##sys.cdr (bruijn ##expr.199 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda180, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda178" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda178, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.199 0 1)) ((close _V0expand__syntax_lambda179) (bruijn ##k.650 0 0) (##inline ##sys.car (bruijn ##expr.199 0 1))) ((bruijn ##k.650 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda179, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k187" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.649 0 0) ((close _V0expand__syntax_lambda178) (bruijn ##k.647 1 0) (##inline ##sys.cdr (bruijn ##expr.198 1 1))) ((bruijn ##k.647 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda178, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda177" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda177, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.198 0 1)) ((bruijn equal? 49 7) (close _V0expand__syntax_k187) (quote case) (##inline ##sys.car (bruijn ##expr.198 0 1))) ((bruijn ##k.647 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 49-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k187, env)}),
      VEncodePointer(&_V0case.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k193" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k193, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 47 1) (bruijn ##k.635 1 0) (bruijn ##x.637 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 47-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda187" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda187, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.202 3 1))) ((bruijn expand-syntax 56 9) (close _V0expand__syntax_k193) (##inline ##sys.cons (quote begin) (bruijn body 0 1))) ((bruijn ##k.635 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 56-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k193, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      _var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k192" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.634 0 0) ((close _V0expand__syntax_lambda187) (bruijn ##k.632 1 0) (##inline ##sys.cdr (bruijn ##expr.203 1 1))) ((bruijn ##k.632 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda187, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda186" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda186, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.203 0 1)) ((bruijn equal? 55 7) (close _V0expand__syntax_k192) (quote else) (##inline ##sys.car (bruijn ##expr.203 0 1))) ((bruijn ##k.632 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k192, env)}),
      VEncodePointer(&_V0else.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda185" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda185, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.202 0 1)) ((close _V0expand__syntax_lambda186) (bruijn ##k.630 0 0) (##inline ##sys.car (bruijn ##expr.202 0 1))) ((bruijn ##k.630 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda186, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda184" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda184, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda185) (bruijn ##k.629 0 0) (##inline ##sys.cdr (bruijn ##expr.201 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda185, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda183" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda183, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.201 0 1)) ((close _V0expand__syntax_lambda184) (bruijn ##k.627 0 0) (##inline ##sys.car (bruijn ##expr.201 0 1))) ((bruijn ##k.627 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda184, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k191" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.626 0 0) ((close _V0expand__syntax_lambda183) (bruijn ##k.624 1 0) (##inline ##sys.cdr (bruijn ##expr.200 1 1))) ((bruijn ##k.624 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda183, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda182" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda182, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.200 0 1)) ((bruijn equal? 50 7) (close _V0expand__syntax_k191) (quote case-iter) (##inline ##sys.car (bruijn ##expr.200 0 1))) ((bruijn ##k.624 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k191, env)}),
      VEncodePointer(&_V0case__iter.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k196" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k196, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.582 1 0) (bruijn ##expr.208 4 1) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL
    );
 }
}
static void _V0loop_lambda200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda200" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda200, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.211 1 1) (bruijn ##k.590 0 0) (##inline ##sys.cdr (bruijn ##expr.212 5 1)) (##inline ##sys.cons (bruijn toks 0 1) (bruijn ##toks.209 5 2)))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 5-1, 1)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 5-1, 2)
    )

    );
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k200, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.210 8 1) (bruijn ##k.587 2 0) (bruijn ##expr.212 6 1) (bruijn ##x.589 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 66 8) (close _V0loop_k200) (bruijn ##toks.209 5 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k200, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_lambda199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda199" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda199, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda199, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda200) (close _V0loop_k199) (##inline ##sys.car (bruijn ##expr.212 4 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda200, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k199, env)}),
      VInlineCar(
upenv->up->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda198" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 64 9) (bruijn ##k.586 0 0) (close _V0loop_lambda199))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda199, env)})
    );
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 63 10) (bruijn ##k.584 2 0) (close _V0loop_lambda198) (bruijn loop 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 63-1, 10)), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda198, env)}),
      upenv->up->up->vars[1]
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.210 3 1) (close _V0loop_k198) (bruijn ##expr.212 1 1) (bruijn ##x.595 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k198, env)}),
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0loop_lambda203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda203" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda203, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.211 1 1) (bruijn ##k.590 0 0) (##inline ##sys.cdr (bruijn ##expr.212 3 1)) (##inline ##sys.cons (bruijn toks 0 1) (bruijn ##toks.209 3 2)))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      _var0,
      VInlineCdr(
upenv->up->up->vars[1]
    )
,
      VInlineCons(
_var1,
      upenv->up->up->vars[2]
    )

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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k202, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.210 6 1) (bruijn ##k.587 2 0) (bruijn ##expr.212 4 1) (bruijn ##x.589 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 64 8) (close _V0loop_k202) (bruijn ##toks.209 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k202, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda202" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda202, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda202, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda203) (close _V0loop_k201) (##inline ##sys.car (bruijn ##expr.212 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda203, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k201, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda201" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 62 9) (bruijn ##k.586 0 0) (close _V0loop_lambda202))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 62-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda202, env)})
    );
 }
}
static void _V0loop_lambda197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda197" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda197, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda197, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.212 0 1))) ((bruijn reverse 61 8) (close _V0loop_k197) (bruijn ##toks.209 0 2)) ((bruijn call-with-values 61 10) (bruijn ##k.584 0 0) (close _V0loop_lambda201) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 61-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k197, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 61-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda201, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0expand__syntax_lambda196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda196" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda196, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0expand__syntax_k196) (bruijn loop 0 1) (close _V0loop_lambda197))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k196, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda197, env)})
    );
 }
}
static void _V0expand__syntax_lambda195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda195" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda195, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda195, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda196) (bruijn ##k.581 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda196, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__syntax_lambda194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda194" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 58 9) (bruijn ##k.580 0 0) (close _V0expand__syntax_lambda195))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 58-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda195, env)})
    );
 }
}
static void _V0expand__syntax_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k204" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k204, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 51 1) (bruijn ##k.600 2 0) (bruijn ##x.601 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 51-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k203" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 60 9) (close _V0expand__syntax_k204) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote or) (bruijn ##x.610 0 0)) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (bruijn body 2 1)) (##inline ##sys.cons (##inline ##sys.cons (quote case-iter) (##inline ##sys.cons (bruijn x 7 1) (bruijn rest 1 1))) (quote ()))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 60-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k204, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      _var0
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      upenv->up->vars[1]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0case__iter.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 7-1, 1),
      upenv->vars[1]
    )

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
static void _V0expand__syntax_lambda207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda207" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda207, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda207, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.611 0 0) (##inline ##sys.cons (quote eqv?) (##inline ##sys.cons (bruijn x 7 1) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn y 0 1) (quote ()))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VInlineCons(
VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 7-1, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VNULL
    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_lambda206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda206" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda206, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 60 14) (close _V0expand__syntax_k203) (close _V0expand__syntax_lambda207) (bruijn toks 2 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 60-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k203, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda207, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0expand__syntax_lambda205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda205" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda205, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda206) (bruijn ##k.599 0 0) (##inline ##sys.cdr (bruijn ##expr.206 4 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda206, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->up->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda204" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda204, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda204, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0expand__syntax_lambda205) (bruijn ##k.597 0 0) (##inline ##sys.cdr (bruijn ##expr.207 2 1))) ((bruijn ##k.597 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda205, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda193" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda193, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 57 10) (bruijn ##k.579 0 0) (close _V0expand__syntax_lambda194) (close _V0expand__syntax_lambda204))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 57-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda194, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda204, env)})
    );
 }
}
static void _V0expand__syntax_lambda192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda192" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda192, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.207 0 1)) ((close _V0expand__syntax_lambda193) (bruijn ##k.577 0 0) (##inline ##sys.car (bruijn ##expr.207 0 1))) ((bruijn ##k.577 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda193, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda191" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda191, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.206 0 1)) ((close _V0expand__syntax_lambda192) (bruijn ##k.575 0 0) (##inline ##sys.car (bruijn ##expr.206 0 1))) ((bruijn ##k.575 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda192, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda190" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda190, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda191) (bruijn ##k.574 0 0) (##inline ##sys.cdr (bruijn ##expr.205 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda191, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda189" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda189, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.205 0 1)) ((close _V0expand__syntax_lambda190) (bruijn ##k.572 0 0) (##inline ##sys.car (bruijn ##expr.205 0 1))) ((bruijn ##k.572 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda190, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k195" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.571 0 0) ((close _V0expand__syntax_lambda189) (bruijn ##k.569 1 0) (##inline ##sys.cdr (bruijn ##expr.204 1 1))) ((bruijn ##k.569 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda189, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda188" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda188, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.204 0 1)) ((bruijn equal? 51 7) (close _V0expand__syntax_k195) (quote case-iter) (##inline ##sys.car (bruijn ##expr.204 0 1))) ((bruijn ##k.569 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 51-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k195, env)}),
      VEncodePointer(&_V0case__iter.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda210" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda210, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.214 1 1))) ((bruijn ##kk.102 44 1) (bruijn ##k.561 0 0) (##inline ##sys.cons (quote error) (##inline ##sys.cons (quote (##string ##string.2098)) (quote ())))) ((bruijn ##k.561 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 44-1, 1)), runtime,
      _var0,
      VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D2098.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda209" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda209, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.214 0 1)) ((close _V0expand__syntax_lambda210) (bruijn ##k.559 0 0) (##inline ##sys.car (bruijn ##expr.214 0 1))) ((bruijn ##k.559 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda210, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k206" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.558 0 0) ((close _V0expand__syntax_lambda209) (bruijn ##k.556 1 0) (##inline ##sys.cdr (bruijn ##expr.213 1 1))) ((bruijn ##k.556 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda209, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda208" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda208, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.213 0 1)) ((bruijn equal? 52 7) (close _V0expand__syntax_k206) (quote case-iter) (##inline ##sys.car (bruijn ##expr.213 0 1))) ((bruijn ##k.556 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 52-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k206, env)}),
      VEncodePointer(&_V0case__iter.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k209" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k209, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 47 1) (bruijn ##k.546 1 0) (bruijn ##x.547 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 47-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda214" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda214, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 56 9) (close _V0expand__syntax_k209) (##inline ##sys.cons (quote cut-iter) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn f 1 1) (bruijn args 0 1))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 56-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k209, env)}),
      VInlineCons(
VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
VNULL,
      VInlineCons(
upenv->vars[1],
      _var1
    )

    )

    )

    )

    );
 }
}
static void _V0expand__syntax_lambda213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda213" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda213, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda214) (bruijn ##k.545 0 0) (##inline ##sys.cdr (bruijn ##expr.216 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda214, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda212" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda212, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.216 0 1)) ((close _V0expand__syntax_lambda213) (bruijn ##k.543 0 0) (##inline ##sys.car (bruijn ##expr.216 0 1))) ((bruijn ##k.543 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda213, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k208" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.542 0 0) ((close _V0expand__syntax_lambda212) (bruijn ##k.540 1 0) (##inline ##sys.cdr (bruijn ##expr.215 1 1))) ((bruijn ##k.540 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda212, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda211" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda211, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.215 0 1)) ((bruijn equal? 53 7) (close _V0expand__syntax_k208) (quote cut) (##inline ##sys.car (bruijn ##expr.215 0 1))) ((bruijn ##k.540 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k208, env)}),
      VEncodePointer(&_V0cut.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k214" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k214, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 53 1) (bruijn ##k.523 3 0) (bruijn ##x.525 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 1)), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k213" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 62 9) (close _V0expand__syntax_k214) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ##x.528 1 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn f 2 1) (bruijn ##x.531 0 0)) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 62-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k214, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
VInlineCons(
upenv->up->vars[1],
      _var0
    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k212" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 62 8) (close _V0expand__syntax_k213) (bruijn args 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 62-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k213, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__syntax_lambda221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda221" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda221, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.220 1 1))) ((bruijn reverse 61 8) (close _V0expand__syntax_k212) (bruijn xs 4 1)) ((bruijn ##k.523 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 61-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k212, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda220" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda220, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.220 0 1)) ((close _V0expand__syntax_lambda221) (bruijn ##k.521 0 0) (##inline ##sys.car (bruijn ##expr.220 0 1))) ((bruijn ##k.521 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda221, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda219" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda219, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda220) (bruijn ##k.520 0 0) (##inline ##sys.cdr (bruijn ##expr.219 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda220, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda218" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda218, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.219 0 1)) ((close _V0expand__syntax_lambda219) (bruijn ##k.518 0 0) (##inline ##sys.car (bruijn ##expr.219 0 1))) ((bruijn ##k.518 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda219, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda217" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda217, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda218) (bruijn ##k.517 0 0) (##inline ##sys.cdr (bruijn ##expr.218 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda218, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda216" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda216, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.218 0 1)) ((close _V0expand__syntax_lambda217) (bruijn ##k.515 0 0) (##inline ##sys.car (bruijn ##expr.218 0 1))) ((bruijn ##k.515 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda217, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k211" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.514 0 0) ((close _V0expand__syntax_lambda216) (bruijn ##k.512 1 0) (##inline ##sys.cdr (bruijn ##expr.217 1 1))) ((bruijn ##k.512 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda216, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda215" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda215, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.217 0 1)) ((bruijn equal? 54 7) (close _V0expand__syntax_k211) (quote cut-iter) (##inline ##sys.car (bruijn ##expr.217 0 1))) ((bruijn ##k.512 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 54-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k211, env)}),
      VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda231" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda231, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn expand-syntax 66 9) (bruijn ##k.494 0 0) (##inline ##sys.cons (quote cut-iter) (##inline ##sys.cons (##inline ##sys.cons (bruijn x 0 1) (bruijn xs 9 1)) (##inline ##sys.cons (##inline ##sys.cons (bruijn x 0 1) (bruijn args 7 1)) (##inline ##sys.cons (bruijn f 5 1) (bruijn rest 2 1))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 9)), runtime,
      _var0,
      VInlineCons(
VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
_var1,
      VGetArg(upenv, 9-1, 1)
    )
,
      VInlineCons(
VInlineCons(
_var1,
      VGetArg(upenv, 7-1, 1)
    )
,
      VInlineCons(
VGetArg(upenv, 5-1, 1),
      upenv->up->vars[1]
    )

    )

    )

    )

    );
 }
}
static void _V0expand__syntax_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k219" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k219, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 56 1) (bruijn ##k.492 2 0) (bruijn ##x.493 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 56-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k218" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda231) (close _V0expand__syntax_k219) (bruijn ##x.501 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda231, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k219, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_lambda230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda230" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda230, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn gensym 65 4) (close _V0expand__syntax_k218) (##string ##string.2095))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 65-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k218, env)}),
      VEncodePointer(&_V10string_D2095.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__syntax_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k217" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.491 0 0) ((close _V0expand__syntax_lambda230) (bruijn ##k.489 1 0) (##inline ##sys.cdr (bruijn ##expr.225 1 1))) ((bruijn ##k.489 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda230, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda229" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda229, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.225 0 1)) ((bruijn equal? 63 7) (close _V0expand__syntax_k217) (quote <>) (##inline ##sys.car (bruijn ##expr.225 0 1))) ((bruijn ##k.489 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 63-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k217, env)}),
      VEncodePointer(&_V0_L_G.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda228" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda228, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda229) (bruijn ##k.488 0 0) (##inline ##sys.cdr (bruijn ##expr.224 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda229, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda227" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda227, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.224 0 1)) ((close _V0expand__syntax_lambda228) (bruijn ##k.486 0 0) (##inline ##sys.car (bruijn ##expr.224 0 1))) ((bruijn ##k.486 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda228, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda226" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda226, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda227) (bruijn ##k.485 0 0) (##inline ##sys.cdr (bruijn ##expr.223 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda227, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda225" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda225, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.223 0 1)) ((close _V0expand__syntax_lambda226) (bruijn ##k.483 0 0) (##inline ##sys.car (bruijn ##expr.223 0 1))) ((bruijn ##k.483 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda226, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda224" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda224, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda225) (bruijn ##k.482 0 0) (##inline ##sys.cdr (bruijn ##expr.222 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda225, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda223" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda223, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.222 0 1)) ((close _V0expand__syntax_lambda224) (bruijn ##k.480 0 0) (##inline ##sys.car (bruijn ##expr.222 0 1))) ((bruijn ##k.480 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda224, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k216" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.479 0 0) ((close _V0expand__syntax_lambda223) (bruijn ##k.477 1 0) (##inline ##sys.cdr (bruijn ##expr.221 1 1))) ((bruijn ##k.477 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda223, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda222" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda222, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.221 0 1)) ((bruijn equal? 55 7) (close _V0expand__syntax_k216) (quote cut-iter) (##inline ##sys.car (bruijn ##expr.221 0 1))) ((bruijn ##k.477 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k216, env)}),
      VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k223" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k223, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 55 1) (bruijn ##k.462 2 0) (bruijn ##x.466 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k222" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.464 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.230 1 1))) ((bruijn error 65 15) (close _V0expand__syntax_k223) (##string ##string.2099)) ((bruijn ##k.462 1 0) #f)) ((bruijn ##k.462 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 65-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k223, env)}),
      VEncodePointer(&_V10string_D2099.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda239" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda239, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.230 0 1)) ((bruijn equal? 64 7) (close _V0expand__syntax_k222) (quote <...>) (##inline ##sys.car (bruijn ##expr.230 0 1))) ((bruijn ##k.462 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k222, env)}),
      VEncodePointer(&_V0_L_D_D_D_G.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda238" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda238, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda239) (bruijn ##k.461 0 0) (##inline ##sys.cdr (bruijn ##expr.229 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda239, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda237" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda237, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.229 0 1)) ((close _V0expand__syntax_lambda238) (bruijn ##k.459 0 0) (##inline ##sys.car (bruijn ##expr.229 0 1))) ((bruijn ##k.459 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda238, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda236" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda236, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda237) (bruijn ##k.458 0 0) (##inline ##sys.cdr (bruijn ##expr.228 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda237, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda235" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda235, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.228 0 1)) ((close _V0expand__syntax_lambda236) (bruijn ##k.456 0 0) (##inline ##sys.car (bruijn ##expr.228 0 1))) ((bruijn ##k.456 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda236, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda234" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda234, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda235) (bruijn ##k.455 0 0) (##inline ##sys.cdr (bruijn ##expr.227 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda235, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda233" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda233, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.227 0 1)) ((close _V0expand__syntax_lambda234) (bruijn ##k.453 0 0) (##inline ##sys.car (bruijn ##expr.227 0 1))) ((bruijn ##k.453 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda234, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k221" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.452 0 0) ((close _V0expand__syntax_lambda233) (bruijn ##k.450 1 0) (##inline ##sys.cdr (bruijn ##expr.226 1 1))) ((bruijn ##k.450 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda233, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda232" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda232, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.226 0 1)) ((bruijn equal? 56 7) (close _V0expand__syntax_k221) (quote cut-iter) (##inline ##sys.car (bruijn ##expr.226 0 1))) ((bruijn ##k.450 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 56-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k221, env)}),
      VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k226" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k226, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 57 1) (bruijn ##k.433 1 0) (bruijn ##x.434 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 57-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda249" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda249, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 66 9) (close _V0expand__syntax_k226) (##inline ##sys.cons (quote cut-iter) (##inline ##sys.cons (bruijn xs 7 1) (##inline ##sys.cons (##inline ##sys.cons (bruijn x 1 1) (bruijn args 5 1)) (##inline ##sys.cons (bruijn f 3 1) (bruijn rest 0 1))))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k226, env)}),
      VInlineCons(
VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 7-1, 1),
      VInlineCons(
VInlineCons(
upenv->vars[1],
      VGetArg(upenv, 5-1, 1)
    )
,
      VInlineCons(
upenv->up->up->vars[1],
      _var1
    )

    )

    )

    )

    );
 }
}
static void _V0expand__syntax_lambda248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda248" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda248, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda249) (bruijn ##k.432 0 0) (##inline ##sys.cdr (bruijn ##expr.235 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda249, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda247" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda247, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.235 0 1)) ((close _V0expand__syntax_lambda248) (bruijn ##k.430 0 0) (##inline ##sys.car (bruijn ##expr.235 0 1))) ((bruijn ##k.430 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda248, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda246" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda246, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda247) (bruijn ##k.429 0 0) (##inline ##sys.cdr (bruijn ##expr.234 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda247, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda245" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda245, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.234 0 1)) ((close _V0expand__syntax_lambda246) (bruijn ##k.427 0 0) (##inline ##sys.car (bruijn ##expr.234 0 1))) ((bruijn ##k.427 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda246, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda244" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda244, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda245) (bruijn ##k.426 0 0) (##inline ##sys.cdr (bruijn ##expr.233 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda245, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda243" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda243, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.233 0 1)) ((close _V0expand__syntax_lambda244) (bruijn ##k.424 0 0) (##inline ##sys.car (bruijn ##expr.233 0 1))) ((bruijn ##k.424 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda244, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda242" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda242, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda243) (bruijn ##k.423 0 0) (##inline ##sys.cdr (bruijn ##expr.232 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda243, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda241" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda241, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.232 0 1)) ((close _V0expand__syntax_lambda242) (bruijn ##k.421 0 0) (##inline ##sys.car (bruijn ##expr.232 0 1))) ((bruijn ##k.421 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda242, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k225" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.420 0 0) ((close _V0expand__syntax_lambda241) (bruijn ##k.418 1 0) (##inline ##sys.cdr (bruijn ##expr.231 1 1))) ((bruijn ##k.418 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda241, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda240" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda240, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.231 0 1)) ((bruijn equal? 57 7) (close _V0expand__syntax_k225) (quote cut-iter) (##inline ##sys.car (bruijn ##expr.231 0 1))) ((bruijn ##k.418 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 57-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k225, env)}),
      VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k229" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k229, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 50 1) (bruijn ##k.413 1 0) (bruijn ##x.414 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 50-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda251" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda251, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn error 60 15) (close _V0expand__syntax_k229) (##string ##string.2100) (##inline ##sys.cons (quote cut) (bruijn noise 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 60-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k229, env)}),
      VEncodePointer(&_V10string_D2100.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0cut.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__syntax_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k228" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.412 0 0) ((close _V0expand__syntax_lambda251) (bruijn ##k.410 1 0) (##inline ##sys.cdr (bruijn ##expr.236 1 1))) ((bruijn ##k.410 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda251, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda250" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda250, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.236 0 1)) ((bruijn equal? 58 7) (close _V0expand__syntax_k228) (quote cut) (##inline ##sys.car (bruijn ##expr.236 0 1))) ((bruijn ##k.410 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 58-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k228, env)}),
      VEncodePointer(&_V0cut.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k235" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k235, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 57 1) (bruijn ##k.395 4 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn y 6 1) (##inline ##sys.cons (bruijn ##x.401 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 57-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 6-1, 1),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k234" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 66 9) (close _V0expand__syntax_k235) (bruijn x 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k235, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__syntax_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k236" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k236, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 56 1) (bruijn ##k.395 3 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn y 5 1) (##inline ##sys.cons (bruijn ##x.401 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 56-1, 1)), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k233" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.402 0 0) ((bruijn error 66 15) (close _V0expand__syntax_k234) (##string ##string.2101) (bruijn y 4 1)) ((bruijn expand-syntax 65 9) (close _V0expand__syntax_k236) (bruijn x 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k234, env)}),
      VEncodePointer(&_V10string_D2101.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 65-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k236, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0expand__syntax_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k232" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 65 12) (close _V0expand__syntax_k233) (bruijn ##x.403 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 65-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k233, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_lambda256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda256" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda256, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.239 1 1))) ((bruijn symbol? 64 13) (close _V0expand__syntax_k232) (bruijn y 2 1)) ((bruijn ##k.395 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k232, env)}),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda255" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda255, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.239 0 1)) ((close _V0expand__syntax_lambda256) (bruijn ##k.393 0 0) (##inline ##sys.car (bruijn ##expr.239 0 1))) ((bruijn ##k.393 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda256, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda254" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda254, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda255) (bruijn ##k.392 0 0) (##inline ##sys.cdr (bruijn ##expr.238 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda255, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda253" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda253, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.238 0 1)) ((close _V0expand__syntax_lambda254) (bruijn ##k.390 0 0) (##inline ##sys.car (bruijn ##expr.238 0 1))) ((bruijn ##k.390 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda254, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k231" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.389 0 0) ((close _V0expand__syntax_lambda253) (bruijn ##k.387 1 0) (##inline ##sys.cdr (bruijn ##expr.237 1 1))) ((bruijn ##k.387 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda253, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda252" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda252, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.237 0 1)) ((bruijn equal? 59 7) (close _V0expand__syntax_k231) (quote set!) (##inline ##sys.car (bruijn ##expr.237 0 1))) ((bruijn ##k.387 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 59-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k231, env)}),
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k239" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k239, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 52 1) (bruijn ##k.382 1 0) (bruijn ##x.383 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 52-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda258" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda258, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn error 62 15) (close _V0expand__syntax_k239) (##string ##string.2102) (##inline ##sys.cons (quote set!) (bruijn noise 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 62-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k239, env)}),
      VEncodePointer(&_V10string_D2102.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__syntax_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k238" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.381 0 0) ((close _V0expand__syntax_lambda258) (bruijn ##k.379 1 0) (##inline ##sys.cdr (bruijn ##expr.240 1 1))) ((bruijn ##k.379 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda258, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda257" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda257, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.240 0 1)) ((bruijn equal? 60 7) (close _V0expand__syntax_k238) (quote set!) (##inline ##sys.car (bruijn ##expr.240 0 1))) ((bruijn ##k.379 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 60-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k238, env)}),
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k242" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k242, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 53 1) (bruijn ##k.374 1 0) (bruijn ##x.375 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda260" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda260, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn error 63 15) (close _V0expand__syntax_k242) (##string ##string.2103) (##inline ##sys.cons (quote define) (bruijn ys 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 63-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k242, env)}),
      VEncodePointer(&_V10string_D2103.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__syntax_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k241" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.373 0 0) ((close _V0expand__syntax_lambda260) (bruijn ##k.371 1 0) (##inline ##sys.cdr (bruijn ##expr.241 1 1))) ((bruijn ##k.371 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda260, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda259" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda259, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.241 0 1)) ((bruijn equal? 61 7) (close _V0expand__syntax_k241) (quote define) (##inline ##sys.car (bruijn ##expr.241 0 1))) ((bruijn ##k.371 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 61-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k241, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k246" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k246, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 55 1) (bruijn ##k.365 2 0) (bruijn ##x.366 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k245" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 64 9) (close _V0expand__syntax_k246) (bruijn ##x.367 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k246, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_lambda262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda262" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda262, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn transform-match 64 6) (close _V0expand__syntax_k245) (##inline ##sys.cons (quote match) (bruijn ys 0 1)) (bruijn eqv? 64 5))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k245, env)}),
      VInlineCons(
VEncodePointer(&_V0match.sym, VPOINTER_OTHER),
      _var1
    )
,
      VGetArg(upenv, 64-1, 5)
    );
 }
}
static void _V0expand__syntax_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k244" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.364 0 0) ((close _V0expand__syntax_lambda262) (bruijn ##k.362 1 0) (##inline ##sys.cdr (bruijn ##expr.242 1 1))) ((bruijn ##k.362 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda262, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda261" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda261, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.242 0 1)) ((bruijn equal? 62 7) (close _V0expand__syntax_k244) (quote match) (##inline ##sys.car (bruijn ##expr.242 0 1))) ((bruijn ##k.362 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 62-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k244, env)}),
      VEncodePointer(&_V0match.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k248" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k248, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.336 1 0) (bruijn ##expr.244 4 1) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL
    );
 }
}
static void _V0loop_lambda272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda272" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda272, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.247 1 1) (bruijn ##k.344 0 0) (##inline ##sys.cdr (bruijn ##expr.248 5 1)) (##inline ##sys.cons (bruijn args 0 1) (bruijn ##args.245 5 2)))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 5-1, 1)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 5-1, 2)
    )

    );
 }
}
static void _V0loop_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k252" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k252, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.246 8 1) (bruijn ##k.341 2 0) (bruijn ##expr.248 6 1) (bruijn ##x.343 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0
    );
 }
}
static void _V0loop_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k251" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 74 8) (close _V0loop_k252) (bruijn ##args.245 5 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 74-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k252, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_lambda271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda271" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda271, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda271, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda272) (close _V0loop_k251) (##inline ##sys.car (bruijn ##expr.248 4 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda272, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k251, env)}),
      VInlineCar(
upenv->up->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda270" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 72 9) (bruijn ##k.340 0 0) (close _V0loop_lambda271))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 72-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda271, env)})
    );
 }
}
static void _V0loop_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k250" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 71 10) (bruijn ##k.338 2 0) (close _V0loop_lambda270) (bruijn loop 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 71-1, 10)), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda270, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k249" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.246 3 1) (close _V0loop_k250) (bruijn ##expr.248 1 1) (bruijn ##x.349 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k250, env)}),
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0loop_lambda275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda275" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda275, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.247 1 1) (bruijn ##k.344 0 0) (##inline ##sys.cdr (bruijn ##expr.248 3 1)) (##inline ##sys.cons (bruijn args 0 1) (bruijn ##args.245 3 2)))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      _var0,
      VInlineCdr(
upenv->up->up->vars[1]
    )
,
      VInlineCons(
_var1,
      upenv->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k254" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k254, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.246 6 1) (bruijn ##k.341 2 0) (bruijn ##expr.248 4 1) (bruijn ##x.343 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k253" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 72 8) (close _V0loop_k254) (bruijn ##args.245 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 72-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k254, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda274" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda274, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda274, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda275) (close _V0loop_k253) (##inline ##sys.car (bruijn ##expr.248 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda275, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k253, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda273" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 70 9) (bruijn ##k.340 0 0) (close _V0loop_lambda274))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 70-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda274, env)})
    );
 }
}
static void _V0loop_lambda269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda269" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda269, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda269, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.248 0 1))) ((bruijn reverse 69 8) (close _V0loop_k249) (bruijn ##args.245 0 2)) ((bruijn call-with-values 69 10) (bruijn ##k.338 0 0) (close _V0loop_lambda273) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 69-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k249, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 69-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda273, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0expand__syntax_lambda268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda268" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda268, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0expand__syntax_k248) (bruijn loop 0 1) (close _V0loop_lambda269))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k248, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda269, env)})
    );
 }
}
static void _V0expand__syntax_lambda267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda267" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda267, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda267, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda268) (bruijn ##k.335 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda268, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__syntax_lambda266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda266" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 66 9) (bruijn ##k.334 0 0) (close _V0expand__syntax_lambda267))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda267, env)})
    );
 }
}
static void _V0expand__syntax_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k260" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k260, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 61 1) (bruijn ##k.351 6 0) (##inline ##sys.cons (bruijn ##x.355 1 0) (bruijn ##x.356 0 0)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 61-1, 1)), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0expand__syntax_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k259" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 71 14) (close _V0expand__syntax_k260) (bruijn expand-syntax 70 9) (bruijn args 5 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 71-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k260, env)}),
      VGetArg(upenv, 70-1, 9),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0expand__syntax_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k258" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 69 9) (close _V0expand__syntax_k259) (bruijn f 6 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 69-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k259, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0expand__syntax_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k262" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k262, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 60 1) (bruijn ##k.351 5 0) (##inline ##sys.cons (bruijn ##x.355 1 0) (bruijn ##x.356 0 0)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 60-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0expand__syntax_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k261" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 70 14) (close _V0expand__syntax_k262) (bruijn expand-syntax 69 9) (bruijn args 4 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 70-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k262, env)}),
      VGetArg(upenv, 69-1, 9),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0expand__syntax_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k257" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.357 0 0) ((bruijn error 69 15) (close _V0expand__syntax_k258) (##string ##string.2104) (bruijn f 5 1)) ((bruijn expand-syntax 68 9) (close _V0expand__syntax_k261) (bruijn f 5 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 69-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k258, env)}),
      VEncodePointer(&_V10string_D2104.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 68-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k261, env)}),
      VGetArg(upenv, 5-1, 1)
    );
}
 }
}
static void _V0expand__syntax_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k256" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 68 12) (close _V0expand__syntax_k257) (bruijn ##x.359 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 68-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k257, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k264" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k264, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 58 1) (bruijn ##k.351 3 0) (##inline ##sys.cons (bruijn ##x.355 1 0) (bruijn ##x.356 0 0)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 58-1, 1)), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0expand__syntax_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k263" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 68 14) (close _V0expand__syntax_k264) (bruijn expand-syntax 67 9) (bruijn args 2 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 68-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k264, env)}),
      VGetArg(upenv, 67-1, 9),
      upenv->up->vars[2]
    );
 }
}
static void _V0expand__syntax_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k255" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.358 0 0) ((bruijn symbol? 67 13) (close _V0expand__syntax_k256) (bruijn f 3 1)) ((bruijn expand-syntax 66 9) (close _V0expand__syntax_k263) (bruijn f 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 67-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k256, env)}),
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k263, env)}),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0expand__syntax_lambda276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda276" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda276, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda276, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn atom? 66 11) (close _V0expand__syntax_k255) (bruijn f 2 1)) ((bruijn ##k.351 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k255, env)}),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda265" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda265, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 65 10) (bruijn ##k.333 0 0) (close _V0expand__syntax_lambda266) (close _V0expand__syntax_lambda276))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 65-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda266, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda276, env)})
    );
 }
}
static void _V0expand__syntax_lambda264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda264" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda264, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda265) (bruijn ##k.332 0 0) (##inline ##sys.cdr (bruijn ##expr.243 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda265, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda263" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda263, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.243 0 1)) ((close _V0expand__syntax_lambda264) (bruijn ##k.330 0 0) (##inline ##sys.car (bruijn ##expr.243 0 1))) ((bruijn ##k.330 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda264, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k266" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k266, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 56 1) (bruijn ##k.325 1 0) (bruijn ##x.326 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 56-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda279" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda279, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn error 66 15) (close _V0expand__syntax_k266) (##string ##string.2105) (##inline ##sys.cons (bruijn a 1 1) (bruijn b 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 66-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k266, env)}),
      VEncodePointer(&_V10string_D2105.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[1],
      _var1
    )

    );
 }
}
static void _V0expand__syntax_lambda278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda278" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda278, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda279) (bruijn ##k.324 0 0) (##inline ##sys.cdr (bruijn ##expr.249 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda279, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda277" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda277, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.249 0 1)) ((close _V0expand__syntax_lambda278) (bruijn ##k.322 0 0) (##inline ##sys.car (bruijn ##expr.249 0 1))) ((bruijn ##k.322 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda278, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k269" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k269, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 55 1) (bruijn ##k.266 54 0) (bruijn expr 56 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 55-1, 1)), runtime,
      VGetArg(upenv, 54-1, 0),
      VGetArg(upenv, 56-1, 1)
    );
 }
}
static void _V0expand__syntax_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k268" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.102 54 1) (close _V0expand__syntax_k269) (bruijn ##x.321 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 54-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k269, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k267" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (bruijn ##input.103 52 1)) ((bruijn error 64 15) (close _V0expand__syntax_k268) (##string ##string.2106) (quote ())) ((bruijn ##kk.102 53 1) (bruijn ##k.266 52 0) (bruijn expr 54 1)))
if(VDecodeBool(
VInlineNullP(
VGetArg(upenv, 52-1, 1)
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 64-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k268, env)}),
      VEncodePointer(&_V10string_D2106.sym, VPOINTER_OTHER),
      VNULL
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 53-1, 1)), runtime,
      VGetArg(upenv, 52-1, 0),
      VGetArg(upenv, 54-1, 1)
    );
}
 }
}
static void _V0expand__syntax_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k265" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda277) (close _V0expand__syntax_k267) (bruijn ##input.103 51 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda277, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k267, env)}),
      VGetArg(upenv, 51-1, 1)
    );
 }
}
static void _V0expand__syntax_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k247" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda263) (close _V0expand__syntax_k265) (bruijn ##input.103 50 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda263, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k265, env)}),
      VGetArg(upenv, 50-1, 1)
    );
 }
}
static void _V0expand__syntax_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k243" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda261) (close _V0expand__syntax_k247) (bruijn ##input.103 49 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda261, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k247, env)}),
      VGetArg(upenv, 49-1, 1)
    );
 }
}
static void _V0expand__syntax_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k240" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda259) (close _V0expand__syntax_k243) (bruijn ##input.103 48 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda259, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k243, env)}),
      VGetArg(upenv, 48-1, 1)
    );
 }
}
static void _V0expand__syntax_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k237" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda257) (close _V0expand__syntax_k240) (bruijn ##input.103 47 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda257, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k240, env)}),
      VGetArg(upenv, 47-1, 1)
    );
 }
}
static void _V0expand__syntax_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k230" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda252) (close _V0expand__syntax_k237) (bruijn ##input.103 46 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda252, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k237, env)}),
      VGetArg(upenv, 46-1, 1)
    );
 }
}
static void _V0expand__syntax_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k227" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda250) (close _V0expand__syntax_k230) (bruijn ##input.103 45 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda250, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k230, env)}),
      VGetArg(upenv, 45-1, 1)
    );
 }
}
static void _V0expand__syntax_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k224" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda240) (close _V0expand__syntax_k227) (bruijn ##input.103 44 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda240, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k227, env)}),
      VGetArg(upenv, 44-1, 1)
    );
 }
}
static void _V0expand__syntax_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k220" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda232) (close _V0expand__syntax_k224) (bruijn ##input.103 43 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda232, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k224, env)}),
      VGetArg(upenv, 43-1, 1)
    );
 }
}
static void _V0expand__syntax_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k215" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda222) (close _V0expand__syntax_k220) (bruijn ##input.103 42 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda222, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k220, env)}),
      VGetArg(upenv, 42-1, 1)
    );
 }
}
static void _V0expand__syntax_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k210" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda215) (close _V0expand__syntax_k215) (bruijn ##input.103 41 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda215, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k215, env)}),
      VGetArg(upenv, 41-1, 1)
    );
 }
}
static void _V0expand__syntax_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k207" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda211) (close _V0expand__syntax_k210) (bruijn ##input.103 40 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda211, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k210, env)}),
      VGetArg(upenv, 40-1, 1)
    );
 }
}
static void _V0expand__syntax_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k205" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda208) (close _V0expand__syntax_k207) (bruijn ##input.103 39 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda208, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k207, env)}),
      VGetArg(upenv, 39-1, 1)
    );
 }
}
static void _V0expand__syntax_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k194" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda188) (close _V0expand__syntax_k205) (bruijn ##input.103 38 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda188, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k205, env)}),
      VGetArg(upenv, 38-1, 1)
    );
 }
}
static void _V0expand__syntax_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k190" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda182) (close _V0expand__syntax_k194) (bruijn ##input.103 37 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda182, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k194, env)}),
      VGetArg(upenv, 37-1, 1)
    );
 }
}
static void _V0expand__syntax_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k186" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda177) (close _V0expand__syntax_k190) (bruijn ##input.103 36 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda177, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k190, env)}),
      VGetArg(upenv, 36-1, 1)
    );
 }
}
static void _V0expand__syntax_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k183" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda175) (close _V0expand__syntax_k186) (bruijn ##input.103 35 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda175, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k186, env)}),
      VGetArg(upenv, 35-1, 1)
    );
 }
}
static void _V0expand__syntax_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k181" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda174) (close _V0expand__syntax_k183) (bruijn ##input.103 34 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda174, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k183, env)}),
      VGetArg(upenv, 34-1, 1)
    );
 }
}
static void _V0expand__syntax_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k178" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda168) (close _V0expand__syntax_k181) (bruijn ##input.103 33 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda168, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k181, env)}),
      VGetArg(upenv, 33-1, 1)
    );
 }
}
static void _V0expand__syntax_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k173" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda159) (close _V0expand__syntax_k178) (bruijn ##input.103 32 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda159, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k178, env)}),
      VGetArg(upenv, 32-1, 1)
    );
 }
}
static void _V0expand__syntax_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k169" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda155) (close _V0expand__syntax_k173) (bruijn ##input.103 31 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda155, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k173, env)}),
      VGetArg(upenv, 31-1, 1)
    );
 }
}
static void _V0expand__syntax_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k166" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda151) (close _V0expand__syntax_k169) (bruijn ##input.103 30 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda151, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k169, env)}),
      VGetArg(upenv, 30-1, 1)
    );
 }
}
static void _V0expand__syntax_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k162" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda146) (close _V0expand__syntax_k166) (bruijn ##input.103 29 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda146, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k166, env)}),
      VGetArg(upenv, 29-1, 1)
    );
 }
}
static void _V0expand__syntax_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k159" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda143) (close _V0expand__syntax_k162) (bruijn ##input.103 28 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda143, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k162, env)}),
      VGetArg(upenv, 28-1, 1)
    );
 }
}
static void _V0expand__syntax_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k157" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda142) (close _V0expand__syntax_k159) (bruijn ##input.103 27 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda142, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k159, env)}),
      VGetArg(upenv, 27-1, 1)
    );
 }
}
static void _V0expand__syntax_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k154" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda138) (close _V0expand__syntax_k157) (bruijn ##input.103 26 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda138, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k157, env)}),
      VGetArg(upenv, 26-1, 1)
    );
 }
}
static void _V0expand__syntax_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k150" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda133) (close _V0expand__syntax_k154) (bruijn ##input.103 25 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda133, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k154, env)}),
      VGetArg(upenv, 25-1, 1)
    );
 }
}
static void _V0expand__syntax_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k147" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda130) (close _V0expand__syntax_k150) (bruijn ##input.103 24 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda130, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k150, env)}),
      VGetArg(upenv, 24-1, 1)
    );
 }
}
static void _V0expand__syntax_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k145" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda129) (close _V0expand__syntax_k147) (bruijn ##input.103 23 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda129, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k147, env)}),
      VGetArg(upenv, 23-1, 1)
    );
 }
}
static void _V0expand__syntax_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k142" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda127) (close _V0expand__syntax_k145) (bruijn ##input.103 22 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda127, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k145, env)}),
      VGetArg(upenv, 22-1, 1)
    );
 }
}
static void _V0expand__syntax_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k137" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda120) (close _V0expand__syntax_k142) (bruijn ##input.103 21 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda120, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k142, env)}),
      VGetArg(upenv, 21-1, 1)
    );
 }
}
static void _V0expand__syntax_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k134" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda115) (close _V0expand__syntax_k137) (bruijn ##input.103 20 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda115, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k137, env)}),
      VGetArg(upenv, 20-1, 1)
    );
 }
}
static void _V0expand__syntax_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k131" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda113) (close _V0expand__syntax_k134) (bruijn ##input.103 19 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda113, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k134, env)}),
      VGetArg(upenv, 19-1, 1)
    );
 }
}
static void _V0expand__syntax_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k128" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda109) (close _V0expand__syntax_k131) (bruijn ##input.103 18 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda109, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k131, env)}),
      VGetArg(upenv, 18-1, 1)
    );
 }
}
static void _V0expand__syntax_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k124" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda104) (close _V0expand__syntax_k128) (bruijn ##input.103 17 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda104, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k128, env)}),
      VGetArg(upenv, 17-1, 1)
    );
 }
}
static void _V0expand__syntax_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k121" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda101) (close _V0expand__syntax_k124) (bruijn ##input.103 16 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda101, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k124, env)}),
      VGetArg(upenv, 16-1, 1)
    );
 }
}
static void _V0expand__syntax_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k118" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda99) (close _V0expand__syntax_k121) (bruijn ##input.103 15 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda99, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k121, env)}),
      VGetArg(upenv, 15-1, 1)
    );
 }
}
static void _V0expand__syntax_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k115" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda96) (close _V0expand__syntax_k118) (bruijn ##input.103 14 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda96, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k118, env)}),
      VGetArg(upenv, 14-1, 1)
    );
 }
}
static void _V0expand__syntax_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k105" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda76) (close _V0expand__syntax_k115) (bruijn ##input.103 13 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda76, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k115, env)}),
      VGetArg(upenv, 13-1, 1)
    );
 }
}
static void _V0expand__syntax_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k102" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda74) (close _V0expand__syntax_k105) (bruijn ##input.103 12 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda74, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k105, env)}),
      VGetArg(upenv, 12-1, 1)
    );
 }
}
static void _V0expand__syntax_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k99" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda72) (close _V0expand__syntax_k102) (bruijn ##input.103 11 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda72, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k102, env)}),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0expand__syntax_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k83" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda49) (close _V0expand__syntax_k99) (bruijn ##input.103 10 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda49, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k99, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0expand__syntax_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k80" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda47) (close _V0expand__syntax_k83) (bruijn ##input.103 9 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda47, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k83, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0expand__syntax_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k77" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda44) (close _V0expand__syntax_k80) (bruijn ##input.103 8 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda44, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k80, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0expand__syntax_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k74" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda35) (close _V0expand__syntax_k77) (bruijn ##input.103 7 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda35, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k77, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0expand__syntax_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k70" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda34) (close _V0expand__syntax_k74) (bruijn ##input.103 6 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda34, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k74, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0expand__syntax_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k68" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda31) (close _V0expand__syntax_k70) (bruijn ##input.103 5 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda31, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k70, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0expand__syntax_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k65" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda26) (close _V0expand__syntax_k68) (bruijn ##input.103 4 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda26, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k68, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0expand__syntax_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k61" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda23) (close _V0expand__syntax_k65) (bruijn ##input.103 3 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda23, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k65, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__syntax_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k58" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda22) (close _V0expand__syntax_k61) (bruijn ##input.103 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda22, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k61, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0expand__syntax_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k48" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda9) (close _V0expand__syntax_k58) (bruijn ##input.103 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda9, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k58, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__syntax_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda7" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda8) (close _V0expand__syntax_k48) (bruijn ##input.103 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda8, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_k48, env)}),
      _var1
    );
 }
}
static void _V0expand__syntax_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda6" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda7) (bruijn ##k.265 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda7, env)}, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0expand__syntax_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda5" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__syntax_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 10 9) (bruijn ##k.264 0 0) (close _V0expand__syntax_lambda6))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda6, env)})
    );
 }
}
static void expand_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k42" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k43) (bruijn expand-syntax 8 9) (close _V0expand__syntax_lambda5))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k43, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__syntax_lambda5, env)})
    );
 }
}
static void _V0expand__toplevel_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k272" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k272, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 6 1) (bruijn ##k.1463 2 0) (bruijn ##x.1464 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k271" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn apply 15 16) (close _V0expand__toplevel_k272) (bruijn append 15 3) (bruijn ##x.1465 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k272, env)}),
      VGetArg(upenv, 15-1, 3),
      _var0
    );
 }
}
static void _V0expand__toplevel_lambda284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda284" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda284, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 14 14) (close _V0expand__toplevel_k271) (bruijn expand-toplevel 13 8) (bruijn ys 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k271, env)}),
      VGetArg(upenv, 13-1, 8),
      _var1
    );
 }
}
static void _V0expand__toplevel_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k270" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1462 0 0) ((close _V0expand__toplevel_lambda284) (bruijn ##k.1460 1 0) (##inline ##sys.cdr (bruijn ##expr.80 1 1))) ((bruijn ##k.1460 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda284, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda283" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda283, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.80 0 1)) ((bruijn equal? 12 7) (close _V0expand__toplevel_k270) (quote begin) (##inline ##sys.car (bruijn ##expr.80 0 1))) ((bruijn ##k.1460 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k270, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k276" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k276, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 9 1) (bruijn ##k.1451 2 0) (bruijn ##x.1452 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k275" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 18 19) (close _V0expand__toplevel_k276) (bruijn ##x.1453 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k276, env)}),
      _var0
    );
 }
}
static void _V0expand__toplevel_lambda288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda288" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda288, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-library 16 3) (close _V0expand__toplevel_k275) (##inline ##sys.cons (quote define-library) (##inline ##sys.cons (bruijn lib 1 1) (bruijn body 0 1))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k275, env)}),
      VInlineCons(
VEncodePointer(&_V0define__library.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[1],
      _var1
    )

    )

    );
 }
}
static void _V0expand__toplevel_lambda287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda287" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda287, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda288) (bruijn ##k.1450 0 0) (##inline ##sys.cdr (bruijn ##expr.82 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda288, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_lambda286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda286" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda286, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.82 0 1)) ((close _V0expand__toplevel_lambda287) (bruijn ##k.1448 0 0) (##inline ##sys.car (bruijn ##expr.82 0 1))) ((bruijn ##k.1448 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda287, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k274" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1447 0 0) ((close _V0expand__toplevel_lambda286) (bruijn ##k.1445 1 0) (##inline ##sys.cdr (bruijn ##expr.81 1 1))) ((bruijn ##k.1445 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda286, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda285" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda285, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.81 0 1)) ((bruijn equal? 13 7) (close _V0expand__toplevel_k274) (quote define-library) (##inline ##sys.car (bruijn ##expr.81 0 1))) ((bruijn ##k.1445 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k274, env)}),
      VEncodePointer(&_V0define__library.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k279" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k279, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 7 1) (bruijn ##k.1440 1 0) (bruijn ##x.1441 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_lambda290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda290" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda290, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn error 16 15) (close _V0expand__toplevel_k279) (##string ##string.2107) (##inline ##sys.cons (quote define-library) (bruijn noise 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k279, env)}),
      VEncodePointer(&_V10string_D2107.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define__library.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__toplevel_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k278" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1439 0 0) ((close _V0expand__toplevel_lambda290) (bruijn ##k.1437 1 0) (##inline ##sys.cdr (bruijn ##expr.83 1 1))) ((bruijn ##k.1437 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda290, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda289" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda289, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.83 0 1)) ((bruijn equal? 14 7) (close _V0expand__toplevel_k278) (quote define-library) (##inline ##sys.car (bruijn ##expr.83 0 1))) ((bruijn ##k.1437 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k278, env)}),
      VEncodePointer(&_V0define__library.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k281" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k281, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1433 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.84 1 1))) ((bruijn ##kk.78 6 1) (bruijn ##k.1431 1 0) (quote ())) ((bruijn ##k.1431 1 0) #f)) ((bruijn ##k.1431 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->vars[0],
      VNULL
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda291" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda291, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.84 0 1)) ((bruijn equal? 15 7) (close _V0expand__toplevel_k281) (quote import) (##inline ##sys.car (bruijn ##expr.84 0 1))) ((bruijn ##k.1431 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k281, env)}),
      VEncodePointer(&_V0import.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k286" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k286, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 13 1) (bruijn ##k.1418 3 0) (bruijn ##x.1419 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k285" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 22 1) (close _V0expand__toplevel_k286) (##inline ##sys.cons (quote ##vcore.multidefine) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.load-library) (##inline ##sys.cons (bruijn ##x.1426 1 0) (quote ()))) (quote ()))) (bruijn ##x.1421 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k286, env)}),
      VInlineCons(
VEncodePointer(&_V10vcore_Dmultidefine.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dload__library.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      VNULL
    )

    )
,
      VNULL
    )

    )
,
      _var0
    );
 }
}
static void _V0expand__toplevel_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k284" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-toplevel 20 8) (close _V0expand__toplevel_k285) (##inline ##sys.cons (quote import) (bruijn rest 1 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k285, env)}),
      VInlineCons(
VEncodePointer(&_V0import.sym, VPOINTER_OTHER),
      upenv->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_lambda295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda295" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda295, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn mangle-library 20 17) (close _V0expand__toplevel_k284) (bruijn lib 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k284, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__toplevel_lambda294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda294" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda294, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda295) (bruijn ##k.1417 0 0) (##inline ##sys.cdr (bruijn ##expr.86 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda295, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_lambda293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda293" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda293, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.86 0 1)) ((close _V0expand__toplevel_lambda294) (bruijn ##k.1415 0 0) (##inline ##sys.car (bruijn ##expr.86 0 1))) ((bruijn ##k.1415 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda294, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k283" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1414 0 0) ((close _V0expand__toplevel_lambda293) (bruijn ##k.1412 1 0) (##inline ##sys.cdr (bruijn ##expr.85 1 1))) ((bruijn ##k.1412 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda293, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda292" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda292, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.85 0 1)) ((bruijn equal? 16 7) (close _V0expand__toplevel_k283) (quote import) (##inline ##sys.car (bruijn ##expr.85 0 1))) ((bruijn ##k.1412 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k283, env)}),
      VEncodePointer(&_V0import.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k289" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k289, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 14 1) (bruijn ##k.1399 1 0) (bruijn ##x.1400 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_lambda301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda301" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda301, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-toplevel 22 8) (close _V0expand__toplevel_k289) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 2 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 1 1) (bruijn body 0 1))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k289, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[1],
      _var1
    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__toplevel_lambda300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda300" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda300, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda301) (bruijn ##k.1398 0 0) (##inline ##sys.cdr (bruijn ##expr.88 3 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda301, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_lambda299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda299" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda299, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda300) (bruijn ##k.1397 0 0) (##inline ##sys.cdr (bruijn ##expr.89 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda300, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_lambda298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda298" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda298, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.89 0 1)) ((close _V0expand__toplevel_lambda299) (bruijn ##k.1395 0 0) (##inline ##sys.car (bruijn ##expr.89 0 1))) ((bruijn ##k.1395 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda299, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda297" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda297, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.88 0 1)) ((close _V0expand__toplevel_lambda298) (bruijn ##k.1393 0 0) (##inline ##sys.car (bruijn ##expr.88 0 1))) ((bruijn ##k.1393 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda298, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k288" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1392 0 0) ((close _V0expand__toplevel_lambda297) (bruijn ##k.1390 1 0) (##inline ##sys.cdr (bruijn ##expr.87 1 1))) ((bruijn ##k.1390 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda297, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda296" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda296, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.87 0 1)) ((bruijn equal? 17 7) (close _V0expand__toplevel_k288) (quote define) (##inline ##sys.car (bruijn ##expr.87 0 1))) ((bruijn ##k.1390 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k288, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k296" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k296, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 18 1) (bruijn ##k.1374 5 0) (bruijn ##x.1376 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0expand__toplevel_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k295" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 27 19) (close _V0expand__toplevel_k296) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn x 6 1) (##inline ##sys.cons (bruijn ##x.1381 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k296, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 6-1, 1),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__toplevel_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k294" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 25 9) (close _V0expand__toplevel_k295) (bruijn body 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k295, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k298" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k298, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 17 1) (bruijn ##k.1374 4 0) (bruijn ##x.1376 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k297" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 26 19) (close _V0expand__toplevel_k298) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn x 5 1) (##inline ##sys.cons (bruijn ##x.1381 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k298, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__toplevel_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k293" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1382 0 0) ((bruijn error 25 15) (close _V0expand__toplevel_k294) (##string ##string.2108) (bruijn x 4 1)) ((bruijn expand-syntax 24 9) (close _V0expand__toplevel_k297) (bruijn body 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k294, env)}),
      VEncodePointer(&_V10string_D2108.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k297, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0expand__toplevel_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k292" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 24 12) (close _V0expand__toplevel_k293) (bruijn ##x.1383 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k293, env)}),
      _var0
    );
 }
}
static void _V0expand__toplevel_lambda306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda306" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda306, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.92 1 1))) ((bruijn symbol? 23 13) (close _V0expand__toplevel_k292) (bruijn x 2 1)) ((bruijn ##k.1374 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k292, env)}),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda305" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda305, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 1)) ((close _V0expand__toplevel_lambda306) (bruijn ##k.1372 0 0) (##inline ##sys.car (bruijn ##expr.92 0 1))) ((bruijn ##k.1372 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda306, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda304" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda304, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda305) (bruijn ##k.1371 0 0) (##inline ##sys.cdr (bruijn ##expr.91 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda305, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_lambda303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda303" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda303, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.91 0 1)) ((close _V0expand__toplevel_lambda304) (bruijn ##k.1369 0 0) (##inline ##sys.car (bruijn ##expr.91 0 1))) ((bruijn ##k.1369 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda304, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k291" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1368 0 0) ((close _V0expand__toplevel_lambda303) (bruijn ##k.1366 1 0) (##inline ##sys.cdr (bruijn ##expr.90 1 1))) ((bruijn ##k.1366 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda303, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda302" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda302, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.90 0 1)) ((bruijn equal? 18 7) (close _V0expand__toplevel_k291) (quote define) (##inline ##sys.car (bruijn ##expr.90 0 1))) ((bruijn ##k.1366 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k291, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k301" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k301, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 12 1) (bruijn ##k.1361 1 0) (bruijn ##x.1362 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_lambda308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda308" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda308, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn error 21 15) (close _V0expand__toplevel_k301) (##string ##string.2109) (##inline ##sys.cons (quote define) (bruijn noise 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k301, env)}),
      VEncodePointer(&_V10string_D2109.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__toplevel_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k300" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1360 0 0) ((close _V0expand__toplevel_lambda308) (bruijn ##k.1358 1 0) (##inline ##sys.cdr (bruijn ##expr.93 1 1))) ((bruijn ##k.1358 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda308, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda307" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda307, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.93 0 1)) ((bruijn equal? 19 7) (close _V0expand__toplevel_k300) (quote define) (##inline ##sys.car (bruijn ##expr.93 0 1))) ((bruijn ##k.1358 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k300, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k309" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k309, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 21 1) (bruijn ##k.1317 6 0) (bruijn ##x.1319 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 1)), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0expand__toplevel_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k308" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 30 19) (close _V0expand__toplevel_k309) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn f 7 1) (##inline ##sys.cons (bruijn ##x.1325 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k309, env)}),
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 7-1, 1),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__toplevel_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k307" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 28 9) (close _V0expand__toplevel_k308) (bruijn l 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k308, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_lambda317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda317" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda317, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.97 4 1) (bruijn ##k.1347 0 0) (quote ok))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__toplevel_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k310" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1346 0 0) ((close _V0expand__toplevel_lambda317) (bruijn ##k.1344 1 0) (##inline ##sys.cdr (bruijn ##expr.99 1 1))) ((bruijn ##k.1344 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda317, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda316" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda316, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.99 0 1)) ((bruijn equal? 31 7) (close _V0expand__toplevel_k310) (quote lambda) (##inline ##sys.car (bruijn ##expr.99 0 1))) ((bruijn ##k.1344 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k310, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda319" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda319, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.97 5 1) (bruijn ##k.1341 0 0) (quote ok))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      _var0,
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__toplevel_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k312" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1340 0 0) ((close _V0expand__toplevel_lambda319) (bruijn ##k.1338 1 0) (##inline ##sys.cdr (bruijn ##expr.100 1 1))) ((bruijn ##k.1338 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda319, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda318" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda318, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.100 0 1)) ((bruijn equal? 32 7) (close _V0expand__toplevel_k312) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.100 0 1))) ((bruijn ##k.1338 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k312, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda321" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda321, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.97 6 1) (bruijn ##k.1335 0 0) (quote ok))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      _var0,
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__toplevel_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k314" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k314, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1334 0 0) ((close _V0expand__toplevel_lambda321) (bruijn ##k.1332 1 0) (##inline ##sys.cdr (bruijn ##expr.101 1 1))) ((bruijn ##k.1332 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda321, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda320" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda320, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.101 0 1)) ((bruijn equal? 33 7) (close _V0expand__toplevel_k314) (quote ##vcore.function) (##inline ##sys.car (bruijn ##expr.101 0 1))) ((bruijn ##k.1332 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k314, env)}),
      VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k316" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k316, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.97 5 1) (bruijn ##k.1327 4 0) (bruijn ##x.1331 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k315" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 33 15) (close _V0expand__toplevel_k316) (##string ##string.2110) (bruijn l 8 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k316, env)}),
      VEncodePointer(&_V10string_D2110.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0expand__toplevel_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k313" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda320) (close _V0expand__toplevel_k315) (bruijn ##input.98 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda320, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k315, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k311" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda318) (close _V0expand__toplevel_k313) (bruijn ##input.98 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda318, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k313, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__toplevel_lambda315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda315" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda315, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda316) (close _V0expand__toplevel_k311) (bruijn ##input.98 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda316, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k311, env)}),
      _var1
    );
 }
}
static void _V0expand__toplevel_lambda314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda314" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__toplevel_lambda314, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda314, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda315) (bruijn ##k.1326 0 0) (bruijn l 4 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda315, env)}, runtime,
      _var0,
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k306" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 28 9) (close _V0expand__toplevel_k307) (close _V0expand__toplevel_lambda314))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k307, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda314, env)})
    );
 }
}
static void _V0expand__toplevel_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k319" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k319, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 20 1) (bruijn ##k.1317 5 0) (bruijn ##x.1319 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0expand__toplevel_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k318" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 29 19) (close _V0expand__toplevel_k319) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn f 6 1) (##inline ##sys.cons (bruijn ##x.1325 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k319, env)}),
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 6-1, 1),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__toplevel_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k317" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 27 9) (close _V0expand__toplevel_k318) (bruijn l 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k318, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_lambda325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda325" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda325, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.97 4 1) (bruijn ##k.1347 0 0) (quote ok))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__toplevel_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k320" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1346 0 0) ((close _V0expand__toplevel_lambda325) (bruijn ##k.1344 1 0) (##inline ##sys.cdr (bruijn ##expr.99 1 1))) ((bruijn ##k.1344 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda325, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda324" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda324, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.99 0 1)) ((bruijn equal? 30 7) (close _V0expand__toplevel_k320) (quote lambda) (##inline ##sys.car (bruijn ##expr.99 0 1))) ((bruijn ##k.1344 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k320, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda327" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda327, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.97 5 1) (bruijn ##k.1341 0 0) (quote ok))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      _var0,
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__toplevel_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k322" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1340 0 0) ((close _V0expand__toplevel_lambda327) (bruijn ##k.1338 1 0) (##inline ##sys.cdr (bruijn ##expr.100 1 1))) ((bruijn ##k.1338 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda327, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda326" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda326, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.100 0 1)) ((bruijn equal? 31 7) (close _V0expand__toplevel_k322) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.100 0 1))) ((bruijn ##k.1338 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k322, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda329" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda329, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.97 6 1) (bruijn ##k.1335 0 0) (quote ok))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      _var0,
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__toplevel_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k324" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1334 0 0) ((close _V0expand__toplevel_lambda329) (bruijn ##k.1332 1 0) (##inline ##sys.cdr (bruijn ##expr.101 1 1))) ((bruijn ##k.1332 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda329, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda328" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda328, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.101 0 1)) ((bruijn equal? 32 7) (close _V0expand__toplevel_k324) (quote ##vcore.function) (##inline ##sys.car (bruijn ##expr.101 0 1))) ((bruijn ##k.1332 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k324, env)}),
      VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k326" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k326, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.97 5 1) (bruijn ##k.1327 4 0) (bruijn ##x.1331 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k325" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 32 15) (close _V0expand__toplevel_k326) (##string ##string.2110) (bruijn l 7 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k326, env)}),
      VEncodePointer(&_V10string_D2110.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0expand__toplevel_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k323" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda328) (close _V0expand__toplevel_k325) (bruijn ##input.98 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda328, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k325, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k321" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda326) (close _V0expand__toplevel_k323) (bruijn ##input.98 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda326, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k323, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__toplevel_lambda323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda323" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda323, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda324) (close _V0expand__toplevel_k321) (bruijn ##input.98 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda324, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k321, env)}),
      _var1
    );
 }
}
static void _V0expand__toplevel_lambda322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda322" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__toplevel_lambda322, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda322, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda323) (bruijn ##k.1326 0 0) (bruijn l 3 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda323, env)}, runtime,
      _var0,
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k305" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1350 0 0) ((bruijn error 27 15) (close _V0expand__toplevel_k306) (##string ##string.2111) (bruijn f 4 1)) ((bruijn call/cc 27 9) (close _V0expand__toplevel_k317) (close _V0expand__toplevel_lambda322)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k306, env)}),
      VEncodePointer(&_V10string_D2111.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k317, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda322, env)})
    );
}
 }
}
static void _V0expand__toplevel_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k304" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 26 12) (close _V0expand__toplevel_k305) (bruijn ##x.1351 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k305, env)}),
      _var0
    );
 }
}
static void _V0expand__toplevel_lambda313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda313" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda313, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.96 1 1))) ((bruijn string? 25 18) (close _V0expand__toplevel_k304) (bruijn f 2 1)) ((bruijn ##k.1317 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k304, env)}),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda312" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda312, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.96 0 1)) ((close _V0expand__toplevel_lambda313) (bruijn ##k.1315 0 0) (##inline ##sys.car (bruijn ##expr.96 0 1))) ((bruijn ##k.1315 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda313, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda311" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda311, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda312) (bruijn ##k.1314 0 0) (##inline ##sys.cdr (bruijn ##expr.95 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda312, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_lambda310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda310" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda310, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.95 0 1)) ((close _V0expand__toplevel_lambda311) (bruijn ##k.1312 0 0) (##inline ##sys.car (bruijn ##expr.95 0 1))) ((bruijn ##k.1312 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda311, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k303" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1311 0 0) ((close _V0expand__toplevel_lambda310) (bruijn ##k.1309 1 0) (##inline ##sys.cdr (bruijn ##expr.94 1 1))) ((bruijn ##k.1309 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda310, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda309" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda309, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.94 0 1)) ((bruijn equal? 20 7) (close _V0expand__toplevel_k303) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.94 0 1))) ((bruijn ##k.1309 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k303, env)}),
      VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k329" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k329, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 13 1) (bruijn ##k.1306 2 0) (bruijn ##x.1307 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k328" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 22 19) (close _V0expand__toplevel_k329) (bruijn ##x.1308 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k329, env)}),
      _var0
    );
 }
}
static void _V0expand__toplevel_lambda330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda330" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda330, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 20 9) (close _V0expand__toplevel_k328) (bruijn expr 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k328, env)}),
      _var1
    );
 }
}
static void _V0expand__toplevel_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k330" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k330, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 21 15) (bruijn ##k.1295 10 0) (##string ##string.2112))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 15)), runtime,
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10string_D2112.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__toplevel_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k327" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda330) (close _V0expand__toplevel_k330) (bruijn ##input.79 9 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda330, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k330, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0expand__toplevel_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k302" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda309) (close _V0expand__toplevel_k327) (bruijn ##input.79 8 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda309, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k327, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0expand__toplevel_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k299" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda307) (close _V0expand__toplevel_k302) (bruijn ##input.79 7 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda307, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k302, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0expand__toplevel_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k290" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda302) (close _V0expand__toplevel_k299) (bruijn ##input.79 6 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda302, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k299, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0expand__toplevel_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k287" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda296) (close _V0expand__toplevel_k290) (bruijn ##input.79 5 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda296, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k290, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0expand__toplevel_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k282" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda292) (close _V0expand__toplevel_k287) (bruijn ##input.79 4 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda292, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k287, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k280" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda291) (close _V0expand__toplevel_k282) (bruijn ##input.79 3 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda291, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k282, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k277" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda289) (close _V0expand__toplevel_k280) (bruijn ##input.79 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda289, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k280, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k273" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda285) (close _V0expand__toplevel_k277) (bruijn ##input.79 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda285, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k277, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__toplevel_lambda282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda282" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda282, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda283) (close _V0expand__toplevel_k273) (bruijn ##input.79 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda283, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_k273, env)}),
      _var1
    );
 }
}
static void _V0expand__toplevel_lambda281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda281" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__toplevel_lambda281, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda281, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda282) (bruijn ##k.1294 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda282, env)}, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0expand__toplevel_lambda280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda280" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__toplevel_lambda280, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__toplevel_lambda280, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 9 9) (bruijn ##k.1293 0 0) (close _V0expand__toplevel_lambda281))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda281, env)})
    );
 }
}
static void expand_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k41" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k42) (bruijn expand-toplevel 7 8) (close _V0expand__toplevel_lambda280))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k42, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__toplevel_lambda280, env)})
    );
 }
}
static void _V0expand__let_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k331" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_k331, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1534 1 0) (bruijn ##expr.60 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_lambda345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda345" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda345, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.67 1 1))) ((bruijn ##kk.64 4 1) (bruijn ##k.1548 0 0) (##inline ##sys.cdr (bruijn ##expr.65 9 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.61 9 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.62 9 3))) ((bruijn ##k.1548 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 9-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 9-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 9-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda344" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda344, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.67 0 1)) ((close _V0loop_lambda345) (bruijn ##k.1546 0 0) (##inline ##sys.car (bruijn ##expr.67 0 1))) ((bruijn ##k.1546 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda345, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda343" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda343, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda344) (bruijn ##k.1545 0 0) (##inline ##sys.cdr (bruijn ##expr.66 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda344, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda342" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda342, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.66 0 1)) ((close _V0loop_lambda343) (bruijn ##k.1543 0 0) (##inline ##sys.car (bruijn ##expr.66 0 1))) ((bruijn ##k.1543 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda343, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k337" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k337, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.63 10 1) (bruijn ##k.1539 3 0) (bruijn ##expr.65 8 1) (bruijn ##x.1541 1 0) (bruijn ##x.1542 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 8-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k336" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 23 8) (close _V0loop_k337) (bruijn ##vals.62 7 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k337, env)}),
      VGetArg(upenv, 7-1, 3)
    );
 }
}
static void _V0loop_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k335" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 22 8) (close _V0loop_k336) (bruijn ##xs.61 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k336, env)}),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_lambda341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda341" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda341, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda341, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda342) (close _V0loop_k335) (##inline ##sys.car (bruijn ##expr.65 5 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda342, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k335, env)}),
      VInlineCar(
VGetArg(upenv, 5-1, 1)
    )

    );
 }
}
static void _V0loop_lambda340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda340" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 20 9) (bruijn ##k.1538 0 0) (close _V0loop_lambda341))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda341, env)})
    );
 }
}
static void _V0loop_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k334" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 19 10) (bruijn ##k.1536 3 0) (close _V0loop_lambda340) (bruijn loop 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 10)), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda340, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k333" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.63 4 1) (close _V0loop_k334) (bruijn ##expr.65 2 1) (bruijn ##x.1559 1 0) (bruijn ##x.1560 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k334, env)}),
      upenv->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k332" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 17 8) (close _V0loop_k333) (bruijn ##vals.62 1 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k333, env)}),
      upenv->vars[3]
    );
 }
}
static void _V0loop_lambda351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda351" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda351, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.67 1 1))) ((bruijn ##kk.64 4 1) (bruijn ##k.1548 0 0) (##inline ##sys.cdr (bruijn ##expr.65 6 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.61 6 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.62 6 3))) ((bruijn ##k.1548 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 6-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 6-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda350" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda350, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.67 0 1)) ((close _V0loop_lambda351) (bruijn ##k.1546 0 0) (##inline ##sys.car (bruijn ##expr.67 0 1))) ((bruijn ##k.1546 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda351, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda349" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda349, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda350) (bruijn ##k.1545 0 0) (##inline ##sys.cdr (bruijn ##expr.66 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda350, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda348" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda348, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.66 0 1)) ((close _V0loop_lambda349) (bruijn ##k.1543 0 0) (##inline ##sys.car (bruijn ##expr.66 0 1))) ((bruijn ##k.1543 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda349, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k340" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k340, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.63 7 1) (bruijn ##k.1539 3 0) (bruijn ##expr.65 5 1) (bruijn ##x.1541 1 0) (bruijn ##x.1542 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k339" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 20 8) (close _V0loop_k340) (bruijn ##vals.62 4 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k340, env)}),
      upenv->up->up->up->vars[3]
    );
 }
}
static void _V0loop_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k338" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 19 8) (close _V0loop_k339) (bruijn ##xs.61 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k339, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda347" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda347, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda347, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda348) (close _V0loop_k338) (##inline ##sys.car (bruijn ##expr.65 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda348, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k338, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda346" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 17 9) (bruijn ##k.1538 0 0) (close _V0loop_lambda347))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda347, env)})
    );
 }
}
static void _V0loop_lambda339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda339" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda339, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda339, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.65 0 1))) ((bruijn reverse 16 8) (close _V0loop_k332) (bruijn ##xs.61 0 2)) ((bruijn call-with-values 16 10) (bruijn ##k.1536 0 0) (close _V0loop_lambda346) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k332, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda346, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0expand__let_lambda338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda338" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda338, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0expand__let_k331) (bruijn loop 0 1) (close _V0loop_lambda339))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_k331, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda339, env)})
    );
 }
}
static void _V0expand__let_lambda337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda337" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__let_lambda337, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda337, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__let_lambda338) (bruijn ##k.1533 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda338, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__let_lambda336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_lambda336" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_lambda336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 13 9) (bruijn ##k.1532 0 0) (close _V0expand__let_lambda337))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda337, env)})
    );
 }
}
static void _V0expand__let_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k341" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_k341, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.57 6 1) (bruijn ##k.1564 1 0) (bruijn ##x.1565 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__let_lambda353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda353" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda353, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 13 9) (close _V0expand__let_k341) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 1 2) (bruijn body 0 1))) (bruijn vals 1 3)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_k341, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[2],
      _var1
    )

    )
,
      upenv->vars[3]
    )

    );
 }
}
static void _V0expand__let_lambda352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0expand__let_lambda352" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0expand__let_lambda352, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda352, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0expand__let_lambda353) (bruijn ##k.1562 0 0) (##inline ##sys.cdr (bruijn ##expr.59 2 1))) ((bruijn ##k.1562 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda353, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__let_lambda335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda335" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda335, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 12 10) (bruijn ##k.1531 0 0) (close _V0expand__let_lambda336) (close _V0expand__let_lambda352))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda336, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda352, env)})
    );
 }
}
static void _V0expand__let_lambda334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda334" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda334, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.59 0 1)) ((close _V0expand__let_lambda335) (bruijn ##k.1529 0 0) (##inline ##sys.car (bruijn ##expr.59 0 1))) ((bruijn ##k.1529 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda335, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__let_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k343" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_k343, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1484 1 0) (bruijn ##expr.70 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_lambda367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda367" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda367, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.77 1 1))) ((bruijn ##kk.74 4 1) (bruijn ##k.1498 0 0) (##inline ##sys.cdr (bruijn ##expr.75 9 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.71 9 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.72 9 3))) ((bruijn ##k.1498 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 9-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 9-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 9-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda366" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda366, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.77 0 1)) ((close _V0loop_lambda367) (bruijn ##k.1496 0 0) (##inline ##sys.car (bruijn ##expr.77 0 1))) ((bruijn ##k.1496 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda367, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda365" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda365, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda366) (bruijn ##k.1495 0 0) (##inline ##sys.cdr (bruijn ##expr.76 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda366, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda364" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda364, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 1)) ((close _V0loop_lambda365) (bruijn ##k.1493 0 0) (##inline ##sys.car (bruijn ##expr.76 0 1))) ((bruijn ##k.1493 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda365, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k349, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.73 10 1) (bruijn ##k.1489 3 0) (bruijn ##expr.75 8 1) (bruijn ##x.1491 1 0) (bruijn ##x.1492 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 8-1, 1),
      upenv->vars[0],
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 26 8) (close _V0loop_k349) (bruijn ##vals.72 7 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k349, env)}),
      VGetArg(upenv, 7-1, 3)
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 25 8) (close _V0loop_k348) (bruijn ##xs.71 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k348, env)}),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_lambda363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda363" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda363, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda363, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda364) (close _V0loop_k347) (##inline ##sys.car (bruijn ##expr.75 5 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda364, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k347, env)}),
      VInlineCar(
VGetArg(upenv, 5-1, 1)
    )

    );
 }
}
static void _V0loop_lambda362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda362" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 23 9) (bruijn ##k.1488 0 0) (close _V0loop_lambda363))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda363, env)})
    );
 }
}
static void _V0loop_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k346" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 22 10) (bruijn ##k.1486 3 0) (close _V0loop_lambda362) (bruijn loop 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 10)), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda362, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k345" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.73 4 1) (close _V0loop_k346) (bruijn ##expr.75 2 1) (bruijn ##x.1509 1 0) (bruijn ##x.1510 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k346, env)}),
      upenv->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k344" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 20 8) (close _V0loop_k345) (bruijn ##vals.72 1 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k345, env)}),
      upenv->vars[3]
    );
 }
}
static void _V0loop_lambda373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda373" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda373, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.77 1 1))) ((bruijn ##kk.74 4 1) (bruijn ##k.1498 0 0) (##inline ##sys.cdr (bruijn ##expr.75 6 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.71 6 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.72 6 3))) ((bruijn ##k.1498 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 6-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 6-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda372" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda372, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.77 0 1)) ((close _V0loop_lambda373) (bruijn ##k.1496 0 0) (##inline ##sys.car (bruijn ##expr.77 0 1))) ((bruijn ##k.1496 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda373, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda371" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda371, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda372) (bruijn ##k.1495 0 0) (##inline ##sys.cdr (bruijn ##expr.76 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda372, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda370" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda370, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 1)) ((close _V0loop_lambda371) (bruijn ##k.1493 0 0) (##inline ##sys.car (bruijn ##expr.76 0 1))) ((bruijn ##k.1493 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda371, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k352" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k352, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.73 7 1) (bruijn ##k.1489 3 0) (bruijn ##expr.75 5 1) (bruijn ##x.1491 1 0) (bruijn ##x.1492 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->vars[0],
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 23 8) (close _V0loop_k352) (bruijn ##vals.72 4 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k352, env)}),
      upenv->up->up->up->vars[3]
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 22 8) (close _V0loop_k351) (bruijn ##xs.71 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k351, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda369" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda369, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda369, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda370) (close _V0loop_k350) (##inline ##sys.car (bruijn ##expr.75 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda370, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k350, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda368" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 20 9) (bruijn ##k.1488 0 0) (close _V0loop_lambda369))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda369, env)})
    );
 }
}
static void _V0loop_lambda361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda361" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda361, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda361, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.75 0 1))) ((bruijn reverse 19 8) (close _V0loop_k344) (bruijn ##xs.71 0 2)) ((bruijn call-with-values 19 10) (bruijn ##k.1486 0 0) (close _V0loop_lambda368) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k344, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda368, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0expand__let_lambda360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda360" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda360, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0expand__let_k343) (bruijn loop 0 1) (close _V0loop_lambda361))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_k343, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda361, env)})
    );
 }
}
static void _V0expand__let_lambda359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda359" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__let_lambda359, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda359, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__let_lambda360) (bruijn ##k.1483 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda360, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__let_lambda358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_lambda358" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_lambda358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 16 9) (bruijn ##k.1482 0 0) (close _V0expand__let_lambda359))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda359, env)})
    );
 }
}
static void _V0expand__let_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k353" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_k353, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.57 9 1) (bruijn ##k.1514 1 0) (bruijn ##x.1515 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__let_lambda375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda375" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda375, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 16 9) (close _V0expand__let_k353) (##inline ##sys.cons (quote letrec) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn loop 4 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 1 2) (bruijn body 0 1))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (bruijn loop 4 1) (bruijn vals 1 3)) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_k353, env)}),
      VInlineCons(
VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
upenv->up->up->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[2],
      _var1
    )

    )
,
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
upenv->up->up->up->vars[1],
      upenv->vars[3]
    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__let_lambda374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0expand__let_lambda374" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0expand__let_lambda374, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda374, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0expand__let_lambda375) (bruijn ##k.1512 0 0) (##inline ##sys.cdr (bruijn ##expr.69 2 1))) ((bruijn ##k.1512 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda375, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__let_lambda357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda357" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda357, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 15 10) (bruijn ##k.1481 0 0) (close _V0expand__let_lambda358) (close _V0expand__let_lambda374))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda358, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda374, env)})
    );
 }
}
static void _V0expand__let_lambda356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda356" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda356, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 1)) ((close _V0expand__let_lambda357) (bruijn ##k.1479 0 0) (##inline ##sys.car (bruijn ##expr.69 0 1))) ((bruijn ##k.1479 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda357, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__let_lambda355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda355" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda355, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__let_lambda356) (bruijn ##k.1478 0 0) (##inline ##sys.cdr (bruijn ##expr.68 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda356, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__let_lambda354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda354" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda354, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.68 0 1)) ((close _V0expand__let_lambda355) (bruijn ##k.1476 0 0) (##inline ##sys.car (bruijn ##expr.68 0 1))) ((bruijn ##k.1476 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda355, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__let_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k356" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_k356, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 14 15) (bruijn ##k.1470 4 0) (##string ##string.2112))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 15)), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D2112.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__let_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k355" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.57 4 1) (close _V0expand__let_k356) (bruijn ##x.1474 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_k356, env)}),
      _var0
    );
 }
}
static void _V0expand__let_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k354" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 12 15) (close _V0expand__let_k355) (##string ##string.2113) (##inline ##sys.cons (quote let) (bruijn expr 4 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_k355, env)}),
      VEncodePointer(&_V10string_D2113.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    )

    );
 }
}
static void _V0expand__let_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k342" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__let_lambda354) (close _V0expand__let_k354) (bruijn ##input.58 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda354, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_k354, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__let_lambda333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda333" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda333, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__let_lambda334) (close _V0expand__let_k342) (bruijn ##input.58 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda334, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_k342, env)}),
      _var1
    );
 }
}
static void _V0expand__let_lambda332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda332" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__let_lambda332, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda332, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__let_lambda333) (bruijn ##k.1469 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda333, env)}, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0expand__let_lambda331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda331" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__let_lambda331, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__let_lambda331, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 8 9) (bruijn ##k.1468 0 0) (close _V0expand__let_lambda332))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda332, env)})
    );
 }
}
static void expand_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k40" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k41) (bruijn expand-let 6 7) (close _V0expand__let_lambda331))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k41, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__let_lambda331, env)})
    );
 }
}
static void _V0expand__lambda_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k360" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k360, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 9 1) (bruijn ##k.1597 4 0) (##inline ##sys.cons (bruijn args 6 1) (##inline ##sys.cons (bruijn ##x.1602 0 0) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
VGetArg(upenv, 6-1, 1),
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__lambda_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k359" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 15 9) (close _V0expand__lambda_k360) (bruijn body 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k360, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__lambda_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k361" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k361, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 8 1) (bruijn ##k.1597 3 0) (##inline ##sys.cons (bruijn args 5 1) (##inline ##sys.cons (bruijn ##x.1602 0 0) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
VGetArg(upenv, 5-1, 1),
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__lambda_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k358" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1603 0 0) ((bruijn error 15 15) (close _V0expand__lambda_k359) (##string ##string.2114) (bruijn args 4 1)) ((bruijn expand-syntax 14 9) (close _V0expand__lambda_k361) (bruijn body 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k359, env)}),
      VEncodePointer(&_V10string_D2114.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k361, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0expand__lambda_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k357" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 14 12) (close _V0expand__lambda_k358) (bruijn ##x.1604 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k358, env)}),
      _var0
    );
 }
}
static void _V0expand__lambda_lambda382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda382" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_lambda382, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.55 1 1))) ((bruijn valid-args? 12 5) (close _V0expand__lambda_k357) (bruijn args 2 1)) ((bruijn ##k.1597 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k357, env)}),
      upenv->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__lambda_lambda381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda381" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_lambda381, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.55 0 1)) ((close _V0expand__lambda_lambda382) (bruijn ##k.1595 0 0) (##inline ##sys.car (bruijn ##expr.55 0 1))) ((bruijn ##k.1595 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_lambda382, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__lambda_lambda380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda380" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_lambda380, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__lambda_lambda381) (bruijn ##k.1594 0 0) (##inline ##sys.cdr (bruijn ##expr.54 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_lambda381, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__lambda_lambda379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda379" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_lambda379, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.54 0 1)) ((close _V0expand__lambda_lambda380) (bruijn ##k.1592 0 0) (##inline ##sys.car (bruijn ##expr.54 0 1))) ((bruijn ##k.1592 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_lambda380, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__lambda_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k367" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k367, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 10 1) (bruijn ##k.1582 5 0) (bruijn ##x.1583 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0expand__lambda_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k366" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-lambda 16 6) (close _V0expand__lambda_k367) (##inline ##sys.cons (bruijn args 5 1) (##inline ##sys.cons (bruijn ##x.1587 0 0) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k367, env)}),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__lambda_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k365" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn collect-defines 15 1) (close _V0expand__lambda_k366) (bruijn body 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k366, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__lambda_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k369" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k369, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 9 1) (bruijn ##k.1582 4 0) (bruijn ##x.1583 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__lambda_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k368" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-lambda 15 6) (close _V0expand__lambda_k369) (##inline ##sys.cons (bruijn args 4 1) (##inline ##sys.cons (bruijn ##x.1587 0 0) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k369, env)}),
      VInlineCons(
upenv->up->up->up->vars[1],
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__lambda_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k364" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1588 0 0) ((bruijn error 15 15) (close _V0expand__lambda_k365) (##string ##string.2114) (bruijn args 3 1)) ((bruijn collect-defines 14 1) (close _V0expand__lambda_k368) (bruijn body 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k365, env)}),
      VEncodePointer(&_V10string_D2114.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k368, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0expand__lambda_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k363" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 14 12) (close _V0expand__lambda_k364) (bruijn ##x.1589 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k364, env)}),
      _var0
    );
 }
}
static void _V0expand__lambda_lambda385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda385" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_lambda385, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn valid-args? 12 5) (close _V0expand__lambda_k363) (bruijn args 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k363, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__lambda_lambda384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda384" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_lambda384, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__lambda_lambda385) (bruijn ##k.1581 0 0) (##inline ##sys.cdr (bruijn ##expr.56 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_lambda385, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__lambda_lambda383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda383" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_lambda383, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 1)) ((close _V0expand__lambda_lambda384) (bruijn ##k.1579 0 0) (##inline ##sys.car (bruijn ##expr.56 0 1))) ((bruijn ##k.1579 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_lambda384, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__lambda_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k372" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k372, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 13 15) (bruijn ##k.1573 4 0) (##string ##string.2112))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 15)), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D2112.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__lambda_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k371" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.52 4 1) (close _V0expand__lambda_k372) (bruijn ##x.1577 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k372, env)}),
      _var0
    );
 }
}
static void _V0expand__lambda_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k370" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 11 15) (close _V0expand__lambda_k371) (##string ##string.2115) (##inline ##sys.cons (quote lambda) (bruijn expr 4 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k371, env)}),
      VEncodePointer(&_V10string_D2115.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    )

    );
 }
}
static void _V0expand__lambda_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k362" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__lambda_lambda383) (close _V0expand__lambda_k370) (bruijn ##input.53 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_lambda383, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k370, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__lambda_lambda378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda378" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_lambda378, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__lambda_lambda379) (close _V0expand__lambda_k362) (bruijn ##input.53 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_lambda379, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_k362, env)}),
      _var1
    );
 }
}
static void _V0expand__lambda_lambda377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda377" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__lambda_lambda377, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_lambda377, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__lambda_lambda378) (bruijn ##k.1572 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_lambda378, env)}, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0expand__lambda_lambda376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda376" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__lambda_lambda376, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__lambda_lambda376, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 7 9) (bruijn ##k.1571 0 0) (close _V0expand__lambda_lambda377))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_lambda377, env)})
    );
 }
}
static void expand_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k39" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k40) (bruijn expand-lambda 5 6) (close _V0expand__lambda_lambda376))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k40, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__lambda_lambda376, env)})
    );
 }
}
static void _V0valid__args_Q_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k381" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0valid__args_Q_k381, runtime, upenv, 1, argc, _var0) {
  // ((bruijn valid-args? 14 5) (bruijn ##k.1609 9 0) (bruijn ##x.1614 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 5)), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0
    );
 }
}
static void _V0valid__args_Q_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k380" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0valid__args_Q_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1613 0 0) ((bruijn cdr 14 2) (close _V0valid__args_Q_k381) (bruijn args 8 1)) ((bruijn ##k.1609 8 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0valid__args_Q_k381, env)}),
      VGetArg(upenv, 8-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 0)), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0valid__args_Q_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k379" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0valid__args_Q_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 13 15) (close _V0valid__args_Q_k380) (##string ##string.2116) (bruijn ##x.1616 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0valid__args_Q_k380, env)}),
      VEncodePointer(&_V10string_D2116.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0valid__args_Q_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k382" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0valid__args_Q_k382, runtime, upenv, 1, argc, _var0) {
  // ((bruijn valid-args? 12 5) (bruijn ##k.1609 7 0) (bruijn ##x.1614 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 5)), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0valid__args_Q_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k378" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0valid__args_Q_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1615 0 0) ((bruijn car 12 21) (close _V0valid__args_Q_k379) (bruijn args 6 1)) ((bruijn cdr 12 2) (close _V0valid__args_Q_k382) (bruijn args 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 21)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0valid__args_Q_k379, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0valid__args_Q_k382, env)}),
      VGetArg(upenv, 6-1, 1)
    );
}
 }
}
static void _V0valid__args_Q_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k377" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0valid__args_Q_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn memtail 10 4) (close _V0valid__args_Q_k378) (bruijn ##x.1617 1 0) (bruijn ##x.1618 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0valid__args_Q_k378, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0valid__args_Q_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k376" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0valid__args_Q_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 10 2) (close _V0valid__args_Q_k377) (bruijn args 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0valid__args_Q_k377, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0valid__args_Q_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k375" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0valid__args_Q_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1612 0 0) ((bruijn car 9 21) (close _V0valid__args_Q_k376) (bruijn args 3 1)) ((bruijn ##k.1609 3 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 21)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0valid__args_Q_k376, env)}),
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0valid__args_Q_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k374" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0valid__args_Q_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1611 0 0) ((bruijn ##k.1609 2 0) (bruijn ##p.1611 0 0)) ((bruijn pair? 8 22) (close _V0valid__args_Q_k375) (bruijn args 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
      _var0
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 22)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0valid__args_Q_k375, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0valid__args_Q_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k373" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0valid__args_Q_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1610 0 0) ((bruijn ##k.1609 1 0) (bruijn ##p.1610 0 0)) ((bruijn null? 7 20) (close _V0valid__args_Q_k374) (bruijn args 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      _var0
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0valid__args_Q_k374, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0valid__args_Q_lambda386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0valid__args_Q_lambda386" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0valid__args_Q_lambda386, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0valid__args_Q_lambda386, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 6 13) (close _V0valid__args_Q_k373) (bruijn args 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0valid__args_Q_k373, env)}),
      _var1
    );
 }
}
static void expand_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k39) (bruijn valid-args? 4 5) (close _V0valid__args_Q_lambda386))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k39, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0valid__args_Q_lambda386, env)})
    );
 }
}
static void _V0memtail_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k386" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0memtail_k386, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memtail 8 4) (bruijn ##k.1619 4 0) (bruijn x 4 1) (bruijn ##x.1622 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 4)), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0memtail_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k385" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0memtail_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1621 0 0) ((bruijn ##k.1619 3 0) (bruijn ##p.1621 0 0)) ((bruijn cdr 8 2) (close _V0memtail_k386) (bruijn args 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[0]), runtime,
      _var0
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0memtail_k386, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0memtail_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k384" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0memtail_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 7 5) (close _V0memtail_k385) (bruijn x 2 1) (bruijn ##x.1623 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0memtail_k385, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0memtail_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k383" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0memtail_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1620 0 0) ((bruijn car 6 21) (close _V0memtail_k384) (bruijn args 1 2)) ((bruijn eqv? 6 5) (bruijn ##k.1619 1 0) (bruijn x 1 1) (bruijn args 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 21)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0memtail_k384, env)}),
      upenv->vars[2]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 5)), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]
    );
}
 }
}
static void _V0memtail_lambda387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0memtail_lambda387" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0memtail_lambda387, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0memtail_lambda387, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn pair? 5 22) (close _V0memtail_k383) (bruijn args 0 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 22)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0memtail_k383, env)}),
      _var2
    );
 }
}
static void expand_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k37" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k38) (bruijn memtail 3 4) (close _V0memtail_lambda387))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k38, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0memtail_lambda387, env)})
    );
 }
}
static void _V0expand__library_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k415" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k415, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1632 13 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn libname 13 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn ##x.1640 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 0)), runtime,
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 13-1, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
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

    );
 }
}
static void _V0expand__library_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k414" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 33 9) (close _V0expand__library_k415) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.make-import) (##inline ##sys.cons (bruijn libname 12 1) (bruijn ##x.1658 2 0))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (bruijn ##x.1647 1 0) (bruijn ##x.1648 0 0))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k415, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dmake__import.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 12-1, 1),
      upenv->up->vars[0]
    )

    )
,
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      _var0
    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__library_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k413" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 33 25) (close _V0expand__library_k414) (bruijn basic-library 28 5))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 25)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k414, env)}),
      VGetArg(upenv, 28-1, 5)
    );
 }
}
static void _V0expand__library_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k416" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k416, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1649 1 0) (##inline ##sys.cons (bruijn f 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (bruijn ##x.1653 0 0) (quote ()))) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VInlineCons(
upenv->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__library_lambda391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda391" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda391, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda391, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn list 33 19) (close _V0expand__library_k416) (quote quote) (bruijn f 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k416, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0expand__library_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k412" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 32 14) (close _V0expand__library_k413) (close _V0expand__library_lambda391) (bruijn free-vars 27 6))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k413, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda391, env)}),
      VGetArg(upenv, 27-1, 6)
    );
 }
}
static void _V0expand__library_lambda392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda392" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda392, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda392, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1659 0 0) (##inline ##sys.cons (quote ##vcore.load-library) (##inline ##sys.cons (bruijn i 0 1) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VInlineCons(
VEncodePointer(&_V10vcore_Dload__library.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__library_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k411" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 31 14) (close _V0expand__library_k412) (close _V0expand__library_lambda392) (bruijn imports 26 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k412, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda392, env)}),
      VGetArg(upenv, 26-1, 3)
    );
 }
}
static void _V0expand__library_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k410" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 30 15) (close _V0expand__library_k411) (##string ##string.2117) (bruijn ##x.1662 0 0) (bruijn free-vars 25 6))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k411, env)}),
      VEncodePointer(&_V10string_D2117.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 25-1, 6)
    );
 }
}
static void _V0expand__library_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k420" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k420, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1632 11 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn libname 11 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn ##x.1640 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 0)), runtime,
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 11-1, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
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

    );
 }
}
static void _V0expand__library_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k419" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k419, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 31 9) (close _V0expand__library_k420) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.make-import) (##inline ##sys.cons (bruijn libname 10 1) (bruijn ##x.1658 2 0))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (bruijn ##x.1647 1 0) (bruijn ##x.1648 0 0))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k420, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dmake__import.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 10-1, 1),
      upenv->up->vars[0]
    )

    )
,
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      _var0
    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__library_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k418" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 31 25) (close _V0expand__library_k419) (bruijn basic-library 26 5))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 25)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k419, env)}),
      VGetArg(upenv, 26-1, 5)
    );
 }
}
static void _V0expand__library_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k421" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k421, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1649 1 0) (##inline ##sys.cons (bruijn f 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (bruijn ##x.1653 0 0) (quote ()))) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VInlineCons(
upenv->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__library_lambda393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda393" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda393, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda393, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn list 31 19) (close _V0expand__library_k421) (quote quote) (bruijn f 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k421, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0expand__library_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k417" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 30 14) (close _V0expand__library_k418) (close _V0expand__library_lambda393) (bruijn free-vars 25 6))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k418, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda393, env)}),
      VGetArg(upenv, 25-1, 6)
    );
 }
}
static void _V0expand__library_lambda394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda394" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda394, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda394, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1659 0 0) (##inline ##sys.cons (quote ##vcore.load-library) (##inline ##sys.cons (bruijn i 0 1) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VInlineCons(
VEncodePointer(&_V10vcore_Dload__library.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__library_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k409" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1661 0 0) ((bruijn cadr 29 26) (close _V0expand__library_k410) (bruijn lib 25 1)) ((bruijn map 29 14) (close _V0expand__library_k417) (close _V0expand__library_lambda394) (bruijn imports 24 3)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k410, env)}),
      VGetArg(upenv, 25-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k417, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda394, env)}),
      VGetArg(upenv, 24-1, 3)
    );
}
 }
}
static void _V0expand__library_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k408" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 28 12) (close _V0expand__library_k409) (bruijn ##x.1664 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k409, env)}),
      _var0
    );
 }
}
static void _V0expand__library_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k425" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k425, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1632 9 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn libname 9 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn ##x.1640 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 0)), runtime,
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 9-1, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
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

    );
 }
}
static void _V0expand__library_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k424" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 29 9) (close _V0expand__library_k425) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.make-import) (##inline ##sys.cons (bruijn libname 8 1) (bruijn ##x.1658 2 0))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (bruijn ##x.1647 1 0) (bruijn ##x.1648 0 0))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k425, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dmake__import.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 8-1, 1),
      upenv->up->vars[0]
    )

    )
,
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      _var0
    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__library_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k423" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 29 25) (close _V0expand__library_k424) (bruijn basic-library 24 5))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 25)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k424, env)}),
      VGetArg(upenv, 24-1, 5)
    );
 }
}
static void _V0expand__library_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k426" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k426, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1649 1 0) (##inline ##sys.cons (bruijn f 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (bruijn ##x.1653 0 0) (quote ()))) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VInlineCons(
upenv->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__library_lambda395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda395" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda395, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda395, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn list 29 19) (close _V0expand__library_k426) (quote quote) (bruijn f 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k426, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0expand__library_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k422" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 28 14) (close _V0expand__library_k423) (close _V0expand__library_lambda395) (bruijn free-vars 23 6))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k423, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda395, env)}),
      VGetArg(upenv, 23-1, 6)
    );
 }
}
static void _V0expand__library_lambda396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda396" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda396, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda396, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1659 0 0) (##inline ##sys.cons (quote ##vcore.load-library) (##inline ##sys.cons (bruijn i 0 1) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VInlineCons(
VEncodePointer(&_V10vcore_Dload__library.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__library_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k407" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1663 0 0) ((bruijn null? 27 20) (close _V0expand__library_k408) (bruijn free-vars 22 6)) ((bruijn map 27 14) (close _V0expand__library_k422) (close _V0expand__library_lambda396) (bruijn imports 22 3)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k408, env)}),
      VGetArg(upenv, 22-1, 6)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k422, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda396, env)}),
      VGetArg(upenv, 22-1, 3)
    );
}
 }
}
static void _V0expand__library_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k406" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 26 20) (close _V0expand__library_k407) (bruijn imports 21 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k407, env)}),
      VGetArg(upenv, 21-1, 3)
    );
 }
}
static void _V0expand__library_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k435" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k435, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1632 12 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn libname 12 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn ##x.1640 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 0)), runtime,
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 12-1, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
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

    );
 }
}
static void _V0expand__library_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k434" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 32 9) (close _V0expand__library_k435) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.make-import) (##inline ##sys.cons (bruijn libname 11 1) (bruijn ##x.1658 2 0))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (bruijn ##x.1647 1 0) (bruijn ##x.1648 0 0))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k435, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dmake__import.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 11-1, 1),
      upenv->up->vars[0]
    )

    )
,
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      _var0
    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__library_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k433" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 32 25) (close _V0expand__library_k434) (bruijn basic-library 27 5))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 25)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k434, env)}),
      VGetArg(upenv, 27-1, 5)
    );
 }
}
static void _V0expand__library_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k436" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k436, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1649 1 0) (##inline ##sys.cons (bruijn f 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (bruijn ##x.1653 0 0) (quote ()))) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VInlineCons(
upenv->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__library_lambda397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda397" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda397, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda397, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn list 32 19) (close _V0expand__library_k436) (quote quote) (bruijn f 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k436, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0expand__library_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k432" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k432, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 31 14) (close _V0expand__library_k433) (close _V0expand__library_lambda397) (bruijn free-vars 26 6))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k433, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda397, env)}),
      VGetArg(upenv, 26-1, 6)
    );
 }
}
static void _V0expand__library_lambda398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda398" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda398, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda398, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1659 0 0) (##inline ##sys.cons (quote ##vcore.load-library) (##inline ##sys.cons (bruijn i 0 1) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VInlineCons(
VEncodePointer(&_V10vcore_Dload__library.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__library_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k431" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k431, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 30 14) (close _V0expand__library_k432) (close _V0expand__library_lambda398) (bruijn imports 25 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k432, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda398, env)}),
      VGetArg(upenv, 25-1, 3)
    );
 }
}
static void _V0expand__library_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k430" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 29 15) (close _V0expand__library_k431) (##string ##string.2117) (bruijn ##x.1662 0 0) (bruijn free-vars 24 6))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k431, env)}),
      VEncodePointer(&_V10string_D2117.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 24-1, 6)
    );
 }
}
static void _V0expand__library_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k440" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k440, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1632 10 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn libname 10 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn ##x.1640 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 0)), runtime,
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 10-1, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
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

    );
 }
}
static void _V0expand__library_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k439" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k439, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 30 9) (close _V0expand__library_k440) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.make-import) (##inline ##sys.cons (bruijn libname 9 1) (bruijn ##x.1658 2 0))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (bruijn ##x.1647 1 0) (bruijn ##x.1648 0 0))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k440, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dmake__import.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 9-1, 1),
      upenv->up->vars[0]
    )

    )
,
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      _var0
    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__library_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k438" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k438, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 30 25) (close _V0expand__library_k439) (bruijn basic-library 25 5))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 25)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k439, env)}),
      VGetArg(upenv, 25-1, 5)
    );
 }
}
static void _V0expand__library_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k441" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k441, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1649 1 0) (##inline ##sys.cons (bruijn f 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (bruijn ##x.1653 0 0) (quote ()))) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VInlineCons(
upenv->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__library_lambda399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda399" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda399, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda399, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn list 30 19) (close _V0expand__library_k441) (quote quote) (bruijn f 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k441, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0expand__library_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k437" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k437, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 29 14) (close _V0expand__library_k438) (close _V0expand__library_lambda399) (bruijn free-vars 24 6))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k438, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda399, env)}),
      VGetArg(upenv, 24-1, 6)
    );
 }
}
static void _V0expand__library_lambda400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda400" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda400, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda400, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1659 0 0) (##inline ##sys.cons (quote ##vcore.load-library) (##inline ##sys.cons (bruijn i 0 1) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VInlineCons(
VEncodePointer(&_V10vcore_Dload__library.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__library_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k429" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k429, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1661 0 0) ((bruijn cadr 28 26) (close _V0expand__library_k430) (bruijn lib 24 1)) ((bruijn map 28 14) (close _V0expand__library_k437) (close _V0expand__library_lambda400) (bruijn imports 23 3)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k430, env)}),
      VGetArg(upenv, 24-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k437, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda400, env)}),
      VGetArg(upenv, 23-1, 3)
    );
}
 }
}
static void _V0expand__library_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k428" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 27 12) (close _V0expand__library_k429) (bruijn ##x.1664 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k429, env)}),
      _var0
    );
 }
}
static void _V0expand__library_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k445" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k445, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1632 8 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn libname 8 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn ##x.1640 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 0)), runtime,
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 8-1, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
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

    );
 }
}
static void _V0expand__library_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k444" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 28 9) (close _V0expand__library_k445) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.make-import) (##inline ##sys.cons (bruijn libname 7 1) (bruijn ##x.1658 2 0))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (bruijn ##x.1647 1 0) (bruijn ##x.1648 0 0))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k445, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dmake__import.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 7-1, 1),
      upenv->up->vars[0]
    )

    )
,
      VNULL
    )

    )
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      _var0
    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__library_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k443" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k443, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 28 25) (close _V0expand__library_k444) (bruijn basic-library 23 5))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 25)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k444, env)}),
      VGetArg(upenv, 23-1, 5)
    );
 }
}
static void _V0expand__library_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k446" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k446, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1649 1 0) (##inline ##sys.cons (bruijn f 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (bruijn ##x.1653 0 0) (quote ()))) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VInlineCons(
upenv->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__library_lambda401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda401" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda401, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda401, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn list 28 19) (close _V0expand__library_k446) (quote quote) (bruijn f 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k446, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0expand__library_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k442" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k442, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 27 14) (close _V0expand__library_k443) (close _V0expand__library_lambda401) (bruijn free-vars 22 6))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k443, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda401, env)}),
      VGetArg(upenv, 22-1, 6)
    );
 }
}
static void _V0expand__library_lambda402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda402" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda402, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda402, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1659 0 0) (##inline ##sys.cons (quote ##vcore.load-library) (##inline ##sys.cons (bruijn i 0 1) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VInlineCons(
VEncodePointer(&_V10vcore_Dload__library.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__library_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k427" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k427, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1663 0 0) ((bruijn null? 26 20) (close _V0expand__library_k428) (bruijn free-vars 21 6)) ((bruijn map 26 14) (close _V0expand__library_k442) (close _V0expand__library_lambda402) (bruijn imports 21 3)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k428, env)}),
      VGetArg(upenv, 21-1, 6)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k442, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda402, env)}),
      VGetArg(upenv, 21-1, 3)
    );
}
 }
}
static void _V0expand__library_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k405" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1665 0 0) ((bruijn error 25 15) (close _V0expand__library_k406) (##string ##string.2118)) ((bruijn null? 25 20) (close _V0expand__library_k427) (bruijn imports 20 3)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k406, env)}),
      VEncodePointer(&_V10string_D2118.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k427, env)}),
      VGetArg(upenv, 20-1, 3)
    );
}
 }
}
static void _V0expand__library_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k404" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 24 12) (close _V0expand__library_k405) (bruijn ##x.1666 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k405, env)}),
      _var0
    );
 }
}
static void _V0expand__library_lambda403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__library_lambda403" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__library_lambda403, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda403, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn a 0 1) ((bruijn ##k.1667 0 0) (bruijn b 0 2)) ((bruijn ##k.1667 0 0) #f))
if(VDecodeBool(
_var1)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k403" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn fold 23 24) (close _V0expand__library_k404) (close _V0expand__library_lambda403) #t (bruijn ##x.1668 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 24)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k404, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda403, env)}),
      VEncodeBool(true),
      _var0
    );
 }
}
static void _V0expand__library_lambda390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda390" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda390, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 22 14) (close _V0expand__library_k403) (bruijn string? 22 18) (bruijn imports 17 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k403, env)}),
      VGetArg(upenv, 22-1, 18),
      VGetArg(upenv, 17-1, 3)
    );
 }
}
static void _V0expand__library_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k402" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library_lambda390) (bruijn ##k.1625 16 0) (bruijn ##x.1669 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda390, env)}, runtime,
      VGetArg(upenv, 16-1, 0),
      _var0
    );
 }
}
static void _V0expand__library_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k401" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn mangle-library 20 17) (close _V0expand__library_k402) (bruijn ##x.1670 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k402, env)}),
      _var0
    );
 }
}
static void _V0expand__library_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k400" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 19 26) (close _V0expand__library_k401) (bruijn lib 15 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k401, env)}),
      VGetArg(upenv, 15-1, 1)
    );
 }
}
static void _V0expand__library_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k399" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k400) (bruijn free-vars 13 6) (bruijn ##x.1671 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k400, env)}),
      VEncodeInt(13l), VEncodeInt(6l),
      _var0
    );
 }
}
static void _V0expand__library_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k398" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn free-variables 17 23) (close _V0expand__library_k399) (bruijn basic-library 12 5))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 23)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k399, env)}),
      VGetArg(upenv, 12-1, 5)
    );
 }
}
static void _V0expand__library_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k397" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k398) (bruijn basic-library 11 5) (bruijn ##x.1672 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k398, env)}),
      VEncodeInt(11l), VEncodeInt(5l),
      _var0
    );
 }
}
static void _V0expand__library_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k396" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 14 9) (close _V0expand__library_k397) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (bruijn ##x.1675 0 0))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k397, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      _var0
    )

    )

    );
 }
}
static void _V0expand__library_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k395" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append 14 3) (close _V0expand__library_k396) (bruijn ##x.1676 2 0) (bruijn ##x.1677 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k396, env)}),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__library_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k394" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 13 19) (close _V0expand__library_k395) (bruijn ##x.1678 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k395, env)}),
      _var0
    );
 }
}
static void _V0expand__library_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k393" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-library-output 7 1) (close _V0expand__library_k394) (bruijn exports 7 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k394, env)}),
      VGetArg(upenv, 7-1, 2)
    );
 }
}
static void _V0expand__library_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k392" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn apply 11 16) (close _V0expand__library_k393) (bruijn append 11 3) (bruijn ##x.1679 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k393, env)}),
      VGetArg(upenv, 11-1, 3),
      _var0
    );
 }
}
static void _V0expand__library_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k391" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 10 14) (close _V0expand__library_k392) (bruijn expand-library-expr 5 4) (bruijn ##x.1680 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k392, env)}),
      VGetArg(upenv, 5-1, 4),
      _var0
    );
 }
}
static void _V0expand__library_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k390" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 9 25) (close _V0expand__library_k391) (bruijn lib 5 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 25)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k391, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0expand__library__expr_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k450" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k450, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 7 1) (bruijn ##k.1816 3 0) (bruijn ##x.1817 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__library__expr_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k449" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k449, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 16 19) (close _V0expand__library__expr_k450))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k450, env)})
    );
 }
}
static void _V0expand__library__expr_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k448" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k448, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0expand__library__expr_k449) (bruijn exports 10 2) (bruijn ##x.1819 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k449, env)}),
      VEncodeInt(10l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V0expand__library__expr_lambda408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda408" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda408, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn append 14 3) (close _V0expand__library__expr_k448) (bruijn syms 0 1) (bruijn exports 9 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k448, env)}),
      _var1,
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0expand__library__expr_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k447" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k447, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1815 0 0) ((close _V0expand__library__expr_lambda408) (bruijn ##k.1813 1 0) (##inline ##sys.cdr (bruijn ##expr.35 1 1))) ((bruijn ##k.1813 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda408, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda407" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda407, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.35 0 1)) ((bruijn equal? 12 7) (close _V0expand__library__expr_k447) (quote export) (##inline ##sys.car (bruijn ##expr.35 0 1))) ((bruijn ##k.1813 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k447, env)}),
      VEncodePointer(&_V0export.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k456" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k456, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 9 1) (bruijn ##k.1806 4 0) (bruijn ##x.1807 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__library__expr_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k455" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k455, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 18 19) (close _V0expand__library__expr_k456))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k456, env)})
    );
 }
}
static void _V0expand__library__expr_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k454" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k454, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0expand__library__expr_k455) (bruijn imports 12 3) (bruijn ##x.1809 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k455, env)}),
      VEncodeInt(12l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0expand__library__expr_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k453" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k453, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append 16 3) (close _V0expand__library__expr_k454) (bruijn ##x.1810 0 0) (bruijn imports 11 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k454, env)}),
      _var0,
      VGetArg(upenv, 11-1, 3)
    );
 }
}
static void _V0expand__library__expr_lambda410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda410" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda410, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 15 14) (close _V0expand__library__expr_k453) (bruijn mangle-library 15 17) (bruijn libs 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k453, env)}),
      VGetArg(upenv, 15-1, 17),
      _var1
    );
 }
}
static void _V0expand__library__expr_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k452" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1805 0 0) ((close _V0expand__library__expr_lambda410) (bruijn ##k.1803 1 0) (##inline ##sys.cdr (bruijn ##expr.36 1 1))) ((bruijn ##k.1803 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda410, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda409" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda409, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.36 0 1)) ((bruijn equal? 13 7) (close _V0expand__library__expr_k452) (quote import) (##inline ##sys.car (bruijn ##expr.36 0 1))) ((bruijn ##k.1803 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k452, env)}),
      VEncodePointer(&_V0import.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k459" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k459, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 11 1) (bruijn ##k.1790 1 0) (bruijn ##x.1791 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__library__expr_lambda416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda416" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda416, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-toplevel 19 8) (close _V0expand__library__expr_k459) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 2 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 1 1) (bruijn body 0 1))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k459, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[1],
      _var1
    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__library__expr_lambda415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda415" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda415, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__library__expr_lambda416) (bruijn ##k.1789 0 0) (##inline ##sys.cdr (bruijn ##expr.38 3 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda416, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0expand__library__expr_lambda414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda414" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda414, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__library__expr_lambda415) (bruijn ##k.1788 0 0) (##inline ##sys.cdr (bruijn ##expr.39 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda415, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__library__expr_lambda413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda413" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda413, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.39 0 1)) ((close _V0expand__library__expr_lambda414) (bruijn ##k.1786 0 0) (##inline ##sys.car (bruijn ##expr.39 0 1))) ((bruijn ##k.1786 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda414, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda412" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda412, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.38 0 1)) ((close _V0expand__library__expr_lambda413) (bruijn ##k.1784 0 0) (##inline ##sys.car (bruijn ##expr.38 0 1))) ((bruijn ##k.1784 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda413, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k458" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k458, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1783 0 0) ((close _V0expand__library__expr_lambda412) (bruijn ##k.1781 1 0) (##inline ##sys.cdr (bruijn ##expr.37 1 1))) ((bruijn ##k.1781 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda412, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda411" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda411, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.37 0 1)) ((bruijn equal? 14 7) (close _V0expand__library__expr_k458) (quote define) (##inline ##sys.car (bruijn ##expr.37 0 1))) ((bruijn ##k.1781 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k458, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k467" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k467, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 17 1) (bruijn ##k.1762 5 0) (bruijn ##x.1764 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0expand__library__expr_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k466" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k466, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 26 19) (close _V0expand__library__expr_k467) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 8 1) (##inline ##sys.cons (bruijn ##x.1769 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k467, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 8-1, 1),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__library__expr_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k465" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 24 9) (close _V0expand__library__expr_k466) (##inline ##sys.cons (quote lambda) (bruijn body 3 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k466, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0expand__library__expr_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k469" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k469, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 16 1) (bruijn ##k.1762 4 0) (bruijn ##x.1764 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__library__expr_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k468" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 25 19) (close _V0expand__library__expr_k469) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 7 1) (##inline ##sys.cons (bruijn ##x.1769 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k469, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 7-1, 1),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__library__expr_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k464" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k464, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1771 0 0) ((bruijn error 24 15) (close _V0expand__library__expr_k465) (##string ##string.2108) (bruijn f 6 1)) ((bruijn expand-syntax 23 9) (close _V0expand__library__expr_k468) (##inline ##sys.cons (quote lambda) (bruijn body 2 1))))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k465, env)}),
      VEncodePointer(&_V10string_D2108.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k468, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      upenv->up->vars[1]
    )

    );
}
 }
}
static void _V0expand__library__expr_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k463" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k463, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 23 12) (close _V0expand__library__expr_k464) (bruijn ##x.1772 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k464, env)}),
      _var0
    );
 }
}
static void _V0expand__library__expr_lambda422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda422" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda422, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.42 3 1))) ((bruijn symbol? 22 13) (close _V0expand__library__expr_k463) (bruijn f 4 1)) ((bruijn ##k.1762 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k463, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k462" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k462, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1761 0 0) ((close _V0expand__library__expr_lambda422) (bruijn ##k.1759 1 0) (##inline ##sys.cdr (bruijn ##expr.43 1 1))) ((bruijn ##k.1759 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda422, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda421" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda421, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.43 0 1)) ((bruijn equal? 20 7) (close _V0expand__library__expr_k462) (quote lambda) (##inline ##sys.car (bruijn ##expr.43 0 1))) ((bruijn ##k.1759 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k462, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda420" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda420, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.42 0 1)) ((close _V0expand__library__expr_lambda421) (bruijn ##k.1757 0 0) (##inline ##sys.car (bruijn ##expr.42 0 1))) ((bruijn ##k.1757 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda421, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda419" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda419, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__library__expr_lambda420) (bruijn ##k.1756 0 0) (##inline ##sys.cdr (bruijn ##expr.41 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda420, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__library__expr_lambda418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda418" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda418, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.41 0 1)) ((close _V0expand__library__expr_lambda419) (bruijn ##k.1754 0 0) (##inline ##sys.car (bruijn ##expr.41 0 1))) ((bruijn ##k.1754 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda419, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k461" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k461, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1753 0 0) ((close _V0expand__library__expr_lambda418) (bruijn ##k.1751 1 0) (##inline ##sys.cdr (bruijn ##expr.40 1 1))) ((bruijn ##k.1751 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda418, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda417" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda417, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.40 0 1)) ((bruijn equal? 15 7) (close _V0expand__library__expr_k461) (quote define) (##inline ##sys.car (bruijn ##expr.40 0 1))) ((bruijn ##k.1751 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k461, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k477" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k477, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 18 1) (bruijn ##k.1732 5 0) (bruijn ##x.1734 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0expand__library__expr_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k476" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 27 19) (close _V0expand__library__expr_k477) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 8 1) (##inline ##sys.cons (bruijn ##x.1739 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k477, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 8-1, 1),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__library__expr_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k475" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k475, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 25 9) (close _V0expand__library__expr_k476) (##inline ##sys.cons (quote case-lambda) (bruijn body 3 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k476, env)}),
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0expand__library__expr_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k479" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k479, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 17 1) (bruijn ##k.1732 4 0) (bruijn ##x.1734 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__library__expr_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k478" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k478, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 26 19) (close _V0expand__library__expr_k479) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 7 1) (##inline ##sys.cons (bruijn ##x.1739 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k479, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 7-1, 1),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__library__expr_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k474" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k474, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1741 0 0) ((bruijn error 25 15) (close _V0expand__library__expr_k475) (##string ##string.2108) (bruijn f 6 1)) ((bruijn expand-syntax 24 9) (close _V0expand__library__expr_k478) (##inline ##sys.cons (quote case-lambda) (bruijn body 2 1))))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k475, env)}),
      VEncodePointer(&_V10string_D2108.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k478, env)}),
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      upenv->up->vars[1]
    )

    );
}
 }
}
static void _V0expand__library__expr_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k473" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 24 12) (close _V0expand__library__expr_k474) (bruijn ##x.1742 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k474, env)}),
      _var0
    );
 }
}
static void _V0expand__library__expr_lambda428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda428" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda428, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.46 3 1))) ((bruijn symbol? 23 13) (close _V0expand__library__expr_k473) (bruijn f 4 1)) ((bruijn ##k.1732 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k473, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k472" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k472, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1731 0 0) ((close _V0expand__library__expr_lambda428) (bruijn ##k.1729 1 0) (##inline ##sys.cdr (bruijn ##expr.47 1 1))) ((bruijn ##k.1729 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda428, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda427" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda427, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.47 0 1)) ((bruijn equal? 21 7) (close _V0expand__library__expr_k472) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.47 0 1))) ((bruijn ##k.1729 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k472, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda426" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda426, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.46 0 1)) ((close _V0expand__library__expr_lambda427) (bruijn ##k.1727 0 0) (##inline ##sys.car (bruijn ##expr.46 0 1))) ((bruijn ##k.1727 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda427, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda425" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda425, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__library__expr_lambda426) (bruijn ##k.1726 0 0) (##inline ##sys.cdr (bruijn ##expr.45 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda426, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__library__expr_lambda424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda424" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda424, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.45 0 1)) ((close _V0expand__library__expr_lambda425) (bruijn ##k.1724 0 0) (##inline ##sys.car (bruijn ##expr.45 0 1))) ((bruijn ##k.1724 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda425, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k471" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k471, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1723 0 0) ((close _V0expand__library__expr_lambda424) (bruijn ##k.1721 1 0) (##inline ##sys.cdr (bruijn ##expr.44 1 1))) ((bruijn ##k.1721 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda424, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda423" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda423, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.44 0 1)) ((bruijn equal? 16 7) (close _V0expand__library__expr_k471) (quote define) (##inline ##sys.car (bruijn ##expr.44 0 1))) ((bruijn ##k.1721 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k471, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k483" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k483, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 14 1) (bruijn ##k.1708 2 0) (bruijn ##x.1710 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__library__expr_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k482" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k482, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 23 19) (close _V0expand__library__expr_k483) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn x 3 1) (##inline ##sys.cons (bruijn ##x.1714 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k483, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[1],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__library__expr_lambda433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda433" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda433, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.50 1 1))) ((bruijn expand-syntax 21 9) (close _V0expand__library__expr_k482) (bruijn y 0 1)) ((bruijn ##k.1708 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k482, env)}),
      _var1
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda432" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda432, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.50 0 1)) ((close _V0expand__library__expr_lambda433) (bruijn ##k.1706 0 0) (##inline ##sys.car (bruijn ##expr.50 0 1))) ((bruijn ##k.1706 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda433, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda431" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda431, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__library__expr_lambda432) (bruijn ##k.1705 0 0) (##inline ##sys.cdr (bruijn ##expr.49 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda432, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__library__expr_lambda430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda430" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda430, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.49 0 1)) ((close _V0expand__library__expr_lambda431) (bruijn ##k.1703 0 0) (##inline ##sys.car (bruijn ##expr.49 0 1))) ((bruijn ##k.1703 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda431, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k481" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k481, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1702 0 0) ((close _V0expand__library__expr_lambda430) (bruijn ##k.1700 1 0) (##inline ##sys.cdr (bruijn ##expr.48 1 1))) ((bruijn ##k.1700 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda430, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda429" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda429, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.48 0 1)) ((bruijn equal? 17 7) (close _V0expand__library__expr_k481) (quote define) (##inline ##sys.car (bruijn ##expr.48 0 1))) ((bruijn ##k.1700 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k481, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k486" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k486, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 11 1) (bruijn ##k.1695 1 0) (bruijn ##x.1696 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__library__expr_lambda435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda435" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda435, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn error 20 15) (close _V0expand__library__expr_k486) (##string ##string.2109) (##inline ##sys.cons (quote define) (bruijn noise 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k486, env)}),
      VEncodePointer(&_V10string_D2109.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      _var1
    )

    );
 }
}
static void _V0expand__library__expr_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k485" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k485, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1694 0 0) ((close _V0expand__library__expr_lambda435) (bruijn ##k.1692 1 0) (##inline ##sys.cdr (bruijn ##expr.51 1 1))) ((bruijn ##k.1692 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda435, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda434" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda434, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.51 0 1)) ((bruijn equal? 18 7) (close _V0expand__library__expr_k485) (quote define) (##inline ##sys.car (bruijn ##expr.51 0 1))) ((bruijn ##k.1692 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k485, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k488" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k488, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 9 1) (bruijn ##k.1683 8 0) (bruijn ##x.1691 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0expand__library__expr_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k487" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 18 15) (close _V0expand__library__expr_k488) (##string ##string.2119) (bruijn expr 9 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k488, env)}),
      VEncodePointer(&_V10string_D2119.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0expand__library__expr_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k484" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k484, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda434) (close _V0expand__library__expr_k487) (bruijn ##input.34 6 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda434, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k487, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0expand__library__expr_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k480" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k480, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda429) (close _V0expand__library__expr_k484) (bruijn ##input.34 5 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda429, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k484, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0expand__library__expr_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k470" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k470, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda423) (close _V0expand__library__expr_k480) (bruijn ##input.34 4 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda423, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k480, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0expand__library__expr_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k460" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k460, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda417) (close _V0expand__library__expr_k470) (bruijn ##input.34 3 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda417, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k470, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__library__expr_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k457" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda411) (close _V0expand__library__expr_k460) (bruijn ##input.34 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda411, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k460, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0expand__library__expr_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k451" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_k451, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda409) (close _V0expand__library__expr_k457) (bruijn ##input.34 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda409, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k457, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__library__expr_lambda406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda406" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda406, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__library__expr_lambda407) (close _V0expand__library__expr_k451) (bruijn ##input.34 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda407, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_k451, env)}),
      _var1
    );
 }
}
static void _V0expand__library__expr_lambda405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda405" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library__expr_lambda405, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda405, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__library__expr_lambda406) (bruijn ##k.1682 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda406, env)}, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0expand__library__expr_lambda404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda404" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library__expr_lambda404, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library__expr_lambda404, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 9 9) (bruijn ##k.1681 0 0) (close _V0expand__library__expr_lambda405))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda405, env)})
    );
 }
}
static void _V0expand__library_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k389" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k390) (bruijn expand-library-expr 3 4) (close _V0expand__library__expr_lambda404))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k390, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library__expr_lambda404, env)})
    );
 }
}
static void _V0expand__library_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k388" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k389) (bruijn imports 2 3) (quote ()))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k389, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VNULL
    );
 }
}
static void _V0expand__library_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k387" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k388) (bruijn exports 1 2) (quote ()))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k388, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VNULL
    );
 }
}
static void _V0make__library__output_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__library__output_k490" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__library__output_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__library__output_k490, runtime, upenv, 1, argc, _var0) {
  // ((bruijn expand-syntax 7 9) (bruijn ##k.1822 2 0) (bruijn ##x.1823 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 9)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0make__library__output_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__library__output_k489" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__library__output_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__library__output_k489, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 7 19) (close _V0make__library__output_k490) (quote quasiquote) (bruijn ##x.1824 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__library__output_k490, env)}),
      VEncodePointer(&_V0quasiquote.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0make__library__output_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__library__output_k491" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__library__output_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__library__output_k491, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 8 1) (bruijn ##k.1825 1 0) (bruijn e 1 1) (bruijn ##x.1826 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0make__library__output_lambda437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0make__library__output_lambda437" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0make__library__output_lambda437, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__library__output_lambda437, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn list 7 19) (close _V0make__library__output_k491) (quote unquote) (bruijn e 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__library__output_k491, env)}),
      VEncodePointer(&_V0unquote.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0make__library__output_lambda436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0make__library__output_lambda436" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0make__library__output_lambda436, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0make__library__output_lambda436, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 6 14) (close _V0make__library__output_k489) (close _V0make__library__output_lambda437) (bruijn exports 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__library__output_k489, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__library__output_lambda437, env)}),
      _var1
    );
 }
}
static void _V0expand__library_lambda389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 static VDebugInfo dbg = { "_V0expand__library_lambda389" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda389, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
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
  // (set! (close _V0expand__library_k387) (bruijn make-library-output 0 1) (close _V0make__library__output_lambda436))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_k387, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0make__library__output_lambda436, env)})
    );
 }
}
static void _V0expand__library_lambda388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda388" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda388, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__library_lambda388, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__library_lambda389) (bruijn ##k.1624 0 0) #f #f #f #f #f #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda389, env)}, runtime,
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
static void expand_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k36" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k37) (bruijn expand-library 2 3) (close _V0expand__library_lambda388))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k37, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__library_lambda388, env)})
    );
 }
}
static void _V0expand__quasiquote_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k494" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k494, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 7 1) (bruijn ##k.1914 2 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (##inline ##sys.cons (quote quasiquote) (##inline ##sys.cons (quote quasiquote) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn ##x.1922 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (quote ()) (quote ()))) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quasiquote.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0quasiquote.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VNULL
    )

    )
,
      VNULL
    )

    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__quasiquote_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k493" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 9 2) (close _V0expand__quasiquote_k494) (bruijn ##x.1926 0 0) (bruijn x 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k494, env)}),
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0expand__quasiquote_lambda443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda443" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda443, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.26 1 1))) ((bruijn + 9 27) (close _V0expand__quasiquote_k493) (bruijn quotation 6 1) 1) ((bruijn ##k.1914 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 27)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k493, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeInt(1l)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_lambda442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda442" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda442, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 1)) ((close _V0expand__quasiquote_lambda443) (bruijn ##k.1912 0 0) (##inline ##sys.car (bruijn ##expr.26 0 1))) ((bruijn ##k.1912 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda443, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k492" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1911 0 0) ((close _V0expand__quasiquote_lambda442) (bruijn ##k.1909 1 0) (##inline ##sys.cdr (bruijn ##expr.25 1 1))) ((bruijn ##k.1909 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda442, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_lambda441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda441" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda441, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 1)) ((bruijn equal? 6 7) (close _V0expand__quasiquote_k492) (quote quasiquote) (##inline ##sys.car (bruijn ##expr.25 0 1))) ((bruijn ##k.1909 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k492, env)}),
      VEncodePointer(&_V0quasiquote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k499" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k499, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 9 1) (bruijn ##k.1890 3 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (##inline ##sys.cons (quote quasiquote) (##inline ##sys.cons (quote unquote) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn ##x.1899 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (quote ()) (quote ()))) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quasiquote.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0unquote.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VNULL
    )

    )
,
      VNULL
    )

    )

    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__quasiquote_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k498" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k498, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 11 2) (close _V0expand__quasiquote_k499) (bruijn ##x.1903 0 0) (bruijn x 2 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k499, env)}),
      _var0,
      upenv->up->vars[1]
    );
 }
}
static void _V0expand__quasiquote_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k497" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k497, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1893 0 0) ((bruijn ##kk.23 7 1) (bruijn ##k.1890 1 0) (bruijn x 1 1)) ((bruijn - 11 28) (close _V0expand__quasiquote_k498) (bruijn quotation 8 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->vars[0],
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k498, env)}),
      VGetArg(upenv, 8-1, 1),
      VEncodeInt(1l)
    );
}
 }
}
static void _V0expand__quasiquote_lambda446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda446" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda446, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.28 1 1))) ((bruijn = 10 29) (close _V0expand__quasiquote_k497) (bruijn quotation 7 1) 1) ((bruijn ##k.1890 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 29)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k497, env)}),
      VGetArg(upenv, 7-1, 1),
      VEncodeInt(1l)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_lambda445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda445" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda445, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 1)) ((close _V0expand__quasiquote_lambda446) (bruijn ##k.1888 0 0) (##inline ##sys.car (bruijn ##expr.28 0 1))) ((bruijn ##k.1888 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda446, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k496" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1887 0 0) ((close _V0expand__quasiquote_lambda445) (bruijn ##k.1885 1 0) (##inline ##sys.cdr (bruijn ##expr.27 1 1))) ((bruijn ##k.1885 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda445, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_lambda444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda444" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda444, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 1)) ((bruijn equal? 7 7) (close _V0expand__quasiquote_k496) (quote unquote) (##inline ##sys.car (bruijn ##expr.27 0 1))) ((bruijn ##k.1885 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k496, env)}),
      VEncodePointer(&_V0unquote.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k503" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k503, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 11 1) (bruijn ##k.1858 2 0) (##inline ##sys.cons (quote append) (##inline ##sys.cons (bruijn x 3 1) (##inline ##sys.cons (bruijn ##x.1863 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      upenv->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0append.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[1],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__quasiquote_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k506" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k506, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 13 1) (bruijn ##k.1858 4 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (##inline ##sys.cons (quote quasiquote) (##inline ##sys.cons (quote unquote-splicing) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn ##x.1873 1 0) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (quote ()) (quote ()))) (quote ())))) (##inline ##sys.cons (bruijn ##x.1871 0 0) (quote ()))))) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quasiquote.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0unquote__splicing.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VNULL
    )

    )
,
      VNULL
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
,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__quasiquote_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k505" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 15 2) (close _V0expand__quasiquote_k506) (bruijn quotation 13 1) (bruijn y 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k506, env)}),
      VGetArg(upenv, 13-1, 1),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__quasiquote_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k504" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k504, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 14 2) (close _V0expand__quasiquote_k505) (bruijn ##x.1877 0 0) (bruijn x 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k505, env)}),
      _var0,
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__quasiquote_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k502" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k502, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1860 0 0) ((bruijn expand-quasiquote 13 2) (close _V0expand__quasiquote_k503) (bruijn quotation 11 1) (bruijn y 1 1)) ((bruijn - 14 28) (close _V0expand__quasiquote_k504) (bruijn quotation 11 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k503, env)}),
      VGetArg(upenv, 11-1, 1),
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k504, env)}),
      VGetArg(upenv, 11-1, 1),
      VEncodeInt(1l)
    );
}
 }
}
static void _V0expand__quasiquote_lambda451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda451" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda451, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn = 13 29) (close _V0expand__quasiquote_k502) (bruijn quotation 10 1) 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 29)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k502, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodeInt(1l)
    );
 }
}
static void _V0expand__quasiquote_lambda450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda450" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda450, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.31 1 1))) ((close _V0expand__quasiquote_lambda451) (bruijn ##k.1856 0 0) (##inline ##sys.cdr (bruijn ##expr.29 4 1))) ((bruijn ##k.1856 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda451, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_lambda449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda449" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda449, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 1)) ((close _V0expand__quasiquote_lambda450) (bruijn ##k.1854 0 0) (##inline ##sys.car (bruijn ##expr.31 0 1))) ((bruijn ##k.1854 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda450, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k501" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k501, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1853 0 0) ((close _V0expand__quasiquote_lambda449) (bruijn ##k.1851 1 0) (##inline ##sys.cdr (bruijn ##expr.30 1 1))) ((bruijn ##k.1851 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda449, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_lambda448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda448" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda448, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 1)) ((bruijn equal? 9 7) (close _V0expand__quasiquote_k501) (quote unquote-splicing) (##inline ##sys.car (bruijn ##expr.30 0 1))) ((bruijn ##k.1851 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k501, env)}),
      VEncodePointer(&_V0unquote__splicing.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_lambda447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda447" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda447, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.29 0 1)) ((close _V0expand__quasiquote_lambda448) (bruijn ##k.1849 0 0) (##inline ##sys.car (bruijn ##expr.29 0 1))) ((bruijn ##k.1849 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda448, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k509" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k509, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 9 1) (bruijn ##k.1841 2 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn ##x.1844 1 0) (##inline ##sys.cons (bruijn ##x.1846 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      upenv->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__quasiquote_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k508" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k508, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 11 2) (close _V0expand__quasiquote_k509) (bruijn quotation 9 1) (bruijn b 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k509, env)}),
      VGetArg(upenv, 9-1, 1),
      upenv->vars[1]
    );
 }
}
static void _V0expand__quasiquote_lambda454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda454" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda454, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-quasiquote 10 2) (close _V0expand__quasiquote_k508) (bruijn quotation 8 1) (bruijn a 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k508, env)}),
      VGetArg(upenv, 8-1, 1),
      upenv->vars[1]
    );
 }
}
static void _V0expand__quasiquote_lambda453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda453" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda453, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__quasiquote_lambda454) (bruijn ##k.1840 0 0) (##inline ##sys.cdr (bruijn ##expr.32 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda454, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__quasiquote_lambda452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda452" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda452, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 1)) ((close _V0expand__quasiquote_lambda453) (bruijn ##k.1838 0 0) (##inline ##sys.car (bruijn ##expr.32 0 1))) ((bruijn ##k.1838 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda453, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_lambda455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda455" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda455, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.23 6 1) (bruijn ##k.1835 0 0) (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn x 0 1) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      _var0,
      VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__quasiquote_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k511" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k511, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 10 15) (bruijn ##k.1829 5 0) (##string ##string.2112))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 15)), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D2112.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__quasiquote_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k510" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k510, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_lambda455) (close _V0expand__quasiquote_k511) (bruijn ##input.24 4 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda455, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k511, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0expand__quasiquote_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k507" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k507, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_lambda452) (close _V0expand__quasiquote_k510) (bruijn ##input.24 3 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda452, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k510, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__quasiquote_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k500" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k500, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_lambda447) (close _V0expand__quasiquote_k507) (bruijn ##input.24 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda447, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k507, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0expand__quasiquote_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k495" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_k495, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_lambda444) (close _V0expand__quasiquote_k500) (bruijn ##input.24 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda444, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k500, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__quasiquote_lambda440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda440" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda440, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__quasiquote_lambda441) (close _V0expand__quasiquote_k495) (bruijn ##input.24 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda441, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_k495, env)}),
      _var1
    );
 }
}
static void _V0expand__quasiquote_lambda439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda439" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__quasiquote_lambda439, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda439, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__quasiquote_lambda440) (bruijn ##k.1828 0 0) (bruijn expr 1 2))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda440, env)}, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0expand__quasiquote_lambda438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda438" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__quasiquote_lambda438, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0expand__quasiquote_lambda438, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 3 9) (bruijn ##k.1827 0 0) (close _V0expand__quasiquote_lambda439))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[9]), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda439, env)})
    );
 }
}
static void expand_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k35" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k36) (bruijn expand-quasiquote 1 2) (close _V0expand__quasiquote_lambda438))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k36, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0expand__quasiquote_lambda438, env)})
    );
 }
}
static void _V0collect__defines_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0collect__defines_k512" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0collect__defines_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0collect__defines_k512, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1933 1 0) (quote ()) (bruijn body 2 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      VNULL,
      upenv->up->vars[1]
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k515, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 12 1) (bruijn ##k.2039 2 0) (bruijn ##x.2040 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 1)), runtime,
      upenv->up->vars[0],
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k514, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 13 1) (close _V0loop_k515) (bruijn ##x.2041 0 0) (bruijn rest 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k515, env)}),
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0loop_lambda468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda468" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda468, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cons 15 1) (close _V0loop_k514) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 3 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 2 1) (bruijn body 1 1))) (quote ())))) (bruijn defines 11 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k514, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->vars[1],
      upenv->vars[1]
    )

    )
,
      VNULL
    )

    )

    )
,
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0loop_lambda467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda467" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda467, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda468) (bruijn ##k.2038 0 0) (##inline ##sys.cdr (bruijn ##expr.3 7 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda468, env)}, runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 7-1, 1)
    )

    );
 }
}
static void _V0loop_lambda466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda466" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda466, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda467) (bruijn ##k.2037 0 0) (##inline ##sys.cdr (bruijn ##expr.5 3 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda467, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda465" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda465, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda466) (bruijn ##k.2036 0 0) (##inline ##sys.cdr (bruijn ##expr.6 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda466, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda464" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda464, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.6 0 1)) ((close _V0loop_lambda465) (bruijn ##k.2034 0 0) (##inline ##sys.car (bruijn ##expr.6 0 1))) ((bruijn ##k.2034 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda465, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda463" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda463, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.5 0 1)) ((close _V0loop_lambda464) (bruijn ##k.2032 0 0) (##inline ##sys.car (bruijn ##expr.5 0 1))) ((bruijn ##k.2032 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda464, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k513, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.2031 0 0) ((close _V0loop_lambda463) (bruijn ##k.2029 1 0) (##inline ##sys.cdr (bruijn ##expr.4 1 1))) ((bruijn ##k.2029 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda463, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda462" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda462, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 1)) ((bruijn equal? 8 7) (close _V0loop_k513) (quote define) (##inline ##sys.car (bruijn ##expr.4 0 1))) ((bruijn ##k.2029 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k513, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda461" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda461, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.3 0 1)) ((close _V0loop_lambda462) (bruijn ##k.2027 0 0) (##inline ##sys.car (bruijn ##expr.3 0 1))) ((bruijn ##k.2027 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda462, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k522, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 15 1) (bruijn ##k.2010 5 0) (bruijn ##x.2011 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k521, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 16 1) (close _V0loop_k522) (bruijn ##x.2013 0 0) (bruijn rest 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k522, env)}),
      _var0,
      upenv->up->up->up->vars[1]
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k520, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 18 1) (close _V0loop_k521) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn x 6 1) (##inline ##sys.cons (bruijn body 4 1) (quote ())))) (bruijn defines 14 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k521, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 6-1, 1),
      VInlineCons(
upenv->up->up->up->vars[1],
      VNULL
    )

    )

    )
,
      VGetArg(upenv, 14-1, 1)
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k524, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 14 1) (bruijn ##k.2010 4 0) (bruijn ##x.2011 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k523, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 15 1) (close _V0loop_k524) (bruijn ##x.2013 0 0) (bruijn rest 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k524, env)}),
      _var0,
      upenv->up->up->vars[1]
    );
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k519, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.2017 0 0) ((bruijn error 17 15) (close _V0loop_k520) (##string ##string.2108) (bruijn x 5 1)) ((bruijn cons 17 1) (close _V0loop_k523) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn x 5 1) (##inline ##sys.cons (bruijn body 3 1) (quote ())))) (bruijn defines 13 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k520, env)}),
      VEncodePointer(&_V10string_D2108.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k523, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
      VInlineCons(
upenv->up->up->vars[1],
      VNULL
    )

    )

    )
,
      VGetArg(upenv, 13-1, 1)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k518, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 16 12) (close _V0loop_k519) (bruijn ##x.2018 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k519, env)}),
      _var0
    );
 }
}
static void _V0loop_lambda475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda475" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda475, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 15 13) (close _V0loop_k518) (bruijn x 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k518, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0loop_lambda474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda474" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda474, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.10 1 1))) ((close _V0loop_lambda475) (bruijn ##k.2008 0 0) (##inline ##sys.cdr (bruijn ##expr.7 6 1))) ((bruijn ##k.2008 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda475, env)}, runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda473" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda473, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.10 0 1)) ((close _V0loop_lambda474) (bruijn ##k.2006 0 0) (##inline ##sys.car (bruijn ##expr.10 0 1))) ((bruijn ##k.2006 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda474, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda472" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda472, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda473) (bruijn ##k.2005 0 0) (##inline ##sys.cdr (bruijn ##expr.9 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda473, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda471" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda471, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.9 0 1)) ((close _V0loop_lambda472) (bruijn ##k.2003 0 0) (##inline ##sys.car (bruijn ##expr.9 0 1))) ((bruijn ##k.2003 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda472, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k517, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.2002 0 0) ((close _V0loop_lambda471) (bruijn ##k.2000 1 0) (##inline ##sys.cdr (bruijn ##expr.8 1 1))) ((bruijn ##k.2000 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda471, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda470" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda470, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.8 0 1)) ((bruijn equal? 9 7) (close _V0loop_k517) (quote define) (##inline ##sys.car (bruijn ##expr.8 0 1))) ((bruijn ##k.2000 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k517, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda469" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda469, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.7 0 1)) ((close _V0loop_lambda470) (bruijn ##k.1998 0 0) (##inline ##sys.car (bruijn ##expr.7 0 1))) ((bruijn ##k.1998 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda470, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k527" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k527, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 7 1) (bruijn ##k.1993 1 0) (bruijn ##x.1994 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_lambda477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda477" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda477, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn error 11 15) (close _V0loop_k527) (##string ##string.2109) (##inline ##sys.cons (quote define) (bruijn noise 0 1)))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k527, env)}),
      VEncodePointer(&_V10string_D2109.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      _var1
    )

    );
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k526, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1992 0 0) ((close _V0loop_lambda477) (bruijn ##k.1990 1 0) (##inline ##sys.cdr (bruijn ##expr.11 1 1))) ((bruijn ##k.1990 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda477, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda476" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda476, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.11 0 1)) ((bruijn equal? 9 7) (close _V0loop_k526) (quote define) (##inline ##sys.car (bruijn ##expr.11 0 1))) ((bruijn ##k.1990 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k526, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k529" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k529, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 5 1) (bruijn ##k.1937 4 0) (bruijn ##x.1941 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k532, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1949 1 0) (bruijn ##expr.14 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_lambda491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda491" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda491, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 1 1))) ((bruijn ##kk.18 6 1) (bruijn ##k.1966 0 0) (##inline ##sys.cdr (bruijn ##expr.19 11 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.15 11 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.16 11 3))) ((bruijn ##k.1966 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 11-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 11-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 11-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda490" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda490, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 1)) ((close _V0loop_lambda491) (bruijn ##k.1964 0 0) (##inline ##sys.car (bruijn ##expr.22 0 1))) ((bruijn ##k.1964 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda491, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda489" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda489, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda490) (bruijn ##k.1963 0 0) (##inline ##sys.cdr (bruijn ##expr.21 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda490, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda488" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda488, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 1)) ((close _V0loop_lambda489) (bruijn ##k.1961 0 0) (##inline ##sys.car (bruijn ##expr.21 0 1))) ((bruijn ##k.1961 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda489, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k536, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1960 0 0) ((close _V0loop_lambda488) (bruijn ##k.1958 1 0) (##inline ##sys.cdr (bruijn ##expr.20 1 1))) ((bruijn ##k.1958 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda488, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda487" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda487, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 1)) ((bruijn equal? 24 7) (close _V0loop_k536) (quote define) (##inline ##sys.car (bruijn ##expr.20 0 1))) ((bruijn ##k.1958 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k536, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k539, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 10 1) (bruijn ##k.1954 3 0) (bruijn ##expr.19 8 1) (bruijn ##x.1956 1 0) (bruijn ##x.1957 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 8-1, 1),
      upenv->vars[0],
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k538, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 25 8) (close _V0loop_k539) (bruijn ##vals.16 7 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k539, env)}),
      VGetArg(upenv, 7-1, 3)
    );
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k537, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 24 8) (close _V0loop_k538) (bruijn ##xs.15 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k538, env)}),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_lambda486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda486" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda486, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda486, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda487) (close _V0loop_k537) (##inline ##sys.car (bruijn ##expr.19 5 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda487, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k537, env)}),
      VInlineCar(
VGetArg(upenv, 5-1, 1)
    )

    );
 }
}
static void _V0loop_lambda485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda485" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda485, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 22 9) (bruijn ##k.1953 0 0) (close _V0loop_lambda486))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda486, env)})
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k535, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 21 10) (bruijn ##k.1951 3 0) (close _V0loop_lambda485) (bruijn loop 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 10)), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda485, env)}),
      upenv->up->up->up->vars[1]
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k534, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.17 4 1) (close _V0loop_k535) (bruijn ##expr.19 2 1) (bruijn ##x.1979 1 0) (bruijn ##x.1980 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k535, env)}),
      upenv->up->vars[1],
      upenv->vars[0],
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k533, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 19 8) (close _V0loop_k534) (bruijn ##vals.16 1 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k534, env)}),
      upenv->vars[3]
    );
 }
}
static void _V0loop_lambda498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda498" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda498, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 1 1))) ((bruijn ##kk.18 6 1) (bruijn ##k.1966 0 0) (##inline ##sys.cdr (bruijn ##expr.19 8 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.15 8 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.16 8 3))) ((bruijn ##k.1966 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 8-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 8-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 8-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda497" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda497, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 1)) ((close _V0loop_lambda498) (bruijn ##k.1964 0 0) (##inline ##sys.car (bruijn ##expr.22 0 1))) ((bruijn ##k.1964 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda498, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda496" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda496, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda497) (bruijn ##k.1963 0 0) (##inline ##sys.cdr (bruijn ##expr.21 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda497, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda495" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda495, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 1)) ((close _V0loop_lambda496) (bruijn ##k.1961 0 0) (##inline ##sys.car (bruijn ##expr.21 0 1))) ((bruijn ##k.1961 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda496, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k540, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1960 0 0) ((close _V0loop_lambda495) (bruijn ##k.1958 1 0) (##inline ##sys.cdr (bruijn ##expr.20 1 1))) ((bruijn ##k.1958 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda495, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda494" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda494, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 1)) ((bruijn equal? 21 7) (close _V0loop_k540) (quote define) (##inline ##sys.car (bruijn ##expr.20 0 1))) ((bruijn ##k.1958 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k540, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k543, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 7 1) (bruijn ##k.1954 3 0) (bruijn ##expr.19 5 1) (bruijn ##x.1956 1 0) (bruijn ##x.1957 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->vars[0],
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k542, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 22 8) (close _V0loop_k543) (bruijn ##vals.16 4 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k543, env)}),
      upenv->up->up->up->vars[3]
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k541, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 21 8) (close _V0loop_k542) (bruijn ##xs.15 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k542, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda493" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda493, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda493, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda494) (close _V0loop_k541) (##inline ##sys.car (bruijn ##expr.19 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda494, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k541, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda492" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 9) (bruijn ##k.1953 0 0) (close _V0loop_lambda493))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda493, env)})
    );
 }
}
static void _V0loop_lambda484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda484" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda484, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda484, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.19 0 1))) ((bruijn reverse 18 8) (close _V0loop_k533) (bruijn ##xs.15 0 2)) ((bruijn call-with-values 18 10) (bruijn ##k.1951 0 0) (close _V0loop_lambda492) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k533, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda492, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda483" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda483, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0loop_k532) (bruijn loop 0 1) (close _V0loop_lambda484))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k532, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda484, env)})
    );
 }
}
static void _V0loop_lambda482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda482" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda482, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda482, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda483) (bruijn ##k.1948 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda483, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0loop_lambda481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda481" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda481, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 15 9) (bruijn ##k.1947 0 0) (close _V0loop_lambda482))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda482, env)})
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k544, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.12 6 1) (bruijn ##k.1982 1 0) (##inline ##sys.cons (quote letrec*) (##inline ##sys.cons (bruijn ##x.1986 0 0) (bruijn body 12 2))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      upenv->vars[0],
      VInlineCons(
VEncodePointer(&_V0letrec_S.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VGetArg(upenv, 12-1, 2)
    )

    )

    );
 }
}
static void _V0loop_lambda499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda499" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda499, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda499, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 15 14) (close _V0loop_k544) (bruijn list 15 19) (bruijn xs 0 2) (bruijn vals 0 3)) ((bruijn ##k.1982 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k544, env)}),
      VGetArg(upenv, 15-1, 19),
      _var2,
      _var3
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda480" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda480, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 14 10) (bruijn ##k.1946 0 0) (close _V0loop_lambda481) (close _V0loop_lambda499))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda481, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda499, env)})
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k545, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 14 15) (bruijn ##k.1943 2 0) (##string ##string.2112))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 15)), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D2112.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k531" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k531, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda480) (close _V0loop_k545) (bruijn ##input.13 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda480, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k545, env)}),
      upenv->vars[1]
    );
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k546, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1949 1 0) (bruijn ##expr.14 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_lambda511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda511" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda511, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 1 1))) ((bruijn ##kk.18 6 1) (bruijn ##k.1966 0 0) (##inline ##sys.cdr (bruijn ##expr.19 11 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.15 11 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.16 11 3))) ((bruijn ##k.1966 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 11-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 11-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 11-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda510" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda510, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 1)) ((close _V0loop_lambda511) (bruijn ##k.1964 0 0) (##inline ##sys.car (bruijn ##expr.22 0 1))) ((bruijn ##k.1964 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda511, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda509" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda509, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda510) (bruijn ##k.1963 0 0) (##inline ##sys.cdr (bruijn ##expr.21 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda510, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda508" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda508, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 1)) ((close _V0loop_lambda509) (bruijn ##k.1961 0 0) (##inline ##sys.car (bruijn ##expr.21 0 1))) ((bruijn ##k.1961 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda509, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k550" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k550, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1960 0 0) ((close _V0loop_lambda508) (bruijn ##k.1958 1 0) (##inline ##sys.cdr (bruijn ##expr.20 1 1))) ((bruijn ##k.1958 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda508, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda507" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda507, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 1)) ((bruijn equal? 23 7) (close _V0loop_k550) (quote define) (##inline ##sys.car (bruijn ##expr.20 0 1))) ((bruijn ##k.1958 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k550, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k553" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k553, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 10 1) (bruijn ##k.1954 3 0) (bruijn ##expr.19 8 1) (bruijn ##x.1956 1 0) (bruijn ##x.1957 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 8-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k552" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k552, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 24 8) (close _V0loop_k553) (bruijn ##vals.16 7 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k553, env)}),
      VGetArg(upenv, 7-1, 3)
    );
 }
}
static void _V0loop_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k551" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k551, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 23 8) (close _V0loop_k552) (bruijn ##xs.15 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k552, env)}),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_lambda506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda506" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda506, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda506, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda507) (close _V0loop_k551) (##inline ##sys.car (bruijn ##expr.19 5 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda507, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k551, env)}),
      VInlineCar(
VGetArg(upenv, 5-1, 1)
    )

    );
 }
}
static void _V0loop_lambda505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda505" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 21 9) (bruijn ##k.1953 0 0) (close _V0loop_lambda506))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda506, env)})
    );
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k549, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 20 10) (bruijn ##k.1951 3 0) (close _V0loop_lambda505) (bruijn loop 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 10)), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda505, env)}),
      upenv->up->up->up->vars[1]
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k548, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.17 4 1) (close _V0loop_k549) (bruijn ##expr.19 2 1) (bruijn ##x.1979 1 0) (bruijn ##x.1980 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k549, env)}),
      upenv->up->vars[1],
      upenv->vars[0],
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k547, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 18 8) (close _V0loop_k548) (bruijn ##vals.16 1 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k548, env)}),
      upenv->vars[3]
    );
 }
}
static void _V0loop_lambda518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda518" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda518, runtime, upenv, 2, argc, _var0, _var1) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 1 1))) ((bruijn ##kk.18 6 1) (bruijn ##k.1966 0 0) (##inline ##sys.cdr (bruijn ##expr.19 8 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.15 8 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.16 8 3))) ((bruijn ##k.1966 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      _var0,
      VInlineCdr(
VGetArg(upenv, 8-1, 1)
    )
,
      VInlineCons(
upenv->up->vars[1],
      VGetArg(upenv, 8-1, 2)
    )
,
      VInlineCons(
_var1,
      VGetArg(upenv, 8-1, 3)
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda517" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda517, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 1)) ((close _V0loop_lambda518) (bruijn ##k.1964 0 0) (##inline ##sys.car (bruijn ##expr.22 0 1))) ((bruijn ##k.1964 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda518, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda516" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda516, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda517) (bruijn ##k.1963 0 0) (##inline ##sys.cdr (bruijn ##expr.21 1 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda517, env)}, runtime,
      _var0,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0loop_lambda515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda515" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda515, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 1)) ((close _V0loop_lambda516) (bruijn ##k.1961 0 0) (##inline ##sys.car (bruijn ##expr.21 0 1))) ((bruijn ##k.1961 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda516, env)}, runtime,
      _var0,
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k554" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k554, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1960 0 0) ((close _V0loop_lambda515) (bruijn ##k.1958 1 0) (##inline ##sys.cdr (bruijn ##expr.20 1 1))) ((bruijn ##k.1958 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda515, env)}, runtime,
      upenv->vars[0],
      VInlineCdr(
upenv->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda514" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda514, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 1)) ((bruijn equal? 20 7) (close _V0loop_k554) (quote define) (##inline ##sys.car (bruijn ##expr.20 0 1))) ((bruijn ##k.1958 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k554, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
_var1
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k557" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k557, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 7 1) (bruijn ##k.1954 3 0) (bruijn ##expr.19 5 1) (bruijn ##x.1956 1 0) (bruijn ##x.1957 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k556" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k556, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 21 8) (close _V0loop_k557) (bruijn ##vals.16 4 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k557, env)}),
      upenv->up->up->up->vars[3]
    );
 }
}
static void _V0loop_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k555" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k555, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 20 8) (close _V0loop_k556) (bruijn ##xs.15 3 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k556, env)}),
      upenv->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda513" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda513, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda513, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda514) (close _V0loop_k555) (##inline ##sys.car (bruijn ##expr.19 2 1)))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda514, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k555, env)}),
      VInlineCar(
upenv->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda512" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda512, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 18 9) (bruijn ##k.1953 0 0) (close _V0loop_lambda513))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda513, env)})
    );
 }
}
static void _V0loop_lambda504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda504" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda504, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda504, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.19 0 1))) ((bruijn reverse 17 8) (close _V0loop_k547) (bruijn ##xs.15 0 2)) ((bruijn call-with-values 17 10) (bruijn ##k.1951 0 0) (close _V0loop_lambda512) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
_var1
    )

    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k547, env)}),
      _var2
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda512, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda503" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda503, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0loop_k546) (bruijn loop 0 1) (close _V0loop_lambda504))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k546, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda504, env)})
    );
 }
}
static void _V0loop_lambda502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda502" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda502, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda502, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda503) (bruijn ##k.1948 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda503, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0loop_lambda501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda501" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda501, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 14 9) (bruijn ##k.1947 0 0) (close _V0loop_lambda502))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 9)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda502, env)})
    );
 }
}
static void _V0loop_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k558" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k558, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.12 5 1) (bruijn ##k.1982 1 0) (##inline ##sys.cons (quote letrec*) (##inline ##sys.cons (bruijn ##x.1986 0 0) (bruijn body 11 2))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      upenv->vars[0],
      VInlineCons(
VEncodePointer(&_V0letrec_S.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VGetArg(upenv, 11-1, 2)
    )

    )

    );
 }
}
static void _V0loop_lambda519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda519" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda519, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda519, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 14 14) (close _V0loop_k558) (bruijn list 14 19) (bruijn xs 0 2) (bruijn vals 0 3)) ((bruijn ##k.1982 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k558, env)}),
      VGetArg(upenv, 14-1, 19),
      _var2,
      _var3
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda500" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda500, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 13 10) (bruijn ##k.1946 0 0) (close _V0loop_lambda501) (close _V0loop_lambda519))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 10)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda501, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda519, env)})
    );
 }
}
static void _V0loop_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k559" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k559, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 13 15) (bruijn ##k.1943 1 0) (##string ##string.2112))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 15)), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D2112.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_lambda479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda479" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda479, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.null? (bruijn ##input.13 0 1)) ((bruijn ##kk.12 2 1) (close _V0loop_k531) (##inline ##sys.cons (quote begin) (bruijn body 8 2))) ((close _V0loop_lambda500) (close _V0loop_k559) (bruijn ##input.13 0 1)))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k531, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 2)
    )

    );
} else {
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda500, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k559, env)}),
      _var1
    );
}
 }
}
static void _V0loop_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k530" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k530, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda479) (bruijn ##k.1942 1 0) (bruijn ##x.1989 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda479, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_lambda478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda478" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda478, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda478, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn reverse 10 8) (close _V0loop_k530) (bruijn defines 6 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k530, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0loop_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k528" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k528, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 9 9) (close _V0loop_k529) (close _V0loop_lambda478))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k529, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda478, env)})
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k525, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda476) (close _V0loop_k528) (bruijn ##input.2 2 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda476, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k528, env)}),
      upenv->up->vars[1]
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k516, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda469) (close _V0loop_k525) (bruijn ##input.2 1 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda469, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k525, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0loop_lambda460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda460" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda460, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda461) (close _V0loop_k516) (bruijn ##input.2 0 1))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda461, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k516, env)}),
      _var1
    );
 }
}
static void _V0loop_lambda459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda459" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda459, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda459, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda460) (bruijn ##k.1936 0 0) (bruijn body 1 2))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda460, env)}, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0loop_lambda458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda458" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda458, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda458, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 4 9) (bruijn ##k.1935 0 0) (close _V0loop_lambda459))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[9]), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda459, env)})
    );
 }
}
static void _V0collect__defines_lambda457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0collect__defines_lambda457" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0collect__defines_lambda457, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0collect__defines_k512) (bruijn loop 0 1) (close _V0loop_lambda458))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0collect__defines_k512, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda458, env)})
    );
 }
}
static void _V0collect__defines_lambda456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0collect__defines_lambda456" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0collect__defines_lambda456, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0collect__defines_lambda456, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0collect__defines_lambda457) (bruijn ##k.1932 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0collect__defines_lambda457, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void expand_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9) {
 static VDebugInfo dbg = { "expand_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)expand_lambda4, runtime, upenv, 10, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9) {
  struct { VEnv env; VWORD argv[10]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 10; env->var_len = 10; env->up = upenv;
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
  // (set! (close expand_k35) (bruijn collect-defines 0 1) (close _V0collect__defines_lambda456))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k35, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0collect__defines_lambda456, env)})
    );
 }
}
static void expand_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29) {
 static VDebugInfo dbg = { "expand_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)expand_lambda3, runtime, upenv, 30, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29) {
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
  // ((close expand_lambda4) (bruijn ##k.252 0 0) #f #f #f #f #f #f #f #f #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)expand_lambda4, env)}, runtime,
      _var0,
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
static void expand_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k34" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close expand_lambda3) (bruijn ##k.251 29 0) (bruijn ##x.2055 28 0) (bruijn ##x.2056 27 0) (bruijn ##x.2057 26 0) (bruijn ##x.2058 25 0) (bruijn ##x.2059 24 0) (bruijn ##x.2060 23 0) (bruijn ##x.2061 22 0) (bruijn ##x.2062 21 0) (bruijn ##x.2063 20 0) (bruijn ##x.2064 19 0) (bruijn ##x.2065 18 0) (bruijn ##x.2066 17 0) (bruijn ##x.2067 16 0) (bruijn ##x.2068 15 0) (bruijn ##x.2069 14 0) (bruijn ##x.2070 13 0) (bruijn ##x.2071 12 0) (bruijn ##x.2072 11 0) (bruijn ##x.2073 10 0) (bruijn ##x.2074 9 0) (bruijn ##x.2075 8 0) (bruijn ##x.2076 7 0) (bruijn ##x.2077 6 0) (bruijn ##x.2078 5 0) (bruijn ##x.2079 4 0) (bruijn ##x.2080 3 0) (bruijn ##x.2081 2 0) (bruijn ##x.2082 1 0) (bruijn ##x.2083 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)expand_lambda3, env)}, runtime,
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
static void expand_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k33" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 1) (close expand_k34) (quote =))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k34, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k32" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 1) (close expand_k33) (quote -))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k33, env)}),
      VEncodePointer(&_V0__.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k31" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 1) (close expand_k32) (quote +))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k32, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k30" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 1) (close expand_k31) (quote cadr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k31, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k29" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 1) (close expand_k30) (quote cddr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k30, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k28" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 1) (close expand_k29) (quote fold))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k29, env)}),
      VEncodePointer(&_V0fold.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k27" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 1) (close expand_k28) (quote free-variables))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k28, env)}),
      VEncodePointer(&_V0free__variables.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k26" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 1) (close expand_k27) (quote pair?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k27, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 1) (close expand_k26) (quote car))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k26, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k24" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 1) (close expand_k25) (quote null?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k25, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k23" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 1) (close expand_k24) (quote list))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k24, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 1) (close expand_k23) (quote string?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k23, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 1) (close expand_k22) (quote mangle-library))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k22, env)}),
      VEncodePointer(&_V0mangle__library.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k20" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 1) (close expand_k21) (quote apply))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k21, env)}),
      VEncodePointer(&_V0apply.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 1) (close expand_k20) (quote error))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k20, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 1) (close expand_k19) (quote map))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k19, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 1) (close expand_k18) (quote symbol?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k18, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 1) (close expand_k17) (quote not))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k17, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 1) (close expand_k16) (quote atom?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k16, env)}),
      VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 1) (close expand_k15) (quote call-with-values))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k15, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 1) (close expand_k14) (quote call/cc))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k14, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 1) (close expand_k13) (quote reverse))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k13, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 1) (close expand_k12) (quote equal?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k12, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 1) (close expand_k11) (quote transform-match))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k11, env)}),
      VEncodePointer(&_V0transform__match.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 1) (close expand_k10) (quote eqv?))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k10, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 1) (close expand_k9) (quote gensym))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k9, env)}),
      VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k7" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 1) (close expand_k8) (quote append))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k8, env)}),
      VEncodePointer(&_V0append.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k6" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 1) (close expand_k7) (quote cdr))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k7, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "expand_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)expand_lambda2, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##vcore.import 0 1) (close expand_k6) (quote cons))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k6, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k5" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close expand_lambda2) (bruijn ##k.250 5 0) (bruijn ##x.2084 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)expand_lambda2, env)}, runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void expand_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k4" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close expand_k5) (##string ##string.2120) (bruijn ##x.2085 3 0) (bruijn ##x.2086 2 0) (bruijn ##x.2087 1 0) (bruijn ##x.2088 0 0))
    V_CALL_FUNC2(VMakeImport2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k5, env)}),
      VEncodePointer(&_V10string_D2120.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void expand_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k3" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close expand_k4) (##string ##string.2121))
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k4, env)}),
      VEncodePointer(&_V10string_D2121.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k2" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close expand_k3) (##string ##string.2122))
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k3, env)}),
      VEncodePointer(&_V10string_D2122.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_k1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close expand_k2) (##string ##string.2123))
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k2, env)}),
      VEncodePointer(&_V10string_D2123.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "expand_lambda1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to expand_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)expand_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close expand_k1) (##string ##string.2124))
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)expand_k1, env)}),
      VEncodePointer(&_V10string_D2124.sym, VPOINTER_OTHER)
    );
 }
}
VFunc2 expand = (VFunc2)expand_lambda1;
