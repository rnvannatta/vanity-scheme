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
static struct { VBlob sym; char bytes[21]; } _V10string_D4163 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[6]; } _V10string_D4162 = { { VSTRING, 6 }, "utils" };
static struct { VBlob sym; char bytes[6]; } _V10string_D4161 = { { VSTRING, 6 }, "match" };
static struct { VBlob sym; char bytes[10]; } _V10string_D4160 = { { VSTRING, 10 }, "variables" };
static struct { VBlob sym; char bytes[7]; } _V10string_D4159 = { { VSTRING, 7 }, "expand" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[7]; } _V0gensym = { { VSYMBOL, 7 }, "gensym" };
static struct { VBlob sym; char bytes[16]; } _V0transform__match = { { VSYMBOL, 16 }, "transform-match" };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[6]; } _V0atom_Q = { { VSYMBOL, 6 }, "atom\?" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[8]; } _V0call_Wcc = { { VSYMBOL, 8 }, "call/cc" };
static struct { VBlob sym; char bytes[8]; } _V0reverse = { { VSYMBOL, 8 }, "reverse" };
static struct { VBlob sym; char bytes[6]; } _V0apply = { { VSYMBOL, 6 }, "apply" };
static struct { VBlob sym; char bytes[15]; } _V0mangle__library = { { VSYMBOL, 15 }, "mangle-library" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[15]; } _V0free__variables = { { VSYMBOL, 15 }, "free-variables" };
static struct { VBlob sym; char bytes[5]; } _V0fold = { { VSYMBOL, 5 }, "fold" };
static struct { VBlob sym; char bytes[5]; } _V0cddr = { { VSYMBOL, 5 }, "cddr" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[2]; } _V0_E = { { VSYMBOL, 2 }, "=" };
static struct { VBlob sym; char bytes[2]; } _V0__ = { { VSYMBOL, 2 }, "-" };
static struct { VBlob sym; char bytes[17]; } _V0unquote__splicing = { { VSYMBOL, 17 }, "unquote-splicing" };
static struct { VBlob sym; char bytes[7]; } _V0append = { { VSYMBOL, 7 }, "append" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dcons = { { VSYMBOL, 11 }, "##sys.cons" };
static struct { VBlob sym; char bytes[8]; } _V0unquote = { { VSYMBOL, 8 }, "unquote" };
static struct { VBlob sym; char bytes[43]; } _V10string_D4158 = { { VSTRING, 43 }, "expressions not permitted in libraries yet" };
static struct { VBlob sym; char bytes[7]; } _V0export = { { VSYMBOL, 7 }, "export" };
static struct { VBlob sym; char bytes[41]; } _V10string_D4157 = { { VSTRING, 41 }, "imports to library must all be c strings" };
static struct { VBlob sym; char bytes[43]; } _V10string_D4156 = { { VSTRING, 43 }, "library has free variables but no imports:" };
static struct { VBlob sym; char bytes[12]; } _V10string_D4155 = { { VSTRING, 12 }, "VMakeImport" };
static struct { VBlob sym; char bytes[15]; } _V10vcore_Dimport = { { VSYMBOL, 15 }, "##vcore.import" };
static struct { VBlob sym; char bytes[20]; } _V10string_D4154 = { { VSTRING, 20 }, "duplicate in lambda" };
static struct { VBlob sym; char bytes[15]; } _V10string_D4153 = { { VSTRING, 15 }, "invalid lambda" };
static struct { VBlob sym; char bytes[20]; } _V10string_D4152 = { { VSTRING, 20 }, "invalid lambda args" };
static struct { VBlob sym; char bytes[14]; } _V10string_D4151 = { { VSTRING, 14 }, "malformed let" };
static struct { VBlob sym; char bytes[17]; } _V10string_D4150 = { { VSTRING, 17 }, "no matching case" };
static struct { VBlob sym; char bytes[49]; } _V10string_D4149 = { { VSTRING, 49 }, "##vcore.declare's first argument is not a string" };
static struct { VBlob sym; char bytes[61]; } _V10string_D4148 = { { VSTRING, 61 }, "##vcore.declare's second argument is not a lambda expression" };
static struct { VBlob sym; char bytes[3]; } _V0ok = { { VSYMBOL, 3 }, "ok" };
static struct { VBlob sym; char bytes[16]; } _V10vcore_Ddeclare = { { VSYMBOL, 16 }, "##vcore.declare" };
static struct { VBlob sym; char bytes[17]; } _V10string_D4147 = { { VSTRING, 17 }, "malformed define" };
static struct { VBlob sym; char bytes[40]; } _V10string_D4146 = { { VSTRING, 40 }, "define's first argument is not a symbol" };
static struct { VBlob sym; char bytes[13]; } _V10string_D4145 = { { VSTRING, 13 }, "VLoadLibrary" };
static struct { VBlob sym; char bytes[17]; } _V10vcore_Dfunction = { { VSYMBOL, 17 }, "##vcore.function" };
static struct { VBlob sym; char bytes[20]; } _V10vcore_Dmultidefine = { { VSYMBOL, 20 }, "##vcore.multidefine" };
static struct { VBlob sym; char bytes[7]; } _V0import = { { VSYMBOL, 7 }, "import" };
static struct { VBlob sym; char bytes[25]; } _V10string_D4144 = { { VSTRING, 25 }, "malformed define-library" };
static struct { VBlob sym; char bytes[15]; } _V0define__library = { { VSYMBOL, 15 }, "define-library" };
static struct { VBlob sym; char bytes[27]; } _V10string_D4143 = { { VSTRING, 27 }, "stray null list in program" };
static struct { VBlob sym; char bytes[31]; } _V10string_D4142 = { { VSTRING, 31 }, "stray improper list in program" };
static struct { VBlob sym; char bytes[51]; } _V10string_D4141 = { { VSTRING, 51 }, "function application's first arg is not a function" };
static struct { VBlob sym; char bytes[6]; } _V0match = { { VSYMBOL, 6 }, "match" };
static struct { VBlob sym; char bytes[7]; } _V0define = { { VSYMBOL, 7 }, "define" };
static struct { VBlob sym; char bytes[24]; } _V10string_D4140 = { { VSTRING, 24 }, "stray define in program" };
static struct { VBlob sym; char bytes[15]; } _V10string_D4139 = { { VSTRING, 15 }, "malformed set!" };
static struct { VBlob sym; char bytes[38]; } _V10string_D4138 = { { VSTRING, 38 }, "set!'s first argument is not a symbol" };
static struct { VBlob sym; char bytes[14]; } _V10string_D4137 = { { VSTRING, 14 }, "malformed cut" };
static struct { VBlob sym; char bytes[6]; } _V0_L_D_D_D_G = { { VSYMBOL, 6 }, "<...>" };
static struct { VBlob sym; char bytes[39]; } _V10string_D4136 = { { VSTRING, 39 }, "cut: ellipses syntax not supported yet" };
static struct { VBlob sym; char bytes[3]; } _V0_L_G = { { VSYMBOL, 3 }, "<>" };
static struct { VBlob sym; char bytes[4]; } _V0cut = { { VSYMBOL, 4 }, "cut" };
static struct { VBlob sym; char bytes[9]; } _V0cut__iter = { { VSYMBOL, 9 }, "cut-iter" };
static struct { VBlob sym; char bytes[25]; } _V10string_D4135 = { { VSTRING, 25 }, "exhausted case statement" };
static struct { VBlob sym; char bytes[5]; } _V0eqv_Q = { { VSYMBOL, 5 }, "eqv\?" };
static struct { VBlob sym; char bytes[5]; } _V0case = { { VSYMBOL, 5 }, "case" };
static struct { VBlob sym; char bytes[10]; } _V0case__iter = { { VSYMBOL, 10 }, "case-iter" };
static struct { VBlob sym; char bytes[15]; } _V10string_D4134 = { { VSTRING, 15 }, "malformed cond" };
static struct { VBlob sym; char bytes[25]; } _V10string_D4133 = { { VSTRING, 25 }, "exhausted cond statement" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[3]; } _V0_E_G = { { VSYMBOL, 3 }, "=>" };
static struct { VBlob sym; char bytes[2]; } _V10string_D4132 = { { VSTRING, 2 }, "x" };
static struct { VBlob sym; char bytes[5]; } _V0cond = { { VSYMBOL, 5 }, "cond" };
static struct { VBlob sym; char bytes[5]; } _V0else = { { VSYMBOL, 5 }, "else" };
static struct { VBlob sym; char bytes[9]; } _V10sys_Dor = { { VSYMBOL, 9 }, "##sys.or" };
static struct { VBlob sym; char bytes[3]; } _V0or = { { VSYMBOL, 3 }, "or" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dand = { { VSYMBOL, 10 }, "##sys.and" };
static struct { VBlob sym; char bytes[4]; } _V0and = { { VSYMBOL, 4 }, "and" };
static struct { VBlob sym; char bytes[13]; } _V10string_D4131 = { { VSTRING, 13 }, "malformed if" };
static struct { VBlob sym; char bytes[9]; } _V10sys_Dif = { { VSYMBOL, 9 }, "##sys.if" };
static struct { VBlob sym; char bytes[3]; } _V0if = { { VSYMBOL, 3 }, "if" };
static struct { VBlob sym; char bytes[16]; } _V10string_D4130 = { { VSTRING, 16 }, "malformed begin" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dbegin = { { VSYMBOL, 12 }, "##sys.begin" };
static struct { VBlob sym; char bytes[15]; } _V10string_D4129 = { { VSTRING, 15 }, "malformed let*" };
static struct { VBlob sym; char bytes[5]; } _V0let_S = { { VSYMBOL, 5 }, "let*" };
static struct { VBlob sym; char bytes[8]; } _V0letrec_S = { { VSYMBOL, 8 }, "letrec*" };
static struct { VBlob sym; char bytes[17]; } _V10string_D4128 = { { VSTRING, 17 }, "malformed letrec" };
static struct { VBlob sym; char bytes[5]; } _V0set_B = { { VSYMBOL, 5 }, "set!" };
static struct { VBlob sym; char bytes[7]; } _V0letrec = { { VSYMBOL, 7 }, "letrec" };
static struct { VBlob sym; char bytes[22]; } _V10string_D4127 = { { VSTRING, 22 }, "malformed let-values*" };
static struct { VBlob sym; char bytes[6]; } _V0begin = { { VSYMBOL, 6 }, "begin" };
static struct { VBlob sym; char bytes[12]; } _V0let_S__values = { { VSYMBOL, 12 }, "let*-values" };
static struct { VBlob sym; char bytes[17]; } _V0call__with__values = { { VSYMBOL, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[4]; } _V0let = { { VSYMBOL, 4 }, "let" };
static struct { VBlob sym; char bytes[6]; } _V0quote = { { VSYMBOL, 6 }, "quote" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dqcons = { { VSYMBOL, 12 }, "##sys.qcons" };
static struct { VBlob sym; char bytes[11]; } _V0quasiquote = { { VSYMBOL, 11 }, "quasiquote" };
static struct { VBlob sym; char bytes[22]; } _V10string_D4126 = { { VSTRING, 22 }, "malformed case-lambda" };
static struct { VBlob sym; char bytes[12]; } _V0case__lambda = { { VSYMBOL, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[7]; } _V0lambda = { { VSYMBOL, 7 }, "lambda" };
static struct { VBlob sym; char bytes[16]; } _V0expand__toplevel = { { VSYMBOL, 16 }, "expand-toplevel" };
static void expand_k48(VEnv * env) {
 static VDebugInfo dbg = { "expand_k48" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k48, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.251 9 0) (##inline ##sys.cons (##inline ##sys.cons (quote expand-toplevel) (bruijn expand-toplevel 9 8)) (quote ())))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 0)),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0expand__toplevel.sym, VPOINTER_OTHER),
      VGetArg(env, 9, 8)
    )
,
      VNULL
    )

    );
 } else {
  VError("Not enough arguments to expand_k48, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k52(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k52" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k52, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 6 1) (bruijn ##k.2462 4 0) (bruijn ##x.2470 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k52, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k51(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k51" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k51, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 16 1) (close _V0expand__syntax_k52) (quote lambda) (bruijn ##x.2471 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k52, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k51, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k50(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k50" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k50, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-lambda 14 6) (close _V0expand__syntax_k51) (bruijn ##x.2472 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k51, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k50, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k49(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k49" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k49, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2467 0 0) ((bruijn cdr 14 2) (close _V0expand__syntax_k50) (bruijn expr 4 1)) ((bruijn ##k.2462 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k50, env)}),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k49, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda8(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda8" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda8, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.104 0 1)) ((bruijn equal? 13 7) (close _V0expand__syntax_k49) (quote lambda) (##inline ##sys.car (bruijn ##expr.104 0 1))) ((bruijn ##k.2462 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k49, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k55(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k55" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k55, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.2417 1 0) (bruijn ##expr.106 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k55, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda17(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda17" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda17, env) {
  // ((bruijn ##k.109 1 1) (bruijn ##k.2435 0 0) (##inline ##sys.cdr (bruijn ##expr.110 5 1)) (##inline ##sys.cons (bruijn lamb 0 1) (bruijn ##lamb.107 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k59(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k59" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k59, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.108 8 1) (bruijn ##k.2429 2 0) (bruijn ##expr.110 6 1) (bruijn ##x.2434 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k59, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k58(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k58" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k58, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 25 14) (close _V0loop_k59) (bruijn ##lamb.107 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k59, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k58, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda16(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda16" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda16, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda17) (close _V0loop_k58) (##inline ##sys.car (bruijn ##expr.110 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda17, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k58, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda16, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda15(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda15" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda15, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 23 13) (bruijn ##k.2427 0 0) (close _V0loop_lambda16))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda16, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda15, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k57(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k57" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k57, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 22 12) (bruijn ##k.2422 2 0) (close _V0loop_lambda15) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 12)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda15, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k57, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k56(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k56" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k56, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.108 3 1) (close _V0loop_k57) (bruijn ##expr.110 1 1) (bruijn ##x.2443 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k57, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k56, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda20(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda20" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda20, env) {
  // ((bruijn ##k.109 1 1) (bruijn ##k.2435 0 0) (##inline ##sys.cdr (bruijn ##expr.110 3 1)) (##inline ##sys.cons (bruijn lamb 0 1) (bruijn ##lamb.107 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k61(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k61" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k61, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.108 6 1) (bruijn ##k.2429 2 0) (bruijn ##expr.110 4 1) (bruijn ##x.2434 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k61, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k60(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k60" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k60, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 23 14) (close _V0loop_k61) (bruijn ##lamb.107 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k61, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k60, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda19(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda19" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda19, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda20) (close _V0loop_k60) (##inline ##sys.car (bruijn ##expr.110 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda20, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k60, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda19, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda18(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda18" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda18, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 21 13) (bruijn ##k.2427 0 0) (close _V0loop_lambda19))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda19, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda18, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda14(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda14" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda14, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.110 0 1))) ((bruijn reverse 20 14) (close _V0loop_k56) (bruijn ##lamb.107 0 2)) ((bruijn call-with-values 20 12) (bruijn ##k.2422 0 0) (close _V0loop_lambda18) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k56, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda18, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda14, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda13(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda13" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda13, env) {
  // (set! (close _V0expand__syntax_k55) (bruijn loop 0 1) (close _V0loop_lambda14))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k55, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda14, env)})
    );
 }
}
static void _V0expand__syntax_lambda12(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda12" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda12, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__syntax_lambda13) (bruijn ##k.2415 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda13, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda12, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda11(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda11" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda11, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 17 13) (bruijn ##k.2413 0 0) (close _V0expand__syntax_lambda12))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda12, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda11, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k62(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k62" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k62, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 7 1) (bruijn ##k.2447 1 0) (##inline ##sys.cons (quote case-lambda) (bruijn ##x.2453 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k62, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda21(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda21" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda21, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 17 11) (close _V0expand__syntax_k62) (bruijn expand-lambda 16 6) (bruijn lamb 0 2)) ((bruijn ##k.2447 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k62, env)}),
      VGetArg(env, 16, 6),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda21, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda10(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda10" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda10, env) {
  // ((bruijn call-with-values 16 12) (bruijn ##k.2411 0 0) (close _V0expand__syntax_lambda11) (close _V0expand__syntax_lambda21))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda11, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda21, env)})
    );
 }
}
static void _V0expand__syntax_k54(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k54" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k54, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2408 0 0) ((close _V0expand__syntax_lambda10) (bruijn ##k.2403 1 0) (##inline ##sys.cdr (bruijn ##expr.105 1 1))) ((bruijn ##k.2403 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda10, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k54, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda9(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda9" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda9, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.105 0 1)) ((bruijn equal? 14 7) (close _V0expand__syntax_k54) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.105 0 1))) ((bruijn ##k.2403 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k54, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k65(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k65" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k65, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 6 1) (bruijn ##k.2389 2 0) (bruijn ##x.2397 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k65, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k64(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k64" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k64, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2394 0 0) ((bruijn error 16 15) (close _V0expand__syntax_k65) (##string ##string.4126) (bruijn expr 6 1)) ((bruijn ##k.2389 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k65, env)}),
      VEncodePointer(&_V10string_D4126.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k64, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda22(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda22" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda22, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.111 0 1)) ((bruijn equal? 15 7) (close _V0expand__syntax_k64) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.111 0 1))) ((bruijn ##k.2389 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k64, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k69(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k69" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k69, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 10 1) (bruijn ##k.2370 2 0) (bruijn ##x.2375 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k69, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k68(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k68" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k68, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 19 9) (close _V0expand__syntax_k69) (bruijn ##x.2376 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k69, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k68, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda25(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda25" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda25, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.113 1 1))) ((bruijn expand-quasiquote 18 2) (close _V0expand__syntax_k68) 1 (bruijn x 0 1)) ((bruijn ##k.2370 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k68, env)}),
      VEncodeInt(1l),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda24(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda24, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.113 0 1)) ((close _V0expand__syntax_lambda25) (bruijn ##k.2365 0 0) (##inline ##sys.car (bruijn ##expr.113 0 1))) ((bruijn ##k.2365 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda25, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k67(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k67" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k67, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2362 0 0) ((close _V0expand__syntax_lambda24) (bruijn ##k.2357 1 0) (##inline ##sys.cdr (bruijn ##expr.112 1 1))) ((bruijn ##k.2357 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda24, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k67, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda23(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda23" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda23, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.112 0 1)) ((bruijn equal? 16 7) (close _V0expand__syntax_k67) (quote quasiquote) (##inline ##sys.car (bruijn ##expr.112 0 1))) ((bruijn ##k.2357 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k67, env)}),
      VEncodePointer(&_V0quasiquote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k72(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k72" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k72, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 12 1) (bruijn ##k.2328 1 0) (bruijn ##x.2333 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k72, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda30(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda30" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda30, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.115 3 1))) ((bruijn expand-syntax 21 9) (close _V0expand__syntax_k72) (##inline ##sys.cons (quote ##sys.qcons) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn a 1 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn b 0 1) (quote ()))) (quote ()))))) ((bruijn ##k.2328 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->up->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k72, env)}),
      VInlineCons(
VEncodePointer(&_V10sys_Dqcons.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[1],
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[1],
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
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda29(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda29" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda29, env) {
  // ((close _V0expand__syntax_lambda30) (bruijn ##k.2326 0 0) (##inline ##sys.cdr (bruijn ##expr.116 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda30, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda28(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda28" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda28, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.116 0 1)) ((close _V0expand__syntax_lambda29) (bruijn ##k.2321 0 0) (##inline ##sys.car (bruijn ##expr.116 0 1))) ((bruijn ##k.2321 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda29, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda27(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda27" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda27, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.115 0 1)) ((close _V0expand__syntax_lambda28) (bruijn ##k.2316 0 0) (##inline ##sys.car (bruijn ##expr.115 0 1))) ((bruijn ##k.2316 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda28, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k71(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k71" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k71, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2313 0 0) ((close _V0expand__syntax_lambda27) (bruijn ##k.2308 1 0) (##inline ##sys.cdr (bruijn ##expr.114 1 1))) ((bruijn ##k.2308 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda27, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k71, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda26(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda26" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda26, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.114 0 1)) ((bruijn equal? 17 7) (close _V0expand__syntax_k71) (quote quote) (##inline ##sys.car (bruijn ##expr.114 0 1))) ((bruijn ##k.2308 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k71, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda33(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda33" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda33, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.118 1 1))) ((bruijn ##k.102 10 1) (bruijn ##k.2289 0 0) (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn x 0 1) (quote ())))) ((bruijn ##k.2289 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->vars[0],
      VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[1],
      VNULL
    )

    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda32(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda32" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda32, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.118 0 1)) ((close _V0expand__syntax_lambda33) (bruijn ##k.2284 0 0) (##inline ##sys.car (bruijn ##expr.118 0 1))) ((bruijn ##k.2284 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda33, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k74(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k74" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k74, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2281 0 0) ((close _V0expand__syntax_lambda32) (bruijn ##k.2276 1 0) (##inline ##sys.cdr (bruijn ##expr.117 1 1))) ((bruijn ##k.2276 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda32, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k74, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda31(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda31" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda31, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.117 0 1)) ((bruijn equal? 18 7) (close _V0expand__syntax_k74) (quote quote) (##inline ##sys.car (bruijn ##expr.117 0 1))) ((bruijn ##k.2276 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k74, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k78(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k78" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k78, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 11 1) (bruijn ##k.2261 3 0) (bruijn ##x.2269 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k78, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k77(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k77" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k77, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-let 20 7) (close _V0expand__syntax_k78) (bruijn ##x.2270 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k78, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k77, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k76(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k76" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k76, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2266 0 0) ((bruijn cdr 20 2) (close _V0expand__syntax_k77) (bruijn expr 10 1)) ((bruijn ##k.2261 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k77, env)}),
      VGetArg(env, 10, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k76, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda34(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda34" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda34, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.119 0 1)) ((bruijn equal? 19 7) (close _V0expand__syntax_k76) (quote let) (##inline ##sys.car (bruijn ##expr.119 0 1))) ((bruijn ##k.2261 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k76, env)}),
      VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k81(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k81" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k81, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 19 1) (bruijn ##k.2223 1 0) (bruijn ##x.2225 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k81, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda43(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda43" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda43, env) {
  // ((bruijn expand-syntax 28 9) (close _V0expand__syntax_k81) (##inline ##sys.cons (quote call-with-values) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn producer 2 1) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 4 1) (##inline ##sys.cons (##inline ##sys.cons (quote let*-values) (##inline ##sys.cons (bruijn rest 1 1) (bruijn body 0 1))) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k81, env)}),
      VInlineCons(
VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
env->up->up->vars[1],
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 4, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0let_S__values.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[1],
      env->vars[1]
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
static void _V0expand__syntax_lambda42(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda42" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda42, env) {
  // ((close _V0expand__syntax_lambda43) (bruijn ##k.2221 0 0) (##inline ##sys.cdr (bruijn ##expr.121 6 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda43, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )

    );
 }
}
static void _V0expand__syntax_lambda41(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda41" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda41, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.124 1 1))) ((close _V0expand__syntax_lambda42) (bruijn ##k.2216 0 0) (##inline ##sys.cdr (bruijn ##expr.122 4 1))) ((bruijn ##k.2216 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda42, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 4, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda40(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda40" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda40, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.124 0 1)) ((close _V0expand__syntax_lambda41) (bruijn ##k.2211 0 0) (##inline ##sys.car (bruijn ##expr.124 0 1))) ((bruijn ##k.2211 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda41, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda39(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda39" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda39, env) {
  // ((close _V0expand__syntax_lambda40) (bruijn ##k.2209 0 0) (##inline ##sys.cdr (bruijn ##expr.123 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda40, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda38(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda38" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda38, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.123 0 1)) ((close _V0expand__syntax_lambda39) (bruijn ##k.2204 0 0) (##inline ##sys.car (bruijn ##expr.123 0 1))) ((bruijn ##k.2204 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda39, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda37(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda37" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda37, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.122 0 1)) ((close _V0expand__syntax_lambda38) (bruijn ##k.2199 0 0) (##inline ##sys.car (bruijn ##expr.122 0 1))) ((bruijn ##k.2199 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda38, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda36(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda36" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda36, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 1)) ((close _V0expand__syntax_lambda37) (bruijn ##k.2194 0 0) (##inline ##sys.car (bruijn ##expr.121 0 1))) ((bruijn ##k.2194 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda37, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k80(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k80" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k80, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2191 0 0) ((close _V0expand__syntax_lambda36) (bruijn ##k.2186 1 0) (##inline ##sys.cdr (bruijn ##expr.120 1 1))) ((bruijn ##k.2186 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda36, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k80, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda35(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda35" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda35, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.120 0 1)) ((bruijn equal? 20 7) (close _V0expand__syntax_k80) (quote let*-values) (##inline ##sys.car (bruijn ##expr.120 0 1))) ((bruijn ##k.2186 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k80, env)}),
      VEncodePointer(&_V0let_S__values.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k84(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k84" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k84, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 14 1) (bruijn ##k.2170 1 0) (bruijn ##x.2172 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k84, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda46(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda46" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda46, env) {
  // ((bruijn expand-syntax 23 9) (close _V0expand__syntax_k84) (##inline ##sys.cons (quote begin) (bruijn body 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k84, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda45(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda45" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda45, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.126 0 1)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.126 0 1))) ((close _V0expand__syntax_lambda46) (bruijn ##k.2162 0 0) (##inline ##sys.cdr (bruijn ##expr.126 0 1))) ((bruijn ##k.2162 0 0) #f)) ((bruijn ##k.2162 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCar(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda46, env)},
      env->vars[0],
      VInlineCdr(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k83(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k83" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k83, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2159 0 0) ((close _V0expand__syntax_lambda45) (bruijn ##k.2154 1 0) (##inline ##sys.cdr (bruijn ##expr.125 1 1))) ((bruijn ##k.2154 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda45, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k83, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda44(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda44" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda44, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.125 0 1)) ((bruijn equal? 21 7) (close _V0expand__syntax_k83) (quote let*-values) (##inline ##sys.car (bruijn ##expr.125 0 1))) ((bruijn ##k.2154 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k83, env)}),
      VEncodePointer(&_V0let_S__values.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k87(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k87" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k87, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 14 1) (bruijn ##k.2144 1 0) (bruijn ##x.2146 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k87, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda48(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda48" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda48, env) {
  // ((bruijn error 24 15) (close _V0expand__syntax_k87) (##string ##string.4127) (##inline ##sys.cons (quote letrec) (bruijn noise 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k87, env)}),
      VEncodePointer(&_V10string_D4127.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_k86(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k86" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k86, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2141 0 0) ((close _V0expand__syntax_lambda48) (bruijn ##k.2136 1 0) (##inline ##sys.cdr (bruijn ##expr.127 1 1))) ((bruijn ##k.2136 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda48, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k86, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda47(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda47" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda47, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.127 0 1)) ((bruijn equal? 22 7) (close _V0expand__syntax_k86) (quote let*-values) (##inline ##sys.car (bruijn ##expr.127 0 1))) ((bruijn ##k.2136 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k86, env)}),
      VEncodePointer(&_V0let_S__values.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k90(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k90" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k90, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.2046 1 0) (bruijn ##expr.130 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL,
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k90, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda61(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda61" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda61, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.137 1 1))) ((bruijn ##k.134 4 1) (bruijn ##k.2077 0 0) (##inline ##sys.cdr (bruijn ##expr.135 9 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.131 9 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.132 9 3))) ((bruijn ##k.2077 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 9, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 9, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 9, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda60(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda60" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda60, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 1)) ((close _V0loop_lambda61) (bruijn ##k.2072 0 0) (##inline ##sys.car (bruijn ##expr.137 0 1))) ((bruijn ##k.2072 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda61, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda59(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda59" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda59, env) {
  // ((close _V0loop_lambda60) (bruijn ##k.2070 0 0) (##inline ##sys.cdr (bruijn ##expr.136 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda60, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda58(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda58" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda58, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.136 0 1)) ((close _V0loop_lambda59) (bruijn ##k.2065 0 0) (##inline ##sys.car (bruijn ##expr.136 0 1))) ((bruijn ##k.2065 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda59, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k96(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k96" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k96, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.133 10 1) (bruijn ##k.2058 3 0) (bruijn ##expr.135 8 1) (bruijn ##x.2063 1 0) (bruijn ##x.2064 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 8, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k96, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k95(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k95" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k95, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 37 14) (close _V0loop_k96) (bruijn ##vals.132 7 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k96, env)}),
      VGetArg(env, 7, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k95, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k94(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k94" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k94, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 36 14) (close _V0loop_k95) (bruijn ##xs.131 6 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k95, env)}),
      VGetArg(env, 6, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k94, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda57(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda57" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda57, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda58) (close _V0loop_k94) (##inline ##sys.car (bruijn ##expr.135 5 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda58, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k94, env)}),
      VInlineCar(
VGetArg(env, 5, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda57, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda56(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda56" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda56, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 34 13) (bruijn ##k.2056 0 0) (close _V0loop_lambda57))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda57, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda56, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k93(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k93" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k93, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 33 12) (bruijn ##k.2051 3 0) (close _V0loop_lambda56) (bruijn loop 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 12)),
      env->up->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda56, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k93, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k92(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k92" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k92, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.133 4 1) (close _V0loop_k93) (bruijn ##expr.135 2 1) (bruijn ##x.2099 1 0) (bruijn ##x.2100 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k93, env)}),
      env->up->up->vars[1],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k92, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k91(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k91" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k91, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 31 14) (close _V0loop_k92) (bruijn ##vals.132 1 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k92, env)}),
      env->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0loop_k91, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda67(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda67" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda67, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.137 1 1))) ((bruijn ##k.134 4 1) (bruijn ##k.2077 0 0) (##inline ##sys.cdr (bruijn ##expr.135 6 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.131 6 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.132 6 3))) ((bruijn ##k.2077 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 6, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 6, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda66(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda66" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda66, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 1)) ((close _V0loop_lambda67) (bruijn ##k.2072 0 0) (##inline ##sys.car (bruijn ##expr.137 0 1))) ((bruijn ##k.2072 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda67, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda65(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda65" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda65, env) {
  // ((close _V0loop_lambda66) (bruijn ##k.2070 0 0) (##inline ##sys.cdr (bruijn ##expr.136 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda66, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda64(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda64" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda64, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.136 0 1)) ((close _V0loop_lambda65) (bruijn ##k.2065 0 0) (##inline ##sys.car (bruijn ##expr.136 0 1))) ((bruijn ##k.2065 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda65, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k99(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k99" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k99, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.133 7 1) (bruijn ##k.2058 3 0) (bruijn ##expr.135 5 1) (bruijn ##x.2063 1 0) (bruijn ##x.2064 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 5, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k99, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k98(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k98" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k98, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 34 14) (close _V0loop_k99) (bruijn ##vals.132 4 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k99, env)}),
      VGetArg(env, 4, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k98, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k97(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k97" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k97, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 33 14) (close _V0loop_k98) (bruijn ##xs.131 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k98, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k97, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda63(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda63" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda63, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda64) (close _V0loop_k97) (##inline ##sys.car (bruijn ##expr.135 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda64, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k97, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda63, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda62(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda62" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda62, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 31 13) (bruijn ##k.2056 0 0) (close _V0loop_lambda63))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda63, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda62, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda55(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda55" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda55, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.135 0 1))) ((bruijn reverse 30 14) (close _V0loop_k91) (bruijn ##xs.131 0 2)) ((bruijn call-with-values 30 12) (bruijn ##k.2051 0 0) (close _V0loop_lambda62) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k91, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda62, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda55, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda54(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda54" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda54, env) {
  // (set! (close _V0expand__syntax_k90) (bruijn loop 0 1) (close _V0loop_lambda55))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k90, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda55, env)})
    );
 }
}
static void _V0expand__syntax_lambda53(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda53" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda53, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__syntax_lambda54) (bruijn ##k.2044 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda54, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda53, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda52(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda52" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda52, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 27 13) (bruijn ##k.2042 0 0) (close _V0expand__syntax_lambda53))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda53, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda52, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k103(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k103" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k103, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 21 1) (bruijn ##k.2109 4 0) (bruijn ##x.2111 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k103, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k102(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k102" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k102, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 30 9) (close _V0expand__syntax_k103) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 4 2) (bruijn ##x.2118 1 0))) (bruijn ##x.2114 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k103, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 4, 2),
      env->up->vars[0]
    )

    )
,
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k102, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda70(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda70" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda70, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.2115 0 0) #f)
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda70, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k101(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k101" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k101, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 30 11) (close _V0expand__syntax_k102) (close _V0expand__syntax_lambda70) (bruijn xs 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k102, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda70, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k101, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k100(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k100" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k100, env) {
 if (env->num_vars == 1) {
  // ((bruijn append 29 3) (close _V0expand__syntax_k101) (bruijn ##x.2119 0 0) (bruijn body 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k101, env)}),
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k100, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda71(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda71" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda71, env) {
 if (env->num_vars == 3) {
  // ((bruijn ##k.2120 0 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn x 0 1) (##inline ##sys.cons (bruijn val 0 2) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCons(
VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[1],
      VInlineCons(
env->vars[2],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda71, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda69(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda69" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda69, env) {
  // ((bruijn map 28 11) (close _V0expand__syntax_k100) (close _V0expand__syntax_lambda71) (bruijn xs 1 2) (bruijn vals 1 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k100, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda71, env)}),
      env->up->vars[2],
      env->up->vars[3]
    );
 }
}
static void _V0expand__syntax_lambda68(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda68" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda68, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0expand__syntax_lambda69) (bruijn ##k.2104 0 0) (##inline ##sys.cdr (bruijn ##expr.129 2 1))) ((bruijn ##k.2104 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda69, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda68, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda51(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda51" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda51, env) {
  // ((bruijn call-with-values 26 12) (bruijn ##k.2040 0 0) (close _V0expand__syntax_lambda52) (close _V0expand__syntax_lambda68))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda52, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda68, env)})
    );
 }
}
static void _V0expand__syntax_lambda50(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda50" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda50, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.129 0 1)) ((close _V0expand__syntax_lambda51) (bruijn ##k.2035 0 0) (##inline ##sys.car (bruijn ##expr.129 0 1))) ((bruijn ##k.2035 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda51, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k89(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k89" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k89, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2032 0 0) ((close _V0expand__syntax_lambda50) (bruijn ##k.2027 1 0) (##inline ##sys.cdr (bruijn ##expr.128 1 1))) ((bruijn ##k.2027 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda50, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k89, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda49(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda49" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda49, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.128 0 1)) ((bruijn equal? 23 7) (close _V0expand__syntax_k89) (quote letrec) (##inline ##sys.car (bruijn ##expr.128 0 1))) ((bruijn ##k.2027 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k89, env)}),
      VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k106(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k106" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k106, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 16 1) (bruijn ##k.2017 1 0) (bruijn ##x.2019 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k106, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda73(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda73" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda73, env) {
  // ((bruijn error 26 15) (close _V0expand__syntax_k106) (##string ##string.4128) (##inline ##sys.cons (quote letrec) (bruijn noise 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k106, env)}),
      VEncodePointer(&_V10string_D4128.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_k105(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k105" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k105, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2014 0 0) ((close _V0expand__syntax_lambda73) (bruijn ##k.2009 1 0) (##inline ##sys.cdr (bruijn ##expr.138 1 1))) ((bruijn ##k.2009 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda73, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k105, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda72(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda72" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda72, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.138 0 1)) ((bruijn equal? 24 7) (close _V0expand__syntax_k105) (quote letrec) (##inline ##sys.car (bruijn ##expr.138 0 1))) ((bruijn ##k.2009 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k105, env)}),
      VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k109(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k109" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k109, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 17 1) (bruijn ##k.1999 1 0) (bruijn ##x.2001 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k109, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda75(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda75" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda75, env) {
  // ((bruijn expand-syntax 26 9) (close _V0expand__syntax_k109) (##inline ##sys.cons (quote letrec) (bruijn rest 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k109, env)}),
      VInlineCons(
VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_k108(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k108" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k108, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1996 0 0) ((close _V0expand__syntax_lambda75) (bruijn ##k.1991 1 0) (##inline ##sys.cdr (bruijn ##expr.139 1 1))) ((bruijn ##k.1991 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda75, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k108, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda74(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda74" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda74, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.139 0 1)) ((bruijn equal? 25 7) (close _V0expand__syntax_k108) (quote letrec*) (##inline ##sys.car (bruijn ##expr.139 0 1))) ((bruijn ##k.1991 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k108, env)}),
      VEncodePointer(&_V0letrec_S.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k112(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k112" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k112, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1919 1 0) (bruijn ##expr.145 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k112, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda90(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda90" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda90, env) {
  // ((bruijn ##k.148 1 1) (bruijn ##k.1937 0 0) (##inline ##sys.cdr (bruijn ##expr.149 5 1)) (##inline ##sys.cons (bruijn rest 0 1) (bruijn ##rest.146 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k116(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k116" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k116, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.147 8 1) (bruijn ##k.1931 2 0) (bruijn ##expr.149 6 1) (bruijn ##x.1936 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k116, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k115(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k115" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k115, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 43 14) (close _V0loop_k116) (bruijn ##rest.146 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k116, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k115, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda89(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda89" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda89, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda90) (close _V0loop_k115) (##inline ##sys.car (bruijn ##expr.149 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda90, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k115, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda89, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda88(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda88" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda88, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 41 13) (bruijn ##k.1929 0 0) (close _V0loop_lambda89))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda89, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda88, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k114(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k114" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k114, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 40 12) (bruijn ##k.1924 2 0) (close _V0loop_lambda88) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 12)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda88, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k114, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k113(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k113" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k113, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.147 3 1) (close _V0loop_k114) (bruijn ##expr.149 1 1) (bruijn ##x.1945 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k114, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k113, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda93(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda93" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda93, env) {
  // ((bruijn ##k.148 1 1) (bruijn ##k.1937 0 0) (##inline ##sys.cdr (bruijn ##expr.149 3 1)) (##inline ##sys.cons (bruijn rest 0 1) (bruijn ##rest.146 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k118(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k118" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k118, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.147 6 1) (bruijn ##k.1931 2 0) (bruijn ##expr.149 4 1) (bruijn ##x.1936 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k118, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k117(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k117" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k117, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 41 14) (close _V0loop_k118) (bruijn ##rest.146 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k118, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k117, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda92(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda92" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda92, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda93) (close _V0loop_k117) (##inline ##sys.car (bruijn ##expr.149 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda93, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k117, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda92, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda91(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda91" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda91, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 39 13) (bruijn ##k.1929 0 0) (close _V0loop_lambda92))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda92, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda91, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda87(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda87" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda87, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.149 0 1))) ((bruijn reverse 38 14) (close _V0loop_k113) (bruijn ##rest.146 0 2)) ((bruijn call-with-values 38 12) (bruijn ##k.1924 0 0) (close _V0loop_lambda91) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k113, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda91, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda87, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda86(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda86" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda86, env) {
  // (set! (close _V0expand__syntax_k112) (bruijn loop 0 1) (close _V0loop_lambda87))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k112, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda87, env)})
    );
 }
}
static void _V0expand__syntax_lambda85(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda85" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda85, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__syntax_lambda86) (bruijn ##k.1917 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda86, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda85, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda84(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda84" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda84, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 35 13) (bruijn ##k.1915 0 0) (close _V0expand__syntax_lambda85))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda85, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda84, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k119(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k119" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k119, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 26 1) (bruijn ##k.1954 1 0) (bruijn ##x.1956 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k119, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda95(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda95" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda95, env) {
  // ((bruijn expand-syntax 35 9) (close _V0expand__syntax_k119) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn x 5 1) (##inline ##sys.cons (bruijn val 3 1) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let*) (##inline ##sys.cons (bruijn rest 1 2) (bruijn body 0 1))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k119, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(env, 5, 1),
      VInlineCons(
env->up->up->up->vars[1],
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
env->up->vars[2],
      env->vars[1]
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
static void _V0expand__syntax_lambda94(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda94" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda94, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0expand__syntax_lambda95) (bruijn ##k.1949 0 0) (##inline ##sys.cdr (bruijn ##expr.141 7 1))) ((bruijn ##k.1949 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda95, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 7, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda94, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda83(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda83" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda83, env) {
  // ((bruijn call-with-values 34 12) (bruijn ##k.1913 0 0) (close _V0expand__syntax_lambda84) (close _V0expand__syntax_lambda94))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda84, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda94, env)})
    );
 }
}
static void _V0expand__syntax_lambda82(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda82" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda82, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.144 1 1))) ((close _V0expand__syntax_lambda83) (bruijn ##k.1908 0 0) (##inline ##sys.cdr (bruijn ##expr.142 4 1))) ((bruijn ##k.1908 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda83, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 4, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda81(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda81" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda81, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.144 0 1)) ((close _V0expand__syntax_lambda82) (bruijn ##k.1903 0 0) (##inline ##sys.car (bruijn ##expr.144 0 1))) ((bruijn ##k.1903 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda82, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda80(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda80" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda80, env) {
  // ((close _V0expand__syntax_lambda81) (bruijn ##k.1901 0 0) (##inline ##sys.cdr (bruijn ##expr.143 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda81, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda79(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda79" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda79, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.143 0 1)) ((close _V0expand__syntax_lambda80) (bruijn ##k.1896 0 0) (##inline ##sys.car (bruijn ##expr.143 0 1))) ((bruijn ##k.1896 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda80, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda78(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda78" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda78, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.142 0 1)) ((close _V0expand__syntax_lambda79) (bruijn ##k.1891 0 0) (##inline ##sys.car (bruijn ##expr.142 0 1))) ((bruijn ##k.1891 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda79, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda77(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda77" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda77, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.141 0 1)) ((close _V0expand__syntax_lambda78) (bruijn ##k.1886 0 0) (##inline ##sys.car (bruijn ##expr.141 0 1))) ((bruijn ##k.1886 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda78, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k111(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k111" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k111, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1883 0 0) ((close _V0expand__syntax_lambda77) (bruijn ##k.1878 1 0) (##inline ##sys.cdr (bruijn ##expr.140 1 1))) ((bruijn ##k.1878 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda77, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k111, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda76(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda76" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda76, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.140 0 1)) ((bruijn equal? 26 7) (close _V0expand__syntax_k111) (quote let*) (##inline ##sys.car (bruijn ##expr.140 0 1))) ((bruijn ##k.1878 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k111, env)}),
      VEncodePointer(&_V0let_S.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k122(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k122" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k122, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 20 1) (bruijn ##k.1862 1 0) (bruijn ##x.1864 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k122, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda98(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda98" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda98, env) {
  // ((bruijn expand-syntax 29 9) (close _V0expand__syntax_k122) (##inline ##sys.cons (quote begin) (bruijn body 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k122, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda97(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda97" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda97, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.151 0 1)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.151 0 1))) ((close _V0expand__syntax_lambda98) (bruijn ##k.1854 0 0) (##inline ##sys.cdr (bruijn ##expr.151 0 1))) ((bruijn ##k.1854 0 0) #f)) ((bruijn ##k.1854 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCar(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda98, env)},
      env->vars[0],
      VInlineCdr(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k121(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k121" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k121, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1851 0 0) ((close _V0expand__syntax_lambda97) (bruijn ##k.1846 1 0) (##inline ##sys.cdr (bruijn ##expr.150 1 1))) ((bruijn ##k.1846 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda97, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k121, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda96(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda96" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda96, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.150 0 1)) ((bruijn equal? 27 7) (close _V0expand__syntax_k121) (quote let*) (##inline ##sys.car (bruijn ##expr.150 0 1))) ((bruijn ##k.1846 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k121, env)}),
      VEncodePointer(&_V0let_S.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k125(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k125" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k125, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 20 1) (bruijn ##k.1836 1 0) (bruijn ##x.1838 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k125, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda100(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda100" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda100, env) {
  // ((bruijn error 30 15) (close _V0expand__syntax_k125) (##string ##string.4129) (##inline ##sys.cons (quote let*) (bruijn noise 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k125, env)}),
      VEncodePointer(&_V10string_D4129.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0let_S.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_k124(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k124" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k124, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1833 0 0) ((close _V0expand__syntax_lambda100) (bruijn ##k.1828 1 0) (##inline ##sys.cdr (bruijn ##expr.152 1 1))) ((bruijn ##k.1828 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda100, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k124, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda99(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda99" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda99, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.152 0 1)) ((bruijn equal? 28 7) (close _V0expand__syntax_k124) (quote let*) (##inline ##sys.car (bruijn ##expr.152 0 1))) ((bruijn ##k.1828 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k124, env)}),
      VEncodePointer(&_V0let_S.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k128(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k128" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k128, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 22 1) (bruijn ##k.1810 1 0) (bruijn ##x.1815 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k128, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda103(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda103" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda103, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.154 1 1))) ((bruijn expand-syntax 31 9) (close _V0expand__syntax_k128) (bruijn x 0 1)) ((bruijn ##k.1810 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k128, env)}),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda102(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda102" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda102, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.154 0 1)) ((close _V0expand__syntax_lambda103) (bruijn ##k.1805 0 0) (##inline ##sys.car (bruijn ##expr.154 0 1))) ((bruijn ##k.1805 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda103, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k127(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k127" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k127, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1802 0 0) ((close _V0expand__syntax_lambda102) (bruijn ##k.1797 1 0) (##inline ##sys.cdr (bruijn ##expr.153 1 1))) ((bruijn ##k.1797 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda102, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k127, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda101(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda101" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda101, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.153 0 1)) ((bruijn equal? 29 7) (close _V0expand__syntax_k127) (quote begin) (##inline ##sys.car (bruijn ##expr.153 0 1))) ((bruijn ##k.1797 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k127, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k132(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k132" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k132, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 26 1) (bruijn ##k.1768 2 0) (##inline ##sys.cons (quote ##sys.begin) (##inline ##sys.cons (bruijn ##x.1775 1 0) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn ##x.1780 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      env->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10sys_Dbegin.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[0],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
env->vars[0],
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
 } else {
  VError("Not enough arguments to _V0expand__syntax_k132, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k131(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k131" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k131, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 35 9) (close _V0expand__syntax_k132) (bruijn y 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k132, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k131, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda108(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda108" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda108, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.157 1 1))) ((bruijn expand-syntax 34 9) (close _V0expand__syntax_k131) (bruijn x 2 1)) ((bruijn ##k.1768 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k131, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda107(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda107" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda107, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.157 0 1)) ((close _V0expand__syntax_lambda108) (bruijn ##k.1763 0 0) (##inline ##sys.car (bruijn ##expr.157 0 1))) ((bruijn ##k.1763 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda108, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda106(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda106" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda106, env) {
  // ((close _V0expand__syntax_lambda107) (bruijn ##k.1761 0 0) (##inline ##sys.cdr (bruijn ##expr.156 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda107, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda105(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda105" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda105, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.156 0 1)) ((close _V0expand__syntax_lambda106) (bruijn ##k.1756 0 0) (##inline ##sys.car (bruijn ##expr.156 0 1))) ((bruijn ##k.1756 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda106, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k130(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k130" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k130, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1753 0 0) ((close _V0expand__syntax_lambda105) (bruijn ##k.1748 1 0) (##inline ##sys.cdr (bruijn ##expr.155 1 1))) ((bruijn ##k.1748 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda105, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k130, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda104(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda104" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda104, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.155 0 1)) ((bruijn equal? 30 7) (close _V0expand__syntax_k130) (quote begin) (##inline ##sys.car (bruijn ##expr.155 0 1))) ((bruijn ##k.1748 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k130, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k135(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k135" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k135, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 25 1) (bruijn ##k.1731 1 0) (bruijn ##x.1733 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k135, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda112(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda112" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda112, env) {
  // ((bruijn expand-syntax 34 9) (close _V0expand__syntax_k135) (##inline ##sys.cons (quote begin) (##inline ##sys.cons (bruijn x 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (bruijn y 0 1)) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k135, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      env->vars[1]
    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_lambda111(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda111" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda111, env) {
  // ((close _V0expand__syntax_lambda112) (bruijn ##k.1729 0 0) (##inline ##sys.cdr (bruijn ##expr.159 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda112, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda110(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda110" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda110, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.159 0 1)) ((close _V0expand__syntax_lambda111) (bruijn ##k.1724 0 0) (##inline ##sys.car (bruijn ##expr.159 0 1))) ((bruijn ##k.1724 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda111, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k134(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k134" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k134, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1721 0 0) ((close _V0expand__syntax_lambda110) (bruijn ##k.1716 1 0) (##inline ##sys.cdr (bruijn ##expr.158 1 1))) ((bruijn ##k.1716 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda110, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k134, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda109(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda109" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda109, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.158 0 1)) ((bruijn equal? 31 7) (close _V0expand__syntax_k134) (quote begin) (##inline ##sys.car (bruijn ##expr.158 0 1))) ((bruijn ##k.1716 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k134, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k138(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k138" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k138, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 24 1) (bruijn ##k.1706 1 0) (bruijn ##x.1708 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k138, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda114(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda114" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda114, env) {
  // ((bruijn error 34 15) (close _V0expand__syntax_k138) (##string ##string.4130) (##inline ##sys.cons (quote begin) (bruijn noise 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k138, env)}),
      VEncodePointer(&_V10string_D4130.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_k137(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k137" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k137, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1703 0 0) ((close _V0expand__syntax_lambda114) (bruijn ##k.1698 1 0) (##inline ##sys.cdr (bruijn ##expr.160 1 1))) ((bruijn ##k.1698 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda114, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k137, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda113(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda113" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda113, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.160 0 1)) ((bruijn equal? 32 7) (close _V0expand__syntax_k137) (quote begin) (##inline ##sys.car (bruijn ##expr.160 0 1))) ((bruijn ##k.1698 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k137, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k141(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k141" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k141, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 28 1) (bruijn ##k.1672 1 0) (bruijn ##x.1677 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k141, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda119(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda119" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda119, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.163 1 1))) ((bruijn expand-syntax 37 9) (close _V0expand__syntax_k141) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 2 1) (##inline ##sys.cons (bruijn x 0 1) (##inline ##sys.cons (quote #f) (quote ())))))) ((bruijn ##k.1672 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k141, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->vars[1],
      VInlineCons(
env->vars[1],
      VInlineCons(
VEncodeBool(false),
      VNULL
    )

    )

    )

    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda118(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda118" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda118, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.163 0 1)) ((close _V0expand__syntax_lambda119) (bruijn ##k.1667 0 0) (##inline ##sys.car (bruijn ##expr.163 0 1))) ((bruijn ##k.1667 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda119, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda117(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda117" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda117, env) {
  // ((close _V0expand__syntax_lambda118) (bruijn ##k.1665 0 0) (##inline ##sys.cdr (bruijn ##expr.162 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda118, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda116(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda116" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda116, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.162 0 1)) ((close _V0expand__syntax_lambda117) (bruijn ##k.1660 0 0) (##inline ##sys.car (bruijn ##expr.162 0 1))) ((bruijn ##k.1660 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda117, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k140(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k140" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k140, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1657 0 0) ((close _V0expand__syntax_lambda116) (bruijn ##k.1652 1 0) (##inline ##sys.cdr (bruijn ##expr.161 1 1))) ((bruijn ##k.1652 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda116, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k140, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda115(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda115" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda115, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.161 0 1)) ((bruijn equal? 33 7) (close _V0expand__syntax_k140) (quote if) (##inline ##sys.car (bruijn ##expr.161 0 1))) ((bruijn ##k.1652 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k140, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k144(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k144" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k144, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 31 1) (bruijn ##k.1616 1 0) (bruijn ##x.1621 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k144, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda126(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda126" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda126, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.167 1 1))) ((bruijn expand-syntax 40 9) (close _V0expand__syntax_k144) (##inline ##sys.cons (quote ##sys.if) (##inline ##sys.cons (bruijn p 4 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn x 2 1) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn y 0 1) (quote ())))) (quote ())))))) ((bruijn ##k.1616 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k144, env)}),
      VInlineCons(
VEncodePointer(&_V10sys_Dif.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 4, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
env->up->up->vars[1],
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
env->vars[1],
      VNULL
    )

    )

    )
,
      VNULL
    )

    )

    )

    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda125(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda125" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda125, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.167 0 1)) ((close _V0expand__syntax_lambda126) (bruijn ##k.1611 0 0) (##inline ##sys.car (bruijn ##expr.167 0 1))) ((bruijn ##k.1611 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda126, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda124(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda124" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda124, env) {
  // ((close _V0expand__syntax_lambda125) (bruijn ##k.1609 0 0) (##inline ##sys.cdr (bruijn ##expr.166 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda125, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda123(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda123" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda123, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.166 0 1)) ((close _V0expand__syntax_lambda124) (bruijn ##k.1604 0 0) (##inline ##sys.car (bruijn ##expr.166 0 1))) ((bruijn ##k.1604 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda124, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda122(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda122" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda122, env) {
  // ((close _V0expand__syntax_lambda123) (bruijn ##k.1602 0 0) (##inline ##sys.cdr (bruijn ##expr.165 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda123, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda121(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda121" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda121, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.165 0 1)) ((close _V0expand__syntax_lambda122) (bruijn ##k.1597 0 0) (##inline ##sys.car (bruijn ##expr.165 0 1))) ((bruijn ##k.1597 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda122, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k143(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k143" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k143, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1594 0 0) ((close _V0expand__syntax_lambda121) (bruijn ##k.1589 1 0) (##inline ##sys.cdr (bruijn ##expr.164 1 1))) ((bruijn ##k.1589 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda121, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k143, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda120(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda120" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda120, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.164 0 1)) ((bruijn equal? 34 7) (close _V0expand__syntax_k143) (quote if) (##inline ##sys.car (bruijn ##expr.164 0 1))) ((bruijn ##k.1589 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k143, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k147(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k147" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k147, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 27 1) (bruijn ##k.1579 1 0) (bruijn ##x.1581 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k147, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda128(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda128" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda128, env) {
  // ((bruijn error 37 15) (close _V0expand__syntax_k147) (##string ##string.4131) (##inline ##sys.cons (quote if) (bruijn noise 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k147, env)}),
      VEncodePointer(&_V10string_D4131.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_k146(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k146" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k146, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1576 0 0) ((close _V0expand__syntax_lambda128) (bruijn ##k.1571 1 0) (##inline ##sys.cdr (bruijn ##expr.168 1 1))) ((bruijn ##k.1571 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda128, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k146, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda127(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda127" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda127, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.168 0 1)) ((bruijn equal? 35 7) (close _V0expand__syntax_k146) (quote if) (##inline ##sys.car (bruijn ##expr.168 0 1))) ((bruijn ##k.1571 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k146, env)}),
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k149(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k149" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k149, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1557 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.169 1 1))) ((bruijn ##k.102 26 1) (bruijn ##k.1552 1 0) #t) ((bruijn ##k.1552 1 0) #f)) ((bruijn ##k.1552 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      env->up->vars[0],
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k149, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda129(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda129" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda129, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.169 0 1)) ((bruijn equal? 36 7) (close _V0expand__syntax_k149) (quote and) (##inline ##sys.car (bruijn ##expr.169 0 1))) ((bruijn ##k.1552 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k149, env)}),
      VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k152(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k152" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k152, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 30 1) (bruijn ##k.1534 1 0) (bruijn ##x.1539 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k152, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda132(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda132" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda132, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.171 1 1))) ((bruijn expand-syntax 39 9) (close _V0expand__syntax_k152) (bruijn x 0 1)) ((bruijn ##k.1534 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k152, env)}),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda131(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda131" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda131, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.171 0 1)) ((close _V0expand__syntax_lambda132) (bruijn ##k.1529 0 0) (##inline ##sys.car (bruijn ##expr.171 0 1))) ((bruijn ##k.1529 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda132, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k151(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k151" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k151, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1526 0 0) ((close _V0expand__syntax_lambda131) (bruijn ##k.1521 1 0) (##inline ##sys.cdr (bruijn ##expr.170 1 1))) ((bruijn ##k.1521 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda131, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k151, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda130(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda130" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda130, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.170 0 1)) ((bruijn equal? 37 7) (close _V0expand__syntax_k151) (quote and) (##inline ##sys.car (bruijn ##expr.170 0 1))) ((bruijn ##k.1521 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k151, env)}),
      VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k155(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k155" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k155, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 32 1) (bruijn ##k.1501 1 0) (bruijn ##x.1503 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k155, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda136(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda136" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda136, env) {
  // ((bruijn expand-syntax 41 9) (close _V0expand__syntax_k155) (##inline ##sys.cons (quote ##sys.and) (##inline ##sys.cons (bruijn x 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (##inline ##sys.cons (quote and) (bruijn ys 0 1)) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k155, env)}),
      VInlineCons(
VEncodePointer(&_V10sys_Dand.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
      env->vars[1]
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
static void _V0expand__syntax_lambda135(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda135" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda135, env) {
  // ((close _V0expand__syntax_lambda136) (bruijn ##k.1499 0 0) (##inline ##sys.cdr (bruijn ##expr.173 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda136, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda134(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda134" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda134, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.173 0 1)) ((close _V0expand__syntax_lambda135) (bruijn ##k.1494 0 0) (##inline ##sys.car (bruijn ##expr.173 0 1))) ((bruijn ##k.1494 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda135, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k154(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k154" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k154, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1491 0 0) ((close _V0expand__syntax_lambda134) (bruijn ##k.1486 1 0) (##inline ##sys.cdr (bruijn ##expr.172 1 1))) ((bruijn ##k.1486 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda134, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k154, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda133(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda133" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda133, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.172 0 1)) ((bruijn equal? 38 7) (close _V0expand__syntax_k154) (quote and) (##inline ##sys.car (bruijn ##expr.172 0 1))) ((bruijn ##k.1486 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k154, env)}),
      VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k157(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k157" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k157, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1472 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.174 1 1))) ((bruijn ##k.102 29 1) (bruijn ##k.1467 1 0) #f) ((bruijn ##k.1467 1 0) #f)) ((bruijn ##k.1467 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 1)),
      env->up->vars[0],
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k157, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda137(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda137" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda137, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.174 0 1)) ((bruijn equal? 39 7) (close _V0expand__syntax_k157) (quote or) (##inline ##sys.car (bruijn ##expr.174 0 1))) ((bruijn ##k.1467 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k157, env)}),
      VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k160(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k160" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k160, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 33 1) (bruijn ##k.1449 1 0) (bruijn ##x.1454 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k160, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda140(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda140" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda140, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.176 1 1))) ((bruijn expand-syntax 42 9) (close _V0expand__syntax_k160) (bruijn x 0 1)) ((bruijn ##k.1449 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k160, env)}),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda139(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda139" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda139, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.176 0 1)) ((close _V0expand__syntax_lambda140) (bruijn ##k.1444 0 0) (##inline ##sys.car (bruijn ##expr.176 0 1))) ((bruijn ##k.1444 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda140, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k159(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k159" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k159, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1441 0 0) ((close _V0expand__syntax_lambda139) (bruijn ##k.1436 1 0) (##inline ##sys.cdr (bruijn ##expr.175 1 1))) ((bruijn ##k.1436 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda139, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k159, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda138(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda138" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda138, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.175 0 1)) ((bruijn equal? 40 7) (close _V0expand__syntax_k159) (quote or) (##inline ##sys.car (bruijn ##expr.175 0 1))) ((bruijn ##k.1436 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k159, env)}),
      VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k163(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k163" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k163, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 35 1) (bruijn ##k.1416 1 0) (bruijn ##x.1418 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k163, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda144(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda144" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda144, env) {
  // ((bruijn expand-syntax 44 9) (close _V0expand__syntax_k163) (##inline ##sys.cons (quote ##sys.or) (##inline ##sys.cons (bruijn x 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (##inline ##sys.cons (quote or) (bruijn ys 0 1)) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k163, env)}),
      VInlineCons(
VEncodePointer(&_V10sys_Dor.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      env->vars[1]
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
static void _V0expand__syntax_lambda143(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda143" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda143, env) {
  // ((close _V0expand__syntax_lambda144) (bruijn ##k.1414 0 0) (##inline ##sys.cdr (bruijn ##expr.178 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda144, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda142(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda142" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda142, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.178 0 1)) ((close _V0expand__syntax_lambda143) (bruijn ##k.1409 0 0) (##inline ##sys.car (bruijn ##expr.178 0 1))) ((bruijn ##k.1409 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda143, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k162(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k162" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k162, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1406 0 0) ((close _V0expand__syntax_lambda142) (bruijn ##k.1401 1 0) (##inline ##sys.cdr (bruijn ##expr.177 1 1))) ((bruijn ##k.1401 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda142, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k162, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda141(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda141" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda141, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.177 0 1)) ((bruijn equal? 41 7) (close _V0expand__syntax_k162) (quote or) (##inline ##sys.car (bruijn ##expr.177 0 1))) ((bruijn ##k.1401 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k162, env)}),
      VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k167(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k167" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k167, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 37 1) (bruijn ##k.1376 1 0) (bruijn ##x.1381 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k167, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda148(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda148" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda148, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.180 3 1))) ((bruijn expand-syntax 46 9) (close _V0expand__syntax_k167) (##inline ##sys.cons (quote begin) (bruijn body 0 1))) ((bruijn ##k.1376 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->up->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 46, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k167, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k166(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k166" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k166, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1373 0 0) ((close _V0expand__syntax_lambda148) (bruijn ##k.1368 1 0) (##inline ##sys.cdr (bruijn ##expr.181 1 1))) ((bruijn ##k.1368 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda148, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k166, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda147(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda147" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda147, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.181 0 1)) ((bruijn equal? 45 7) (close _V0expand__syntax_k166) (quote else) (##inline ##sys.car (bruijn ##expr.181 0 1))) ((bruijn ##k.1368 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k166, env)}),
      VEncodePointer(&_V0else.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda146(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda146" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda146, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.180 0 1)) ((close _V0expand__syntax_lambda147) (bruijn ##k.1363 0 0) (##inline ##sys.car (bruijn ##expr.180 0 1))) ((bruijn ##k.1363 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda147, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k165(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k165" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k165, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1360 0 0) ((close _V0expand__syntax_lambda146) (bruijn ##k.1355 1 0) (##inline ##sys.cdr (bruijn ##expr.179 1 1))) ((bruijn ##k.1355 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda146, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k165, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda145(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda145" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda145, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.179 0 1)) ((bruijn equal? 42 7) (close _V0expand__syntax_k165) (quote cond) (##inline ##sys.car (bruijn ##expr.179 0 1))) ((bruijn ##k.1355 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k165, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda157(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda157" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda157, env) {
  // ((bruijn expand-syntax 53 9) (bruijn ##k.1313 0 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn foobar 0 1) (##inline ##sys.cons (bruijn p 7 1) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn foobar 0 1) (##inline ##sys.cons (##inline ##sys.cons (bruijn f 3 1) (##inline ##sys.cons (bruijn foobar 0 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote cond) (bruijn rest 2 1)) (quote ()))))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 53, 9)),
      env->vars[0],
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
env->vars[1],
      VInlineCons(
VGetArg(env, 7, 1),
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
env->vars[1],
      VInlineCons(
VInlineCons(
env->up->up->up->vars[1],
      VInlineCons(
env->vars[1],
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
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
static void _V0expand__syntax_k172(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k172" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k172, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 43 1) (bruijn ##k.1310 2 0) (bruijn ##x.1312 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k172, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k171(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k171" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k171, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda157) (close _V0expand__syntax_k172) (bruijn ##x.1328 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda157, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k172, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k171, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda156(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda156" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda156, env) {
  // ((bruijn gensym 52 4) (close _V0expand__syntax_k171) (##string ##string.4132))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 52, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k171, env)}),
      VEncodePointer(&_V10string_D4132.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__syntax_lambda155(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda155" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda155, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.186 1 1))) ((close _V0expand__syntax_lambda156) (bruijn ##k.1305 0 0) (##inline ##sys.cdr (bruijn ##expr.183 6 1))) ((bruijn ##k.1305 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda156, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda154(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda154" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda154, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.186 0 1)) ((close _V0expand__syntax_lambda155) (bruijn ##k.1300 0 0) (##inline ##sys.car (bruijn ##expr.186 0 1))) ((bruijn ##k.1300 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda155, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k170(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k170" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k170, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1297 0 0) ((close _V0expand__syntax_lambda154) (bruijn ##k.1292 1 0) (##inline ##sys.cdr (bruijn ##expr.185 1 1))) ((bruijn ##k.1292 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda154, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k170, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda153(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda153" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda153, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.185 0 1)) ((bruijn equal? 48 7) (close _V0expand__syntax_k170) (quote =>) (##inline ##sys.car (bruijn ##expr.185 0 1))) ((bruijn ##k.1292 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 48, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k170, env)}),
      VEncodePointer(&_V0_E_G.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda152(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda152" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda152, env) {
  // ((close _V0expand__syntax_lambda153) (bruijn ##k.1290 0 0) (##inline ##sys.cdr (bruijn ##expr.184 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda153, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda151(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda151" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda151, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 1)) ((close _V0expand__syntax_lambda152) (bruijn ##k.1285 0 0) (##inline ##sys.car (bruijn ##expr.184 0 1))) ((bruijn ##k.1285 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda152, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda150(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda150" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda150, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.183 0 1)) ((close _V0expand__syntax_lambda151) (bruijn ##k.1280 0 0) (##inline ##sys.car (bruijn ##expr.183 0 1))) ((bruijn ##k.1280 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda151, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k169(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k169" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k169, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1277 0 0) ((close _V0expand__syntax_lambda150) (bruijn ##k.1272 1 0) (##inline ##sys.cdr (bruijn ##expr.182 1 1))) ((bruijn ##k.1272 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda150, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k169, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda149(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda149" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda149, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.182 0 1)) ((bruijn equal? 43 7) (close _V0expand__syntax_k169) (quote cond) (##inline ##sys.car (bruijn ##expr.182 0 1))) ((bruijn ##k.1272 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k169, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k175(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k175" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k175, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 40 1) (bruijn ##k.1249 1 0) (bruijn ##x.1251 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k175, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda163(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda163" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda163, env) {
  // ((bruijn expand-syntax 49 9) (close _V0expand__syntax_k175) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 2 1) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (bruijn body 1 1)) (##inline ##sys.cons (##inline ##sys.cons (quote cond) (bruijn rest 0 1)) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 49, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k175, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      env->up->vars[1]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      env->vars[1]
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
static void _V0expand__syntax_lambda162(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda162" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda162, env) {
  // ((close _V0expand__syntax_lambda163) (bruijn ##k.1247 0 0) (##inline ##sys.cdr (bruijn ##expr.188 3 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda163, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda161(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda161" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda161, env) {
  // ((close _V0expand__syntax_lambda162) (bruijn ##k.1245 0 0) (##inline ##sys.cdr (bruijn ##expr.189 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda162, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda160(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda160" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda160, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.189 0 1)) ((close _V0expand__syntax_lambda161) (bruijn ##k.1240 0 0) (##inline ##sys.car (bruijn ##expr.189 0 1))) ((bruijn ##k.1240 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda161, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda159(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda159" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda159, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.188 0 1)) ((close _V0expand__syntax_lambda160) (bruijn ##k.1235 0 0) (##inline ##sys.car (bruijn ##expr.188 0 1))) ((bruijn ##k.1235 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda160, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k174(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k174" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k174, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1232 0 0) ((close _V0expand__syntax_lambda159) (bruijn ##k.1227 1 0) (##inline ##sys.cdr (bruijn ##expr.187 1 1))) ((bruijn ##k.1227 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda159, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k174, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda158(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda158" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda158, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.187 0 1)) ((bruijn equal? 44 7) (close _V0expand__syntax_k174) (quote cond) (##inline ##sys.car (bruijn ##expr.187 0 1))) ((bruijn ##k.1227 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k174, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k177(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k177" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k177, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1211 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.190 1 1))) ((bruijn ##k.102 35 1) (bruijn ##k.1206 1 0) (##inline ##sys.cons (quote error) (##inline ##sys.cons (quote (##string ##string.4133)) (quote ())))) ((bruijn ##k.1206 1 0) #f)) ((bruijn ##k.1206 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 1)),
      env->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4133.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k177, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda164(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda164" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda164, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.190 0 1)) ((bruijn equal? 45 7) (close _V0expand__syntax_k177) (quote cond) (##inline ##sys.car (bruijn ##expr.190 0 1))) ((bruijn ##k.1206 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k177, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k180(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k180" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k180, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 38 1) (bruijn ##k.1196 1 0) (bruijn ##x.1198 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k180, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda166(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda166" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda166, env) {
  // ((bruijn error 48 15) (close _V0expand__syntax_k180) (##string ##string.4134) (##inline ##sys.cons (quote cond) (bruijn noise 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 48, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k180, env)}),
      VEncodePointer(&_V10string_D4134.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_k179(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k179" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k179, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1193 0 0) ((close _V0expand__syntax_lambda166) (bruijn ##k.1188 1 0) (##inline ##sys.cdr (bruijn ##expr.191 1 1))) ((bruijn ##k.1188 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda166, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k179, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda165(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda165" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda165, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.191 0 1)) ((bruijn equal? 46 7) (close _V0expand__syntax_k179) (quote cond) (##inline ##sys.car (bruijn ##expr.191 0 1))) ((bruijn ##k.1188 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 46, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k179, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda171(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda171" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda171, env) {
  // ((bruijn expand-syntax 52 9) (bruijn ##k.1167 0 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn foobar 0 1) (##inline ##sys.cons (bruijn x 3 1) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote case-iter) (##inline ##sys.cons (bruijn foobar 0 1) (bruijn rest 2 1))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 52, 9)),
      env->vars[0],
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
env->vars[1],
      VInlineCons(
env->up->up->up->vars[1],
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
env->vars[1],
      env->up->up->vars[1]
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
static void _V0expand__syntax_k184(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k184" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k184, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 42 1) (bruijn ##k.1164 2 0) (bruijn ##x.1166 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k184, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k183(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k183" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k183, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda171) (close _V0expand__syntax_k184) (bruijn ##x.1177 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda171, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k184, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k183, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda170(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda170" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda170, env) {
  // ((bruijn gensym 51 4) (close _V0expand__syntax_k183) (##string ##string.4132))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 51, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k183, env)}),
      VEncodePointer(&_V10string_D4132.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__syntax_lambda169(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda169" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda169, env) {
  // ((close _V0expand__syntax_lambda170) (bruijn ##k.1162 0 0) (##inline ##sys.cdr (bruijn ##expr.193 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda170, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda168(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda168" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda168, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.193 0 1)) ((close _V0expand__syntax_lambda169) (bruijn ##k.1157 0 0) (##inline ##sys.car (bruijn ##expr.193 0 1))) ((bruijn ##k.1157 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda169, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k182(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k182" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k182, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1154 0 0) ((close _V0expand__syntax_lambda168) (bruijn ##k.1149 1 0) (##inline ##sys.cdr (bruijn ##expr.192 1 1))) ((bruijn ##k.1149 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda168, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k182, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda167(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda167" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda167, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.192 0 1)) ((bruijn equal? 47 7) (close _V0expand__syntax_k182) (quote case) (##inline ##sys.car (bruijn ##expr.192 0 1))) ((bruijn ##k.1149 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 47, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k182, env)}),
      VEncodePointer(&_V0case.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k188(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k188" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k188, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 45 1) (bruijn ##k.1120 1 0) (bruijn ##x.1125 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k188, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda177(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda177" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda177, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.196 3 1))) ((bruijn expand-syntax 54 9) (close _V0expand__syntax_k188) (##inline ##sys.cons (quote begin) (bruijn body 0 1))) ((bruijn ##k.1120 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->up->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 54, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k188, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k187(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k187" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k187, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1117 0 0) ((close _V0expand__syntax_lambda177) (bruijn ##k.1112 1 0) (##inline ##sys.cdr (bruijn ##expr.197 1 1))) ((bruijn ##k.1112 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda177, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k187, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda176(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda176" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda176, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.197 0 1)) ((bruijn equal? 53 7) (close _V0expand__syntax_k187) (quote else) (##inline ##sys.car (bruijn ##expr.197 0 1))) ((bruijn ##k.1112 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 53, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k187, env)}),
      VEncodePointer(&_V0else.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda175(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda175" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda175, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.196 0 1)) ((close _V0expand__syntax_lambda176) (bruijn ##k.1107 0 0) (##inline ##sys.car (bruijn ##expr.196 0 1))) ((bruijn ##k.1107 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda176, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda174(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda174" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda174, env) {
  // ((close _V0expand__syntax_lambda175) (bruijn ##k.1105 0 0) (##inline ##sys.cdr (bruijn ##expr.195 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda175, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda173(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda173" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda173, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.195 0 1)) ((close _V0expand__syntax_lambda174) (bruijn ##k.1100 0 0) (##inline ##sys.car (bruijn ##expr.195 0 1))) ((bruijn ##k.1100 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda174, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k186(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k186" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k186, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.1097 0 0) ((close _V0expand__syntax_lambda173) (bruijn ##k.1092 1 0) (##inline ##sys.cdr (bruijn ##expr.194 1 1))) ((bruijn ##k.1092 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda173, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k186, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda172(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda172" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda172, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.194 0 1)) ((bruijn equal? 48 7) (close _V0expand__syntax_k186) (quote case-iter) (##inline ##sys.car (bruijn ##expr.194 0 1))) ((bruijn ##k.1092 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 48, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k186, env)}),
      VEncodePointer(&_V0case__iter.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k191(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k191" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k191, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.1017 1 0) (bruijn ##expr.202 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k191, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda190(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda190" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda190, env) {
  // ((bruijn ##k.205 1 1) (bruijn ##k.1035 0 0) (##inline ##sys.cdr (bruijn ##expr.206 5 1)) (##inline ##sys.cons (bruijn toks 0 1) (bruijn ##toks.203 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k195(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k195" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k195, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.204 8 1) (bruijn ##k.1029 2 0) (bruijn ##expr.206 6 1) (bruijn ##x.1034 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k195, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k194(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k194" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k194, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 64 14) (close _V0loop_k195) (bruijn ##toks.203 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 64, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k195, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k194, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda189(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda189" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda189, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda190) (close _V0loop_k194) (##inline ##sys.car (bruijn ##expr.206 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda190, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k194, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda189, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda188(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda188" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda188, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 62 13) (bruijn ##k.1027 0 0) (close _V0loop_lambda189))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 62, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda189, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda188, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k193(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k193" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k193, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 61 12) (bruijn ##k.1022 2 0) (close _V0loop_lambda188) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 61, 12)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda188, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k193, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k192(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k192" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k192, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.204 3 1) (close _V0loop_k193) (bruijn ##expr.206 1 1) (bruijn ##x.1043 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k193, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k192, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda193(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda193" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda193, env) {
  // ((bruijn ##k.205 1 1) (bruijn ##k.1035 0 0) (##inline ##sys.cdr (bruijn ##expr.206 3 1)) (##inline ##sys.cons (bruijn toks 0 1) (bruijn ##toks.203 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k197(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k197" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k197, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.204 6 1) (bruijn ##k.1029 2 0) (bruijn ##expr.206 4 1) (bruijn ##x.1034 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k197, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k196(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k196" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k196, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 62 14) (close _V0loop_k197) (bruijn ##toks.203 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 62, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k197, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k196, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda192(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda192" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda192, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda193) (close _V0loop_k196) (##inline ##sys.car (bruijn ##expr.206 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda193, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k196, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda192, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda191(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda191" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda191, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 60 13) (bruijn ##k.1027 0 0) (close _V0loop_lambda192))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 60, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda192, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda191, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda187(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda187" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda187, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.206 0 1))) ((bruijn reverse 59 14) (close _V0loop_k192) (bruijn ##toks.203 0 2)) ((bruijn call-with-values 59 12) (bruijn ##k.1022 0 0) (close _V0loop_lambda191) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 59, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k192, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 59, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda191, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda187, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda186(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda186" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda186, env) {
  // (set! (close _V0expand__syntax_k191) (bruijn loop 0 1) (close _V0loop_lambda187))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k191, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda187, env)})
    );
 }
}
static void _V0expand__syntax_lambda185(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda185" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda185, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__syntax_lambda186) (bruijn ##k.1015 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda186, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda185, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda184(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda184" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda184, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 56 13) (bruijn ##k.1013 0 0) (close _V0expand__syntax_lambda185))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 56, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda185, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda184, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k199(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k199" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k199, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 49 1) (bruijn ##k.1054 2 0) (bruijn ##x.1056 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 49, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k199, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k198(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k198" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k198, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 58 9) (close _V0expand__syntax_k199) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote or) (bruijn ##x.1065 0 0)) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (bruijn body 2 1)) (##inline ##sys.cons (##inline ##sys.cons (quote case-iter) (##inline ##sys.cons (bruijn x 7 1) (bruijn rest 1 1))) (quote ()))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 58, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k199, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      env->vars[0]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0case__iter.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 7, 1),
      env->up->vars[1]
    )

    )
,
      VNULL
    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k198, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda197(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda197" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda197, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.1066 0 0) (##inline ##sys.cons (quote eqv?) (##inline ##sys.cons (bruijn x 7 1) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn y 0 1) (quote ()))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCons(
VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 7, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[1],
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
  VError("Not enough arguments to _V0expand__syntax_lambda197, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda196(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda196" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda196, env) {
  // ((bruijn map 58 11) (close _V0expand__syntax_k198) (close _V0expand__syntax_lambda197) (bruijn toks 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 58, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k198, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda197, env)}),
      env->up->up->vars[2]
    );
 }
}
static void _V0expand__syntax_lambda195(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda195" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda195, env) {
  // ((close _V0expand__syntax_lambda196) (bruijn ##k.1052 0 0) (##inline ##sys.cdr (bruijn ##expr.200 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda196, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 4, 1)
    )

    );
 }
}
static void _V0expand__syntax_lambda194(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda194" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda194, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0expand__syntax_lambda195) (bruijn ##k.1047 0 0) (##inline ##sys.cdr (bruijn ##expr.201 2 1))) ((bruijn ##k.1047 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda195, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda194, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda183(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda183" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda183, env) {
  // ((bruijn call-with-values 55 12) (bruijn ##k.1011 0 0) (close _V0expand__syntax_lambda184) (close _V0expand__syntax_lambda194))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 55, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda184, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda194, env)})
    );
 }
}
static void _V0expand__syntax_lambda182(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda182" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda182, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.201 0 1)) ((close _V0expand__syntax_lambda183) (bruijn ##k.1006 0 0) (##inline ##sys.car (bruijn ##expr.201 0 1))) ((bruijn ##k.1006 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda183, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda181(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda181" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda181, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.200 0 1)) ((close _V0expand__syntax_lambda182) (bruijn ##k.1001 0 0) (##inline ##sys.car (bruijn ##expr.200 0 1))) ((bruijn ##k.1001 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda182, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda180(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda180" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda180, env) {
  // ((close _V0expand__syntax_lambda181) (bruijn ##k.999 0 0) (##inline ##sys.cdr (bruijn ##expr.199 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda181, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda179(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda179" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda179, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.199 0 1)) ((close _V0expand__syntax_lambda180) (bruijn ##k.994 0 0) (##inline ##sys.car (bruijn ##expr.199 0 1))) ((bruijn ##k.994 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda180, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k190(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k190" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k190, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.991 0 0) ((close _V0expand__syntax_lambda179) (bruijn ##k.986 1 0) (##inline ##sys.cdr (bruijn ##expr.198 1 1))) ((bruijn ##k.986 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda179, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k190, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda178(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda178" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda178, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.198 0 1)) ((bruijn equal? 49 7) (close _V0expand__syntax_k190) (quote case-iter) (##inline ##sys.car (bruijn ##expr.198 0 1))) ((bruijn ##k.986 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 49, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k190, env)}),
      VEncodePointer(&_V0case__iter.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda200(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda200" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda200, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.208 1 1))) ((bruijn ##k.102 42 1) (bruijn ##k.967 0 0) (##inline ##sys.cons (quote error) (##inline ##sys.cons (quote (##string ##string.4135)) (quote ())))) ((bruijn ##k.967 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 1)),
      env->vars[0],
      VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4135.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda199(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda199" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda199, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.208 0 1)) ((close _V0expand__syntax_lambda200) (bruijn ##k.962 0 0) (##inline ##sys.car (bruijn ##expr.208 0 1))) ((bruijn ##k.962 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda200, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k201(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k201" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k201, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.959 0 0) ((close _V0expand__syntax_lambda199) (bruijn ##k.954 1 0) (##inline ##sys.cdr (bruijn ##expr.207 1 1))) ((bruijn ##k.954 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda199, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k201, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda198(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda198" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda198, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.207 0 1)) ((bruijn equal? 50 7) (close _V0expand__syntax_k201) (quote case-iter) (##inline ##sys.car (bruijn ##expr.207 0 1))) ((bruijn ##k.954 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 50, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k201, env)}),
      VEncodePointer(&_V0case__iter.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k204(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k204" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k204, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 45 1) (bruijn ##k.937 1 0) (bruijn ##x.939 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k204, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda204(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda204" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda204, env) {
  // ((bruijn expand-syntax 54 9) (close _V0expand__syntax_k204) (##inline ##sys.cons (quote cut-iter) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn f 1 1) (bruijn args 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 54, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k204, env)}),
      VInlineCons(
VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
VNULL,
      VInlineCons(
env->up->vars[1],
      env->vars[1]
    )

    )

    )

    )

    );
 }
}
static void _V0expand__syntax_lambda203(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda203" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda203, env) {
  // ((close _V0expand__syntax_lambda204) (bruijn ##k.935 0 0) (##inline ##sys.cdr (bruijn ##expr.210 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda204, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda202(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda202" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda202, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.210 0 1)) ((close _V0expand__syntax_lambda203) (bruijn ##k.930 0 0) (##inline ##sys.car (bruijn ##expr.210 0 1))) ((bruijn ##k.930 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda203, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k203(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k203" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k203, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.927 0 0) ((close _V0expand__syntax_lambda202) (bruijn ##k.922 1 0) (##inline ##sys.cdr (bruijn ##expr.209 1 1))) ((bruijn ##k.922 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda202, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k203, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda201(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda201" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda201, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.209 0 1)) ((bruijn equal? 51 7) (close _V0expand__syntax_k203) (quote cut) (##inline ##sys.car (bruijn ##expr.209 0 1))) ((bruijn ##k.922 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 51, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k203, env)}),
      VEncodePointer(&_V0cut.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k209(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k209" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k209, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 51 1) (bruijn ##k.890 3 0) (bruijn ##x.895 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 51, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k209, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k208(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k208" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k208, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 60 9) (close _V0expand__syntax_k209) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ##x.898 1 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn f 2 1) (bruijn ##x.901 0 0)) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 60, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k209, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[0],
      VInlineCons(
VInlineCons(
env->up->up->vars[1],
      env->vars[0]
    )
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k208, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k207(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k207" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k207, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 60 14) (close _V0expand__syntax_k208) (bruijn args 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 60, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k208, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k207, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda211(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda211" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda211, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.214 1 1))) ((bruijn reverse 59 14) (close _V0expand__syntax_k207) (bruijn xs 4 1)) ((bruijn ##k.890 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 59, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k207, env)}),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda210(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda210" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda210, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.214 0 1)) ((close _V0expand__syntax_lambda211) (bruijn ##k.885 0 0) (##inline ##sys.car (bruijn ##expr.214 0 1))) ((bruijn ##k.885 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda211, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda209(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda209" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda209, env) {
  // ((close _V0expand__syntax_lambda210) (bruijn ##k.883 0 0) (##inline ##sys.cdr (bruijn ##expr.213 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda210, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda208(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda208" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda208, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.213 0 1)) ((close _V0expand__syntax_lambda209) (bruijn ##k.878 0 0) (##inline ##sys.car (bruijn ##expr.213 0 1))) ((bruijn ##k.878 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda209, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda207(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda207" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda207, env) {
  // ((close _V0expand__syntax_lambda208) (bruijn ##k.876 0 0) (##inline ##sys.cdr (bruijn ##expr.212 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda208, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda206(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda206" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda206, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.212 0 1)) ((close _V0expand__syntax_lambda207) (bruijn ##k.871 0 0) (##inline ##sys.car (bruijn ##expr.212 0 1))) ((bruijn ##k.871 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda207, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k206(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k206" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k206, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.868 0 0) ((close _V0expand__syntax_lambda206) (bruijn ##k.863 1 0) (##inline ##sys.cdr (bruijn ##expr.211 1 1))) ((bruijn ##k.863 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda206, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k206, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda205(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda205" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda205, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.211 0 1)) ((bruijn equal? 52 7) (close _V0expand__syntax_k206) (quote cut-iter) (##inline ##sys.car (bruijn ##expr.211 0 1))) ((bruijn ##k.863 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 52, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k206, env)}),
      VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda221(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda221" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda221, env) {
  // ((bruijn expand-syntax 64 9) (bruijn ##k.830 0 0) (##inline ##sys.cons (quote cut-iter) (##inline ##sys.cons (##inline ##sys.cons (bruijn x 0 1) (bruijn xs 9 1)) (##inline ##sys.cons (##inline ##sys.cons (bruijn x 0 1) (bruijn args 7 1)) (##inline ##sys.cons (bruijn f 5 1) (bruijn rest 2 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 64, 9)),
      env->vars[0],
      VInlineCons(
VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
env->vars[1],
      VGetArg(env, 9, 1)
    )
,
      VInlineCons(
VInlineCons(
env->vars[1],
      VGetArg(env, 7, 1)
    )
,
      VInlineCons(
VGetArg(env, 5, 1),
      env->up->up->vars[1]
    )

    )

    )

    )

    );
 }
}
static void _V0expand__syntax_k214(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k214" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k214, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 54 1) (bruijn ##k.827 2 0) (bruijn ##x.829 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 54, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k214, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k213(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k213" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k213, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda221) (close _V0expand__syntax_k214) (bruijn ##x.838 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda221, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k214, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k213, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda220(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda220" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda220, env) {
  // ((bruijn gensym 63 4) (close _V0expand__syntax_k213) (##string ##string.4132))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 63, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k213, env)}),
      VEncodePointer(&_V10string_D4132.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__syntax_k212(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k212" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k212, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.824 0 0) ((close _V0expand__syntax_lambda220) (bruijn ##k.819 1 0) (##inline ##sys.cdr (bruijn ##expr.219 1 1))) ((bruijn ##k.819 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda220, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k212, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda219(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda219" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda219, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.219 0 1)) ((bruijn equal? 61 7) (close _V0expand__syntax_k212) (quote <>) (##inline ##sys.car (bruijn ##expr.219 0 1))) ((bruijn ##k.819 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 61, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k212, env)}),
      VEncodePointer(&_V0_L_G.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda218(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda218" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda218, env) {
  // ((close _V0expand__syntax_lambda219) (bruijn ##k.817 0 0) (##inline ##sys.cdr (bruijn ##expr.218 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda219, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda217(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda217" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda217, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.218 0 1)) ((close _V0expand__syntax_lambda218) (bruijn ##k.812 0 0) (##inline ##sys.car (bruijn ##expr.218 0 1))) ((bruijn ##k.812 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda218, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda216(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda216" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda216, env) {
  // ((close _V0expand__syntax_lambda217) (bruijn ##k.810 0 0) (##inline ##sys.cdr (bruijn ##expr.217 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda217, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda215(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda215" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda215, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.217 0 1)) ((close _V0expand__syntax_lambda216) (bruijn ##k.805 0 0) (##inline ##sys.car (bruijn ##expr.217 0 1))) ((bruijn ##k.805 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda216, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda214(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda214" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda214, env) {
  // ((close _V0expand__syntax_lambda215) (bruijn ##k.803 0 0) (##inline ##sys.cdr (bruijn ##expr.216 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda215, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda213(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda213" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda213, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.216 0 1)) ((close _V0expand__syntax_lambda214) (bruijn ##k.798 0 0) (##inline ##sys.car (bruijn ##expr.216 0 1))) ((bruijn ##k.798 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda214, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k211(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k211" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k211, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.795 0 0) ((close _V0expand__syntax_lambda213) (bruijn ##k.790 1 0) (##inline ##sys.cdr (bruijn ##expr.215 1 1))) ((bruijn ##k.790 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda213, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k211, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda212(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda212" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda212, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.215 0 1)) ((bruijn equal? 53 7) (close _V0expand__syntax_k211) (quote cut-iter) (##inline ##sys.car (bruijn ##expr.215 0 1))) ((bruijn ##k.790 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 53, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k211, env)}),
      VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k218(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k218" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k218, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 53 1) (bruijn ##k.752 2 0) (bruijn ##x.763 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 53, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k218, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k217(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k217" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k217, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.757 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.224 1 1))) ((bruijn error 63 15) (close _V0expand__syntax_k218) (##string ##string.4136)) ((bruijn ##k.752 1 0) #f)) ((bruijn ##k.752 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 63, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k218, env)}),
      VEncodePointer(&_V10string_D4136.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k217, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda229(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda229" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda229, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.224 0 1)) ((bruijn equal? 62 7) (close _V0expand__syntax_k217) (quote <...>) (##inline ##sys.car (bruijn ##expr.224 0 1))) ((bruijn ##k.752 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 62, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k217, env)}),
      VEncodePointer(&_V0_L_D_D_D_G.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda228(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda228" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda228, env) {
  // ((close _V0expand__syntax_lambda229) (bruijn ##k.750 0 0) (##inline ##sys.cdr (bruijn ##expr.223 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda229, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda227(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda227" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda227, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.223 0 1)) ((close _V0expand__syntax_lambda228) (bruijn ##k.745 0 0) (##inline ##sys.car (bruijn ##expr.223 0 1))) ((bruijn ##k.745 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda228, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda226(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda226" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda226, env) {
  // ((close _V0expand__syntax_lambda227) (bruijn ##k.743 0 0) (##inline ##sys.cdr (bruijn ##expr.222 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda227, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda225(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda225" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda225, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.222 0 1)) ((close _V0expand__syntax_lambda226) (bruijn ##k.738 0 0) (##inline ##sys.car (bruijn ##expr.222 0 1))) ((bruijn ##k.738 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda226, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda224(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda224" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda224, env) {
  // ((close _V0expand__syntax_lambda225) (bruijn ##k.736 0 0) (##inline ##sys.cdr (bruijn ##expr.221 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda225, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda223(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda223" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda223, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.221 0 1)) ((close _V0expand__syntax_lambda224) (bruijn ##k.731 0 0) (##inline ##sys.car (bruijn ##expr.221 0 1))) ((bruijn ##k.731 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda224, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k216(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k216" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k216, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.728 0 0) ((close _V0expand__syntax_lambda223) (bruijn ##k.723 1 0) (##inline ##sys.cdr (bruijn ##expr.220 1 1))) ((bruijn ##k.723 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda223, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k216, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda222(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda222" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda222, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.220 0 1)) ((bruijn equal? 54 7) (close _V0expand__syntax_k216) (quote cut-iter) (##inline ##sys.car (bruijn ##expr.220 0 1))) ((bruijn ##k.723 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 54, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k216, env)}),
      VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k221(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k221" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k221, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 55 1) (bruijn ##k.693 1 0) (bruijn ##x.695 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 55, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k221, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda239(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda239" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda239, env) {
  // ((bruijn expand-syntax 64 9) (close _V0expand__syntax_k221) (##inline ##sys.cons (quote cut-iter) (##inline ##sys.cons (bruijn xs 7 1) (##inline ##sys.cons (##inline ##sys.cons (bruijn x 1 1) (bruijn args 5 1)) (##inline ##sys.cons (bruijn f 3 1) (bruijn rest 0 1))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 64, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k221, env)}),
      VInlineCons(
VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 7, 1),
      VInlineCons(
VInlineCons(
env->up->vars[1],
      VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->up->up->up->vars[1],
      env->vars[1]
    )

    )

    )

    )

    );
 }
}
static void _V0expand__syntax_lambda238(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda238" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda238, env) {
  // ((close _V0expand__syntax_lambda239) (bruijn ##k.691 0 0) (##inline ##sys.cdr (bruijn ##expr.229 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda239, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda237(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda237" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda237, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.229 0 1)) ((close _V0expand__syntax_lambda238) (bruijn ##k.686 0 0) (##inline ##sys.car (bruijn ##expr.229 0 1))) ((bruijn ##k.686 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda238, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda236(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda236" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda236, env) {
  // ((close _V0expand__syntax_lambda237) (bruijn ##k.684 0 0) (##inline ##sys.cdr (bruijn ##expr.228 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda237, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda235(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda235" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda235, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.228 0 1)) ((close _V0expand__syntax_lambda236) (bruijn ##k.679 0 0) (##inline ##sys.car (bruijn ##expr.228 0 1))) ((bruijn ##k.679 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda236, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda234(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda234" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda234, env) {
  // ((close _V0expand__syntax_lambda235) (bruijn ##k.677 0 0) (##inline ##sys.cdr (bruijn ##expr.227 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda235, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda233(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda233" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda233, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.227 0 1)) ((close _V0expand__syntax_lambda234) (bruijn ##k.672 0 0) (##inline ##sys.car (bruijn ##expr.227 0 1))) ((bruijn ##k.672 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda234, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda232(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda232" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda232, env) {
  // ((close _V0expand__syntax_lambda233) (bruijn ##k.670 0 0) (##inline ##sys.cdr (bruijn ##expr.226 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda233, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda231(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda231" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda231, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.226 0 1)) ((close _V0expand__syntax_lambda232) (bruijn ##k.665 0 0) (##inline ##sys.car (bruijn ##expr.226 0 1))) ((bruijn ##k.665 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda232, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k220(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k220" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k220, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.662 0 0) ((close _V0expand__syntax_lambda231) (bruijn ##k.657 1 0) (##inline ##sys.cdr (bruijn ##expr.225 1 1))) ((bruijn ##k.657 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda231, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k220, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda230(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda230" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda230, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.225 0 1)) ((bruijn equal? 55 7) (close _V0expand__syntax_k220) (quote cut-iter) (##inline ##sys.car (bruijn ##expr.225 0 1))) ((bruijn ##k.657 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 55, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k220, env)}),
      VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k224(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k224" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k224, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 48 1) (bruijn ##k.647 1 0) (bruijn ##x.649 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 48, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k224, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda241(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda241" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda241, env) {
  // ((bruijn error 58 15) (close _V0expand__syntax_k224) (##string ##string.4137) (##inline ##sys.cons (quote cut) (bruijn noise 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 58, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k224, env)}),
      VEncodePointer(&_V10string_D4137.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0cut.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_k223(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k223" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k223, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.644 0 0) ((close _V0expand__syntax_lambda241) (bruijn ##k.639 1 0) (##inline ##sys.cdr (bruijn ##expr.230 1 1))) ((bruijn ##k.639 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda241, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k223, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda240(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda240" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda240, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.230 0 1)) ((bruijn equal? 56 7) (close _V0expand__syntax_k223) (quote cut) (##inline ##sys.car (bruijn ##expr.230 0 1))) ((bruijn ##k.639 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 56, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k223, env)}),
      VEncodePointer(&_V0cut.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k230(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k230" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k230, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 55 1) (bruijn ##k.605 4 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn y 6 1) (##inline ##sys.cons (bruijn ##x.616 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 55, 1)),
      VGetArg(env, 4, 0),
      VInlineCons(
VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 6, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k230, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k229(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k229" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k229, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 64 9) (close _V0expand__syntax_k230) (bruijn x 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 64, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k230, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k229, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k231(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k231" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k231, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 54 1) (bruijn ##k.605 3 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn y 5 1) (##inline ##sys.cons (bruijn ##x.616 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 54, 1)),
      env->up->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k231, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k228(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k228" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k228, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.617 0 0) ((bruijn error 64 15) (close _V0expand__syntax_k229) (##string ##string.4138) (bruijn y 4 1)) ((bruijn expand-syntax 63 9) (close _V0expand__syntax_k231) (bruijn x 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 64, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k229, env)}),
      VEncodePointer(&_V10string_D4138.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 63, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k231, env)}),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k228, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k227(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k227" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k227, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 63 9) (close _V0expand__syntax_k228) (bruijn ##x.622 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 63, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k228, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k227, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda246(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda246" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda246, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.233 1 1))) ((bruijn symbol? 62 10) (close _V0expand__syntax_k227) (bruijn y 2 1)) ((bruijn ##k.605 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 62, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k227, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda245(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda245" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda245, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.233 0 1)) ((close _V0expand__syntax_lambda246) (bruijn ##k.600 0 0) (##inline ##sys.car (bruijn ##expr.233 0 1))) ((bruijn ##k.600 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda246, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda244(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda244" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda244, env) {
  // ((close _V0expand__syntax_lambda245) (bruijn ##k.598 0 0) (##inline ##sys.cdr (bruijn ##expr.232 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda245, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda243(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda243" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda243, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.232 0 1)) ((close _V0expand__syntax_lambda244) (bruijn ##k.593 0 0) (##inline ##sys.car (bruijn ##expr.232 0 1))) ((bruijn ##k.593 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda244, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k226(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k226" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k226, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.590 0 0) ((close _V0expand__syntax_lambda243) (bruijn ##k.585 1 0) (##inline ##sys.cdr (bruijn ##expr.231 1 1))) ((bruijn ##k.585 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda243, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k226, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda242(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda242" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda242, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.231 0 1)) ((bruijn equal? 57 7) (close _V0expand__syntax_k226) (quote set!) (##inline ##sys.car (bruijn ##expr.231 0 1))) ((bruijn ##k.585 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 57, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k226, env)}),
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k234(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k234" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k234, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 50 1) (bruijn ##k.575 1 0) (bruijn ##x.577 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 50, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k234, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda248(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda248" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda248, env) {
  // ((bruijn error 60 15) (close _V0expand__syntax_k234) (##string ##string.4139) (##inline ##sys.cons (quote set!) (bruijn noise 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 60, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k234, env)}),
      VEncodePointer(&_V10string_D4139.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_k233(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k233" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k233, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.572 0 0) ((close _V0expand__syntax_lambda248) (bruijn ##k.567 1 0) (##inline ##sys.cdr (bruijn ##expr.234 1 1))) ((bruijn ##k.567 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda248, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k233, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda247(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda247" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda247, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.234 0 1)) ((bruijn equal? 58 7) (close _V0expand__syntax_k233) (quote set!) (##inline ##sys.car (bruijn ##expr.234 0 1))) ((bruijn ##k.567 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 58, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k233, env)}),
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k237(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k237" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k237, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 51 1) (bruijn ##k.557 1 0) (bruijn ##x.559 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 51, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k237, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda250(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda250" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda250, env) {
  // ((bruijn error 61 15) (close _V0expand__syntax_k237) (##string ##string.4140) (##inline ##sys.cons (quote define) (bruijn ys 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 61, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k237, env)}),
      VEncodePointer(&_V10string_D4140.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_k236(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k236" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k236, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.554 0 0) ((close _V0expand__syntax_lambda250) (bruijn ##k.549 1 0) (##inline ##sys.cdr (bruijn ##expr.235 1 1))) ((bruijn ##k.549 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda250, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k236, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda249(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda249" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda249, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.235 0 1)) ((bruijn equal? 59 7) (close _V0expand__syntax_k236) (quote define) (##inline ##sys.car (bruijn ##expr.235 0 1))) ((bruijn ##k.549 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 59, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k236, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k241(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k241" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k241, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 53 1) (bruijn ##k.538 2 0) (bruijn ##x.540 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 53, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k241, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k240(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k240" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k240, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 62 9) (close _V0expand__syntax_k241) (bruijn ##x.541 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 62, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k241, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k240, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda252(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda252" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda252, env) {
  // ((bruijn transform-match 62 6) (close _V0expand__syntax_k240) (##inline ##sys.cons (quote match) (bruijn ys 0 1)) (bruijn eqv? 62 5))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 62, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k240, env)}),
      VInlineCons(
VEncodePointer(&_V0match.sym, VPOINTER_OTHER),
      env->vars[1]
    )
,
      VGetArg(env, 62, 5)
    );
 }
}
static void _V0expand__syntax_k239(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k239" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k239, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.535 0 0) ((close _V0expand__syntax_lambda252) (bruijn ##k.530 1 0) (##inline ##sys.cdr (bruijn ##expr.236 1 1))) ((bruijn ##k.530 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda252, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k239, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda251(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda251" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda251, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.236 0 1)) ((bruijn equal? 60 7) (close _V0expand__syntax_k239) (quote match) (##inline ##sys.car (bruijn ##expr.236 0 1))) ((bruijn ##k.530 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 60, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k239, env)}),
      VEncodePointer(&_V0match.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k243(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k243" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k243, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.474 1 0) (bruijn ##expr.238 4 1) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k243, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda262(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda262" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda262, env) {
  // ((bruijn ##k.241 1 1) (bruijn ##k.492 0 0) (##inline ##sys.cdr (bruijn ##expr.242 5 1)) (##inline ##sys.cons (bruijn args 0 1) (bruijn ##args.239 5 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 5, 1)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 5, 2)
    )

    );
 }
}
static void _V0loop_k247(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k247" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k247, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.240 8 1) (bruijn ##k.486 2 0) (bruijn ##expr.242 6 1) (bruijn ##x.491 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->vars[0],
      VGetArg(env, 6, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k247, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k246(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k246" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k246, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 72 14) (close _V0loop_k247) (bruijn ##args.239 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 72, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k247, env)}),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k246, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda261(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda261" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda261, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda262) (close _V0loop_k246) (##inline ##sys.car (bruijn ##expr.242 4 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda262, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k246, env)}),
      VInlineCar(
VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda261, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda260(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda260" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda260, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 70 13) (bruijn ##k.484 0 0) (close _V0loop_lambda261))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 70, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda261, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda260, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k245(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k245" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k245, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 69 12) (bruijn ##k.479 2 0) (close _V0loop_lambda260) (bruijn loop 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 69, 12)),
      env->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda260, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k245, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k244(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k244" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k244, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.240 3 1) (close _V0loop_k245) (bruijn ##expr.242 1 1) (bruijn ##x.500 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k245, env)}),
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k244, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda265(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda265" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda265, env) {
  // ((bruijn ##k.241 1 1) (bruijn ##k.492 0 0) (##inline ##sys.cdr (bruijn ##expr.242 3 1)) (##inline ##sys.cons (bruijn args 0 1) (bruijn ##args.239 3 2)))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )
,
      VInlineCons(
env->vars[1],
      env->up->up->up->vars[2]
    )

    );
 }
}
static void _V0loop_k249(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k249" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k249, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.240 6 1) (bruijn ##k.486 2 0) (bruijn ##expr.242 4 1) (bruijn ##x.491 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k249, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k248(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k248" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k248, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 70 14) (close _V0loop_k249) (bruijn ##args.239 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 70, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k249, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k248, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda264(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda264" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda264, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda265) (close _V0loop_k248) (##inline ##sys.car (bruijn ##expr.242 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda265, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k248, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda264, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda263(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda263" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda263, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 68 13) (bruijn ##k.484 0 0) (close _V0loop_lambda264))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 68, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda264, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda263, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda259(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda259" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda259, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.242 0 1))) ((bruijn reverse 67 14) (close _V0loop_k244) (bruijn ##args.239 0 2)) ((bruijn call-with-values 67 12) (bruijn ##k.479 0 0) (close _V0loop_lambda263) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 67, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k244, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 67, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda263, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda259, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda258(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda258" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda258, env) {
  // (set! (close _V0expand__syntax_k243) (bruijn loop 0 1) (close _V0loop_lambda259))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k243, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda259, env)})
    );
 }
}
static void _V0expand__syntax_lambda257(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda257" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda257, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__syntax_lambda258) (bruijn ##k.472 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda258, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda257, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda256(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda256" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda256, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 64 13) (bruijn ##k.470 0 0) (close _V0expand__syntax_lambda257))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 64, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda257, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda256, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k255(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k255" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k255, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 59 1) (bruijn ##k.504 6 0) (##inline ##sys.cons (bruijn ##x.513 1 0) (bruijn ##x.514 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 59, 1)),
      VGetArg(env, 6, 0),
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k255, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k254(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k254" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k254, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 69 11) (close _V0expand__syntax_k255) (bruijn expand-syntax 68 9) (bruijn args 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 69, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k255, env)}),
      VGetArg(env, 68, 9),
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k254, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k253(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k253" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k253, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 67 9) (close _V0expand__syntax_k254) (bruijn f 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 67, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k254, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k253, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k257(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k257" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k257, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 58 1) (bruijn ##k.504 5 0) (##inline ##sys.cons (bruijn ##x.513 1 0) (bruijn ##x.514 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 58, 1)),
      VGetArg(env, 5, 0),
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k257, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k256(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k256" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k256, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 68 11) (close _V0expand__syntax_k257) (bruijn expand-syntax 67 9) (bruijn args 4 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 68, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k257, env)}),
      VGetArg(env, 67, 9),
      VGetArg(env, 4, 2)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k256, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k252(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k252" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k252, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.522 0 0) ((bruijn error 67 15) (close _V0expand__syntax_k253) (##string ##string.4141) (bruijn f 5 1)) ((bruijn expand-syntax 66 9) (close _V0expand__syntax_k256) (bruijn f 5 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 67, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k253, env)}),
      VEncodePointer(&_V10string_D4141.sym, VPOINTER_OTHER),
      VGetArg(env, 5, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 66, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k256, env)}),
      VGetArg(env, 5, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k252, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k251(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k251" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k251, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 66 9) (close _V0expand__syntax_k252) (bruijn ##x.523 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 66, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k252, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k251, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k259(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k259" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k259, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 56 1) (bruijn ##k.504 3 0) (##inline ##sys.cons (bruijn ##x.513 1 0) (bruijn ##x.514 0 0)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 56, 1)),
      env->up->up->up->vars[0],
      VInlineCons(
env->up->vars[0],
      env->vars[0]
    )

    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k259, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k258(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k258" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k258, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 66 11) (close _V0expand__syntax_k259) (bruijn expand-syntax 65 9) (bruijn args 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 66, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k259, env)}),
      VGetArg(env, 65, 9),
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k258, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k250(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k250" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k250, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.520 0 0) ((bruijn symbol? 65 10) (close _V0expand__syntax_k251) (bruijn f 3 1)) ((bruijn expand-syntax 64 9) (close _V0expand__syntax_k258) (bruijn f 3 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 65, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k251, env)}),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 64, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k258, env)}),
      env->up->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k250, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda266(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda266" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda266, env) {
 if (env->num_vars == 3) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn atom? 64 8) (close _V0expand__syntax_k250) (bruijn f 2 1)) ((bruijn ##k.504 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 64, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k250, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda266, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda255(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda255" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda255, env) {
  // ((bruijn call-with-values 63 12) (bruijn ##k.468 0 0) (close _V0expand__syntax_lambda256) (close _V0expand__syntax_lambda266))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 63, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda256, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda266, env)})
    );
 }
}
static void _V0expand__syntax_lambda254(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda254" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda254, env) {
  // ((close _V0expand__syntax_lambda255) (bruijn ##k.466 0 0) (##inline ##sys.cdr (bruijn ##expr.237 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda255, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda253(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda253" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda253, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.237 0 1)) ((close _V0expand__syntax_lambda254) (bruijn ##k.461 0 0) (##inline ##sys.car (bruijn ##expr.237 0 1))) ((bruijn ##k.461 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda254, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k261(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k261" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k261, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 54 1) (bruijn ##k.453 1 0) (bruijn ##x.455 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 54, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k261, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda269(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda269" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda269, env) {
  // ((bruijn error 64 15) (close _V0expand__syntax_k261) (##string ##string.4142) (##inline ##sys.cons (bruijn a 1 1) (bruijn b 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 64, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k261, env)}),
      VEncodePointer(&_V10string_D4142.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[1],
      env->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda268(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda268" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda268, env) {
  // ((close _V0expand__syntax_lambda269) (bruijn ##k.451 0 0) (##inline ##sys.cdr (bruijn ##expr.243 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda269, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__syntax_lambda267(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda267" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda267, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.243 0 1)) ((close _V0expand__syntax_lambda268) (bruijn ##k.446 0 0) (##inline ##sys.car (bruijn ##expr.243 0 1))) ((bruijn ##k.446 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda268, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k264(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k264" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k264, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 53 1) (bruijn ##k.285 52 0) (bruijn expr 54 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 53, 1)),
      VGetArg(env, 52, 0),
      VGetArg(env, 54, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k264, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k263(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k263" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k263, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.102 52 1) (close _V0expand__syntax_k264) (bruijn ##x.443 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 52, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k264, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k263, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k262(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k262" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k262, env) {
 if (env->num_vars == 1) {
  // (if (##inline ##sys.null? (bruijn ##input.103 50 1)) ((bruijn error 62 15) (close _V0expand__syntax_k263) (##string ##string.4143) (quote ())) ((bruijn ##k.102 51 1) (bruijn ##k.285 50 0) (bruijn expr 52 1)))
if(VDecodeBool(
VInlineNullP(
VGetArg(env, 50, 1)
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 62, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k263, env)}),
      VEncodePointer(&_V10string_D4143.sym, VPOINTER_OTHER),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 51, 1)),
      VGetArg(env, 50, 0),
      VGetArg(env, 52, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__syntax_k262, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k260(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k260" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k260, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda267) (close _V0expand__syntax_k262) (bruijn ##input.103 49 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda267, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k262, env)}),
      VGetArg(env, 49, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k260, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k242(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k242" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k242, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda253) (close _V0expand__syntax_k260) (bruijn ##input.103 48 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda253, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k260, env)}),
      VGetArg(env, 48, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k242, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k238(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k238" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k238, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda251) (close _V0expand__syntax_k242) (bruijn ##input.103 47 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda251, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k242, env)}),
      VGetArg(env, 47, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k238, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k235(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k235" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k235, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda249) (close _V0expand__syntax_k238) (bruijn ##input.103 46 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda249, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k238, env)}),
      VGetArg(env, 46, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k235, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k232(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k232" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k232, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda247) (close _V0expand__syntax_k235) (bruijn ##input.103 45 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda247, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k235, env)}),
      VGetArg(env, 45, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k232, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k225(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k225" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k225, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda242) (close _V0expand__syntax_k232) (bruijn ##input.103 44 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda242, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k232, env)}),
      VGetArg(env, 44, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k225, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k222(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k222" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k222, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda240) (close _V0expand__syntax_k225) (bruijn ##input.103 43 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda240, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k225, env)}),
      VGetArg(env, 43, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k222, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k219(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k219" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k219, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda230) (close _V0expand__syntax_k222) (bruijn ##input.103 42 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda230, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k222, env)}),
      VGetArg(env, 42, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k219, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k215(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k215" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k215, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda222) (close _V0expand__syntax_k219) (bruijn ##input.103 41 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda222, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k219, env)}),
      VGetArg(env, 41, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k215, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k210(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k210" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k210, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda212) (close _V0expand__syntax_k215) (bruijn ##input.103 40 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda212, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k215, env)}),
      VGetArg(env, 40, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k210, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k205(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k205" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k205, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda205) (close _V0expand__syntax_k210) (bruijn ##input.103 39 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda205, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k210, env)}),
      VGetArg(env, 39, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k205, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k202(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k202" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k202, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda201) (close _V0expand__syntax_k205) (bruijn ##input.103 38 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda201, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k205, env)}),
      VGetArg(env, 38, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k202, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k200(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k200" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k200, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda198) (close _V0expand__syntax_k202) (bruijn ##input.103 37 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda198, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k202, env)}),
      VGetArg(env, 37, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k200, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k189(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k189" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k189, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda178) (close _V0expand__syntax_k200) (bruijn ##input.103 36 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda178, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k200, env)}),
      VGetArg(env, 36, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k189, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k185(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k185" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k185, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda172) (close _V0expand__syntax_k189) (bruijn ##input.103 35 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda172, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k189, env)}),
      VGetArg(env, 35, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k185, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k181(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k181" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k181, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda167) (close _V0expand__syntax_k185) (bruijn ##input.103 34 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda167, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k185, env)}),
      VGetArg(env, 34, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k181, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k178(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k178" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k178, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda165) (close _V0expand__syntax_k181) (bruijn ##input.103 33 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda165, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k181, env)}),
      VGetArg(env, 33, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k178, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k176(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k176" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k176, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda164) (close _V0expand__syntax_k178) (bruijn ##input.103 32 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda164, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k178, env)}),
      VGetArg(env, 32, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k176, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k173(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k173" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k173, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda158) (close _V0expand__syntax_k176) (bruijn ##input.103 31 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda158, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k176, env)}),
      VGetArg(env, 31, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k173, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k168(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k168" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k168, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda149) (close _V0expand__syntax_k173) (bruijn ##input.103 30 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda149, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k173, env)}),
      VGetArg(env, 30, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k168, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k164(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k164" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k164, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda145) (close _V0expand__syntax_k168) (bruijn ##input.103 29 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda145, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k168, env)}),
      VGetArg(env, 29, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k164, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k161(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k161" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k161, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda141) (close _V0expand__syntax_k164) (bruijn ##input.103 28 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda141, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k164, env)}),
      VGetArg(env, 28, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k161, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k158(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k158" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k158, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda138) (close _V0expand__syntax_k161) (bruijn ##input.103 27 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda138, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k161, env)}),
      VGetArg(env, 27, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k158, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k156(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k156" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k156, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda137) (close _V0expand__syntax_k158) (bruijn ##input.103 26 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda137, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k158, env)}),
      VGetArg(env, 26, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k156, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k153(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k153" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k153, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda133) (close _V0expand__syntax_k156) (bruijn ##input.103 25 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda133, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k156, env)}),
      VGetArg(env, 25, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k153, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k150(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k150" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k150, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda130) (close _V0expand__syntax_k153) (bruijn ##input.103 24 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda130, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k153, env)}),
      VGetArg(env, 24, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k150, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k148(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k148" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k148, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda129) (close _V0expand__syntax_k150) (bruijn ##input.103 23 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda129, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k150, env)}),
      VGetArg(env, 23, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k148, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k145(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k145" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k145, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda127) (close _V0expand__syntax_k148) (bruijn ##input.103 22 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda127, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k148, env)}),
      VGetArg(env, 22, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k145, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k142(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k142" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k142, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda120) (close _V0expand__syntax_k145) (bruijn ##input.103 21 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda120, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k145, env)}),
      VGetArg(env, 21, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k142, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k139(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k139" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k139, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda115) (close _V0expand__syntax_k142) (bruijn ##input.103 20 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda115, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k142, env)}),
      VGetArg(env, 20, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k139, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k136(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k136" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k136, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda113) (close _V0expand__syntax_k139) (bruijn ##input.103 19 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda113, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k139, env)}),
      VGetArg(env, 19, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k136, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k133(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k133" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k133, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda109) (close _V0expand__syntax_k136) (bruijn ##input.103 18 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda109, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k136, env)}),
      VGetArg(env, 18, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k133, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k129(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k129" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k129, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda104) (close _V0expand__syntax_k133) (bruijn ##input.103 17 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda104, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k133, env)}),
      VGetArg(env, 17, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k129, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k126(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k126" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k126, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda101) (close _V0expand__syntax_k129) (bruijn ##input.103 16 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda101, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k129, env)}),
      VGetArg(env, 16, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k126, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k123(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k123" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k123, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda99) (close _V0expand__syntax_k126) (bruijn ##input.103 15 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda99, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k126, env)}),
      VGetArg(env, 15, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k123, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k120(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k120" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k120, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda96) (close _V0expand__syntax_k123) (bruijn ##input.103 14 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda96, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k123, env)}),
      VGetArg(env, 14, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k120, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k110(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k110" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k110, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda76) (close _V0expand__syntax_k120) (bruijn ##input.103 13 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda76, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k120, env)}),
      VGetArg(env, 13, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k110, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k107(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k107" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k107, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda74) (close _V0expand__syntax_k110) (bruijn ##input.103 12 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda74, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k110, env)}),
      VGetArg(env, 12, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k107, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k104(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k104" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k104, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda72) (close _V0expand__syntax_k107) (bruijn ##input.103 11 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda72, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k107, env)}),
      VGetArg(env, 11, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k104, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k88(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k88" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k88, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda49) (close _V0expand__syntax_k104) (bruijn ##input.103 10 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda49, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k104, env)}),
      VGetArg(env, 10, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k88, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k85(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k85" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k85, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda47) (close _V0expand__syntax_k88) (bruijn ##input.103 9 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda47, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k88, env)}),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k85, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k82(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k82" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k82, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda44) (close _V0expand__syntax_k85) (bruijn ##input.103 8 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda44, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k85, env)}),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k82, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k79(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k79" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k79, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda35) (close _V0expand__syntax_k82) (bruijn ##input.103 7 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda35, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k82, env)}),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k79, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k75(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k75" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k75, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda34) (close _V0expand__syntax_k79) (bruijn ##input.103 6 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda34, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k79, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k75, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k73(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k73" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k73, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda31) (close _V0expand__syntax_k75) (bruijn ##input.103 5 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda31, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k75, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k73, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k70(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k70" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k70, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda26) (close _V0expand__syntax_k73) (bruijn ##input.103 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda26, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k73, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k70, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k66(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k66" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k66, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda23) (close _V0expand__syntax_k70) (bruijn ##input.103 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda23, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k70, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k66, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k63(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k63" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k63, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda22) (close _V0expand__syntax_k66) (bruijn ##input.103 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda22, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k66, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k63, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_k53(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_k53" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_k53, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__syntax_lambda9) (close _V0expand__syntax_k63) (bruijn ##input.103 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda9, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k63, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_k53, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda7(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda7" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda7, env) {
  // ((close _V0expand__syntax_lambda8) (close _V0expand__syntax_k53) (bruijn ##input.103 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda8, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_k53, env)}),
      env->vars[1]
    );
 }
}
static void _V0expand__syntax_lambda6(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda6" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda6, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__syntax_lambda7) (bruijn ##k.283 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__syntax_lambda7, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda6, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__syntax_lambda5(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda5" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__syntax_lambda5, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 10 13) (bruijn ##k.281 0 0) (close _V0expand__syntax_lambda6))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda6, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__syntax_lambda5, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void expand_k47(VEnv * env) {
 static VDebugInfo dbg = { "expand_k47" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k47, env) {
 if (env->num_vars == 1) {
  // (set! (close expand_k48) (bruijn expand-syntax 8 9) (close _V0expand__syntax_lambda5))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k48, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__syntax_lambda5, env)})
    );
 } else {
  VError("Not enough arguments to expand_k47, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k267(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k267" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k267, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 6 1) (bruijn ##k.2868 2 0) (bruijn ##x.2870 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k267, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k266(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k266" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k266, env) {
 if (env->num_vars == 1) {
  // ((bruijn apply 15 16) (close _V0expand__toplevel_k267) (bruijn append 15 3) (bruijn ##x.2871 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k267, env)}),
      VGetArg(env, 15, 3),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k266, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda274(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda274" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda274, env) {
  // ((bruijn map 14 11) (close _V0expand__toplevel_k266) (bruijn expand-toplevel 13 8) (bruijn ys 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k266, env)}),
      VGetArg(env, 13, 8),
      env->vars[1]
    );
 }
}
static void _V0expand__toplevel_k265(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k265" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k265, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2865 0 0) ((close _V0expand__toplevel_lambda274) (bruijn ##k.2860 1 0) (##inline ##sys.cdr (bruijn ##expr.80 1 1))) ((bruijn ##k.2860 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda274, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k265, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda273(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda273" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda273, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.80 0 1)) ((bruijn equal? 12 7) (close _V0expand__toplevel_k265) (quote begin) (##inline ##sys.car (bruijn ##expr.80 0 1))) ((bruijn ##k.2860 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k265, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k271(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k271" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k271, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 9 1) (bruijn ##k.2844 2 0) (bruijn ##x.2846 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k271, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k270(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k270" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k270, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 18 19) (close _V0expand__toplevel_k271) (bruijn ##x.2847 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k271, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k270, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda278(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda278" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda278, env) {
  // ((bruijn expand-library 16 3) (close _V0expand__toplevel_k270) (##inline ##sys.cons (quote define-library) (##inline ##sys.cons (bruijn lib 1 1) (bruijn body 0 1))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k270, env)}),
      VInlineCons(
VEncodePointer(&_V0define__library.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[1],
      env->vars[1]
    )

    )

    );
 }
}
static void _V0expand__toplevel_lambda277(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda277" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda277, env) {
  // ((close _V0expand__toplevel_lambda278) (bruijn ##k.2842 0 0) (##inline ##sys.cdr (bruijn ##expr.82 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda278, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_lambda276(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda276" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda276, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.82 0 1)) ((close _V0expand__toplevel_lambda277) (bruijn ##k.2837 0 0) (##inline ##sys.car (bruijn ##expr.82 0 1))) ((bruijn ##k.2837 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda277, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k269(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k269" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k269, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2834 0 0) ((close _V0expand__toplevel_lambda276) (bruijn ##k.2829 1 0) (##inline ##sys.cdr (bruijn ##expr.81 1 1))) ((bruijn ##k.2829 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda276, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k269, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda275(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda275" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda275, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.81 0 1)) ((bruijn equal? 13 7) (close _V0expand__toplevel_k269) (quote define-library) (##inline ##sys.car (bruijn ##expr.81 0 1))) ((bruijn ##k.2829 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k269, env)}),
      VEncodePointer(&_V0define__library.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k274(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k274" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k274, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 7 1) (bruijn ##k.2819 1 0) (bruijn ##x.2821 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k274, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda280(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda280" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda280, env) {
  // ((bruijn error 16 15) (close _V0expand__toplevel_k274) (##string ##string.4144) (##inline ##sys.cons (quote define-library) (bruijn noise 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k274, env)}),
      VEncodePointer(&_V10string_D4144.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define__library.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_k273(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k273" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k273, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2816 0 0) ((close _V0expand__toplevel_lambda280) (bruijn ##k.2811 1 0) (##inline ##sys.cdr (bruijn ##expr.83 1 1))) ((bruijn ##k.2811 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda280, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k273, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda279(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda279" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda279, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.83 0 1)) ((bruijn equal? 14 7) (close _V0expand__toplevel_k273) (quote define-library) (##inline ##sys.car (bruijn ##expr.83 0 1))) ((bruijn ##k.2811 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k273, env)}),
      VEncodePointer(&_V0define__library.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k276(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k276" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k276, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2797 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.84 1 1))) ((bruijn ##k.78 6 1) (bruijn ##k.2792 1 0) (quote ())) ((bruijn ##k.2792 1 0) #f)) ((bruijn ##k.2792 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->vars[0],
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k276, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda281(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda281" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda281, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.84 0 1)) ((bruijn equal? 15 7) (close _V0expand__toplevel_k276) (quote import) (##inline ##sys.car (bruijn ##expr.84 0 1))) ((bruijn ##k.2792 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k276, env)}),
      VEncodePointer(&_V0import.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k281(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k281" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k281, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 13 1) (bruijn ##k.2770 3 0) (bruijn ##x.2772 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k281, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k280(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k280" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k280, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 22 1) (close _V0expand__toplevel_k281) (##inline ##sys.cons (quote ##vcore.multidefine) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.function) (##inline ##sys.cons (quote (##string ##string.4145)) (quote ()))) (##inline ##sys.cons (bruijn ##x.2780 1 0) (quote ()))) (quote ()))) (bruijn ##x.2774 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k281, env)}),
      VInlineCons(
VEncodePointer(&_V10vcore_Dmultidefine.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4145.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
env->up->vars[0],
      VNULL
    )

    )
,
      VNULL
    )

    )
,
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k280, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k279(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k279" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k279, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-toplevel 20 8) (close _V0expand__toplevel_k280) (##inline ##sys.cons (quote import) (bruijn rest 1 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k280, env)}),
      VInlineCons(
VEncodePointer(&_V0import.sym, VPOINTER_OTHER),
      env->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k279, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda285(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda285" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda285, env) {
  // ((bruijn mangle-library 20 17) (close _V0expand__toplevel_k279) (bruijn lib 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k279, env)}),
      env->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_lambda284(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda284" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda284, env) {
  // ((close _V0expand__toplevel_lambda285) (bruijn ##k.2768 0 0) (##inline ##sys.cdr (bruijn ##expr.86 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda285, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_lambda283(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda283" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda283, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.86 0 1)) ((close _V0expand__toplevel_lambda284) (bruijn ##k.2763 0 0) (##inline ##sys.car (bruijn ##expr.86 0 1))) ((bruijn ##k.2763 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda284, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k278(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k278" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k278, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2760 0 0) ((close _V0expand__toplevel_lambda283) (bruijn ##k.2755 1 0) (##inline ##sys.cdr (bruijn ##expr.85 1 1))) ((bruijn ##k.2755 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda283, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k278, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda282(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda282" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda282, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.85 0 1)) ((bruijn equal? 16 7) (close _V0expand__toplevel_k278) (quote import) (##inline ##sys.car (bruijn ##expr.85 0 1))) ((bruijn ##k.2755 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k278, env)}),
      VEncodePointer(&_V0import.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k284(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k284" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k284, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 14 1) (bruijn ##k.2733 1 0) (bruijn ##x.2735 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k284, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda291(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda291" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda291, env) {
  // ((bruijn expand-toplevel 22 8) (close _V0expand__toplevel_k284) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 2 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 1 1) (bruijn body 0 1))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k284, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[1],
      env->vars[1]
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
static void _V0expand__toplevel_lambda290(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda290" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda290, env) {
  // ((close _V0expand__toplevel_lambda291) (bruijn ##k.2731 0 0) (##inline ##sys.cdr (bruijn ##expr.88 3 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda291, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_lambda289(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda289" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda289, env) {
  // ((close _V0expand__toplevel_lambda290) (bruijn ##k.2729 0 0) (##inline ##sys.cdr (bruijn ##expr.89 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda290, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_lambda288(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda288" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda288, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.89 0 1)) ((close _V0expand__toplevel_lambda289) (bruijn ##k.2724 0 0) (##inline ##sys.car (bruijn ##expr.89 0 1))) ((bruijn ##k.2724 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda289, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda287(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda287" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda287, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.88 0 1)) ((close _V0expand__toplevel_lambda288) (bruijn ##k.2719 0 0) (##inline ##sys.car (bruijn ##expr.88 0 1))) ((bruijn ##k.2719 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda288, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k283(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k283" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k283, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2716 0 0) ((close _V0expand__toplevel_lambda287) (bruijn ##k.2711 1 0) (##inline ##sys.cdr (bruijn ##expr.87 1 1))) ((bruijn ##k.2711 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda287, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k283, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda286(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda286" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda286, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.87 0 1)) ((bruijn equal? 17 7) (close _V0expand__toplevel_k283) (quote define) (##inline ##sys.car (bruijn ##expr.87 0 1))) ((bruijn ##k.2711 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k283, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k291(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k291" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k291, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 18 1) (bruijn ##k.2676 5 0) (bruijn ##x.2684 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k291, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k290(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k290" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k290, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 27 19) (close _V0expand__toplevel_k291) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn x 6 1) (##inline ##sys.cons (bruijn ##x.2688 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k291, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 6, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k290, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k289(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k289" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k289, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 25 9) (close _V0expand__toplevel_k290) (bruijn body 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k290, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k289, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k293(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k293" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k293, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 17 1) (bruijn ##k.2676 4 0) (bruijn ##x.2684 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k293, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k292(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k292" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k292, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 26 19) (close _V0expand__toplevel_k293) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn x 5 1) (##inline ##sys.cons (bruijn ##x.2688 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k293, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k292, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k288(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k288" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k288, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2689 0 0) ((bruijn error 25 15) (close _V0expand__toplevel_k289) (##string ##string.4146) (bruijn x 4 1)) ((bruijn expand-syntax 24 9) (close _V0expand__toplevel_k292) (bruijn body 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k289, env)}),
      VEncodePointer(&_V10string_D4146.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k292, env)}),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k288, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k287(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k287" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k287, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 24 9) (close _V0expand__toplevel_k288) (bruijn ##x.2694 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k288, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k287, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda296(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda296" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda296, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.92 1 1))) ((bruijn symbol? 23 10) (close _V0expand__toplevel_k287) (bruijn x 2 1)) ((bruijn ##k.2676 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k287, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda295(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda295" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda295, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 1)) ((close _V0expand__toplevel_lambda296) (bruijn ##k.2671 0 0) (##inline ##sys.car (bruijn ##expr.92 0 1))) ((bruijn ##k.2671 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda296, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda294(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda294" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda294, env) {
  // ((close _V0expand__toplevel_lambda295) (bruijn ##k.2669 0 0) (##inline ##sys.cdr (bruijn ##expr.91 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda295, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_lambda293(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda293" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda293, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.91 0 1)) ((close _V0expand__toplevel_lambda294) (bruijn ##k.2664 0 0) (##inline ##sys.car (bruijn ##expr.91 0 1))) ((bruijn ##k.2664 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda294, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k286(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k286" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k286, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2661 0 0) ((close _V0expand__toplevel_lambda293) (bruijn ##k.2656 1 0) (##inline ##sys.cdr (bruijn ##expr.90 1 1))) ((bruijn ##k.2656 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda293, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k286, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda292(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda292" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda292, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.90 0 1)) ((bruijn equal? 18 7) (close _V0expand__toplevel_k286) (quote define) (##inline ##sys.car (bruijn ##expr.90 0 1))) ((bruijn ##k.2656 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k286, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k296(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k296" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k296, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 12 1) (bruijn ##k.2646 1 0) (bruijn ##x.2648 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k296, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda298(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda298" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda298, env) {
  // ((bruijn error 21 15) (close _V0expand__toplevel_k296) (##string ##string.4147) (##inline ##sys.cons (quote define) (bruijn noise 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k296, env)}),
      VEncodePointer(&_V10string_D4147.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_k295(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k295" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k295, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2643 0 0) ((close _V0expand__toplevel_lambda298) (bruijn ##k.2638 1 0) (##inline ##sys.cdr (bruijn ##expr.93 1 1))) ((bruijn ##k.2638 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda298, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k295, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda297(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda297" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda297, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.93 0 1)) ((bruijn equal? 19 7) (close _V0expand__toplevel_k295) (quote define) (##inline ##sys.car (bruijn ##expr.93 0 1))) ((bruijn ##k.2638 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k295, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k304(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k304" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k304, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 21 1) (bruijn ##k.2538 6 0) (bruijn ##x.2549 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 6, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k304, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k303(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k303" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k303, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 30 19) (close _V0expand__toplevel_k304) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn f 7 1) (##inline ##sys.cons (bruijn ##x.2553 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k304, env)}),
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 7, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k303, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k302(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k302" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k302, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 28 9) (close _V0expand__toplevel_k303) (bruijn l 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k303, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k302, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda307(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda307" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda307, env) {
  // ((bruijn ##k.97 4 1) (bruijn ##k.2608 0 0) (quote ok))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__toplevel_k305(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k305" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k305, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2605 0 0) ((close _V0expand__toplevel_lambda307) (bruijn ##k.2600 1 0) (##inline ##sys.cdr (bruijn ##expr.99 1 1))) ((bruijn ##k.2600 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda307, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k305, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda306(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda306" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda306, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.99 0 1)) ((bruijn equal? 31 7) (close _V0expand__toplevel_k305) (quote lambda) (##inline ##sys.car (bruijn ##expr.99 0 1))) ((bruijn ##k.2600 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k305, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda309(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda309" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda309, env) {
  // ((bruijn ##k.97 5 1) (bruijn ##k.2592 0 0) (quote ok))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      env->vars[0],
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__toplevel_k307(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k307" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k307, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2589 0 0) ((close _V0expand__toplevel_lambda309) (bruijn ##k.2584 1 0) (##inline ##sys.cdr (bruijn ##expr.100 1 1))) ((bruijn ##k.2584 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda309, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k307, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda308(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda308" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda308, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.100 0 1)) ((bruijn equal? 32 7) (close _V0expand__toplevel_k307) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.100 0 1))) ((bruijn ##k.2584 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k307, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda311(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda311" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda311, env) {
  // ((bruijn ##k.97 6 1) (bruijn ##k.2576 0 0) (quote ok))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->vars[0],
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__toplevel_k309(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k309" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k309, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2573 0 0) ((close _V0expand__toplevel_lambda311) (bruijn ##k.2568 1 0) (##inline ##sys.cdr (bruijn ##expr.101 1 1))) ((bruijn ##k.2568 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda311, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k309, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda310(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda310" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda310, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.101 0 1)) ((bruijn equal? 33 7) (close _V0expand__toplevel_k309) (quote ##vcore.function) (##inline ##sys.car (bruijn ##expr.101 0 1))) ((bruijn ##k.2568 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k309, env)}),
      VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k311(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k311" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k311, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.97 5 1) (bruijn ##k.2556 4 0) (bruijn ##x.2567 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k311, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k310(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k310" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k310, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 33 15) (close _V0expand__toplevel_k311) (##string ##string.4148) (bruijn l 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k311, env)}),
      VEncodePointer(&_V10string_D4148.sym, VPOINTER_OTHER),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k310, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k308(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k308" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k308, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__toplevel_lambda310) (close _V0expand__toplevel_k310) (bruijn ##input.98 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda310, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k310, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k308, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k306(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k306" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k306, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__toplevel_lambda308) (close _V0expand__toplevel_k308) (bruijn ##input.98 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda308, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k308, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k306, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda305(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda305" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda305, env) {
  // ((close _V0expand__toplevel_lambda306) (close _V0expand__toplevel_k306) (bruijn ##input.98 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda306, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k306, env)}),
      env->vars[1]
    );
 }
}
static void _V0expand__toplevel_lambda304(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda304" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda304, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__toplevel_lambda305) (bruijn ##k.2554 0 0) (bruijn l 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda305, env)},
      env->vars[0],
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_lambda304, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k301(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k301" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k301, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 28 13) (close _V0expand__toplevel_k302) (close _V0expand__toplevel_lambda304))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k302, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda304, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k301, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k314(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k314" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k314, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 20 1) (bruijn ##k.2538 5 0) (bruijn ##x.2549 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k314, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k313(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k313" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k313, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 29 19) (close _V0expand__toplevel_k314) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn f 6 1) (##inline ##sys.cons (bruijn ##x.2553 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k314, env)}),
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 6, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k313, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k312(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k312" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k312, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 27 9) (close _V0expand__toplevel_k313) (bruijn l 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k313, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k312, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda315(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda315" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda315, env) {
  // ((bruijn ##k.97 4 1) (bruijn ##k.2608 0 0) (quote ok))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__toplevel_k315(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k315" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k315, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2605 0 0) ((close _V0expand__toplevel_lambda315) (bruijn ##k.2600 1 0) (##inline ##sys.cdr (bruijn ##expr.99 1 1))) ((bruijn ##k.2600 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda315, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k315, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda314(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda314" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda314, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.99 0 1)) ((bruijn equal? 30 7) (close _V0expand__toplevel_k315) (quote lambda) (##inline ##sys.car (bruijn ##expr.99 0 1))) ((bruijn ##k.2600 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k315, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda317(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda317" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda317, env) {
  // ((bruijn ##k.97 5 1) (bruijn ##k.2592 0 0) (quote ok))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      env->vars[0],
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__toplevel_k317(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k317" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k317, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2589 0 0) ((close _V0expand__toplevel_lambda317) (bruijn ##k.2584 1 0) (##inline ##sys.cdr (bruijn ##expr.100 1 1))) ((bruijn ##k.2584 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda317, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k317, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda316(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda316" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda316, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.100 0 1)) ((bruijn equal? 31 7) (close _V0expand__toplevel_k317) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.100 0 1))) ((bruijn ##k.2584 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k317, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda319(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda319" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda319, env) {
  // ((bruijn ##k.97 6 1) (bruijn ##k.2576 0 0) (quote ok))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->vars[0],
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__toplevel_k319(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k319" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k319, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2573 0 0) ((close _V0expand__toplevel_lambda319) (bruijn ##k.2568 1 0) (##inline ##sys.cdr (bruijn ##expr.101 1 1))) ((bruijn ##k.2568 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda319, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k319, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda318(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda318" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda318, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.101 0 1)) ((bruijn equal? 32 7) (close _V0expand__toplevel_k319) (quote ##vcore.function) (##inline ##sys.car (bruijn ##expr.101 0 1))) ((bruijn ##k.2568 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k319, env)}),
      VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k321(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k321" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k321, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.97 5 1) (bruijn ##k.2556 4 0) (bruijn ##x.2567 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k321, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k320(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k320" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k320, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 32 15) (close _V0expand__toplevel_k321) (##string ##string.4148) (bruijn l 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k321, env)}),
      VEncodePointer(&_V10string_D4148.sym, VPOINTER_OTHER),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k320, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k318(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k318" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k318, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__toplevel_lambda318) (close _V0expand__toplevel_k320) (bruijn ##input.98 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda318, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k320, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k318, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k316(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k316" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k316, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__toplevel_lambda316) (close _V0expand__toplevel_k318) (bruijn ##input.98 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda316, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k318, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k316, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda313(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda313" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda313, env) {
  // ((close _V0expand__toplevel_lambda314) (close _V0expand__toplevel_k316) (bruijn ##input.98 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda314, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k316, env)}),
      env->vars[1]
    );
 }
}
static void _V0expand__toplevel_lambda312(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda312" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda312, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__toplevel_lambda313) (bruijn ##k.2554 0 0) (bruijn l 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda313, env)},
      env->vars[0],
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_lambda312, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k300(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k300" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k300, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2616 0 0) ((bruijn error 27 15) (close _V0expand__toplevel_k301) (##string ##string.4149) (bruijn f 4 1)) ((bruijn call/cc 27 13) (close _V0expand__toplevel_k312) (close _V0expand__toplevel_lambda312)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k301, env)}),
      VEncodePointer(&_V10string_D4149.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k312, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda312, env)})
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k300, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k299(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k299" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k299, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 26 9) (close _V0expand__toplevel_k300) (bruijn ##x.2621 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k300, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k299, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda303(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda303" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda303, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.96 1 1))) ((bruijn string? 25 18) (close _V0expand__toplevel_k299) (bruijn f 2 1)) ((bruijn ##k.2538 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k299, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda302(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda302" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda302, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.96 0 1)) ((close _V0expand__toplevel_lambda303) (bruijn ##k.2533 0 0) (##inline ##sys.car (bruijn ##expr.96 0 1))) ((bruijn ##k.2533 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda303, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda301(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda301" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda301, env) {
  // ((close _V0expand__toplevel_lambda302) (bruijn ##k.2531 0 0) (##inline ##sys.cdr (bruijn ##expr.95 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda302, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__toplevel_lambda300(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda300" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda300, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.95 0 1)) ((close _V0expand__toplevel_lambda301) (bruijn ##k.2526 0 0) (##inline ##sys.car (bruijn ##expr.95 0 1))) ((bruijn ##k.2526 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda301, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k298(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k298" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k298, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.2523 0 0) ((close _V0expand__toplevel_lambda300) (bruijn ##k.2518 1 0) (##inline ##sys.cdr (bruijn ##expr.94 1 1))) ((bruijn ##k.2518 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda300, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k298, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda299(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda299" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda299, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.94 0 1)) ((bruijn equal? 20 7) (close _V0expand__toplevel_k298) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.94 0 1))) ((bruijn ##k.2518 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k298, env)}),
      VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k324(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k324" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k324, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.78 13 1) (bruijn ##k.2514 2 0) (bruijn ##x.2516 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k324, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k323(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k323" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k323, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 22 19) (close _V0expand__toplevel_k324) (bruijn ##x.2517 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k324, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k323, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda320(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda320" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda320, env) {
  // ((bruijn expand-syntax 20 9) (close _V0expand__toplevel_k323) (bruijn expr 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k323, env)}),
      env->vars[1]
    );
 }
}
static void _V0expand__toplevel_k325(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k325" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k325, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 21 15) (bruijn ##k.2482 10 0) (##string ##string.4150))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 15)),
      VGetArg(env, 10, 0),
      VEncodePointer(&_V10string_D4150.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k325, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k322(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k322" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k322, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__toplevel_lambda320) (close _V0expand__toplevel_k325) (bruijn ##input.79 9 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda320, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k325, env)}),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k322, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k297(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k297" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k297, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__toplevel_lambda299) (close _V0expand__toplevel_k322) (bruijn ##input.79 8 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda299, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k322, env)}),
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k297, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k294(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k294" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k294, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__toplevel_lambda297) (close _V0expand__toplevel_k297) (bruijn ##input.79 7 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda297, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k297, env)}),
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k294, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k285(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k285" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k285, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__toplevel_lambda292) (close _V0expand__toplevel_k294) (bruijn ##input.79 6 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda292, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k294, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k285, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k282(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k282" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k282, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__toplevel_lambda286) (close _V0expand__toplevel_k285) (bruijn ##input.79 5 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda286, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k285, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k282, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k277(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k277" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k277, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__toplevel_lambda282) (close _V0expand__toplevel_k282) (bruijn ##input.79 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda282, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k282, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k277, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k275(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k275" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k275, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__toplevel_lambda281) (close _V0expand__toplevel_k277) (bruijn ##input.79 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda281, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k277, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k275, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k272(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k272" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k272, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__toplevel_lambda279) (close _V0expand__toplevel_k275) (bruijn ##input.79 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda279, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k275, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k272, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_k268(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k268" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_k268, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__toplevel_lambda275) (close _V0expand__toplevel_k272) (bruijn ##input.79 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda275, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k272, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_k268, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda272(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda272" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda272, env) {
  // ((close _V0expand__toplevel_lambda273) (close _V0expand__toplevel_k268) (bruijn ##input.79 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda273, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_k268, env)}),
      env->vars[1]
    );
 }
}
static void _V0expand__toplevel_lambda271(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda271" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda271, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__toplevel_lambda272) (bruijn ##k.2480 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda272, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_lambda271, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__toplevel_lambda270(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda270" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__toplevel_lambda270, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 9 13) (bruijn ##k.2478 0 0) (close _V0expand__toplevel_lambda271))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda271, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__toplevel_lambda270, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void expand_k46(VEnv * env) {
 static VDebugInfo dbg = { "expand_k46" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k46, env) {
 if (env->num_vars == 1) {
  // (set! (close expand_k47) (bruijn expand-toplevel 7 8) (close _V0expand__toplevel_lambda270))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k47, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__toplevel_lambda270, env)})
    );
 } else {
  VError("Not enough arguments to expand_k46, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_k326(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_k326" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_k326, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.3009 1 0) (bruijn ##expr.60 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL,
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0expand__let_k326, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda335(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda335" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda335, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.67 1 1))) ((bruijn ##k.64 4 1) (bruijn ##k.3040 0 0) (##inline ##sys.cdr (bruijn ##expr.65 9 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.61 9 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.62 9 3))) ((bruijn ##k.3040 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 9, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 9, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 9, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda334(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda334" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda334, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.67 0 1)) ((close _V0loop_lambda335) (bruijn ##k.3035 0 0) (##inline ##sys.car (bruijn ##expr.67 0 1))) ((bruijn ##k.3035 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda335, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda333(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda333" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda333, env) {
  // ((close _V0loop_lambda334) (bruijn ##k.3033 0 0) (##inline ##sys.cdr (bruijn ##expr.66 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda334, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda332(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda332" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda332, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.66 0 1)) ((close _V0loop_lambda333) (bruijn ##k.3028 0 0) (##inline ##sys.car (bruijn ##expr.66 0 1))) ((bruijn ##k.3028 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda333, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k332(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k332" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k332, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.63 10 1) (bruijn ##k.3021 3 0) (bruijn ##expr.65 8 1) (bruijn ##x.3026 1 0) (bruijn ##x.3027 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 8, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k332, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k331(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k331" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k331, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 23 14) (close _V0loop_k332) (bruijn ##vals.62 7 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k332, env)}),
      VGetArg(env, 7, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k331, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k330(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k330" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k330, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 22 14) (close _V0loop_k331) (bruijn ##xs.61 6 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k331, env)}),
      VGetArg(env, 6, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k330, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda331(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda331" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda331, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda332) (close _V0loop_k330) (##inline ##sys.car (bruijn ##expr.65 5 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda332, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k330, env)}),
      VInlineCar(
VGetArg(env, 5, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda331, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda330(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda330" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda330, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 20 13) (bruijn ##k.3019 0 0) (close _V0loop_lambda331))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda331, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda330, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k329(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k329" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k329, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 19 12) (bruijn ##k.3014 3 0) (close _V0loop_lambda330) (bruijn loop 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 12)),
      env->up->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda330, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k329, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k328(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k328" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k328, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.63 4 1) (close _V0loop_k329) (bruijn ##expr.65 2 1) (bruijn ##x.3062 1 0) (bruijn ##x.3063 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k329, env)}),
      env->up->up->vars[1],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k328, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k327(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k327" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k327, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 17 14) (close _V0loop_k328) (bruijn ##vals.62 1 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k328, env)}),
      env->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0loop_k327, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda341(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda341" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda341, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.67 1 1))) ((bruijn ##k.64 4 1) (bruijn ##k.3040 0 0) (##inline ##sys.cdr (bruijn ##expr.65 6 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.61 6 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.62 6 3))) ((bruijn ##k.3040 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 6, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 6, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda340(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda340" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda340, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.67 0 1)) ((close _V0loop_lambda341) (bruijn ##k.3035 0 0) (##inline ##sys.car (bruijn ##expr.67 0 1))) ((bruijn ##k.3035 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda341, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda339(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda339" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda339, env) {
  // ((close _V0loop_lambda340) (bruijn ##k.3033 0 0) (##inline ##sys.cdr (bruijn ##expr.66 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda340, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda338(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda338" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda338, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.66 0 1)) ((close _V0loop_lambda339) (bruijn ##k.3028 0 0) (##inline ##sys.car (bruijn ##expr.66 0 1))) ((bruijn ##k.3028 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda339, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k335(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k335" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k335, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.63 7 1) (bruijn ##k.3021 3 0) (bruijn ##expr.65 5 1) (bruijn ##x.3026 1 0) (bruijn ##x.3027 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 5, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k335, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k334(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k334" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k334, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 20 14) (close _V0loop_k335) (bruijn ##vals.62 4 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k335, env)}),
      VGetArg(env, 4, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k334, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k333(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k333" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k333, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 19 14) (close _V0loop_k334) (bruijn ##xs.61 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k334, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k333, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda337(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda337" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda337, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda338) (close _V0loop_k333) (##inline ##sys.car (bruijn ##expr.65 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda338, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k333, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda337, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda336(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda336" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda336, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 17 13) (bruijn ##k.3019 0 0) (close _V0loop_lambda337))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda337, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda336, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda329(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda329" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda329, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.65 0 1))) ((bruijn reverse 16 14) (close _V0loop_k327) (bruijn ##xs.61 0 2)) ((bruijn call-with-values 16 12) (bruijn ##k.3014 0 0) (close _V0loop_lambda336) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k327, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda336, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda329, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_lambda328(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda328" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda328, env) {
  // (set! (close _V0expand__let_k326) (bruijn loop 0 1) (close _V0loop_lambda329))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_k326, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda329, env)})
    );
 }
}
static void _V0expand__let_lambda327(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda327" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda327, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__let_lambda328) (bruijn ##k.3007 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__let_lambda328, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0expand__let_lambda327, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_lambda326(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda326" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda326, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 13 13) (bruijn ##k.3005 0 0) (close _V0expand__let_lambda327))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_lambda327, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__let_lambda326, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_k336(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_k336" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_k336, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.57 6 1) (bruijn ##k.3072 1 0) (bruijn ##x.3074 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__let_k336, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_lambda343(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda343" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda343, env) {
  // ((bruijn expand-syntax 13 9) (close _V0expand__let_k336) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 1 2) (bruijn body 0 1))) (bruijn vals 1 3)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_k336, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[2],
      env->vars[1]
    )

    )
,
      env->up->vars[3]
    )

    );
 }
}
static void _V0expand__let_lambda342(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda342" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda342, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0expand__let_lambda343) (bruijn ##k.3067 0 0) (##inline ##sys.cdr (bruijn ##expr.59 2 1))) ((bruijn ##k.3067 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__let_lambda343, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__let_lambda342, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_lambda325(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda325" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda325, env) {
  // ((bruijn call-with-values 12 12) (bruijn ##k.3003 0 0) (close _V0expand__let_lambda326) (close _V0expand__let_lambda342))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_lambda326, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_lambda342, env)})
    );
 }
}
static void _V0expand__let_lambda324(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda324" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda324, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.59 0 1)) ((close _V0expand__let_lambda325) (bruijn ##k.2998 0 0) (##inline ##sys.car (bruijn ##expr.59 0 1))) ((bruijn ##k.2998 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__let_lambda325, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__let_k338(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_k338" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_k338, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.2913 1 0) (bruijn ##expr.70 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL,
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0expand__let_k338, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda357(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda357" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda357, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.77 1 1))) ((bruijn ##k.74 4 1) (bruijn ##k.2944 0 0) (##inline ##sys.cdr (bruijn ##expr.75 9 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.71 9 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.72 9 3))) ((bruijn ##k.2944 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 9, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 9, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 9, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda356(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda356" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda356, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.77 0 1)) ((close _V0loop_lambda357) (bruijn ##k.2939 0 0) (##inline ##sys.car (bruijn ##expr.77 0 1))) ((bruijn ##k.2939 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda357, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda355(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda355" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda355, env) {
  // ((close _V0loop_lambda356) (bruijn ##k.2937 0 0) (##inline ##sys.cdr (bruijn ##expr.76 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda356, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda354(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda354" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda354, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 1)) ((close _V0loop_lambda355) (bruijn ##k.2932 0 0) (##inline ##sys.car (bruijn ##expr.76 0 1))) ((bruijn ##k.2932 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda355, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k344(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k344" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k344, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.73 10 1) (bruijn ##k.2925 3 0) (bruijn ##expr.75 8 1) (bruijn ##x.2930 1 0) (bruijn ##x.2931 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 8, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k344, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k343(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k343" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k343, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 26 14) (close _V0loop_k344) (bruijn ##vals.72 7 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k344, env)}),
      VGetArg(env, 7, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k343, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k342(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k342" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k342, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 25 14) (close _V0loop_k343) (bruijn ##xs.71 6 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k343, env)}),
      VGetArg(env, 6, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k342, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda353(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda353" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda353, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda354) (close _V0loop_k342) (##inline ##sys.car (bruijn ##expr.75 5 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda354, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k342, env)}),
      VInlineCar(
VGetArg(env, 5, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda353, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda352(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda352" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda352, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 23 13) (bruijn ##k.2923 0 0) (close _V0loop_lambda353))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda353, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda352, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k341(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k341" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k341, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 22 12) (bruijn ##k.2918 3 0) (close _V0loop_lambda352) (bruijn loop 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 12)),
      env->up->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda352, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k341, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k340(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k340" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k340, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.73 4 1) (close _V0loop_k341) (bruijn ##expr.75 2 1) (bruijn ##x.2966 1 0) (bruijn ##x.2967 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k341, env)}),
      env->up->up->vars[1],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k340, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k339(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k339" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k339, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 20 14) (close _V0loop_k340) (bruijn ##vals.72 1 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k340, env)}),
      env->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0loop_k339, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda363(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda363" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda363, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.77 1 1))) ((bruijn ##k.74 4 1) (bruijn ##k.2944 0 0) (##inline ##sys.cdr (bruijn ##expr.75 6 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.71 6 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.72 6 3))) ((bruijn ##k.2944 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 6, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 6, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda362(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda362" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda362, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.77 0 1)) ((close _V0loop_lambda363) (bruijn ##k.2939 0 0) (##inline ##sys.car (bruijn ##expr.77 0 1))) ((bruijn ##k.2939 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda363, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda361(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda361" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda361, env) {
  // ((close _V0loop_lambda362) (bruijn ##k.2937 0 0) (##inline ##sys.cdr (bruijn ##expr.76 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda362, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda360(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda360" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda360, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 1)) ((close _V0loop_lambda361) (bruijn ##k.2932 0 0) (##inline ##sys.car (bruijn ##expr.76 0 1))) ((bruijn ##k.2932 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda361, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k347(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k347" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k347, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.73 7 1) (bruijn ##k.2925 3 0) (bruijn ##expr.75 5 1) (bruijn ##x.2930 1 0) (bruijn ##x.2931 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 5, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k347, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k346(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k346" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k346, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 23 14) (close _V0loop_k347) (bruijn ##vals.72 4 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k347, env)}),
      VGetArg(env, 4, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k346, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k345(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k345" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k345, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 22 14) (close _V0loop_k346) (bruijn ##xs.71 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k346, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k345, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda359(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda359" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda359, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda360) (close _V0loop_k345) (##inline ##sys.car (bruijn ##expr.75 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda360, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k345, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda359, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda358(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda358" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda358, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 20 13) (bruijn ##k.2923 0 0) (close _V0loop_lambda359))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda359, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda358, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda351(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda351" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda351, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.75 0 1))) ((bruijn reverse 19 14) (close _V0loop_k339) (bruijn ##xs.71 0 2)) ((bruijn call-with-values 19 12) (bruijn ##k.2918 0 0) (close _V0loop_lambda358) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k339, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda358, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda351, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_lambda350(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda350" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda350, env) {
  // (set! (close _V0expand__let_k338) (bruijn loop 0 1) (close _V0loop_lambda351))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_k338, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda351, env)})
    );
 }
}
static void _V0expand__let_lambda349(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda349" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda349, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__let_lambda350) (bruijn ##k.2911 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__let_lambda350, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0expand__let_lambda349, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_lambda348(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda348" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda348, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 16 13) (bruijn ##k.2909 0 0) (close _V0expand__let_lambda349))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_lambda349, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__let_lambda348, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_k348(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_k348" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_k348, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.57 9 1) (bruijn ##k.2976 1 0) (bruijn ##x.2978 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__let_k348, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_lambda365(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda365" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda365, env) {
  // ((bruijn expand-syntax 16 9) (close _V0expand__let_k348) (##inline ##sys.cons (quote letrec) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn loop 4 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 1 2) (bruijn body 0 1))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (bruijn loop 4 1) (bruijn vals 1 3)) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_k348, env)}),
      VInlineCons(
VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(env, 4, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[2],
      env->vars[1]
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
VGetArg(env, 4, 1),
      env->up->vars[3]
    )
,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__let_lambda364(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda364" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda364, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0expand__let_lambda365) (bruijn ##k.2971 0 0) (##inline ##sys.cdr (bruijn ##expr.69 2 1))) ((bruijn ##k.2971 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__let_lambda365, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__let_lambda364, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_lambda347(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda347" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda347, env) {
  // ((bruijn call-with-values 15 12) (bruijn ##k.2907 0 0) (close _V0expand__let_lambda348) (close _V0expand__let_lambda364))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_lambda348, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_lambda364, env)})
    );
 }
}
static void _V0expand__let_lambda346(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda346" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda346, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 1)) ((close _V0expand__let_lambda347) (bruijn ##k.2902 0 0) (##inline ##sys.car (bruijn ##expr.69 0 1))) ((bruijn ##k.2902 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__let_lambda347, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__let_lambda345(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda345" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda345, env) {
  // ((close _V0expand__let_lambda346) (bruijn ##k.2900 0 0) (##inline ##sys.cdr (bruijn ##expr.68 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__let_lambda346, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__let_lambda344(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda344" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda344, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.68 0 1)) ((close _V0expand__let_lambda345) (bruijn ##k.2895 0 0) (##inline ##sys.car (bruijn ##expr.68 0 1))) ((bruijn ##k.2895 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__let_lambda345, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__let_k351(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_k351" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_k351, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 14 15) (bruijn ##k.2882 4 0) (##string ##string.4150))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 15)),
      VGetArg(env, 4, 0),
      VEncodePointer(&_V10string_D4150.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0expand__let_k351, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_k350(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_k350" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_k350, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.57 4 1) (close _V0expand__let_k351) (bruijn ##x.2893 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_k351, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__let_k350, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_k349(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_k349" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_k349, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 12 15) (close _V0expand__let_k350) (##string ##string.4151) (##inline ##sys.cons (quote let) (bruijn expr 4 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_k350, env)}),
      VEncodePointer(&_V10string_D4151.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0expand__let_k349, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_k337(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_k337" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_k337, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__let_lambda344) (close _V0expand__let_k349) (bruijn ##input.58 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__let_lambda344, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_k349, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__let_k337, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_lambda323(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda323" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda323, env) {
  // ((close _V0expand__let_lambda324) (close _V0expand__let_k337) (bruijn ##input.58 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__let_lambda324, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_k337, env)}),
      env->vars[1]
    );
 }
}
static void _V0expand__let_lambda322(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda322" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda322, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__let_lambda323) (bruijn ##k.2880 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__let_lambda323, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__let_lambda322, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__let_lambda321(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__let_lambda321" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__let_lambda321, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 8 13) (bruijn ##k.2878 0 0) (close _V0expand__let_lambda322))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_lambda322, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__let_lambda321, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void expand_k45(VEnv * env) {
 static VDebugInfo dbg = { "expand_k45" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k45, env) {
 if (env->num_vars == 1) {
  // (set! (close expand_k46) (bruijn expand-let 6 7) (close _V0expand__let_lambda321))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k46, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__let_lambda321, env)})
    );
 } else {
  VError("Not enough arguments to expand_k45, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_k355(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k355" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k355, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.52 9 1) (bruijn ##k.3139 4 0) (##inline ##sys.cons (bruijn args 6 1) (##inline ##sys.cons (bruijn ##x.3149 0 0) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VGetArg(env, 4, 0),
      VInlineCons(
VGetArg(env, 6, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_k355, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_k354(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k354" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k354, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 15 9) (close _V0expand__lambda_k355) (bruijn body 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k355, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_k354, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_k356(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k356" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k356, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.52 8 1) (bruijn ##k.3139 3 0) (##inline ##sys.cons (bruijn args 5 1) (##inline ##sys.cons (bruijn ##x.3149 0 0) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->up->up->vars[0],
      VInlineCons(
VGetArg(env, 5, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_k356, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_k353(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k353" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k353, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3150 0 0) ((bruijn error 15 15) (close _V0expand__lambda_k354) (##string ##string.4152) (bruijn args 4 1)) ((bruijn expand-syntax 14 9) (close _V0expand__lambda_k356) (bruijn body 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k354, env)}),
      VEncodePointer(&_V10string_D4152.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k356, env)}),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0expand__lambda_k353, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_k352(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k352" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k352, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 14 9) (close _V0expand__lambda_k353) (bruijn ##x.3155 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k353, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_k352, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_lambda372(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda372" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_lambda372, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.55 1 1))) ((bruijn valid-args? 12 5) (close _V0expand__lambda_k352) (bruijn args 2 1)) ((bruijn ##k.3139 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k352, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__lambda_lambda371(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda371" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_lambda371, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.55 0 1)) ((close _V0expand__lambda_lambda372) (bruijn ##k.3134 0 0) (##inline ##sys.car (bruijn ##expr.55 0 1))) ((bruijn ##k.3134 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__lambda_lambda372, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__lambda_lambda370(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda370" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_lambda370, env) {
  // ((close _V0expand__lambda_lambda371) (bruijn ##k.3132 0 0) (##inline ##sys.cdr (bruijn ##expr.54 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__lambda_lambda371, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__lambda_lambda369(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda369" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_lambda369, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.54 0 1)) ((close _V0expand__lambda_lambda370) (bruijn ##k.3127 0 0) (##inline ##sys.car (bruijn ##expr.54 0 1))) ((bruijn ##k.3127 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__lambda_lambda370, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__lambda_k362(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k362" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k362, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.52 10 1) (bruijn ##k.3108 5 0) (bruijn ##x.3113 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_k362, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_k361(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k361" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k361, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-lambda 16 6) (close _V0expand__lambda_k362) (##inline ##sys.cons (bruijn args 5 1) (##inline ##sys.cons (bruijn ##x.3116 0 0) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k362, env)}),
      VInlineCons(
VGetArg(env, 5, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_k361, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_k360(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k360" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k360, env) {
 if (env->num_vars == 1) {
  // ((bruijn collect-defines 15 1) (close _V0expand__lambda_k361) (bruijn body 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k361, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_k360, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_k364(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k364" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k364, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.52 9 1) (bruijn ##k.3108 4 0) (bruijn ##x.3113 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_k364, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_k363(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k363" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k363, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-lambda 15 6) (close _V0expand__lambda_k364) (##inline ##sys.cons (bruijn args 4 1) (##inline ##sys.cons (bruijn ##x.3116 0 0) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k364, env)}),
      VInlineCons(
VGetArg(env, 4, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_k363, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_k359(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k359" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k359, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3117 0 0) ((bruijn error 15 15) (close _V0expand__lambda_k360) (##string ##string.4152) (bruijn args 3 1)) ((bruijn collect-defines 14 1) (close _V0expand__lambda_k363) (bruijn body 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k360, env)}),
      VEncodePointer(&_V10string_D4152.sym, VPOINTER_OTHER),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k363, env)}),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0expand__lambda_k359, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_k358(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k358" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k358, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 14 9) (close _V0expand__lambda_k359) (bruijn ##x.3122 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k359, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_k358, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_lambda375(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda375" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_lambda375, env) {
  // ((bruijn valid-args? 12 5) (close _V0expand__lambda_k358) (bruijn args 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k358, env)}),
      env->up->vars[1]
    );
 }
}
static void _V0expand__lambda_lambda374(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda374" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_lambda374, env) {
  // ((close _V0expand__lambda_lambda375) (bruijn ##k.3106 0 0) (##inline ##sys.cdr (bruijn ##expr.56 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__lambda_lambda375, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__lambda_lambda373(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda373" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_lambda373, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 1)) ((close _V0expand__lambda_lambda374) (bruijn ##k.3101 0 0) (##inline ##sys.car (bruijn ##expr.56 0 1))) ((bruijn ##k.3101 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__lambda_lambda374, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__lambda_k367(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k367" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k367, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 13 15) (bruijn ##k.3088 4 0) (##string ##string.4150))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 15)),
      VGetArg(env, 4, 0),
      VEncodePointer(&_V10string_D4150.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_k367, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_k366(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k366" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k366, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.52 4 1) (close _V0expand__lambda_k367) (bruijn ##x.3099 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k367, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_k366, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_k365(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k365" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k365, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 11 15) (close _V0expand__lambda_k366) (##string ##string.4153) (##inline ##sys.cons (quote lambda) (bruijn expr 4 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k366, env)}),
      VEncodePointer(&_V10string_D4153.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VGetArg(env, 4, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_k365, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_k357(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_k357" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_k357, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__lambda_lambda373) (close _V0expand__lambda_k365) (bruijn ##input.53 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__lambda_lambda373, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k365, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_k357, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_lambda368(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda368" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_lambda368, env) {
  // ((close _V0expand__lambda_lambda369) (close _V0expand__lambda_k357) (bruijn ##input.53 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__lambda_lambda369, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_k357, env)}),
      env->vars[1]
    );
 }
}
static void _V0expand__lambda_lambda367(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda367" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_lambda367, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__lambda_lambda368) (bruijn ##k.3086 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__lambda_lambda368, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_lambda367, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__lambda_lambda366(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda366" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__lambda_lambda366, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 7 13) (bruijn ##k.3084 0 0) (close _V0expand__lambda_lambda367))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_lambda367, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__lambda_lambda366, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void expand_k44(VEnv * env) {
 static VDebugInfo dbg = { "expand_k44" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k44, env) {
 if (env->num_vars == 1) {
  // (set! (close expand_k45) (bruijn expand-lambda 5 6) (close _V0expand__lambda_lambda366))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k45, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__lambda_lambda366, env)})
    );
 } else {
  VError("Not enough arguments to expand_k44, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0valid__args_Q_k376(VEnv * env) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k376" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0valid__args_Q_k376, env) {
 if (env->num_vars == 1) {
  // ((bruijn valid-args? 14 5) (bruijn ##k.3166 9 0) (bruijn ##x.3180 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 5)),
      VGetArg(env, 9, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0valid__args_Q_k376, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0valid__args_Q_k375(VEnv * env) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k375" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0valid__args_Q_k375, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3183 0 0) ((bruijn cdr 14 2) (close _V0valid__args_Q_k376) (bruijn args 8 1)) ((bruijn ##k.3166 8 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0valid__args_Q_k376, env)}),
      VGetArg(env, 8, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0valid__args_Q_k375, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0valid__args_Q_k374(VEnv * env) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k374" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0valid__args_Q_k374, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 13 15) (close _V0valid__args_Q_k375) (##string ##string.4154) (bruijn ##x.3184 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0valid__args_Q_k375, env)}),
      VEncodePointer(&_V10string_D4154.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0valid__args_Q_k374, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0valid__args_Q_k377(VEnv * env) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k377" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0valid__args_Q_k377, env) {
 if (env->num_vars == 1) {
  // ((bruijn valid-args? 12 5) (bruijn ##k.3166 7 0) (bruijn ##x.3180 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 5)),
      VGetArg(env, 7, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0valid__args_Q_k377, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0valid__args_Q_k373(VEnv * env) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k373" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0valid__args_Q_k373, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3181 0 0) ((bruijn car 12 22) (close _V0valid__args_Q_k374) (bruijn args 6 1)) ((bruijn cdr 12 2) (close _V0valid__args_Q_k377) (bruijn args 6 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0valid__args_Q_k374, env)}),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0valid__args_Q_k377, env)}),
      VGetArg(env, 6, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0valid__args_Q_k373, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0valid__args_Q_k372(VEnv * env) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k372" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0valid__args_Q_k372, env) {
 if (env->num_vars == 1) {
  // ((bruijn memtail 10 4) (close _V0valid__args_Q_k373) (bruijn ##x.3187 1 0) (bruijn ##x.3188 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0valid__args_Q_k373, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0valid__args_Q_k372, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0valid__args_Q_k371(VEnv * env) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k371" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0valid__args_Q_k371, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 10 2) (close _V0valid__args_Q_k372) (bruijn args 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0valid__args_Q_k372, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0valid__args_Q_k371, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0valid__args_Q_k370(VEnv * env) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k370" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0valid__args_Q_k370, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3174 0 0) ((bruijn car 9 22) (close _V0valid__args_Q_k371) (bruijn args 3 1)) ((bruijn ##k.3166 3 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0valid__args_Q_k371, env)}),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0valid__args_Q_k370, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0valid__args_Q_k369(VEnv * env) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k369" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0valid__args_Q_k369, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3171 0 0) ((bruijn ##k.3166 2 0) (bruijn ##x.3171 0 0)) ((bruijn pair? 8 21) (close _V0valid__args_Q_k370) (bruijn args 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      env->vars[0]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0valid__args_Q_k370, env)}),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0valid__args_Q_k369, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0valid__args_Q_k368(VEnv * env) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k368" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0valid__args_Q_k368, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3168 0 0) ((bruijn ##k.3166 1 0) (bruijn ##x.3168 0 0)) ((bruijn null? 7 20) (close _V0valid__args_Q_k369) (bruijn args 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->vars[0]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0valid__args_Q_k369, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0valid__args_Q_k368, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0valid__args_Q_lambda376(VEnv * env) {
 static VDebugInfo dbg = { "_V0valid__args_Q_lambda376" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0valid__args_Q_lambda376, env) {
 if (env->num_vars == 2) {
  // ((bruijn symbol? 6 10) (close _V0valid__args_Q_k368) (bruijn args 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0valid__args_Q_k368, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0valid__args_Q_lambda376, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void expand_k43(VEnv * env) {
 static VDebugInfo dbg = { "expand_k43" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k43, env) {
 if (env->num_vars == 1) {
  // (set! (close expand_k44) (bruijn valid-args? 4 5) (close _V0valid__args_Q_lambda376))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k44, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0valid__args_Q_lambda376, env)})
    );
 } else {
  VError("Not enough arguments to expand_k43, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memtail_k381(VEnv * env) {
 static VDebugInfo dbg = { "_V0memtail_k381" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0memtail_k381, env) {
 if (env->num_vars == 1) {
  // ((bruijn memtail 8 4) (bruijn ##k.3189 4 0) (bruijn x 4 1) (bruijn ##x.3197 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 4)),
      VGetArg(env, 4, 0),
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0memtail_k381, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memtail_k380(VEnv * env) {
 static VDebugInfo dbg = { "_V0memtail_k380" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0memtail_k380, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3194 0 0) ((bruijn ##k.3189 3 0) (bruijn ##x.3194 0 0)) ((bruijn cdr 8 2) (close _V0memtail_k381) (bruijn args 3 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      env->vars[0]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memtail_k381, env)}),
      env->up->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0memtail_k380, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memtail_k379(VEnv * env) {
 static VDebugInfo dbg = { "_V0memtail_k379" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0memtail_k379, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 7 5) (close _V0memtail_k380) (bruijn x 2 1) (bruijn ##x.3198 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memtail_k380, env)}),
      env->up->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0memtail_k379, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memtail_k378(VEnv * env) {
 static VDebugInfo dbg = { "_V0memtail_k378" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0memtail_k378, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3191 0 0) ((bruijn car 6 22) (close _V0memtail_k379) (bruijn args 1 2)) ((bruijn eqv? 6 5) (bruijn ##k.3189 1 0) (bruijn x 1 1) (bruijn args 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memtail_k379, env)}),
      env->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 5)),
      env->up->vars[0],
      env->up->vars[1],
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0memtail_k378, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0memtail_lambda377(VEnv * env) {
 static VDebugInfo dbg = { "_V0memtail_lambda377" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0memtail_lambda377, env) {
 if (env->num_vars == 3) {
  // ((bruijn pair? 5 21) (close _V0memtail_k378) (bruijn args 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 21)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memtail_k378, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0memtail_lambda377, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void expand_k42(VEnv * env) {
 static VDebugInfo dbg = { "expand_k42" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k42, env) {
 if (env->num_vars == 1) {
  // (set! (close expand_k43) (bruijn memtail 3 4) (close _V0memtail_lambda377))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k43, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0memtail_lambda377, env)})
    );
 } else {
  VError("Not enough arguments to expand_k42, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k410(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k410" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k410, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3223 13 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn libname 13 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn ##x.3236 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 0)),
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 13, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
env->vars[0],
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
 } else {
  VError("Not enough arguments to _V0expand__library_k410, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k409(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k409" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k409, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 33 9) (close _V0expand__library_k410) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.function) (##inline ##sys.cons (quote (##string ##string.4155)) (quote ()))) (##inline ##sys.cons (bruijn libname 12 1) (bruijn ##x.3256 2 0))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (bruijn ##x.3243 1 0) (bruijn ##x.3244 0 0))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k410, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4155.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
VGetArg(env, 12, 1),
      env->up->up->vars[0]
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
env->up->vars[0],
      env->vars[0]
    )

    )
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_k409, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k408(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k408" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k408, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 33 25) (close _V0expand__library_k409) (bruijn basic-library 28 5))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k409, env)}),
      VGetArg(env, 28, 5)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k408, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k411(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k411" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k411, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3245 1 0) (##inline ##sys.cons (bruijn f 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (bruijn ##x.3250 0 0) (quote ()))) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_k411, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda381(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda381" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda381, env) {
 if (env->num_vars == 2) {
  // ((bruijn list 33 19) (close _V0expand__library_k411) (quote quote) (bruijn f 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k411, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_lambda381, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k407(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k407" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k407, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 32 11) (close _V0expand__library_k408) (close _V0expand__library_lambda381) (bruijn free-vars 27 6))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k408, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_lambda381, env)}),
      VGetArg(env, 27, 6)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k407, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda382(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda382" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda382, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.3257 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.function) (##inline ##sys.cons (quote (##string ##string.4145)) (quote ()))) (##inline ##sys.cons (bruijn i 0 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4145.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
env->vars[1],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_lambda382, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k406(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k406" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k406, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 31 11) (close _V0expand__library_k407) (close _V0expand__library_lambda382) (bruijn imports 26 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k407, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_lambda382, env)}),
      VGetArg(env, 26, 3)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k406, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k405(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k405" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k405, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 30 15) (close _V0expand__library_k406) (##string ##string.4156) (bruijn ##x.3266 0 0) (bruijn free-vars 25 6))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k406, env)}),
      VEncodePointer(&_V10string_D4156.sym, VPOINTER_OTHER),
      env->vars[0],
      VGetArg(env, 25, 6)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k405, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k415(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k415" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k415, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3223 11 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn libname 11 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn ##x.3236 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 0)),
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 11, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
env->vars[0],
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
 } else {
  VError("Not enough arguments to _V0expand__library_k415, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k414(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k414" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k414, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 31 9) (close _V0expand__library_k415) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.function) (##inline ##sys.cons (quote (##string ##string.4155)) (quote ()))) (##inline ##sys.cons (bruijn libname 10 1) (bruijn ##x.3256 2 0))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (bruijn ##x.3243 1 0) (bruijn ##x.3244 0 0))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k415, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4155.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
VGetArg(env, 10, 1),
      env->up->up->vars[0]
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
env->up->vars[0],
      env->vars[0]
    )

    )
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_k414, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k413(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k413" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k413, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 31 25) (close _V0expand__library_k414) (bruijn basic-library 26 5))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k414, env)}),
      VGetArg(env, 26, 5)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k413, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k416(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k416" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k416, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3245 1 0) (##inline ##sys.cons (bruijn f 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (bruijn ##x.3250 0 0) (quote ()))) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_k416, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda383(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda383" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda383, env) {
 if (env->num_vars == 2) {
  // ((bruijn list 31 19) (close _V0expand__library_k416) (quote quote) (bruijn f 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k416, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_lambda383, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k412(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k412" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k412, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 30 11) (close _V0expand__library_k413) (close _V0expand__library_lambda383) (bruijn free-vars 25 6))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k413, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_lambda383, env)}),
      VGetArg(env, 25, 6)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k412, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda384(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda384" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda384, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.3257 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.function) (##inline ##sys.cons (quote (##string ##string.4145)) (quote ()))) (##inline ##sys.cons (bruijn i 0 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4145.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
env->vars[1],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_lambda384, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k404(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k404" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k404, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3271 0 0) ((bruijn cadr 29 26) (close _V0expand__library_k405) (bruijn lib 25 1)) ((bruijn map 29 11) (close _V0expand__library_k412) (close _V0expand__library_lambda384) (bruijn imports 24 3)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k405, env)}),
      VGetArg(env, 25, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k412, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_lambda384, env)}),
      VGetArg(env, 24, 3)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library_k404, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k403(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k403" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k403, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 28 9) (close _V0expand__library_k404) (bruijn ##x.3272 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k404, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k403, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k420(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k420" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k420, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3223 9 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn libname 9 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn ##x.3236 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 0)),
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 9, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
env->vars[0],
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
 } else {
  VError("Not enough arguments to _V0expand__library_k420, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k419(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k419" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k419, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 29 9) (close _V0expand__library_k420) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.function) (##inline ##sys.cons (quote (##string ##string.4155)) (quote ()))) (##inline ##sys.cons (bruijn libname 8 1) (bruijn ##x.3256 2 0))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (bruijn ##x.3243 1 0) (bruijn ##x.3244 0 0))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k420, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4155.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
VGetArg(env, 8, 1),
      env->up->up->vars[0]
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
env->up->vars[0],
      env->vars[0]
    )

    )
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_k419, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k418(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k418" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k418, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 29 25) (close _V0expand__library_k419) (bruijn basic-library 24 5))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k419, env)}),
      VGetArg(env, 24, 5)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k418, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k421(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k421" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k421, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3245 1 0) (##inline ##sys.cons (bruijn f 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (bruijn ##x.3250 0 0) (quote ()))) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_k421, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda385(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda385" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda385, env) {
 if (env->num_vars == 2) {
  // ((bruijn list 29 19) (close _V0expand__library_k421) (quote quote) (bruijn f 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k421, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_lambda385, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k417(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k417" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k417, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 28 11) (close _V0expand__library_k418) (close _V0expand__library_lambda385) (bruijn free-vars 23 6))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k418, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_lambda385, env)}),
      VGetArg(env, 23, 6)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k417, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda386(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda386" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda386, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.3257 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.function) (##inline ##sys.cons (quote (##string ##string.4145)) (quote ()))) (##inline ##sys.cons (bruijn i 0 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4145.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
env->vars[1],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_lambda386, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k402(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k402" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k402, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3269 0 0) ((bruijn null? 27 20) (close _V0expand__library_k403) (bruijn free-vars 22 6)) ((bruijn map 27 11) (close _V0expand__library_k417) (close _V0expand__library_lambda386) (bruijn imports 22 3)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k403, env)}),
      VGetArg(env, 22, 6)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k417, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_lambda386, env)}),
      VGetArg(env, 22, 3)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library_k402, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k401(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k401" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k401, env) {
 if (env->num_vars == 1) {
  // ((bruijn null? 26 20) (close _V0expand__library_k402) (bruijn imports 21 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k402, env)}),
      VGetArg(env, 21, 3)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k401, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k430(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k430" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k430, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3223 12 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn libname 12 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn ##x.3236 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 0)),
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 12, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
env->vars[0],
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
 } else {
  VError("Not enough arguments to _V0expand__library_k430, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k429(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k429" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k429, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 32 9) (close _V0expand__library_k430) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.function) (##inline ##sys.cons (quote (##string ##string.4155)) (quote ()))) (##inline ##sys.cons (bruijn libname 11 1) (bruijn ##x.3256 2 0))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (bruijn ##x.3243 1 0) (bruijn ##x.3244 0 0))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k430, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4155.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
VGetArg(env, 11, 1),
      env->up->up->vars[0]
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
env->up->vars[0],
      env->vars[0]
    )

    )
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_k429, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k428(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k428" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k428, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 32 25) (close _V0expand__library_k429) (bruijn basic-library 27 5))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k429, env)}),
      VGetArg(env, 27, 5)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k428, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k431(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k431" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k431, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3245 1 0) (##inline ##sys.cons (bruijn f 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (bruijn ##x.3250 0 0) (quote ()))) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_k431, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda387(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda387" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda387, env) {
 if (env->num_vars == 2) {
  // ((bruijn list 32 19) (close _V0expand__library_k431) (quote quote) (bruijn f 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k431, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_lambda387, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k427(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k427" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k427, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 31 11) (close _V0expand__library_k428) (close _V0expand__library_lambda387) (bruijn free-vars 26 6))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k428, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_lambda387, env)}),
      VGetArg(env, 26, 6)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k427, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda388(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda388" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda388, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.3257 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.function) (##inline ##sys.cons (quote (##string ##string.4145)) (quote ()))) (##inline ##sys.cons (bruijn i 0 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4145.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
env->vars[1],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_lambda388, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k426(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k426" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k426, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 30 11) (close _V0expand__library_k427) (close _V0expand__library_lambda388) (bruijn imports 25 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k427, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_lambda388, env)}),
      VGetArg(env, 25, 3)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k426, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k425(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k425" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k425, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 29 15) (close _V0expand__library_k426) (##string ##string.4156) (bruijn ##x.3266 0 0) (bruijn free-vars 24 6))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k426, env)}),
      VEncodePointer(&_V10string_D4156.sym, VPOINTER_OTHER),
      env->vars[0],
      VGetArg(env, 24, 6)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k425, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k435(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k435" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k435, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3223 10 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn libname 10 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn ##x.3236 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 0)),
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 10, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
env->vars[0],
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
 } else {
  VError("Not enough arguments to _V0expand__library_k435, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k434(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k434" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k434, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 30 9) (close _V0expand__library_k435) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.function) (##inline ##sys.cons (quote (##string ##string.4155)) (quote ()))) (##inline ##sys.cons (bruijn libname 9 1) (bruijn ##x.3256 2 0))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (bruijn ##x.3243 1 0) (bruijn ##x.3244 0 0))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k435, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4155.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
VGetArg(env, 9, 1),
      env->up->up->vars[0]
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
env->up->vars[0],
      env->vars[0]
    )

    )
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_k434, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k433(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k433" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k433, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 30 25) (close _V0expand__library_k434) (bruijn basic-library 25 5))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k434, env)}),
      VGetArg(env, 25, 5)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k433, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k436(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k436" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k436, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3245 1 0) (##inline ##sys.cons (bruijn f 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (bruijn ##x.3250 0 0) (quote ()))) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_k436, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda389(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda389" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda389, env) {
 if (env->num_vars == 2) {
  // ((bruijn list 30 19) (close _V0expand__library_k436) (quote quote) (bruijn f 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k436, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_lambda389, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k432(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k432" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k432, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 29 11) (close _V0expand__library_k433) (close _V0expand__library_lambda389) (bruijn free-vars 24 6))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k433, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_lambda389, env)}),
      VGetArg(env, 24, 6)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k432, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda390(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda390" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda390, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.3257 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.function) (##inline ##sys.cons (quote (##string ##string.4145)) (quote ()))) (##inline ##sys.cons (bruijn i 0 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4145.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
env->vars[1],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_lambda390, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k424(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k424" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k424, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3271 0 0) ((bruijn cadr 28 26) (close _V0expand__library_k425) (bruijn lib 24 1)) ((bruijn map 28 11) (close _V0expand__library_k432) (close _V0expand__library_lambda390) (bruijn imports 23 3)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k425, env)}),
      VGetArg(env, 24, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k432, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_lambda390, env)}),
      VGetArg(env, 23, 3)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library_k424, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k423(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k423" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k423, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 27 9) (close _V0expand__library_k424) (bruijn ##x.3272 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k424, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k423, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k440(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k440" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k440, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3223 8 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn libname 8 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn ##x.3236 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 0)),
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 8, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
env->vars[0],
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
 } else {
  VError("Not enough arguments to _V0expand__library_k440, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k439(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k439" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k439, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 28 9) (close _V0expand__library_k440) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.function) (##inline ##sys.cons (quote (##string ##string.4155)) (quote ()))) (##inline ##sys.cons (bruijn libname 7 1) (bruijn ##x.3256 2 0))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (bruijn ##x.3243 1 0) (bruijn ##x.3244 0 0))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k440, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4155.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
VGetArg(env, 7, 1),
      env->up->up->vars[0]
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
env->up->vars[0],
      env->vars[0]
    )

    )
,
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_k439, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k438(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k438" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k438, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 28 25) (close _V0expand__library_k439) (bruijn basic-library 23 5))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k439, env)}),
      VGetArg(env, 23, 5)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k438, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k441(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k441" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k441, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.3245 1 0) (##inline ##sys.cons (bruijn f 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (bruijn ##x.3250 0 0) (quote ()))) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VInlineCons(
env->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dimport.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_k441, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda391(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda391" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda391, env) {
 if (env->num_vars == 2) {
  // ((bruijn list 28 19) (close _V0expand__library_k441) (quote quote) (bruijn f 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k441, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_lambda391, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k437(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k437" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k437, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 27 11) (close _V0expand__library_k438) (close _V0expand__library_lambda391) (bruijn free-vars 22 6))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k438, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_lambda391, env)}),
      VGetArg(env, 22, 6)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k437, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda392(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda392" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda392, env) {
 if (env->num_vars == 2) {
  // ((bruijn ##k.3257 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.function) (##inline ##sys.cons (quote (##string ##string.4145)) (quote ()))) (##inline ##sys.cons (bruijn i 0 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D4145.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VInlineCons(
env->vars[1],
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_lambda392, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k422(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k422" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k422, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3269 0 0) ((bruijn null? 26 20) (close _V0expand__library_k423) (bruijn free-vars 21 6)) ((bruijn map 26 11) (close _V0expand__library_k437) (close _V0expand__library_lambda392) (bruijn imports 21 3)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k423, env)}),
      VGetArg(env, 21, 6)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k437, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_lambda392, env)}),
      VGetArg(env, 21, 3)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library_k422, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k400(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k400" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k400, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3273 0 0) ((bruijn error 25 15) (close _V0expand__library_k401) (##string ##string.4157)) ((bruijn null? 25 20) (close _V0expand__library_k422) (bruijn imports 20 3)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k401, env)}),
      VEncodePointer(&_V10string_D4157.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k422, env)}),
      VGetArg(env, 20, 3)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library_k400, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k399(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k399" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k399, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 24 9) (close _V0expand__library_k400) (bruijn ##x.3278 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k400, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k399, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda393(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda393" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda393, env) {
 if (env->num_vars == 3) {
  // (if (bruijn a 0 1) ((bruijn ##k.3279 0 0) (bruijn b 0 2)) ((bruijn ##k.3279 0 0) #f))
if(VDecodeBool(
env->vars[1])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library_lambda393, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k398(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k398" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k398, env) {
 if (env->num_vars == 1) {
  // ((bruijn fold 23 24) (close _V0expand__library_k399) (close _V0expand__library_lambda393) #t (bruijn ##x.3283 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k399, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_lambda393, env)}),
      VEncodeBool(true),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k398, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda380(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda380" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda380, env) {
  // ((bruijn map 22 11) (close _V0expand__library_k398) (bruijn string? 22 18) (bruijn imports 17 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k398, env)}),
      VGetArg(env, 22, 18),
      VGetArg(env, 17, 3)
    );
 }
}
static void _V0expand__library_k397(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k397" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k397, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__library_lambda380) (bruijn ##k.3203 16 0) (bruijn ##x.3284 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library_lambda380, env)},
      VGetArg(env, 16, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k397, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k396(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k396" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k396, env) {
 if (env->num_vars == 1) {
  // ((bruijn mangle-library 20 17) (close _V0expand__library_k397) (bruijn ##x.3285 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 17)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k397, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k396, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k395(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k395" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k395, env) {
 if (env->num_vars == 1) {
  // ((bruijn cadr 19 26) (close _V0expand__library_k396) (bruijn lib 15 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k396, env)}),
      VGetArg(env, 15, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k395, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k394(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k394" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k394, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0expand__library_k395) (bruijn free-vars 13 6) (bruijn ##x.3286 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k395, env)}),
      VEncodeInt(13l), VEncodeInt(6l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k394, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k393(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k393" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k393, env) {
 if (env->num_vars == 1) {
  // ((bruijn free-variables 17 23) (close _V0expand__library_k394) (bruijn basic-library 12 5))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 23)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k394, env)}),
      VGetArg(env, 12, 5)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k393, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k392(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k392" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k392, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0expand__library_k393) (bruijn basic-library 11 5) (bruijn ##x.3287 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k393, env)}),
      VEncodeInt(11l), VEncodeInt(5l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k392, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k391(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k391" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k391, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 14 9) (close _V0expand__library_k392) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (bruijn ##x.3290 0 0))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k392, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      env->vars[0]
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library_k391, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k390(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k390" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k390, env) {
 if (env->num_vars == 1) {
  // ((bruijn append 14 3) (close _V0expand__library_k391) (bruijn ##x.3291 2 0) (bruijn ##x.3292 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k391, env)}),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k390, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k389(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k389" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k389, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 13 19) (close _V0expand__library_k390) (bruijn ##x.3293 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k390, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k389, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k388(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k388" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k388, env) {
 if (env->num_vars == 1) {
  // ((bruijn make-library-output 7 1) (close _V0expand__library_k389) (bruijn exports 7 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k389, env)}),
      VGetArg(env, 7, 2)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k388, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k387(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k387" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k387, env) {
 if (env->num_vars == 1) {
  // ((bruijn apply 11 16) (close _V0expand__library_k388) (bruijn append 11 3) (bruijn ##x.3294 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 16)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k388, env)}),
      VGetArg(env, 11, 3),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k387, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k386(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k386" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k386, env) {
 if (env->num_vars == 1) {
  // ((bruijn map 10 11) (close _V0expand__library_k387) (bruijn expand-library-expr 5 4) (bruijn ##x.3295 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k387, env)}),
      VGetArg(env, 5, 4),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k386, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k385(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k385" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k385, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 9 25) (close _V0expand__library_k386) (bruijn lib 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k386, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k385, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k445(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k445" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k445, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.33 7 1) (bruijn ##k.3602 3 0) (bruijn ##x.3607 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k445, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k444(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k444" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k444, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 16 19) (close _V0expand__library__expr_k445))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k445, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k444, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k443(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k443" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k443, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0expand__library__expr_k444) (bruijn exports 10 2) (bruijn ##x.3608 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k444, env)}),
      VEncodeInt(10l), VEncodeInt(2l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k443, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda398(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda398" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda398, env) {
  // ((bruijn append 14 3) (close _V0expand__library__expr_k443) (bruijn syms 0 1) (bruijn exports 9 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k443, env)}),
      env->vars[1],
      VGetArg(env, 9, 2)
    );
 }
}
static void _V0expand__library__expr_k442(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k442" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k442, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3599 0 0) ((close _V0expand__library__expr_lambda398) (bruijn ##k.3594 1 0) (##inline ##sys.cdr (bruijn ##expr.35 1 1))) ((bruijn ##k.3594 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda398, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k442, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda397(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda397" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda397, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.35 0 1)) ((bruijn equal? 12 7) (close _V0expand__library__expr_k442) (quote export) (##inline ##sys.car (bruijn ##expr.35 0 1))) ((bruijn ##k.3594 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k442, env)}),
      VEncodePointer(&_V0export.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k451(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k451" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k451, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.33 9 1) (bruijn ##k.3580 4 0) (bruijn ##x.3585 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k451, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k450(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k450" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k450, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 18 19) (close _V0expand__library__expr_k451))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k451, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k450, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k449(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k449" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k449, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0expand__library__expr_k450) (bruijn imports 12 3) (bruijn ##x.3586 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k450, env)}),
      VEncodeInt(12l), VEncodeInt(3l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k449, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k448(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k448" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k448, env) {
 if (env->num_vars == 1) {
  // ((bruijn append 16 3) (close _V0expand__library__expr_k449) (bruijn ##x.3587 0 0) (bruijn imports 11 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k449, env)}),
      env->vars[0],
      VGetArg(env, 11, 3)
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k448, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda400(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda400" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda400, env) {
  // ((bruijn map 15 11) (close _V0expand__library__expr_k448) (bruijn mangle-library 15 17) (bruijn libs 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k448, env)}),
      VGetArg(env, 15, 17),
      env->vars[1]
    );
 }
}
static void _V0expand__library__expr_k447(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k447" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k447, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3577 0 0) ((close _V0expand__library__expr_lambda400) (bruijn ##k.3572 1 0) (##inline ##sys.cdr (bruijn ##expr.36 1 1))) ((bruijn ##k.3572 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda400, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k447, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda399(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda399" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda399, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.36 0 1)) ((bruijn equal? 13 7) (close _V0expand__library__expr_k447) (quote import) (##inline ##sys.car (bruijn ##expr.36 0 1))) ((bruijn ##k.3572 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k447, env)}),
      VEncodePointer(&_V0import.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k454(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k454" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k454, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.33 11 1) (bruijn ##k.3550 1 0) (bruijn ##x.3552 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k454, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda406(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda406" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda406, env) {
  // ((bruijn expand-toplevel 19 8) (close _V0expand__library__expr_k454) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 2 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 1 1) (bruijn body 0 1))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k454, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[1],
      env->vars[1]
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
static void _V0expand__library__expr_lambda405(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda405" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda405, env) {
  // ((close _V0expand__library__expr_lambda406) (bruijn ##k.3548 0 0) (##inline ##sys.cdr (bruijn ##expr.38 3 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda406, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )

    );
 }
}
static void _V0expand__library__expr_lambda404(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda404" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda404, env) {
  // ((close _V0expand__library__expr_lambda405) (bruijn ##k.3546 0 0) (##inline ##sys.cdr (bruijn ##expr.39 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda405, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__library__expr_lambda403(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda403" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda403, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.39 0 1)) ((close _V0expand__library__expr_lambda404) (bruijn ##k.3541 0 0) (##inline ##sys.car (bruijn ##expr.39 0 1))) ((bruijn ##k.3541 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda404, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda402(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda402" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda402, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.38 0 1)) ((close _V0expand__library__expr_lambda403) (bruijn ##k.3536 0 0) (##inline ##sys.car (bruijn ##expr.38 0 1))) ((bruijn ##k.3536 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda403, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k453(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k453" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k453, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3533 0 0) ((close _V0expand__library__expr_lambda402) (bruijn ##k.3528 1 0) (##inline ##sys.cdr (bruijn ##expr.37 1 1))) ((bruijn ##k.3528 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda402, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k453, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda401(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda401" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda401, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.37 0 1)) ((bruijn equal? 14 7) (close _V0expand__library__expr_k453) (quote define) (##inline ##sys.car (bruijn ##expr.37 0 1))) ((bruijn ##k.3528 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k453, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k462(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k462" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k462, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.33 17 1) (bruijn ##k.3486 5 0) (bruijn ##x.3494 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k462, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k461(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k461" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k461, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 26 19) (close _V0expand__library__expr_k462) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 8 1) (##inline ##sys.cons (bruijn ##x.3498 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k462, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 8, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k461, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k460(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k460" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k460, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 24 9) (close _V0expand__library__expr_k461) (##inline ##sys.cons (quote lambda) (bruijn body 3 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k461, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      env->up->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k460, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k464(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k464" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k464, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.33 16 1) (bruijn ##k.3486 4 0) (bruijn ##x.3494 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k464, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k463(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k463" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k463, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 25 19) (close _V0expand__library__expr_k464) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 7 1) (##inline ##sys.cons (bruijn ##x.3498 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k464, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 7, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k463, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k459(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k459" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k459, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3500 0 0) ((bruijn error 24 15) (close _V0expand__library__expr_k460) (##string ##string.4146) (bruijn f 6 1)) ((bruijn expand-syntax 23 9) (close _V0expand__library__expr_k463) (##inline ##sys.cons (quote lambda) (bruijn body 2 1))))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k460, env)}),
      VEncodePointer(&_V10string_D4146.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k463, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    )

    );
}
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k459, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k458(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k458" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k458, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 23 9) (close _V0expand__library__expr_k459) (bruijn ##x.3505 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k459, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k458, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda412(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda412" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda412, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.42 3 1))) ((bruijn symbol? 22 10) (close _V0expand__library__expr_k458) (bruijn f 4 1)) ((bruijn ##k.3486 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->up->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k458, env)}),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k457(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k457" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k457, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3483 0 0) ((close _V0expand__library__expr_lambda412) (bruijn ##k.3478 1 0) (##inline ##sys.cdr (bruijn ##expr.43 1 1))) ((bruijn ##k.3478 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda412, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k457, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda411(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda411" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda411, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.43 0 1)) ((bruijn equal? 20 7) (close _V0expand__library__expr_k457) (quote lambda) (##inline ##sys.car (bruijn ##expr.43 0 1))) ((bruijn ##k.3478 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k457, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda410(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda410" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda410, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.42 0 1)) ((close _V0expand__library__expr_lambda411) (bruijn ##k.3473 0 0) (##inline ##sys.car (bruijn ##expr.42 0 1))) ((bruijn ##k.3473 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda411, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda409(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda409" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda409, env) {
  // ((close _V0expand__library__expr_lambda410) (bruijn ##k.3471 0 0) (##inline ##sys.cdr (bruijn ##expr.41 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda410, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__library__expr_lambda408(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda408" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda408, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.41 0 1)) ((close _V0expand__library__expr_lambda409) (bruijn ##k.3466 0 0) (##inline ##sys.car (bruijn ##expr.41 0 1))) ((bruijn ##k.3466 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda409, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k456(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k456" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k456, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3463 0 0) ((close _V0expand__library__expr_lambda408) (bruijn ##k.3458 1 0) (##inline ##sys.cdr (bruijn ##expr.40 1 1))) ((bruijn ##k.3458 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda408, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k456, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda407(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda407" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda407, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.40 0 1)) ((bruijn equal? 15 7) (close _V0expand__library__expr_k456) (quote define) (##inline ##sys.car (bruijn ##expr.40 0 1))) ((bruijn ##k.3458 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k456, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k472(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k472" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k472, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.33 18 1) (bruijn ##k.3416 5 0) (bruijn ##x.3424 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k472, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k471(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k471" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k471, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 27 19) (close _V0expand__library__expr_k472) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 8 1) (##inline ##sys.cons (bruijn ##x.3428 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k472, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 8, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k471, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k470(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k470" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k470, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 25 9) (close _V0expand__library__expr_k471) (##inline ##sys.cons (quote case-lambda) (bruijn body 3 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k471, env)}),
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      env->up->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k470, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k474(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k474" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k474, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.33 17 1) (bruijn ##k.3416 4 0) (bruijn ##x.3424 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k474, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k473(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k473" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k473, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 26 19) (close _V0expand__library__expr_k474) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 7 1) (##inline ##sys.cons (bruijn ##x.3428 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k474, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 7, 1),
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k473, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k469(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k469" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k469, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3430 0 0) ((bruijn error 25 15) (close _V0expand__library__expr_k470) (##string ##string.4146) (bruijn f 6 1)) ((bruijn expand-syntax 24 9) (close _V0expand__library__expr_k473) (##inline ##sys.cons (quote case-lambda) (bruijn body 2 1))))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k470, env)}),
      VEncodePointer(&_V10string_D4146.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k473, env)}),
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    )

    );
}
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k469, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k468(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k468" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k468, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 24 9) (close _V0expand__library__expr_k469) (bruijn ##x.3435 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k469, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k468, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda418(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda418" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda418, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.46 3 1))) ((bruijn symbol? 23 10) (close _V0expand__library__expr_k468) (bruijn f 4 1)) ((bruijn ##k.3416 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->up->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k468, env)}),
      VGetArg(env, 4, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k467(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k467" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k467, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3413 0 0) ((close _V0expand__library__expr_lambda418) (bruijn ##k.3408 1 0) (##inline ##sys.cdr (bruijn ##expr.47 1 1))) ((bruijn ##k.3408 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda418, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k467, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda417(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda417" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda417, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.47 0 1)) ((bruijn equal? 21 7) (close _V0expand__library__expr_k467) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.47 0 1))) ((bruijn ##k.3408 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k467, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda416(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda416" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda416, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.46 0 1)) ((close _V0expand__library__expr_lambda417) (bruijn ##k.3403 0 0) (##inline ##sys.car (bruijn ##expr.46 0 1))) ((bruijn ##k.3403 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda417, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda415(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda415" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda415, env) {
  // ((close _V0expand__library__expr_lambda416) (bruijn ##k.3401 0 0) (##inline ##sys.cdr (bruijn ##expr.45 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda416, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__library__expr_lambda414(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda414" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda414, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.45 0 1)) ((close _V0expand__library__expr_lambda415) (bruijn ##k.3396 0 0) (##inline ##sys.car (bruijn ##expr.45 0 1))) ((bruijn ##k.3396 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda415, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k466(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k466" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k466, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3393 0 0) ((close _V0expand__library__expr_lambda414) (bruijn ##k.3388 1 0) (##inline ##sys.cdr (bruijn ##expr.44 1 1))) ((bruijn ##k.3388 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda414, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k466, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda413(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda413" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda413, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.44 0 1)) ((bruijn equal? 16 7) (close _V0expand__library__expr_k466) (quote define) (##inline ##sys.car (bruijn ##expr.44 0 1))) ((bruijn ##k.3388 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k466, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k478(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k478" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k478, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.33 14 1) (bruijn ##k.3362 2 0) (bruijn ##x.3367 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k478, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k477(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k477" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k477, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 23 19) (close _V0expand__library__expr_k478) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn x 3 1) (##inline ##sys.cons (bruijn ##x.3371 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k478, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->up->vars[1],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k477, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda423(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda423" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda423, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.50 1 1))) ((bruijn expand-syntax 21 9) (close _V0expand__library__expr_k477) (bruijn y 0 1)) ((bruijn ##k.3362 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k477, env)}),
      env->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda422(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda422" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda422, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.50 0 1)) ((close _V0expand__library__expr_lambda423) (bruijn ##k.3357 0 0) (##inline ##sys.car (bruijn ##expr.50 0 1))) ((bruijn ##k.3357 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda423, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda421(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda421" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda421, env) {
  // ((close _V0expand__library__expr_lambda422) (bruijn ##k.3355 0 0) (##inline ##sys.cdr (bruijn ##expr.49 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda422, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__library__expr_lambda420(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda420" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda420, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.49 0 1)) ((close _V0expand__library__expr_lambda421) (bruijn ##k.3350 0 0) (##inline ##sys.car (bruijn ##expr.49 0 1))) ((bruijn ##k.3350 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda421, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k476(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k476" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k476, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3347 0 0) ((close _V0expand__library__expr_lambda420) (bruijn ##k.3342 1 0) (##inline ##sys.cdr (bruijn ##expr.48 1 1))) ((bruijn ##k.3342 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda420, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k476, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda419(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda419" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda419, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.48 0 1)) ((bruijn equal? 17 7) (close _V0expand__library__expr_k476) (quote define) (##inline ##sys.car (bruijn ##expr.48 0 1))) ((bruijn ##k.3342 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k476, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k481(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k481" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k481, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.33 11 1) (bruijn ##k.3332 1 0) (bruijn ##x.3334 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k481, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda425(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda425" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda425, env) {
  // ((bruijn error 20 15) (close _V0expand__library__expr_k481) (##string ##string.4147) (##inline ##sys.cons (quote define) (bruijn noise 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k481, env)}),
      VEncodePointer(&_V10string_D4147.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0expand__library__expr_k480(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k480" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k480, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3329 0 0) ((close _V0expand__library__expr_lambda425) (bruijn ##k.3324 1 0) (##inline ##sys.cdr (bruijn ##expr.51 1 1))) ((bruijn ##k.3324 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda425, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k480, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda424(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda424" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda424, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.51 0 1)) ((bruijn equal? 18 7) (close _V0expand__library__expr_k480) (quote define) (##inline ##sys.car (bruijn ##expr.51 0 1))) ((bruijn ##k.3324 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k480, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k483(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k483" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k483, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.33 9 1) (bruijn ##k.3300 8 0) (bruijn ##x.3323 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VGetArg(env, 8, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k483, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k482(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k482" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k482, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 18 15) (close _V0expand__library__expr_k483) (##string ##string.4158) (bruijn expr 9 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k483, env)}),
      VEncodePointer(&_V10string_D4158.sym, VPOINTER_OTHER),
      VGetArg(env, 9, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k482, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k479(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k479" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k479, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__library__expr_lambda424) (close _V0expand__library__expr_k482) (bruijn ##input.34 6 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda424, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k482, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k479, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k475(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k475" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k475, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__library__expr_lambda419) (close _V0expand__library__expr_k479) (bruijn ##input.34 5 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda419, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k479, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k475, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k465(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k465" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k465, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__library__expr_lambda413) (close _V0expand__library__expr_k475) (bruijn ##input.34 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda413, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k475, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k465, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k455(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k455" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k455, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__library__expr_lambda407) (close _V0expand__library__expr_k465) (bruijn ##input.34 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda407, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k465, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k455, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k452(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k452" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k452, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__library__expr_lambda401) (close _V0expand__library__expr_k455) (bruijn ##input.34 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda401, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k455, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k452, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_k446(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k446" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_k446, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__library__expr_lambda399) (close _V0expand__library__expr_k452) (bruijn ##input.34 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda399, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k452, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_k446, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda396(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda396" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda396, env) {
  // ((close _V0expand__library__expr_lambda397) (close _V0expand__library__expr_k446) (bruijn ##input.34 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda397, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_k446, env)}),
      env->vars[1]
    );
 }
}
static void _V0expand__library__expr_lambda395(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda395" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda395, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__library__expr_lambda396) (bruijn ##k.3298 0 0) (bruijn expr 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda396, env)},
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_lambda395, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library__expr_lambda394(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda394" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library__expr_lambda394, env) {
 if (env->num_vars == 2) {
  // ((bruijn call/cc 9 13) (bruijn ##k.3296 0 0) (close _V0expand__library__expr_lambda395))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda395, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__library__expr_lambda394, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k384(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k384" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k384, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0expand__library_k385) (bruijn expand-library-expr 3 4) (close _V0expand__library__expr_lambda394))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k385, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library__expr_lambda394, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k384, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k383(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k383" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k383, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0expand__library_k384) (bruijn imports 2 3) (quote ()))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k384, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k383, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_k382(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_k382" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_k382, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0expand__library_k383) (bruijn exports 1 2) (quote ()))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k383, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0expand__library_k382, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__library__output_k485(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__library__output_k485" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__library__output_k485, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-syntax 7 9) (bruijn ##k.3615 2 0) (bruijn ##x.3617 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 9)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0make__library__output_k485, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__library__output_k484(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__library__output_k484" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__library__output_k484, env) {
 if (env->num_vars == 1) {
  // ((bruijn list 7 19) (close _V0make__library__output_k485) (quote quasiquote) (bruijn ##x.3618 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__library__output_k485, env)}),
      VEncodePointer(&_V0quasiquote.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0make__library__output_k484, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__library__output_k486(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__library__output_k486" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__library__output_k486, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 8 1) (bruijn ##k.3619 1 0) (bruijn e 1 1) (bruijn ##x.3621 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      env->up->vars[0],
      env->up->vars[1],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0make__library__output_k486, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0make__library__output_lambda427(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__library__output_lambda427" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__library__output_lambda427, env) {
 if (env->num_vars == 2) {
  // ((bruijn list 7 19) (close _V0make__library__output_k486) (quote unquote) (bruijn e 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 19)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__library__output_k486, env)}),
      VEncodePointer(&_V0unquote.sym, VPOINTER_OTHER),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0make__library__output_lambda427, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0make__library__output_lambda426(VEnv * env) {
 static VDebugInfo dbg = { "_V0make__library__output_lambda426" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0make__library__output_lambda426, env) {
 if (env->num_vars == 2) {
  // ((bruijn map 6 11) (close _V0make__library__output_k484) (close _V0make__library__output_lambda427) (bruijn exports 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__library__output_k484, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__library__output_lambda427, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0make__library__output_lambda426, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__library_lambda379(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda379" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda379, env) {
  // (set! (close _V0expand__library_k382) (bruijn make-library-output 0 1) (close _V0make__library__output_lambda426))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_k382, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0make__library__output_lambda426, env)})
    );
 }
}
static void _V0expand__library_lambda378(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__library_lambda378" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__library_lambda378, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__library_lambda379) (bruijn ##k.3201 0 0) #f #f #f #f #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__library_lambda379, env)},
      env->vars[0],
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0expand__library_lambda378, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void expand_k41(VEnv * env) {
 static VDebugInfo dbg = { "expand_k41" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k41, env) {
 if (env->num_vars == 1) {
  // (set! (close expand_k42) (bruijn expand-library 2 3) (close _V0expand__library_lambda378))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k42, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__library_lambda378, env)})
    );
 } else {
  VError("Not enough arguments to expand_k41, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_k489(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k489" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k489, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 7 1) (bruijn ##k.3790 2 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (##inline ##sys.cons (quote quasiquote) (##inline ##sys.cons (quote quasiquote) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn ##x.3801 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (quote ()) (quote ()))) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->vars[0],
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
env->vars[0],
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
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k489, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_k488(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k488" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k488, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-quasiquote 9 2) (close _V0expand__quasiquote_k489) (bruijn ##x.3805 0 0) (bruijn x 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k489, env)}),
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k488, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_lambda433(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda433" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda433, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.26 1 1))) ((bruijn + 9 27) (close _V0expand__quasiquote_k488) (bruijn quotation 6 1) 1) ((bruijn ##k.3790 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 27)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k488, env)}),
      VGetArg(env, 6, 1),
      VEncodeInt(1l)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_lambda432(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda432" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda432, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 1)) ((close _V0expand__quasiquote_lambda433) (bruijn ##k.3785 0 0) (##inline ##sys.car (bruijn ##expr.26 0 1))) ((bruijn ##k.3785 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda433, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_k487(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k487" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k487, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3782 0 0) ((close _V0expand__quasiquote_lambda432) (bruijn ##k.3777 1 0) (##inline ##sys.cdr (bruijn ##expr.25 1 1))) ((bruijn ##k.3777 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda432, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k487, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_lambda431(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda431" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda431, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 1)) ((bruijn equal? 6 7) (close _V0expand__quasiquote_k487) (quote quasiquote) (##inline ##sys.car (bruijn ##expr.25 0 1))) ((bruijn ##k.3777 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k487, env)}),
      VEncodePointer(&_V0quasiquote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_k494(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k494" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k494, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 9 1) (bruijn ##k.3743 3 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (##inline ##sys.cons (quote quasiquote) (##inline ##sys.cons (quote unquote) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn ##x.3759 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (quote ()) (quote ()))) (quote ())))) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->up->up->vars[0],
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
env->vars[0],
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
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k494, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_k493(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k493" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k493, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-quasiquote 11 2) (close _V0expand__quasiquote_k494) (bruijn ##x.3763 0 0) (bruijn x 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k494, env)}),
      env->vars[0],
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k493, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_k492(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k492" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k492, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3749 0 0) ((bruijn ##k.23 7 1) (bruijn ##k.3743 1 0) (bruijn x 1 1)) ((bruijn - 11 29) (close _V0expand__quasiquote_k493) (bruijn quotation 8 1) 1))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->vars[0],
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k493, env)}),
      VGetArg(env, 8, 1),
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k492, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_lambda436(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda436" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda436, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.28 1 1))) ((bruijn = 10 28) (close _V0expand__quasiquote_k492) (bruijn quotation 7 1) 1) ((bruijn ##k.3743 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k492, env)}),
      VGetArg(env, 7, 1),
      VEncodeInt(1l)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_lambda435(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda435" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda435, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 1)) ((close _V0expand__quasiquote_lambda436) (bruijn ##k.3738 0 0) (##inline ##sys.car (bruijn ##expr.28 0 1))) ((bruijn ##k.3738 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda436, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_k491(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k491" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k491, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3735 0 0) ((close _V0expand__quasiquote_lambda435) (bruijn ##k.3730 1 0) (##inline ##sys.cdr (bruijn ##expr.27 1 1))) ((bruijn ##k.3730 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda435, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k491, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_lambda434(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda434" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda434, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 1)) ((bruijn equal? 7 7) (close _V0expand__quasiquote_k491) (quote unquote) (##inline ##sys.car (bruijn ##expr.27 0 1))) ((bruijn ##k.3730 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k491, env)}),
      VEncodePointer(&_V0unquote.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_k498(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k498" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k498, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 11 1) (bruijn ##k.3688 2 0) (##inline ##sys.cons (quote append) (##inline ##sys.cons (bruijn x 3 1) (##inline ##sys.cons (bruijn ##x.3696 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0append.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->up->vars[1],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k498, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_k501(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k501" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k501, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 13 1) (bruijn ##k.3688 4 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (##inline ##sys.cons (quote quasiquote) (##inline ##sys.cons (quote unquote-splicing) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn ##x.3708 1 0) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (quote ()) (quote ()))) (quote ())))) (##inline ##sys.cons (bruijn ##x.3706 0 0) (quote ()))))) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VGetArg(env, 4, 0),
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
env->up->vars[0],
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
env->vars[0],
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
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k501, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_k500(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k500" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k500, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-quasiquote 15 2) (close _V0expand__quasiquote_k501) (bruijn quotation 13 1) (bruijn y 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k501, env)}),
      VGetArg(env, 13, 1),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k500, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_k499(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k499" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k499, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-quasiquote 14 2) (close _V0expand__quasiquote_k500) (bruijn ##x.3712 0 0) (bruijn x 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k500, env)}),
      env->vars[0],
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k499, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_k497(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k497" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k497, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3691 0 0) ((bruijn expand-quasiquote 13 2) (close _V0expand__quasiquote_k498) (bruijn quotation 11 1) (bruijn y 1 1)) ((bruijn - 14 29) (close _V0expand__quasiquote_k499) (bruijn quotation 11 1) 1))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k498, env)}),
      VGetArg(env, 11, 1),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k499, env)}),
      VGetArg(env, 11, 1),
      VEncodeInt(1l)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k497, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_lambda441(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda441" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda441, env) {
  // ((bruijn = 13 28) (close _V0expand__quasiquote_k497) (bruijn quotation 10 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k497, env)}),
      VGetArg(env, 10, 1),
      VEncodeInt(1l)
    );
 }
}
static void _V0expand__quasiquote_lambda440(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda440" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda440, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.31 1 1))) ((close _V0expand__quasiquote_lambda441) (bruijn ##k.3683 0 0) (##inline ##sys.cdr (bruijn ##expr.29 4 1))) ((bruijn ##k.3683 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda441, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 4, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_lambda439(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda439" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda439, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 1)) ((close _V0expand__quasiquote_lambda440) (bruijn ##k.3678 0 0) (##inline ##sys.car (bruijn ##expr.31 0 1))) ((bruijn ##k.3678 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda440, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_k496(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k496" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k496, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3675 0 0) ((close _V0expand__quasiquote_lambda439) (bruijn ##k.3670 1 0) (##inline ##sys.cdr (bruijn ##expr.30 1 1))) ((bruijn ##k.3670 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda439, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k496, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_lambda438(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda438" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda438, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 1)) ((bruijn equal? 9 7) (close _V0expand__quasiquote_k496) (quote unquote-splicing) (##inline ##sys.car (bruijn ##expr.30 0 1))) ((bruijn ##k.3670 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k496, env)}),
      VEncodePointer(&_V0unquote__splicing.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_lambda437(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda437" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda437, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.29 0 1)) ((close _V0expand__quasiquote_lambda438) (bruijn ##k.3665 0 0) (##inline ##sys.car (bruijn ##expr.29 0 1))) ((bruijn ##k.3665 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda438, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_k504(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k504" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k504, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.23 9 1) (bruijn ##k.3654 2 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn ##x.3658 1 0) (##inline ##sys.cons (bruijn ##x.3660 0 0) (quote ())))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      env->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->vars[0],
      VInlineCons(
env->vars[0],
      VNULL
    )

    )

    )

    );
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k504, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_k503(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k503" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k503, env) {
 if (env->num_vars == 1) {
  // ((bruijn expand-quasiquote 11 2) (close _V0expand__quasiquote_k504) (bruijn quotation 9 1) (bruijn b 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k504, env)}),
      VGetArg(env, 9, 1),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k503, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_lambda444(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda444" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda444, env) {
  // ((bruijn expand-quasiquote 10 2) (close _V0expand__quasiquote_k503) (bruijn quotation 8 1) (bruijn a 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k503, env)}),
      VGetArg(env, 8, 1),
      env->up->vars[1]
    );
 }
}
static void _V0expand__quasiquote_lambda443(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda443" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda443, env) {
  // ((close _V0expand__quasiquote_lambda444) (bruijn ##k.3652 0 0) (##inline ##sys.cdr (bruijn ##expr.32 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda444, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0expand__quasiquote_lambda442(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda442" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda442, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 1)) ((close _V0expand__quasiquote_lambda443) (bruijn ##k.3647 0 0) (##inline ##sys.car (bruijn ##expr.32 0 1))) ((bruijn ##k.3647 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda443, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_lambda445(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda445" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda445, env) {
  // ((bruijn ##k.23 6 1) (bruijn ##k.3643 0 0) (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn x 0 1) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->vars[0],
      VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[1],
      VNULL
    )

    )

    );
 }
}
static void _V0expand__quasiquote_k506(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k506" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k506, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 10 15) (bruijn ##k.3626 5 0) (##string ##string.4150))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 15)),
      VGetArg(env, 5, 0),
      VEncodePointer(&_V10string_D4150.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k506, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_k505(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k505" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k505, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__quasiquote_lambda445) (close _V0expand__quasiquote_k506) (bruijn ##input.24 4 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda445, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k506, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k505, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_k502(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k502" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k502, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__quasiquote_lambda442) (close _V0expand__quasiquote_k505) (bruijn ##input.24 3 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda442, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k505, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k502, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_k495(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k495" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k495, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__quasiquote_lambda437) (close _V0expand__quasiquote_k502) (bruijn ##input.24 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda437, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k502, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k495, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_k490(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k490" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_k490, env) {
 if (env->num_vars == 1) {
  // ((close _V0expand__quasiquote_lambda434) (close _V0expand__quasiquote_k495) (bruijn ##input.24 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda434, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k495, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_k490, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_lambda430(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda430" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda430, env) {
  // ((close _V0expand__quasiquote_lambda431) (close _V0expand__quasiquote_k490) (bruijn ##input.24 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda431, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_k490, env)}),
      env->vars[1]
    );
 }
}
static void _V0expand__quasiquote_lambda429(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda429" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda429, env) {
 if (env->num_vars == 2) {
  // ((close _V0expand__quasiquote_lambda430) (bruijn ##k.3624 0 0) (bruijn expr 1 2))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda430, env)},
      env->vars[0],
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_lambda429, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0expand__quasiquote_lambda428(VEnv * env) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda428" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0expand__quasiquote_lambda428, env) {
 if (env->num_vars == 3) {
  // ((bruijn call/cc 3 13) (bruijn ##k.3622 0 0) (close _V0expand__quasiquote_lambda429))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[13]),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda429, env)})
    );
 } else {
  VError("Not enough arguments to _V0expand__quasiquote_lambda428, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void expand_k40(VEnv * env) {
 static VDebugInfo dbg = { "expand_k40" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k40, env) {
 if (env->num_vars == 1) {
  // (set! (close expand_k41) (bruijn expand-quasiquote 1 2) (close _V0expand__quasiquote_lambda428))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k41, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0expand__quasiquote_lambda428, env)})
    );
 } else {
  VError("Not enough arguments to expand_k40, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0collect__defines_k507(VEnv * env) {
 static VDebugInfo dbg = { "_V0collect__defines_k507" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0collect__defines_k507, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.3821 1 0) (quote ()) (bruijn body 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VNULL,
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0collect__defines_k507, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k510(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k510" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k510, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1 12 1) (bruijn ##k.4060 2 0) (bruijn ##x.4062 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k510, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k509(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k509" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k509, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 13 1) (close _V0loop_k510) (bruijn ##x.4063 0 0) (bruijn rest 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k510, env)}),
      env->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k509, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda458(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda458" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda458, env) {
  // ((bruijn cons 15 1) (close _V0loop_k509) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 3 1) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 2 1) (bruijn body 1 1))) (quote ())))) (bruijn defines 11 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k509, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->up->vars[1],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
env->up->up->vars[1],
      env->up->vars[1]
    )

    )
,
      VNULL
    )

    )

    )
,
      VGetArg(env, 11, 1)
    );
 }
}
static void _V0loop_lambda457(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda457" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda457, env) {
  // ((close _V0loop_lambda458) (bruijn ##k.4058 0 0) (##inline ##sys.cdr (bruijn ##expr.3 7 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda458, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 7, 1)
    )

    );
 }
}
static void _V0loop_lambda456(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda456" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda456, env) {
  // ((close _V0loop_lambda457) (bruijn ##k.4056 0 0) (##inline ##sys.cdr (bruijn ##expr.5 3 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda457, env)},
      env->vars[0],
      VInlineCdr(
env->up->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda455(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda455" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda455, env) {
  // ((close _V0loop_lambda456) (bruijn ##k.4054 0 0) (##inline ##sys.cdr (bruijn ##expr.6 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda456, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda454(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda454" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda454, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.6 0 1)) ((close _V0loop_lambda455) (bruijn ##k.4049 0 0) (##inline ##sys.car (bruijn ##expr.6 0 1))) ((bruijn ##k.4049 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda455, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda453(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda453" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda453, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.5 0 1)) ((close _V0loop_lambda454) (bruijn ##k.4044 0 0) (##inline ##sys.car (bruijn ##expr.5 0 1))) ((bruijn ##k.4044 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda454, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k508(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k508" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k508, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.4041 0 0) ((close _V0loop_lambda453) (bruijn ##k.4036 1 0) (##inline ##sys.cdr (bruijn ##expr.4 1 1))) ((bruijn ##k.4036 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda453, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k508, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda452(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda452" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda452, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 1)) ((bruijn equal? 8 7) (close _V0loop_k508) (quote define) (##inline ##sys.car (bruijn ##expr.4 0 1))) ((bruijn ##k.4036 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k508, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda451(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda451" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda451, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.3 0 1)) ((close _V0loop_lambda452) (bruijn ##k.4031 0 0) (##inline ##sys.car (bruijn ##expr.3 0 1))) ((bruijn ##k.4031 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda452, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k517(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k517" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k517, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1 15 1) (bruijn ##k.3995 5 0) (bruijn ##x.4000 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k517, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k516(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k516" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k516, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 16 1) (close _V0loop_k517) (bruijn ##x.4001 0 0) (bruijn rest 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k517, env)}),
      env->vars[0],
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k516, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k515(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k515" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k515, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 18 1) (close _V0loop_k516) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn x 6 1) (##inline ##sys.cons (bruijn body 4 1) (quote ())))) (bruijn defines 14 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k516, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 6, 1),
      VInlineCons(
VGetArg(env, 4, 1),
      VNULL
    )

    )

    )
,
      VGetArg(env, 14, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k515, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k519(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k519" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k519, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1 14 1) (bruijn ##k.3995 4 0) (bruijn ##x.4000 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k519, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k518(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k518" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k518, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 15 1) (close _V0loop_k519) (bruijn ##x.4001 0 0) (bruijn rest 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k519, env)}),
      env->vars[0],
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k518, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k514(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k514" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k514, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.4005 0 0) ((bruijn error 17 15) (close _V0loop_k515) (##string ##string.4146) (bruijn x 5 1)) ((bruijn cons 17 1) (close _V0loop_k518) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn x 5 1) (##inline ##sys.cons (bruijn body 3 1) (quote ())))) (bruijn defines 13 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k515, env)}),
      VEncodePointer(&_V10string_D4146.sym, VPOINTER_OTHER),
      VGetArg(env, 5, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k518, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(env, 5, 1),
      VInlineCons(
env->up->up->up->vars[1],
      VNULL
    )

    )

    )
,
      VGetArg(env, 13, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k514, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k513(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k513" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k513, env) {
 if (env->num_vars == 1) {
  // ((bruijn not 16 9) (close _V0loop_k514) (bruijn ##x.4010 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k514, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k513, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda465(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda465" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda465, env) {
  // ((bruijn symbol? 15 10) (close _V0loop_k513) (bruijn x 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k513, env)}),
      env->up->up->up->vars[1]
    );
 }
}
static void _V0loop_lambda464(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda464" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda464, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.10 1 1))) ((close _V0loop_lambda465) (bruijn ##k.3990 0 0) (##inline ##sys.cdr (bruijn ##expr.7 6 1))) ((bruijn ##k.3990 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda465, env)},
      env->vars[0],
      VInlineCdr(
VGetArg(env, 6, 1)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda463(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda463" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda463, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.10 0 1)) ((close _V0loop_lambda464) (bruijn ##k.3985 0 0) (##inline ##sys.car (bruijn ##expr.10 0 1))) ((bruijn ##k.3985 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda464, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda462(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda462" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda462, env) {
  // ((close _V0loop_lambda463) (bruijn ##k.3983 0 0) (##inline ##sys.cdr (bruijn ##expr.9 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda463, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda461(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda461" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda461, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.9 0 1)) ((close _V0loop_lambda462) (bruijn ##k.3978 0 0) (##inline ##sys.car (bruijn ##expr.9 0 1))) ((bruijn ##k.3978 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda462, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k512(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k512" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k512, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3975 0 0) ((close _V0loop_lambda461) (bruijn ##k.3970 1 0) (##inline ##sys.cdr (bruijn ##expr.8 1 1))) ((bruijn ##k.3970 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda461, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k512, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda460(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda460" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda460, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.8 0 1)) ((bruijn equal? 9 7) (close _V0loop_k512) (quote define) (##inline ##sys.car (bruijn ##expr.8 0 1))) ((bruijn ##k.3970 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k512, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda459(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda459" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda459, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.7 0 1)) ((close _V0loop_lambda460) (bruijn ##k.3965 0 0) (##inline ##sys.car (bruijn ##expr.7 0 1))) ((bruijn ##k.3965 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda460, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k522(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k522" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k522, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1 7 1) (bruijn ##k.3955 1 0) (bruijn ##x.3957 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k522, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda467(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda467" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda467, env) {
  // ((bruijn error 11 15) (close _V0loop_k522) (##string ##string.4147) (##inline ##sys.cons (quote define) (bruijn noise 0 1)))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 15)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k522, env)}),
      VEncodePointer(&_V10string_D4147.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      env->vars[1]
    )

    );
 }
}
static void _V0loop_k521(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k521" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k521, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3952 0 0) ((close _V0loop_lambda467) (bruijn ##k.3947 1 0) (##inline ##sys.cdr (bruijn ##expr.11 1 1))) ((bruijn ##k.3947 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda467, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k521, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda466(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda466" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda466, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.11 0 1)) ((bruijn equal? 9 7) (close _V0loop_k521) (quote define) (##inline ##sys.car (bruijn ##expr.11 0 1))) ((bruijn ##k.3947 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k521, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k524(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k524" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k524, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.1 5 1) (bruijn ##k.3830 4 0) (bruijn ##x.3841 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k524, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k527(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k527" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k527, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.3858 1 0) (bruijn ##expr.14 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL,
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0loop_k527, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda481(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda481" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda481, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 1 1))) ((bruijn ##k.18 6 1) (bruijn ##k.3897 0 0) (##inline ##sys.cdr (bruijn ##expr.19 11 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.15 11 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.16 11 3))) ((bruijn ##k.3897 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 11, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 11, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 11, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda480(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda480" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda480, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 1)) ((close _V0loop_lambda481) (bruijn ##k.3892 0 0) (##inline ##sys.car (bruijn ##expr.22 0 1))) ((bruijn ##k.3892 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda481, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda479(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda479" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda479, env) {
  // ((close _V0loop_lambda480) (bruijn ##k.3890 0 0) (##inline ##sys.cdr (bruijn ##expr.21 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda480, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda478(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda478" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda478, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 1)) ((close _V0loop_lambda479) (bruijn ##k.3885 0 0) (##inline ##sys.car (bruijn ##expr.21 0 1))) ((bruijn ##k.3885 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda479, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k531(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k531" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k531, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3882 0 0) ((close _V0loop_lambda478) (bruijn ##k.3877 1 0) (##inline ##sys.cdr (bruijn ##expr.20 1 1))) ((bruijn ##k.3877 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda478, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k531, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda477(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda477" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda477, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 1)) ((bruijn equal? 24 7) (close _V0loop_k531) (quote define) (##inline ##sys.car (bruijn ##expr.20 0 1))) ((bruijn ##k.3877 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k531, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k534(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k534" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k534, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.17 10 1) (bruijn ##k.3870 3 0) (bruijn ##expr.19 8 1) (bruijn ##x.3875 1 0) (bruijn ##x.3876 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 8, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k534, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k533(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k533" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k533, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 25 14) (close _V0loop_k534) (bruijn ##vals.16 7 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k534, env)}),
      VGetArg(env, 7, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k533, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k532(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k532" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k532, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 24 14) (close _V0loop_k533) (bruijn ##xs.15 6 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k533, env)}),
      VGetArg(env, 6, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k532, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda476(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda476" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda476, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda477) (close _V0loop_k532) (##inline ##sys.car (bruijn ##expr.19 5 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda477, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k532, env)}),
      VInlineCar(
VGetArg(env, 5, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda476, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda475(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda475" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda475, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 22 13) (bruijn ##k.3868 0 0) (close _V0loop_lambda476))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda476, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda475, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k530(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k530" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k530, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 21 12) (bruijn ##k.3863 3 0) (close _V0loop_lambda475) (bruijn loop 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 12)),
      env->up->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda475, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k530, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k529(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k529" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k529, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.17 4 1) (close _V0loop_k530) (bruijn ##expr.19 2 1) (bruijn ##x.3925 1 0) (bruijn ##x.3926 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k530, env)}),
      env->up->up->vars[1],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k529, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k528(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k528" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k528, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 19 14) (close _V0loop_k529) (bruijn ##vals.16 1 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k529, env)}),
      env->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0loop_k528, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda488(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda488" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda488, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 1 1))) ((bruijn ##k.18 6 1) (bruijn ##k.3897 0 0) (##inline ##sys.cdr (bruijn ##expr.19 8 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.15 8 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.16 8 3))) ((bruijn ##k.3897 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 8, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 8, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 8, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda487(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda487" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda487, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 1)) ((close _V0loop_lambda488) (bruijn ##k.3892 0 0) (##inline ##sys.car (bruijn ##expr.22 0 1))) ((bruijn ##k.3892 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda488, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda486(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda486" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda486, env) {
  // ((close _V0loop_lambda487) (bruijn ##k.3890 0 0) (##inline ##sys.cdr (bruijn ##expr.21 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda487, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda485(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda485" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda485, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 1)) ((close _V0loop_lambda486) (bruijn ##k.3885 0 0) (##inline ##sys.car (bruijn ##expr.21 0 1))) ((bruijn ##k.3885 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda486, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k535(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k535" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k535, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3882 0 0) ((close _V0loop_lambda485) (bruijn ##k.3877 1 0) (##inline ##sys.cdr (bruijn ##expr.20 1 1))) ((bruijn ##k.3877 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda485, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k535, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda484(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda484" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda484, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 1)) ((bruijn equal? 21 7) (close _V0loop_k535) (quote define) (##inline ##sys.car (bruijn ##expr.20 0 1))) ((bruijn ##k.3877 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k535, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k538(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k538" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k538, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.17 7 1) (bruijn ##k.3870 3 0) (bruijn ##expr.19 5 1) (bruijn ##x.3875 1 0) (bruijn ##x.3876 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 5, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k538, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k537(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k537" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k537, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 22 14) (close _V0loop_k538) (bruijn ##vals.16 4 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k538, env)}),
      VGetArg(env, 4, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k537, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k536(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k536" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k536, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 21 14) (close _V0loop_k537) (bruijn ##xs.15 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k537, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k536, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda483(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda483" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda483, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda484) (close _V0loop_k536) (##inline ##sys.car (bruijn ##expr.19 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda484, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k536, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda483, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda482(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda482" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda482, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 19 13) (bruijn ##k.3868 0 0) (close _V0loop_lambda483))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda483, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda482, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda474(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda474" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda474, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.19 0 1))) ((bruijn reverse 18 14) (close _V0loop_k528) (bruijn ##xs.15 0 2)) ((bruijn call-with-values 18 12) (bruijn ##k.3863 0 0) (close _V0loop_lambda482) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k528, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda482, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda474, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda473(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda473" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda473, env) {
  // (set! (close _V0loop_k527) (bruijn loop 0 1) (close _V0loop_lambda474))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k527, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda474, env)})
    );
 }
}
static void _V0loop_lambda472(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda472" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda472, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda473) (bruijn ##k.3856 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda473, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda472, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda471(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda471" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda471, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 15 13) (bruijn ##k.3854 0 0) (close _V0loop_lambda472))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda472, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda471, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k539(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k539" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k539, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.12 6 1) (bruijn ##k.3930 1 0) (##inline ##sys.cons (quote letrec*) (##inline ##sys.cons (bruijn ##x.3937 0 0) (bruijn body 12 2))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0letrec_S.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VGetArg(env, 12, 2)
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k539, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda489(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda489" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda489, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 15 11) (close _V0loop_k539) (bruijn list 15 19) (bruijn xs 0 2) (bruijn vals 0 3)) ((bruijn ##k.3930 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k539, env)}),
      VGetArg(env, 15, 19),
      env->vars[2],
      env->vars[3]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda489, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda470(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda470" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda470, env) {
  // ((bruijn call-with-values 14 12) (bruijn ##k.3852 0 0) (close _V0loop_lambda471) (close _V0loop_lambda489))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda471, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda489, env)})
    );
 }
}
static void _V0loop_k540(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k540" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k540, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 14 15) (bruijn ##k.3844 2 0) (##string ##string.4150))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 15)),
      env->up->up->vars[0],
      VEncodePointer(&_V10string_D4150.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0loop_k540, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k526(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k526" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k526, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda470) (close _V0loop_k540) (bruijn ##input.13 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda470, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k540, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k526, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k541(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k541" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k541, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.3858 1 0) (bruijn ##expr.14 4 1) (quote ()) (quote ()))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VGetArg(env, 4, 1),
      VNULL,
      VNULL
    );
 } else {
  VError("Not enough arguments to _V0loop_k541, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda501(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda501" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda501, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 1 1))) ((bruijn ##k.18 6 1) (bruijn ##k.3897 0 0) (##inline ##sys.cdr (bruijn ##expr.19 11 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.15 11 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.16 11 3))) ((bruijn ##k.3897 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 11, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 11, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 11, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda500(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda500" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda500, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 1)) ((close _V0loop_lambda501) (bruijn ##k.3892 0 0) (##inline ##sys.car (bruijn ##expr.22 0 1))) ((bruijn ##k.3892 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda501, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda499(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda499" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda499, env) {
  // ((close _V0loop_lambda500) (bruijn ##k.3890 0 0) (##inline ##sys.cdr (bruijn ##expr.21 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda500, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda498(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda498" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda498, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 1)) ((close _V0loop_lambda499) (bruijn ##k.3885 0 0) (##inline ##sys.car (bruijn ##expr.21 0 1))) ((bruijn ##k.3885 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda499, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k545(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k545" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k545, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3882 0 0) ((close _V0loop_lambda498) (bruijn ##k.3877 1 0) (##inline ##sys.cdr (bruijn ##expr.20 1 1))) ((bruijn ##k.3877 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda498, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k545, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda497(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda497" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda497, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 1)) ((bruijn equal? 23 7) (close _V0loop_k545) (quote define) (##inline ##sys.car (bruijn ##expr.20 0 1))) ((bruijn ##k.3877 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k545, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k548(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k548" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k548, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.17 10 1) (bruijn ##k.3870 3 0) (bruijn ##expr.19 8 1) (bruijn ##x.3875 1 0) (bruijn ##x.3876 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 8, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k548, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k547(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k547" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k547, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 24 14) (close _V0loop_k548) (bruijn ##vals.16 7 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k548, env)}),
      VGetArg(env, 7, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k547, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k546(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k546" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k546, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 23 14) (close _V0loop_k547) (bruijn ##xs.15 6 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k547, env)}),
      VGetArg(env, 6, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k546, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda496(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda496" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda496, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda497) (close _V0loop_k546) (##inline ##sys.car (bruijn ##expr.19 5 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda497, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k546, env)}),
      VInlineCar(
VGetArg(env, 5, 1)
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda496, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda495(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda495" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda495, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 21 13) (bruijn ##k.3868 0 0) (close _V0loop_lambda496))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda496, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda495, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k544(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k544" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k544, env) {
 if (env->num_vars == 1) {
  // ((bruijn call-with-values 20 12) (bruijn ##k.3863 3 0) (close _V0loop_lambda495) (bruijn loop 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 12)),
      env->up->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda495, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k544, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k543(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k543" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k543, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.17 4 1) (close _V0loop_k544) (bruijn ##expr.19 2 1) (bruijn ##x.3925 1 0) (bruijn ##x.3926 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k544, env)}),
      env->up->up->vars[1],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k543, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k542(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k542" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k542, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 18 14) (close _V0loop_k543) (bruijn ##vals.16 1 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k543, env)}),
      env->up->vars[3]
    );
 } else {
  VError("Not enough arguments to _V0loop_k542, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda508(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda508" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda508, env) {
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 1 1))) ((bruijn ##k.18 6 1) (bruijn ##k.3897 0 0) (##inline ##sys.cdr (bruijn ##expr.19 8 1)) (##inline ##sys.cons (bruijn xs 2 1) (bruijn ##xs.15 8 2)) (##inline ##sys.cons (bruijn vals 0 1) (bruijn ##vals.16 8 3))) ((bruijn ##k.3897 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
env->up->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      env->vars[0],
      VInlineCdr(
VGetArg(env, 8, 1)
    )
,
      VInlineCons(
env->up->up->vars[1],
      VGetArg(env, 8, 2)
    )
,
      VInlineCons(
env->vars[1],
      VGetArg(env, 8, 3)
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda507(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda507" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda507, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 1)) ((close _V0loop_lambda508) (bruijn ##k.3892 0 0) (##inline ##sys.car (bruijn ##expr.22 0 1))) ((bruijn ##k.3892 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda508, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda506(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda506" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda506, env) {
  // ((close _V0loop_lambda507) (bruijn ##k.3890 0 0) (##inline ##sys.cdr (bruijn ##expr.21 1 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda507, env)},
      env->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda505(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda505" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda505, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 1)) ((close _V0loop_lambda506) (bruijn ##k.3885 0 0) (##inline ##sys.car (bruijn ##expr.21 0 1))) ((bruijn ##k.3885 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda506, env)},
      env->vars[0],
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k549(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k549" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k549, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.3882 0 0) ((close _V0loop_lambda505) (bruijn ##k.3877 1 0) (##inline ##sys.cdr (bruijn ##expr.20 1 1))) ((bruijn ##k.3877 1 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda505, env)},
      env->up->vars[0],
      VInlineCdr(
env->up->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k549, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda504(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda504" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda504, env) {
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 1)) ((bruijn equal? 20 7) (close _V0loop_k549) (quote define) (##inline ##sys.car (bruijn ##expr.20 0 1))) ((bruijn ##k.3877 0 0) #f))
if(VDecodeBool(
VInlinePairP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k549, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
env->vars[1]
    )

    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k552(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k552" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k552, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.17 7 1) (bruijn ##k.3870 3 0) (bruijn ##expr.19 5 1) (bruijn ##x.3875 1 0) (bruijn ##x.3876 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      env->up->up->up->vars[0],
      VGetArg(env, 5, 1),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k552, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k551(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k551" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k551, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 21 14) (close _V0loop_k552) (bruijn ##vals.16 4 3))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k552, env)}),
      VGetArg(env, 4, 3)
    );
 } else {
  VError("Not enough arguments to _V0loop_k551, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k550(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k550" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k550, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 20 14) (close _V0loop_k551) (bruijn ##xs.15 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k551, env)}),
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_k550, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda503(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda503" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda503, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda504) (close _V0loop_k550) (##inline ##sys.car (bruijn ##expr.19 2 1)))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda504, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k550, env)}),
      VInlineCar(
env->up->up->vars[1]
    )

    );
 } else {
  VError("Not enough arguments to _V0loop_lambda503, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda502(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda502" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda502, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 18 13) (bruijn ##k.3868 0 0) (close _V0loop_lambda503))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda503, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda502, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda494(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda494" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda494, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.19 0 1))) ((bruijn reverse 17 14) (close _V0loop_k542) (bruijn ##xs.15 0 2)) ((bruijn call-with-values 17 12) (bruijn ##k.3863 0 0) (close _V0loop_lambda502) (bruijn loop 1 1)))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
env->vars[1]
    )

    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k542, env)}),
      env->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda502, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda494, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda493(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda493" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda493, env) {
  // (set! (close _V0loop_k541) (bruijn loop 0 1) (close _V0loop_lambda494))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k541, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda494, env)})
    );
 }
}
static void _V0loop_lambda492(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda492" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda492, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda493) (bruijn ##k.3856 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda493, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda492, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda491(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda491" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda491, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 14 13) (bruijn ##k.3854 0 0) (close _V0loop_lambda492))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda492, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda491, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k553(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k553" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k553, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.12 5 1) (bruijn ##k.3930 1 0) (##inline ##sys.cons (quote letrec*) (##inline ##sys.cons (bruijn ##x.3937 0 0) (bruijn body 11 2))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      env->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0letrec_S.sym, VPOINTER_OTHER),
      VInlineCons(
env->vars[0],
      VGetArg(env, 11, 2)
    )

    )

    );
 } else {
  VError("Not enough arguments to _V0loop_k553, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda509(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda509" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda509, env) {
 if (env->num_vars == 4) {
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 14 11) (close _V0loop_k553) (bruijn list 14 19) (bruijn xs 0 2) (bruijn vals 0 3)) ((bruijn ##k.3930 0 0) #f))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k553, env)}),
      VGetArg(env, 14, 19),
      env->vars[2],
      env->vars[3]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_lambda509, got ~D~N"
  "-- expected 4~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda490(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda490" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda490, env) {
  // ((bruijn call-with-values 13 12) (bruijn ##k.3852 0 0) (close _V0loop_lambda491) (close _V0loop_lambda509))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 12)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda491, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda509, env)})
    );
 }
}
static void _V0loop_k554(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k554" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k554, env) {
 if (env->num_vars == 1) {
  // ((bruijn error 13 15) (bruijn ##k.3844 1 0) (##string ##string.4150))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 15)),
      env->up->vars[0],
      VEncodePointer(&_V10string_D4150.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0loop_k554, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda469(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda469" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda469, env) {
  // (if (##inline ##sys.null? (bruijn ##input.13 0 1)) ((bruijn ##k.12 2 1) (close _V0loop_k526) (##inline ##sys.cons (quote begin) (bruijn body 8 2))) ((close _V0loop_lambda490) (close _V0loop_k554) (bruijn ##input.13 0 1)))
if(VDecodeBool(
VInlineNullP(
env->vars[1]
    )
)) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k526, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VGetArg(env, 8, 2)
    )

    );
} else {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda490, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k554, env)}),
      env->vars[1]
    );
}
 }
}
static void _V0loop_k525(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k525" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k525, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda469) (bruijn ##k.3842 1 0) (bruijn ##x.3946 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda469, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k525, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda468(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda468" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda468, env) {
 if (env->num_vars == 2) {
  // ((bruijn reverse 10 14) (close _V0loop_k525) (bruijn defines 6 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k525, env)}),
      VGetArg(env, 6, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda468, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k523(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k523" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k523, env) {
 if (env->num_vars == 1) {
  // ((bruijn call/cc 9 13) (close _V0loop_k524) (close _V0loop_lambda468))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k524, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda468, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_k523, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k520(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k520" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k520, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda466) (close _V0loop_k523) (bruijn ##input.2 2 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda466, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k523, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k520, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k511(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k511" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k511, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda459) (close _V0loop_k520) (bruijn ##input.2 1 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda459, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k520, env)}),
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k511, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda450(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda450" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda450, env) {
  // ((close _V0loop_lambda451) (close _V0loop_k511) (bruijn ##input.2 0 1))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda451, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k511, env)}),
      env->vars[1]
    );
 }
}
static void _V0loop_lambda449(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda449" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda449, env) {
 if (env->num_vars == 2) {
  // ((close _V0loop_lambda450) (bruijn ##k.3828 0 0) (bruijn body 1 2))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda450, env)},
      env->vars[0],
      env->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda449, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda448(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda448" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda448, env) {
 if (env->num_vars == 3) {
  // ((bruijn call/cc 4 13) (bruijn ##k.3826 0 0) (close _V0loop_lambda449))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 13)),
      env->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda449, env)})
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda448, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0collect__defines_lambda447(VEnv * env) {
 static VDebugInfo dbg = { "_V0collect__defines_lambda447" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0collect__defines_lambda447, env) {
  // (set! (close _V0collect__defines_k507) (bruijn loop 0 1) (close _V0loop_lambda448))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0collect__defines_k507, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda448, env)})
    );
 }
}
static void _V0collect__defines_lambda446(VEnv * env) {
 static VDebugInfo dbg = { "_V0collect__defines_lambda446" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0collect__defines_lambda446, env) {
 if (env->num_vars == 2) {
  // ((close _V0collect__defines_lambda447) (bruijn ##k.3819 0 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0collect__defines_lambda447, env)},
      env->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0collect__defines_lambda446, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void expand_lambda4(VEnv * env) {
 static VDebugInfo dbg = { "expand_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_lambda4, env) {
  // (set! (close expand_k40) (bruijn collect-defines 0 1) (close _V0collect__defines_lambda446))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k40, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0collect__defines_lambda446, env)})
    );
 }
}
static void expand_lambda3(VEnv * env) {
 static VDebugInfo dbg = { "expand_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_lambda3, env) {
  // ((close expand_lambda4) (bruijn ##k.249 0 0) #f #f #f #f #f #f #f #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(expand_lambda4, env)},
      env->vars[0],
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
static void expand_k39(VEnv * env) {
 static VDebugInfo dbg = { "expand_k39" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k39, env) {
 if (env->num_vars == 1) {
  // ((close expand_lambda3) (bruijn ##k.247 29 0) (bruijn ##x.4087 28 0) (bruijn ##x.4088 27 0) (bruijn ##x.4089 26 0) (bruijn ##x.4090 25 0) (bruijn ##x.4091 24 0) (bruijn ##x.4092 23 0) (bruijn ##x.4093 22 0) (bruijn ##x.4094 21 0) (bruijn ##x.4095 20 0) (bruijn ##x.4096 19 0) (bruijn ##x.4097 18 0) (bruijn ##x.4098 17 0) (bruijn ##x.4099 16 0) (bruijn ##x.4100 15 0) (bruijn ##x.4101 14 0) (bruijn ##x.4102 13 0) (bruijn ##x.4103 12 0) (bruijn ##x.4104 11 0) (bruijn ##x.4105 10 0) (bruijn ##x.4106 9 0) (bruijn ##x.4107 8 0) (bruijn ##x.4108 7 0) (bruijn ##x.4109 6 0) (bruijn ##x.4110 5 0) (bruijn ##x.4111 4 0) (bruijn ##x.4112 3 0) (bruijn ##x.4113 2 0) (bruijn ##x.4114 1 0) (bruijn ##x.4115 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(expand_lambda3, env)},
      VGetArg(env, 29, 0),
      VGetArg(env, 28, 0),
      VGetArg(env, 27, 0),
      VGetArg(env, 26, 0),
      VGetArg(env, 25, 0),
      VGetArg(env, 24, 0),
      VGetArg(env, 23, 0),
      VGetArg(env, 22, 0),
      VGetArg(env, 21, 0),
      VGetArg(env, 20, 0),
      VGetArg(env, 19, 0),
      VGetArg(env, 18, 0),
      VGetArg(env, 17, 0),
      VGetArg(env, 16, 0),
      VGetArg(env, 15, 0),
      VGetArg(env, 14, 0),
      VGetArg(env, 13, 0),
      VGetArg(env, 12, 0),
      VGetArg(env, 11, 0),
      VGetArg(env, 10, 0),
      VGetArg(env, 9, 0),
      VGetArg(env, 8, 0),
      VGetArg(env, 7, 0),
      VGetArg(env, 6, 0),
      VGetArg(env, 5, 0),
      VGetArg(env, 4, 0),
      env->up->up->up->vars[0],
      env->up->up->vars[0],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to expand_k39, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k38(VEnv * env) {
 static VDebugInfo dbg = { "expand_k38" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k38, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 28 1) (close expand_k39) (quote -))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k39, env)}),
      VEncodePointer(&_V0__.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k38, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k37(VEnv * env) {
 static VDebugInfo dbg = { "expand_k37" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k37, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 27 1) (close expand_k38) (quote =))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k38, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k37, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k36(VEnv * env) {
 static VDebugInfo dbg = { "expand_k36" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k36, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 26 1) (close expand_k37) (quote +))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k37, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k36, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k35(VEnv * env) {
 static VDebugInfo dbg = { "expand_k35" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k35, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 25 1) (close expand_k36) (quote cadr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k36, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k35, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k34(VEnv * env) {
 static VDebugInfo dbg = { "expand_k34" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k34, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 24 1) (close expand_k35) (quote cddr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k35, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k34, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k33(VEnv * env) {
 static VDebugInfo dbg = { "expand_k33" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k33, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 23 1) (close expand_k34) (quote fold))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k34, env)}),
      VEncodePointer(&_V0fold.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k33, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k32(VEnv * env) {
 static VDebugInfo dbg = { "expand_k32" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k32, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 22 1) (close expand_k33) (quote free-variables))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k33, env)}),
      VEncodePointer(&_V0free__variables.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k32, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k31(VEnv * env) {
 static VDebugInfo dbg = { "expand_k31" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k31, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 21 1) (close expand_k32) (quote car))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k32, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k31, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k30(VEnv * env) {
 static VDebugInfo dbg = { "expand_k30" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k30, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 20 1) (close expand_k31) (quote pair?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k31, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k30, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k29(VEnv * env) {
 static VDebugInfo dbg = { "expand_k29" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k29, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 19 1) (close expand_k30) (quote null?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k30, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k29, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k28(VEnv * env) {
 static VDebugInfo dbg = { "expand_k28" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k28, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 18 1) (close expand_k29) (quote list))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k29, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k28, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k27(VEnv * env) {
 static VDebugInfo dbg = { "expand_k27" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k27, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 17 1) (close expand_k28) (quote string?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k28, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k27, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k26(VEnv * env) {
 static VDebugInfo dbg = { "expand_k26" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k26, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 16 1) (close expand_k27) (quote mangle-library))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k27, env)}),
      VEncodePointer(&_V0mangle__library.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k26, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k25(VEnv * env) {
 static VDebugInfo dbg = { "expand_k25" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k25, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 15 1) (close expand_k26) (quote apply))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k26, env)}),
      VEncodePointer(&_V0apply.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k25, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k24(VEnv * env) {
 static VDebugInfo dbg = { "expand_k24" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k24, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 14 1) (close expand_k25) (quote error))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k25, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k24, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k23(VEnv * env) {
 static VDebugInfo dbg = { "expand_k23" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k23, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 13 1) (close expand_k24) (quote reverse))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k24, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k23, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k22(VEnv * env) {
 static VDebugInfo dbg = { "expand_k22" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k22, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 12 1) (close expand_k23) (quote call/cc))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k23, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k22, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k21(VEnv * env) {
 static VDebugInfo dbg = { "expand_k21" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k21, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 11 1) (close expand_k22) (quote call-with-values))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k22, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k21, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k20(VEnv * env) {
 static VDebugInfo dbg = { "expand_k20" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k20, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 10 1) (close expand_k21) (quote map))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k21, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k20, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k19(VEnv * env) {
 static VDebugInfo dbg = { "expand_k19" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k19, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 9 1) (close expand_k20) (quote symbol?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k20, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k19, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k18(VEnv * env) {
 static VDebugInfo dbg = { "expand_k18" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k18, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 8 1) (close expand_k19) (quote not))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k19, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k18, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k17(VEnv * env) {
 static VDebugInfo dbg = { "expand_k17" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k17, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 7 1) (close expand_k18) (quote atom?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k18, env)}),
      VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k17, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k16(VEnv * env) {
 static VDebugInfo dbg = { "expand_k16" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k16, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 6 1) (close expand_k17) (quote equal?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k17, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k16, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k15(VEnv * env) {
 static VDebugInfo dbg = { "expand_k15" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k15, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 5 1) (close expand_k16) (quote transform-match))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k16, env)}),
      VEncodePointer(&_V0transform__match.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k15, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k14(VEnv * env) {
 static VDebugInfo dbg = { "expand_k14" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k14, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 4 1) (close expand_k15) (quote eqv?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k15, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k14, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k13(VEnv * env) {
 static VDebugInfo dbg = { "expand_k13" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k13, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 3 1) (close expand_k14) (quote gensym))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k14, env)}),
      VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k13, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k12(VEnv * env) {
 static VDebugInfo dbg = { "expand_k12" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k12, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 2 1) (close expand_k13) (quote append))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k13, env)}),
      VEncodePointer(&_V0append.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k12, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k11(VEnv * env) {
 static VDebugInfo dbg = { "expand_k11" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k11, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 1 1) (close expand_k12) (quote cdr))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k12, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k11, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_lambda2(VEnv * env) {
 static VDebugInfo dbg = { "expand_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_lambda2, env) {
  // ((bruijn ##vcore.import 0 1) (close expand_k11) (quote cons))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k11, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k10(VEnv * env) {
 static VDebugInfo dbg = { "expand_k10" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k10, env) {
 if (env->num_vars == 1) {
  // ((close expand_lambda2) (bruijn ##k.245 10 0) (bruijn ##x.4116 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(expand_lambda2, env)},
      VGetArg(env, 10, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to expand_k10, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k9(VEnv * env) {
 static VDebugInfo dbg = { "expand_k9" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k9, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.4117 8 0) (close expand_k10) (##string ##string.4159) (bruijn ##x.4118 6 0) (bruijn ##x.4119 4 0) (bruijn ##x.4120 2 0) (bruijn ##x.4121 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 0)),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k10, env)}),
      VEncodePointer(&_V10string_D4159.sym, VPOINTER_OTHER),
      VGetArg(env, 6, 0),
      VGetArg(env, 4, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to expand_k9, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k8(VEnv * env) {
 static VDebugInfo dbg = { "expand_k8" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k8, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.4122 0 0) (close expand_k9) (##string ##string.4160))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k9, env)}),
      VEncodePointer(&_V10string_D4160.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k8, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k7(VEnv * env) {
 static VDebugInfo dbg = { "expand_k7" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k7, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close expand_k8) (##string ##string.4145))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k8, env)}),
      VEncodePointer(&_V10string_D4145.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k7, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k6(VEnv * env) {
 static VDebugInfo dbg = { "expand_k6" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k6, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.4123 0 0) (close expand_k7) (##string ##string.4161))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k7, env)}),
      VEncodePointer(&_V10string_D4161.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k6, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k5(VEnv * env) {
 static VDebugInfo dbg = { "expand_k5" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k5, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close expand_k6) (##string ##string.4145))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k6, env)}),
      VEncodePointer(&_V10string_D4145.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k5, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k4(VEnv * env) {
 static VDebugInfo dbg = { "expand_k4" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k4, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.4124 0 0) (close expand_k5) (##string ##string.4162))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k5, env)}),
      VEncodePointer(&_V10string_D4162.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k4, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k3(VEnv * env) {
 static VDebugInfo dbg = { "expand_k3" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k3, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close expand_k4) (##string ##string.4145))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k4, env)}),
      VEncodePointer(&_V10string_D4145.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k3, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k2(VEnv * env) {
 static VDebugInfo dbg = { "expand_k2" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k2, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.4125 0 0) (close expand_k3) (##string ##string.4163))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k3, env)}),
      VEncodePointer(&_V10string_D4163.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k2, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_k1(VEnv * env) {
 static VDebugInfo dbg = { "expand_k1" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_k1, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close expand_k2) (##string ##string.4145))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k2, env)}),
      VEncodePointer(&_V10string_D4145.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_k1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void expand_lambda1(VEnv * env) {
 static VDebugInfo dbg = { "expand_lambda1" };
 VRecordCall(&dbg);
 V_GC_CHECK(expand_lambda1, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close expand_k1) (##string ##string.4155))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(expand_k1, env)}),
      VEncodePointer(&_V10string_D4155.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to expand_lambda1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
void (*expand)(VEnv*) = expand_lambda1;
