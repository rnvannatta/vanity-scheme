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
static struct { VBlob sym; char bytes[21]; } _V10string_D1630 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1629 = { { VSTRING, 6 }, "utils" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1628 = { { VSTRING, 6 }, "match" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1627 = { { VSTRING, 10 }, "variables" };
static struct { VBlob sym; char bytes[7]; } _V10string_D1626 = { { VSTRING, 7 }, "expand" };
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
static struct { VBlob sym; char bytes[43]; } _V10string_D1625 = { { VSTRING, 43 }, "expressions not permitted in libraries yet" };
static struct { VBlob sym; char bytes[7]; } _V0export = { { VSYMBOL, 7 }, "export" };
static struct { VBlob sym; char bytes[20]; } _V10vcore_Dmake__import = { { VSYMBOL, 20 }, "##vcore.make-import" };
static struct { VBlob sym; char bytes[15]; } _V10vcore_Dimport = { { VSYMBOL, 15 }, "##vcore.import" };
static struct { VBlob sym; char bytes[43]; } _V10string_D1624 = { { VSTRING, 43 }, "library has free variables but no imports:" };
static struct { VBlob sym; char bytes[41]; } _V10string_D1623 = { { VSTRING, 41 }, "imports to library must all be c strings" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1622 = { { VSTRING, 20 }, "duplicate in lambda" };
static struct { VBlob sym; char bytes[15]; } _V10string_D1621 = { { VSTRING, 15 }, "invalid lambda" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1620 = { { VSTRING, 20 }, "invalid lambda args" };
static struct { VBlob sym; char bytes[14]; } _V10string_D1619 = { { VSTRING, 14 }, "malformed let" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1618 = { { VSTRING, 17 }, "no matching case" };
static struct { VBlob sym; char bytes[61]; } _V10string_D1617 = { { VSTRING, 61 }, "##vcore.declare's second argument is not a lambda expression" };
static struct { VBlob sym; char bytes[17]; } _V10vcore_Dfunction = { { VSYMBOL, 17 }, "##vcore.function" };
static struct { VBlob sym; char bytes[3]; } _V0ok = { { VSYMBOL, 3 }, "ok" };
static struct { VBlob sym; char bytes[16]; } _V10vcore_Ddeclare = { { VSYMBOL, 16 }, "##vcore.declare" };
static struct { VBlob sym; char bytes[49]; } _V10string_D1616 = { { VSTRING, 49 }, "##vcore.declare's first argument is not a string" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1615 = { { VSTRING, 17 }, "malformed define" };
static struct { VBlob sym; char bytes[40]; } _V10string_D1614 = { { VSTRING, 40 }, "define's first argument is not a symbol" };
static struct { VBlob sym; char bytes[21]; } _V10vcore_Dload__library = { { VSYMBOL, 21 }, "##vcore.load-library" };
static struct { VBlob sym; char bytes[20]; } _V10vcore_Dmultidefine = { { VSYMBOL, 20 }, "##vcore.multidefine" };
static struct { VBlob sym; char bytes[7]; } _V0import = { { VSYMBOL, 7 }, "import" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1613 = { { VSTRING, 25 }, "malformed define-library" };
static struct { VBlob sym; char bytes[15]; } _V0define__library = { { VSYMBOL, 15 }, "define-library" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1612 = { { VSTRING, 27 }, "stray null list in program" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1611 = { { VSTRING, 31 }, "stray improper list in program" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1610 = { { VSTRING, 51 }, "function application's first arg is not a function" };
static struct { VBlob sym; char bytes[6]; } _V0match = { { VSYMBOL, 6 }, "match" };
static struct { VBlob sym; char bytes[7]; } _V0define = { { VSYMBOL, 7 }, "define" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1609 = { { VSTRING, 24 }, "stray define in program" };
static struct { VBlob sym; char bytes[15]; } _V10string_D1608 = { { VSTRING, 15 }, "malformed set!" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1607 = { { VSTRING, 38 }, "set!'s first argument is not a symbol" };
static struct { VBlob sym; char bytes[14]; } _V10string_D1606 = { { VSTRING, 14 }, "malformed cut" };
static struct { VBlob sym; char bytes[6]; } _V0_L_D_D_D_G = { { VSYMBOL, 6 }, "<...>" };
static struct { VBlob sym; char bytes[39]; } _V10string_D1605 = { { VSTRING, 39 }, "cut: ellipses syntax not supported yet" };
static struct { VBlob sym; char bytes[3]; } _V0_L_G = { { VSYMBOL, 3 }, "<>" };
static struct { VBlob sym; char bytes[4]; } _V0cut = { { VSYMBOL, 4 }, "cut" };
static struct { VBlob sym; char bytes[9]; } _V0cut__iter = { { VSYMBOL, 9 }, "cut-iter" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1604 = { { VSTRING, 25 }, "exhausted case statement" };
static struct { VBlob sym; char bytes[5]; } _V0eqv_Q = { { VSYMBOL, 5 }, "eqv\?" };
static struct { VBlob sym; char bytes[5]; } _V0case = { { VSYMBOL, 5 }, "case" };
static struct { VBlob sym; char bytes[10]; } _V0case__iter = { { VSYMBOL, 10 }, "case-iter" };
static struct { VBlob sym; char bytes[15]; } _V10string_D1603 = { { VSTRING, 15 }, "malformed cond" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1602 = { { VSTRING, 25 }, "exhausted cond statement" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[3]; } _V0_E_G = { { VSYMBOL, 3 }, "=>" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1601 = { { VSTRING, 2 }, "x" };
static struct { VBlob sym; char bytes[5]; } _V0cond = { { VSYMBOL, 5 }, "cond" };
static struct { VBlob sym; char bytes[5]; } _V0else = { { VSYMBOL, 5 }, "else" };
static struct { VBlob sym; char bytes[3]; } _V0or = { { VSYMBOL, 3 }, "or" };
static struct { VBlob sym; char bytes[4]; } _V0and = { { VSYMBOL, 4 }, "and" };
static struct { VBlob sym; char bytes[13]; } _V10string_D1600 = { { VSTRING, 13 }, "malformed if" };
static struct { VBlob sym; char bytes[3]; } _V0if = { { VSYMBOL, 3 }, "if" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1599 = { { VSTRING, 16 }, "malformed begin" };
static struct { VBlob sym; char bytes[15]; } _V10string_D1598 = { { VSTRING, 15 }, "malformed let*" };
static struct { VBlob sym; char bytes[5]; } _V0let_S = { { VSYMBOL, 5 }, "let*" };
static struct { VBlob sym; char bytes[8]; } _V0letrec_S = { { VSYMBOL, 8 }, "letrec*" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1597 = { { VSTRING, 17 }, "malformed letrec" };
static struct { VBlob sym; char bytes[5]; } _V0set_B = { { VSYMBOL, 5 }, "set!" };
static struct { VBlob sym; char bytes[7]; } _V0letrec = { { VSYMBOL, 7 }, "letrec" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1596 = { { VSTRING, 22 }, "malformed let-values*" };
static struct { VBlob sym; char bytes[6]; } _V0begin = { { VSYMBOL, 6 }, "begin" };
static struct { VBlob sym; char bytes[12]; } _V0let_S__values = { { VSYMBOL, 12 }, "let*-values" };
static struct { VBlob sym; char bytes[17]; } _V0call__with__values = { { VSYMBOL, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[4]; } _V0let = { { VSYMBOL, 4 }, "let" };
static struct { VBlob sym; char bytes[6]; } _V0quote = { { VSYMBOL, 6 }, "quote" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dqcons = { { VSYMBOL, 12 }, "##sys.qcons" };
static struct { VBlob sym; char bytes[11]; } _V0quasiquote = { { VSYMBOL, 11 }, "quasiquote" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1595 = { { VSTRING, 22 }, "malformed case-lambda" };
static struct { VBlob sym; char bytes[12]; } _V0case__lambda = { { VSYMBOL, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[7]; } _V0lambda = { { VSYMBOL, 7 }, "lambda" };
static struct { VBlob sym; char bytes[16]; } _V0expand__toplevel = { { VSYMBOL, 16 }, "expand-toplevel" };
static void expand_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k43, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.252 9 0) (##inline ##sys.cons (##inline ##sys.cons (quote expand-toplevel) (bruijn expand-toplevel 9 8)) (quote ())))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
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
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k47, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 6 1) (bruijn ##k.967 4 0) (bruijn ##x.970 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 16 1) (close _V0expand__syntax_k47) (quote lambda) (bruijn ##x.971 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k47, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0expand__syntax_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-lambda 14 6) (close _V0expand__syntax_k46) (bruijn ##x.972 0 0))
V_CALL(VGetArg(upenv, 14-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k46, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.969 0 0) ((bruijn cdr 14 2) (close _V0expand__syntax_k45) (bruijn expr 4 1)) ((bruijn ##k.967 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k45, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.104 0 1)) ((bruijn equal? 13 7) (close _V0expand__syntax_k44) (quote lambda) (##inline ##sys.car (bruijn ##expr.104 0 1))) ((bruijn ##k.967 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k44, env)}),
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
static void _V0expand__syntax_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k50, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.948 1 0) (##inline ##sys.cdr (bruijn ##expr.105 5 1)) (quote ()))
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
static void _V0loop_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k52, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.108 4 1) (bruijn ##k.959 1 0) (bruijn ##expr.110 2 1) (bruijn ##x.960 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.110 1 1))) ((bruijn reverse 20 8) (close _V0loop_k52) (bruijn ##lamb.107 1 2)) ((bruijn ##k.959 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k52, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k55, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.108 7 1) (bruijn ##k.953 2 0) (bruijn ##expr.110 5 1) (bruijn ##x.955 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 23 8) (close _V0loop_k55) (bruijn ##lamb.107 4 2))
V_CALL(VGetArg(upenv, 23-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k55, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.109 0 1) (close _V0loop_k54) (##inline ##sys.cdr (bruijn ##expr.110 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.110 3 1)) (bruijn ##lamb.107 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k54, env)}),
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
static void _V0loop_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 21 9) (bruijn ##k.952 0 0) (close _V0loop_lambda14))
V_CALL(VGetArg(upenv, 21-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda14, env)})
    );
 }
}
static void _V0loop_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 20 10) (bruijn ##k.950 1 0) (close _V0loop_lambda13) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 20-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda13, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda12, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k51) (close _V0loop_k53))
V_CALL_FUNC(_V0loop_k51, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k53, env)})
    );
 }
}
static void _V0expand__syntax_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0expand__syntax_k50) (bruijn loop 0 1) (close _V0loop_lambda12))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k50, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda12, env)})
    );
 }
}
static void _V0expand__syntax_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda11) (bruijn ##k.947 0 0) #f)
V_CALL_FUNC(_V0expand__syntax_lambda11, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__syntax_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 16 9) (bruijn ##k.946 0 0) (close _V0expand__syntax_lambda10))
V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda10, env)})
    );
 }
}
static void _V0expand__syntax_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k56, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 6 1) (bruijn ##k.962 1 0) (##inline ##sys.cons (quote case-lambda) (bruijn ##x.965 0 0)))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->vars[0],
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      _var0
    )

    );
 }
}
static void _V0expand__syntax_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 16 14) (close _V0expand__syntax_k56) (bruijn expand-lambda 15 6) (bruijn lamb 0 2)) ((bruijn ##k.962 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k56, env)}),
      VGetArg(upenv, 15-1, 6),
      _var2
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.945 0 0) ((bruijn call-with-values 15 10) (bruijn ##k.943 1 0) (close _V0expand__syntax_lambda9) (close _V0expand__syntax_lambda15)) ((bruijn ##k.943 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda9, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda15, env)})
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.105 0 1)) ((bruijn equal? 14 7) (close _V0expand__syntax_k49) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.105 0 1))) ((bruijn ##k.943 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k49, env)}),
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
static void _V0expand__syntax_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k59, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 6 1) (bruijn ##k.938 2 0) (bruijn ##x.941 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.940 0 0) ((bruijn error 16 15) (close _V0expand__syntax_k59) (##string ##string.1595) (bruijn expr 6 1)) ((bruijn ##k.938 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k59, env)}),
      VEncodePointer(&_V10string_D1595.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.111 0 1)) ((bruijn equal? 15 7) (close _V0expand__syntax_k58) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.111 0 1))) ((bruijn ##k.938 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 15-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k58, env)}),
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
static void _V0expand__syntax_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k64, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 9 1) (bruijn ##k.929 4 0) (bruijn ##x.934 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 18 9) (close _V0expand__syntax_k64) (bruijn ##x.935 0 0))
V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k64, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.113 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.113 0 0))) ((bruijn expand-quasiquote 17 2) (close _V0expand__syntax_k63) 1 (##inline ##sys.car (bruijn ##expr.113 0 0))) ((bruijn ##k.929 2 0) #f)) ((bruijn ##k.929 2 0) #f))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k63, env)}),
      VEncodeInt(1l),
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
static void _V0expand__syntax_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.931 0 0) ((close _V0expand__syntax_k62) (##inline ##sys.cdr (bruijn ##expr.112 1 1))) ((bruijn ##k.929 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k62, env, runtime,
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
static void _V0expand__syntax_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.112 0 1)) ((bruijn equal? 16 7) (close _V0expand__syntax_k61) (quote quasiquote) (##inline ##sys.car (bruijn ##expr.112 0 1))) ((bruijn ##k.929 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k61, env)}),
      VEncodePointer(&_V0quasiquote.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k69, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 10 1) (bruijn ##k.913 4 0) (bruijn ##x.919 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.116 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.115 1 0))) ((bruijn expand-syntax 19 9) (close _V0expand__syntax_k69) (##inline ##sys.cons (quote ##sys.qcons) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.116 0 0)) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (##inline ##sys.cdr (bruijn ##expr.116 0 0)) (quote ()))) (quote ()))))) ((bruijn ##k.913 3 0) #f)) ((bruijn ##k.913 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 19-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k69, env)}),
      VInlineCons(
VEncodePointer(&_V10sys_Dqcons.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
_var0
    )
,
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCdr(
_var0
    )
,
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
static void _V0expand__syntax_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.115 0 0)) ((close _V0expand__syntax_k68) (##inline ##sys.car (bruijn ##expr.115 0 0))) ((bruijn ##k.913 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k68, env, runtime,
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
static void _V0expand__syntax_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.915 0 0) ((close _V0expand__syntax_k67) (##inline ##sys.cdr (bruijn ##expr.114 1 1))) ((bruijn ##k.913 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k67, env, runtime,
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
static void _V0expand__syntax_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.114 0 1)) ((bruijn equal? 17 7) (close _V0expand__syntax_k66) (quote quote) (##inline ##sys.car (bruijn ##expr.114 0 1))) ((bruijn ##k.913 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 17-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k66, env)}),
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
static void _V0expand__syntax_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k72, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.118 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.118 0 0))) ((bruijn ##kk.102 9 1) (bruijn ##k.904 2 0) (##inline ##sys.cons (quote quote) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.118 0 0)) (quote ())))) ((bruijn ##k.904 2 0) #f)) ((bruijn ##k.904 2 0) #f))
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
      upenv->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
_var0
    )
,
      VNULL
    )

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
static void _V0expand__syntax_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.906 0 0) ((close _V0expand__syntax_k72) (##inline ##sys.cdr (bruijn ##expr.117 1 1))) ((bruijn ##k.904 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k72, env, runtime,
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
static void _V0expand__syntax_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.117 0 1)) ((bruijn equal? 18 7) (close _V0expand__syntax_k71) (quote quote) (##inline ##sys.car (bruijn ##expr.117 0 1))) ((bruijn ##k.904 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k71, env)}),
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
static void _V0expand__syntax_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k76, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 11 1) (bruijn ##k.898 3 0) (bruijn ##x.901 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-let 20 7) (close _V0expand__syntax_k76) (bruijn ##x.902 0 0))
V_CALL(VGetArg(upenv, 20-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k76, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.900 0 0) ((bruijn cdr 20 2) (close _V0expand__syntax_k75) (bruijn expr 10 1)) ((bruijn ##k.898 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k75, env)}),
      VGetArg(upenv, 10-1, 1)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.119 0 1)) ((bruijn equal? 19 7) (close _V0expand__syntax_k74) (quote let) (##inline ##sys.car (bruijn ##expr.119 0 1))) ((bruijn ##k.898 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k74, env)}),
      VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k83, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 15 1) (bruijn ##k.876 6 0) (bruijn ##x.884 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0expand__syntax_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.124 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.124 0 0))) ((bruijn expand-syntax 24 9) (close _V0expand__syntax_k83) (##inline ##sys.cons (quote call-with-values) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.124 0 0)) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.123 1 0)) (##inline ##sys.cons (##inline ##sys.cons (quote let*-values) (##inline ##sys.cons (##inline ##sys.cdr (bruijn ##expr.122 2 0)) (##inline ##sys.cdr (bruijn ##expr.121 3 0)))) (quote ())))) (quote ()))))) ((bruijn ##k.876 5 0) #f)) ((bruijn ##k.876 5 0) #f))
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
V_CALL(VGetArg(upenv, 24-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k83, env)}),
      VInlineCons(
VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
VInlineCar(
_var0
    )
,
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
upenv->vars[0]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0let_S__values.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCdr(
upenv->up->vars[0]
    )
,
      VInlineCdr(
upenv->up->up->vars[0]
    )

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
static void _V0expand__syntax_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.123 0 0)) ((close _V0expand__syntax_k82) (##inline ##sys.cdr (bruijn ##expr.123 0 0))) ((bruijn ##k.876 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k82, env, runtime,
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
static void _V0expand__syntax_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.122 0 0)) ((close _V0expand__syntax_k81) (##inline ##sys.car (bruijn ##expr.122 0 0))) ((bruijn ##k.876 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k81, env, runtime,
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
static void _V0expand__syntax_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 0)) ((close _V0expand__syntax_k80) (##inline ##sys.car (bruijn ##expr.121 0 0))) ((bruijn ##k.876 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k80, env, runtime,
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
static void _V0expand__syntax_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.878 0 0) ((close _V0expand__syntax_k79) (##inline ##sys.cdr (bruijn ##expr.120 1 1))) ((bruijn ##k.876 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k79, env, runtime,
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
static void _V0expand__syntax_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.120 0 1)) ((bruijn equal? 20 7) (close _V0expand__syntax_k78) (quote let*-values) (##inline ##sys.car (bruijn ##expr.120 0 1))) ((bruijn ##k.876 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k78, env)}),
      VEncodePointer(&_V0let_S__values.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k87, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 13 1) (bruijn ##k.867 3 0) (bruijn ##x.872 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.126 0 0)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.126 0 0))) ((bruijn expand-syntax 22 9) (close _V0expand__syntax_k87) (##inline ##sys.cons (quote begin) (##inline ##sys.cdr (bruijn ##expr.126 0 0)))) ((bruijn ##k.867 2 0) #f)) ((bruijn ##k.867 2 0) #f))
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
V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k87, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCdr(
_var0
    )

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
static void _V0expand__syntax_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.869 0 0) ((close _V0expand__syntax_k86) (##inline ##sys.cdr (bruijn ##expr.125 1 1))) ((bruijn ##k.867 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k86, env, runtime,
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
static void _V0expand__syntax_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.125 0 1)) ((bruijn equal? 21 7) (close _V0expand__syntax_k85) (quote let*-values) (##inline ##sys.car (bruijn ##expr.125 0 1))) ((bruijn ##k.867 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k85, env)}),
      VEncodePointer(&_V0let_S__values.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k90, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 13 1) (bruijn ##k.861 2 0) (bruijn ##x.864 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.863 0 0) ((bruijn error 23 15) (close _V0expand__syntax_k90) (##string ##string.1596) (##inline ##sys.cons (quote letrec) (##inline ##sys.cdr (bruijn ##expr.127 1 1)))) ((bruijn ##k.861 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k90, env)}),
      VEncodePointer(&_V10string_D1596.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.127 0 1)) ((bruijn equal? 22 7) (close _V0expand__syntax_k89) (quote let*-values) (##inline ##sys.car (bruijn ##expr.127 0 1))) ((bruijn ##k.861 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k89, env)}),
      VEncodePointer(&_V0let_S__values.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k94, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.825 1 0) (##inline ##sys.car (bruijn ##expr.129 4 0)) (quote ()) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCar(
upenv->up->up->up->vars[0]
    )
,
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k97, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 5 1) (bruijn ##k.843 2 0) (bruijn ##expr.135 3 1) (bruijn ##x.844 1 0) (bruijn ##x.845 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 31 8) (close _V0loop_k97) (bruijn ##vals.132 2 3))
V_CALL(VGetArg(upenv, 31-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k97, env)}),
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.135 1 1))) ((bruijn reverse 30 8) (close _V0loop_k96) (bruijn ##xs.131 1 2)) ((bruijn ##k.843 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 30-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k96, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k101, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.137 0 0))) ((bruijn ##kk.134 3 1) (bruijn ##k.835 1 0) (##inline ##sys.cdr (bruijn ##expr.135 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.136 2 0)) (bruijn ##xs.131 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.137 0 0)) (bruijn ##vals.132 6 3))) ((bruijn ##k.835 1 0) #f)) ((bruijn ##k.835 1 0) #f))
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
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )
,
      VInlineCons(
VInlineCar(
upenv->up->vars[0]
    )
,
      VGetArg(upenv, 6-1, 2)
    )
,
      VInlineCons(
VInlineCar(
_var0
    )
,
      VGetArg(upenv, 6-1, 3)
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
static void _V0loop_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.136 1 0)) ((close _V0loop_k101) (##inline ##sys.cdr (bruijn ##expr.136 1 0))) ((bruijn ##k.835 0 0) #f))
if(VDecodeBool(
VInlinePairP(
upenv->vars[0]
    )
)) {
V_CALL_FUNC(_V0loop_k101, env, runtime,
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
static void _V0loop_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k104, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.133 9 1) (bruijn ##k.830 4 0) (bruijn ##expr.135 7 1) (bruijn ##x.832 1 0) (bruijn ##x.833 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 35 8) (close _V0loop_k104) (bruijn ##vals.132 6 3))
V_CALL(VGetArg(upenv, 35-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k104, env)}),
      VGetArg(upenv, 6-1, 3)
    );
 }
}
static void _V0loop_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 34 8) (close _V0loop_k103) (bruijn ##xs.131 5 2))
V_CALL(VGetArg(upenv, 34-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k103, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k100) (close _V0loop_k102))
V_CALL_FUNC(_V0loop_k100, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k102, env)})
    );
 }
}
static void _V0loop_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k99) (##inline ##sys.car (bruijn ##expr.135 3 1)))
V_CALL_FUNC(_V0loop_k99, env, runtime,
      VInlineCar(
upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 31 9) (bruijn ##k.829 0 0) (close _V0loop_lambda30))
V_CALL(VGetArg(upenv, 31-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda30, env)})
    );
 }
}
static void _V0loop_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 30 10) (bruijn ##k.827 1 0) (close _V0loop_lambda29) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 30-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda29, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda28, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda28, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k95) (close _V0loop_k98))
V_CALL_FUNC(_V0loop_k95, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k98, env)})
    );
 }
}
static void _V0expand__syntax_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0expand__syntax_k94) (bruijn loop 0 1) (close _V0loop_lambda28))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k94, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda28, env)})
    );
 }
}
static void _V0expand__syntax_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda27) (bruijn ##k.824 0 0) #f)
V_CALL_FUNC(_V0expand__syntax_lambda27, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__syntax_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 26 9) (bruijn ##k.823 0 0) (close _V0expand__syntax_lambda26))
V_CALL(VGetArg(upenv, 26-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda26, env)})
    );
 }
}
static void _V0expand__syntax_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k108, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 19 1) (bruijn ##k.847 4 0) (bruijn ##x.849 0 0))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 28 9) (close _V0expand__syntax_k108) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 3 2) (bruijn ##x.855 1 0))) (bruijn ##x.852 0 0)))
V_CALL(VGetArg(upenv, 28-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k108, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[2],
      upenv->vars[0]
    )

    )
,
      _var0
    )

    );
 }
}
static void _V0expand__syntax_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.853 0 0) #f)
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__syntax_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 28 14) (close _V0expand__syntax_k107) (close _V0expand__syntax_lambda32) (bruijn xs 2 2))
V_CALL(VGetArg(upenv, 28-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k107, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda32, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0expand__syntax_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append 27 3) (close _V0expand__syntax_k106) (bruijn ##x.856 0 0) (##inline ##sys.cdr (bruijn ##expr.129 2 0)))
V_CALL(VGetArg(upenv, 27-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k106, env)}),
      _var0,
      VInlineCdr(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0expand__syntax_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda33, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##k.857 0 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn x 0 1) (##inline ##sys.cons (bruijn val 0 2) (quote ())))))
V_CALL(_var0, runtime,
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
static void _V0expand__syntax_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0expand__syntax_lambda31, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda31, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 26 14) (close _V0expand__syntax_k105) (close _V0expand__syntax_lambda33) (bruijn xs 0 2) (bruijn vals 0 3)) ((bruijn ##k.847 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 26-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k105, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda33, env)}),
      _var2,
      _var3
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.129 0 0)) ((bruijn call-with-values 25 10) (bruijn ##k.819 2 0) (close _V0expand__syntax_lambda25) (close _V0expand__syntax_lambda31)) ((bruijn ##k.819 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 10), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda25, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda31, env)})
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.821 0 0) ((close _V0expand__syntax_k93) (##inline ##sys.cdr (bruijn ##expr.128 1 1))) ((bruijn ##k.819 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k93, env, runtime,
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
static void _V0expand__syntax_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.128 0 1)) ((bruijn equal? 23 7) (close _V0expand__syntax_k92) (quote letrec) (##inline ##sys.car (bruijn ##expr.128 0 1))) ((bruijn ##k.819 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k92, env)}),
      VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k111, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 15 1) (bruijn ##k.813 2 0) (bruijn ##x.816 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.815 0 0) ((bruijn error 25 15) (close _V0expand__syntax_k111) (##string ##string.1597) (##inline ##sys.cons (quote letrec) (##inline ##sys.cdr (bruijn ##expr.138 1 1)))) ((bruijn ##k.813 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k111, env)}),
      VEncodePointer(&_V10string_D1597.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.138 0 1)) ((bruijn equal? 24 7) (close _V0expand__syntax_k110) (quote letrec) (##inline ##sys.car (bruijn ##expr.138 0 1))) ((bruijn ##k.813 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k110, env)}),
      VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k114, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 16 1) (bruijn ##k.807 2 0) (bruijn ##x.810 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.809 0 0) ((bruijn expand-syntax 25 9) (close _V0expand__syntax_k114) (##inline ##sys.cons (quote letrec) (##inline ##sys.cdr (bruijn ##expr.139 1 1)))) ((bruijn ##k.807 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k114, env)}),
      VInlineCons(
VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda35, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.139 0 1)) ((bruijn equal? 25 7) (close _V0expand__syntax_k113) (quote letrec*) (##inline ##sys.car (bruijn ##expr.139 0 1))) ((bruijn ##k.807 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k113, env)}),
      VEncodePointer(&_V0letrec_S.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k121, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.780 1 0) (##inline ##sys.cdr (bruijn ##expr.142 6 0)) (quote ()))
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
static void _V0loop_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k123, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.147 4 1) (bruijn ##k.791 1 0) (bruijn ##expr.149 2 1) (bruijn ##x.792 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.149 1 1))) ((bruijn reverse 36 8) (close _V0loop_k123) (bruijn ##rest.146 1 2)) ((bruijn ##k.791 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 36-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k123, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k126, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.147 7 1) (bruijn ##k.785 2 0) (bruijn ##expr.149 5 1) (bruijn ##x.787 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 39 8) (close _V0loop_k126) (bruijn ##rest.146 4 2))
V_CALL(VGetArg(upenv, 39-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k126, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.148 0 1) (close _V0loop_k125) (##inline ##sys.cdr (bruijn ##expr.149 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.149 3 1)) (bruijn ##rest.146 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k125, env)}),
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
static void _V0loop_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 37 9) (bruijn ##k.784 0 0) (close _V0loop_lambda42))
V_CALL(VGetArg(upenv, 37-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda42, env)})
    );
 }
}
static void _V0loop_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 36 10) (bruijn ##k.782 1 0) (close _V0loop_lambda41) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 36-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda41, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda40, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k122) (close _V0loop_k124))
V_CALL_FUNC(_V0loop_k122, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k124, env)})
    );
 }
}
static void _V0expand__syntax_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0expand__syntax_k121) (bruijn loop 0 1) (close _V0loop_lambda40))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k121, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda40, env)})
    );
 }
}
static void _V0expand__syntax_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda39) (bruijn ##k.779 0 0) #f)
V_CALL_FUNC(_V0expand__syntax_lambda39, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__syntax_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 32 9) (bruijn ##k.778 0 0) (close _V0expand__syntax_lambda38))
V_CALL(VGetArg(upenv, 32-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda38, env)})
    );
 }
}
static void _V0expand__syntax_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k127, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 22 1) (bruijn ##k.794 1 0) (bruijn ##x.796 0 0))
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda43, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn expand-syntax 31 9) (close _V0expand__syntax_k127) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.143 2 0)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.144 1 0)) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let*) (##inline ##sys.cons (bruijn rest 0 2) (##inline ##sys.cdr (bruijn ##expr.141 4 0)))) (quote ()))))) ((bruijn ##k.794 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 31-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k127, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VInlineCar(
upenv->up->vars[0]
    )
,
      VInlineCons(
VInlineCar(
upenv->vars[0]
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
VEncodePointer(&_V0let_S.sym, VPOINTER_OTHER),
      VInlineCons(
_var2,
      VInlineCdr(
upenv->up->up->up->vars[0]
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
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.144 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.144 0 0))) ((bruijn call-with-values 31 10) (bruijn ##k.770 5 0) (close _V0expand__syntax_lambda37) (close _V0expand__syntax_lambda43)) ((bruijn ##k.770 5 0) #f)) ((bruijn ##k.770 5 0) #f))
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
V_CALL(VGetArg(upenv, 31-1, 10), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda37, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda43, env)})
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
static void _V0expand__syntax_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.143 0 0)) ((close _V0expand__syntax_k120) (##inline ##sys.cdr (bruijn ##expr.143 0 0))) ((bruijn ##k.770 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k120, env, runtime,
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
static void _V0expand__syntax_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.142 0 0)) ((close _V0expand__syntax_k119) (##inline ##sys.car (bruijn ##expr.142 0 0))) ((bruijn ##k.770 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k119, env, runtime,
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
static void _V0expand__syntax_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.141 0 0)) ((close _V0expand__syntax_k118) (##inline ##sys.car (bruijn ##expr.141 0 0))) ((bruijn ##k.770 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k118, env, runtime,
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
static void _V0expand__syntax_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.772 0 0) ((close _V0expand__syntax_k117) (##inline ##sys.cdr (bruijn ##expr.140 1 1))) ((bruijn ##k.770 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k117, env, runtime,
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
static void _V0expand__syntax_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.140 0 1)) ((bruijn equal? 26 7) (close _V0expand__syntax_k116) (quote let*) (##inline ##sys.car (bruijn ##expr.140 0 1))) ((bruijn ##k.770 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 26-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k116, env)}),
      VEncodePointer(&_V0let_S.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k131, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 19 1) (bruijn ##k.761 3 0) (bruijn ##x.766 0 0))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.151 0 0)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.151 0 0))) ((bruijn expand-syntax 28 9) (close _V0expand__syntax_k131) (##inline ##sys.cons (quote begin) (##inline ##sys.cdr (bruijn ##expr.151 0 0)))) ((bruijn ##k.761 2 0) #f)) ((bruijn ##k.761 2 0) #f))
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
V_CALL(VGetArg(upenv, 28-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k131, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCdr(
_var0
    )

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
static void _V0expand__syntax_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.763 0 0) ((close _V0expand__syntax_k130) (##inline ##sys.cdr (bruijn ##expr.150 1 1))) ((bruijn ##k.761 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k130, env, runtime,
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
static void _V0expand__syntax_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.150 0 1)) ((bruijn equal? 27 7) (close _V0expand__syntax_k129) (quote let*) (##inline ##sys.car (bruijn ##expr.150 0 1))) ((bruijn ##k.761 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 27-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k129, env)}),
      VEncodePointer(&_V0let_S.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k134, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 19 1) (bruijn ##k.755 2 0) (bruijn ##x.758 0 0))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.757 0 0) ((bruijn error 29 15) (close _V0expand__syntax_k134) (##string ##string.1598) (##inline ##sys.cons (quote let*) (##inline ##sys.cdr (bruijn ##expr.152 1 1)))) ((bruijn ##k.755 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 29-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k134, env)}),
      VEncodePointer(&_V10string_D1598.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0let_S.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.152 0 1)) ((bruijn equal? 28 7) (close _V0expand__syntax_k133) (quote let*) (##inline ##sys.car (bruijn ##expr.152 0 1))) ((bruijn ##k.755 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 28-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k133, env)}),
      VEncodePointer(&_V0let_S.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k138, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 21 1) (bruijn ##k.747 3 0) (bruijn ##x.752 0 0))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.154 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.154 0 0))) ((bruijn expand-syntax 30 9) (close _V0expand__syntax_k138) (##inline ##sys.car (bruijn ##expr.154 0 0))) ((bruijn ##k.747 2 0) #f)) ((bruijn ##k.747 2 0) #f))
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
V_CALL(VGetArg(upenv, 30-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k138, env)}),
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
static void _V0expand__syntax_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.749 0 0) ((close _V0expand__syntax_k137) (##inline ##sys.cdr (bruijn ##expr.153 1 1))) ((bruijn ##k.747 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k137, env, runtime,
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
static void _V0expand__syntax_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.153 0 1)) ((bruijn equal? 29 7) (close _V0expand__syntax_k136) (quote begin) (##inline ##sys.car (bruijn ##expr.153 0 1))) ((bruijn ##k.747 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 29-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k136, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k144, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 24 1) (bruijn ##k.734 5 0) (##inline ##sys.cons (quote begin) (##inline ##sys.cons (bruijn ##x.742 1 0) (##inline ##sys.cons (bruijn ##x.744 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
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
static void _V0expand__syntax_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 33 9) (close _V0expand__syntax_k144) (##inline ##sys.car (bruijn ##expr.157 1 0)))
V_CALL(VGetArg(upenv, 33-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k144, env)}),
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0expand__syntax_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.157 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.157 0 0))) ((bruijn expand-syntax 32 9) (close _V0expand__syntax_k143) (##inline ##sys.car (bruijn ##expr.156 1 0))) ((bruijn ##k.734 3 0) #f)) ((bruijn ##k.734 3 0) #f))
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
V_CALL(VGetArg(upenv, 32-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k143, env)}),
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
static void _V0expand__syntax_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.156 0 0)) ((close _V0expand__syntax_k142) (##inline ##sys.cdr (bruijn ##expr.156 0 0))) ((bruijn ##k.734 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k142, env, runtime,
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
static void _V0expand__syntax_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.736 0 0) ((close _V0expand__syntax_k141) (##inline ##sys.cdr (bruijn ##expr.155 1 1))) ((bruijn ##k.734 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k141, env, runtime,
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
static void _V0expand__syntax_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.155 0 1)) ((bruijn equal? 30 7) (close _V0expand__syntax_k140) (quote begin) (##inline ##sys.car (bruijn ##expr.155 0 1))) ((bruijn ##k.734 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 30-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k140, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k148, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 23 1) (bruijn ##k.724 3 0) (bruijn ##x.728 0 0))
V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.159 0 0)) ((bruijn expand-syntax 32 9) (close _V0expand__syntax_k148) (##inline ##sys.cons (quote begin) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.159 0 0)) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (##inline ##sys.cdr (bruijn ##expr.159 0 0))) (quote ()))))) ((bruijn ##k.724 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 32-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k148, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
_var0
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCdr(
_var0
    )

    )
,
      VNULL
    )

    )

    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.726 0 0) ((close _V0expand__syntax_k147) (##inline ##sys.cdr (bruijn ##expr.158 1 1))) ((bruijn ##k.724 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k147, env, runtime,
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
static void _V0expand__syntax_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.158 0 1)) ((bruijn equal? 31 7) (close _V0expand__syntax_k146) (quote begin) (##inline ##sys.car (bruijn ##expr.158 0 1))) ((bruijn ##k.724 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 31-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k146, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k151, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 23 1) (bruijn ##k.718 2 0) (bruijn ##x.721 0 0))
V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.720 0 0) ((bruijn error 33 15) (close _V0expand__syntax_k151) (##string ##string.1599) (##inline ##sys.cons (quote begin) (##inline ##sys.cdr (bruijn ##expr.160 1 1)))) ((bruijn ##k.718 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 33-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k151, env)}),
      VEncodePointer(&_V10string_D1599.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.160 0 1)) ((bruijn equal? 32 7) (close _V0expand__syntax_k150) (quote begin) (##inline ##sys.car (bruijn ##expr.160 0 1))) ((bruijn ##k.718 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 32-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k150, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k156, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 26 1) (bruijn ##k.705 4 0) (bruijn ##x.711 0 0))
V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.163 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.163 0 0))) ((bruijn expand-syntax 35 9) (close _V0expand__syntax_k156) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.162 1 0)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.163 0 0)) (##inline ##sys.cons (quote #f) (quote ())))))) ((bruijn ##k.705 3 0) #f)) ((bruijn ##k.705 3 0) #f))
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
V_CALL(VGetArg(upenv, 35-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k156, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
upenv->vars[0]
    )
,
      VInlineCons(
VInlineCar(
_var0
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
static void _V0expand__syntax_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.162 0 0)) ((close _V0expand__syntax_k155) (##inline ##sys.cdr (bruijn ##expr.162 0 0))) ((bruijn ##k.705 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k155, env, runtime,
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
static void _V0expand__syntax_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.707 0 0) ((close _V0expand__syntax_k154) (##inline ##sys.cdr (bruijn ##expr.161 1 1))) ((bruijn ##k.705 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k154, env, runtime,
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
static void _V0expand__syntax_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.161 0 1)) ((bruijn equal? 33 7) (close _V0expand__syntax_k153) (quote if) (##inline ##sys.car (bruijn ##expr.161 0 1))) ((bruijn ##k.705 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 33-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k153, env)}),
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
static void _V0expand__syntax_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 30 1) (bruijn ##k.689 7 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn ##x.698 2 0) (##inline ##sys.cons (bruijn ##x.700 1 0) (##inline ##sys.cons (bruijn ##x.702 0 0) (quote ()))))))
V_CALL(VGetArg(upenv, 30-1, 1), runtime,
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
static void _V0expand__syntax_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 39 9) (close _V0expand__syntax_k164) (##inline ##sys.car (bruijn ##expr.167 2 0)))
V_CALL(VGetArg(upenv, 39-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k164, env)}),
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0expand__syntax_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 38 9) (close _V0expand__syntax_k163) (##inline ##sys.car (bruijn ##expr.166 2 0)))
V_CALL(VGetArg(upenv, 38-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k163, env)}),
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0expand__syntax_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.167 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.167 0 0))) ((bruijn expand-syntax 37 9) (close _V0expand__syntax_k162) (##inline ##sys.car (bruijn ##expr.165 2 0))) ((bruijn ##k.689 4 0) #f)) ((bruijn ##k.689 4 0) #f))
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
V_CALL(VGetArg(upenv, 37-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k162, env)}),
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
static void _V0expand__syntax_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.166 0 0)) ((close _V0expand__syntax_k161) (##inline ##sys.cdr (bruijn ##expr.166 0 0))) ((bruijn ##k.689 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k161, env, runtime,
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
static void _V0expand__syntax_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.165 0 0)) ((close _V0expand__syntax_k160) (##inline ##sys.cdr (bruijn ##expr.165 0 0))) ((bruijn ##k.689 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k160, env, runtime,
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
static void _V0expand__syntax_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.691 0 0) ((close _V0expand__syntax_k159) (##inline ##sys.cdr (bruijn ##expr.164 1 1))) ((bruijn ##k.689 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k159, env, runtime,
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
static void _V0expand__syntax_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.164 0 1)) ((bruijn equal? 34 7) (close _V0expand__syntax_k158) (quote if) (##inline ##sys.car (bruijn ##expr.164 0 1))) ((bruijn ##k.689 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 34-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k158, env)}),
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
static void _V0expand__syntax_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k167, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 26 1) (bruijn ##k.683 2 0) (bruijn ##x.686 0 0))
V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.685 0 0) ((bruijn error 36 15) (close _V0expand__syntax_k167) (##string ##string.1600) (##inline ##sys.cons (quote if) (##inline ##sys.cdr (bruijn ##expr.168 1 1)))) ((bruijn ##k.683 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 36-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k167, env)}),
      VEncodePointer(&_V10string_D1600.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.168 0 1)) ((bruijn equal? 35 7) (close _V0expand__syntax_k166) (quote if) (##inline ##sys.car (bruijn ##expr.168 0 1))) ((bruijn ##k.683 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 35-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k166, env)}),
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
static void _V0expand__syntax_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k169, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.679 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.169 1 1))) ((bruijn ##kk.102 26 1) (bruijn ##k.677 1 0) #t) ((bruijn ##k.677 1 0) #f)) ((bruijn ##k.677 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(true)
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
static void _V0expand__syntax_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.169 0 1)) ((bruijn equal? 36 7) (close _V0expand__syntax_k169) (quote and) (##inline ##sys.car (bruijn ##expr.169 0 1))) ((bruijn ##k.677 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 36-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k169, env)}),
      VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k173, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 29 1) (bruijn ##k.669 3 0) (bruijn ##x.674 0 0))
V_CALL(VGetArg(upenv, 29-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.171 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.171 0 0))) ((bruijn expand-syntax 38 9) (close _V0expand__syntax_k173) (##inline ##sys.car (bruijn ##expr.171 0 0))) ((bruijn ##k.669 2 0) #f)) ((bruijn ##k.669 2 0) #f))
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
V_CALL(VGetArg(upenv, 38-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k173, env)}),
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
static void _V0expand__syntax_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.671 0 0) ((close _V0expand__syntax_k172) (##inline ##sys.cdr (bruijn ##expr.170 1 1))) ((bruijn ##k.669 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k172, env, runtime,
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
static void _V0expand__syntax_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.170 0 1)) ((bruijn equal? 37 7) (close _V0expand__syntax_k171) (quote and) (##inline ##sys.car (bruijn ##expr.170 0 1))) ((bruijn ##k.669 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 37-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k171, env)}),
      VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k179, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 32 1) (bruijn ##k.655 5 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn ##x.663 1 0) (##inline ##sys.cons (bruijn ##x.665 0 0) (##inline ##sys.cons (quote #f) (quote ()))))))
V_CALL(VGetArg(upenv, 32-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
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
static void _V0expand__syntax_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 41 9) (close _V0expand__syntax_k179) (##inline ##sys.car (bruijn ##expr.174 1 0)))
V_CALL(VGetArg(upenv, 41-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k179, env)}),
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0expand__syntax_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.174 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.174 0 0))) ((bruijn expand-syntax 40 9) (close _V0expand__syntax_k178) (##inline ##sys.car (bruijn ##expr.173 1 0))) ((bruijn ##k.655 3 0) #f)) ((bruijn ##k.655 3 0) #f))
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
V_CALL(VGetArg(upenv, 40-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k178, env)}),
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
static void _V0expand__syntax_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.173 0 0)) ((close _V0expand__syntax_k177) (##inline ##sys.cdr (bruijn ##expr.173 0 0))) ((bruijn ##k.655 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k177, env, runtime,
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
static void _V0expand__syntax_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.657 0 0) ((close _V0expand__syntax_k176) (##inline ##sys.cdr (bruijn ##expr.172 1 1))) ((bruijn ##k.655 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k176, env, runtime,
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
static void _V0expand__syntax_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.172 0 1)) ((bruijn equal? 38 7) (close _V0expand__syntax_k175) (quote and) (##inline ##sys.car (bruijn ##expr.172 0 1))) ((bruijn ##k.655 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 38-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k175, env)}),
      VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k183, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 31 1) (bruijn ##k.644 3 0) (bruijn ##x.648 0 0))
V_CALL(VGetArg(upenv, 31-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.176 0 0)) ((bruijn expand-syntax 40 9) (close _V0expand__syntax_k183) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.176 0 0)) (##inline ##sys.cons (##inline ##sys.cons (quote and) (##inline ##sys.cdr (bruijn ##expr.176 0 0))) (##inline ##sys.cons (quote #f) (quote ())))))) ((bruijn ##k.644 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 40-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k183, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
_var0
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
      VInlineCdr(
_var0
    )

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
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.646 0 0) ((close _V0expand__syntax_k182) (##inline ##sys.cdr (bruijn ##expr.175 1 1))) ((bruijn ##k.644 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k182, env, runtime,
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
static void _V0expand__syntax_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda56, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.175 0 1)) ((bruijn equal? 39 7) (close _V0expand__syntax_k181) (quote and) (##inline ##sys.car (bruijn ##expr.175 0 1))) ((bruijn ##k.644 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 39-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k181, env)}),
      VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k185, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.640 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.177 1 1))) ((bruijn ##kk.102 30 1) (bruijn ##k.638 1 0) #f) ((bruijn ##k.638 1 0) #f)) ((bruijn ##k.638 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 30-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false)
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
static void _V0expand__syntax_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.177 0 1)) ((bruijn equal? 40 7) (close _V0expand__syntax_k185) (quote or) (##inline ##sys.car (bruijn ##expr.177 0 1))) ((bruijn ##k.638 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 40-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k185, env)}),
      VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k189, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 33 1) (bruijn ##k.630 3 0) (bruijn ##x.635 0 0))
V_CALL(VGetArg(upenv, 33-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.179 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.179 0 0))) ((bruijn expand-syntax 42 9) (close _V0expand__syntax_k189) (##inline ##sys.car (bruijn ##expr.179 0 0))) ((bruijn ##k.630 2 0) #f)) ((bruijn ##k.630 2 0) #f))
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
V_CALL(VGetArg(upenv, 42-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k189, env)}),
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
static void _V0expand__syntax_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.632 0 0) ((close _V0expand__syntax_k188) (##inline ##sys.cdr (bruijn ##expr.178 1 1))) ((bruijn ##k.630 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k188, env, runtime,
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
static void _V0expand__syntax_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.178 0 1)) ((bruijn equal? 41 7) (close _V0expand__syntax_k187) (quote or) (##inline ##sys.car (bruijn ##expr.178 0 1))) ((bruijn ##k.630 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 41-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k187, env)}),
      VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k195, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 36 1) (bruijn ##k.617 5 0) (##inline ##sys.cons (quote or) (##inline ##sys.cons (bruijn ##x.625 1 0) (##inline ##sys.cons (bruijn ##x.627 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 36-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
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
static void _V0expand__syntax_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 45 9) (close _V0expand__syntax_k195) (##inline ##sys.car (bruijn ##expr.182 1 0)))
V_CALL(VGetArg(upenv, 45-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k195, env)}),
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0expand__syntax_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.182 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.182 0 0))) ((bruijn expand-syntax 44 9) (close _V0expand__syntax_k194) (##inline ##sys.car (bruijn ##expr.181 1 0))) ((bruijn ##k.617 3 0) #f)) ((bruijn ##k.617 3 0) #f))
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
V_CALL(VGetArg(upenv, 44-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k194, env)}),
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
static void _V0expand__syntax_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.181 0 0)) ((close _V0expand__syntax_k193) (##inline ##sys.cdr (bruijn ##expr.181 0 0))) ((bruijn ##k.617 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k193, env, runtime,
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
static void _V0expand__syntax_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.619 0 0) ((close _V0expand__syntax_k192) (##inline ##sys.cdr (bruijn ##expr.180 1 1))) ((bruijn ##k.617 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k192, env, runtime,
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
static void _V0expand__syntax_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda59, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.180 0 1)) ((bruijn equal? 42 7) (close _V0expand__syntax_k191) (quote or) (##inline ##sys.car (bruijn ##expr.180 0 1))) ((bruijn ##k.617 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 42-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k191, env)}),
      VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k199, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 35 1) (bruijn ##k.607 3 0) (bruijn ##x.611 0 0))
V_CALL(VGetArg(upenv, 35-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 0)) ((bruijn expand-syntax 44 9) (close _V0expand__syntax_k199) (##inline ##sys.cons (quote or) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.184 0 0)) (##inline ##sys.cons (##inline ##sys.cons (quote or) (##inline ##sys.cdr (bruijn ##expr.184 0 0))) (quote ()))))) ((bruijn ##k.607 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 44-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k199, env)}),
      VInlineCons(
VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
_var0
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VInlineCdr(
_var0
    )

    )
,
      VNULL
    )

    )

    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.609 0 0) ((close _V0expand__syntax_k198) (##inline ##sys.cdr (bruijn ##expr.183 1 1))) ((bruijn ##k.607 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k198, env, runtime,
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
static void _V0expand__syntax_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.183 0 1)) ((bruijn equal? 43 7) (close _V0expand__syntax_k197) (quote or) (##inline ##sys.car (bruijn ##expr.183 0 1))) ((bruijn ##k.607 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 43-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k197, env)}),
      VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k205, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 38 1) (bruijn ##k.595 5 0) (bruijn ##x.602 0 0))
V_CALL(VGetArg(upenv, 38-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0expand__syntax_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.600 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.186 2 0))) ((bruijn expand-syntax 47 9) (close _V0expand__syntax_k205) (##inline ##sys.cons (quote begin) (##inline ##sys.cdr (bruijn ##expr.187 1 0)))) ((bruijn ##k.595 4 0) #f)) ((bruijn ##k.595 4 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 47-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k205, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[0]
    )

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
static void _V0expand__syntax_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.187 0 0)) ((bruijn equal? 47 7) (close _V0expand__syntax_k204) (quote else) (##inline ##sys.car (bruijn ##expr.187 0 0))) ((bruijn ##k.595 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 47-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k204, env)}),
      VEncodePointer(&_V0else.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.186 0 0)) ((close _V0expand__syntax_k203) (##inline ##sys.car (bruijn ##expr.186 0 0))) ((bruijn ##k.595 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k203, env, runtime,
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
static void _V0expand__syntax_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.597 0 0) ((close _V0expand__syntax_k202) (##inline ##sys.cdr (bruijn ##expr.185 1 1))) ((bruijn ##k.595 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k202, env, runtime,
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
static void _V0expand__syntax_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.185 0 1)) ((bruijn equal? 44 7) (close _V0expand__syntax_k201) (quote cond) (##inline ##sys.car (bruijn ##expr.185 0 1))) ((bruijn ##k.595 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 44-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k201, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k214, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 42 1) (bruijn ##k.569 8 0) (bruijn ##x.578 0 0))
V_CALL(VGetArg(upenv, 42-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0expand__syntax_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 51 9) (close _V0expand__syntax_k214) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn foobar 0 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.190 4 0)) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn foobar 0 0) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.192 1 0)) (##inline ##sys.cons (bruijn foobar 0 0) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote cond) (##inline ##sys.cdr (bruijn ##expr.189 5 0))) (quote ()))))) (quote ())))))
V_CALL(VGetArg(upenv, 51-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k214, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
_var0,
      VInlineCons(
VInlineCar(
upenv->up->up->up->vars[0]
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
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VInlineCons(
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
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      VInlineCdr(
VGetArg(upenv, 5-1, 0)
    )

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
static void _V0expand__syntax_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.192 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.192 0 0))) ((bruijn gensym 51 4) (close _V0expand__syntax_k213) (##string ##string.1601)) ((bruijn ##k.569 6 0) #f)) ((bruijn ##k.569 6 0) #f))
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
V_CALL(VGetArg(upenv, 51-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k213, env)}),
      VEncodePointer(&_V10string_D1601.sym, VPOINTER_OTHER)
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
 }
}
static void _V0expand__syntax_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.575 0 0) ((close _V0expand__syntax_k212) (##inline ##sys.cdr (bruijn ##expr.191 1 0))) ((bruijn ##k.569 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k212, env, runtime,
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
static void _V0expand__syntax_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.191 0 0)) ((bruijn equal? 49 7) (close _V0expand__syntax_k211) (quote =>) (##inline ##sys.car (bruijn ##expr.191 0 0))) ((bruijn ##k.569 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 49-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k211, env)}),
      VEncodePointer(&_V0_E_G.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.190 0 0)) ((close _V0expand__syntax_k210) (##inline ##sys.cdr (bruijn ##expr.190 0 0))) ((bruijn ##k.569 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k210, env, runtime,
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
static void _V0expand__syntax_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.189 0 0)) ((close _V0expand__syntax_k209) (##inline ##sys.car (bruijn ##expr.189 0 0))) ((bruijn ##k.569 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k209, env, runtime,
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
static void _V0expand__syntax_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.571 0 0) ((close _V0expand__syntax_k208) (##inline ##sys.cdr (bruijn ##expr.188 1 1))) ((bruijn ##k.569 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k208, env, runtime,
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
static void _V0expand__syntax_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda62, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.188 0 1)) ((bruijn equal? 45 7) (close _V0expand__syntax_k207) (quote cond) (##inline ##sys.car (bruijn ##expr.188 0 1))) ((bruijn ##k.569 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 45-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k207, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k219, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 39 1) (bruijn ##k.556 4 0) (bruijn ##x.561 0 0))
V_CALL(VGetArg(upenv, 39-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.195 0 0)) ((bruijn expand-syntax 48 9) (close _V0expand__syntax_k219) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.195 0 0)) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (##inline ##sys.cdr (bruijn ##expr.195 0 0))) (##inline ##sys.cons (##inline ##sys.cons (quote cond) (##inline ##sys.cdr (bruijn ##expr.194 1 0))) (quote ())))))) ((bruijn ##k.556 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 48-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k219, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
_var0
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCdr(
_var0
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[0]
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
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.194 0 0)) ((close _V0expand__syntax_k218) (##inline ##sys.car (bruijn ##expr.194 0 0))) ((bruijn ##k.556 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k218, env, runtime,
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
static void _V0expand__syntax_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.558 0 0) ((close _V0expand__syntax_k217) (##inline ##sys.cdr (bruijn ##expr.193 1 1))) ((bruijn ##k.556 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k217, env, runtime,
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
static void _V0expand__syntax_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda63, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.193 0 1)) ((bruijn equal? 46 7) (close _V0expand__syntax_k216) (quote cond) (##inline ##sys.car (bruijn ##expr.193 0 1))) ((bruijn ##k.556 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 46-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k216, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k221, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.550 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.196 1 1))) ((bruijn ##kk.102 37 1) (bruijn ##k.548 1 0) (##inline ##sys.cons (quote error) (##inline ##sys.cons (quote (##string ##string.1602)) (quote ())))) ((bruijn ##k.548 1 0) #f)) ((bruijn ##k.548 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 37-1, 1), runtime,
      upenv->vars[0],
      VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D1602.sym, VPOINTER_OTHER),
      VNULL
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
static void _V0expand__syntax_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda64, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.196 0 1)) ((bruijn equal? 47 7) (close _V0expand__syntax_k221) (quote cond) (##inline ##sys.car (bruijn ##expr.196 0 1))) ((bruijn ##k.548 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 47-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k221, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k224, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 39 1) (bruijn ##k.542 2 0) (bruijn ##x.545 0 0))
V_CALL(VGetArg(upenv, 39-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.544 0 0) ((bruijn error 49 15) (close _V0expand__syntax_k224) (##string ##string.1603) (##inline ##sys.cons (quote cond) (##inline ##sys.cdr (bruijn ##expr.197 1 1)))) ((bruijn ##k.542 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 49-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k224, env)}),
      VEncodePointer(&_V10string_D1603.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda65, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.197 0 1)) ((bruijn equal? 48 7) (close _V0expand__syntax_k223) (quote cond) (##inline ##sys.car (bruijn ##expr.197 0 1))) ((bruijn ##k.542 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 48-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k223, env)}),
      VEncodePointer(&_V0cond.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k229, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 42 1) (bruijn ##k.528 4 0) (bruijn ##x.532 0 0))
V_CALL(VGetArg(upenv, 42-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 51 9) (close _V0expand__syntax_k229) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn foobar 0 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.199 1 0)) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote case-iter) (##inline ##sys.cons (bruijn foobar 0 0) (##inline ##sys.cdr (bruijn ##expr.199 1 0)))) (quote ())))))
V_CALL(VGetArg(upenv, 51-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k229, env)}),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
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
,
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0case__iter.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VInlineCdr(
upenv->vars[0]
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
static void _V0expand__syntax_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.199 0 0)) ((bruijn gensym 51 4) (close _V0expand__syntax_k228) (##string ##string.1601)) ((bruijn ##k.528 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 51-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k228, env)}),
      VEncodePointer(&_V10string_D1601.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.530 0 0) ((close _V0expand__syntax_k227) (##inline ##sys.cdr (bruijn ##expr.198 1 1))) ((bruijn ##k.528 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k227, env, runtime,
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
static void _V0expand__syntax_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda66, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.198 0 1)) ((bruijn equal? 49 7) (close _V0expand__syntax_k226) (quote case) (##inline ##sys.car (bruijn ##expr.198 0 1))) ((bruijn ##k.528 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 49-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k226, env)}),
      VEncodePointer(&_V0case.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k236, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 45 1) (bruijn ##k.515 6 0) (bruijn ##x.523 0 0))
V_CALL(VGetArg(upenv, 45-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0expand__syntax_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.521 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.202 2 0))) ((bruijn expand-syntax 54 9) (close _V0expand__syntax_k236) (##inline ##sys.cons (quote begin) (##inline ##sys.cdr (bruijn ##expr.203 1 0)))) ((bruijn ##k.515 5 0) #f)) ((bruijn ##k.515 5 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 54-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k236, env)}),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[0]
    )

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
static void _V0expand__syntax_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.203 0 0)) ((bruijn equal? 54 7) (close _V0expand__syntax_k235) (quote else) (##inline ##sys.car (bruijn ##expr.203 0 0))) ((bruijn ##k.515 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 54-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k235, env)}),
      VEncodePointer(&_V0else.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.202 0 0)) ((close _V0expand__syntax_k234) (##inline ##sys.car (bruijn ##expr.202 0 0))) ((bruijn ##k.515 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k234, env, runtime,
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
static void _V0expand__syntax_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.201 0 0)) ((close _V0expand__syntax_k233) (##inline ##sys.cdr (bruijn ##expr.201 0 0))) ((bruijn ##k.515 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k233, env, runtime,
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
static void _V0expand__syntax_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.517 0 0) ((close _V0expand__syntax_k232) (##inline ##sys.cdr (bruijn ##expr.200 1 1))) ((bruijn ##k.515 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k232, env, runtime,
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
static void _V0expand__syntax_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.200 0 1)) ((bruijn equal? 50 7) (close _V0expand__syntax_k231) (quote case-iter) (##inline ##sys.car (bruijn ##expr.200 0 1))) ((bruijn ##k.515 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 50-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k231, env)}),
      VEncodePointer(&_V0case__iter.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k243, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.483 1 0) (##inline ##sys.car (bruijn ##expr.207 4 0)) (quote ()))
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
static void _V0loop_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k245, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.210 4 1) (bruijn ##k.494 1 0) (bruijn ##expr.212 2 1) (bruijn ##x.495 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.212 1 1))) ((bruijn reverse 61 8) (close _V0loop_k245) (bruijn ##toks.209 1 2)) ((bruijn ##k.494 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 61-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k245, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k248, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.210 7 1) (bruijn ##k.488 2 0) (bruijn ##expr.212 5 1) (bruijn ##x.490 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 64 8) (close _V0loop_k248) (bruijn ##toks.209 4 2))
V_CALL(VGetArg(upenv, 64-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k248, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda74, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.211 0 1) (close _V0loop_k247) (##inline ##sys.cdr (bruijn ##expr.212 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.212 3 1)) (bruijn ##toks.209 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k247, env)}),
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
static void _V0loop_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 62 9) (bruijn ##k.487 0 0) (close _V0loop_lambda74))
V_CALL(VGetArg(upenv, 62-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda74, env)})
    );
 }
}
static void _V0loop_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 61 10) (bruijn ##k.485 1 0) (close _V0loop_lambda73) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 61-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda73, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda72, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda72, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k244) (close _V0loop_k246))
V_CALL_FUNC(_V0loop_k244, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k246, env)})
    );
 }
}
static void _V0expand__syntax_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda71, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0expand__syntax_k243) (bruijn loop 0 1) (close _V0loop_lambda72))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k243, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda72, env)})
    );
 }
}
static void _V0expand__syntax_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda71) (bruijn ##k.482 0 0) #f)
V_CALL_FUNC(_V0expand__syntax_lambda71, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__syntax_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 57 9) (bruijn ##k.481 0 0) (close _V0expand__syntax_lambda70))
V_CALL(VGetArg(upenv, 57-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda70, env)})
    );
 }
}
static void _V0expand__syntax_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k250, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 48 1) (bruijn ##k.497 2 0) (bruijn ##x.499 0 0))
V_CALL(VGetArg(upenv, 48-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 57 9) (close _V0expand__syntax_k250) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote or) (bruijn ##x.508 0 0)) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (##inline ##sys.cdr (bruijn ##expr.207 2 0))) (##inline ##sys.cons (##inline ##sys.cons (quote case-iter) (##inline ##sys.cons (bruijn x 4 0) (##inline ##sys.cdr (bruijn ##expr.206 3 0)))) (quote ()))))))
V_CALL(VGetArg(upenv, 57-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k250, env)}),
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
      VInlineCdr(
upenv->up->vars[0]
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0case__iter.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->up->vars[0],
      VInlineCdr(
upenv->up->up->vars[0]
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
 }
}
static void _V0expand__syntax_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda76, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.509 0 0) (##inline ##sys.cons (quote eqv?) (##inline ##sys.cons (bruijn x 4 0) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn y 0 1) (quote ()))) (quote ())))))
V_CALL(_var0, runtime,
      VInlineCons(
VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->up->vars[0],
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
static void _V0expand__syntax_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda75, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda75, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 57 14) (close _V0expand__syntax_k249) (close _V0expand__syntax_lambda76) (bruijn toks 0 2)) ((bruijn ##k.497 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 57-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k249, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda76, env)}),
      _var2
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.207 0 0)) ((bruijn call-with-values 56 10) (bruijn ##k.475 5 0) (close _V0expand__syntax_lambda69) (close _V0expand__syntax_lambda75)) ((bruijn ##k.475 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 56-1, 10), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda69, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda75, env)})
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.206 0 0)) ((close _V0expand__syntax_k242) (##inline ##sys.car (bruijn ##expr.206 0 0))) ((bruijn ##k.475 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k242, env, runtime,
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
static void _V0expand__syntax_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k241) (##inline ##sys.cdr (bruijn ##expr.205 1 0)))
V_CALL_FUNC(_V0expand__syntax_k241, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0expand__syntax_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.205 0 0)) ((close _V0expand__syntax_k240) (##inline ##sys.car (bruijn ##expr.205 0 0))) ((bruijn ##k.475 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k240, env, runtime,
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
static void _V0expand__syntax_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.477 0 0) ((close _V0expand__syntax_k239) (##inline ##sys.cdr (bruijn ##expr.204 1 1))) ((bruijn ##k.475 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k239, env, runtime,
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
static void _V0expand__syntax_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda68, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.204 0 1)) ((bruijn equal? 51 7) (close _V0expand__syntax_k238) (quote case-iter) (##inline ##sys.car (bruijn ##expr.204 0 1))) ((bruijn ##k.475 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 51-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k238, env)}),
      VEncodePointer(&_V0case__iter.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k253, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.214 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.214 0 0))) ((bruijn ##kk.102 43 1) (bruijn ##k.466 2 0) (##inline ##sys.cons (quote error) (##inline ##sys.cons (quote (##string ##string.1604)) (quote ())))) ((bruijn ##k.466 2 0) #f)) ((bruijn ##k.466 2 0) #f))
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
V_CALL(VGetArg(upenv, 43-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D1604.sym, VPOINTER_OTHER),
      VNULL
    )

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
static void _V0expand__syntax_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.468 0 0) ((close _V0expand__syntax_k253) (##inline ##sys.cdr (bruijn ##expr.213 1 1))) ((bruijn ##k.466 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k253, env, runtime,
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
static void _V0expand__syntax_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda77, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.213 0 1)) ((bruijn equal? 52 7) (close _V0expand__syntax_k252) (quote case-iter) (##inline ##sys.car (bruijn ##expr.213 0 1))) ((bruijn ##k.466 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 52-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k252, env)}),
      VEncodePointer(&_V0case__iter.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k257, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 45 1) (bruijn ##k.456 3 0) (bruijn ##x.460 0 0))
V_CALL(VGetArg(upenv, 45-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.216 0 0)) ((bruijn expand-syntax 54 9) (close _V0expand__syntax_k257) (##inline ##sys.cons (quote cut-iter) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.216 0 0)) (##inline ##sys.cdr (bruijn ##expr.216 0 0))))))) ((bruijn ##k.456 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 54-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k257, env)}),
      VInlineCons(
VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
VNULL,
      VInlineCons(
VInlineCar(
_var0
    )
,
      VInlineCdr(
_var0
    )

    )

    )

    )

    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.458 0 0) ((close _V0expand__syntax_k256) (##inline ##sys.cdr (bruijn ##expr.215 1 1))) ((bruijn ##k.456 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k256, env, runtime,
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
static void _V0expand__syntax_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.215 0 1)) ((bruijn equal? 53 7) (close _V0expand__syntax_k255) (quote cut) (##inline ##sys.car (bruijn ##expr.215 0 1))) ((bruijn ##k.456 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 53-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k255, env)}),
      VEncodePointer(&_V0cut.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k265, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 50 1) (bruijn ##k.440 7 0) (bruijn ##x.447 0 0))
V_CALL(VGetArg(upenv, 50-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0expand__syntax_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 59 9) (close _V0expand__syntax_k265) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ##x.450 1 0) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.220 2 0)) (bruijn ##x.453 0 0)) (quote ())))))
V_CALL(VGetArg(upenv, 59-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k265, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->vars[0],
      VInlineCons(
VInlineCons(
VInlineCar(
upenv->up->vars[0]
    )
,
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
static void _V0expand__syntax_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 59 8) (close _V0expand__syntax_k264) (##inline ##sys.car (bruijn ##expr.219 2 0)))
V_CALL(VGetArg(upenv, 59-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k264, env)}),
      VInlineCar(
upenv->up->vars[0]
    )

    );
 }
}
static void _V0expand__syntax_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.220 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.220 0 0))) ((bruijn reverse 58 8) (close _V0expand__syntax_k263) (##inline ##sys.car (bruijn ##expr.218 2 0))) ((bruijn ##k.440 4 0) #f)) ((bruijn ##k.440 4 0) #f))
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
V_CALL(VGetArg(upenv, 58-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k263, env)}),
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
static void _V0expand__syntax_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.219 0 0)) ((close _V0expand__syntax_k262) (##inline ##sys.cdr (bruijn ##expr.219 0 0))) ((bruijn ##k.440 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k262, env, runtime,
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
static void _V0expand__syntax_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.218 0 0)) ((close _V0expand__syntax_k261) (##inline ##sys.cdr (bruijn ##expr.218 0 0))) ((bruijn ##k.440 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k261, env, runtime,
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
static void _V0expand__syntax_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.442 0 0) ((close _V0expand__syntax_k260) (##inline ##sys.cdr (bruijn ##expr.217 1 1))) ((bruijn ##k.440 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k260, env, runtime,
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
static void _V0expand__syntax_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.217 0 1)) ((bruijn equal? 54 7) (close _V0expand__syntax_k259) (quote cut-iter) (##inline ##sys.car (bruijn ##expr.217 0 1))) ((bruijn ##k.440 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 54-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k259, env)}),
      VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k274, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 52 1) (bruijn ##k.423 8 0) (bruijn ##x.431 0 0))
V_CALL(VGetArg(upenv, 52-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0expand__syntax_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 61 9) (close _V0expand__syntax_k274) (##inline ##sys.cons (quote cut-iter) (##inline ##sys.cons (##inline ##sys.cons (bruijn x 0 0) (##inline ##sys.car (bruijn ##expr.222 5 0))) (##inline ##sys.cons (##inline ##sys.cons (bruijn x 0 0) (##inline ##sys.car (bruijn ##expr.223 4 0))) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.224 3 0)) (##inline ##sys.cdr (bruijn ##expr.225 2 0)))))))
V_CALL(VGetArg(upenv, 61-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k274, env)}),
      VInlineCons(
VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
_var0,
      VInlineCar(
VGetArg(upenv, 5-1, 0)
    )

    )
,
      VInlineCons(
VInlineCons(
_var0,
      VInlineCar(
upenv->up->up->up->vars[0]
    )

    )
,
      VInlineCons(
VInlineCar(
upenv->up->up->vars[0]
    )
,
      VInlineCdr(
upenv->up->vars[0]
    )

    )

    )

    )

    )

    );
 }
}
static void _V0expand__syntax_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.430 0 0) ((bruijn gensym 61 4) (close _V0expand__syntax_k273) (##string ##string.1601)) ((bruijn ##k.423 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 61-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k273, env)}),
      VEncodePointer(&_V10string_D1601.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.225 0 0)) ((bruijn equal? 60 7) (close _V0expand__syntax_k272) (quote <>) (##inline ##sys.car (bruijn ##expr.225 0 0))) ((bruijn ##k.423 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 60-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k272, env)}),
      VEncodePointer(&_V0_L_G.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.224 0 0)) ((close _V0expand__syntax_k271) (##inline ##sys.cdr (bruijn ##expr.224 0 0))) ((bruijn ##k.423 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k271, env, runtime,
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
static void _V0expand__syntax_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.223 0 0)) ((close _V0expand__syntax_k270) (##inline ##sys.cdr (bruijn ##expr.223 0 0))) ((bruijn ##k.423 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k270, env, runtime,
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
static void _V0expand__syntax_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.222 0 0)) ((close _V0expand__syntax_k269) (##inline ##sys.cdr (bruijn ##expr.222 0 0))) ((bruijn ##k.423 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k269, env, runtime,
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
static void _V0expand__syntax_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.425 0 0) ((close _V0expand__syntax_k268) (##inline ##sys.cdr (bruijn ##expr.221 1 1))) ((bruijn ##k.423 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k268, env, runtime,
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
static void _V0expand__syntax_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda80, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.221 0 1)) ((bruijn equal? 55 7) (close _V0expand__syntax_k267) (quote cut-iter) (##inline ##sys.car (bruijn ##expr.221 0 1))) ((bruijn ##k.423 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 55-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k267, env)}),
      VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k282, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 52 1) (bruijn ##k.410 7 0) (bruijn ##x.419 0 0))
V_CALL(VGetArg(upenv, 52-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0expand__syntax_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.417 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.230 1 0))) ((bruijn error 62 15) (close _V0expand__syntax_k282) (##string ##string.1605)) ((bruijn ##k.410 6 0) #f)) ((bruijn ##k.410 6 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 62-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k282, env)}),
      VEncodePointer(&_V10string_D1605.sym, VPOINTER_OTHER)
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
 }
}
static void _V0expand__syntax_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.230 0 0)) ((bruijn equal? 61 7) (close _V0expand__syntax_k281) (quote <...>) (##inline ##sys.car (bruijn ##expr.230 0 0))) ((bruijn ##k.410 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 61-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k281, env)}),
      VEncodePointer(&_V0_L_D_D_D_G.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.229 0 0)) ((close _V0expand__syntax_k280) (##inline ##sys.cdr (bruijn ##expr.229 0 0))) ((bruijn ##k.410 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k280, env, runtime,
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
static void _V0expand__syntax_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.228 0 0)) ((close _V0expand__syntax_k279) (##inline ##sys.cdr (bruijn ##expr.228 0 0))) ((bruijn ##k.410 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k279, env, runtime,
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
static void _V0expand__syntax_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.227 0 0)) ((close _V0expand__syntax_k278) (##inline ##sys.cdr (bruijn ##expr.227 0 0))) ((bruijn ##k.410 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k278, env, runtime,
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
static void _V0expand__syntax_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.412 0 0) ((close _V0expand__syntax_k277) (##inline ##sys.cdr (bruijn ##expr.226 1 1))) ((bruijn ##k.410 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k277, env, runtime,
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
static void _V0expand__syntax_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.226 0 1)) ((bruijn equal? 56 7) (close _V0expand__syntax_k276) (quote cut-iter) (##inline ##sys.car (bruijn ##expr.226 0 1))) ((bruijn ##k.410 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 56-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k276, env)}),
      VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k289, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 52 1) (bruijn ##k.396 6 0) (bruijn ##x.403 0 0))
V_CALL(VGetArg(upenv, 52-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0expand__syntax_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.235 0 0)) ((bruijn expand-syntax 61 9) (close _V0expand__syntax_k289) (##inline ##sys.cons (quote cut-iter) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.232 3 0)) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.235 0 0)) (##inline ##sys.car (bruijn ##expr.233 2 0))) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.234 1 0)) (##inline ##sys.cdr (bruijn ##expr.235 0 0))))))) ((bruijn ##k.396 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 61-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k289, env)}),
      VInlineCons(
VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
upenv->up->up->vars[0]
    )
,
      VInlineCons(
VInlineCons(
VInlineCar(
_var0
    )
,
      VInlineCar(
upenv->up->vars[0]
    )

    )
,
      VInlineCons(
VInlineCar(
upenv->vars[0]
    )
,
      VInlineCdr(
_var0
    )

    )

    )

    )

    )

    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.234 0 0)) ((close _V0expand__syntax_k288) (##inline ##sys.cdr (bruijn ##expr.234 0 0))) ((bruijn ##k.396 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k288, env, runtime,
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
static void _V0expand__syntax_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.233 0 0)) ((close _V0expand__syntax_k287) (##inline ##sys.cdr (bruijn ##expr.233 0 0))) ((bruijn ##k.396 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k287, env, runtime,
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
static void _V0expand__syntax_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.232 0 0)) ((close _V0expand__syntax_k286) (##inline ##sys.cdr (bruijn ##expr.232 0 0))) ((bruijn ##k.396 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k286, env, runtime,
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
static void _V0expand__syntax_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.398 0 0) ((close _V0expand__syntax_k285) (##inline ##sys.cdr (bruijn ##expr.231 1 1))) ((bruijn ##k.396 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k285, env, runtime,
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
static void _V0expand__syntax_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda82, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.231 0 1)) ((bruijn equal? 57 7) (close _V0expand__syntax_k284) (quote cut-iter) (##inline ##sys.car (bruijn ##expr.231 0 1))) ((bruijn ##k.396 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 57-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k284, env)}),
      VEncodePointer(&_V0cut__iter.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k292, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 49 1) (bruijn ##k.390 2 0) (bruijn ##x.393 0 0))
V_CALL(VGetArg(upenv, 49-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.392 0 0) ((bruijn error 59 15) (close _V0expand__syntax_k292) (##string ##string.1606) (##inline ##sys.cons (quote cut) (##inline ##sys.cdr (bruijn ##expr.236 1 1)))) ((bruijn ##k.390 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 59-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k292, env)}),
      VEncodePointer(&_V10string_D1606.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0cut.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.236 0 1)) ((bruijn equal? 58 7) (close _V0expand__syntax_k291) (quote cut) (##inline ##sys.car (bruijn ##expr.236 0 1))) ((bruijn ##k.390 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 58-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k291, env)}),
      VEncodePointer(&_V0cut.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k300, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.385 1 0) ((bruijn error 66 15) (bruijn ##k.386 0 0) (##string ##string.1607) (bruijn y 4 0)) ((bruijn ##k.386 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 66-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1607.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k302, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 56 1) (bruijn ##k.374 8 0) (##inline ##sys.cons (quote set!) (##inline ##sys.cons (bruijn y 5 0) (##inline ##sys.cons (bruijn ##x.384 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 56-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VInlineCons(
VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 0),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__syntax_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 65 9) (close _V0expand__syntax_k302) (##inline ##sys.car (bruijn ##expr.239 3 0)))
V_CALL(VGetArg(upenv, 65-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k302, env)}),
      VInlineCar(
upenv->up->up->vars[0]
    )

    );
 }
}
static void _V0expand__syntax_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k300) (close _V0expand__syntax_k301))
V_CALL_FUNC(_V0expand__syntax_k300, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k301, env)})
    );
 }
}
static void _V0expand__syntax_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 64 12) (close _V0expand__syntax_k299) (bruijn ##x.387 0 0))
V_CALL(VGetArg(upenv, 64-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k299, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.239 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.239 0 0))) ((bruijn symbol? 63 13) (close _V0expand__syntax_k298) (bruijn y 1 0)) ((bruijn ##k.374 4 0) #f)) ((bruijn ##k.374 4 0) #f))
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
V_CALL(VGetArg(upenv, 63-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k298, env)}),
      upenv->vars[0]
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
static void _V0expand__syntax_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k297) (##inline ##sys.cdr (bruijn ##expr.238 1 0)))
V_CALL_FUNC(_V0expand__syntax_k297, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0expand__syntax_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.238 0 0)) ((close _V0expand__syntax_k296) (##inline ##sys.car (bruijn ##expr.238 0 0))) ((bruijn ##k.374 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k296, env, runtime,
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
static void _V0expand__syntax_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.376 0 0) ((close _V0expand__syntax_k295) (##inline ##sys.cdr (bruijn ##expr.237 1 1))) ((bruijn ##k.374 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k295, env, runtime,
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
static void _V0expand__syntax_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.237 0 1)) ((bruijn equal? 59 7) (close _V0expand__syntax_k294) (quote set!) (##inline ##sys.car (bruijn ##expr.237 0 1))) ((bruijn ##k.374 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 59-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k294, env)}),
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
static void _V0expand__syntax_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k305, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 51 1) (bruijn ##k.368 2 0) (bruijn ##x.371 0 0))
V_CALL(VGetArg(upenv, 51-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.370 0 0) ((bruijn error 61 15) (close _V0expand__syntax_k305) (##string ##string.1608) (##inline ##sys.cons (quote set!) (##inline ##sys.cdr (bruijn ##expr.240 1 1)))) ((bruijn ##k.368 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 61-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k305, env)}),
      VEncodePointer(&_V10string_D1608.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.240 0 1)) ((bruijn equal? 60 7) (close _V0expand__syntax_k304) (quote set!) (##inline ##sys.car (bruijn ##expr.240 0 1))) ((bruijn ##k.368 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 60-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k304, env)}),
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
static void _V0expand__syntax_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k308, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 52 1) (bruijn ##k.362 2 0) (bruijn ##x.365 0 0))
V_CALL(VGetArg(upenv, 52-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.364 0 0) ((bruijn error 62 15) (close _V0expand__syntax_k308) (##string ##string.1609) (##inline ##sys.cons (quote define) (##inline ##sys.cdr (bruijn ##expr.241 1 1)))) ((bruijn ##k.362 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 62-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k308, env)}),
      VEncodePointer(&_V10string_D1609.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.241 0 1)) ((bruijn equal? 61 7) (close _V0expand__syntax_k307) (quote define) (##inline ##sys.car (bruijn ##expr.241 0 1))) ((bruijn ##k.362 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 61-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k307, env)}),
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
static void _V0expand__syntax_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k312, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 54 1) (bruijn ##k.355 3 0) (bruijn ##x.358 0 0))
V_CALL(VGetArg(upenv, 54-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 63 9) (close _V0expand__syntax_k312) (bruijn ##x.359 0 0))
V_CALL(VGetArg(upenv, 63-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k312, env)}),
      _var0
    );
 }
}
static void _V0expand__syntax_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.357 0 0) ((bruijn transform-match 63 6) (close _V0expand__syntax_k311) (##inline ##sys.cons (quote match) (##inline ##sys.cdr (bruijn ##expr.242 1 1))) (bruijn eqv? 63 5)) ((bruijn ##k.355 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 63-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k311, env)}),
      VInlineCons(
VEncodePointer(&_V0match.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )
,
      VGetArg(upenv, 63-1, 5)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda87, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.242 0 1)) ((bruijn equal? 62 7) (close _V0expand__syntax_k310) (quote match) (##inline ##sys.car (bruijn ##expr.242 0 1))) ((bruijn ##k.355 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 62-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k310, env)}),
      VEncodePointer(&_V0match.sym, VPOINTER_OTHER),
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
static void _V0expand__syntax_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k315, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.330 1 0) (##inline ##sys.cdr (bruijn ##expr.243 5 1)) (quote ()))
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
  // ((bruijn ##kk.246 4 1) (bruijn ##k.341 1 0) (bruijn ##expr.248 2 1) (bruijn ##x.342 0 0))
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
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.248 1 1))) ((bruijn reverse 69 8) (close _V0loop_k317) (bruijn ##args.245 1 2)) ((bruijn ##k.341 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 69-1, 8), runtime,
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
  // ((bruijn ##kk.246 7 1) (bruijn ##k.335 2 0) (bruijn ##expr.248 5 1) (bruijn ##x.337 0 0))
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
  // ((bruijn reverse 72 8) (close _V0loop_k320) (bruijn ##args.245 4 2))
V_CALL(VGetArg(upenv, 72-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k320, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda94, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.247 0 1) (close _V0loop_k319) (##inline ##sys.cdr (bruijn ##expr.248 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.248 3 1)) (bruijn ##args.245 3 2)))
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
static void _V0loop_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 70 9) (bruijn ##k.334 0 0) (close _V0loop_lambda94))
V_CALL(VGetArg(upenv, 70-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda94, env)})
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
  // ((bruijn call-with-values 69 10) (bruijn ##k.332 1 0) (close _V0loop_lambda93) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 69-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda93, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda92, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda92, runtime, upenv, 3, argc, _var0, _var1, _var2) {
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
static void _V0expand__syntax_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda91, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0expand__syntax_k315) (bruijn loop 0 1) (close _V0loop_lambda92))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k315, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda92, env)})
    );
 }
}
static void _V0expand__syntax_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda90, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda91) (bruijn ##k.329 0 0) #f)
V_CALL_FUNC(_V0expand__syntax_lambda91, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__syntax_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 65 9) (bruijn ##k.328 0 0) (close _V0expand__syntax_lambda90))
V_CALL(VGetArg(upenv, 65-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda90, env)})
    );
 }
}
static void _V0expand__syntax_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k323, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 68 12) (bruijn ##k.353 1 0) (bruijn ##x.354 0 0))
V_CALL(VGetArg(upenv, 68-1, 12), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.352 1 0) ((bruijn symbol? 67 13) (close _V0expand__syntax_k323) (bruijn f 3 0)) ((bruijn ##k.353 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 67-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k323, env)}),
      upenv->up->up->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k325, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.350 1 0) ((bruijn error 68 15) (bruijn ##k.351 0 0) (##string ##string.1610) (bruijn f 4 0)) ((bruijn ##k.351 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 68-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1610.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k328, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 59 1) (bruijn ##k.344 5 0) (##inline ##sys.cons (bruijn ##x.348 1 0) (bruijn ##x.349 0 0)))
V_CALL(VGetArg(upenv, 59-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0expand__syntax_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 69 14) (close _V0expand__syntax_k328) (bruijn expand-syntax 68 9) (bruijn args 4 2))
V_CALL(VGetArg(upenv, 69-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k328, env)}),
      VGetArg(upenv, 68-1, 9),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0expand__syntax_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 67 9) (close _V0expand__syntax_k327) (bruijn f 4 0))
V_CALL(VGetArg(upenv, 67-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k327, env)}),
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0expand__syntax_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k325) (close _V0expand__syntax_k326))
V_CALL_FUNC(_V0expand__syntax_k325, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k326, env)})
    );
 }
}
static void _V0expand__syntax_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k322) (close _V0expand__syntax_k324))
V_CALL_FUNC(_V0expand__syntax_k322, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k324, env)})
    );
 }
}
static void _V0expand__syntax_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda95, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda95, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn atom? 65 11) (close _V0expand__syntax_k321) (bruijn f 1 0)) ((bruijn ##k.344 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 65-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k321, env)}),
      upenv->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k314, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 64 10) (bruijn ##k.326 1 0) (close _V0expand__syntax_lambda89) (close _V0expand__syntax_lambda95))
V_CALL(VGetArg(upenv, 64-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda89, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda95, env)})
    );
 }
}
static void _V0expand__syntax_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda88, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.243 0 1)) ((close _V0expand__syntax_k314) (##inline ##sys.car (bruijn ##expr.243 0 1))) ((bruijn ##k.326 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0expand__syntax_k314, env, runtime,
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
static void _V0expand__syntax_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k330, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 54 1) (bruijn ##k.322 1 0) (bruijn ##x.324 0 0))
V_CALL(VGetArg(upenv, 54-1, 1), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.249 0 1)) ((bruijn error 64 15) (close _V0expand__syntax_k330) (##string ##string.1611) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.249 0 1)) (##inline ##sys.cdr (bruijn ##expr.249 0 1)))) ((bruijn ##k.322 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 64-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k330, env)}),
      VEncodePointer(&_V10string_D1611.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
_var1
    )
,
      VInlineCdr(
_var1
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
static void _V0expand__syntax_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k333, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 55 1) (bruijn ##k.320 1 0) (bruijn ##x.321 0 0))
V_CALL(VGetArg(upenv, 55-1, 1), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__syntax_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (bruijn ##input.103 53 1)) ((bruijn error 65 15) (close _V0expand__syntax_k333) (##string ##string.1612) (quote ())) ((bruijn ##k.320 0 0) #f))
if(VDecodeBool(
VInlineNullP(
VGetArg(upenv, 53-1, 1)
    )
)) {
V_CALL(VGetArg(upenv, 65-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k333, env)}),
      VEncodePointer(&_V10string_D1612.sym, VPOINTER_OTHER),
      VNULL
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__syntax_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k334, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.102 54 1) (bruijn ##k.265 53 0) (bruijn expr 55 1))
V_CALL(VGetArg(upenv, 54-1, 1), runtime,
      VGetArg(upenv, 53-1, 0),
      VGetArg(upenv, 55-1, 1)
    );
 }
}
static void _V0expand__syntax_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k332) (close _V0expand__syntax_k334))
V_CALL_FUNC(_V0expand__syntax_k332, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k334, env)})
    );
 }
}
static void _V0expand__syntax_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda96) (close _V0expand__syntax_k331) (bruijn ##input.103 51 1))
V_CALL_FUNC(_V0expand__syntax_lambda96, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k331, env)}),
      VGetArg(upenv, 51-1, 1)
    );
 }
}
static void _V0expand__syntax_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda88) (close _V0expand__syntax_k329) (bruijn ##input.103 50 1))
V_CALL_FUNC(_V0expand__syntax_lambda88, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k329, env)}),
      VGetArg(upenv, 50-1, 1)
    );
 }
}
static void _V0expand__syntax_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda87) (close _V0expand__syntax_k313) (bruijn ##input.103 49 1))
V_CALL_FUNC(_V0expand__syntax_lambda87, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k313, env)}),
      VGetArg(upenv, 49-1, 1)
    );
 }
}
static void _V0expand__syntax_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda86) (close _V0expand__syntax_k309) (bruijn ##input.103 48 1))
V_CALL_FUNC(_V0expand__syntax_lambda86, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k309, env)}),
      VGetArg(upenv, 48-1, 1)
    );
 }
}
static void _V0expand__syntax_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda85) (close _V0expand__syntax_k306) (bruijn ##input.103 47 1))
V_CALL_FUNC(_V0expand__syntax_lambda85, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k306, env)}),
      VGetArg(upenv, 47-1, 1)
    );
 }
}
static void _V0expand__syntax_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda84) (close _V0expand__syntax_k303) (bruijn ##input.103 46 1))
V_CALL_FUNC(_V0expand__syntax_lambda84, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k303, env)}),
      VGetArg(upenv, 46-1, 1)
    );
 }
}
static void _V0expand__syntax_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda83) (close _V0expand__syntax_k293) (bruijn ##input.103 45 1))
V_CALL_FUNC(_V0expand__syntax_lambda83, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k293, env)}),
      VGetArg(upenv, 45-1, 1)
    );
 }
}
static void _V0expand__syntax_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda82) (close _V0expand__syntax_k290) (bruijn ##input.103 44 1))
V_CALL_FUNC(_V0expand__syntax_lambda82, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k290, env)}),
      VGetArg(upenv, 44-1, 1)
    );
 }
}
static void _V0expand__syntax_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda81) (close _V0expand__syntax_k283) (bruijn ##input.103 43 1))
V_CALL_FUNC(_V0expand__syntax_lambda81, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k283, env)}),
      VGetArg(upenv, 43-1, 1)
    );
 }
}
static void _V0expand__syntax_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda80) (close _V0expand__syntax_k275) (bruijn ##input.103 42 1))
V_CALL_FUNC(_V0expand__syntax_lambda80, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k275, env)}),
      VGetArg(upenv, 42-1, 1)
    );
 }
}
static void _V0expand__syntax_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda79) (close _V0expand__syntax_k266) (bruijn ##input.103 41 1))
V_CALL_FUNC(_V0expand__syntax_lambda79, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k266, env)}),
      VGetArg(upenv, 41-1, 1)
    );
 }
}
static void _V0expand__syntax_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda78) (close _V0expand__syntax_k258) (bruijn ##input.103 40 1))
V_CALL_FUNC(_V0expand__syntax_lambda78, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k258, env)}),
      VGetArg(upenv, 40-1, 1)
    );
 }
}
static void _V0expand__syntax_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda77) (close _V0expand__syntax_k254) (bruijn ##input.103 39 1))
V_CALL_FUNC(_V0expand__syntax_lambda77, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k254, env)}),
      VGetArg(upenv, 39-1, 1)
    );
 }
}
static void _V0expand__syntax_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda68) (close _V0expand__syntax_k251) (bruijn ##input.103 38 1))
V_CALL_FUNC(_V0expand__syntax_lambda68, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k251, env)}),
      VGetArg(upenv, 38-1, 1)
    );
 }
}
static void _V0expand__syntax_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda67) (close _V0expand__syntax_k237) (bruijn ##input.103 37 1))
V_CALL_FUNC(_V0expand__syntax_lambda67, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k237, env)}),
      VGetArg(upenv, 37-1, 1)
    );
 }
}
static void _V0expand__syntax_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda66) (close _V0expand__syntax_k230) (bruijn ##input.103 36 1))
V_CALL_FUNC(_V0expand__syntax_lambda66, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k230, env)}),
      VGetArg(upenv, 36-1, 1)
    );
 }
}
static void _V0expand__syntax_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda65) (close _V0expand__syntax_k225) (bruijn ##input.103 35 1))
V_CALL_FUNC(_V0expand__syntax_lambda65, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k225, env)}),
      VGetArg(upenv, 35-1, 1)
    );
 }
}
static void _V0expand__syntax_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda64) (close _V0expand__syntax_k222) (bruijn ##input.103 34 1))
V_CALL_FUNC(_V0expand__syntax_lambda64, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k222, env)}),
      VGetArg(upenv, 34-1, 1)
    );
 }
}
static void _V0expand__syntax_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda63) (close _V0expand__syntax_k220) (bruijn ##input.103 33 1))
V_CALL_FUNC(_V0expand__syntax_lambda63, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k220, env)}),
      VGetArg(upenv, 33-1, 1)
    );
 }
}
static void _V0expand__syntax_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda62) (close _V0expand__syntax_k215) (bruijn ##input.103 32 1))
V_CALL_FUNC(_V0expand__syntax_lambda62, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k215, env)}),
      VGetArg(upenv, 32-1, 1)
    );
 }
}
static void _V0expand__syntax_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda61) (close _V0expand__syntax_k206) (bruijn ##input.103 31 1))
V_CALL_FUNC(_V0expand__syntax_lambda61, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k206, env)}),
      VGetArg(upenv, 31-1, 1)
    );
 }
}
static void _V0expand__syntax_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda60) (close _V0expand__syntax_k200) (bruijn ##input.103 30 1))
V_CALL_FUNC(_V0expand__syntax_lambda60, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k200, env)}),
      VGetArg(upenv, 30-1, 1)
    );
 }
}
static void _V0expand__syntax_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda59) (close _V0expand__syntax_k196) (bruijn ##input.103 29 1))
V_CALL_FUNC(_V0expand__syntax_lambda59, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k196, env)}),
      VGetArg(upenv, 29-1, 1)
    );
 }
}
static void _V0expand__syntax_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda58) (close _V0expand__syntax_k190) (bruijn ##input.103 28 1))
V_CALL_FUNC(_V0expand__syntax_lambda58, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k190, env)}),
      VGetArg(upenv, 28-1, 1)
    );
 }
}
static void _V0expand__syntax_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda57) (close _V0expand__syntax_k186) (bruijn ##input.103 27 1))
V_CALL_FUNC(_V0expand__syntax_lambda57, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k186, env)}),
      VGetArg(upenv, 27-1, 1)
    );
 }
}
static void _V0expand__syntax_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda56) (close _V0expand__syntax_k184) (bruijn ##input.103 26 1))
V_CALL_FUNC(_V0expand__syntax_lambda56, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k184, env)}),
      VGetArg(upenv, 26-1, 1)
    );
 }
}
static void _V0expand__syntax_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda55) (close _V0expand__syntax_k180) (bruijn ##input.103 25 1))
V_CALL_FUNC(_V0expand__syntax_lambda55, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k180, env)}),
      VGetArg(upenv, 25-1, 1)
    );
 }
}
static void _V0expand__syntax_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda54) (close _V0expand__syntax_k174) (bruijn ##input.103 24 1))
V_CALL_FUNC(_V0expand__syntax_lambda54, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k174, env)}),
      VGetArg(upenv, 24-1, 1)
    );
 }
}
static void _V0expand__syntax_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda53) (close _V0expand__syntax_k170) (bruijn ##input.103 23 1))
V_CALL_FUNC(_V0expand__syntax_lambda53, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k170, env)}),
      VGetArg(upenv, 23-1, 1)
    );
 }
}
static void _V0expand__syntax_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda52) (close _V0expand__syntax_k168) (bruijn ##input.103 22 1))
V_CALL_FUNC(_V0expand__syntax_lambda52, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k168, env)}),
      VGetArg(upenv, 22-1, 1)
    );
 }
}
static void _V0expand__syntax_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda51) (close _V0expand__syntax_k165) (bruijn ##input.103 21 1))
V_CALL_FUNC(_V0expand__syntax_lambda51, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k165, env)}),
      VGetArg(upenv, 21-1, 1)
    );
 }
}
static void _V0expand__syntax_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda50) (close _V0expand__syntax_k157) (bruijn ##input.103 20 1))
V_CALL_FUNC(_V0expand__syntax_lambda50, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k157, env)}),
      VGetArg(upenv, 20-1, 1)
    );
 }
}
static void _V0expand__syntax_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda49) (close _V0expand__syntax_k152) (bruijn ##input.103 19 1))
V_CALL_FUNC(_V0expand__syntax_lambda49, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k152, env)}),
      VGetArg(upenv, 19-1, 1)
    );
 }
}
static void _V0expand__syntax_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda48) (close _V0expand__syntax_k149) (bruijn ##input.103 18 1))
V_CALL_FUNC(_V0expand__syntax_lambda48, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k149, env)}),
      VGetArg(upenv, 18-1, 1)
    );
 }
}
static void _V0expand__syntax_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda47) (close _V0expand__syntax_k145) (bruijn ##input.103 17 1))
V_CALL_FUNC(_V0expand__syntax_lambda47, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k145, env)}),
      VGetArg(upenv, 17-1, 1)
    );
 }
}
static void _V0expand__syntax_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda46) (close _V0expand__syntax_k139) (bruijn ##input.103 16 1))
V_CALL_FUNC(_V0expand__syntax_lambda46, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k139, env)}),
      VGetArg(upenv, 16-1, 1)
    );
 }
}
static void _V0expand__syntax_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda45) (close _V0expand__syntax_k135) (bruijn ##input.103 15 1))
V_CALL_FUNC(_V0expand__syntax_lambda45, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k135, env)}),
      VGetArg(upenv, 15-1, 1)
    );
 }
}
static void _V0expand__syntax_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda44) (close _V0expand__syntax_k132) (bruijn ##input.103 14 1))
V_CALL_FUNC(_V0expand__syntax_lambda44, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k132, env)}),
      VGetArg(upenv, 14-1, 1)
    );
 }
}
static void _V0expand__syntax_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda36) (close _V0expand__syntax_k128) (bruijn ##input.103 13 1))
V_CALL_FUNC(_V0expand__syntax_lambda36, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k128, env)}),
      VGetArg(upenv, 13-1, 1)
    );
 }
}
static void _V0expand__syntax_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda35) (close _V0expand__syntax_k115) (bruijn ##input.103 12 1))
V_CALL_FUNC(_V0expand__syntax_lambda35, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k115, env)}),
      VGetArg(upenv, 12-1, 1)
    );
 }
}
static void _V0expand__syntax_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda34) (close _V0expand__syntax_k112) (bruijn ##input.103 11 1))
V_CALL_FUNC(_V0expand__syntax_lambda34, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k112, env)}),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0expand__syntax_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda24) (close _V0expand__syntax_k109) (bruijn ##input.103 10 1))
V_CALL_FUNC(_V0expand__syntax_lambda24, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k109, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0expand__syntax_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda23) (close _V0expand__syntax_k91) (bruijn ##input.103 9 1))
V_CALL_FUNC(_V0expand__syntax_lambda23, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k91, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0expand__syntax_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda22) (close _V0expand__syntax_k88) (bruijn ##input.103 8 1))
V_CALL_FUNC(_V0expand__syntax_lambda22, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k88, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0expand__syntax_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda21) (close _V0expand__syntax_k84) (bruijn ##input.103 7 1))
V_CALL_FUNC(_V0expand__syntax_lambda21, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k84, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0expand__syntax_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda20) (close _V0expand__syntax_k77) (bruijn ##input.103 6 1))
V_CALL_FUNC(_V0expand__syntax_lambda20, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k77, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0expand__syntax_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda19) (close _V0expand__syntax_k73) (bruijn ##input.103 5 1))
V_CALL_FUNC(_V0expand__syntax_lambda19, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k73, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0expand__syntax_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda18) (close _V0expand__syntax_k70) (bruijn ##input.103 4 1))
V_CALL_FUNC(_V0expand__syntax_lambda18, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k70, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0expand__syntax_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda17) (close _V0expand__syntax_k65) (bruijn ##input.103 3 1))
V_CALL_FUNC(_V0expand__syntax_lambda17, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k65, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__syntax_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda16) (close _V0expand__syntax_k60) (bruijn ##input.103 2 1))
V_CALL_FUNC(_V0expand__syntax_lambda16, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k60, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0expand__syntax_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda8) (close _V0expand__syntax_k57) (bruijn ##input.103 1 1))
V_CALL_FUNC(_V0expand__syntax_lambda8, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k57, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__syntax_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda7) (close _V0expand__syntax_k48) (bruijn ##input.103 0 1))
V_CALL_FUNC(_V0expand__syntax_lambda7, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k48, env)}),
      _var1
    );
 }
}
static void _V0expand__syntax_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda6) (bruijn ##k.264 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0expand__syntax_lambda6, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0expand__syntax_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 10 9) (bruijn ##k.263 0 0) (close _V0expand__syntax_lambda5))
V_CALL(VGetArg(upenv, 10-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda5, env)})
    );
 }
}
static void expand_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k43) (bruijn expand-syntax 8 9) (close _V0expand__syntax_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k43, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda4, env)})
    );
 }
}
static void _V0expand__toplevel_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k337, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 5 1) (bruijn ##k.1095 3 0) (bruijn ##x.1098 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn apply 14 16) (close _V0expand__toplevel_k337) (bruijn append 14 3) (bruijn ##x.1099 0 0))
V_CALL(VGetArg(upenv, 14-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k337, env)}),
      VGetArg(upenv, 14-1, 3),
      _var0
    );
 }
}
static void _V0expand__toplevel_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1097 0 0) ((bruijn map 13 14) (close _V0expand__toplevel_k336) (bruijn expand-toplevel 12 8) (##inline ##sys.cdr (bruijn ##expr.80 1 1))) ((bruijn ##k.1095 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k336, env)}),
      VGetArg(upenv, 12-1, 8),
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
static void _V0expand__toplevel_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.80 0 1)) ((bruijn equal? 12 7) (close _V0expand__toplevel_k335) (quote begin) (##inline ##sys.car (bruijn ##expr.80 0 1))) ((bruijn ##k.1095 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k335, env)}),
      VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
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
static void _V0expand__toplevel_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k342, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 7 1) (bruijn ##k.1086 4 0) (bruijn ##x.1090 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 16 19) (close _V0expand__toplevel_k342) (bruijn ##x.1091 0 0))
V_CALL(VGetArg(upenv, 16-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k342, env)}),
      _var0
    );
 }
}
static void _V0expand__toplevel_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.82 0 0)) ((bruijn expand-library 14 3) (close _V0expand__toplevel_k341) (##inline ##sys.cons (quote define-library) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.82 0 0)) (##inline ##sys.cdr (bruijn ##expr.82 0 0))))) ((bruijn ##k.1086 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k341, env)}),
      VInlineCons(
VEncodePointer(&_V0define__library.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
_var0
    )
,
      VInlineCdr(
_var0
    )

    )

    )

    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1088 0 0) ((close _V0expand__toplevel_k340) (##inline ##sys.cdr (bruijn ##expr.81 1 1))) ((bruijn ##k.1086 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__toplevel_k340, env, runtime,
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
static void _V0expand__toplevel_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.81 0 1)) ((bruijn equal? 13 7) (close _V0expand__toplevel_k339) (quote define-library) (##inline ##sys.car (bruijn ##expr.81 0 1))) ((bruijn ##k.1086 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k339, env)}),
      VEncodePointer(&_V0define__library.sym, VPOINTER_OTHER),
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
static void _V0expand__toplevel_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k345, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 6 1) (bruijn ##k.1080 2 0) (bruijn ##x.1083 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1082 0 0) ((bruijn error 15 15) (close _V0expand__toplevel_k345) (##string ##string.1613) (##inline ##sys.cons (quote define-library) (##inline ##sys.cdr (bruijn ##expr.83 1 1)))) ((bruijn ##k.1080 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k345, env)}),
      VEncodePointer(&_V10string_D1613.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define__library.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda102, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.83 0 1)) ((bruijn equal? 14 7) (close _V0expand__toplevel_k344) (quote define-library) (##inline ##sys.car (bruijn ##expr.83 0 1))) ((bruijn ##k.1080 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k344, env)}),
      VEncodePointer(&_V0define__library.sym, VPOINTER_OTHER),
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
static void _V0expand__toplevel_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k347, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1076 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.84 1 1))) ((bruijn ##kk.78 6 1) (bruijn ##k.1074 1 0) (quote ())) ((bruijn ##k.1074 1 0) #f)) ((bruijn ##k.1074 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->vars[0],
      VNULL
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
static void _V0expand__toplevel_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda103, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.84 0 1)) ((bruijn equal? 15 7) (close _V0expand__toplevel_k347) (quote import) (##inline ##sys.car (bruijn ##expr.84 0 1))) ((bruijn ##k.1074 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 15-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k347, env)}),
      VEncodePointer(&_V0import.sym, VPOINTER_OTHER),
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
static void _V0expand__toplevel_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k353, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 11 1) (bruijn ##k.1061 5 0) (bruijn ##x.1065 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0expand__toplevel_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 20 1) (close _V0expand__toplevel_k353) (##inline ##sys.cons (quote ##vcore.multidefine) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.load-library) (##inline ##sys.cons (bruijn ##x.1072 1 0) (quote ()))) (quote ()))) (bruijn ##x.1067 0 0))
V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k353, env)}),
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
static void _V0expand__toplevel_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-toplevel 18 8) (close _V0expand__toplevel_k352) (##inline ##sys.cons (quote import) (##inline ##sys.cdr (bruijn ##expr.86 1 0))))
V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k352, env)}),
      VInlineCons(
VEncodePointer(&_V0import.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[0]
    )

    )

    );
 }
}
static void _V0expand__toplevel_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.86 0 0)) ((bruijn mangle-library 18 17) (close _V0expand__toplevel_k351) (##inline ##sys.car (bruijn ##expr.86 0 0))) ((bruijn ##k.1061 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k351, env)}),
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
static void _V0expand__toplevel_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1063 0 0) ((close _V0expand__toplevel_k350) (##inline ##sys.cdr (bruijn ##expr.85 1 1))) ((bruijn ##k.1061 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__toplevel_k350, env, runtime,
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
static void _V0expand__toplevel_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.85 0 1)) ((bruijn equal? 16 7) (close _V0expand__toplevel_k349) (quote import) (##inline ##sys.car (bruijn ##expr.85 0 1))) ((bruijn ##k.1061 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k349, env)}),
      VEncodePointer(&_V0import.sym, VPOINTER_OTHER),
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
static void _V0expand__toplevel_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k358, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 11 1) (bruijn ##k.1049 4 0) (bruijn ##x.1054 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.89 0 0)) ((bruijn expand-toplevel 19 8) (close _V0expand__toplevel_k358) (##inline ##sys.cons (quote define) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.89 0 0)) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cdr (bruijn ##expr.89 0 0)) (##inline ##sys.cdr (bruijn ##expr.88 1 0)))) (quote ()))))) ((bruijn ##k.1049 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k358, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
_var0
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCdr(
_var0
    )
,
      VInlineCdr(
upenv->vars[0]
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
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.88 0 0)) ((close _V0expand__toplevel_k357) (##inline ##sys.car (bruijn ##expr.88 0 0))) ((bruijn ##k.1049 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__toplevel_k357, env, runtime,
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
static void _V0expand__toplevel_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1051 0 0) ((close _V0expand__toplevel_k356) (##inline ##sys.cdr (bruijn ##expr.87 1 1))) ((bruijn ##k.1049 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__toplevel_k356, env, runtime,
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
static void _V0expand__toplevel_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.87 0 1)) ((bruijn equal? 17 7) (close _V0expand__toplevel_k355) (quote define) (##inline ##sys.car (bruijn ##expr.87 0 1))) ((bruijn ##k.1049 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 17-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k355, env)}),
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
static void _V0expand__toplevel_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k366, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1044 1 0) ((bruijn error 25 15) (bruijn ##k.1045 0 0) (##string ##string.1614) (bruijn x 4 0)) ((bruijn ##k.1045 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 25-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1614.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k369, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 17 1) (bruijn ##k.1032 9 0) (bruijn ##x.1038 0 0))
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0
    );
 }
}
static void _V0expand__toplevel_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 26 19) (close _V0expand__toplevel_k369) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn x 5 0) (##inline ##sys.cons (bruijn ##x.1043 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 26-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k369, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 0),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__toplevel_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 24 9) (close _V0expand__toplevel_k368) (##inline ##sys.car (bruijn ##expr.92 3 0)))
V_CALL(VGetArg(upenv, 24-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k368, env)}),
      VInlineCar(
upenv->up->up->vars[0]
    )

    );
 }
}
static void _V0expand__toplevel_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k366) (close _V0expand__toplevel_k367))
V_CALL_FUNC(_V0expand__toplevel_k366, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k367, env)})
    );
 }
}
static void _V0expand__toplevel_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 23 12) (close _V0expand__toplevel_k365) (bruijn ##x.1046 0 0))
V_CALL(VGetArg(upenv, 23-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k365, env)}),
      _var0
    );
 }
}
static void _V0expand__toplevel_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.92 0 0))) ((bruijn symbol? 22 13) (close _V0expand__toplevel_k364) (bruijn x 1 0)) ((bruijn ##k.1032 4 0) #f)) ((bruijn ##k.1032 4 0) #f))
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
V_CALL(VGetArg(upenv, 22-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k364, env)}),
      upenv->vars[0]
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
static void _V0expand__toplevel_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k363) (##inline ##sys.cdr (bruijn ##expr.91 1 0)))
V_CALL_FUNC(_V0expand__toplevel_k363, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0expand__toplevel_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.91 0 0)) ((close _V0expand__toplevel_k362) (##inline ##sys.car (bruijn ##expr.91 0 0))) ((bruijn ##k.1032 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__toplevel_k362, env, runtime,
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
static void _V0expand__toplevel_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1034 0 0) ((close _V0expand__toplevel_k361) (##inline ##sys.cdr (bruijn ##expr.90 1 1))) ((bruijn ##k.1032 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__toplevel_k361, env, runtime,
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
static void _V0expand__toplevel_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda106, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.90 0 1)) ((bruijn equal? 18 7) (close _V0expand__toplevel_k360) (quote define) (##inline ##sys.car (bruijn ##expr.90 0 1))) ((bruijn ##k.1032 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k360, env)}),
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
static void _V0expand__toplevel_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k372, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 11 1) (bruijn ##k.1026 2 0) (bruijn ##x.1029 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1028 0 0) ((bruijn error 20 15) (close _V0expand__toplevel_k372) (##string ##string.1615) (##inline ##sys.cons (quote define) (##inline ##sys.cdr (bruijn ##expr.93 1 1)))) ((bruijn ##k.1026 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k372, env)}),
      VEncodePointer(&_V10string_D1615.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda107, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.93 0 1)) ((bruijn equal? 19 7) (close _V0expand__toplevel_k371) (quote define) (##inline ##sys.car (bruijn ##expr.93 0 1))) ((bruijn ##k.1026 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k371, env)}),
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
static void _V0expand__toplevel_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k381, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1021 1 0) ((bruijn error 28 15) (bruijn ##k.1022 0 0) (##string ##string.1616) (bruijn f 5 0)) ((bruijn ##k.1022 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 28-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1616.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k385, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 21 1) (bruijn ##k.990 11 0) (bruijn ##x.996 0 0))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0
    );
 }
}
static void _V0expand__toplevel_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 30 19) (close _V0expand__toplevel_k385) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn f 7 0) (##inline ##sys.cons (bruijn ##x.1002 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 30-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k385, env)}),
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 7-1, 0),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__toplevel_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 28 9) (close _V0expand__toplevel_k384) (bruijn l 4 0))
V_CALL(VGetArg(upenv, 28-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k384, env)}),
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0expand__toplevel_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k386, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1019 0 0) ((bruijn ##kk.97 3 1) (bruijn ##k.1017 1 0) (quote ok)) ((bruijn ##k.1017 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda111, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.99 0 1)) ((bruijn equal? 31 7) (close _V0expand__toplevel_k386) (quote lambda) (##inline ##sys.car (bruijn ##expr.99 0 1))) ((bruijn ##k.1017 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 31-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k386, env)}),
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
static void _V0expand__toplevel_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k388, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1015 0 0) ((bruijn ##kk.97 4 1) (bruijn ##k.1013 1 0) (quote ok)) ((bruijn ##k.1013 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda112, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.100 0 1)) ((bruijn equal? 32 7) (close _V0expand__toplevel_k388) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.100 0 1))) ((bruijn ##k.1013 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 32-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k388, env)}),
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
static void _V0expand__toplevel_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k390, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1011 0 0) ((bruijn ##kk.97 5 1) (bruijn ##k.1009 1 0) (quote ok)) ((bruijn ##k.1009 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->vars[0],
      VEncodePointer(&_V0ok.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda113, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.101 0 1)) ((bruijn equal? 33 7) (close _V0expand__toplevel_k390) (quote ##vcore.function) (##inline ##sys.car (bruijn ##expr.101 0 1))) ((bruijn ##k.1009 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 33-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k390, env)}),
      VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER),
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
static void _V0expand__toplevel_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k392, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.97 5 1) (bruijn ##k.1004 4 0) (bruijn ##x.1008 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 33 15) (close _V0expand__toplevel_k392) (##string ##string.1617) (bruijn l 8 0))
V_CALL(VGetArg(upenv, 33-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k392, env)}),
      VEncodePointer(&_V10string_D1617.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 0)
    );
 }
}
static void _V0expand__toplevel_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda113) (close _V0expand__toplevel_k391) (bruijn ##input.98 2 1))
V_CALL_FUNC(_V0expand__toplevel_lambda113, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k391, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda112) (close _V0expand__toplevel_k389) (bruijn ##input.98 1 1))
V_CALL_FUNC(_V0expand__toplevel_lambda112, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k389, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__toplevel_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda110, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda111) (close _V0expand__toplevel_k387) (bruijn ##input.98 0 1))
V_CALL_FUNC(_V0expand__toplevel_lambda111, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k387, env)}),
      _var1
    );
 }
}
static void _V0expand__toplevel_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__toplevel_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda110) (bruijn ##k.1003 0 0) (bruijn l 4 0))
V_CALL_FUNC(_V0expand__toplevel_lambda110, env, runtime,
      _var0,
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0expand__toplevel_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 28 9) (close _V0expand__toplevel_k383) (close _V0expand__toplevel_lambda109))
V_CALL(VGetArg(upenv, 28-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k383, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_lambda109, env)})
    );
 }
}
static void _V0expand__toplevel_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k381) (close _V0expand__toplevel_k382))
V_CALL_FUNC(_V0expand__toplevel_k381, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k382, env)})
    );
 }
}
static void _V0expand__toplevel_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 26 12) (close _V0expand__toplevel_k380) (bruijn ##x.1023 0 0))
V_CALL(VGetArg(upenv, 26-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k380, env)}),
      _var0
    );
 }
}
static void _V0expand__toplevel_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.96 1 0))) ((bruijn string? 25 18) (close _V0expand__toplevel_k379) (bruijn f 2 0)) ((bruijn ##k.990 5 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 25-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k379, env)}),
      upenv->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__toplevel_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.96 0 0)) ((close _V0expand__toplevel_k378) (##inline ##sys.car (bruijn ##expr.96 0 0))) ((bruijn ##k.990 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__toplevel_k378, env, runtime,
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
static void _V0expand__toplevel_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k377) (##inline ##sys.cdr (bruijn ##expr.95 1 0)))
V_CALL_FUNC(_V0expand__toplevel_k377, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0expand__toplevel_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.95 0 0)) ((close _V0expand__toplevel_k376) (##inline ##sys.car (bruijn ##expr.95 0 0))) ((bruijn ##k.990 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__toplevel_k376, env, runtime,
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
static void _V0expand__toplevel_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.992 0 0) ((close _V0expand__toplevel_k375) (##inline ##sys.cdr (bruijn ##expr.94 1 1))) ((bruijn ##k.990 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__toplevel_k375, env, runtime,
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
static void _V0expand__toplevel_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda108, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.94 0 1)) ((bruijn equal? 20 7) (close _V0expand__toplevel_k374) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.94 0 1))) ((bruijn ##k.990 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k374, env)}),
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
static void _V0expand__toplevel_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k395, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.78 13 1) (bruijn ##k.987 2 0) (bruijn ##x.988 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__toplevel_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 22 19) (close _V0expand__toplevel_k395) (bruijn ##x.989 0 0))
V_CALL(VGetArg(upenv, 22-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k395, env)}),
      _var0
    );
 }
}
static void _V0expand__toplevel_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn expand-syntax 20 9) (close _V0expand__toplevel_k394) (bruijn expr 0 1))
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k394, env)}),
      _var1
    );
 }
}
static void _V0expand__toplevel_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k396, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 21 15) (bruijn ##k.976 10 0) (##string ##string.1618))
V_CALL(VGetArg(upenv, 21-1, 15), runtime,
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10string_D1618.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__toplevel_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda114) (close _V0expand__toplevel_k396) (bruijn ##input.79 9 1))
V_CALL_FUNC(_V0expand__toplevel_lambda114, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k396, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0expand__toplevel_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda108) (close _V0expand__toplevel_k393) (bruijn ##input.79 8 1))
V_CALL_FUNC(_V0expand__toplevel_lambda108, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k393, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0expand__toplevel_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda107) (close _V0expand__toplevel_k373) (bruijn ##input.79 7 1))
V_CALL_FUNC(_V0expand__toplevel_lambda107, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k373, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0expand__toplevel_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda106) (close _V0expand__toplevel_k370) (bruijn ##input.79 6 1))
V_CALL_FUNC(_V0expand__toplevel_lambda106, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k370, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0expand__toplevel_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda105) (close _V0expand__toplevel_k359) (bruijn ##input.79 5 1))
V_CALL_FUNC(_V0expand__toplevel_lambda105, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k359, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0expand__toplevel_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda104) (close _V0expand__toplevel_k354) (bruijn ##input.79 4 1))
V_CALL_FUNC(_V0expand__toplevel_lambda104, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k354, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda103) (close _V0expand__toplevel_k348) (bruijn ##input.79 3 1))
V_CALL_FUNC(_V0expand__toplevel_lambda103, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k348, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda102) (close _V0expand__toplevel_k346) (bruijn ##input.79 2 1))
V_CALL_FUNC(_V0expand__toplevel_lambda102, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k346, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0expand__toplevel_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda101) (close _V0expand__toplevel_k343) (bruijn ##input.79 1 1))
V_CALL_FUNC(_V0expand__toplevel_lambda101, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k343, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__toplevel_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda99, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda100) (close _V0expand__toplevel_k338) (bruijn ##input.79 0 1))
V_CALL_FUNC(_V0expand__toplevel_lambda100, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k338, env)}),
      _var1
    );
 }
}
static void _V0expand__toplevel_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__toplevel_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda99) (bruijn ##k.975 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0expand__toplevel_lambda99, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0expand__toplevel_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__toplevel_lambda97, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda97, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 9 9) (bruijn ##k.974 0 0) (close _V0expand__toplevel_lambda98))
V_CALL(VGetArg(upenv, 9-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_lambda98, env)})
    );
 }
}
static void expand_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k42) (bruijn expand-toplevel 7 8) (close _V0expand__toplevel_lambda97))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k42, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_lambda97, env)})
    );
 }
}
static void _V0expand__let_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k397, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1152 1 0) (##inline ##sys.car (bruijn ##expr.59 4 1)) (quote ()) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCar(
upenv->up->up->up->vars[1]
    )
,
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k400, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.63 5 1) (bruijn ##k.1170 2 0) (bruijn ##expr.65 3 1) (bruijn ##x.1171 1 0) (bruijn ##x.1172 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 17 8) (close _V0loop_k400) (bruijn ##vals.62 2 3))
V_CALL(VGetArg(upenv, 17-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k400, env)}),
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.65 1 1))) ((bruijn reverse 16 8) (close _V0loop_k399) (bruijn ##xs.61 1 2)) ((bruijn ##k.1170 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k399, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k404, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.67 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.67 0 0))) ((bruijn ##kk.64 3 1) (bruijn ##k.1162 1 0) (##inline ##sys.cdr (bruijn ##expr.65 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.66 2 0)) (bruijn ##xs.61 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.67 0 0)) (bruijn ##vals.62 6 3))) ((bruijn ##k.1162 1 0) #f)) ((bruijn ##k.1162 1 0) #f))
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
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )
,
      VInlineCons(
VInlineCar(
upenv->up->vars[0]
    )
,
      VGetArg(upenv, 6-1, 2)
    )
,
      VInlineCons(
VInlineCar(
_var0
    )
,
      VGetArg(upenv, 6-1, 3)
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
static void _V0loop_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.66 1 0)) ((close _V0loop_k404) (##inline ##sys.cdr (bruijn ##expr.66 1 0))) ((bruijn ##k.1162 0 0) #f))
if(VDecodeBool(
VInlinePairP(
upenv->vars[0]
    )
)) {
V_CALL_FUNC(_V0loop_k404, env, runtime,
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
static void _V0loop_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k407, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.63 9 1) (bruijn ##k.1157 4 0) (bruijn ##expr.65 7 1) (bruijn ##x.1159 1 0) (bruijn ##x.1160 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 21 8) (close _V0loop_k407) (bruijn ##vals.62 6 3))
V_CALL(VGetArg(upenv, 21-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k407, env)}),
      VGetArg(upenv, 6-1, 3)
    );
 }
}
static void _V0loop_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 20 8) (close _V0loop_k406) (bruijn ##xs.61 5 2))
V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k406, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k403) (close _V0loop_k405))
V_CALL_FUNC(_V0loop_k403, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k405, env)})
    );
 }
}
static void _V0loop_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda124, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda124, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k402) (##inline ##sys.car (bruijn ##expr.65 3 1)))
V_CALL_FUNC(_V0loop_k402, env, runtime,
      VInlineCar(
upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 17 9) (bruijn ##k.1156 0 0) (close _V0loop_lambda124))
V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda124, env)})
    );
 }
}
static void _V0loop_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 16 10) (bruijn ##k.1154 1 0) (close _V0loop_lambda123) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 16-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda123, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda122, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda122, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k398) (close _V0loop_k401))
V_CALL_FUNC(_V0loop_k398, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k401, env)})
    );
 }
}
static void _V0expand__let_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0expand__let_k397) (bruijn loop 0 1) (close _V0loop_lambda122))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k397, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda122, env)})
    );
 }
}
static void _V0expand__let_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__let_lambda120, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda120, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__let_lambda121) (bruijn ##k.1151 0 0) #f)
V_CALL_FUNC(_V0expand__let_lambda121, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__let_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_lambda119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 12 9) (bruijn ##k.1150 0 0) (close _V0expand__let_lambda120))
V_CALL(VGetArg(upenv, 12-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda120, env)})
    );
 }
}
static void _V0expand__let_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k408, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.57 4 1) (bruijn ##k.1174 1 0) (bruijn ##x.1176 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__let_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0expand__let_lambda125, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda125, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn expand-syntax 11 9) (close _V0expand__let_k408) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 0 2) (##inline ##sys.cdr (bruijn ##expr.59 1 1)))) (bruijn vals 0 3))) ((bruijn ##k.1174 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 11-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k408, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
_var2,
      VInlineCdr(
upenv->vars[1]
    )

    )

    )
,
      _var3
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__let_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda118, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.59 0 1)) ((bruijn call-with-values 11 10) (bruijn ##k.1148 0 0) (close _V0expand__let_lambda119) (close _V0expand__let_lambda125)) ((bruijn ##k.1148 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 11-1, 10), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda119, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda125, env)})
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__let_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k412, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1114 1 0) (##inline ##sys.car (bruijn ##expr.69 4 0)) (quote ()) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCar(
upenv->up->up->up->vars[0]
    )
,
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k415, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.73 5 1) (bruijn ##k.1132 2 0) (bruijn ##expr.75 3 1) (bruijn ##x.1133 1 0) (bruijn ##x.1134 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 20 8) (close _V0loop_k415) (bruijn ##vals.72 2 3))
V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k415, env)}),
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.75 1 1))) ((bruijn reverse 19 8) (close _V0loop_k414) (bruijn ##xs.71 1 2)) ((bruijn ##k.1132 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k414, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k419, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.77 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.77 0 0))) ((bruijn ##kk.74 3 1) (bruijn ##k.1124 1 0) (##inline ##sys.cdr (bruijn ##expr.75 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.76 2 0)) (bruijn ##xs.71 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.77 0 0)) (bruijn ##vals.72 6 3))) ((bruijn ##k.1124 1 0) #f)) ((bruijn ##k.1124 1 0) #f))
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
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
VGetArg(upenv, 6-1, 1)
    )
,
      VInlineCons(
VInlineCar(
upenv->up->vars[0]
    )
,
      VGetArg(upenv, 6-1, 2)
    )
,
      VInlineCons(
VInlineCar(
_var0
    )
,
      VGetArg(upenv, 6-1, 3)
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
static void _V0loop_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.76 1 0)) ((close _V0loop_k419) (##inline ##sys.cdr (bruijn ##expr.76 1 0))) ((bruijn ##k.1124 0 0) #f))
if(VDecodeBool(
VInlinePairP(
upenv->vars[0]
    )
)) {
V_CALL_FUNC(_V0loop_k419, env, runtime,
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
static void _V0loop_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k422, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.73 9 1) (bruijn ##k.1119 4 0) (bruijn ##expr.75 7 1) (bruijn ##x.1121 1 0) (bruijn ##x.1122 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k421, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 24 8) (close _V0loop_k422) (bruijn ##vals.72 6 3))
V_CALL(VGetArg(upenv, 24-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k422, env)}),
      VGetArg(upenv, 6-1, 3)
    );
 }
}
static void _V0loop_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 23 8) (close _V0loop_k421) (bruijn ##xs.71 5 2))
V_CALL(VGetArg(upenv, 23-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k421, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k418) (close _V0loop_k420))
V_CALL_FUNC(_V0loop_k418, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k420, env)})
    );
 }
}
static void _V0loop_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda132, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda132, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k417) (##inline ##sys.car (bruijn ##expr.75 3 1)))
V_CALL_FUNC(_V0loop_k417, env, runtime,
      VInlineCar(
upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 20 9) (bruijn ##k.1118 0 0) (close _V0loop_lambda132))
V_CALL(VGetArg(upenv, 20-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda132, env)})
    );
 }
}
static void _V0loop_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 19 10) (bruijn ##k.1116 1 0) (close _V0loop_lambda131) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 19-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda131, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda130, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda130, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k413) (close _V0loop_k416))
V_CALL_FUNC(_V0loop_k413, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k416, env)})
    );
 }
}
static void _V0expand__let_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda129, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0expand__let_k412) (bruijn loop 0 1) (close _V0loop_lambda130))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k412, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda130, env)})
    );
 }
}
static void _V0expand__let_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__let_lambda128, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda128, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__let_lambda129) (bruijn ##k.1113 0 0) #f)
V_CALL_FUNC(_V0expand__let_lambda129, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0expand__let_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_lambda127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 15 9) (bruijn ##k.1112 0 0) (close _V0expand__let_lambda128))
V_CALL(VGetArg(upenv, 15-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda128, env)})
    );
 }
}
static void _V0expand__let_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k423, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.57 7 1) (bruijn ##k.1136 1 0) (bruijn ##x.1138 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__let_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0expand__let_lambda133, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda133, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn expand-syntax 14 9) (close _V0expand__let_k423) (##inline ##sys.cons (quote letrec) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn loop 2 0) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn xs 0 2) (##inline ##sys.cdr (bruijn ##expr.69 1 0)))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (bruijn loop 2 0) (bruijn vals 0 3)) (quote ()))))) ((bruijn ##k.1136 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k423, env)}),
      VInlineCons(
VEncodePointer(&_V0letrec.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
upenv->up->vars[0],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
_var2,
      VInlineCdr(
upenv->vars[0]
    )

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
upenv->up->vars[0],
      _var3
    )
,
      VNULL
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
static void _V0expand__let_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.69 0 0)) ((bruijn call-with-values 14 10) (bruijn ##k.1109 2 0) (close _V0expand__let_lambda127) (close _V0expand__let_lambda133)) ((bruijn ##k.1109 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 10), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda127, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda133, env)})
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__let_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__let_k411) (##inline ##sys.cdr (bruijn ##expr.68 1 1)))
V_CALL_FUNC(_V0expand__let_k411, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__let_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda126, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.68 0 1)) ((close _V0expand__let_k410) (##inline ##sys.car (bruijn ##expr.68 0 1))) ((bruijn ##k.1109 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0expand__let_k410, env, runtime,
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
static void _V0expand__let_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k426, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 14 15) (bruijn ##k.1103 4 0) (##string ##string.1618))
V_CALL(VGetArg(upenv, 14-1, 15), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1618.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__let_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k425, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.57 4 1) (close _V0expand__let_k426) (bruijn ##x.1107 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k426, env)}),
      _var0
    );
 }
}
static void _V0expand__let_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 12 15) (close _V0expand__let_k425) (##string ##string.1619) (##inline ##sys.cons (quote let) (bruijn expr 4 1)))
V_CALL(VGetArg(upenv, 12-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k425, env)}),
      VEncodePointer(&_V10string_D1619.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    )

    );
 }
}
static void _V0expand__let_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__let_lambda126) (close _V0expand__let_k424) (bruijn ##input.58 1 1))
V_CALL_FUNC(_V0expand__let_lambda126, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k424, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__let_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda117, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__let_lambda118) (close _V0expand__let_k409) (bruijn ##input.58 0 1))
V_CALL_FUNC(_V0expand__let_lambda118, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k409, env)}),
      _var1
    );
 }
}
static void _V0expand__let_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__let_lambda116, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda116, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__let_lambda117) (bruijn ##k.1102 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0expand__let_lambda117, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0expand__let_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__let_lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda115, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 8 9) (bruijn ##k.1101 0 0) (close _V0expand__let_lambda116))
V_CALL(VGetArg(upenv, 8-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda116, env)})
    );
 }
}
static void expand_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k41) (bruijn expand-let 6 7) (close _V0expand__let_lambda115))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k41, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda115, env)})
    );
 }
}
static void _V0expand__lambda_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k431, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1206 1 0) ((bruijn error 15 15) (bruijn ##k.1207 0 0) (##string ##string.1620) (bruijn args 4 0)) ((bruijn ##k.1207 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 15-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1620.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__lambda_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k433, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 8 1) (bruijn ##k.1198 6 0) (##inline ##sys.cons (bruijn args 5 0) (##inline ##sys.cons (bruijn ##x.1205 0 0) (quote ()))))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
VGetArg(upenv, 5-1, 0),
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__lambda_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k432, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 14 9) (close _V0expand__lambda_k433) (##inline ##sys.car (bruijn ##expr.55 3 0)))
V_CALL(VGetArg(upenv, 14-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k433, env)}),
      VInlineCar(
upenv->up->up->vars[0]
    )

    );
 }
}
static void _V0expand__lambda_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__lambda_k431) (close _V0expand__lambda_k432))
V_CALL_FUNC(_V0expand__lambda_k431, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k432, env)})
    );
 }
}
static void _V0expand__lambda_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k429, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 13 12) (close _V0expand__lambda_k430) (bruijn ##x.1208 0 0))
V_CALL(VGetArg(upenv, 13-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k430, env)}),
      _var0
    );
 }
}
static void _V0expand__lambda_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.55 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.55 0 0))) ((bruijn valid-args? 11 5) (close _V0expand__lambda_k429) (bruijn args 1 0)) ((bruijn ##k.1198 2 0) #f)) ((bruijn ##k.1198 2 0) #f))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k429, env)}),
      upenv->vars[0]
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
static void _V0expand__lambda_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k427, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__lambda_k428) (##inline ##sys.cdr (bruijn ##expr.54 1 1)))
V_CALL_FUNC(_V0expand__lambda_k428, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__lambda_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_lambda137, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.54 0 1)) ((close _V0expand__lambda_k427) (##inline ##sys.car (bruijn ##expr.54 0 1))) ((bruijn ##k.1198 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0expand__lambda_k427, env, runtime,
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
static void _V0expand__lambda_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k438, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1195 1 0) ((bruijn error 15 15) (bruijn ##k.1196 0 0) (##string ##string.1620) (bruijn args 3 0)) ((bruijn ##k.1196 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 15-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1620.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__lambda_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k441, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 9 1) (bruijn ##k.1188 6 0) (bruijn ##x.1190 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0expand__lambda_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-lambda 15 6) (close _V0expand__lambda_k441) (##inline ##sys.cons (bruijn args 4 0) (##inline ##sys.cons (bruijn ##x.1194 0 0) (quote ()))))
V_CALL(VGetArg(upenv, 15-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k441, env)}),
      VInlineCons(
upenv->up->up->up->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0expand__lambda_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k439, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn collect-defines 14 1) (close _V0expand__lambda_k440) (##inline ##sys.cdr (bruijn ##expr.56 4 1)))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k440, env)}),
      VInlineCdr(
upenv->up->up->up->vars[1]
    )

    );
 }
}
static void _V0expand__lambda_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k437, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__lambda_k438) (close _V0expand__lambda_k439))
V_CALL_FUNC(_V0expand__lambda_k438, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k439, env)})
    );
 }
}
static void _V0expand__lambda_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 13 12) (close _V0expand__lambda_k437) (bruijn ##x.1197 0 0))
V_CALL(VGetArg(upenv, 13-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k437, env)}),
      _var0
    );
 }
}
static void _V0expand__lambda_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k435, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn valid-args? 11 5) (close _V0expand__lambda_k436) (bruijn args 0 0))
V_CALL(VGetArg(upenv, 11-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k436, env)}),
      _var0
    );
 }
}
static void _V0expand__lambda_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_lambda138, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 1)) ((close _V0expand__lambda_k435) (##inline ##sys.car (bruijn ##expr.56 0 1))) ((bruijn ##k.1188 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0expand__lambda_k435, env, runtime,
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
static void _V0expand__lambda_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k444, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 13 15) (bruijn ##k.1182 4 0) (##string ##string.1618))
V_CALL(VGetArg(upenv, 13-1, 15), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1618.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__lambda_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k443, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##kk.52 4 1) (close _V0expand__lambda_k444) (bruijn ##x.1186 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k444, env)}),
      _var0
    );
 }
}
static void _V0expand__lambda_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k442, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 11 15) (close _V0expand__lambda_k443) (##string ##string.1621) (##inline ##sys.cons (quote lambda) (bruijn expr 4 1)))
V_CALL(VGetArg(upenv, 11-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k443, env)}),
      VEncodePointer(&_V10string_D1621.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]
    )

    );
 }
}
static void _V0expand__lambda_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__lambda_lambda138) (close _V0expand__lambda_k442) (bruijn ##input.53 1 1))
V_CALL_FUNC(_V0expand__lambda_lambda138, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k442, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__lambda_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_lambda136, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__lambda_lambda137) (close _V0expand__lambda_k434) (bruijn ##input.53 0 1))
V_CALL_FUNC(_V0expand__lambda_lambda137, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k434, env)}),
      _var1
    );
 }
}
static void _V0expand__lambda_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__lambda_lambda135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_lambda135, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__lambda_lambda136) (bruijn ##k.1181 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0expand__lambda_lambda136, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0expand__lambda_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__lambda_lambda134, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_lambda134, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 7 9) (bruijn ##k.1180 0 0) (close _V0expand__lambda_lambda135))
V_CALL(VGetArg(upenv, 7-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_lambda135, env)})
    );
 }
}
static void expand_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k40) (bruijn expand-lambda 5 6) (close _V0expand__lambda_lambda134))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k40, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_lambda134, env)})
    );
 }
}
static void _V0valid__args_Q_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k452, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 14 15) (bruijn ##k.1217 1 0) (##string ##string.1622) (bruijn ##x.1218 0 0))
V_CALL(VGetArg(upenv, 14-1, 15), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1622.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0valid__args_Q_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k451, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1216 1 0) ((bruijn car 13 21) (close _V0valid__args_Q_k452) (bruijn args 7 1)) ((bruijn ##k.1217 0 0) #t))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 13-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k452, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(true)
    );
}
 }
}
static void _V0valid__args_Q_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k454, runtime, upenv, 1, argc, _var0) {
  // ((bruijn valid-args? 13 5) (bruijn ##k.1210 8 0) (bruijn ##x.1215 0 0))
V_CALL(VGetArg(upenv, 13-1, 5), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0valid__args_Q_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k453, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1214 0 0) ((bruijn cdr 13 2) (close _V0valid__args_Q_k454) (bruijn args 7 1)) ((bruijn ##k.1210 7 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k454, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0valid__args_Q_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k450, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0valid__args_Q_k451) (close _V0valid__args_Q_k453))
V_CALL_FUNC(_V0valid__args_Q_k451, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k453, env)})
    );
 }
}
static void _V0valid__args_Q_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k449, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn memtail 10 4) (close _V0valid__args_Q_k450) (bruijn ##x.1219 1 0) (bruijn ##x.1220 0 0))
V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k450, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0valid__args_Q_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k448, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 10 2) (close _V0valid__args_Q_k449) (bruijn args 4 1))
V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k449, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0valid__args_Q_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k447, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1213 0 0) ((bruijn car 9 21) (close _V0valid__args_Q_k448) (bruijn args 3 1)) ((bruijn ##k.1210 3 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k448, env)}),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0valid__args_Q_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k446, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1212 0 0) ((bruijn ##k.1210 2 0) (bruijn ##p.1212 0 0)) ((bruijn pair? 8 22) (close _V0valid__args_Q_k447) (bruijn args 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 8-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k447, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0valid__args_Q_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k445, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1211 0 0) ((bruijn ##k.1210 1 0) (bruijn ##p.1211 0 0)) ((bruijn null? 7 20) (close _V0valid__args_Q_k446) (bruijn args 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k446, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0valid__args_Q_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0valid__args_Q_lambda139, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_lambda139, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 6 13) (close _V0valid__args_Q_k445) (bruijn args 0 1))
V_CALL(VGetArg(upenv, 6-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k445, env)}),
      _var1
    );
 }
}
static void expand_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k39) (bruijn valid-args? 4 5) (close _V0valid__args_Q_lambda139))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k39, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_lambda139, env)})
    );
 }
}
static void _V0memtail_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k458, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memtail 8 4) (bruijn ##k.1221 4 0) (bruijn x 4 1) (bruijn ##x.1224 0 0))
V_CALL(VGetArg(upenv, 8-1, 4), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0memtail_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1223 0 0) ((bruijn ##k.1221 3 0) (bruijn ##p.1223 0 0)) ((bruijn cdr 8 2) (close _V0memtail_k458) (bruijn args 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k458, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0memtail_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 7 5) (close _V0memtail_k457) (bruijn x 2 1) (bruijn ##x.1225 0 0))
V_CALL(VGetArg(upenv, 7-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k457, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0memtail_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k455, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1222 0 0) ((bruijn car 6 21) (close _V0memtail_k456) (bruijn args 1 2)) ((bruijn eqv? 6 5) (bruijn ##k.1221 1 0) (bruijn x 1 1) (bruijn args 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k456, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 5), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]
    );
}
 }
}
static void _V0memtail_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0memtail_lambda140, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_lambda140, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn pair? 5 22) (close _V0memtail_k455) (bruijn args 0 2))
V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k455, env)}),
      _var2
    );
 }
}
static void expand_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k38) (bruijn memtail 3 4) (close _V0memtail_lambda140))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k38, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_lambda140, env)})
    );
 }
}
static void _V0expand__library_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k478, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1268 1 0) ((bruijn error 25 15) (bruijn ##k.1269 0 0) (##string ##string.1623)) ((bruijn ##k.1269 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 25-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1623.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k482, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 28 12) (bruijn ##k.1266 1 0) (bruijn ##x.1267 0 0))
V_CALL(VGetArg(upenv, 28-1, 12), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0expand__library_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k481, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1265 1 0) ((bruijn null? 27 20) (close _V0expand__library_k482) (bruijn free-vars 22 6)) ((bruijn ##k.1266 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 27-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k482, env)}),
      VGetArg(upenv, 22-1, 6)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k485, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 29 15) (bruijn ##k.1263 1 0) (##string ##string.1624) (bruijn ##x.1264 0 0) (bruijn free-vars 24 6))
V_CALL(VGetArg(upenv, 29-1, 15), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1624.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 24-1, 6)
    );
 }
}
static void _V0expand__library_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k484, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1262 1 0) ((bruijn cadr 28 26) (close _V0expand__library_k485) (bruijn lib 24 1)) ((bruijn ##k.1263 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 28-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k485, env)}),
      VGetArg(upenv, 24-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k490, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1227 27 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (bruijn libname 11 0) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (bruijn ##x.1241 0 0) (quote ())))) (quote ())))))
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 11-1, 0),
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
static void _V0expand__library_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k489, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 30 9) (close _V0expand__library_k490) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.make-import) (##inline ##sys.cons (bruijn libname 10 0) (bruijn ##x.1259 2 0))) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (bruijn ##x.1248 1 0) (bruijn ##x.1249 0 0))) (quote ())))))
V_CALL(VGetArg(upenv, 30-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k490, env)}),
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
VGetArg(upenv, 10-1, 0),
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
static void _V0expand__library_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k488, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 30 25) (close _V0expand__library_k489) (bruijn basic-library 25 5))
V_CALL(VGetArg(upenv, 30-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k489, env)}),
      VGetArg(upenv, 25-1, 5)
    );
 }
}
static void _V0expand__library_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k491, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1250 1 0) (##inline ##sys.cons (bruijn f 1 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.import) (##inline ##sys.cons (bruijn ##x.1254 0 0) (quote ()))) (quote ()))))
V_CALL(upenv->vars[0], runtime,
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
static void _V0expand__library_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda143, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_lambda143, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn list 30 19) (close _V0expand__library_k491) (quote quote) (bruijn f 0 1))
V_CALL(VGetArg(upenv, 30-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k491, env)}),
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0expand__library_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 29 14) (close _V0expand__library_k488) (close _V0expand__library_lambda143) (bruijn free-vars 24 6))
V_CALL(VGetArg(upenv, 29-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k488, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_lambda143, env)}),
      VGetArg(upenv, 24-1, 6)
    );
 }
}
static void _V0expand__library_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda144, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_lambda144, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1260 0 0) (##inline ##sys.cons (quote ##vcore.load-library) (##inline ##sys.cons (bruijn i 0 1) (quote ()))))
V_CALL(_var0, runtime,
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
static void _V0expand__library_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k486, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 28 14) (close _V0expand__library_k487) (close _V0expand__library_lambda144) (bruijn imports 23 3))
V_CALL(VGetArg(upenv, 28-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k487, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_lambda144, env)}),
      VGetArg(upenv, 23-1, 3)
    );
 }
}
static void _V0expand__library_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k483, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library_k484) (close _V0expand__library_k486))
V_CALL_FUNC(_V0expand__library_k484, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k486, env)})
    );
 }
}
static void _V0expand__library_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k480, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library_k481) (close _V0expand__library_k483))
V_CALL_FUNC(_V0expand__library_k481, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k483, env)})
    );
 }
}
static void _V0expand__library_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k479, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 25 20) (close _V0expand__library_k480) (bruijn imports 20 3))
V_CALL(VGetArg(upenv, 25-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k480, env)}),
      VGetArg(upenv, 20-1, 3)
    );
 }
}
static void _V0expand__library_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k477, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library_k478) (close _V0expand__library_k479))
V_CALL_FUNC(_V0expand__library_k478, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k479, env)})
    );
 }
}
static void _V0expand__library_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 23 12) (close _V0expand__library_k477) (bruijn ##x.1270 0 0))
V_CALL(VGetArg(upenv, 23-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k477, env)}),
      _var0
    );
 }
}
static void _V0expand__library_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__library_lambda145, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_lambda145, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn a 0 1) ((bruijn ##k.1271 0 0) (bruijn b 0 2)) ((bruijn ##k.1271 0 0) #f))
if(VDecodeBool(
_var1)) {
V_CALL(_var0, runtime,
      _var2
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k475, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn fold 22 24) (close _V0expand__library_k476) (close _V0expand__library_lambda145) #t (bruijn ##x.1272 0 0))
V_CALL(VGetArg(upenv, 22-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k476, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_lambda145, env)}),
      VEncodeBool(true),
      _var0
    );
 }
}
static void _V0expand__library_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k474, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 21 14) (close _V0expand__library_k475) (bruijn string? 21 18) (bruijn imports 16 3))
V_CALL(VGetArg(upenv, 21-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k475, env)}),
      VGetArg(upenv, 21-1, 18),
      VGetArg(upenv, 16-1, 3)
    );
 }
}
static void _V0expand__library_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn mangle-library 20 17) (close _V0expand__library_k474) (bruijn ##x.1273 0 0))
V_CALL(VGetArg(upenv, 20-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k474, env)}),
      _var0
    );
 }
}
static void _V0expand__library_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k472, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 19 26) (close _V0expand__library_k473) (bruijn lib 15 1))
V_CALL(VGetArg(upenv, 19-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k473, env)}),
      VGetArg(upenv, 15-1, 1)
    );
 }
}
static void _V0expand__library_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k471, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k472) (bruijn free-vars 13 6) (bruijn ##x.1274 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k472, env)}),
      VEncodeInt(13l), VEncodeInt(6l),
      _var0
    );
 }
}
static void _V0expand__library_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k470, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn free-variables 17 23) (close _V0expand__library_k471) (bruijn basic-library 12 5))
V_CALL(VGetArg(upenv, 17-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k471, env)}),
      VGetArg(upenv, 12-1, 5)
    );
 }
}
static void _V0expand__library_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k470) (bruijn basic-library 11 5) (bruijn ##x.1275 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k470, env)}),
      VEncodeInt(11l), VEncodeInt(5l),
      _var0
    );
 }
}
static void _V0expand__library_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 14 9) (close _V0expand__library_k469) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (bruijn ##x.1278 0 0))))
V_CALL(VGetArg(upenv, 14-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k469, env)}),
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
static void _V0expand__library_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k467, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append 14 3) (close _V0expand__library_k468) (bruijn ##x.1279 2 0) (bruijn ##x.1280 0 0))
V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k468, env)}),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__library_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k466, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 13 19) (close _V0expand__library_k467) (bruijn ##x.1281 0 0))
V_CALL(VGetArg(upenv, 13-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k467, env)}),
      _var0
    );
 }
}
static void _V0expand__library_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-library-output 7 1) (close _V0expand__library_k466) (bruijn exports 7 2))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k466, env)}),
      VGetArg(upenv, 7-1, 2)
    );
 }
}
static void _V0expand__library_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k464, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn apply 11 16) (close _V0expand__library_k465) (bruijn append 11 3) (bruijn ##x.1282 0 0))
V_CALL(VGetArg(upenv, 11-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k465, env)}),
      VGetArg(upenv, 11-1, 3),
      _var0
    );
 }
}
static void _V0expand__library_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k463, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 10 14) (close _V0expand__library_k464) (bruijn expand-library-expr 5 4) (bruijn ##x.1283 0 0))
V_CALL(VGetArg(upenv, 10-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k464, env)}),
      VGetArg(upenv, 5-1, 4),
      _var0
    );
 }
}
static void _V0expand__library_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k462, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 9 25) (close _V0expand__library_k463) (bruijn lib 5 1))
V_CALL(VGetArg(upenv, 9-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k463, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0expand__library__expr_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k495, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 6 1) (bruijn ##k.1376 4 0) (bruijn ##x.1379 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__library__expr_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k494, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 15 19) (close _V0expand__library__expr_k495))
V_CALL(VGetArg(upenv, 15-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k495, env)})
    );
 }
}
static void _V0expand__library__expr_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0expand__library__expr_k494) (bruijn exports 9 2) (bruijn ##x.1381 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k494, env)}),
      VEncodeInt(9l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V0expand__library__expr_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1378 0 0) ((bruijn append 13 3) (close _V0expand__library__expr_k493) (##inline ##sys.cdr (bruijn ##expr.35 1 1)) (bruijn exports 8 2)) ((bruijn ##k.1376 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k493, env)}),
      VInlineCdr(
upenv->vars[1]
    )
,
      VGetArg(upenv, 8-1, 2)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda149, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.35 0 1)) ((bruijn equal? 12 7) (close _V0expand__library__expr_k492) (quote export) (##inline ##sys.car (bruijn ##expr.35 0 1))) ((bruijn ##k.1376 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k492, env)}),
      VEncodePointer(&_V0export.sym, VPOINTER_OTHER),
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
static void _V0expand__library__expr_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k501, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 8 1) (bruijn ##k.1368 5 0) (bruijn ##x.1371 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0expand__library__expr_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k500, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 17 19) (close _V0expand__library__expr_k501))
V_CALL(VGetArg(upenv, 17-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k501, env)})
    );
 }
}
static void _V0expand__library__expr_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k499, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0expand__library__expr_k500) (bruijn imports 11 3) (bruijn ##x.1373 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k500, env)}),
      VEncodeInt(11l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0expand__library__expr_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k498, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append 15 3) (close _V0expand__library__expr_k499) (bruijn ##x.1374 0 0) (bruijn imports 10 3))
V_CALL(VGetArg(upenv, 15-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k499, env)}),
      _var0,
      VGetArg(upenv, 10-1, 3)
    );
 }
}
static void _V0expand__library__expr_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k497, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1370 0 0) ((bruijn map 14 14) (close _V0expand__library__expr_k498) (bruijn mangle-library 14 17) (##inline ##sys.cdr (bruijn ##expr.36 1 1))) ((bruijn ##k.1368 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k498, env)}),
      VGetArg(upenv, 14-1, 17),
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
static void _V0expand__library__expr_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda150, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.36 0 1)) ((bruijn equal? 13 7) (close _V0expand__library__expr_k497) (quote import) (##inline ##sys.car (bruijn ##expr.36 0 1))) ((bruijn ##k.1368 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k497, env)}),
      VEncodePointer(&_V0import.sym, VPOINTER_OTHER),
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
static void _V0expand__library__expr_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k506, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 8 1) (bruijn ##k.1356 4 0) (bruijn ##x.1361 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__library__expr_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.39 0 0)) ((bruijn expand-toplevel 16 8) (close _V0expand__library__expr_k506) (##inline ##sys.cons (quote define) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.39 0 0)) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cdr (bruijn ##expr.39 0 0)) (##inline ##sys.cdr (bruijn ##expr.38 1 0)))) (quote ()))))) ((bruijn ##k.1356 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k506, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
_var0
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCdr(
_var0
    )
,
      VInlineCdr(
upenv->vars[0]
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
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k504, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.38 0 0)) ((close _V0expand__library__expr_k505) (##inline ##sys.car (bruijn ##expr.38 0 0))) ((bruijn ##k.1356 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__library__expr_k505, env, runtime,
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
static void _V0expand__library__expr_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k503, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1358 0 0) ((close _V0expand__library__expr_k504) (##inline ##sys.cdr (bruijn ##expr.37 1 1))) ((bruijn ##k.1356 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__library__expr_k504, env, runtime,
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
static void _V0expand__library__expr_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda151, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.37 0 1)) ((bruijn equal? 14 7) (close _V0expand__library__expr_k503) (quote define) (##inline ##sys.car (bruijn ##expr.37 0 1))) ((bruijn ##k.1356 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k503, env)}),
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
static void _V0expand__library__expr_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k516, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1350 1 0) ((bruijn error 24 15) (bruijn ##k.1351 0 0) (##string ##string.1614) (bruijn f 6 0)) ((bruijn ##k.1351 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 24-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1614.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k519, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 16 1) (bruijn ##k.1335 11 0) (bruijn ##x.1343 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0
    );
 }
}
static void _V0expand__library__expr_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k518, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 25 19) (close _V0expand__library__expr_k519) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 7 0) (##inline ##sys.cons (bruijn ##x.1348 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 25-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k519, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 7-1, 0),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__library__expr_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k517, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 23 9) (close _V0expand__library__expr_k518) (##inline ##sys.cons (quote lambda) (##inline ##sys.cdr (bruijn ##expr.43 4 0))))
V_CALL(VGetArg(upenv, 23-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k518, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->up->up->up->vars[0]
    )

    )

    );
 }
}
static void _V0expand__library__expr_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k515, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k516) (close _V0expand__library__expr_k517))
V_CALL_FUNC(_V0expand__library__expr_k516, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k517, env)})
    );
 }
}
static void _V0expand__library__expr_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k514, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 22 12) (close _V0expand__library__expr_k515) (bruijn ##x.1352 0 0))
V_CALL(VGetArg(upenv, 22-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k515, env)}),
      _var0
    );
 }
}
static void _V0expand__library__expr_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k513, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1341 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.42 2 0))) ((bruijn symbol? 21 13) (close _V0expand__library__expr_k514) (bruijn f 3 0)) ((bruijn ##k.1335 6 0) #f)) ((bruijn ##k.1335 6 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 21-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k514, env)}),
      upenv->up->up->vars[0]
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
 }
}
static void _V0expand__library__expr_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k512, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.43 0 0)) ((bruijn equal? 20 7) (close _V0expand__library__expr_k513) (quote lambda) (##inline ##sys.car (bruijn ##expr.43 0 0))) ((bruijn ##k.1335 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k513, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
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
static void _V0expand__library__expr_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k511, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.42 0 0)) ((close _V0expand__library__expr_k512) (##inline ##sys.car (bruijn ##expr.42 0 0))) ((bruijn ##k.1335 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__library__expr_k512, env, runtime,
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
static void _V0expand__library__expr_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k510, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k511) (##inline ##sys.cdr (bruijn ##expr.41 1 0)))
V_CALL_FUNC(_V0expand__library__expr_k511, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0expand__library__expr_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k509, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.41 0 0)) ((close _V0expand__library__expr_k510) (##inline ##sys.car (bruijn ##expr.41 0 0))) ((bruijn ##k.1335 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__library__expr_k510, env, runtime,
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
static void _V0expand__library__expr_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k508, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1337 0 0) ((close _V0expand__library__expr_k509) (##inline ##sys.cdr (bruijn ##expr.40 1 1))) ((bruijn ##k.1335 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__library__expr_k509, env, runtime,
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
static void _V0expand__library__expr_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda152, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.40 0 1)) ((bruijn equal? 15 7) (close _V0expand__library__expr_k508) (quote define) (##inline ##sys.car (bruijn ##expr.40 0 1))) ((bruijn ##k.1335 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 15-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k508, env)}),
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
static void _V0expand__library__expr_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k529, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1329 1 0) ((bruijn error 25 15) (bruijn ##k.1330 0 0) (##string ##string.1614) (bruijn f 6 0)) ((bruijn ##k.1330 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 25-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1614.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k532, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 17 1) (bruijn ##k.1314 11 0) (bruijn ##x.1322 0 0))
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0
    );
 }
}
static void _V0expand__library__expr_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k531, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 26 19) (close _V0expand__library__expr_k532) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn f 7 0) (##inline ##sys.cons (bruijn ##x.1327 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 26-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k532, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 7-1, 0),
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__library__expr_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k530, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 24 9) (close _V0expand__library__expr_k531) (##inline ##sys.cons (quote case-lambda) (##inline ##sys.cdr (bruijn ##expr.47 4 0))))
V_CALL(VGetArg(upenv, 24-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k531, env)}),
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->up->up->up->vars[0]
    )

    )

    );
 }
}
static void _V0expand__library__expr_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k528, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k529) (close _V0expand__library__expr_k530))
V_CALL_FUNC(_V0expand__library__expr_k529, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k530, env)})
    );
 }
}
static void _V0expand__library__expr_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k527, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 23 12) (close _V0expand__library__expr_k528) (bruijn ##x.1331 0 0))
V_CALL(VGetArg(upenv, 23-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k528, env)}),
      _var0
    );
 }
}
static void _V0expand__library__expr_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k526, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1320 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.46 2 0))) ((bruijn symbol? 22 13) (close _V0expand__library__expr_k527) (bruijn f 3 0)) ((bruijn ##k.1314 6 0) #f)) ((bruijn ##k.1314 6 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->up->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 22-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k527, env)}),
      upenv->up->up->vars[0]
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
 }
}
static void _V0expand__library__expr_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k525, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.47 0 0)) ((bruijn equal? 21 7) (close _V0expand__library__expr_k526) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.47 0 0))) ((bruijn ##k.1314 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k526, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
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
static void _V0expand__library__expr_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k524, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.46 0 0)) ((close _V0expand__library__expr_k525) (##inline ##sys.car (bruijn ##expr.46 0 0))) ((bruijn ##k.1314 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__library__expr_k525, env, runtime,
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
static void _V0expand__library__expr_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k523, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k524) (##inline ##sys.cdr (bruijn ##expr.45 1 0)))
V_CALL_FUNC(_V0expand__library__expr_k524, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0expand__library__expr_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k522, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.45 0 0)) ((close _V0expand__library__expr_k523) (##inline ##sys.car (bruijn ##expr.45 0 0))) ((bruijn ##k.1314 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__library__expr_k523, env, runtime,
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
static void _V0expand__library__expr_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k521, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1316 0 0) ((close _V0expand__library__expr_k522) (##inline ##sys.cdr (bruijn ##expr.44 1 1))) ((bruijn ##k.1314 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__library__expr_k522, env, runtime,
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
static void _V0expand__library__expr_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda153, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.44 0 1)) ((bruijn equal? 16 7) (close _V0expand__library__expr_k521) (quote define) (##inline ##sys.car (bruijn ##expr.44 0 1))) ((bruijn ##k.1314 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k521, env)}),
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
static void _V0expand__library__expr_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k538, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 12 1) (bruijn ##k.1301 5 0) (bruijn ##x.1307 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0expand__library__expr_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k537, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 21 19) (close _V0expand__library__expr_k538) (##inline ##sys.cons (quote define) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.49 2 0)) (##inline ##sys.cons (bruijn ##x.1311 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 21-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k538, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
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
static void _V0expand__library__expr_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k536, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.50 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.50 0 0))) ((bruijn expand-syntax 19 9) (close _V0expand__library__expr_k537) (##inline ##sys.car (bruijn ##expr.50 0 0))) ((bruijn ##k.1301 3 0) #f)) ((bruijn ##k.1301 3 0) #f))
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
V_CALL(VGetArg(upenv, 19-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k537, env)}),
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
static void _V0expand__library__expr_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k535, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.49 0 0)) ((close _V0expand__library__expr_k536) (##inline ##sys.cdr (bruijn ##expr.49 0 0))) ((bruijn ##k.1301 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__library__expr_k536, env, runtime,
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
static void _V0expand__library__expr_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k534, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1303 0 0) ((close _V0expand__library__expr_k535) (##inline ##sys.cdr (bruijn ##expr.48 1 1))) ((bruijn ##k.1301 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__library__expr_k535, env, runtime,
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
static void _V0expand__library__expr_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda154, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.48 0 1)) ((bruijn equal? 17 7) (close _V0expand__library__expr_k534) (quote define) (##inline ##sys.car (bruijn ##expr.48 0 1))) ((bruijn ##k.1301 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 17-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k534, env)}),
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
static void _V0expand__library__expr_k541(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k541, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 10 1) (bruijn ##k.1295 2 0) (bruijn ##x.1298 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0expand__library__expr_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k540, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1297 0 0) ((bruijn error 19 15) (close _V0expand__library__expr_k541) (##string ##string.1615) (##inline ##sys.cons (quote define) (##inline ##sys.cdr (bruijn ##expr.51 1 1)))) ((bruijn ##k.1295 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k541, env)}),
      VEncodePointer(&_V10string_D1615.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__library__expr_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda155, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.51 0 1)) ((bruijn equal? 18 7) (close _V0expand__library__expr_k540) (quote define) (##inline ##sys.car (bruijn ##expr.51 0 1))) ((bruijn ##k.1295 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k540, env)}),
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
static void _V0expand__library__expr_k543(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k543, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.33 9 1) (bruijn ##k.1286 8 0) (bruijn ##x.1294 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0expand__library__expr_k542(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k542, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn error 18 15) (close _V0expand__library__expr_k543) (##string ##string.1625) (bruijn expr 9 1))
V_CALL(VGetArg(upenv, 18-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k543, env)}),
      VEncodePointer(&_V10string_D1625.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0expand__library__expr_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k539, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda155) (close _V0expand__library__expr_k542) (bruijn ##input.34 6 1))
V_CALL_FUNC(_V0expand__library__expr_lambda155, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k542, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0expand__library__expr_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k533, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda154) (close _V0expand__library__expr_k539) (bruijn ##input.34 5 1))
V_CALL_FUNC(_V0expand__library__expr_lambda154, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k539, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0expand__library__expr_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k520, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda153) (close _V0expand__library__expr_k533) (bruijn ##input.34 4 1))
V_CALL_FUNC(_V0expand__library__expr_lambda153, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k533, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0expand__library__expr_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k507, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda152) (close _V0expand__library__expr_k520) (bruijn ##input.34 3 1))
V_CALL_FUNC(_V0expand__library__expr_lambda152, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k520, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__library__expr_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k502, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda151) (close _V0expand__library__expr_k507) (bruijn ##input.34 2 1))
V_CALL_FUNC(_V0expand__library__expr_lambda151, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k507, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0expand__library__expr_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda150) (close _V0expand__library__expr_k502) (bruijn ##input.34 1 1))
V_CALL_FUNC(_V0expand__library__expr_lambda150, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k502, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__library__expr_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda148, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__library__expr_lambda149) (close _V0expand__library__expr_k496) (bruijn ##input.34 0 1))
V_CALL_FUNC(_V0expand__library__expr_lambda149, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k496, env)}),
      _var1
    );
 }
}
static void _V0expand__library__expr_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library__expr_lambda147, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda147, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__library__expr_lambda148) (bruijn ##k.1285 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0expand__library__expr_lambda148, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0expand__library__expr_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library__expr_lambda146, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda146, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 9 9) (bruijn ##k.1284 0 0) (close _V0expand__library__expr_lambda147))
V_CALL(VGetArg(upenv, 9-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_lambda147, env)})
    );
 }
}
static void _V0expand__library_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k461, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k462) (bruijn expand-library-expr 3 4) (close _V0expand__library__expr_lambda146))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k462, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_lambda146, env)})
    );
 }
}
static void _V0expand__library_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k460, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k461) (bruijn imports 2 3) (quote ()))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k461, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VNULL
    );
 }
}
static void _V0expand__library_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k459, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k460) (bruijn exports 1 2) (quote ()))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k460, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VNULL
    );
 }
}
static void _V0make__library__output_k545(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__library__output_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__library__output_k545, runtime, upenv, 1, argc, _var0) {
  // ((bruijn expand-syntax 7 9) (bruijn ##k.1383 2 0) (bruijn ##x.1384 0 0))
V_CALL(VGetArg(upenv, 7-1, 9), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0make__library__output_k544(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__library__output_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__library__output_k544, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 7 19) (close _V0make__library__output_k545) (quote quasiquote) (bruijn ##x.1385 0 0))
V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__library__output_k545, env)}),
      VEncodePointer(&_V0quasiquote.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0make__library__output_k546(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__library__output_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__library__output_k546, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 8 1) (bruijn ##k.1386 1 0) (bruijn e 1 1) (bruijn ##x.1387 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0
    );
 }
}
static void _V0make__library__output_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0make__library__output_lambda157, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__library__output_lambda157, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn list 7 19) (close _V0make__library__output_k546) (quote unquote) (bruijn e 0 1))
V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__library__output_k546, env)}),
      VEncodePointer(&_V0unquote.sym, VPOINTER_OTHER),
      _var1
    );
 }
}
static void _V0make__library__output_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0make__library__output_lambda156, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__library__output_lambda156, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 6 14) (close _V0make__library__output_k544) (close _V0make__library__output_lambda157) (bruijn exports 0 1))
V_CALL(VGetArg(upenv, 6-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__library__output_k544, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__library__output_lambda157, env)}),
      _var1
    );
 }
}
static void _V0expand__library_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_lambda142, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
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
  // (set! (close _V0expand__library_k459) (bruijn make-library-output 0 1) (close _V0make__library__output_lambda156))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k459, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__library__output_lambda156, env)})
    );
 }
}
static void _V0expand__library_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda141, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_lambda141, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__library_lambda142) (bruijn ##k.1226 0 0) #f #f #f #f #f #f)
V_CALL_FUNC(_V0expand__library_lambda142, env, runtime,
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
 if(argc != 1) {
  VError("Not enough arguments to expand_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k37) (bruijn expand-library 2 3) (close _V0expand__library_lambda141))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k37, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_lambda141, env)})
    );
 }
}
static void _V0expand__quasiquote_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k550, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 6 1) (bruijn ##k.1456 4 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (##inline ##sys.cons (quote quasiquote) (##inline ##sys.cons (quote quasiquote) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn ##x.1467 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (quote ()) (quote ()))) (quote ())))) (quote ())))))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
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
static void _V0expand__quasiquote_k549(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k549, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 8 2) (close _V0expand__quasiquote_k550) (bruijn ##x.1471 0 0) (##inline ##sys.car (bruijn ##expr.26 1 0)))
V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k550, env)}),
      _var0,
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0expand__quasiquote_k548(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k548, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.26 0 0))) ((bruijn + 8 27) (close _V0expand__quasiquote_k549) (bruijn quotation 5 1) 1) ((bruijn ##k.1456 2 0) #f)) ((bruijn ##k.1456 2 0) #f))
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
V_CALL(VGetArg(upenv, 8-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k549, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l)
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
static void _V0expand__quasiquote_k547(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k547, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1458 0 0) ((close _V0expand__quasiquote_k548) (##inline ##sys.cdr (bruijn ##expr.25 1 1))) ((bruijn ##k.1456 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__quasiquote_k548, env, runtime,
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
static void _V0expand__quasiquote_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda161, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 1)) ((bruijn equal? 6 7) (close _V0expand__quasiquote_k547) (quote quasiquote) (##inline ##sys.car (bruijn ##expr.25 0 1))) ((bruijn ##k.1456 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 6-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k547, env)}),
      VEncodePointer(&_V0quasiquote.sym, VPOINTER_OTHER),
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
static void _V0expand__quasiquote_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k558, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1442 2 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (##inline ##sys.cons (quote quasiquote) (##inline ##sys.cons (quote unquote) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn ##x.1448 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (quote ()) (quote ()))) (quote ())))) (quote ())))))
V_CALL(upenv->up->vars[0], runtime,
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
static void _V0expand__quasiquote_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k557, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 12 2) (close _V0expand__quasiquote_k558) (bruijn ##x.1452 0 0) (bruijn x 3 0))
V_CALL(VGetArg(upenv, 12-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k558, env)}),
      _var0,
      upenv->up->up->vars[0]
    );
 }
}
static void _V0expand__quasiquote_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k556, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1441 1 0) ((bruijn ##k.1442 0 0) (bruijn x 2 0)) ((bruijn - 12 28) (close _V0expand__quasiquote_k557) (bruijn quotation 9 1) 1))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 12-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k557, env)}),
      VGetArg(upenv, 9-1, 1),
      VEncodeInt(1l)
    );
}
 }
}
static void _V0expand__quasiquote_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k559, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 8 1) (bruijn ##k.1435 5 0) (bruijn ##x.1440 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0expand__quasiquote_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k555, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_k556) (close _V0expand__quasiquote_k559))
V_CALL_FUNC(_V0expand__quasiquote_k556, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k559, env)})
    );
 }
}
static void _V0expand__quasiquote_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k554, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.28 1 0))) ((bruijn = 10 29) (close _V0expand__quasiquote_k555) (bruijn quotation 7 1) 1) ((bruijn ##k.1435 3 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 10-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k555, env)}),
      VGetArg(upenv, 7-1, 1),
      VEncodeInt(1l)
    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k553, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 0)) ((close _V0expand__quasiquote_k554) (##inline ##sys.car (bruijn ##expr.28 0 0))) ((bruijn ##k.1435 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__quasiquote_k554, env, runtime,
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
static void _V0expand__quasiquote_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k552, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1437 0 0) ((close _V0expand__quasiquote_k553) (##inline ##sys.cdr (bruijn ##expr.27 1 1))) ((bruijn ##k.1435 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__quasiquote_k553, env, runtime,
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
static void _V0expand__quasiquote_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda162, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 1)) ((bruijn equal? 7 7) (close _V0expand__quasiquote_k552) (quote unquote) (##inline ##sys.car (bruijn ##expr.27 0 1))) ((bruijn ##k.1435 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 7-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k552, env)}),
      VEncodePointer(&_V0unquote.sym, VPOINTER_OTHER),
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
static void _V0expand__quasiquote_k568(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k568, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1414 1 0) (##inline ##sys.cons (quote append) (##inline ##sys.cons (bruijn x 4 0) (##inline ##sys.cons (bruijn ##x.1417 0 0) (quote ())))))
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
VEncodePointer(&_V0append.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->up->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0expand__quasiquote_k571(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k571, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1414 3 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (##inline ##sys.cons (quote quasiquote) (##inline ##sys.cons (quote unquote-splicing) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn ##x.1427 1 0) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (quote ()) (quote ()))) (quote ())))) (##inline ##sys.cons (bruijn ##x.1425 0 0) (quote ()))))) (quote ()))))
V_CALL(upenv->up->up->vars[0], runtime,
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
static void _V0expand__quasiquote_k570(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k570, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 16 2) (close _V0expand__quasiquote_k571) (bruijn quotation 14 1) (bruijn y 4 0))
V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k571, env)}),
      VGetArg(upenv, 14-1, 1),
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0expand__quasiquote_k569(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k569, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 15 2) (close _V0expand__quasiquote_k570) (bruijn ##x.1431 0 0) (bruijn x 4 0))
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k570, env)}),
      _var0,
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0expand__quasiquote_k567(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k567, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1413 1 0) ((bruijn expand-quasiquote 14 2) (close _V0expand__quasiquote_k568) (bruijn quotation 12 1) (bruijn y 2 0)) ((bruijn - 15 28) (close _V0expand__quasiquote_k569) (bruijn quotation 12 1) 1))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k568, env)}),
      VGetArg(upenv, 12-1, 1),
      upenv->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k569, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodeInt(1l)
    );
}
 }
}
static void _V0expand__quasiquote_k572(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k572, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 11 1) (bruijn ##k.1406 7 0) (bruijn ##x.1412 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0expand__quasiquote_k566(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k566, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_k567) (close _V0expand__quasiquote_k572))
V_CALL_FUNC(_V0expand__quasiquote_k567, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k572, env)})
    );
 }
}
static void _V0expand__quasiquote_k565(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k565, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 13 29) (close _V0expand__quasiquote_k566) (bruijn quotation 10 1) 1)
V_CALL(VGetArg(upenv, 13-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k566, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodeInt(1l)
    );
 }
}
static void _V0expand__quasiquote_k564(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k564, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.31 1 0))) ((close _V0expand__quasiquote_k565) (##inline ##sys.cdr (bruijn ##expr.29 4 1))) ((bruijn ##k.1406 4 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL_FUNC(_V0expand__quasiquote_k565, env, runtime,
      VInlineCdr(
upenv->up->up->up->vars[1]
    )

    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0expand__quasiquote_k563(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k563, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 0)) ((close _V0expand__quasiquote_k564) (##inline ##sys.car (bruijn ##expr.31 0 0))) ((bruijn ##k.1406 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0expand__quasiquote_k564, env, runtime,
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
static void _V0expand__quasiquote_k562(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k562, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1409 0 0) ((close _V0expand__quasiquote_k563) (##inline ##sys.cdr (bruijn ##expr.30 1 0))) ((bruijn ##k.1406 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__quasiquote_k563, env, runtime,
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
static void _V0expand__quasiquote_k561(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k561, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 0)) ((bruijn equal? 9 7) (close _V0expand__quasiquote_k562) (quote unquote-splicing) (##inline ##sys.car (bruijn ##expr.30 0 0))) ((bruijn ##k.1406 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k562, env)}),
      VEncodePointer(&_V0unquote__splicing.sym, VPOINTER_OTHER),
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
static void _V0expand__quasiquote_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda163, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.29 0 1)) ((close _V0expand__quasiquote_k561) (##inline ##sys.car (bruijn ##expr.29 0 1))) ((bruijn ##k.1406 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0expand__quasiquote_k561, env, runtime,
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
static void _V0expand__quasiquote_k575(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k575, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 7 1) (bruijn ##k.1399 2 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn ##x.1403 1 0) (##inline ##sys.cons (bruijn ##x.1405 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
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
static void _V0expand__quasiquote_k574(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k574, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 9 2) (close _V0expand__quasiquote_k575) (bruijn quotation 7 1) (##inline ##sys.cdr (bruijn ##expr.32 1 1)))
V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k575, env)}),
      VGetArg(upenv, 7-1, 1),
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0expand__quasiquote_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda164, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 1)) ((bruijn expand-quasiquote 8 2) (close _V0expand__quasiquote_k574) (bruijn quotation 6 1) (##inline ##sys.car (bruijn ##expr.32 0 1))) ((bruijn ##k.1399 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k574, env)}),
      VGetArg(upenv, 6-1, 1),
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
static void _V0expand__quasiquote_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda165, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.23 6 1) (bruijn ##k.1396 0 0) (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn x 0 1) (quote ()))))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
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
static void _V0expand__quasiquote_k577(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k577, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 10 15) (bruijn ##k.1390 5 0) (##string ##string.1618))
V_CALL(VGetArg(upenv, 10-1, 15), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D1618.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0expand__quasiquote_k576(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k576, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_lambda165) (close _V0expand__quasiquote_k577) (bruijn ##input.24 4 1))
V_CALL_FUNC(_V0expand__quasiquote_lambda165, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k577, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0expand__quasiquote_k573(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k573, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_lambda164) (close _V0expand__quasiquote_k576) (bruijn ##input.24 3 1))
V_CALL_FUNC(_V0expand__quasiquote_lambda164, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k576, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0expand__quasiquote_k560(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k560, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_lambda163) (close _V0expand__quasiquote_k573) (bruijn ##input.24 2 1))
V_CALL_FUNC(_V0expand__quasiquote_lambda163, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k573, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0expand__quasiquote_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k551, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_lambda162) (close _V0expand__quasiquote_k560) (bruijn ##input.24 1 1))
V_CALL_FUNC(_V0expand__quasiquote_lambda162, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k560, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0expand__quasiquote_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda160, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__quasiquote_lambda161) (close _V0expand__quasiquote_k551) (bruijn ##input.24 0 1))
V_CALL_FUNC(_V0expand__quasiquote_lambda161, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k551, env)}),
      _var1
    );
 }
}
static void _V0expand__quasiquote_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__quasiquote_lambda159, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda159, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__quasiquote_lambda160) (bruijn ##k.1389 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0expand__quasiquote_lambda160, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0expand__quasiquote_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__quasiquote_lambda158, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda158, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 3 9) (bruijn ##k.1388 0 0) (close _V0expand__quasiquote_lambda159))
V_CALL(upenv->up->up->vars[9], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_lambda159, env)})
    );
 }
}
static void expand_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close expand_k36) (bruijn expand-quasiquote 1 2) (close _V0expand__quasiquote_lambda158))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k36, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_lambda158, env)})
    );
 }
}
static void _V0collect__defines_k578(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0collect__defines_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0collect__defines_k578, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1476 1 0) (quote ()) (bruijn body 2 1))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VNULL,
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k584(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k584, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 8 1) (bruijn ##k.1548 6 0) (bruijn ##x.1554 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0loop_k583(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k583, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 9 1) (close _V0loop_k584) (bruijn ##x.1555 0 0) (##inline ##sys.cdr (bruijn ##expr.3 5 1)))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k584, env)}),
      _var0,
      VInlineCdr(
VGetArg(upenv, 5-1, 1)
    )

    );
 }
}
static void _V0loop_k582(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (##inline ##sys.pair? (bruijn ##expr.6 0 0)) ((bruijn cons 11 1) (close _V0loop_k583) (##inline ##sys.cons (quote define) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.6 0 0)) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cdr (bruijn ##expr.6 0 0)) (##inline ##sys.cdr (bruijn ##expr.5 1 0)))) (quote ())))) (bruijn defines 7 1)) ((bruijn ##k.1548 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k583, env)}),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
_var0
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCdr(
_var0
    )
,
      VInlineCdr(
upenv->vars[0]
    )

    )

    )
,
      VNULL
    )

    )

    )
,
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k581(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (##inline ##sys.pair? (bruijn ##expr.5 0 0)) ((close _V0loop_k582) (##inline ##sys.car (bruijn ##expr.5 0 0))) ((bruijn ##k.1548 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0loop_k582, env, runtime,
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
static void _V0loop_k580(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (bruijn ##p.1551 0 0) ((close _V0loop_k581) (##inline ##sys.cdr (bruijn ##expr.4 1 0))) ((bruijn ##k.1548 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0loop_k581, env, runtime,
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
static void _V0loop_k579(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 0)) ((bruijn equal? 8 7) (close _V0loop_k580) (quote define) (##inline ##sys.car (bruijn ##expr.4 0 0))) ((bruijn ##k.1548 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 8-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k580, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
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
static void _V0loop_lambda171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda171, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.3 0 1)) ((close _V0loop_k579) (##inline ##sys.car (bruijn ##expr.3 0 1))) ((bruijn ##k.1548 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0loop_k579, env, runtime,
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
static void _V0loop_k593(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k593, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1543 1 0) ((bruijn error 16 15) (bruijn ##k.1544 0 0) (##string ##string.1614) (bruijn x 4 0)) ((bruijn ##k.1544 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 16-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1614.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k596(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k596, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 13 1) (bruijn ##k.1530 10 0) (bruijn ##x.1537 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      _var0
    );
 }
}
static void _V0loop_k595(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k595, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 14 1) (close _V0loop_k596) (bruijn ##x.1539 0 0) (##inline ##sys.cdr (bruijn ##expr.7 9 1)))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k596, env)}),
      _var0,
      VInlineCdr(
VGetArg(upenv, 9-1, 1)
    )

    );
 }
}
static void _V0loop_k594(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k594, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 16 1) (close _V0loop_k595) (##inline ##sys.cons (quote define) (##inline ##sys.cons (bruijn x 4 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.10 3 0)) (quote ())))) (bruijn defines 12 1))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k595, env)}),
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
      VGetArg(upenv, 12-1, 1)
    );
 }
}
static void _V0loop_k592(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k592, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k593) (close _V0loop_k594))
V_CALL_FUNC(_V0loop_k593, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k594, env)})
    );
 }
}
static void _V0loop_k591(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k591, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 14 12) (close _V0loop_k592) (bruijn ##x.1545 0 0))
V_CALL(VGetArg(upenv, 14-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k592, env)}),
      _var0
    );
 }
}
static void _V0loop_k590(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k590, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.10 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.10 0 0))) ((bruijn symbol? 13 13) (close _V0loop_k591) (bruijn x 1 0)) ((bruijn ##k.1530 5 0) #f)) ((bruijn ##k.1530 5 0) #f))
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
V_CALL(VGetArg(upenv, 13-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k591, env)}),
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
static void _V0loop_k589(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k589, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k590) (##inline ##sys.cdr (bruijn ##expr.9 1 0)))
V_CALL_FUNC(_V0loop_k590, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0loop_k588(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k588, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.9 0 0)) ((close _V0loop_k589) (##inline ##sys.car (bruijn ##expr.9 0 0))) ((bruijn ##k.1530 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0loop_k589, env, runtime,
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
static void _V0loop_k587(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k587, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1533 0 0) ((close _V0loop_k588) (##inline ##sys.cdr (bruijn ##expr.8 1 0))) ((bruijn ##k.1530 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0loop_k588, env, runtime,
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
static void _V0loop_k586(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k586, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.8 0 0)) ((bruijn equal? 9 7) (close _V0loop_k587) (quote define) (##inline ##sys.car (bruijn ##expr.8 0 0))) ((bruijn ##k.1530 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k587, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
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
static void _V0loop_lambda172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda172, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.7 0 1)) ((close _V0loop_k586) (##inline ##sys.car (bruijn ##expr.7 0 1))) ((bruijn ##k.1530 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0loop_k586, env, runtime,
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
static void _V0loop_k599(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k599, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 6 1) (bruijn ##k.1524 2 0) (bruijn ##x.1527 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
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
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1526 0 0) ((bruijn error 10 15) (close _V0loop_k599) (##string ##string.1615) (##inline ##sys.cons (quote define) (##inline ##sys.cdr (bruijn ##expr.11 1 1)))) ((bruijn ##k.1524 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k599, env)}),
      VEncodePointer(&_V10string_D1615.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCdr(
upenv->vars[1]
    )

    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda173, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.11 0 1)) ((bruijn equal? 9 7) (close _V0loop_k598) (quote define) (##inline ##sys.car (bruijn ##expr.11 0 1))) ((bruijn ##k.1524 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k598, env)}),
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
static void _V0loop_k601(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k601, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 5 1) (bruijn ##k.1480 4 0) (bruijn ##x.1484 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k603(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k603, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.null? (bruijn ##input.13 1 0)) ((bruijn ##kk.12 2 1) (bruijn ##k.1522 0 0) (##inline ##sys.cons (quote begin) (bruijn body 8 2))) ((bruijn ##k.1522 0 0) #f))
if(VDecodeBool(
VInlineNullP(
upenv->vars[0]
    )
)) {
V_CALL(upenv->up->vars[1], runtime,
      _var0,
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 2)
    )

    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k605(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k605, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1491 1 0) (bruijn ##expr.14 4 1) (quote ()) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_k608(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k608, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 5 1) (bruijn ##k.1512 2 0) (bruijn ##expr.19 3 1) (bruijn ##x.1513 1 0) (bruijn ##x.1514 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k607(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k607, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 19 8) (close _V0loop_k608) (bruijn ##vals.16 2 3))
V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k608, env)}),
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k606(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k606, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.19 1 1))) ((bruijn reverse 18 8) (close _V0loop_k607) (bruijn ##xs.15 1 2)) ((bruijn ##k.1512 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k607, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k614(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k614, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 0 0))) ((bruijn ##kk.18 5 1) (bruijn ##k.1501 3 0) (##inline ##sys.cdr (bruijn ##expr.19 8 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.21 1 0)) (bruijn ##xs.15 8 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.22 0 0)) (bruijn ##vals.16 8 3))) ((bruijn ##k.1501 3 0) #f)) ((bruijn ##k.1501 3 0) #f))
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
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCdr(
VGetArg(upenv, 8-1, 1)
    )
,
      VInlineCons(
VInlineCar(
upenv->vars[0]
    )
,
      VGetArg(upenv, 8-1, 2)
    )
,
      VInlineCons(
VInlineCar(
_var0
    )
,
      VGetArg(upenv, 8-1, 3)
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
static void _V0loop_k613(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k613, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 0)) ((close _V0loop_k614) (##inline ##sys.cdr (bruijn ##expr.21 0 0))) ((bruijn ##k.1501 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0loop_k614, env, runtime,
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
static void _V0loop_k612(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k612, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1502 0 0) ((close _V0loop_k613) (##inline ##sys.cdr (bruijn ##expr.20 2 0))) ((bruijn ##k.1501 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0loop_k613, env, runtime,
      VInlineCdr(
upenv->up->vars[0]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k611(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k611, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.20 1 0)) ((bruijn equal? 22 7) (close _V0loop_k612) (quote define) (##inline ##sys.car (bruijn ##expr.20 1 0))) ((bruijn ##k.1501 0 0) #f))
if(VDecodeBool(
VInlinePairP(
upenv->vars[0]
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k612, env)}),
      VEncodePointer(&_V0define.sym, VPOINTER_OTHER),
      VInlineCar(
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
static void _V0loop_k617(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k617, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 9 1) (bruijn ##k.1496 4 0) (bruijn ##expr.19 7 1) (bruijn ##x.1498 1 0) (bruijn ##x.1499 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 23 8) (close _V0loop_k617) (bruijn ##vals.16 6 3))
V_CALL(VGetArg(upenv, 23-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k617, env)}),
      VGetArg(upenv, 6-1, 3)
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
  // ((bruijn reverse 22 8) (close _V0loop_k616) (bruijn ##xs.15 5 2))
V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k616, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_k610(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k610, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k611) (close _V0loop_k615))
V_CALL_FUNC(_V0loop_k611, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k615, env)})
    );
 }
}
static void _V0loop_lambda181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda181, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda181, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k610) (##inline ##sys.car (bruijn ##expr.19 3 1)))
V_CALL_FUNC(_V0loop_k610, env, runtime,
      VInlineCar(
upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 9) (bruijn ##k.1495 0 0) (close _V0loop_lambda181))
V_CALL(VGetArg(upenv, 19-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda181, env)})
    );
 }
}
static void _V0loop_k609(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k609, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 18 10) (bruijn ##k.1493 1 0) (close _V0loop_lambda180) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 18-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda180, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda179, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda179, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k606) (close _V0loop_k609))
V_CALL_FUNC(_V0loop_k606, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k609, env)})
    );
 }
}
static void _V0loop_lambda178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda178, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0loop_k605) (bruijn loop 0 1) (close _V0loop_lambda179))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k605, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda179, env)})
    );
 }
}
static void _V0loop_lambda177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda177, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda177, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda178) (bruijn ##k.1490 0 0) #f)
V_CALL_FUNC(_V0loop_lambda178, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0loop_lambda176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 14 9) (bruijn ##k.1489 0 0) (close _V0loop_lambda177))
V_CALL(VGetArg(upenv, 14-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda177, env)})
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
  // ((bruijn ##kk.12 5 1) (bruijn ##k.1516 1 0) (##inline ##sys.cons (quote letrec*) (##inline ##sys.cons (bruijn ##x.1520 0 0) (bruijn body 11 2))))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
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
static void _V0loop_lambda182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda182, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda182, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 14 14) (close _V0loop_k618) (bruijn list 14 19) (bruijn xs 0 2) (bruijn vals 0 3)) ((bruijn ##k.1516 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k618, env)}),
      VGetArg(upenv, 14-1, 19),
      _var2,
      _var3
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_lambda175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda175, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 13 10) (bruijn ##k.1488 0 0) (close _V0loop_lambda176) (close _V0loop_lambda182))
V_CALL(VGetArg(upenv, 13-1, 10), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda176, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda182, env)})
    );
 }
}
static void _V0loop_k619(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k619, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 13 15) (bruijn ##k.1485 3 0) (##string ##string.1618))
V_CALL(VGetArg(upenv, 13-1, 15), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1618.sym, VPOINTER_OTHER)
    );
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
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda175) (close _V0loop_k619) (bruijn ##input.13 1 0))
V_CALL_FUNC(_V0loop_lambda175, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k619, env)}),
      upenv->vars[0]
    );
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
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k603) (close _V0loop_k604))
V_CALL_FUNC(_V0loop_k603, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k604, env)})
    );
 }
}
static void _V0loop_lambda174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda174, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda174, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn reverse 10 8) (close _V0loop_k602) (bruijn defines 6 1))
V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k602, env)}),
      VGetArg(upenv, 6-1, 1)
    );
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
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 9 9) (close _V0loop_k601) (close _V0loop_lambda174))
V_CALL(VGetArg(upenv, 9-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k601, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda174, env)})
    );
 }
}
static void _V0loop_k597(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k597, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda173) (close _V0loop_k600) (bruijn ##input.2 2 1))
V_CALL_FUNC(_V0loop_lambda173, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k600, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k585(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k585, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda172) (close _V0loop_k597) (bruijn ##input.2 1 1))
V_CALL_FUNC(_V0loop_lambda172, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k597, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0loop_lambda170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda170, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda171) (close _V0loop_k585) (bruijn ##input.2 0 1))
V_CALL_FUNC(_V0loop_lambda171, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k585, env)}),
      _var1
    );
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
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda170) (bruijn ##k.1479 0 0) (bruijn body 1 2))
V_CALL_FUNC(_V0loop_lambda170, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0loop_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda168, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda168, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 4 9) (bruijn ##k.1478 0 0) (close _V0loop_lambda169))
V_CALL(upenv->up->up->up->vars[9], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda169, env)})
    );
 }
}
static void _V0collect__defines_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0collect__defines_lambda167, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0collect__defines_k578) (bruijn loop 0 1) (close _V0loop_lambda168))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0collect__defines_k578, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda168, env)})
    );
 }
}
static void _V0collect__defines_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0collect__defines_lambda166, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0collect__defines_lambda166, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0collect__defines_lambda167) (bruijn ##k.1475 0 0) #f)
V_CALL_FUNC(_V0collect__defines_lambda167, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void expand_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9) {
 V_GC_CHECK2_VARARGS((VFunc)expand_lambda3, runtime, upenv, 10, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9) {
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
  // (set! (close expand_k35) (bruijn collect-defines 0 1) (close _V0collect__defines_lambda166))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k35, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0collect__defines_lambda166, env)})
    );
 }
}
static void expand_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29) {
 V_GC_CHECK2_VARARGS((VFunc)expand_lambda2, runtime, upenv, 30, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29) {
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
  // ((close expand_lambda3) (bruijn ##k.251 0 0) #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(expand_lambda3, env, runtime,
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
 if(argc != 1) {
  VError("Not enough arguments to expand_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close expand_lambda2) (bruijn ##k.250 34 0) (bruijn ##x.1562 28 0) (bruijn ##x.1563 27 0) (bruijn ##x.1564 26 0) (bruijn ##x.1565 25 0) (bruijn ##x.1566 24 0) (bruijn ##x.1567 23 0) (bruijn ##x.1568 22 0) (bruijn ##x.1569 21 0) (bruijn ##x.1570 20 0) (bruijn ##x.1571 19 0) (bruijn ##x.1572 18 0) (bruijn ##x.1573 17 0) (bruijn ##x.1574 16 0) (bruijn ##x.1575 15 0) (bruijn ##x.1576 14 0) (bruijn ##x.1577 13 0) (bruijn ##x.1578 12 0) (bruijn ##x.1579 11 0) (bruijn ##x.1580 10 0) (bruijn ##x.1581 9 0) (bruijn ##x.1582 8 0) (bruijn ##x.1583 7 0) (bruijn ##x.1584 6 0) (bruijn ##x.1585 5 0) (bruijn ##x.1586 4 0) (bruijn ##x.1587 3 0) (bruijn ##x.1588 2 0) (bruijn ##x.1589 1 0) (bruijn ##x.1590 0 0))
V_CALL_FUNC(expand_lambda2, env, runtime,
      VGetArg(upenv, 34-1, 0),
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
 if(argc != 1) {
  VError("Not enough arguments to expand_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 0) (close expand_k34) (quote =))
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k34, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close expand_k33) (quote -))
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k33, env)}),
      VEncodePointer(&_V0__.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close expand_k32) (quote +))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k32, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close expand_k31) (quote cadr))
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k31, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close expand_k30) (quote cddr))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k30, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close expand_k29) (quote fold))
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k29, env)}),
      VEncodePointer(&_V0fold.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close expand_k28) (quote free-variables))
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k28, env)}),
      VEncodePointer(&_V0free__variables.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close expand_k27) (quote pair?))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k27, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close expand_k26) (quote car))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k26, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close expand_k25) (quote null?))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k25, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close expand_k24) (quote list))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k24, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close expand_k23) (quote string?))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k23, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close expand_k22) (quote mangle-library))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k22, env)}),
      VEncodePointer(&_V0mangle__library.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close expand_k21) (quote apply))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k21, env)}),
      VEncodePointer(&_V0apply.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close expand_k20) (quote error))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k20, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close expand_k19) (quote map))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k19, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close expand_k18) (quote symbol?))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k18, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close expand_k17) (quote not))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k17, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close expand_k16) (quote atom?))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k16, env)}),
      VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close expand_k15) (quote call-with-values))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k15, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close expand_k14) (quote call/cc))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k14, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close expand_k13) (quote reverse))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k13, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close expand_k12) (quote equal?))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k12, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close expand_k11) (quote transform-match))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k11, env)}),
      VEncodePointer(&_V0transform__match.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close expand_k10) (quote eqv?))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k10, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close expand_k9) (quote gensym))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k9, env)}),
      VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close expand_k8) (quote append))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k8, env)}),
      VEncodePointer(&_V0append.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close expand_k7) (quote cdr))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k7, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close expand_k6) (quote cons))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k6, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close expand_k5) (##string ##string.1626) (bruijn ##x.1591 3 0) (bruijn ##x.1592 2 0) (bruijn ##x.1593 1 0) (bruijn ##x.1594 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k5, env)}),
      VEncodePointer(&_V10string_D1626.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void expand_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close expand_k4) (##string ##string.1627))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k4, env)}),
      VEncodePointer(&_V10string_D1627.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close expand_k3) (##string ##string.1628))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k3, env)}),
      VEncodePointer(&_V10string_D1628.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close expand_k2) (##string ##string.1629))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k2, env)}),
      VEncodePointer(&_V10string_D1629.sym, VPOINTER_OTHER)
    );
 }
}
static void expand_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to expand_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)expand_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close expand_k1) (##string ##string.1630))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)expand_k1, env)}),
      VEncodePointer(&_V10string_D1630.sym, VPOINTER_OTHER)
    );
 }
}
VFunc expand = (VFunc)expand_lambda1;
