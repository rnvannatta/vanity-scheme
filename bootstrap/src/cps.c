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
static struct { VBlob sym; char bytes[21]; } _V10string_D1123 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1122 = { { VSTRING, 6 }, "utils" };
static struct { VBlob sym; char bytes[6]; } _V10string_D1121 = { { VSTRING, 6 }, "match" };
static struct { VBlob sym; char bytes[10]; } _V10string_D1120 = { { VSTRING, 10 }, "variables" };
static struct { VBlob sym; char bytes[4]; } _V10string_D1119 = { { VSTRING, 4 }, "cps" };
static struct { VBlob sym; char bytes[8]; } _V0call_Wcc = { { VSYMBOL, 8 }, "call/cc" };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[17]; } _V0call__with__values = { { VSYMBOL, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[8]; } _V0reverse = { { VSYMBOL, 8 }, "reverse" };
static struct { VBlob sym; char bytes[14]; } _V0lookup__inline = { { VSYMBOL, 14 }, "lookup-inline" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[6]; } _V0atom_Q = { { VSYMBOL, 6 }, "atom\?" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[5]; } _V0eqv_Q = { { VSYMBOL, 5 }, "eqv\?" };
static struct { VBlob sym; char bytes[2]; } _V0_E = { { VSYMBOL, 2 }, "=" };
static struct { VBlob sym; char bytes[3]; } _V0_L_E = { { VSYMBOL, 3 }, "<=" };
static struct { VBlob sym; char bytes[7]; } _V0length = { { VSYMBOL, 7 }, "length" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[5]; } _V0fold = { { VSYMBOL, 5 }, "fold" };
static struct { VBlob sym; char bytes[15]; } _V0symbol___Gstring = { { VSYMBOL, 15 }, "symbol->string" };
static struct { VBlob sym; char bytes[10]; } _V0substring = { { VSYMBOL, 10 }, "substring" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[4]; } _V0eq_Q = { { VSYMBOL, 4 }, "eq\?" };
static struct { VBlob sym; char bytes[11]; } _V0string__ref = { { VSYMBOL, 11 }, "string-ref" };
static struct { VBlob sym; char bytes[7]; } _V0gensym = { { VSYMBOL, 7 }, "gensym" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[6]; } _V0apply = { { VSYMBOL, 6 }, "apply" };
static struct { VBlob sym; char bytes[5]; } _V0memv = { { VSYMBOL, 5 }, "memv" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1118 = { { VSTRING, 20 }, "stray () in program" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1117 = { { VSTRING, 2 }, "x" };
static struct { VBlob sym; char bytes[3]; } _V0or = { { VSYMBOL, 3 }, "or" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1116 = { { VSTRING, 2 }, "k" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1115 = { { VSTRING, 2 }, "p" };
static struct { VBlob sym; char bytes[6]; } _V0begin = { { VSYMBOL, 6 }, "begin" };
static struct { VBlob sym; char bytes[8]; } _V10string_D1114 = { { VSTRING, 8 }, "ignored" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dnext = { { VSYMBOL, 11 }, "##sys.next" };
static struct { VBlob sym; char bytes[5]; } _V0set_B = { { VSYMBOL, 5 }, "set!" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1113 = { { VSTRING, 51 }, "Not enough arguments to continuation. Codegen bug." };
static struct { VBlob sym; char bytes[31]; } _V10string_D1112 = { { VSTRING, 31 }, "Not enough arguments to lambda" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1111 = { { VSTRING, 17 }, "no matching case" };
static struct { VBlob sym; char bytes[3]; } _V0if = { { VSYMBOL, 3 }, "if" };
static struct { VBlob sym; char bytes[12]; } _V0case__lambda = { { VSYMBOL, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[13]; } _V0continuation = { { VSYMBOL, 13 }, "continuation" };
static struct { VBlob sym; char bytes[7]; } _V0lambda = { { VSYMBOL, 7 }, "lambda" };
static struct { VBlob sym; char bytes[9]; } _V10inline = { { VSYMBOL, 9 }, "##inline" };
static struct { VBlob sym; char bytes[6]; } _V0quote = { { VSYMBOL, 6 }, "quote" };
static struct { VBlob sym; char bytes[16]; } _V10vcore_Ddeclare = { { VSYMBOL, 16 }, "##vcore.declare" };
static struct { VBlob sym; char bytes[19]; } _V0deannotate__lambdas = { { VSYMBOL, 19 }, "deannotate-lambdas" };
static struct { VBlob sym; char bytes[17]; } _V0annotate__lambdas = { { VSYMBOL, 17 }, "annotate-lambdas" };
static struct { VBlob sym; char bytes[14]; } _V0alpha__convert = { { VSYMBOL, 14 }, "alpha-convert" };
static struct { VBlob sym; char bytes[9]; } _V0optimize = { { VSYMBOL, 9 }, "optimize" };
static struct { VBlob sym; char bytes[7]; } _V0to__cps = { { VSYMBOL, 7 }, "to-cps" };
static void cps_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k54, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.188 19 0) (##inline ##sys.cons (##inline ##sys.cons (quote to-cps) (bruijn to-cps 19 1)) (##inline ##sys.cons (##inline ##sys.cons (quote optimize) (bruijn optimize 19 19)) (##inline ##sys.cons (##inline ##sys.cons (quote alpha-convert) (bruijn alpha-convert 19 11)) (##inline ##sys.cons (##inline ##sys.cons (quote annotate-lambdas) (bruijn annotate-lambdas 19 3)) (##inline ##sys.cons (##inline ##sys.cons (quote deannotate-lambdas) (bruijn deannotate-lambdas 19 4)) (quote ())))))))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0to__cps.sym, VPOINTER_OTHER),
      VGetArg(upenv, 19-1, 1)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0optimize.sym, VPOINTER_OTHER),
      VGetArg(upenv, 19-1, 19)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0alpha__convert.sym, VPOINTER_OTHER),
      VGetArg(upenv, 19-1, 11)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0annotate__lambdas.sym, VPOINTER_OTHER),
      VGetArg(upenv, 19-1, 3)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0deannotate__lambdas.sym, VPOINTER_OTHER),
      VGetArg(upenv, 19-1, 4)
    )
,
      VNULL
    )

    )

    )

    )

    )

    );
 }
}
static void _V0optimize_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k59, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.181 6 1) (bruijn ##k.222 4 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.184 2 0)) (##inline ##sys.cons (bruijn ##x.231 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
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
static void _V0optimize_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.185 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.185 0 0))) ((bruijn optimize-impl 26 18) (close _V0optimize_k59) (##inline ##sys.car (bruijn ##expr.185 0 0))) ((bruijn ##k.222 3 0) #f)) ((bruijn ##k.222 3 0) #f))
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
V_CALL(VGetArg(upenv, 26-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_k59, env)}),
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
static void _V0optimize_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 0)) ((close _V0optimize_k58) (##inline ##sys.cdr (bruijn ##expr.184 0 0))) ((bruijn ##k.222 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0optimize_k58, env, runtime,
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
static void _V0optimize_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.224 0 0) ((close _V0optimize_k57) (##inline ##sys.cdr (bruijn ##expr.183 1 1))) ((bruijn ##k.222 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0optimize_k57, env, runtime,
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
static void _V0optimize_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.183 0 1)) ((bruijn equal? 24 2) (close _V0optimize_k56) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.183 0 1))) ((bruijn ##k.222 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_k56, env)}),
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
static void _V0optimize_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k61, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.181 3 1) (bruijn ##k.219 2 0) (bruijn ##x.221 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-impl 23 18) (close _V0optimize_k61) (bruijn expr 3 0))
V_CALL(VGetArg(upenv, 23-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_k61, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0optimize_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize_lambda7) (close _V0optimize_k60) (bruijn ##input.182 0 1))
V_CALL_FUNC(_V0optimize_lambda7, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_k60, env)}),
      _var1
    );
 }
}
static void _V0optimize_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize_lambda6) (bruijn ##k.218 0 0) (bruijn expr 1 0))
V_CALL_FUNC(_V0optimize_lambda6, env, runtime,
      _var0,
      upenv->vars[0]
    );
 }
}
static void _V0optimize_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 21 1) (bruijn ##k.217 1 0) (close _V0optimize_lambda5))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_lambda5, env)})
    );
 }
}
static void _V0optimize_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn alpha-convert 19 11) (close _V0optimize_k55) (bruijn expr 0 1))
V_CALL(VGetArg(upenv, 19-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_k55, env)}),
      _var1
    );
 }
}
static void cps_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k54) (bruijn optimize 18 19) (close _V0optimize_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k54, env)}),
      VEncodeInt(18l), VEncodeInt(19l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize_lambda4, env)})
    );
 }
}
static void _V0optimize__impl_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k62, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.261 0 0) ((bruijn ##kk.174 3 1) (bruijn ##k.259 1 0) (bruijn expr 4 1)) ((bruijn ##k.259 1 0) #f))
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
static void _V0optimize__impl_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.176 0 1)) ((bruijn equal? 22 2) (close _V0optimize__impl_k62) (quote quote) (##inline ##sys.car (bruijn ##expr.176 0 1))) ((bruijn ##k.259 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k62, env)}),
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
static void _V0optimize__impl_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k64, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.257 0 0) ((bruijn ##kk.174 4 1) (bruijn ##k.255 1 0) (bruijn expr 5 1)) ((bruijn ##k.255 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.177 0 1)) ((bruijn equal? 23 2) (close _V0optimize__impl_k64) (quote ##inline) (##inline ##sys.car (bruijn ##expr.177 0 1))) ((bruijn ##k.255 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k64, env)}),
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
static void _V0optimize__impl_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k67, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.174 6 1) (bruijn ##k.250 2 0) (bruijn ##x.253 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__impl_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.252 0 0) ((bruijn optimize-lambda 24 13) (close _V0optimize__impl_k67) (bruijn expr 6 1)) ((bruijn ##k.250 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 24-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k67, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.178 0 1)) ((bruijn equal? 24 2) (close _V0optimize__impl_k66) (quote lambda) (##inline ##sys.car (bruijn ##expr.178 0 1))) ((bruijn ##k.250 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k66, env)}),
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
static void _V0optimize__impl_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k70, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.174 7 1) (bruijn ##k.245 2 0) (bruijn ##x.248 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__impl_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.247 0 0) ((bruijn optimize-lambda 25 13) (close _V0optimize__impl_k70) (bruijn expr 7 1)) ((bruijn ##k.245 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k70, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.179 0 1)) ((bruijn equal? 25 2) (close _V0optimize__impl_k69) (quote continuation) (##inline ##sys.car (bruijn ##expr.179 0 1))) ((bruijn ##k.245 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k69, env)}),
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
static void _V0optimize__impl_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k72, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.174 7 1) (bruijn ##k.242 1 0) (bruijn ##x.244 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0optimize__impl_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.180 0 1)) ((bruijn optimize-apply 25 16) (close _V0optimize__impl_k72) (bruijn expr 7 1)) ((bruijn ##k.242 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k72, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__impl_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k73, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.174 6 1) (bruijn ##k.236 5 0) (bruijn expr 7 1))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0optimize__impl_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_lambda15) (close _V0optimize__impl_k73) (bruijn ##input.175 4 1))
V_CALL_FUNC(_V0optimize__impl_lambda15, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k73, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0optimize__impl_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_lambda14) (close _V0optimize__impl_k71) (bruijn ##input.175 3 1))
V_CALL_FUNC(_V0optimize__impl_lambda14, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k71, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0optimize__impl_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_lambda13) (close _V0optimize__impl_k68) (bruijn ##input.175 2 1))
V_CALL_FUNC(_V0optimize__impl_lambda13, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k68, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0optimize__impl_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__impl_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__impl_lambda12) (close _V0optimize__impl_k65) (bruijn ##input.175 1 1))
V_CALL_FUNC(_V0optimize__impl_lambda12, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k65, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0optimize__impl_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__impl_lambda11) (close _V0optimize__impl_k63) (bruijn ##input.175 0 1))
V_CALL_FUNC(_V0optimize__impl_lambda11, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_k63, env)}),
      _var1
    );
 }
}
static void _V0optimize__impl_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__impl_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__impl_lambda10) (bruijn ##k.235 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0optimize__impl_lambda10, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0optimize__impl_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__impl_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__impl_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 19 1) (bruijn ##k.234 0 0) (close _V0optimize__impl_lambda9))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_lambda9, env)})
    );
 }
}
static void cps_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k53) (bruijn optimize-impl 17 18) (close _V0optimize__impl_lambda8))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k53, env)}),
      VEncodeInt(17l), VEncodeInt(18l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__impl_lambda8, env)})
    );
 }
}
static void _V0optimize__atom_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k74, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.322 0 0) ((bruijn ##kk.159 3 1) (bruijn ##k.320 1 0) (bruijn expr 4 1)) ((bruijn ##k.320 1 0) #f))
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
static void _V0optimize__atom_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.161 0 1)) ((bruijn equal? 21 2) (close _V0optimize__atom_k74) (quote quote) (##inline ##sys.car (bruijn ##expr.161 0 1))) ((bruijn ##k.320 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k74, env)}),
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
static void _V0optimize__atom_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k76, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.318 0 0) ((bruijn ##kk.159 4 1) (bruijn ##k.316 1 0) (bruijn expr 5 1)) ((bruijn ##k.316 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.162 0 1)) ((bruijn equal? 22 2) (close _V0optimize__atom_k76) (quote ##inline) (##inline ##sys.car (bruijn ##expr.162 0 1))) ((bruijn ##k.316 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k76, env)}),
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
static void _V0optimize__atom_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k79, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.159 6 1) (bruijn ##k.311 2 0) (bruijn ##x.314 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__atom_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.313 0 0) ((bruijn optimize-lambda 23 13) (close _V0optimize__atom_k79) (bruijn expr 6 1)) ((bruijn ##k.311 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k79, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.163 0 1)) ((bruijn equal? 23 2) (close _V0optimize__atom_k78) (quote lambda) (##inline ##sys.car (bruijn ##expr.163 0 1))) ((bruijn ##k.311 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k78, env)}),
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
static void _V0optimize__atom_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k82, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.159 7 1) (bruijn ##k.306 2 0) (bruijn ##x.309 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__atom_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.308 0 0) ((bruijn optimize-lambda 24 13) (close _V0optimize__atom_k82) (bruijn expr 7 1)) ((bruijn ##k.306 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 24-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k82, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.164 0 1)) ((bruijn equal? 24 2) (close _V0optimize__atom_k81) (quote continuation) (##inline ##sys.car (bruijn ##expr.164 0 1))) ((bruijn ##k.306 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k81, env)}),
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
static void _V0optimize__atom_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.276 1 0) (##inline ##sys.cdr (bruijn ##expr.165 5 1)) (quote ()) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
VGetArg(upenv, 5-1, 1)
    )
,
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k88, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.169 5 1) (bruijn ##k.294 2 0) (bruijn ##expr.171 3 1) (bruijn ##x.295 1 0) (bruijn ##x.296 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 32 5) (close _V0loop_k88) (bruijn ##body.168 2 3))
V_CALL(VGetArg(upenv, 32-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k88, env)}),
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.171 1 1))) ((bruijn reverse 31 5) (close _V0loop_k87) (bruijn ##args.167 1 2)) ((bruijn ##k.294 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 31-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k87, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k92, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.173 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.173 0 0))) ((bruijn ##kk.170 3 1) (bruijn ##k.286 1 0) (##inline ##sys.cdr (bruijn ##expr.171 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.172 2 0)) (bruijn ##args.167 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.173 0 0)) (bruijn ##body.168 6 3))) ((bruijn ##k.286 1 0) #f)) ((bruijn ##k.286 1 0) #f))
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
static void _V0loop_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.172 1 0)) ((close _V0loop_k92) (##inline ##sys.cdr (bruijn ##expr.172 1 0))) ((bruijn ##k.286 0 0) #f))
if(VDecodeBool(
VInlinePairP(
upenv->vars[0]
    )
)) {
V_CALL_FUNC(_V0loop_k92, env, runtime,
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
static void _V0loop_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k95, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.169 9 1) (bruijn ##k.281 4 0) (bruijn ##expr.171 7 1) (bruijn ##x.283 1 0) (bruijn ##x.284 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 36 5) (close _V0loop_k95) (bruijn ##body.168 6 3))
V_CALL(VGetArg(upenv, 36-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k95, env)}),
      VGetArg(upenv, 6-1, 3)
    );
 }
}
static void _V0loop_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 35 5) (close _V0loop_k94) (bruijn ##args.167 5 2))
V_CALL(VGetArg(upenv, 35-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k94, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k91) (close _V0loop_k93))
V_CALL_FUNC(_V0loop_k91, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k93, env)})
    );
 }
}
static void _V0loop_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k90) (##inline ##sys.car (bruijn ##expr.171 3 1)))
V_CALL_FUNC(_V0loop_k90, env, runtime,
      VInlineCar(
upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 32 1) (bruijn ##k.280 0 0) (close _V0loop_lambda29))
V_CALL(VGetArg(upenv, 32-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda29, env)})
    );
 }
}
static void _V0loop_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 31 4) (bruijn ##k.278 1 0) (close _V0loop_lambda28) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 31-1, 4), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda28, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda27, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda27, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k86) (close _V0loop_k89))
V_CALL_FUNC(_V0loop_k86, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k89, env)})
    );
 }
}
static void _V0optimize__atom_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0optimize__atom_k85) (bruijn loop 0 1) (close _V0loop_lambda27))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k85, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda27, env)})
    );
 }
}
static void _V0optimize__atom_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__atom_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__atom_lambda26) (bruijn ##k.275 0 0) #f)
V_CALL_FUNC(_V0optimize__atom_lambda26, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0optimize__atom_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 27 1) (bruijn ##k.274 0 0) (close _V0optimize__atom_lambda25))
V_CALL(VGetArg(upenv, 27-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_lambda25, env)})
    );
 }
}
static void _V0optimize__atom_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k96, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.159 9 1) (bruijn ##k.298 1 0) (##inline ##sys.cons (quote case-lambda) (bruijn ##x.301 0 0)))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->vars[0],
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      _var0
    )

    );
 }
}
static void _V0optimize__atom_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k97, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.302 1 0) (##inline ##sys.cons (bruijn args 1 1) (##inline ##sys.cons (bruijn ##x.304 0 0) (quote ()))))
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
upenv->vars[1],
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0optimize__atom_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0optimize__atom_lambda31, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda31, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn optimize-apply 27 16) (close _V0optimize__atom_k97) (bruijn body 0 2))
V_CALL(VGetArg(upenv, 27-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k97, env)}),
      _var2
    );
 }
}
static void _V0optimize__atom_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0optimize__atom_lambda30, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda30, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 27 3) (close _V0optimize__atom_k96) (close _V0optimize__atom_lambda31) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.298 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 27-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k96, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_lambda31, env)}),
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
static void _V0optimize__atom_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.273 0 0) ((bruijn call-with-values 26 4) (bruijn ##k.271 1 0) (close _V0optimize__atom_lambda24) (close _V0optimize__atom_lambda30)) ((bruijn ##k.271 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 26-1, 4), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_lambda24, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_lambda30, env)})
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__atom_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.165 0 1)) ((bruijn equal? 25 2) (close _V0optimize__atom_k84) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.165 0 1))) ((bruijn ##k.271 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 25-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k84, env)}),
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
static void _V0optimize__atom_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k98, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.159 6 1) (bruijn ##k.265 5 0) (bruijn expr 7 1))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0optimize__atom_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_lambda23) (close _V0optimize__atom_k98) (bruijn ##input.160 4 1))
V_CALL_FUNC(_V0optimize__atom_lambda23, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k98, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0optimize__atom_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_lambda22) (close _V0optimize__atom_k83) (bruijn ##input.160 3 1))
V_CALL_FUNC(_V0optimize__atom_lambda22, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k83, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0optimize__atom_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_lambda21) (close _V0optimize__atom_k80) (bruijn ##input.160 2 1))
V_CALL_FUNC(_V0optimize__atom_lambda21, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k80, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0optimize__atom_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__atom_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__atom_lambda20) (close _V0optimize__atom_k77) (bruijn ##input.160 1 1))
V_CALL_FUNC(_V0optimize__atom_lambda20, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k77, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0optimize__atom_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__atom_lambda19) (close _V0optimize__atom_k75) (bruijn ##input.160 0 1))
V_CALL_FUNC(_V0optimize__atom_lambda19, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_k75, env)}),
      _var1
    );
 }
}
static void _V0optimize__atom_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__atom_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__atom_lambda18) (bruijn ##k.264 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0optimize__atom_lambda18, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0optimize__atom_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__atom_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__atom_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 18 1) (bruijn ##k.263 0 0) (close _V0optimize__atom_lambda17))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_lambda17, env)})
    );
 }
}
static void cps_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k52) (bruijn optimize-atom 16 17) (close _V0optimize__atom_lambda16))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k52, env)}),
      VEncodeInt(16l), VEncodeInt(17l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__atom_lambda16, env)})
    );
 }
}
static void _V0optimize__apply_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k101, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.139 5 1) (bruijn ##k.396 3 0) (bruijn ##x.400 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.399 0 0) ((bruijn optimize-let 21 15) (close _V0optimize__apply_k101) (bruijn expr 5 1)) ((bruijn ##k.396 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k101, env)}),
      VGetArg(upenv, 5-1, 1)
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.142 0 0)) ((bruijn equal? 21 2) (close _V0optimize__apply_k100) (quote continuation) (##inline ##sys.car (bruijn ##expr.142 0 0))) ((bruijn ##k.396 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k100, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
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
static void _V0optimize__apply_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda35, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.141 0 1)) ((close _V0optimize__apply_k99) (##inline ##sys.car (bruijn ##expr.141 0 1))) ((bruijn ##k.396 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0optimize__apply_k99, env, runtime,
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
static void _V0optimize__apply_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k105, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.139 6 1) (bruijn ##k.390 3 0) (bruijn ##x.394 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.393 0 0) ((bruijn optimize-let 22 15) (close _V0optimize__apply_k105) (bruijn expr 6 1)) ((bruijn ##k.390 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k105, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.144 0 0)) ((bruijn equal? 22 2) (close _V0optimize__apply_k104) (quote lambda) (##inline ##sys.car (bruijn ##expr.144 0 0))) ((bruijn ##k.390 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k104, env)}),
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
static void _V0optimize__apply_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.143 0 1)) ((close _V0optimize__apply_k103) (##inline ##sys.car (bruijn ##expr.143 0 1))) ((bruijn ##k.390 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0optimize__apply_k103, env, runtime,
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
static void _V0optimize__apply_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k111, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.139 9 1) (bruijn ##k.378 5 0) (bruijn ##x.386 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.148 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.148 0 0))) ((bruijn optimize-apply 25 16) (close _V0optimize__apply_k111) (##inline ##sys.car (bruijn ##expr.147 1 0))) ((bruijn ##k.378 4 0) #f)) ((bruijn ##k.378 4 0) #f))
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
V_CALL(VGetArg(upenv, 25-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k111, env)}),
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
static void _V0optimize__apply_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.147 0 0)) ((close _V0optimize__apply_k110) (##inline ##sys.cdr (bruijn ##expr.147 0 0))) ((bruijn ##k.378 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0optimize__apply_k110, env, runtime,
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
static void _V0optimize__apply_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.146 0 0)) (if (##inline ##sys.eq? #t (##inline ##sys.car (bruijn ##expr.146 0 0))) ((close _V0optimize__apply_k109) (##inline ##sys.cdr (bruijn ##expr.146 0 0))) ((bruijn ##k.378 2 0) #f)) ((bruijn ##k.378 2 0) #f))
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
V_CALL_FUNC(_V0optimize__apply_k109, env, runtime,
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
static void _V0optimize__apply_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.380 0 0) ((close _V0optimize__apply_k108) (##inline ##sys.cdr (bruijn ##expr.145 1 1))) ((bruijn ##k.378 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0optimize__apply_k108, env, runtime,
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
static void _V0optimize__apply_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.145 0 1)) ((bruijn equal? 22 2) (close _V0optimize__apply_k107) (quote if) (##inline ##sys.car (bruijn ##expr.145 0 1))) ((bruijn ##k.378 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k107, env)}),
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
static void _V0optimize__apply_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k117, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.139 10 1) (bruijn ##k.366 5 0) (bruijn ##x.374 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.152 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.152 0 0))) ((bruijn optimize-apply 26 16) (close _V0optimize__apply_k117) (##inline ##sys.car (bruijn ##expr.152 0 0))) ((bruijn ##k.366 4 0) #f)) ((bruijn ##k.366 4 0) #f))
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
V_CALL(VGetArg(upenv, 26-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k117, env)}),
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
static void _V0optimize__apply_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.151 0 0)) ((close _V0optimize__apply_k116) (##inline ##sys.cdr (bruijn ##expr.151 0 0))) ((bruijn ##k.366 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0optimize__apply_k116, env, runtime,
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
static void _V0optimize__apply_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.150 0 0)) (if (##inline ##sys.eq? #f (##inline ##sys.car (bruijn ##expr.150 0 0))) ((close _V0optimize__apply_k115) (##inline ##sys.cdr (bruijn ##expr.150 0 0))) ((bruijn ##k.366 2 0) #f)) ((bruijn ##k.366 2 0) #f))
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
V_CALL_FUNC(_V0optimize__apply_k115, env, runtime,
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
static void _V0optimize__apply_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.368 0 0) ((close _V0optimize__apply_k114) (##inline ##sys.cdr (bruijn ##expr.149 1 1))) ((bruijn ##k.366 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0optimize__apply_k114, env, runtime,
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
static void _V0optimize__apply_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.149 0 1)) ((bruijn equal? 23 2) (close _V0optimize__apply_k113) (quote if) (##inline ##sys.car (bruijn ##expr.149 0 1))) ((bruijn ##k.366 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k113, env)}),
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
static void _V0optimize__apply_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k124, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.139 12 1) (bruijn ##k.351 6 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.154 4 0)) (##inline ##sys.cons (bruijn ##x.361 1 0) (##inline ##sys.cons (bruijn ##x.363 0 0) (quote ()))))))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCar(
upenv->up->up->up->vars[0]
    )
,
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
static void _V0optimize__apply_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-apply 28 16) (close _V0optimize__apply_k124) (##inline ##sys.car (bruijn ##expr.156 1 0)))
V_CALL(VGetArg(upenv, 28-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k124, env)}),
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0optimize__apply_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.156 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.156 0 0))) ((bruijn optimize-apply 27 16) (close _V0optimize__apply_k123) (##inline ##sys.car (bruijn ##expr.155 1 0))) ((bruijn ##k.351 4 0) #f)) ((bruijn ##k.351 4 0) #f))
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
V_CALL(VGetArg(upenv, 27-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k123, env)}),
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
static void _V0optimize__apply_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.155 0 0)) ((close _V0optimize__apply_k122) (##inline ##sys.cdr (bruijn ##expr.155 0 0))) ((bruijn ##k.351 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0optimize__apply_k122, env, runtime,
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
static void _V0optimize__apply_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.154 0 0)) ((close _V0optimize__apply_k121) (##inline ##sys.cdr (bruijn ##expr.154 0 0))) ((bruijn ##k.351 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0optimize__apply_k121, env, runtime,
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
static void _V0optimize__apply_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.353 0 0) ((close _V0optimize__apply_k120) (##inline ##sys.cdr (bruijn ##expr.153 1 1))) ((bruijn ##k.351 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0optimize__apply_k120, env, runtime,
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
static void _V0optimize__apply_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.153 0 1)) ((bruijn equal? 24 2) (close _V0optimize__apply_k119) (quote if) (##inline ##sys.car (bruijn ##expr.153 0 1))) ((bruijn ##k.351 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k119, env)}),
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
static void _V0optimize__apply_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k131, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.349 1 0) ((bruijn lookup-inline 31 6) (bruijn ##k.350 0 0) (bruijn f 5 0)) ((bruijn ##k.350 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 31-1, 6), runtime,
      _var0,
      VGetArg(upenv, 5-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__apply_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k135, runtime, upenv, 1, argc, _var0) {
  // ((bruijn optimize-apply 33 16) (bruijn ##k.338 2 0) (##inline ##sys.cons (bruijn ##x.340 1 0) (##inline ##sys.cons (##inline ##sys.cons (quote ##inline) (##inline ##sys.cons (bruijn f 8 0) (bruijn ##x.344 0 0))) (quote ()))))
V_CALL(VGetArg(upenv, 33-1, 16), runtime,
      upenv->up->vars[0],
      VInlineCons(
upenv->vars[0],
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10inline.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 8-1, 0),
      _var0
    )

    )
,
      VNULL
    )

    )

    );
 }
}
static void _V0optimize__apply_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 33 3) (close _V0optimize__apply_k135) (bruijn optimize-atom 32 17) (bruijn xs 4 0))
V_CALL(VGetArg(upenv, 33-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k135, env)}),
      VGetArg(upenv, 32-1, 17),
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0optimize__apply_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k139, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 36 8) (bruijn ##k.338 4 0) (bruijn ##x.345 3 0) (bruijn ##x.346 0 0))
V_CALL(VGetArg(upenv, 36-1, 8), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 35 8) (close _V0optimize__apply_k139) (bruijn ##x.347 1 0) (bruijn ##x.348 0 0))
V_CALL(VGetArg(upenv, 35-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k139, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0optimize__apply_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 34 3) (close _V0optimize__apply_k138) (bruijn optimize-atom 33 17) (bruijn xs 5 0))
V_CALL(VGetArg(upenv, 34-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k138, env)}),
      VGetArg(upenv, 33-1, 17),
      VGetArg(upenv, 5-1, 0)
    );
 }
}
static void _V0optimize__apply_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 32 17) (close _V0optimize__apply_k137) (bruijn k 5 0))
V_CALL(VGetArg(upenv, 32-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k137, env)}),
      VGetArg(upenv, 5-1, 0)
    );
 }
}
static void _V0optimize__apply_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.337 1 0) ((bruijn optimize-atom 31 17) (close _V0optimize__apply_k134) (bruijn k 4 0)) ((bruijn optimize-atom 31 17) (close _V0optimize__apply_k136) (bruijn f 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 31-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k134, env)}),
      upenv->up->up->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 31-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k136, env)}),
      VGetArg(upenv, 6-1, 0)
    );
}
 }
}
static void _V0optimize__apply_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k140, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.139 14 1) (bruijn ##k.333 7 0) (bruijn ##x.336 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0optimize__apply_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k133) (close _V0optimize__apply_k140))
V_CALL_FUNC(_V0optimize__apply_k133, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k140, env)})
    );
 }
}
static void _V0optimize__apply_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k131) (close _V0optimize__apply_k132))
V_CALL_FUNC(_V0optimize__apply_k131, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k132, env)})
    );
 }
}
static void _V0optimize__apply_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol? 29 7) (close _V0optimize__apply_k130) (bruijn f 3 0))
V_CALL(VGetArg(upenv, 29-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k130, env)}),
      upenv->up->up->vars[0]
    );
 }
}
static void _V0optimize__apply_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k129) (##inline ##sys.cdr (bruijn ##expr.158 1 0)))
V_CALL_FUNC(_V0optimize__apply_k129, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0optimize__apply_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.158 0 0)) ((close _V0optimize__apply_k128) (##inline ##sys.car (bruijn ##expr.158 0 0))) ((bruijn ##k.333 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0optimize__apply_k128, env, runtime,
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
static void _V0optimize__apply_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_k127) (##inline ##sys.cdr (bruijn ##expr.157 1 1)))
V_CALL_FUNC(_V0optimize__apply_k127, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__apply_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda40, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.157 0 1)) ((close _V0optimize__apply_k126) (##inline ##sys.car (bruijn ##expr.157 0 1))) ((bruijn ##k.333 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0optimize__apply_k126, env, runtime,
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
static void _V0optimize__apply_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k141, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 25 9) (bruijn ##k.326 6 0) (##string ##string.1111))
V_CALL(VGetArg(upenv, 25-1, 9), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1111.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0optimize__apply_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda40) (close _V0optimize__apply_k141) (bruijn ##input.140 5 1))
V_CALL_FUNC(_V0optimize__apply_lambda40, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k141, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0optimize__apply_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda39) (close _V0optimize__apply_k125) (bruijn ##input.140 4 1))
V_CALL_FUNC(_V0optimize__apply_lambda39, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k125, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda38) (close _V0optimize__apply_k118) (bruijn ##input.140 3 1))
V_CALL_FUNC(_V0optimize__apply_lambda38, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k118, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda37) (close _V0optimize__apply_k112) (bruijn ##input.140 2 1))
V_CALL_FUNC(_V0optimize__apply_lambda37, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k112, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0optimize__apply_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__apply_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__apply_lambda36) (close _V0optimize__apply_k106) (bruijn ##input.140 1 1))
V_CALL_FUNC(_V0optimize__apply_lambda36, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k106, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0optimize__apply_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda35) (close _V0optimize__apply_k102) (bruijn ##input.140 0 1))
V_CALL_FUNC(_V0optimize__apply_lambda35, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_k102, env)}),
      _var1
    );
 }
}
static void _V0optimize__apply_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__apply_lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda33, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__apply_lambda34) (bruijn ##k.325 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0optimize__apply_lambda34, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0optimize__apply_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__apply_lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__apply_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 17 1) (bruijn ##k.324 0 0) (close _V0optimize__apply_lambda33))
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_lambda33, env)})
    );
 }
}
static void cps_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k51) (bruijn optimize-apply 15 16) (close _V0optimize__apply_lambda32))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k51, env)}),
      VEncodeInt(15l), VEncodeInt(16l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__apply_lambda32, env)})
    );
 }
}
static void _V0optimize__let_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k157, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.515 0 0) ((bruijn ##k.514 2 0) (bruijn ##p.515 0 0)) ((bruijn = 35 13) (bruijn ##k.514 2 0) (bruijn refs 6 0) 1))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 35-1, 13), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(1l)
    );
}
 }
}
static void _V0optimize__let_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 34 12) (close _V0optimize__let_k157) (bruijn ##x.516 0 0) (quote quote))
V_CALL(VGetArg(upenv, 34-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k157, env)}),
      _var0,
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0optimize__let_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.513 1 0) ((bruijn ##k.514 0 0) (bruijn ##p.513 1 0)) ((bruijn car 33 11) (close _V0optimize__let_k156) (bruijn x 5 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 33-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k156, env)}),
      VGetArg(upenv, 5-1, 0)
    );
}
 }
}
static void _V0optimize__let_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k159, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.511 1 0) ((bruijn pure-in? 33 8) (bruijn ##k.512 0 0) (bruijn y 10 0) (bruijn expr 8 0)) ((bruijn ##k.512 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 33-1, 8), runtime,
      _var0,
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 8-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k161, runtime, upenv, 1, argc, _var0) {
  // ((bruijn optimize-apply 34 16) (bruijn ##k.501 4 0) (bruijn ##x.503 0 0))
V_CALL(VGetArg(upenv, 34-1, 16), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__let_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k163, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.501 5 0) (##inline ##sys.cons (bruijn ##x.504 1 0) (##inline ##sys.cons (bruijn ##x.506 0 0) (quote ()))))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons(
upenv->vars[0],
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0optimize__let_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 34 17) (close _V0optimize__let_k163) (bruijn x 7 0))
V_CALL(VGetArg(upenv, 34-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k163, env)}),
      VGetArg(upenv, 7-1, 0)
    );
 }
}
static void _V0optimize__let_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.502 0 0) ((bruijn substitute 33 10) (close _V0optimize__let_k161) (bruijn y 10 0) (bruijn x 6 0) (bruijn expr 8 0)) ((bruijn optimize-atom 33 17) (close _V0optimize__let_k162) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn y 10 0) (quote ())) (##inline ##sys.cons (bruijn expr 8 0) (quote ()))))))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 33-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k161, env)}),
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 8-1, 0)
    );
} else {
V_CALL(VGetArg(upenv, 33-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k162, env)}),
      VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(upenv, 10-1, 0),
      VNULL
    )
,
      VInlineCons(
VGetArg(upenv, 8-1, 0),
      VNULL
    )

    )

    )

    );
}
 }
}
static void _V0optimize__let_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k159) (close _V0optimize__let_k160))
V_CALL_FUNC(_V0optimize__let_k159, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k160, env)})
    );
 }
}
static void _V0optimize__let_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k155) (close _V0optimize__let_k158))
V_CALL_FUNC(_V0optimize__let_k155, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k158, env)})
    );
 }
}
static void _V0optimize__let_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.500 1 0) ((bruijn optimize-apply 30 16) (bruijn ##k.501 0 0) (bruijn expr 5 0)) ((bruijn atom? 31 10) (close _V0optimize__let_k154) (bruijn x 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 30-1, 16), runtime,
      _var0,
      VGetArg(upenv, 5-1, 0)
    );
} else {
V_CALL(VGetArg(upenv, 31-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k154, env)}),
      upenv->up->up->vars[0]
    );
}
 }
}
static void _V0optimize__let_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.111 14 1) (bruijn ##k.488 12 0) (bruijn ##x.499 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0
    );
 }
}
static void _V0optimize__let_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k153) (close _V0optimize__let_k164))
V_CALL_FUNC(_V0optimize__let_k153, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k164, env)})
    );
 }
}
static void _V0optimize__let_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 29 13) (close _V0optimize__let_k152) (bruijn refs 0 0) 0)
V_CALL(VGetArg(upenv, 29-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k152, env)}),
      _var0,
      VEncodeInt(0l)
    );
 }
}
static void _V0optimize__let_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.118 1 0))) ((bruijn ref-count 27 6) (close _V0optimize__let_k151) (bruijn y 4 0) (bruijn expr 2 0)) ((bruijn ##k.488 9 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 27-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k151, env)}),
      upenv->up->up->up->vars[0],
      upenv->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.118 0 0)) ((close _V0optimize__let_k150) (##inline ##sys.car (bruijn ##expr.118 0 0))) ((bruijn ##k.488 8 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0optimize__let_k150, env, runtime,
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
static void _V0optimize__let_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.117 1 0))) ((close _V0optimize__let_k149) (##inline ##sys.cdr (bruijn ##expr.113 7 1))) ((bruijn ##k.488 7 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL_FUNC(_V0optimize__let_k149, env, runtime,
      VInlineCdr(
VGetArg(upenv, 7-1, 1)
    )

    );
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.117 0 0)) ((close _V0optimize__let_k148) (##inline ##sys.car (bruijn ##expr.117 0 0))) ((bruijn ##k.488 6 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0optimize__let_k148, env, runtime,
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
static void _V0optimize__let_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.116 1 0))) ((close _V0optimize__let_k147) (##inline ##sys.cdr (bruijn ##expr.115 2 0))) ((bruijn ##k.488 5 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL_FUNC(_V0optimize__let_k147, env, runtime,
      VInlineCdr(
upenv->up->vars[0]
    )

    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.116 0 0)) ((close _V0optimize__let_k146) (##inline ##sys.car (bruijn ##expr.116 0 0))) ((bruijn ##k.488 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0optimize__let_k146, env, runtime,
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
static void _V0optimize__let_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.115 0 0)) ((close _V0optimize__let_k145) (##inline ##sys.car (bruijn ##expr.115 0 0))) ((bruijn ##k.488 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0optimize__let_k145, env, runtime,
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
static void _V0optimize__let_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.491 0 0) ((close _V0optimize__let_k144) (##inline ##sys.cdr (bruijn ##expr.114 1 0))) ((bruijn ##k.488 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0optimize__let_k144, env, runtime,
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
static void _V0optimize__let_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.114 0 0)) ((bruijn equal? 20 2) (close _V0optimize__let_k143) (quote continuation) (##inline ##sys.car (bruijn ##expr.114 0 0))) ((bruijn ##k.488 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k143, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
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
static void _V0optimize__let_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.113 0 1)) ((close _V0optimize__let_k142) (##inline ##sys.car (bruijn ##expr.113 0 1))) ((bruijn ##k.488 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0optimize__let_k142, env, runtime,
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
static void _V0optimize__let_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k169, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.443 1 0) (##inline ##sys.car (bruijn ##expr.121 4 0)) (quote ()))
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
static void _V0loop_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k171, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 4 1) (bruijn ##k.454 1 0) (bruijn ##expr.126 2 1) (bruijn ##x.455 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.126 1 1))) ((bruijn reverse 28 5) (close _V0loop_k171) (bruijn ##ys.123 1 2)) ((bruijn ##k.454 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 28-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k171, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k174, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.124 7 1) (bruijn ##k.448 2 0) (bruijn ##expr.126 5 1) (bruijn ##x.450 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 31 5) (close _V0loop_k174) (bruijn ##ys.123 4 2))
V_CALL(VGetArg(upenv, 31-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k174, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.125 0 1) (close _V0loop_k173) (##inline ##sys.cdr (bruijn ##expr.126 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.126 3 1)) (bruijn ##ys.123 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k173, env)}),
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
static void _V0loop_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 29 1) (bruijn ##k.447 0 0) (close _V0loop_lambda51))
V_CALL(VGetArg(upenv, 29-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda51, env)})
    );
 }
}
static void _V0loop_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 28 4) (bruijn ##k.445 1 0) (close _V0loop_lambda50) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 28-1, 4), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda50, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda49, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda49, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k170) (close _V0loop_k172))
V_CALL_FUNC(_V0loop_k170, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k172, env)})
    );
 }
}
static void _V0optimize__let_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0optimize__let_k169) (bruijn loop 0 1) (close _V0loop_lambda49))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k169, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda49, env)})
    );
 }
}
static void _V0optimize__let_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__let_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__let_lambda48) (bruijn ##k.442 0 0) #f)
V_CALL_FUNC(_V0optimize__let_lambda48, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0optimize__let_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 24 1) (bruijn ##k.441 0 0) (close _V0optimize__let_lambda47))
V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda47, env)})
    );
 }
}
static void _V0optimize__let_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k176, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.463 1 0) (##inline ##sys.cdr (bruijn ##expr.119 9 1)) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
VGetArg(upenv, 9-1, 1)
    )
,
      VNULL
    );
 }
}
static void _V0loop_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k178, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.130 4 1) (bruijn ##k.474 1 0) (bruijn ##expr.132 2 1) (bruijn ##x.475 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0loop_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.132 1 1))) ((bruijn reverse 30 5) (close _V0loop_k178) (bruijn ##xs.129 1 2)) ((bruijn ##k.474 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 30-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k178, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k181, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.130 7 1) (bruijn ##k.468 2 0) (bruijn ##expr.132 5 1) (bruijn ##x.470 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0loop_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 33 5) (close _V0loop_k181) (bruijn ##xs.129 4 2))
V_CALL(VGetArg(upenv, 33-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k181, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.131 0 1) (close _V0loop_k180) (##inline ##sys.cdr (bruijn ##expr.132 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.132 3 1)) (bruijn ##xs.129 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k180, env)}),
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
static void _V0loop_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 31 1) (bruijn ##k.467 0 0) (close _V0loop_lambda58))
V_CALL(VGetArg(upenv, 31-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda58, env)})
    );
 }
}
static void _V0loop_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 30 4) (bruijn ##k.465 1 0) (close _V0loop_lambda57) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 30-1, 4), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda57, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda56, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda56, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k177) (close _V0loop_k179))
V_CALL_FUNC(_V0loop_k177, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k179, env)})
    );
 }
}
static void _V0optimize__let_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0optimize__let_k176) (bruijn loop 0 1) (close _V0loop_lambda56))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k176, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda56, env)})
    );
 }
}
static void _V0optimize__let_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__let_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__let_lambda55) (bruijn ##k.462 0 0) #f)
V_CALL_FUNC(_V0optimize__let_lambda55, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0optimize__let_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 26 1) (bruijn ##k.461 0 0) (close _V0optimize__let_lambda54))
V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda54, env)})
    );
 }
}
static void _V0optimize__let_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k186, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.481 1 0) ((bruijn error 31 9) (bruijn ##k.482 0 0) (##string ##string.1112)) ((bruijn ##k.482 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 31-1, 9), runtime,
      _var0,
      VEncodePointer(&_V10string_D1112.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k188, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.111 15 1) (bruijn ##k.477 6 0) (bruijn ##x.479 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0optimize__let_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 31 3) (close _V0optimize__let_k188) (bruijn optimize-atom 30 17) (bruijn let-expr 15 1))
V_CALL(VGetArg(upenv, 31-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k188, env)}),
      VGetArg(upenv, 30-1, 17),
      VGetArg(upenv, 15-1, 1)
    );
 }
}
static void _V0optimize__let_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k186) (close _V0optimize__let_k187))
V_CALL_FUNC(_V0optimize__let_k186, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k187, env)})
    );
 }
}
static void _V0optimize__let_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 29 16) (close _V0optimize__let_k185) (bruijn ##x.483 0 0))
V_CALL(VGetArg(upenv, 29-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k185, env)}),
      _var0
    );
 }
}
static void _V0optimize__let_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 28 13) (close _V0optimize__let_k184) (bruijn ##x.484 1 0) (bruijn ##x.485 0 0))
V_CALL(VGetArg(upenv, 28-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k184, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0optimize__let_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 27 15) (close _V0optimize__let_k183) (bruijn xs 1 2))
V_CALL(VGetArg(upenv, 27-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k183, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0optimize__let_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0optimize__let_lambda59, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda59, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn length 26 15) (close _V0optimize__let_k182) (bruijn ys 2 2)) ((bruijn ##k.477 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 26-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k182, env)}),
      upenv->up->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.127 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.127 0 0))) ((bruijn call-with-values 25 4) (bruijn ##k.457 1 0) (close _V0optimize__let_lambda53) (close _V0optimize__let_lambda59)) ((bruijn ##k.457 1 0) #f)) ((bruijn ##k.457 1 0) #f))
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
V_CALL(VGetArg(upenv, 25-1, 4), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda53, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda59, env)})
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
static void _V0optimize__let_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0optimize__let_lambda52, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda52, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((close _V0optimize__let_k175) (##inline ##sys.cdr (bruijn ##expr.121 1 0))) ((bruijn ##k.457 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL_FUNC(_V0optimize__let_k175, env, runtime,
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
static void _V0optimize__let_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.121 0 0)) ((bruijn call-with-values 23 4) (bruijn ##k.436 3 0) (close _V0optimize__let_lambda46) (close _V0optimize__let_lambda52)) ((bruijn ##k.436 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 4), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda46, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda52, env)})
    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.439 0 0) ((close _V0optimize__let_k168) (##inline ##sys.cdr (bruijn ##expr.120 1 0))) ((bruijn ##k.436 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0optimize__let_k168, env, runtime,
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
static void _V0optimize__let_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.120 0 0)) ((bruijn equal? 21 2) (close _V0optimize__let_k167) (quote lambda) (##inline ##sys.car (bruijn ##expr.120 0 0))) ((bruijn ##k.436 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k167, env)}),
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
static void _V0optimize__let_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.119 0 1)) ((close _V0optimize__let_k166) (##inline ##sys.car (bruijn ##expr.119 0 1))) ((bruijn ##k.436 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0optimize__let_k166, env, runtime,
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
static void _V0optimize__let_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k200, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.429 1 0) ((bruijn error 32 9) (bruijn ##k.430 0 0) (##string ##string.1112)) ((bruijn ##k.430 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 32-1, 9), runtime,
      _var0,
      VEncodePointer(&_V10string_D1112.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k203, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.111 17 1) (bruijn ##k.415 13 0) (##inline ##sys.cons (bruijn ##x.424 1 0) (bruijn ##x.425 0 0)))
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      VInlineCons(
upenv->vars[0],
      _var0
    )

    );
 }
}
static void _V0optimize__let_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 33 3) (close _V0optimize__let_k203) (bruijn optimize-atom 32 17) (bruijn xs 6 0))
V_CALL(VGetArg(upenv, 33-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k203, env)}),
      VGetArg(upenv, 32-1, 17),
      VGetArg(upenv, 6-1, 0)
    );
 }
}
static void _V0optimize__let_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn optimize-atom 31 17) (close _V0optimize__let_k202) (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (bruijn ys 7 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.136 6 0)) (quote ())))))
V_CALL(VGetArg(upenv, 31-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k202, env)}),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 7-1, 0),
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
static void _V0optimize__let_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k200) (close _V0optimize__let_k201))
V_CALL_FUNC(_V0optimize__let_k200, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k201, env)})
    );
 }
}
static void _V0optimize__let_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 30 16) (close _V0optimize__let_k199) (bruijn ##x.431 0 0))
V_CALL(VGetArg(upenv, 30-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k199, env)}),
      _var0
    );
 }
}
static void _V0optimize__let_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn <= 29 14) (close _V0optimize__let_k198) (bruijn ##x.432 1 0) (bruijn ##x.433 0 0))
V_CALL(VGetArg(upenv, 29-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k198, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0optimize__let_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn length 28 15) (close _V0optimize__let_k197) (bruijn xs 1 0))
V_CALL(VGetArg(upenv, 28-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k197, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0optimize__let_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn taillength 26 14) (close _V0optimize__let_k196) (bruijn ys 2 0))
V_CALL(VGetArg(upenv, 26-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k196, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0optimize__let_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.136 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.136 0 0))) ((close _V0optimize__let_k195) (##inline ##sys.cdr (bruijn ##expr.133 5 1))) ((bruijn ##k.415 5 0) #f)) ((bruijn ##k.415 5 0) #f))
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
V_CALL_FUNC(_V0optimize__let_k195, env, runtime,
      VInlineCdr(
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
 }
}
static void _V0optimize__let_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__let_k194) (##inline ##sys.cdr (bruijn ##expr.135 1 0)))
V_CALL_FUNC(_V0optimize__let_k194, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0optimize__let_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.135 0 0)) ((close _V0optimize__let_k193) (##inline ##sys.car (bruijn ##expr.135 0 0))) ((bruijn ##k.415 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0optimize__let_k193, env, runtime,
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
static void _V0optimize__let_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.418 0 0) ((close _V0optimize__let_k192) (##inline ##sys.cdr (bruijn ##expr.134 1 0))) ((bruijn ##k.415 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0optimize__let_k192, env, runtime,
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
static void _V0optimize__let_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.134 0 0)) ((bruijn equal? 22 2) (close _V0optimize__let_k191) (quote lambda) (##inline ##sys.car (bruijn ##expr.134 0 0))) ((bruijn ##k.415 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 22-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k191, env)}),
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
static void _V0optimize__let_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.133 0 1)) ((close _V0optimize__let_k190) (##inline ##sys.car (bruijn ##expr.133 0 1))) ((bruijn ##k.415 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0optimize__let_k190, env, runtime,
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
static void _V0optimize__let_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k207, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.111 8 1) (bruijn ##k.409 3 0) (bruijn ##x.413 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0optimize__let_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.412 0 0) ((bruijn error 24 9) (close _V0optimize__let_k207) (##string ##string.1113)) ((bruijn ##k.409 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 24-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k207, env)}),
      VEncodePointer(&_V10string_D1113.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__let_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.138 0 0)) ((bruijn equal? 23 2) (close _V0optimize__let_k206) (quote continuation) (##inline ##sys.car (bruijn ##expr.138 0 0))) ((bruijn ##k.409 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k206, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
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
static void _V0optimize__let_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 1)) ((close _V0optimize__let_k205) (##inline ##sys.car (bruijn ##expr.137 0 1))) ((bruijn ##k.409 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0optimize__let_k205, env, runtime,
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
static void _V0optimize__let_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k208, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 22 9) (bruijn ##k.404 4 0) (##string ##string.1111))
V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1111.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0optimize__let_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__let_lambda61) (close _V0optimize__let_k208) (bruijn ##input.112 3 1))
V_CALL_FUNC(_V0optimize__let_lambda61, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k208, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0optimize__let_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__let_lambda60) (close _V0optimize__let_k204) (bruijn ##input.112 2 1))
V_CALL_FUNC(_V0optimize__let_lambda60, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k204, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0optimize__let_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__let_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__let_lambda45) (close _V0optimize__let_k189) (bruijn ##input.112 1 1))
V_CALL_FUNC(_V0optimize__let_lambda45, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k189, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0optimize__let_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__let_lambda44) (close _V0optimize__let_k165) (bruijn ##input.112 0 1))
V_CALL_FUNC(_V0optimize__let_lambda44, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_k165, env)}),
      _var1
    );
 }
}
static void _V0optimize__let_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__let_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__let_lambda43) (bruijn ##k.403 0 0) (bruijn let-expr 1 1))
V_CALL_FUNC(_V0optimize__let_lambda43, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0optimize__let_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__let_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__let_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 16 1) (bruijn ##k.402 0 0) (close _V0optimize__let_lambda42))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda42, env)})
    );
 }
}
static void cps_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k50) (bruijn optimize-let 14 15) (close _V0optimize__let_lambda41))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k50, env)}),
      VEncodeInt(14l), VEncodeInt(15l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__let_lambda41, env)})
    );
 }
}
static void _V0taillength_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0taillength_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0taillength_k209, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.522 1 0) (bruijn lst 2 1) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      VEncodeInt(0l)
    );
 }
}
static void _V0loop_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k212, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 4 1) (bruijn ##k.524 3 0) (bruijn ##x.526 1 0) (bruijn ##x.527 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 19 19) (close _V0loop_k212) (bruijn len 2 2) 1)
V_CALL(VGetArg(upenv, 19-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k212, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.525 0 0) ((bruijn cdr 18 18) (close _V0loop_k211) (bruijn lst 1 1)) ((bruijn ##k.524 1 0) (bruijn len 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k211, env)}),
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]
    );
}
 }
}
static void _V0loop_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda64, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda64, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn pair? 17 17) (close _V0loop_k210) (bruijn lst 0 1))
V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k210, env)}),
      _var1
    );
 }
}
static void _V0taillength_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0taillength_lambda63, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0taillength_k209) (bruijn loop 0 1) (close _V0loop_lambda64))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0taillength_k209, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda64, env)})
    );
 }
}
static void _V0taillength_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0taillength_lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0taillength_lambda62, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0taillength_lambda63) (bruijn ##k.521 0 0) #f)
V_CALL_FUNC(_V0taillength_lambda63, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void cps_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k49) (bruijn taillength 13 14) (close _V0taillength_lambda62))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k49, env)}),
      VEncodeInt(13l), VEncodeInt(14l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0taillength_lambda62, env)})
    );
 }
}
static void _V0optimize__lambda_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k217, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.103 7 1) (bruijn ##k.532 5 0) (bruijn ##x.537 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0optimize__lambda_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k226, runtime, upenv, 1, argc, _var0) {
  // ((bruijn = 32 13) (bruijn ##k.554 3 0) 0 (bruijn ##x.556 0 0))
V_CALL(VGetArg(upenv, 32-1, 13), runtime,
      upenv->up->up->vars[0],
      VEncodeInt(0l),
      _var0
    );
 }
}
static void _V0optimize__lambda_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn fold 31 20) (close _V0optimize__lambda_k226) (bruijn + 31 19) 0 (bruijn ##x.557 0 0))
V_CALL(VGetArg(upenv, 31-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k226, env)}),
      VGetArg(upenv, 31-1, 19),
      VEncodeInt(0l),
      _var0
    );
 }
}
static void _V0optimize__lambda_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__lambda_lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda71, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ref-count 30 6) (bruijn ##k.558 0 0) (bruijn x 0 1) (bruijn f 6 0))
V_CALL(VGetArg(upenv, 30-1, 6), runtime,
      _var0,
      _var1,
      VGetArg(upenv, 6-1, 0)
    );
 }
}
static void _V0optimize__lambda_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.555 0 0) ((bruijn map 30 3) (close _V0optimize__lambda_k225) (close _V0optimize__lambda_lambda71) (bruijn xs 10 0)) ((bruijn ##k.554 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 30-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k225, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_lambda71, env)}),
      VGetArg(upenv, 10-1, 0)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__lambda_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.553 1 0) ((bruijn equal? 29 2) (close _V0optimize__lambda_k224) (bruijn xs 9 0) (bruijn ys 3 0)) ((bruijn ##k.554 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 29-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k224, env)}),
      VGetArg(upenv, 9-1, 0),
      upenv->up->up->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0optimize__lambda_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k228, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.548 1 0) ((bruijn ##k.549 0 0) (bruijn f 5 0)) ((bruijn ##k.549 0 0) (##inline ##sys.cons (bruijn lamb 12 0) (##inline ##sys.cons (bruijn xs 10 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn f 5 0) (bruijn ys 4 0)) (quote ()))))))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VGetArg(upenv, 5-1, 0)
    );
} else {
V_CALL(_var0, runtime,
      VInlineCons(
VGetArg(upenv, 12-1, 0),
      VInlineCons(
VGetArg(upenv, 10-1, 0),
      VInlineCons(
VInlineCons(
VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0]
    )
,
      VNULL
    )

    )

    )

    );
}
 }
}
static void _V0optimize__lambda_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k229, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.108 8 1) (bruijn ##k.545 6 0) (bruijn ##x.547 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0optimize__lambda_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_k228) (close _V0optimize__lambda_k229))
V_CALL_FUNC(_V0optimize__lambda_k228, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k229, env)})
    );
 }
}
static void _V0optimize__lambda_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_k223) (close _V0optimize__lambda_k227))
V_CALL_FUNC(_V0optimize__lambda_k223, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k227, env)})
    );
 }
}
static void _V0optimize__lambda_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 27 16) (close _V0optimize__lambda_k222) (bruijn ##x.559 0 0))
V_CALL(VGetArg(upenv, 27-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k222, env)}),
      _var0
    );
 }
}
static void _V0optimize__lambda_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn special-apply? 25 12) (close _V0optimize__lambda_k221) (bruijn f 1 0))
V_CALL(VGetArg(upenv, 25-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k221, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0optimize__lambda_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_k220) (##inline ##sys.cdr (bruijn ##expr.110 1 1)))
V_CALL_FUNC(_V0optimize__lambda_k220, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__lambda_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.110 0 1)) ((close _V0optimize__lambda_k219) (##inline ##sys.car (bruijn ##expr.110 0 1))) ((bruijn ##k.545 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0optimize__lambda_k219, env, runtime,
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
static void _V0optimize__lambda_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda72, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##kk.108 3 1) (bruijn ##k.541 0 0) (##inline ##sys.cons (bruijn lamb 7 0) (##inline ##sys.cons (bruijn xs 5 0) (##inline ##sys.cons (bruijn opt-body 0 1) (quote ())))))
V_CALL(upenv->up->up->vars[1], runtime,
      _var0,
      VInlineCons(
VGetArg(upenv, 7-1, 0),
      VInlineCons(
VGetArg(upenv, 5-1, 0),
      VInlineCons(
_var1,
      VNULL
    )

    )

    )

    );
 }
}
static void _V0optimize__lambda_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k231, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 25 9) (bruijn ##k.538 3 0) (##string ##string.1111))
V_CALL(VGetArg(upenv, 25-1, 9), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1111.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0optimize__lambda_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_lambda72) (close _V0optimize__lambda_k231) (bruijn ##input.109 1 0))
V_CALL_FUNC(_V0optimize__lambda_lambda72, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k231, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0optimize__lambda_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_lambda70) (close _V0optimize__lambda_k230) (bruijn ##input.109 0 0))
V_CALL_FUNC(_V0optimize__lambda_lambda70, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k230, env)}),
      _var0
    );
 }
}
static void _V0optimize__lambda_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__lambda_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda69, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn optimize-apply 21 16) (close _V0optimize__lambda_k218) (##inline ##sys.car (bruijn ##expr.107 1 0)))
V_CALL(VGetArg(upenv, 21-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k218, env)}),
      VInlineCar(
upenv->vars[0]
    )

    );
 }
}
static void _V0optimize__lambda_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.107 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.107 0 0))) ((bruijn call/cc 21 1) (close _V0optimize__lambda_k217) (close _V0optimize__lambda_lambda69)) ((bruijn ##k.532 4 0) #f)) ((bruijn ##k.532 4 0) #f))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k217, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_lambda69, env)})
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
static void _V0optimize__lambda_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_k216) (##inline ##sys.cdr (bruijn ##expr.106 1 0)))
V_CALL_FUNC(_V0optimize__lambda_k216, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0optimize__lambda_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.106 0 0)) ((close _V0optimize__lambda_k215) (##inline ##sys.car (bruijn ##expr.106 0 0))) ((bruijn ##k.532 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0optimize__lambda_k215, env, runtime,
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
static void _V0optimize__lambda_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0optimize__lambda_k214) (##inline ##sys.cdr (bruijn ##expr.105 1 1)))
V_CALL_FUNC(_V0optimize__lambda_k214, env, runtime,
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0optimize__lambda_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda68, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.105 0 1)) ((close _V0optimize__lambda_k213) (##inline ##sys.car (bruijn ##expr.105 0 1))) ((bruijn ##k.532 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0optimize__lambda_k213, env, runtime,
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
static void _V0optimize__lambda_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0optimize__lambda_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_k232, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 17 9) (bruijn ##k.530 1 0) (##string ##string.1111))
V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1111.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0optimize__lambda_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__lambda_lambda68) (close _V0optimize__lambda_k232) (bruijn ##input.104 0 1))
V_CALL_FUNC(_V0optimize__lambda_lambda68, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_k232, env)}),
      _var1
    );
 }
}
static void _V0optimize__lambda_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__lambda_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda66, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0optimize__lambda_lambda67) (bruijn ##k.529 0 0) (bruijn expr 1 1))
V_CALL_FUNC(_V0optimize__lambda_lambda67, env, runtime,
      _var0,
      upenv->vars[1]
    );
 }
}
static void _V0optimize__lambda_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0optimize__lambda_lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0optimize__lambda_lambda65, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 14 1) (bruijn ##k.528 0 0) (close _V0optimize__lambda_lambda66))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_lambda66, env)})
    );
 }
}
static void cps_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k48) (bruijn optimize-lambda 12 13) (close _V0optimize__lambda_lambda65))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k48, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0optimize__lambda_lambda65, env)})
    );
 }
}
static void _V0special__apply_Q_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0special__apply_Q_lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0special__apply_Q_lambda73, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn eqv? 13 12) (bruijn ##k.561 0 0) (bruijn tok 0 1) (quote if))
V_CALL(VGetArg(upenv, 13-1, 12), runtime,
      _var0,
      _var1,
      VEncodePointer(&_V0if.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k47) (bruijn special-apply? 11 12) (close _V0special__apply_Q_lambda73))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k47, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0special__apply_Q_lambda73, env)})
    );
 }
}
static void _V0alpha__convert_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0alpha__convert_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alpha__convert_k234, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.563 2 0) (bruijn expr 3 1))
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[1]
    );
 }
}
static void _V0make__substitutes_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__substitutes_k237, runtime, upenv, 1, argc, _var0) {
  // ((bruijn make-substitutes 5 2) (bruijn ##k.566 3 0) (bruijn ##x.569 0 0))
V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0make__substitutes_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__substitutes_k243, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 23 8) (bruijn ##k.566 8 0) (bruijn ##x.570 2 0) (bruijn ##x.571 0 0))
V_CALL(VGetArg(upenv, 23-1, 8), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0make__substitutes_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__substitutes_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-substitutes 9 2) (close _V0make__substitutes_k243) (bruijn ##x.572 0 0))
V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__substitutes_k243, env)}),
      _var0
    );
 }
}
static void _V0make__substitutes_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__substitutes_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 21 18) (close _V0make__substitutes_k242) (bruijn args 6 1))
V_CALL(VGetArg(upenv, 21-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__substitutes_k242, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0make__substitutes_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__substitutes_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 20 8) (close _V0make__substitutes_k241) (bruijn ##x.573 2 0) (bruijn ##x.574 0 0))
V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__substitutes_k241, env)}),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0make__substitutes_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__substitutes_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn make-conversion 6 1) (close _V0make__substitutes_k240) (bruijn ##x.575 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__substitutes_k240, env)}),
      _var0
    );
 }
}
static void _V0make__substitutes_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__substitutes_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 18 11) (close _V0make__substitutes_k239) (bruijn args 3 1))
V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__substitutes_k239, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0make__substitutes_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__substitutes_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.568 0 0) ((bruijn cons 17 8) (close _V0make__substitutes_k237) (bruijn args 2 1) (quote ())) ((bruijn car 17 11) (close _V0make__substitutes_k238) (bruijn args 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__substitutes_k237, env)}),
      upenv->up->vars[1],
      VNULL
    );
} else {
V_CALL(VGetArg(upenv, 17-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__substitutes_k238, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0make__substitutes_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__substitutes_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__substitutes_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.567 0 0) ((bruijn ##k.566 1 0) (quote ())) ((bruijn symbol? 16 7) (close _V0make__substitutes_k236) (bruijn args 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL
    );
} else {
V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__substitutes_k236, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0make__substitutes_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0make__substitutes_lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__substitutes_lambda76, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 15 27) (close _V0make__substitutes_k235) (bruijn args 0 1))
V_CALL(VGetArg(upenv, 15-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__substitutes_k235, env)}),
      _var1
    );
 }
}
static void _V0alpha__convert_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0alpha__convert_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alpha__convert_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0alpha__convert_k234) (bruijn make-substitutes 1 2) (close _V0make__substitutes_lambda76))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alpha__convert_k234, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__substitutes_lambda76, env)})
    );
 }
}
static void _V0make__conversion_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__conversion_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__conversion_k248, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 19 23) (bruijn ##k.579 1 0) (bruijn ##x.580 0 0))
V_CALL(VGetArg(upenv, 19-1, 23), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0make__conversion_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__conversion_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__conversion_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.578 1 0) ((bruijn substring 18 22) (close _V0make__conversion_k248) (bruijn str 3 0) 2) ((bruijn ##k.579 0 0) (bruijn sym 4 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 18-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__conversion_k248, env)}),
      upenv->up->up->vars[0],
      VEncodeInt(2l)
    );
} else {
V_CALL(_var0, runtime,
      upenv->up->up->up->vars[1]
    );
}
 }
}
static void _V0make__conversion_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__conversion_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__conversion_k249, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gensym 18 26) (bruijn ##k.576 4 0) (bruijn ##x.577 0 0))
V_CALL(VGetArg(upenv, 18-1, 26), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0make__conversion_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__conversion_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__conversion_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0make__conversion_k247) (close _V0make__conversion_k249))
V_CALL_FUNC(_V0make__conversion_k247, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__conversion_k249, env)})
    );
 }
}
static void _V0make__conversion_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__conversion_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__conversion_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eq? 16 24) (close _V0make__conversion_k246) #\# (bruijn ##x.581 0 0))
V_CALL(VGetArg(upenv, 16-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__conversion_k246, env)}),
      VEncodeChar('#'),
      _var0
    );
 }
}
static void _V0make__conversion_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0make__conversion_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__conversion_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-ref 15 25) (close _V0make__conversion_k245) (bruijn str 0 0) 0)
V_CALL(VGetArg(upenv, 15-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__conversion_k245, env)}),
      _var0,
      VEncodeInt(0l)
    );
 }
}
static void _V0make__conversion_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0make__conversion_lambda77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__conversion_lambda77, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol->string 14 21) (close _V0make__conversion_k244) (bruijn sym 0 1))
V_CALL(VGetArg(upenv, 14-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__conversion_k244, env)}),
      _var1
    );
 }
}
static void _V0alpha__convert_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V0alpha__convert_lambda75, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V0alpha__convert_k233) (bruijn make-conversion 0 1) (close _V0make__conversion_lambda77))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alpha__convert_k233, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__conversion_lambda77, env)})
    );
 }
}
static void _V0alpha__convert_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0alpha__convert_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alpha__convert_lambda74, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0alpha__convert_lambda75) (bruijn ##k.562 0 0) #f #f)
V_CALL_FUNC(_V0alpha__convert_lambda75, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void cps_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k46) (bruijn alpha-convert 10 11) (close _V0alpha__convert_lambda74))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k46, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alpha__convert_lambda74, env)})
    );
 }
}
static void _V0substitute_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k254, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.83 7 1) (bruijn ##k.650 5 0) (bruijn ##x.656 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0substitute_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 18 8) (close _V0substitute_k254) (quote lambda) (bruijn ##x.657 0 0))
V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k254, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0substitute_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.87 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.87 0 0))) ((bruijn substitute-lambda 16 9) (close _V0substitute_k253) (bruijn x 6 1) (bruijn atom 6 2) (##inline ##sys.car (bruijn ##expr.86 1 0)) (##inline ##sys.car (bruijn ##expr.87 0 0))) ((bruijn ##k.650 3 0) #f)) ((bruijn ##k.650 3 0) #f))
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
V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k253, env)}),
      VGetArg(upenv, 6-1, 1),
      VGetArg(upenv, 6-1, 2),
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
static void _V0substitute_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.86 0 0)) ((close _V0substitute_k252) (##inline ##sys.cdr (bruijn ##expr.86 0 0))) ((bruijn ##k.650 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0substitute_k252, env, runtime,
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
static void _V0substitute_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.652 0 0) ((close _V0substitute_k251) (##inline ##sys.cdr (bruijn ##expr.85 1 1))) ((bruijn ##k.650 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0substitute_k251, env, runtime,
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
static void _V0substitute_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.85 0 1)) ((bruijn equal? 14 2) (close _V0substitute_k250) (quote lambda) (##inline ##sys.car (bruijn ##expr.85 0 1))) ((bruijn ##k.650 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k250, env)}),
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
static void _V0substitute_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k260, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.83 8 1) (bruijn ##k.640 5 0) (bruijn ##x.646 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0substitute_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 19 8) (close _V0substitute_k260) (quote continuation) (bruijn ##x.647 0 0))
V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k260, env)}),
      VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0substitute_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.90 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.90 0 0))) ((bruijn substitute-lambda 17 9) (close _V0substitute_k259) (bruijn x 7 1) (bruijn atom 7 2) (##inline ##sys.car (bruijn ##expr.89 1 0)) (##inline ##sys.car (bruijn ##expr.90 0 0))) ((bruijn ##k.640 3 0) #f)) ((bruijn ##k.640 3 0) #f))
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
V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k259, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2),
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
static void _V0substitute_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.89 0 0)) ((close _V0substitute_k258) (##inline ##sys.cdr (bruijn ##expr.89 0 0))) ((bruijn ##k.640 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0substitute_k258, env, runtime,
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
static void _V0substitute_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.642 0 0) ((close _V0substitute_k257) (##inline ##sys.cdr (bruijn ##expr.88 1 1))) ((bruijn ##k.640 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0substitute_k257, env, runtime,
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
static void _V0substitute_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda82, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.88 0 1)) ((bruijn equal? 15 2) (close _V0substitute_k256) (quote continuation) (##inline ##sys.car (bruijn ##expr.88 0 1))) ((bruijn ##k.640 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k256, env)}),
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
static void _V0substitute_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k263, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.612 1 0) (##inline ##sys.cdr (bruijn ##expr.91 5 1)) (quote ()) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
VGetArg(upenv, 5-1, 1)
    )
,
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k266, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.95 5 1) (bruijn ##k.630 2 0) (bruijn ##expr.97 3 1) (bruijn ##x.631 1 0) (bruijn ##x.632 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 23 5) (close _V0loop_k266) (bruijn ##body.94 2 3))
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k266, env)}),
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.97 1 1))) ((bruijn reverse 22 5) (close _V0loop_k265) (bruijn ##args.93 1 2)) ((bruijn ##k.630 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k265, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k270, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.99 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.99 0 0))) ((bruijn ##kk.96 3 1) (bruijn ##k.622 1 0) (##inline ##sys.cdr (bruijn ##expr.97 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.98 2 0)) (bruijn ##args.93 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.99 0 0)) (bruijn ##body.94 6 3))) ((bruijn ##k.622 1 0) #f)) ((bruijn ##k.622 1 0) #f))
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
static void _V0loop_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.98 1 0)) ((close _V0loop_k270) (##inline ##sys.cdr (bruijn ##expr.98 1 0))) ((bruijn ##k.622 0 0) #f))
if(VDecodeBool(
VInlinePairP(
upenv->vars[0]
    )
)) {
V_CALL_FUNC(_V0loop_k270, env, runtime,
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
static void _V0loop_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k273, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.95 9 1) (bruijn ##k.617 4 0) (bruijn ##expr.97 7 1) (bruijn ##x.619 1 0) (bruijn ##x.620 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 27 5) (close _V0loop_k273) (bruijn ##body.94 6 3))
V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k273, env)}),
      VGetArg(upenv, 6-1, 3)
    );
 }
}
static void _V0loop_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 26 5) (close _V0loop_k272) (bruijn ##args.93 5 2))
V_CALL(VGetArg(upenv, 26-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k272, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k269) (close _V0loop_k271))
V_CALL_FUNC(_V0loop_k269, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k271, env)})
    );
 }
}
static void _V0loop_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda89, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda89, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k268) (##inline ##sys.car (bruijn ##expr.97 3 1)))
V_CALL_FUNC(_V0loop_k268, env, runtime,
      VInlineCar(
upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 23 1) (bruijn ##k.616 0 0) (close _V0loop_lambda89))
V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda89, env)})
    );
 }
}
static void _V0loop_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 22 4) (bruijn ##k.614 1 0) (close _V0loop_lambda88) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 22-1, 4), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda88, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda87, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda87, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k264) (close _V0loop_k267))
V_CALL_FUNC(_V0loop_k264, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k267, env)})
    );
 }
}
static void _V0substitute_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0substitute_k263) (bruijn loop 0 1) (close _V0loop_lambda87))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k263, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda87, env)})
    );
 }
}
static void _V0substitute_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0substitute_lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0substitute_lambda86) (bruijn ##k.611 0 0) #f)
V_CALL_FUNC(_V0substitute_lambda86, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0substitute_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 18 1) (bruijn ##k.610 0 0) (close _V0substitute_lambda85))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda85, env)})
    );
 }
}
static void _V0substitute_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k275, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.83 8 1) (bruijn ##k.634 2 0) (bruijn ##x.636 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0substitute_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 19 8) (close _V0substitute_k275) (quote case-lambda) (bruijn ##x.637 0 0))
V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k275, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0substitute_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0substitute_lambda91, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda91, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn substitute-lambda 18 9) (bruijn ##k.638 0 0) (bruijn x 8 1) (bruijn atom 8 2) (bruijn args 0 1) (bruijn body 0 2))
V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      _var0,
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 8-1, 2),
      _var1,
      _var2
    );
 }
}
static void _V0substitute_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0substitute_lambda90, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda90, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 18 3) (close _V0substitute_k274) (close _V0substitute_lambda91) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.634 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k274, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda91, env)}),
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
static void _V0substitute_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.609 0 0) ((bruijn call-with-values 17 4) (bruijn ##k.607 1 0) (close _V0substitute_lambda84) (close _V0substitute_lambda90)) ((bruijn ##k.607 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 4), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda84, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda90, env)})
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0substitute_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.91 0 1)) ((bruijn equal? 16 2) (close _V0substitute_k262) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.91 0 1))) ((bruijn ##k.607 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k262, env)}),
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
static void _V0substitute_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k278, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.101 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.101 0 0))) ((bruijn ##kk.83 7 1) (bruijn ##k.600 2 0) (bruijn expr 8 3)) ((bruijn ##k.600 2 0) #f)) ((bruijn ##k.600 2 0) #f))
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
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 8-1, 3)
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
static void _V0substitute_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.602 0 0) ((close _V0substitute_k278) (##inline ##sys.cdr (bruijn ##expr.100 1 1))) ((bruijn ##k.600 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0substitute_k278, env, runtime,
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
static void _V0substitute_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.100 0 1)) ((bruijn equal? 17 2) (close _V0substitute_k277) (quote quote) (##inline ##sys.car (bruijn ##expr.100 0 1))) ((bruijn ##k.600 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k277, env)}),
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
static void _V0substitute_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k282, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.83 9 1) (bruijn ##k.595 3 0) (bruijn ##x.597 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0substitute_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 20 8) (close _V0substitute_k282) (bruijn ##x.598 1 0) (bruijn ##x.599 0 0))
V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k282, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0substitute_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substitute 18 10) (close _V0substitute_k281) (bruijn x 8 1) (bruijn atom 8 2) (##inline ##sys.cdr (bruijn ##expr.102 1 1)))
V_CALL(VGetArg(upenv, 18-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k281, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 8-1, 2),
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0substitute_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.102 0 1)) ((bruijn substitute 17 10) (close _V0substitute_k280) (bruijn x 7 1) (bruijn atom 7 2) (##inline ##sys.car (bruijn ##expr.102 0 1))) ((bruijn ##k.595 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 17-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k280, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2),
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
static void _V0substitute_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k285, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.593 1 0) ((bruijn ##k.594 0 0) (bruijn atom 10 2)) ((bruijn ##k.594 0 0) (bruijn y 2 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VGetArg(upenv, 10-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      upenv->up->vars[1]
    );
}
 }
}
static void _V0substitute_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k286, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.83 9 1) (bruijn ##k.591 2 0) (bruijn ##x.592 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0substitute_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0substitute_k285) (close _V0substitute_k286))
V_CALL_FUNC(_V0substitute_k285, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k286, env)})
    );
 }
}
static void _V0substitute_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda94, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 19 12) (close _V0substitute_k284) (bruijn x 8 1) (bruijn y 0 1))
V_CALL(VGetArg(upenv, 19-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k284, env)}),
      VGetArg(upenv, 8-1, 1),
      _var1
    );
 }
}
static void _V0substitute_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k287, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 19 9) (bruijn ##k.584 6 0) (##string ##string.1111))
V_CALL(VGetArg(upenv, 19-1, 9), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1111.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0substitute_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda94) (close _V0substitute_k287) (bruijn ##input.84 5 1))
V_CALL_FUNC(_V0substitute_lambda94, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k287, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0substitute_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda93) (close _V0substitute_k283) (bruijn ##input.84 4 1))
V_CALL_FUNC(_V0substitute_lambda93, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k283, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0substitute_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda92) (close _V0substitute_k279) (bruijn ##input.84 3 1))
V_CALL_FUNC(_V0substitute_lambda92, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k279, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0substitute_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda83) (close _V0substitute_k276) (bruijn ##input.84 2 1))
V_CALL_FUNC(_V0substitute_lambda83, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k276, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0substitute_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0substitute_lambda82) (close _V0substitute_k261) (bruijn ##input.84 1 1))
V_CALL_FUNC(_V0substitute_lambda82, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k261, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0substitute_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda80, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0substitute_lambda81) (close _V0substitute_k255) (bruijn ##input.84 0 1))
V_CALL_FUNC(_V0substitute_lambda81, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_k255, env)}),
      _var1
    );
 }
}
static void _V0substitute_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0substitute_lambda79, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0substitute_lambda80) (bruijn ##k.583 0 0) (bruijn expr 1 3))
V_CALL_FUNC(_V0substitute_lambda80, env, runtime,
      _var0,
      upenv->vars[3]
    );
 }
}
static void _V0substitute_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0substitute_lambda78, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute_lambda78, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn call/cc 11 1) (bruijn ##k.582 0 0) (close _V0substitute_lambda79))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda79, env)})
    );
 }
}
static void cps_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k45) (bruijn substitute 9 10) (close _V0substitute_lambda78))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k45, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute_lambda78, env)})
    );
 }
}
static void _V0substitute__lambda_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute__lambda_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute__lambda_k289, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.660 2 0) (##inline ##sys.cons (bruijn args 2 3) (##inline ##sys.cons (bruijn ##x.663 0 0) (quote ()))))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
upenv->up->vars[3],
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0substitute__lambda_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0substitute__lambda_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute__lambda_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.661 0 0) ((bruijn ##k.660 1 0) (bruijn body 1 4)) ((bruijn substitute 10 10) (close _V0substitute__lambda_k289) (bruijn x 1 1) (bruijn atom 1 2) (bruijn body 1 4)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[4]
    );
} else {
V_CALL(VGetArg(upenv, 10-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute__lambda_k289, env)}),
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[4]
    );
}
 }
}
static void _V0substitute__lambda_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VError("Not enough arguments to _V0substitute__lambda_lambda95, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0substitute__lambda_lambda95, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 5; env->var_len = 5; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn memtail 9 2) (close _V0substitute__lambda_k288) (bruijn x 0 1) (bruijn args 0 3))
V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute__lambda_k288, env)}),
      _var1,
      _var3
    );
 }
}
static void cps_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k44) (bruijn substitute-lambda 8 9) (close _V0substitute__lambda_lambda95))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k44, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0substitute__lambda_lambda95, env)})
    );
 }
}
static void _V0pure__in_Q_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k293, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.60 6 1) (bruijn ##k.738 4 0) (bruijn ##x.744 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0pure__in_Q_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.64 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.64 0 0))) ((bruijn pure-in-lambda? 14 7) (close _V0pure__in_Q_k293) (bruijn x 6 1) (##inline ##sys.car (bruijn ##expr.63 1 0)) (##inline ##sys.car (bruijn ##expr.64 0 0))) ((bruijn ##k.738 3 0) #f)) ((bruijn ##k.738 3 0) #f))
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
V_CALL(VGetArg(upenv, 14-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k293, env)}),
      VGetArg(upenv, 6-1, 1),
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
static void _V0pure__in_Q_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.63 0 0)) ((close _V0pure__in_Q_k292) (##inline ##sys.cdr (bruijn ##expr.63 0 0))) ((bruijn ##k.738 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0pure__in_Q_k292, env, runtime,
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
static void _V0pure__in_Q_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.740 0 0) ((close _V0pure__in_Q_k291) (##inline ##sys.cdr (bruijn ##expr.62 1 1))) ((bruijn ##k.738 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0pure__in_Q_k291, env, runtime,
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
static void _V0pure__in_Q_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda99, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.62 0 1)) ((bruijn equal? 12 2) (close _V0pure__in_Q_k290) (quote lambda) (##inline ##sys.car (bruijn ##expr.62 0 1))) ((bruijn ##k.738 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 12-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k290, env)}),
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
static void _V0pure__in_Q_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k298, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.60 7 1) (bruijn ##k.729 4 0) (bruijn ##x.735 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0pure__in_Q_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.67 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.67 0 0))) ((bruijn pure-in-lambda? 15 7) (close _V0pure__in_Q_k298) (bruijn x 7 1) (##inline ##sys.car (bruijn ##expr.66 1 0)) (##inline ##sys.car (bruijn ##expr.67 0 0))) ((bruijn ##k.729 3 0) #f)) ((bruijn ##k.729 3 0) #f))
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
V_CALL(VGetArg(upenv, 15-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k298, env)}),
      VGetArg(upenv, 7-1, 1),
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
static void _V0pure__in_Q_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.66 0 0)) ((close _V0pure__in_Q_k297) (##inline ##sys.cdr (bruijn ##expr.66 0 0))) ((bruijn ##k.729 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0pure__in_Q_k297, env, runtime,
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
static void _V0pure__in_Q_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.731 0 0) ((close _V0pure__in_Q_k296) (##inline ##sys.cdr (bruijn ##expr.65 1 1))) ((bruijn ##k.729 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0pure__in_Q_k296, env, runtime,
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
static void _V0pure__in_Q_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.65 0 1)) ((bruijn equal? 13 2) (close _V0pure__in_Q_k295) (quote continuation) (##inline ##sys.car (bruijn ##expr.65 0 1))) ((bruijn ##k.729 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k295, env)}),
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
static void _V0pure__in_Q_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k301, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.700 1 0) (##inline ##sys.cdr (bruijn ##expr.68 5 1)) (quote ()) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
VGetArg(upenv, 5-1, 1)
    )
,
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k304, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.72 5 1) (bruijn ##k.718 2 0) (bruijn ##expr.74 3 1) (bruijn ##x.719 1 0) (bruijn ##x.720 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 21 5) (close _V0loop_k304) (bruijn ##body.71 2 3))
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k304, env)}),
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.74 1 1))) ((bruijn reverse 20 5) (close _V0loop_k303) (bruijn ##args.70 1 2)) ((bruijn ##k.718 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k303, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k308, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.76 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.76 0 0))) ((bruijn ##kk.73 3 1) (bruijn ##k.710 1 0) (##inline ##sys.cdr (bruijn ##expr.74 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.75 2 0)) (bruijn ##args.70 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.76 0 0)) (bruijn ##body.71 6 3))) ((bruijn ##k.710 1 0) #f)) ((bruijn ##k.710 1 0) #f))
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
static void _V0loop_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.75 1 0)) ((close _V0loop_k308) (##inline ##sys.cdr (bruijn ##expr.75 1 0))) ((bruijn ##k.710 0 0) #f))
if(VDecodeBool(
VInlinePairP(
upenv->vars[0]
    )
)) {
V_CALL_FUNC(_V0loop_k308, env, runtime,
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
static void _V0loop_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k311, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.72 9 1) (bruijn ##k.705 4 0) (bruijn ##expr.74 7 1) (bruijn ##x.707 1 0) (bruijn ##x.708 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn reverse 25 5) (close _V0loop_k311) (bruijn ##body.71 6 3))
V_CALL(VGetArg(upenv, 25-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k311, env)}),
      VGetArg(upenv, 6-1, 3)
    );
 }
}
static void _V0loop_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn reverse 24 5) (close _V0loop_k310) (bruijn ##args.70 5 2))
V_CALL(VGetArg(upenv, 24-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k310, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k307) (close _V0loop_k309))
V_CALL_FUNC(_V0loop_k307, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k309, env)})
    );
 }
}
static void _V0loop_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda107, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda107, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k306) (##inline ##sys.car (bruijn ##expr.74 3 1)))
V_CALL_FUNC(_V0loop_k306, env, runtime,
      VInlineCar(
upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 21 1) (bruijn ##k.704 0 0) (close _V0loop_lambda107))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda107, env)})
    );
 }
}
static void _V0loop_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 20 4) (bruijn ##k.702 1 0) (close _V0loop_lambda106) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda106, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda105, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda105, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k302) (close _V0loop_k305))
V_CALL_FUNC(_V0loop_k302, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k305, env)})
    );
 }
}
static void _V0pure__in_Q_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0pure__in_Q_k301) (bruijn loop 0 1) (close _V0loop_lambda105))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k301, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda105, env)})
    );
 }
}
static void _V0pure__in_Q_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0pure__in_Q_lambda103, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda103, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0pure__in_Q_lambda104) (bruijn ##k.699 0 0) #f)
V_CALL_FUNC(_V0pure__in_Q_lambda104, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0pure__in_Q_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_lambda102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 16 1) (bruijn ##k.698 0 0) (close _V0pure__in_Q_lambda103))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda103, env)})
    );
 }
}
static void _V0pure__in_Q_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k313, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.60 8 1) (bruijn ##k.722 2 0) (bruijn ##x.724 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0pure__in_Q_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0pure__in_Q_lambda109, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda109, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn a 0 1) ((bruijn ##k.725 0 0) (bruijn b 0 2)) ((bruijn ##k.725 0 0) #f))
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
static void _V0pure__in_Q_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn fold 17 20) (close _V0pure__in_Q_k313) (close _V0pure__in_Q_lambda109) #t (bruijn ##x.726 0 0))
V_CALL(VGetArg(upenv, 17-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k313, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda109, env)}),
      VEncodeBool(true),
      _var0
    );
 }
}
static void _V0pure__in_Q_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0pure__in_Q_lambda110, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda110, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn pure-in-lambda? 16 7) (bruijn ##k.727 0 0) (bruijn x 8 1) (bruijn args 0 1) (bruijn body 0 2))
V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      _var0,
      VGetArg(upenv, 8-1, 1),
      _var1,
      _var2
    );
 }
}
static void _V0pure__in_Q_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0pure__in_Q_lambda108, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda108, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 16 3) (close _V0pure__in_Q_k312) (close _V0pure__in_Q_lambda110) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.722 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k312, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda110, env)}),
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
static void _V0pure__in_Q_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.697 0 0) ((bruijn call-with-values 15 4) (bruijn ##k.695 1 0) (close _V0pure__in_Q_lambda102) (close _V0pure__in_Q_lambda108)) ((bruijn ##k.695 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda102, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda108, env)})
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.68 0 1)) ((bruijn equal? 14 2) (close _V0pure__in_Q_k300) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.68 0 1))) ((bruijn ##k.695 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k300, env)}),
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
static void _V0pure__in_Q_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k316, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.78 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.78 0 0))) ((bruijn ##kk.60 7 1) (bruijn ##k.688 2 0) #t) ((bruijn ##k.688 2 0) #f)) ((bruijn ##k.688 2 0) #f))
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
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
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
static void _V0pure__in_Q_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.690 0 0) ((close _V0pure__in_Q_k316) (##inline ##sys.cdr (bruijn ##expr.77 1 1))) ((bruijn ##k.688 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0pure__in_Q_k316, env, runtime,
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
static void _V0pure__in_Q_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda111, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.77 0 1)) ((bruijn equal? 15 2) (close _V0pure__in_Q_k315) (quote quote) (##inline ##sys.car (bruijn ##expr.77 0 1))) ((bruijn ##k.688 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k315, env)}),
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
static void _V0pure__in_Q_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k323, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.686 0 0) ((bruijn pure-in? 21 8) (bruijn ##k.685 1 0) (bruijn x 13 1) (##inline ##sys.cdr (bruijn ##expr.81 3 0))) ((bruijn ##k.685 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 8), runtime,
      upenv->vars[0],
      VGetArg(upenv, 13-1, 1),
      VInlineCdr(
upenv->up->up->vars[0]
    )

    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0pure__in_Q_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.684 1 0) ((bruijn ##k.685 0 0) #f) ((bruijn pure-in? 20 8) (close _V0pure__in_Q_k323) (bruijn x 12 1) (##inline ##sys.car (bruijn ##expr.80 3 0))))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k323, env)}),
      VGetArg(upenv, 12-1, 1),
      VInlineCar(
upenv->up->up->vars[0]
    )

    );
}
 }
}
static void _V0pure__in_Q_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k324, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.60 11 1) (bruijn ##k.678 5 0) (bruijn ##x.683 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0pure__in_Q_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_k322) (close _V0pure__in_Q_k324))
V_CALL_FUNC(_V0pure__in_Q_k322, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k324, env)})
    );
 }
}
static void _V0pure__in_Q_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.81 0 0)) ((bruijn eqv? 19 12) (close _V0pure__in_Q_k321) (bruijn x 10 1) (##inline ##sys.car (bruijn ##expr.81 0 0))) ((bruijn ##k.678 3 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k321, env)}),
      VGetArg(upenv, 10-1, 1),
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
static void _V0pure__in_Q_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.80 0 0)) ((close _V0pure__in_Q_k320) (##inline ##sys.cdr (bruijn ##expr.80 0 0))) ((bruijn ##k.678 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0pure__in_Q_k320, env, runtime,
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
static void _V0pure__in_Q_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.680 0 0) ((close _V0pure__in_Q_k319) (##inline ##sys.cdr (bruijn ##expr.79 1 1))) ((bruijn ##k.678 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0pure__in_Q_k319, env, runtime,
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
static void _V0pure__in_Q_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda112, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.79 0 1)) ((bruijn equal? 16 2) (close _V0pure__in_Q_k318) (quote set!) (##inline ##sys.car (bruijn ##expr.79 0 1))) ((bruijn ##k.678 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k318, env)}),
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
static void _V0pure__in_Q_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k327, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.676 1 0) ((bruijn pure-in? 18 8) (bruijn ##k.677 0 0) (bruijn x 10 1) (##inline ##sys.cdr (bruijn ##expr.82 2 1))) ((bruijn ##k.677 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      _var0,
      VGetArg(upenv, 10-1, 1),
      VInlineCdr(
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
static void _V0pure__in_Q_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k328, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.60 9 1) (bruijn ##k.673 2 0) (bruijn ##x.675 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0pure__in_Q_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_k327) (close _V0pure__in_Q_k328))
V_CALL_FUNC(_V0pure__in_Q_k327, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k328, env)})
    );
 }
}
static void _V0pure__in_Q_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda113, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.82 0 1)) ((bruijn pure-in? 16 8) (close _V0pure__in_Q_k326) (bruijn x 8 1) (##inline ##sys.car (bruijn ##expr.82 0 1))) ((bruijn ##k.673 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 16-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k326, env)}),
      VGetArg(upenv, 8-1, 1),
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
static void _V0pure__in_Q_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k329, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.60 7 1) (bruijn ##k.666 6 0) #t)
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodeBool(true)
    );
 }
}
static void _V0pure__in_Q_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda113) (close _V0pure__in_Q_k329) (bruijn ##input.61 5 1))
V_CALL_FUNC(_V0pure__in_Q_lambda113, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k329, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0pure__in_Q_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda112) (close _V0pure__in_Q_k325) (bruijn ##input.61 4 1))
V_CALL_FUNC(_V0pure__in_Q_lambda112, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k325, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0pure__in_Q_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k314, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda111) (close _V0pure__in_Q_k317) (bruijn ##input.61 3 1))
V_CALL_FUNC(_V0pure__in_Q_lambda111, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k317, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0pure__in_Q_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda101) (close _V0pure__in_Q_k314) (bruijn ##input.61 2 1))
V_CALL_FUNC(_V0pure__in_Q_lambda101, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k314, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0pure__in_Q_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in_Q_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0pure__in_Q_lambda100) (close _V0pure__in_Q_k299) (bruijn ##input.61 1 1))
V_CALL_FUNC(_V0pure__in_Q_lambda100, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k299, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0pure__in_Q_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0pure__in_Q_lambda99) (close _V0pure__in_Q_k294) (bruijn ##input.61 0 1))
V_CALL_FUNC(_V0pure__in_Q_lambda99, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_k294, env)}),
      _var1
    );
 }
}
static void _V0pure__in_Q_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0pure__in_Q_lambda97, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda97, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0pure__in_Q_lambda98) (bruijn ##k.665 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0pure__in_Q_lambda98, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0pure__in_Q_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0pure__in_Q_lambda96, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in_Q_lambda96, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 9 1) (bruijn ##k.664 0 0) (close _V0pure__in_Q_lambda97))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda97, env)})
    );
 }
}
static void cps_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k43) (bruijn pure-in? 7 8) (close _V0pure__in_Q_lambda96))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k43, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in_Q_lambda96, env)})
    );
 }
}
static void _V0pure__in__lambda_Q_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0pure__in__lambda_Q_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in__lambda_Q_k330, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.748 0 0) ((bruijn ##k.747 1 0) #t) ((bruijn pure-in? 8 8) (bruijn ##k.747 1 0) (bruijn x 1 1) (bruijn body 1 3)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true)
    );
} else {
V_CALL(VGetArg(upenv, 8-1, 8), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]
    );
}
 }
}
static void _V0pure__in__lambda_Q_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0pure__in__lambda_Q_lambda114, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0pure__in__lambda_Q_lambda114, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn memtail 7 2) (close _V0pure__in__lambda_Q_k330) (bruijn x 0 1) (bruijn args 0 2))
V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in__lambda_Q_k330, env)}),
      _var1,
      _var2
    );
 }
}
static void cps_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k42) (bruijn pure-in-lambda? 6 7) (close _V0pure__in__lambda_Q_lambda114))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k42, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0pure__in__lambda_Q_lambda114, env)})
    );
 }
}
static void _V0ref__count_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k334, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.40 6 1) (bruijn ##k.816 4 0) (bruijn ##x.822 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0ref__count_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.44 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.44 0 0))) ((bruijn ref-count-lambda 12 5) (close _V0ref__count_k334) (bruijn x 6 1) (##inline ##sys.car (bruijn ##expr.43 1 0)) (##inline ##sys.car (bruijn ##expr.44 0 0))) ((bruijn ##k.816 3 0) #f)) ((bruijn ##k.816 3 0) #f))
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
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k334, env)}),
      VGetArg(upenv, 6-1, 1),
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
static void _V0ref__count_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.43 0 0)) ((close _V0ref__count_k333) (##inline ##sys.cdr (bruijn ##expr.43 0 0))) ((bruijn ##k.816 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0ref__count_k333, env, runtime,
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
static void _V0ref__count_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.818 0 0) ((close _V0ref__count_k332) (##inline ##sys.cdr (bruijn ##expr.42 1 1))) ((bruijn ##k.816 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0ref__count_k332, env, runtime,
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
static void _V0ref__count_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda118, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.42 0 1)) ((bruijn equal? 10 2) (close _V0ref__count_k331) (quote lambda) (##inline ##sys.car (bruijn ##expr.42 0 1))) ((bruijn ##k.816 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k331, env)}),
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
static void _V0ref__count_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k339, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.40 7 1) (bruijn ##k.807 4 0) (bruijn ##x.813 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0ref__count_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.47 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.47 0 0))) ((bruijn ref-count-lambda 13 5) (close _V0ref__count_k339) (bruijn x 7 1) (##inline ##sys.car (bruijn ##expr.46 1 0)) (##inline ##sys.car (bruijn ##expr.47 0 0))) ((bruijn ##k.807 3 0) #f)) ((bruijn ##k.807 3 0) #f))
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
V_CALL(VGetArg(upenv, 13-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k339, env)}),
      VGetArg(upenv, 7-1, 1),
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
static void _V0ref__count_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.46 0 0)) ((close _V0ref__count_k338) (##inline ##sys.cdr (bruijn ##expr.46 0 0))) ((bruijn ##k.807 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0ref__count_k338, env, runtime,
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
static void _V0ref__count_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.809 0 0) ((close _V0ref__count_k337) (##inline ##sys.cdr (bruijn ##expr.45 1 1))) ((bruijn ##k.807 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0ref__count_k337, env, runtime,
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
static void _V0ref__count_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda119, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.45 0 1)) ((bruijn equal? 11 2) (close _V0ref__count_k336) (quote continuation) (##inline ##sys.car (bruijn ##expr.45 0 1))) ((bruijn ##k.807 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k336, env)}),
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
static void _V0ref__count_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k342, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.779 1 0) (##inline ##sys.cdr (bruijn ##expr.48 5 1)) (quote ()) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
VGetArg(upenv, 5-1, 1)
    )
,
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k345, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 5 1) (bruijn ##k.797 2 0) (bruijn ##expr.54 3 1) (bruijn ##x.798 1 0) (bruijn ##x.799 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 19 5) (close _V0loop_k345) (bruijn ##body.51 2 3))
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k345, env)}),
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.54 1 1))) ((bruijn reverse 18 5) (close _V0loop_k344) (bruijn ##args.50 1 2)) ((bruijn ##k.797 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k344, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k349, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.56 0 0))) ((bruijn ##kk.53 3 1) (bruijn ##k.789 1 0) (##inline ##sys.cdr (bruijn ##expr.54 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.55 2 0)) (bruijn ##args.50 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.56 0 0)) (bruijn ##body.51 6 3))) ((bruijn ##k.789 1 0) #f)) ((bruijn ##k.789 1 0) #f))
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
static void _V0loop_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.55 1 0)) ((close _V0loop_k349) (##inline ##sys.cdr (bruijn ##expr.55 1 0))) ((bruijn ##k.789 0 0) #f))
if(VDecodeBool(
VInlinePairP(
upenv->vars[0]
    )
)) {
V_CALL_FUNC(_V0loop_k349, env, runtime,
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
static void _V0loop_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k352, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.52 9 1) (bruijn ##k.784 4 0) (bruijn ##expr.54 7 1) (bruijn ##x.786 1 0) (bruijn ##x.787 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 23 5) (close _V0loop_k352) (bruijn ##body.51 6 3))
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k352, env)}),
      VGetArg(upenv, 6-1, 3)
    );
 }
}
static void _V0loop_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((bruijn reverse 22 5) (close _V0loop_k351) (bruijn ##args.50 5 2))
V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k351, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
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
  // ((close _V0loop_k348) (close _V0loop_k350))
V_CALL_FUNC(_V0loop_k348, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k350, env)})
    );
 }
}
static void _V0loop_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda126, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k347) (##inline ##sys.car (bruijn ##expr.54 3 1)))
V_CALL_FUNC(_V0loop_k347, env, runtime,
      VInlineCar(
upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 1) (bruijn ##k.783 0 0) (close _V0loop_lambda126))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda126, env)})
    );
 }
}
static void _V0loop_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 18 4) (bruijn ##k.781 1 0) (close _V0loop_lambda125) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 18-1, 4), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda125, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda124, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda124, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k343) (close _V0loop_k346))
V_CALL_FUNC(_V0loop_k343, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k346, env)})
    );
 }
}
static void _V0ref__count_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda123, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0ref__count_k342) (bruijn loop 0 1) (close _V0loop_lambda124))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k342, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda124, env)})
    );
 }
}
static void _V0ref__count_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0ref__count_lambda122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda122, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0ref__count_lambda123) (bruijn ##k.778 0 0) #f)
V_CALL_FUNC(_V0ref__count_lambda123, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0ref__count_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_lambda121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 14 1) (bruijn ##k.777 0 0) (close _V0ref__count_lambda122))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda122, env)})
    );
 }
}
static void _V0ref__count_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k354, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.40 8 1) (bruijn ##k.801 2 0) (bruijn ##x.803 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0ref__count_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn apply 15 28) (close _V0ref__count_k354) (bruijn + 15 19) (bruijn ##x.804 0 0))
V_CALL(VGetArg(upenv, 15-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k354, env)}),
      VGetArg(upenv, 15-1, 19),
      _var0
    );
 }
}
static void _V0ref__count_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0ref__count_lambda128, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda128, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ref-count-lambda 14 5) (bruijn ##k.805 0 0) (bruijn x 8 1) (bruijn args 0 1) (bruijn body 0 2))
V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      _var0,
      VGetArg(upenv, 8-1, 1),
      _var1,
      _var2
    );
 }
}
static void _V0ref__count_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0ref__count_lambda127, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda127, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 14 3) (close _V0ref__count_k353) (close _V0ref__count_lambda128) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.801 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k353, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda128, env)}),
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
static void _V0ref__count_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.776 0 0) ((bruijn call-with-values 13 4) (bruijn ##k.774 1 0) (close _V0ref__count_lambda121) (close _V0ref__count_lambda127)) ((bruijn ##k.774 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda121, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda127, env)})
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0ref__count_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda120, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.48 0 1)) ((bruijn equal? 12 2) (close _V0ref__count_k341) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.48 0 1))) ((bruijn ##k.774 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 12-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k341, env)}),
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
static void _V0ref__count_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k357, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.58 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.58 0 0))) ((bruijn ##kk.40 7 1) (bruijn ##k.767 2 0) 0) ((bruijn ##k.767 2 0) #f)) ((bruijn ##k.767 2 0) #f))
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
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VEncodeInt(0l)
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
static void _V0ref__count_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.769 0 0) ((close _V0ref__count_k357) (##inline ##sys.cdr (bruijn ##expr.57 1 1))) ((bruijn ##k.767 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0ref__count_k357, env, runtime,
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
static void _V0ref__count_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda129, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.57 0 1)) ((bruijn equal? 13 2) (close _V0ref__count_k356) (quote quote) (##inline ##sys.car (bruijn ##expr.57 0 1))) ((bruijn ##k.767 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k356, env)}),
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
static void _V0ref__count_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k361, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.40 9 1) (bruijn ##k.762 3 0) (bruijn ##x.764 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0ref__count_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 16 19) (close _V0ref__count_k361) (bruijn ##x.765 1 0) (bruijn ##x.766 0 0))
V_CALL(VGetArg(upenv, 16-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k361, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0ref__count_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ref-count 14 6) (close _V0ref__count_k360) (bruijn x 8 1) (##inline ##sys.cdr (bruijn ##expr.59 1 1)))
V_CALL(VGetArg(upenv, 14-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k360, env)}),
      VGetArg(upenv, 8-1, 1),
      VInlineCdr(
upenv->vars[1]
    )

    );
 }
}
static void _V0ref__count_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda130, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.59 0 1)) ((bruijn ref-count 13 6) (close _V0ref__count_k359) (bruijn x 7 1) (##inline ##sys.car (bruijn ##expr.59 0 1))) ((bruijn ##k.762 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k359, env)}),
      VGetArg(upenv, 7-1, 1),
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
static void _V0ref__count_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k364, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.760 1 0) ((bruijn ##k.761 0 0) 1) ((bruijn ##k.761 0 0) 0))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodeInt(1l)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeInt(0l)
    );
}
 }
}
static void _V0ref__count_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k365, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.40 9 1) (bruijn ##k.758 2 0) (bruijn ##x.759 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0ref__count_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0ref__count_k364) (close _V0ref__count_k365))
V_CALL_FUNC(_V0ref__count_k364, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k365, env)})
    );
 }
}
static void _V0ref__count_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda131, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eqv? 15 12) (close _V0ref__count_k363) (bruijn x 8 1) (bruijn y 0 1))
V_CALL(VGetArg(upenv, 15-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k363, env)}),
      VGetArg(upenv, 8-1, 1),
      _var1
    );
 }
}
static void _V0ref__count_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k366, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 15 9) (bruijn ##k.751 6 0) (##string ##string.1111))
V_CALL(VGetArg(upenv, 15-1, 9), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1111.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0ref__count_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda131) (close _V0ref__count_k366) (bruijn ##input.41 5 1))
V_CALL_FUNC(_V0ref__count_lambda131, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k366, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0ref__count_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda130) (close _V0ref__count_k362) (bruijn ##input.41 4 1))
V_CALL_FUNC(_V0ref__count_lambda130, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k362, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0ref__count_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda129) (close _V0ref__count_k358) (bruijn ##input.41 3 1))
V_CALL_FUNC(_V0ref__count_lambda129, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k358, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0ref__count_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda120) (close _V0ref__count_k355) (bruijn ##input.41 2 1))
V_CALL_FUNC(_V0ref__count_lambda120, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k355, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0ref__count_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0ref__count_lambda119) (close _V0ref__count_k340) (bruijn ##input.41 1 1))
V_CALL_FUNC(_V0ref__count_lambda119, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k340, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0ref__count_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda117, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0ref__count_lambda118) (close _V0ref__count_k335) (bruijn ##input.41 0 1))
V_CALL_FUNC(_V0ref__count_lambda118, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_k335, env)}),
      _var1
    );
 }
}
static void _V0ref__count_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0ref__count_lambda116, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda116, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0ref__count_lambda117) (bruijn ##k.750 0 0) (bruijn expr 1 2))
V_CALL_FUNC(_V0ref__count_lambda117, env, runtime,
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0ref__count_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0ref__count_lambda115, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count_lambda115, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 7 1) (bruijn ##k.749 0 0) (close _V0ref__count_lambda116))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda116, env)})
    );
 }
}
static void cps_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k41) (bruijn ref-count 5 6) (close _V0ref__count_lambda115))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k41, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count_lambda115, env)})
    );
 }
}
static void _V0ref__count__lambda_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0ref__count__lambda_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count__lambda_k367, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.826 0 0) ((bruijn ##k.825 1 0) 0) ((bruijn ref-count 6 6) (bruijn ##k.825 1 0) (bruijn x 1 1) (bruijn body 1 3)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodeInt(0l)
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]
    );
}
 }
}
static void _V0ref__count__lambda_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0ref__count__lambda_lambda132, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0ref__count__lambda_lambda132, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn memtail 5 2) (close _V0ref__count__lambda_k367) (bruijn x 0 1) (bruijn args 0 2))
V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count__lambda_k367, env)}),
      _var1,
      _var2
    );
 }
}
static void cps_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k40) (bruijn ref-count-lambda 4 5) (close _V0ref__count__lambda_lambda132))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k40, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0ref__count__lambda_lambda132, env)})
    );
 }
}
static void _V0deannotate__lambdas_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0deannotate__lambdas_lambda133, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0deannotate__lambdas_lambda133, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.827 0 0) (bruijn expr 0 1))
V_CALL(_var0, runtime,
      _var1
    );
 }
}
static void cps_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k39) (bruijn deannotate-lambdas 3 4) (close _V0deannotate__lambdas_lambda133))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k39, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0deannotate__lambdas_lambda133, env)})
    );
 }
}
static void _V0annotate__lambdas_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0annotate__lambdas_lambda134, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0annotate__lambdas_lambda134, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.828 0 0) (bruijn expr 0 1))
V_CALL(_var0, runtime,
      _var1
    );
 }
}
static void cps_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k38) (bruijn annotate-lambdas 2 3) (close _V0annotate__lambdas_lambda134))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k38, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0annotate__lambdas_lambda134, env)})
    );
 }
}
static void _V0memtail_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k371, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memtail 6 2) (bruijn ##k.829 4 0) (bruijn x 4 1) (bruijn ##x.832 0 0))
V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0memtail_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.831 0 0) ((bruijn ##k.829 3 0) (bruijn lst 3 2)) ((bruijn cdr 6 18) (close _V0memtail_k371) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k371, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0memtail_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn equal? 5 2) (close _V0memtail_k370) (bruijn x 2 1) (bruijn ##x.833 0 0))
V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k370, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0memtail_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k372, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.834 0 0) ((bruijn ##k.829 2 0) (bruijn lst 2 2)) ((bruijn ##k.829 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[2]
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0memtail_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.830 0 0) ((bruijn car 4 11) (close _V0memtail_k369) (bruijn lst 1 2)) ((bruijn equal? 4 2) (close _V0memtail_k372) (bruijn x 1 1) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[11], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k369, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k372, env)}),
      upenv->vars[1],
      upenv->vars[2]
    );
}
 }
}
static void _V0memtail_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0memtail_lambda135, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_lambda135, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn pair? 3 17) (close _V0memtail_k368) (bruijn lst 0 2))
V_CALL(upenv->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k368, env)}),
      _var2
    );
 }
}
static void cps_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close cps_k37) (bruijn memtail 1 2) (close _V0memtail_lambda135))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k37, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_lambda135, env)})
    );
 }
}
static void _V0to__cps_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k383, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.35 7 1) (bruijn ##k.847 5 0) (##inline ##sys.cons (quote ##vcore.declare) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.38 3 0)) (##inline ##sys.cons (bruijn ##x.856 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VInlineCons(
VEncodePointer(&_V10vcore_Ddeclare.sym, VPOINTER_OTHER),
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

    )

    );
 }
}
static void _V0to__cps_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 16 30) (close _V0to__cps_k383) (bruijn ##x.857 0 0))
V_CALL(VGetArg(upenv, 16-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k383, env)}),
      _var0
    );
 }
}
static void _V0to__cps_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.39 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.39 0 0))) ((bruijn to-cps-impl 12 6) (close _V0to__cps_k382) (##inline ##sys.car (bruijn ##expr.39 0 0))) ((bruijn ##k.847 3 0) #f)) ((bruijn ##k.847 3 0) #f))
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
V_CALL(VGetArg(upenv, 12-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k382, env)}),
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
static void _V0to__cps_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.38 0 0)) ((close _V0to__cps_k381) (##inline ##sys.cdr (bruijn ##expr.38 0 0))) ((bruijn ##k.847 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0to__cps_k381, env, runtime,
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
static void _V0to__cps_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.849 0 0) ((close _V0to__cps_k380) (##inline ##sys.cdr (bruijn ##expr.37 1 1))) ((bruijn ##k.847 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0to__cps_k380, env, runtime,
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
static void _V0to__cps_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_lambda140, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.37 0 1)) ((bruijn equal? 12 2) (close _V0to__cps_k379) (quote ##vcore.declare) (##inline ##sys.car (bruijn ##expr.37 0 1))) ((bruijn ##k.847 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 12-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k379, env)}),
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
static void _V0to__cps_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k385, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.35 3 1) (bruijn ##k.844 2 0) (bruijn ##x.846 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0to__cps_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn to-cps-impl 9 6) (close _V0to__cps_k385) (bruijn expr 10 1))
V_CALL(VGetArg(upenv, 9-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k385, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0to__cps_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_lambda139, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__cps_lambda140) (close _V0to__cps_k384) (bruijn ##input.36 0 1))
V_CALL_FUNC(_V0to__cps_lambda140, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k384, env)}),
      _var1
    );
 }
}
static void _V0to__cps_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0to__cps_lambda138, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_lambda138, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__cps_lambda139) (bruijn ##k.843 0 0) (bruijn expr 8 1))
V_CALL_FUNC(_V0to__cps_lambda139, env, runtime,
      _var0,
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0to__cps_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 9 1) (bruijn ##k.836 6 0) (close _V0to__cps_lambda138))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_lambda138, env)})
    );
 }
}
static void _V0to__cps__impl_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0to__cps__impl_lambda141, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps__impl_lambda141, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn iter2 6 5) (bruijn ##k.860 0 0) (bruijn expr 0 1) (quote ##sys.next))
V_CALL(VGetArg(upenv, 6-1, 5), runtime,
      _var0,
      _var1,
      VEncodePointer(&_V10sys_Dnext.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0to__cps_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__cps_k378) (bruijn to-cps-impl 5 6) (close _V0to__cps__impl_lambda141))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k378, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps__impl_lambda141, env)})
    );
 }
}
static void _V0iter2_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k395, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 18 5) (bruijn ##k.962 2 0) (bruijn x 6 0) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn ##x.968 1 0) (quote ())) (##inline ##sys.cons (bruijn ##x.967 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
upenv->vars[0],
      VNULL
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
static void _V0iter2_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter2 17 5) (close _V0iter2_k395) (bruijn y 3 0) (bruijn cont 12 2))
V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k395, env)}),
      upenv->up->up->vars[0],
      VGetArg(upenv, 12-1, 2)
    );
 }
}
static void _V0iter2_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.961 1 0) ((bruijn gensym 19 26) (close _V0iter2_k394) (##string ##string.1114)) ((bruijn iter2 16 5) (bruijn ##k.962 0 0) (bruijn y 2 0) (bruijn cont 11 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 19-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k394, env)}),
      VEncodePointer(&_V10string_D1114.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      _var0,
      upenv->up->vars[0],
      VGetArg(upenv, 11-1, 2)
    );
}
 }
}
static void _V0iter2_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k396, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 9 1) (bruijn ##k.954 7 0) (bruijn ##x.960 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0iter2_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_k393) (close _V0iter2_k396))
V_CALL_FUNC(_V0iter2_k393, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k396, env)})
    );
 }
}
static void _V0iter2_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.21 1 0))) ((bruijn application? 14 1) (close _V0iter2_k392) (bruijn x 2 0)) ((bruijn ##k.954 5 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k392, env)}),
      upenv->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 0)) ((close _V0iter2_k391) (##inline ##sys.car (bruijn ##expr.21 0 0))) ((bruijn ##k.954 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter2_k391, env, runtime,
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
static void _V0iter2_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_k390) (##inline ##sys.cdr (bruijn ##expr.20 1 0)))
V_CALL_FUNC(_V0iter2_k390, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter2_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.20 0 0)) ((close _V0iter2_k389) (##inline ##sys.car (bruijn ##expr.20 0 0))) ((bruijn ##k.954 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter2_k389, env, runtime,
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
static void _V0iter2_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.956 0 0) ((close _V0iter2_k388) (##inline ##sys.cdr (bruijn ##expr.19 1 1))) ((bruijn ##k.954 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter2_k388, env, runtime,
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
static void _V0iter2_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda145, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.19 0 1)) ((bruijn equal? 12 2) (close _V0iter2_k387) (quote begin) (##inline ##sys.car (bruijn ##expr.19 0 1))) ((bruijn ##k.954 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 12-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k387, env)}),
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
static void _V0iter2_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k408, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 21 5) (bruijn ##k.923 2 0) (bruijn p 8 0) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 1 0) (quote ())) (##inline ##sys.cons (bruijn ##x.928 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 8-1, 0),
      VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
upenv->vars[0],
      VNULL
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
static void _V0iter2_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter2 20 5) (close _V0iter2_k408) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn sym 0 0) (##inline ##sys.cons (bruijn x 5 0) (##inline ##sys.cons (bruijn y 3 0) (quote ()))))) (bruijn cont 15 2))
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k408, env)}),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VInlineCons(
VGetArg(upenv, 5-1, 0),
      VInlineCons(
upenv->up->up->vars[0],
      VNULL
    )

    )

    )

    )
,
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0iter2_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k412, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.923 4 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 10 0) (##inline ##sys.cons (bruijn ##x.937 1 0) (##inline ##sys.cons (bruijn ##x.939 0 0) (quote ()))))))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 10-1, 0),
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
static void _V0iter2_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter2 22 5) (close _V0iter2_k412) (bruijn y 5 0) (bruijn cont 17 2))
V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k412, env)}),
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 17-1, 2)
    );
 }
}
static void _V0iter2_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k415, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.923 5 0) (##inline ##sys.cons (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 2 0) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn p 11 0) (##inline ##sys.cons (bruijn ##x.948 1 0) (##inline ##sys.cons (bruijn ##x.950 0 0) (quote ()))))) (quote ())))) (##inline ##sys.cons (bruijn cont 19 2) (quote ()))))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
upenv->up->vars[0],
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 11-1, 0),
      VInlineCons(
upenv->vars[0],
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

    )
,
      VInlineCons(
VGetArg(upenv, 19-1, 2),
      VNULL
    )

    )

    );
 }
}
static void _V0iter2_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter2 23 5) (close _V0iter2_k415) (bruijn y 6 0) (bruijn k 1 0))
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k415, env)}),
      VGetArg(upenv, 6-1, 0),
      upenv->vars[0]
    );
 }
}
static void _V0iter2_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter2 22 5) (close _V0iter2_k414) (bruijn x 7 0) (bruijn k 0 0))
V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k414, env)}),
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0iter2_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.934 0 0) ((bruijn iter2 21 5) (close _V0iter2_k411) (bruijn x 6 0) (bruijn cont 16 2)) ((bruijn gensym 24 26) (close _V0iter2_k413) (##string ##string.1116)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k411, env)}),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 16-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 24-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k413, env)}),
      VEncodePointer(&_V10string_D1116.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0iter2_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k416, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.951 0 0) ((bruijn iter2 21 5) (bruijn ##k.923 2 0) (bruijn y 4 0) (bruijn cont 16 2)) ((bruijn iter2 21 5) (bruijn ##k.923 2 0) (bruijn x 6 0) (bruijn cont 16 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 16-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 16-1, 2)
    );
}
 }
}
static void _V0iter2_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.933 0 0) ((bruijn symbol? 23 7) (close _V0iter2_k410) (bruijn cont 15 2)) ((bruijn eq? 23 24) (close _V0iter2_k416) (bruijn p 7 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k410, env)}),
      VGetArg(upenv, 15-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 23-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k416, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.922 1 0) ((bruijn gensym 22 26) (close _V0iter2_k407) (##string ##string.1115)) ((bruijn symbol? 22 7) (close _V0iter2_k409) (bruijn p 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 22-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k407, env)}),
      VEncodePointer(&_V10string_D1115.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k409, env)}),
      VGetArg(upenv, 6-1, 0)
    );
}
 }
}
static void _V0iter2_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k417, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 12 1) (bruijn ##k.914 9 0) (bruijn ##x.921 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0
    );
 }
}
static void _V0iter2_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_k406) (close _V0iter2_k417))
V_CALL_FUNC(_V0iter2_k406, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k417, env)})
    );
 }
}
static void _V0iter2_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.25 1 0))) ((bruijn application? 17 1) (close _V0iter2_k405) (bruijn p 4 0)) ((bruijn ##k.914 7 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k405, env)}),
      upenv->up->up->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.25 0 0)) ((close _V0iter2_k404) (##inline ##sys.car (bruijn ##expr.25 0 0))) ((bruijn ##k.914 6 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter2_k404, env, runtime,
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
static void _V0iter2_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_k403) (##inline ##sys.cdr (bruijn ##expr.24 1 0)))
V_CALL_FUNC(_V0iter2_k403, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter2_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.24 0 0)) ((close _V0iter2_k402) (##inline ##sys.car (bruijn ##expr.24 0 0))) ((bruijn ##k.914 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter2_k402, env, runtime,
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
static void _V0iter2_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_k401) (##inline ##sys.cdr (bruijn ##expr.23 1 0)))
V_CALL_FUNC(_V0iter2_k401, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter2_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.23 0 0)) ((close _V0iter2_k400) (##inline ##sys.car (bruijn ##expr.23 0 0))) ((bruijn ##k.914 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter2_k400, env, runtime,
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
static void _V0iter2_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.916 0 0) ((close _V0iter2_k399) (##inline ##sys.cdr (bruijn ##expr.22 1 1))) ((bruijn ##k.914 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter2_k399, env, runtime,
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
static void _V0iter2_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda146, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 1)) ((bruijn equal? 13 2) (close _V0iter2_k398) (quote if) (##inline ##sys.car (bruijn ##expr.22 0 1))) ((bruijn ##k.914 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k398, env)}),
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
static void _V0iter2_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k427, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 20 5) (bruijn ##k.899 2 0) (bruijn x 6 0) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 1 0) (quote ())) (##inline ##sys.cons (bruijn ##x.904 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
upenv->vars[0],
      VNULL
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
static void _V0iter2_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter2 19 5) (close _V0iter2_k427) (##inline ##sys.cons (quote or) (##inline ##sys.cons (bruijn sym 0 0) (##inline ##sys.cons (bruijn y 3 0) (quote ())))) (bruijn cont 14 2))
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k427, env)}),
      VInlineCons(
VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VInlineCons(
upenv->up->up->vars[0],
      VNULL
    )

    )

    )
,
      VGetArg(upenv, 14-1, 2)
    );
 }
}
static void _V0iter2_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k425, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.898 1 0) ((bruijn gensym 21 26) (close _V0iter2_k426) (##string ##string.1115)) ((bruijn iter2 18 5) (bruijn ##k.899 0 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (bruijn x 4 0) (##inline ##sys.cons (bruijn x 4 0) (##inline ##sys.cons (bruijn y 2 0) (quote ()))))) (bruijn cont 13 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 21-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k426, env)}),
      VEncodePointer(&_V10string_D1115.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      _var0,
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->up->vars[0],
      VInlineCons(
upenv->up->up->up->vars[0],
      VInlineCons(
upenv->up->vars[0],
      VNULL
    )

    )

    )

    )
,
      VGetArg(upenv, 13-1, 2)
    );
}
 }
}
static void _V0iter2_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k428, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 11 1) (bruijn ##k.891 7 0) (bruijn ##x.897 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0iter2_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_k425) (close _V0iter2_k428))
V_CALL_FUNC(_V0iter2_k425, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k428, env)})
    );
 }
}
static void _V0iter2_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.28 1 0))) ((bruijn application? 16 1) (close _V0iter2_k424) (bruijn x 2 0)) ((bruijn ##k.891 5 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k424, env)}),
      upenv->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 0)) ((close _V0iter2_k423) (##inline ##sys.car (bruijn ##expr.28 0 0))) ((bruijn ##k.891 4 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter2_k423, env, runtime,
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
static void _V0iter2_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k421, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_k422) (##inline ##sys.cdr (bruijn ##expr.27 1 0)))
V_CALL_FUNC(_V0iter2_k422, env, runtime,
      VInlineCdr(
upenv->vars[0]
    )

    );
 }
}
static void _V0iter2_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.27 0 0)) ((close _V0iter2_k421) (##inline ##sys.car (bruijn ##expr.27 0 0))) ((bruijn ##k.891 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter2_k421, env, runtime,
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
static void _V0iter2_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k419, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.893 0 0) ((close _V0iter2_k420) (##inline ##sys.cdr (bruijn ##expr.26 1 1))) ((bruijn ##k.891 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter2_k420, env, runtime,
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
static void _V0iter2_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda147, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 1)) ((bruijn equal? 14 2) (close _V0iter2_k419) (quote or) (##inline ##sys.car (bruijn ##expr.26 0 1))) ((bruijn ##k.891 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k419, env)}),
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
static void _V0iter2_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k438, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 21 5) (bruijn ##k.882 1 0) (bruijn val 3 0) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.32 6 0)) (quote ())) (##inline ##sys.cons (bruijn ##x.887 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      upenv->vars[0],
      upenv->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCar(
VGetArg(upenv, 6-1, 0)
    )
,
      VNULL
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
static void _V0iter2_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k437, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.881 1 0) ((bruijn iter2 20 5) (close _V0iter2_k438) (##inline ##sys.car (bruijn ##expr.33 4 0)) (bruijn cont 15 2)) ((bruijn iter-combination 20 4) (bruijn ##k.882 0 0) (bruijn expr 15 1) (bruijn cont 15 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k438, env)}),
      VInlineCar(
upenv->up->up->up->vars[0]
    )
,
      VGetArg(upenv, 15-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      _var0,
      VGetArg(upenv, 15-1, 1),
      VGetArg(upenv, 15-1, 2)
    );
}
 }
}
static void _V0iter2_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k439, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 13 1) (bruijn ##k.870 8 0) (bruijn ##x.880 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0iter2_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_k437) (close _V0iter2_k439))
V_CALL_FUNC(_V0iter2_k437, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k439, env)})
    );
 }
}
static void _V0iter2_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k435, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.34 1 0))) ((bruijn application? 18 1) (close _V0iter2_k436) (bruijn val 0 0)) ((bruijn ##k.870 6 0) #f))
if(VDecodeBool(
VInlineNullP(
VInlineCdr(
upenv->vars[0]
    )

    )
)) {
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k436, env)}),
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter2_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.34 0 0)) ((close _V0iter2_k435) (##inline ##sys.car (bruijn ##expr.34 0 0))) ((bruijn ##k.870 5 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter2_k435, env, runtime,
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
static void _V0iter2_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.33 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.33 0 0))) ((close _V0iter2_k434) (##inline ##sys.cdr (bruijn ##expr.29 4 1))) ((bruijn ##k.870 4 0) #f)) ((bruijn ##k.870 4 0) #f))
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
V_CALL_FUNC(_V0iter2_k434, env, runtime,
      VInlineCdr(
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
 }
}
static void _V0iter2_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k432, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.32 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.32 0 0))) ((close _V0iter2_k433) (##inline ##sys.cdr (bruijn ##expr.31 1 0))) ((bruijn ##k.870 3 0) #f)) ((bruijn ##k.870 3 0) #f))
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
V_CALL_FUNC(_V0iter2_k433, env, runtime,
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
static void _V0iter2_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k431, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 0)) ((close _V0iter2_k432) (##inline ##sys.car (bruijn ##expr.31 0 0))) ((bruijn ##k.870 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter2_k432, env, runtime,
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
static void _V0iter2_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 0)) ((close _V0iter2_k431) (##inline ##sys.cdr (bruijn ##expr.30 0 0))) ((bruijn ##k.870 1 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter2_k431, env, runtime,
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
static void _V0iter2_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda148, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.29 0 1)) ((close _V0iter2_k430) (##inline ##sys.car (bruijn ##expr.29 0 1))) ((bruijn ##k.870 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL_FUNC(_V0iter2_k430, env, runtime,
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
static void _V0iter2_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k441, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 6 1) (bruijn ##k.864 5 0) (bruijn ##x.869 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0iter2_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-combination 12 4) (close _V0iter2_k441) (bruijn expr 7 1) (bruijn cont 7 2))
V_CALL(VGetArg(upenv, 12-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k441, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2)
    );
 }
}
static void _V0iter2_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k429, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_lambda148) (close _V0iter2_k440) (bruijn ##input.18 3 1))
V_CALL_FUNC(_V0iter2_lambda148, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k440, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0iter2_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_lambda147) (close _V0iter2_k429) (bruijn ##input.18 2 1))
V_CALL_FUNC(_V0iter2_lambda147, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k429, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0iter2_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter2_lambda146) (close _V0iter2_k418) (bruijn ##input.18 1 1))
V_CALL_FUNC(_V0iter2_lambda146, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k418, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter2_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda144, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter2_lambda145) (close _V0iter2_k397) (bruijn ##input.18 0 1))
V_CALL_FUNC(_V0iter2_lambda145, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k397, env)}),
      _var1
    );
 }
}
static void _V0iter2_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter2_lambda143, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda143, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter2_lambda144) (bruijn ##k.863 0 0) (bruijn expr 2 1))
V_CALL_FUNC(_V0iter2_lambda144, env, runtime,
      _var0,
      upenv->up->vars[1]
    );
 }
}
static void _V0iter2_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k442, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.861 2 0) (##inline ##sys.cons (bruijn cont 2 2) (##inline ##sys.cons (bruijn ##x.972 0 0) (quote ()))))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
upenv->up->vars[2],
      VInlineCons(
_var0,
      VNULL
    )

    )

    );
 }
}
static void _V0iter2_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter2_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.862 0 0) ((bruijn call/cc 9 1) (bruijn ##k.861 1 0) (close _V0iter2_lambda143)) ((bruijn iter-atom 6 3) (close _V0iter2_k442) (bruijn expr 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_lambda143, env)})
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k442, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0iter2_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter2_lambda142, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter2_lambda142, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn application? 5 1) (close _V0iter2_k386) (bruijn expr 0 1))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_k386, env)}),
      _var1
    );
 }
}
static void _V0to__cps_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__cps_k377) (bruijn iter2 4 5) (close _V0iter2_lambda142))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k377, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter2_lambda142, env)})
    );
 }
}
static void _V0iter__combination_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__combination_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__combination_k443, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.974 1 0) (quote ()) (bruijn args 2 1))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VNULL,
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k447, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.976 4 0) (##inline ##sys.cons (bruijn ##x.978 1 0) (##inline ##sys.cons (bruijn cont 6 2) (bruijn ##x.980 0 0))))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons(
upenv->vars[0],
      VInlineCons(
VGetArg(upenv, 6-1, 2),
      _var0
    )

    )

    );
 }
}
static void _V0loop_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k446, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 12 18) (close _V0loop_k447) (bruijn appl 1 0))
V_CALL(VGetArg(upenv, 12-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k447, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0loop_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k445, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 11 11) (close _V0loop_k446) (bruijn appl 0 0))
V_CALL(VGetArg(upenv, 11-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k446, env)}),
      _var0
    );
 }
}
static void _V0loop_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k454, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter2 14 5) (bruijn ##k.976 8 0) (bruijn ##x.982 3 0) (##inline ##sys.cons (quote continuation) (##inline ##sys.cons (##inline ##sys.cons (bruijn x 4 0) (quote ())) (##inline ##sys.cons (bruijn ##x.987 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->vars[0],
      VInlineCons(
VEncodePointer(&_V0continuation.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
upenv->up->up->up->vars[0],
      VNULL
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
static void _V0loop_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k453, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 8 1) (close _V0loop_k454) (bruijn ##x.988 1 0) (bruijn ##x.989 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k454, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 15 18) (close _V0loop_k453) (bruijn args 6 2))
V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k453, env)}),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k451, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 14 8) (close _V0loop_k452) (bruijn x 1 0) (bruijn appl 5 1))
V_CALL(VGetArg(upenv, 14-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k452, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0loop_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k450, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 13 11) (close _V0loop_k451) (bruijn args 4 2))
V_CALL(VGetArg(upenv, 13-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k451, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0loop_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k458, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 1) (bruijn ##k.976 7 0) (bruijn ##x.990 1 0) (bruijn ##x.991 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 15 18) (close _V0loop_k458) (bruijn args 6 2))
V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k458, env)}),
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0loop_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 14 8) (close _V0loop_k457) (bruijn ##x.992 0 0) (bruijn appl 5 1))
V_CALL(VGetArg(upenv, 14-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k457, env)}),
      _var0,
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0loop_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k455, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter-atom 10 3) (close _V0loop_k456) (bruijn ##x.993 0 0))
V_CALL(VGetArg(upenv, 10-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k456, env)}),
      _var0
    );
 }
}
static void _V0loop_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k449, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.981 0 0) ((bruijn gensym 12 26) (close _V0loop_k450) (##string ##string.1117)) ((bruijn car 12 11) (close _V0loop_k455) (bruijn args 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k450, env)}),
      VEncodePointer(&_V10string_D1117.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 12-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k455, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0loop_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k448, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn application? 8 1) (close _V0loop_k449) (bruijn ##x.994 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k449, env)}),
      _var0
    );
 }
}
static void _V0loop_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.977 0 0) ((bruijn reverse 10 5) (close _V0loop_k445) (bruijn appl 1 1)) ((bruijn car 10 11) (close _V0loop_k448) (bruijn args 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k445, env)}),
      upenv->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 10-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k448, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0loop_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda151, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda151, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 9 27) (close _V0loop_k444) (bruijn args 0 2))
V_CALL(VGetArg(upenv, 9-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k444, env)}),
      _var2
    );
 }
}
static void _V0iter__combination_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__combination_lambda150, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter__combination_k443) (bruijn loop 0 1) (close _V0loop_lambda151))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__combination_k443, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda151, env)})
    );
 }
}
static void _V0iter__combination_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__combination_lambda149, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__combination_lambda149, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0iter__combination_lambda150) (bruijn ##k.973 0 0) #f)
V_CALL_FUNC(_V0iter__combination_lambda150, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0to__cps_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__cps_k376) (bruijn iter-combination 3 4) (close _V0iter__combination_lambda149))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k376, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__combination_lambda149, env)})
    );
 }
}
static void _V0iter__atom_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k464, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 7 1) (bruijn ##k.1046 5 0) (bruijn ##x.1052 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0iter__atom_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k463, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 15 8) (close _V0iter__atom_k464) (quote lambda) (bruijn ##x.1053 0 0))
V_CALL(VGetArg(upenv, 15-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k464, env)}),
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0iter__atom_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k462, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.5 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.5 0 0))) ((bruijn iter-lambda 7 1) (close _V0iter__atom_k463) (##inline ##sys.car (bruijn ##expr.4 1 0)) (##inline ##sys.car (bruijn ##expr.5 0 0))) ((bruijn ##k.1046 3 0) #f)) ((bruijn ##k.1046 3 0) #f))
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
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k463, env)}),
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
static void _V0iter__atom_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k461, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 0)) ((close _V0iter__atom_k462) (##inline ##sys.cdr (bruijn ##expr.4 0 0))) ((bruijn ##k.1046 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL_FUNC(_V0iter__atom_k462, env, runtime,
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
static void _V0iter__atom_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k460, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1048 0 0) ((close _V0iter__atom_k461) (##inline ##sys.cdr (bruijn ##expr.3 1 1))) ((bruijn ##k.1046 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k461, env, runtime,
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
static void _V0iter__atom_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda156, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.3 0 1)) ((bruijn equal? 11 2) (close _V0iter__atom_k460) (quote lambda) (##inline ##sys.car (bruijn ##expr.3 0 1))) ((bruijn ##k.1046 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k460, env)}),
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
static void _V0iter__atom_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k467, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.1019 1 0) (##inline ##sys.cdr (bruijn ##expr.6 5 1)) (quote ()) (quote ()))
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
VGetArg(upenv, 5-1, 1)
    )
,
      VNULL,
      VNULL
    );
 }
}
static void _V0loop_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k470, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.10 5 1) (bruijn ##k.1037 2 0) (bruijn ##expr.12 3 1) (bruijn ##x.1038 1 0) (bruijn ##x.1039 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 19 5) (close _V0loop_k470) (bruijn ##body.9 2 3))
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k470, env)}),
      upenv->up->vars[3]
    );
 }
}
static void _V0loop_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.12 1 1))) ((bruijn reverse 18 5) (close _V0loop_k469) (bruijn ##args.8 1 2)) ((bruijn ##k.1037 0 0) #f))
if(VDecodeBool(
VInlineNot(
VInlinePairP(
upenv->vars[1]
    )

    )
)) {
V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k469, env)}),
      upenv->vars[2]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k474, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.14 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.14 0 0))) ((bruijn ##kk.11 3 1) (bruijn ##k.1029 1 0) (##inline ##sys.cdr (bruijn ##expr.12 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.13 2 0)) (bruijn ##args.8 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.14 0 0)) (bruijn ##body.9 6 3))) ((bruijn ##k.1029 1 0) #f)) ((bruijn ##k.1029 1 0) #f))
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
static void _V0loop_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.13 1 0)) ((close _V0loop_k474) (##inline ##sys.cdr (bruijn ##expr.13 1 0))) ((bruijn ##k.1029 0 0) #f))
if(VDecodeBool(
VInlinePairP(
upenv->vars[0]
    )
)) {
V_CALL_FUNC(_V0loop_k474, env, runtime,
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
static void _V0loop_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k477, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.10 9 1) (bruijn ##k.1024 4 0) (bruijn ##expr.12 7 1) (bruijn ##x.1026 1 0) (bruijn ##x.1027 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 23 5) (close _V0loop_k477) (bruijn ##body.9 6 3))
V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k477, env)}),
      VGetArg(upenv, 6-1, 3)
    );
 }
}
static void _V0loop_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k475, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn reverse 22 5) (close _V0loop_k476) (bruijn ##args.8 5 2))
V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k476, env)}),
      VGetArg(upenv, 5-1, 2)
    );
 }
}
static void _V0loop_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k472, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_k473) (close _V0loop_k475))
V_CALL_FUNC(_V0loop_k473, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k475, env)})
    );
 }
}
static void _V0loop_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda163, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda163, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k472) (##inline ##sys.car (bruijn ##expr.12 3 1)))
V_CALL_FUNC(_V0loop_k472, env, runtime,
      VInlineCar(
upenv->up->up->vars[1]
    )

    );
 }
}
static void _V0loop_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 1) (bruijn ##k.1023 0 0) (close _V0loop_lambda163))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda163, env)})
    );
 }
}
static void _V0loop_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k471, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call-with-values 18 4) (bruijn ##k.1021 1 0) (close _V0loop_lambda162) (bruijn loop 2 1))
V_CALL(VGetArg(upenv, 18-1, 4), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda162, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0loop_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda161, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda161, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k468) (close _V0loop_k471))
V_CALL_FUNC(_V0loop_k468, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k471, env)})
    );
 }
}
static void _V0iter__atom_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda160, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter__atom_k467) (bruijn loop 0 1) (close _V0loop_lambda161))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k467, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda161, env)})
    );
 }
}
static void _V0iter__atom_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda159, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda159, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda160) (bruijn ##k.1018 0 0) #f)
V_CALL_FUNC(_V0iter__atom_lambda160, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0iter__atom_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_lambda158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 14 1) (bruijn ##k.1017 0 0) (close _V0iter__atom_lambda159))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda159, env)})
    );
 }
}
static void _V0iter__atom_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k479, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 7 1) (bruijn ##k.1041 2 0) (bruijn ##x.1043 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter__atom_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k478, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 15 8) (close _V0iter__atom_k479) (quote case-lambda) (bruijn ##x.1044 0 0))
V_CALL(VGetArg(upenv, 15-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k479, env)}),
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0iter__atom_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0iter__atom_lambda164, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda164, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 14 3) (close _V0iter__atom_k478) (bruijn iter-lambda 7 1) (bruijn args 0 2) (bruijn body 0 3)) ((bruijn ##k.1041 0 0) #f))
if(VDecodeBool(
VInlineNullP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k478, env)}),
      VGetArg(upenv, 7-1, 1),
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
static void _V0iter__atom_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k466, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1016 0 0) ((bruijn call-with-values 13 4) (bruijn ##k.1014 1 0) (close _V0iter__atom_lambda158) (close _V0iter__atom_lambda164)) ((bruijn ##k.1014 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda158, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda164, env)})
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda157, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.6 0 1)) ((bruijn equal? 12 2) (close _V0iter__atom_k466) (quote case-lambda) (##inline ##sys.car (bruijn ##expr.6 0 1))) ((bruijn ##k.1014 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 12-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k466, env)}),
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
static void _V0iter__atom_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k482, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.16 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.16 0 0))) ((bruijn ##kk.1 6 1) (bruijn ##k.1007 2 0) (bruijn x 9 1)) ((bruijn ##k.1007 2 0) #f)) ((bruijn ##k.1007 2 0) #f))
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
      upenv->up->vars[0],
      VGetArg(upenv, 9-1, 1)
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
static void _V0iter__atom_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k481, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1009 0 0) ((close _V0iter__atom_k482) (##inline ##sys.cdr (bruijn ##expr.15 1 1))) ((bruijn ##k.1007 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0iter__atom_k482, env, runtime,
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
static void _V0iter__atom_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda165, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.15 0 1)) ((bruijn equal? 13 2) (close _V0iter__atom_k481) (quote quote) (##inline ##sys.car (bruijn ##expr.15 0 1))) ((bruijn ##k.1007 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k481, env)}),
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
static void _V0iter__atom_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k485, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 6 1) (bruijn ##k.1005 1 0) (bruijn ##x.1006 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0iter__atom_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k484, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (bruijn ##input.2 4 1)) ((bruijn error 14 9) (close _V0iter__atom_k485) (##string ##string.1118)) ((bruijn ##k.1005 0 0) #f))
if(VDecodeBool(
VInlineNullP(
upenv->up->up->up->vars[1]
    )
)) {
V_CALL(VGetArg(upenv, 14-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k485, env)}),
      VEncodePointer(&_V10string_D1118.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0iter__atom_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k486, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 5 1) (bruijn ##k.999 4 0) (bruijn x 8 1))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0iter__atom_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k483, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_k484) (close _V0iter__atom_k486))
V_CALL_FUNC(_V0iter__atom_k484, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k486, env)})
    );
 }
}
static void _V0iter__atom_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k480, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda165) (close _V0iter__atom_k483) (bruijn ##input.2 2 1))
V_CALL_FUNC(_V0iter__atom_lambda165, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k483, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0iter__atom_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter__atom_lambda157) (close _V0iter__atom_k480) (bruijn ##input.2 1 1))
V_CALL_FUNC(_V0iter__atom_lambda157, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k480, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0iter__atom_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda155, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda156) (close _V0iter__atom_k465) (bruijn ##input.2 0 1))
V_CALL_FUNC(_V0iter__atom_lambda156, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k465, env)}),
      _var1
    );
 }
}
static void _V0iter__atom_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda154, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda154, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda155) (bruijn ##k.998 0 0) (bruijn x 3 1))
V_CALL_FUNC(_V0iter__atom_lambda155, env, runtime,
      _var0,
      upenv->up->up->vars[1]
    );
 }
}
static void _V0iter__atom_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__atom_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_k459, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 8 1) (bruijn ##k.996 1 0) (close _V0iter__atom_lambda154))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda154, env)})
    );
 }
}
static void _V0iter__lambda_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k488, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1056 2 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 1 0) (bruijn args 2 1)) (##inline ##sys.cons (bruijn ##x.1059 0 0) (quote ()))))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
VInlineCons(
upenv->vars[0],
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
static void _V0iter__lambda_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0iter__lambda_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter2 6 5) (close _V0iter__lambda_k488) (bruijn body 1 2) (bruijn k 0 0))
V_CALL(VGetArg(upenv, 6-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k488, env)}),
      upenv->vars[2],
      _var0
    );
 }
}
static void _V0iter__lambda_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0iter__lambda_lambda166, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__lambda_lambda166, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn gensym 8 26) (close _V0iter__lambda_k487) (##string ##string.1116))
V_CALL(VGetArg(upenv, 8-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_k487, env)}),
      VEncodePointer(&_V10string_D1116.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0iter__atom_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda153, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0iter__atom_k459) (bruijn iter-lambda 0 1) (close _V0iter__lambda_lambda166))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_k459, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__lambda_lambda166, env)})
    );
 }
}
static void _V0iter__atom_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0iter__atom_lambda152, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter__atom_lambda152, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0iter__atom_lambda153) (bruijn ##k.995 0 0) #f)
V_CALL_FUNC(_V0iter__atom_lambda153, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0to__cps_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__cps_k375) (bruijn iter-atom 2 3) (close _V0iter__atom_lambda152))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k375, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter__atom_lambda152, env)})
    );
 }
}
static void _V0combination_Q_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0combination_Q_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0combination_Q_k491, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 8 16) (bruijn ##k.1060 3 0) (bruijn ##x.1062 0 0))
V_CALL(VGetArg(upenv, 8-1, 16), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0combination_Q_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0combination_Q_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0combination_Q_k490, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn memv 7 29) (close _V0combination_Q_k491) (bruijn ##x.1063 0 0) (##inline ##sys.qcons (quote quote) (##inline ##sys.qcons (quote lambda) (##inline ##sys.qcons (quote case-lambda) (##inline ##sys.qcons (quote begin) (##inline ##sys.qcons (quote if) (##inline ##sys.qcons (quote or) (quote ()))))))))
V_CALL(VGetArg(upenv, 7-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0combination_Q_k491, env)}),
      _var0,
      VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0or.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    )

    )

    )

    )

    );
 }
}
static void _V0combination_Q_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0combination_Q_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0combination_Q_k489, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1061 0 0) ((bruijn car 6 11) (close _V0combination_Q_k490) (bruijn x 1 1)) ((bruijn ##k.1060 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0combination_Q_k490, env)}),
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0combination_Q_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0combination_Q_lambda167, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0combination_Q_lambda167, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 5 17) (close _V0combination_Q_k489) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0combination_Q_k489, env)}),
      _var1
    );
 }
}
static void _V0to__cps_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0to__cps_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0to__cps_k374) (bruijn combination? 1 2) (close _V0combination_Q_lambda167))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k374, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0combination_Q_lambda167, env)})
    );
 }
}
static void _V0application_Q_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0application_Q_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0application_Q_k494, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 7 16) (bruijn ##k.1070 3 0) (bruijn ##x.1072 0 0))
V_CALL(VGetArg(upenv, 7-1, 16), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0application_Q_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0application_Q_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0application_Q_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn memv 6 29) (close _V0application_Q_k494) (bruijn ##x.1073 0 0) (##inline ##sys.qcons (quote quote) (##inline ##sys.qcons (quote lambda) (##inline ##sys.qcons (quote case-lambda) (quote ())))))
V_CALL(VGetArg(upenv, 6-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0application_Q_k494, env)}),
      _var0,
      VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER),
      VNULL
    )

    )

    )

    );
 }
}
static void _V0application_Q_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0application_Q_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0application_Q_k492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.1071 0 0) ((bruijn car 5 11) (close _V0application_Q_k493) (bruijn x 1 1)) ((bruijn ##k.1070 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0application_Q_k493, env)}),
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0application_Q_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0application_Q_lambda168, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0application_Q_lambda168, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 4 17) (close _V0application_Q_k492) (bruijn x 0 1))
V_CALL(upenv->up->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0application_Q_k492, env)}),
      _var1
    );
 }
}
static void _V0to__cps_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_lambda137, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
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
  // (set! (close _V0to__cps_k373) (bruijn application? 0 1) (close _V0application_Q_lambda168))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_k373, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0application_Q_lambda168, env)})
    );
 }
}
static void _V0to__cps_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0to__cps_lambda136, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0to__cps_lambda136, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0to__cps_lambda137) (bruijn ##k.835 0 0) #f #f #f #f #f #f)
V_CALL_FUNC(_V0to__cps_lambda137, env, runtime,
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
static void cps_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19) {
 V_GC_CHECK2_VARARGS((VFunc)cps_lambda3, runtime, upenv, 20, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19) {
  struct { VEnv env; VWORD argv[20]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 20; env->var_len = 20; env->up = upenv;
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
  // (set! (close cps_k36) (bruijn to-cps 0 1) (close _V0to__cps_lambda136))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k36, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0to__cps_lambda136, env)})
    );
 }
}
static void cps_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30) {
 V_GC_CHECK2_VARARGS((VFunc)cps_lambda2, runtime, upenv, 31, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30) {
  struct { VEnv env; VWORD argv[31]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 31; env->var_len = 31; env->up = upenv;
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
  // ((close cps_lambda3) (bruijn ##k.187 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(cps_lambda3, env, runtime,
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
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void cps_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close cps_lambda2) (bruijn ##k.186 35 0) (bruijn ##x.1077 29 0) (bruijn ##x.1078 28 0) (bruijn ##x.1079 27 0) (bruijn ##x.1080 26 0) (bruijn ##x.1081 25 0) (bruijn ##x.1082 24 0) (bruijn ##x.1083 23 0) (bruijn ##x.1084 22 0) (bruijn ##x.1085 21 0) (bruijn ##x.1086 20 0) (bruijn ##x.1087 19 0) (bruijn ##x.1088 18 0) (bruijn ##x.1089 17 0) (bruijn ##x.1090 16 0) (bruijn ##x.1091 15 0) (bruijn ##x.1092 14 0) (bruijn ##x.1093 13 0) (bruijn ##x.1094 12 0) (bruijn ##x.1095 11 0) (bruijn ##x.1096 10 0) (bruijn ##x.1097 9 0) (bruijn ##x.1098 8 0) (bruijn ##x.1099 7 0) (bruijn ##x.1100 6 0) (bruijn ##x.1101 5 0) (bruijn ##x.1102 4 0) (bruijn ##x.1103 3 0) (bruijn ##x.1104 2 0) (bruijn ##x.1105 1 0) (bruijn ##x.1106 0 0))
V_CALL_FUNC(cps_lambda2, env, runtime,
      VGetArg(upenv, 35-1, 0),
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
static void cps_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 29 0) (close cps_k35) (quote cadr))
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k35, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 0) (close cps_k34) (quote memv))
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k34, env)}),
      VEncodePointer(&_V0memv.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close cps_k33) (quote apply))
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k33, env)}),
      VEncodePointer(&_V0apply.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close cps_k32) (quote null?))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k32, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close cps_k31) (quote gensym))
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k31, env)}),
      VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close cps_k30) (quote string-ref))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k30, env)}),
      VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close cps_k29) (quote eq?))
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k29, env)}),
      VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close cps_k28) (quote string->symbol))
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k28, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close cps_k27) (quote substring))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k27, env)}),
      VEncodePointer(&_V0substring.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close cps_k26) (quote symbol->string))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k26, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close cps_k25) (quote fold))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k25, env)}),
      VEncodePointer(&_V0fold.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close cps_k24) (quote +))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k24, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close cps_k23) (quote cdr))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k23, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close cps_k22) (quote pair?))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k22, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close cps_k21) (quote not))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k21, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close cps_k20) (quote length))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k20, env)}),
      VEncodePointer(&_V0length.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close cps_k19) (quote <=))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k19, env)}),
      VEncodePointer(&_V0_L_E.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close cps_k18) (quote =))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k18, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close cps_k17) (quote eqv?))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k17, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close cps_k16) (quote car))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k16, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close cps_k15) (quote atom?))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k15, env)}),
      VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close cps_k14) (quote error))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k14, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close cps_k13) (quote cons))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k13, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close cps_k12) (quote symbol?))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k12, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close cps_k11) (quote lookup-inline))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k11, env)}),
      VEncodePointer(&_V0lookup__inline.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close cps_k10) (quote reverse))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k10, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close cps_k9) (quote call-with-values))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k9, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close cps_k8) (quote map))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k8, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close cps_k7) (quote equal?))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k7, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close cps_k6) (quote call/cc))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k6, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close cps_k5) (##string ##string.1119) (bruijn ##x.1107 3 0) (bruijn ##x.1108 2 0) (bruijn ##x.1109 1 0) (bruijn ##x.1110 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k5, env)}),
      VEncodePointer(&_V10string_D1119.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void cps_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close cps_k4) (##string ##string.1120))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k4, env)}),
      VEncodePointer(&_V10string_D1120.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close cps_k3) (##string ##string.1121))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k3, env)}),
      VEncodePointer(&_V10string_D1121.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close cps_k2) (##string ##string.1122))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k2, env)}),
      VEncodePointer(&_V10string_D1122.sym, VPOINTER_OTHER)
    );
 }
}
static void cps_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to cps_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)cps_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close cps_k1) (##string ##string.1123))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)cps_k1, env)}),
      VEncodePointer(&_V10string_D1123.sym, VPOINTER_OTHER)
    );
 }
}
VFunc cps = (VFunc)cps_lambda1;
