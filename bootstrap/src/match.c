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
static struct { VBlob sym; char bytes[21]; } _V10string_D298 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[6]; } _V10string_D297 = { { VSTRING, 6 }, "utils" };
static struct { VBlob sym; char bytes[6]; } _V10string_D296 = { { VSTRING, 6 }, "match" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[6]; } _V0cadar = { { VSYMBOL, 6 }, "cadar" };
static struct { VBlob sym; char bytes[6]; } _V0cddar = { { VSYMBOL, 6 }, "cddar" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[6]; } _V0atom_Q = { { VSYMBOL, 6 }, "atom\?" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[8]; } _V0vector_Q = { { VSYMBOL, 8 }, "vector\?" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[5]; } _V0cddr = { { VSYMBOL, 5 }, "cddr" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[5]; } _V0cdar = { { VSYMBOL, 5 }, "cdar" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[5]; } _V0caar = { { VSYMBOL, 5 }, "caar" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[7]; } _V0gensym = { { VSYMBOL, 7 }, "gensym" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dcons = { { VSYMBOL, 11 }, "##sys.cons" };
static struct { VBlob sym; char bytes[8]; } _V0reverse = { { VSYMBOL, 8 }, "reverse" };
static struct { VBlob sym; char bytes[10]; } _V0tail__expr = { { VSYMBOL, 10 }, "tail-expr" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dnot = { { VSYMBOL, 10 }, "##sys.not" };
static struct { VBlob sym; char bytes[5]; } _V0loop = { { VSYMBOL, 5 }, "loop" };
static struct { VBlob sym; char bytes[17]; } _V0call__with__values = { { VSYMBOL, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[2]; } _V0_U = { { VSYMBOL, 2 }, "_" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dcdr = { { VSYMBOL, 10 }, "##sys.cdr" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dcar = { { VSYMBOL, 10 }, "##sys.car" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dpair_Q = { { VSYMBOL, 12 }, "##sys.pair\?" };
static struct { VBlob sym; char bytes[5]; } _V10string_D295 = { { VSTRING, 5 }, "expr" };
static struct { VBlob sym; char bytes[4]; } _V0_D_D_D = { { VSYMBOL, 4 }, "..." };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[16]; } _V10string_D294 = { { VSTRING, 16 }, "malformed quote" };
static struct { VBlob sym; char bytes[6]; } _V0quote = { { VSYMBOL, 6 }, "quote" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Deq_Q = { { VSYMBOL, 10 }, "##sys.eq\?" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dnull_Q = { { VSYMBOL, 12 }, "##sys.null\?" };
static struct { VBlob sym; char bytes[3]; } _V0if = { { VSYMBOL, 3 }, "if" };
static struct { VBlob sym; char bytes[20]; } _V10string_D293 = { { VSTRING, 20 }, "not implemented yet" };
static struct { VBlob sym; char bytes[3]; } _V10string_D292 = { { VSTRING, 3 }, "kk" };
static struct { VBlob sym; char bytes[6]; } _V10string_D291 = { { VSTRING, 6 }, "input" };
static struct { VBlob sym; char bytes[4]; } _V0let = { { VSYMBOL, 4 }, "let" };
static struct { VBlob sym; char bytes[7]; } _V0lambda = { { VSYMBOL, 7 }, "lambda" };
static struct { VBlob sym; char bytes[8]; } _V0call_Wcc = { { VSYMBOL, 8 }, "call/cc" };
static struct { VBlob sym; char bytes[5]; } _V0else = { { VSYMBOL, 5 }, "else" };
static struct { VBlob sym; char bytes[6]; } _V0begin = { { VSYMBOL, 6 }, "begin" };
static struct { VBlob sym; char bytes[17]; } _V10string_D290 = { { VSTRING, 17 }, "no matching case" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[16]; } _V0transform__match = { { VSYMBOL, 16 }, "transform-match" };
static void match_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k25, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.3 2 0) (##inline ##sys.cons (##inline ##sys.cons (quote transform-match) (bruijn transform-match 2 2)) (quote ())))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0transform__match.sym, VPOINTER_OTHER),
      upenv->up->vars[2]
    )
,
      VNULL
    )

    );
 }
}
static void _V0transform__match_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0transform__match_k32, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.21 2 0) (bruijn ##x.23 0 0))
V_CALL(upenv->up->vars[1], runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0transform__match_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0transform__match_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 12 13) (close _V0transform__match_k32) (bruijn expr 9 1))
V_CALL(VGetArg(upenv, 12-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0transform__match_k32, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0loop_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k36, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.24 4 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 7 1) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (bruijn ##x.32 0 0)) (quote ()))) (quote ())))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons(
VInlineCons(
VGetArg(upenv, 7-1, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      _var0
    )
,
      VNULL
    )

    )
,
      VNULL
    )

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
  // ((bruijn cons 22 15) (bruijn ##k.24 10 0) (bruijn ##x.33 2 0) (bruijn ##x.34 0 0))
V_CALL(VGetArg(upenv, 22-1, 15), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 10 1) (close _V0loop_k43) (bruijn ##x.35 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k43, env)}),
      _var0
    );
 }
}
static void _V0loop_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 20 19) (close _V0loop_k42) (bruijn patterns 8 1))
V_CALL(VGetArg(upenv, 20-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k42, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0loop_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 15 2) (close _V0loop_k41) (bruijn ##x.36 3 0) (bruijn ##x.37 1 0) (##inline ##sys.cons (bruijn k 10 1) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (bruijn ##x.41 0 0)) (quote ()))))
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k41, env)}),
      upenv->up->up->vars[0],
      upenv->vars[0],
      VInlineCons(
VGetArg(upenv, 10-1, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0begin.sym, VPOINTER_OTHER),
      _var0
    )
,
      VNULL
    )

    )

    );
 }
}
static void _V0loop_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 18 16) (close _V0loop_k40) (bruijn patterns 6 1))
V_CALL(VGetArg(upenv, 18-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k40, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0loop_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 17 17) (close _V0loop_k39) (bruijn ##x.42 0 0))
V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k39, env)}),
      _var0
    );
 }
}
static void _V0loop_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caar 16 18) (close _V0loop_k38) (bruijn patterns 4 1))
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k38, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.28 0 0) ((bruijn cdar 15 16) (close _V0loop_k36) (bruijn patterns 3 1)) ((bruijn list 15 17) (close _V0loop_k37) (bruijn input 6 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k36, env)}),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k37, env)}),
      VGetArg(upenv, 6-1, 2)
    );
}
 }
}
static void _V0loop_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 11 2) (close _V0loop_k35) (bruijn ##x.43 0 0) (quote else))
V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k35, env)}),
      _var0,
      VEncodePointer(&_V0else.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.25 0 0) ((bruijn ##k.24 1 0) (##inline ##sys.qcons (##inline ##sys.qcons (quote error) (##inline ##sys.qcons (quote (##string ##string.290)) (quote ()))) (quote ()))) ((bruijn caar 13 18) (close _V0loop_k34) (bruijn patterns 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D290.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VNULL
    )

    );
} else {
V_CALL(VGetArg(upenv, 13-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k34, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 12 14) (close _V0loop_k33) (bruijn patterns 0 1))
V_CALL(VGetArg(upenv, 12-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k33, env)}),
      _var1
    );
 }
}
static void _V0transform__match_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V0transform__match_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0transform__match_k31) (bruijn loop 0 1) (close _V0loop_lambda8))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0transform__match_k31, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda8, env)})
    );
 }
}
static void _V0transform__match_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0transform__match_k44, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.11 2 0) (##inline ##sys.cons (quote call/cc) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 2 1) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn input 2 2) (##inline ##sys.cons (bruijn ##x.46 1 0) (quote ()))) (quote ())) (bruijn ##x.20 0 0))) (quote ())))) (quote ()))))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
upenv->up->vars[1],
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
upenv->up->vars[2],
      VInlineCons(
upenv->vars[0],
      VNULL
    )

    )
,
      VNULL
    )
,
      _var0
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

    );
 }
}
static void _V0transform__match_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0transform__match_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0transform__match_lambda7) (close _V0transform__match_k44) #f)
V_CALL_FUNC(_V0transform__match_lambda7, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0transform__match_k44, env)}),
      VEncodeBool(false)
    );
 }
}
static void _V0transform__match_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V0transform__match_lambda6, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn cadr 9 12) (close _V0transform__match_k30) (bruijn expr 6 1))
V_CALL(VGetArg(upenv, 9-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0transform__match_k30, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0transform__match_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0transform__match_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0transform__match_lambda6) (bruijn ##k.8 4 0) (bruijn ##x.47 1 0) (bruijn ##x.48 0 0))
V_CALL_FUNC(_V0transform__match_lambda6, env, runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0transform__match_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0transform__match_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gensym 7 20) (close _V0transform__match_k29) (##string ##string.291))
V_CALL(VGetArg(upenv, 7-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0transform__match_k29, env)}),
      VEncodePointer(&_V10string_D291.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0transform__match_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0transform__match_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gensym 6 20) (close _V0transform__match_k28) (##string ##string.292))
V_CALL(VGetArg(upenv, 6-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0transform__match_k28, env)}),
      VEncodePointer(&_V10string_D292.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__iter_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k49, runtime, upenv, 1, argc, _var0) {
  // ((bruijn match-iter 7 2) (bruijn ##k.49 5 0) (bruijn ##x.52 1 0) (bruijn ##x.53 0 0) (bruijn success-expr 5 3))
V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 3)
    );
 }
}
static void _V0match__iter_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 10 19) (close _V0match__iter_k49) (bruijn pattern-stack 4 2))
V_CALL(VGetArg(upenv, 10-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k49, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0match__iter_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k56, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.49 10 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn ##x.62 4 0) (##inline ##sys.cons (bruijn ##x.64 3 0) (quote ()))) (quote ())) (##inline ##sys.cons (bruijn ##x.58 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
upenv->up->up->up->vars[0],
      VInlineCons(
upenv->up->up->vars[0],
      VNULL
    )

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
static void _V0match__iter_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 11 2) (close _V0match__iter_k56) (bruijn ##x.59 1 0) (bruijn ##x.60 0 0) (bruijn success-expr 9 3))
V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k56, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 9-1, 3)
    );
 }
}
static void _V0match__iter_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 14 19) (close _V0match__iter_k55) (bruijn pattern-stack 8 2))
V_CALL(VGetArg(upenv, 14-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k55, env)}),
      VGetArg(upenv, 8-1, 2)
    );
 }
}
static void _V0match__iter_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 13 19) (close _V0match__iter_k54) (bruijn expr-stack 7 1))
V_CALL(VGetArg(upenv, 13-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k54, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0match__iter_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 12 4) (close _V0match__iter_k53) (bruijn expr-stack 6 1))
V_CALL(VGetArg(upenv, 12-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k53, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0match__iter_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k64, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.49 13 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.null?) (##inline ##sys.cons (bruijn ##x.74 3 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.70 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dnull_Q.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[0],
      VNULL
    )

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
static void _V0match__iter_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 14 2) (close _V0match__iter_k64) (bruijn ##x.71 1 0) (bruijn ##x.72 0 0) (bruijn success-expr 12 3))
V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k64, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 12-1, 3)
    );
 }
}
static void _V0match__iter_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 17 19) (close _V0match__iter_k63) (bruijn pattern-stack 11 2))
V_CALL(VGetArg(upenv, 17-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k63, env)}),
      VGetArg(upenv, 11-1, 2)
    );
 }
}
static void _V0match__iter_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 16 19) (close _V0match__iter_k62) (bruijn expr-stack 10 1))
V_CALL(VGetArg(upenv, 16-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k62, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0match__iter_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k73, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.49 18 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.eq?) (##inline ##sys.cons (bruijn ##x.84 4 0) (##inline ##sys.cons (bruijn ##x.86 3 0) (quote ())))) (##inline ##sys.cons (bruijn ##x.80 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Deq_Q.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->up->vars[0],
      VInlineCons(
upenv->up->up->vars[0],
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

    );
 }
}
static void _V0match__iter_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 19 2) (close _V0match__iter_k73) (bruijn ##x.81 1 0) (bruijn ##x.82 0 0) (bruijn success-expr 17 3))
V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k73, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 17-1, 3)
    );
 }
}
static void _V0match__iter_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 22 19) (close _V0match__iter_k72) (bruijn pattern-stack 16 2))
V_CALL(VGetArg(upenv, 22-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k72, env)}),
      VGetArg(upenv, 16-1, 2)
    );
 }
}
static void _V0match__iter_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 21 19) (close _V0match__iter_k71) (bruijn expr-stack 15 1))
V_CALL(VGetArg(upenv, 21-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k71, env)}),
      VGetArg(upenv, 15-1, 1)
    );
 }
}
static void _V0match__iter_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 20 4) (close _V0match__iter_k70) (bruijn expr-stack 14 1))
V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k70, env)}),
      VGetArg(upenv, 14-1, 1)
    );
 }
}
static void _V0match__iter_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k77, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 20 2) (bruijn ##k.152 1 0) (bruijn ##x.153 0 0) (quote quote))
V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__iter_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.151 1 0) ((bruijn caar 22 18) (close _V0match__iter_k77) (bruijn pattern-stack 16 2)) ((bruijn ##k.152 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 22-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k77, env)}),
      VGetArg(upenv, 16-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0match__iter_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k84, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 28 7) (bruijn ##k.104 2 0) (bruijn ##x.105 0 0))
V_CALL(VGetArg(upenv, 28-1, 7), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0match__iter_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 27 14) (close _V0match__iter_k84) (bruijn ##x.106 0 0))
V_CALL(VGetArg(upenv, 27-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k84, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.103 1 0) ((bruijn ##k.104 0 0) (bruijn ##p.103 1 0)) ((bruijn cddar 26 6) (close _V0match__iter_k83) (bruijn pattern-stack 20 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 26-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k83, env)}),
      VGetArg(upenv, 20-1, 2)
    );
}
 }
}
static void _V0match__iter_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k86, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.101 1 0) ((bruijn error 27 2) (bruijn ##k.102 0 0) (##string ##string.294)) ((bruijn ##k.102 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 27-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10string_D294.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0match__iter_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k92, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.49 26 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn ##x.100 4 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.98 3 0) (quote ())))) (##inline ##sys.cons (bruijn ##x.92 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0quote.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->up->vars[0],
      VNULL
    )

    )
,
      VInlineCons(
upenv->up->up->vars[0],
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

    );
 }
}
static void _V0match__iter_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 27 2) (close _V0match__iter_k92) (bruijn ##x.93 1 0) (bruijn ##x.94 0 0) (bruijn success-expr 25 3))
V_CALL(VGetArg(upenv, 27-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k92, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 25-1, 3)
    );
 }
}
static void _V0match__iter_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 30 19) (close _V0match__iter_k91) (bruijn pattern-stack 24 2))
V_CALL(VGetArg(upenv, 30-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k91, env)}),
      VGetArg(upenv, 24-1, 2)
    );
 }
}
static void _V0match__iter_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 29 19) (close _V0match__iter_k90) (bruijn expr-stack 23 1))
V_CALL(VGetArg(upenv, 29-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k90, env)}),
      VGetArg(upenv, 23-1, 1)
    );
 }
}
static void _V0match__iter_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 28 4) (close _V0match__iter_k89) (bruijn expr-stack 22 1))
V_CALL(VGetArg(upenv, 28-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k89, env)}),
      VGetArg(upenv, 22-1, 1)
    );
 }
}
static void _V0match__iter_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadar 27 5) (close _V0match__iter_k88) (bruijn pattern-stack 21 2))
V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k88, env)}),
      VGetArg(upenv, 21-1, 2)
    );
 }
}
static void _V0match__iter_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_k86) (close _V0match__iter_k87))
V_CALL_FUNC(_V0match__iter_k86, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k87, env)})
    );
 }
}
static void _V0match__iter_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_k82) (close _V0match__iter_k85))
V_CALL_FUNC(_V0match__iter_k82, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k85, env)})
    );
 }
}
static void _V0match__iter_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 24 7) (close _V0match__iter_k81) (bruijn ##x.107 0 0))
V_CALL(VGetArg(upenv, 24-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k81, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 23 3) (close _V0match__iter_k80) (bruijn ##x.108 0 0))
V_CALL(VGetArg(upenv, 23-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k80, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k98, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 25 2) (bruijn ##k.146 3 0) (bruijn ##x.148 0 0) (quote ...))
V_CALL(VGetArg(upenv, 25-1, 2), runtime,
      upenv->up->up->vars[0],
      _var0,
      VEncodePointer(&_V0_D_D_D.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__iter_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.147 0 0) ((bruijn cadar 27 5) (close _V0match__iter_k98) (bruijn pattern-stack 21 2)) ((bruijn ##k.146 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k98, env)}),
      VGetArg(upenv, 21-1, 2)
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0match__iter_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 26 3) (close _V0match__iter_k97) (bruijn ##x.149 0 0))
V_CALL(VGetArg(upenv, 26-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k97, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.145 1 0) ((bruijn cdar 25 16) (close _V0match__iter_k96) (bruijn pattern-stack 19 2)) ((bruijn ##k.146 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 25-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k96, env)}),
      VGetArg(upenv, 19-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0match__iter_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k104, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.49 24 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 4 0) (##inline ##sys.cons (bruijn ##x.118 3 0) (quote ()))) (quote ())) (##inline ##sys.cons (bruijn ##x.113 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
upenv->up->up->up->vars[0],
      VInlineCons(
upenv->up->up->vars[0],
      VNULL
    )

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
static void _V0match__iter_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-ellipses 25 1) (close _V0match__iter_k104) (bruijn ##x.114 0 0) (bruijn pattern-stack 23 2) (bruijn success-expr 23 3))
V_CALL(VGetArg(upenv, 25-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k104, env)}),
      _var0,
      VGetArg(upenv, 23-1, 2),
      VGetArg(upenv, 23-1, 3)
    );
 }
}
static void _V0match__iter_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 28 15) (close _V0match__iter_k103) (bruijn sym 2 0) (bruijn ##x.115 0 0))
V_CALL(VGetArg(upenv, 28-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k103, env)}),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0match__iter_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 27 19) (close _V0match__iter_k102) (bruijn expr-stack 21 1))
V_CALL(VGetArg(upenv, 27-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k102, env)}),
      VGetArg(upenv, 21-1, 1)
    );
 }
}
static void _V0match__iter_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 26 4) (close _V0match__iter_k101) (bruijn expr-stack 20 1))
V_CALL(VGetArg(upenv, 26-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k101, env)}),
      VGetArg(upenv, 20-1, 1)
    );
 }
}
static void _V0match__iter_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k113, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.49 28 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 0) (##inline ##sys.cons (bruijn ##x.143 5 0) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn sym 6 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.127 0 0) (quote ())))) (quote ())))))
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(upenv, 6-1, 0),
      VInlineCons(
VGetArg(upenv, 5-1, 0),
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
VInlineCons(
VEncodePointer(&_V10sys_Dpair_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 6-1, 0),
      VNULL
    )

    )
,
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
static void _V0match__iter_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 29 2) (close _V0match__iter_k113) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn sym 5 0) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn sym 5 0) (quote ()))) (bruijn ##x.137 3 0))) (##inline ##sys.cons (bruijn ##x.130 2 0) (##inline ##sys.cons (bruijn ##x.132 1 0) (bruijn ##x.133 0 0))) (bruijn success-expr 27 3))
V_CALL(VGetArg(upenv, 29-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k113, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 0),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 0),
      VNULL
    )

    )
,
      upenv->up->up->vars[0]
    )

    )
,
      VInlineCons(
upenv->up->vars[0],
      VInlineCons(
upenv->vars[0],
      _var0
    )

    )
,
      VGetArg(upenv, 27-1, 3)
    );
 }
}
static void _V0match__iter_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 32 19) (close _V0match__iter_k112) (bruijn pattern-stack 26 2))
V_CALL(VGetArg(upenv, 32-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k112, env)}),
      VGetArg(upenv, 26-1, 2)
    );
 }
}
static void _V0match__iter_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 31 16) (close _V0match__iter_k111) (bruijn pattern-stack 25 2))
V_CALL(VGetArg(upenv, 31-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k111, env)}),
      VGetArg(upenv, 25-1, 2)
    );
 }
}
static void _V0match__iter_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caar 30 18) (close _V0match__iter_k110) (bruijn pattern-stack 24 2))
V_CALL(VGetArg(upenv, 30-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k110, env)}),
      VGetArg(upenv, 24-1, 2)
    );
 }
}
static void _V0match__iter_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 29 19) (close _V0match__iter_k109) (bruijn expr-stack 23 1))
V_CALL(VGetArg(upenv, 29-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k109, env)}),
      VGetArg(upenv, 23-1, 1)
    );
 }
}
static void _V0match__iter_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 28 4) (close _V0match__iter_k108) (bruijn expr-stack 22 1))
V_CALL(VGetArg(upenv, 28-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k108, env)}),
      VGetArg(upenv, 22-1, 1)
    );
 }
}
static void _V0match__iter_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.119 0 0) ((bruijn gensym 27 20) (close _V0match__iter_k107) (##string ##string.295)) ((bruijn error 27 2) (bruijn ##k.49 21 0) (##string ##string.293)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 27-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k107, env)}),
      VEncodePointer(&_V10string_D295.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 27-1, 2), runtime,
      VGetArg(upenv, 21-1, 0),
      VEncodePointer(&_V10string_D293.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0match__iter_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 26 3) (close _V0match__iter_k106) (bruijn ##x.144 0 0))
V_CALL(VGetArg(upenv, 26-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k106, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.109 0 0) ((bruijn gensym 25 20) (close _V0match__iter_k100) (##string ##string.295)) ((bruijn car 25 4) (close _V0match__iter_k105) (bruijn pattern-stack 19 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k100, env)}),
      VEncodePointer(&_V10string_D295.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 25-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k105, env)}),
      VGetArg(upenv, 19-1, 2)
    );
}
 }
}
static void _V0match__iter_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_k95) (close _V0match__iter_k99))
V_CALL_FUNC(_V0match__iter_k95, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k99, env)})
    );
 }
}
static void _V0match__iter_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 23 3) (close _V0match__iter_k94) (bruijn ##x.150 0 0))
V_CALL(VGetArg(upenv, 23-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k94, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.87 0 0) ((bruijn cdar 22 16) (close _V0match__iter_k79) (bruijn pattern-stack 16 2)) ((bruijn car 22 4) (close _V0match__iter_k93) (bruijn pattern-stack 16 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k79, env)}),
      VGetArg(upenv, 16-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k93, env)}),
      VGetArg(upenv, 16-1, 2)
    );
}
 }
}
static void _V0match__iter_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_k76) (close _V0match__iter_k78))
V_CALL_FUNC(_V0match__iter_k76, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k78, env)})
    );
 }
}
static void _V0match__iter_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 20 3) (close _V0match__iter_k75) (bruijn ##x.154 0 0))
V_CALL(VGetArg(upenv, 20-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k75, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.76 0 0) ((bruijn car 19 4) (close _V0match__iter_k69) (bruijn pattern-stack 13 2)) ((bruijn car 19 4) (close _V0match__iter_k74) (bruijn pattern-stack 13 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k69, env)}),
      VGetArg(upenv, 13-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k74, env)}),
      VGetArg(upenv, 13-1, 2)
    );
}
 }
}
static void _V0match__iter_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn atom? 18 8) (close _V0match__iter_k68) (bruijn ##x.155 0 0))
V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k68, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.75 0 0) ((bruijn error 17 2) (bruijn ##k.49 11 0) (##string ##string.293)) ((bruijn car 17 4) (close _V0match__iter_k67) (bruijn pattern-stack 11 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D293.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 17-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k67, env)}),
      VGetArg(upenv, 11-1, 2)
    );
}
 }
}
static void _V0match__iter_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string? 16 9) (close _V0match__iter_k66) (bruijn ##x.156 0 0))
V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k66, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.66 0 0) ((bruijn car 15 4) (close _V0match__iter_k61) (bruijn expr-stack 9 1)) ((bruijn car 15 4) (close _V0match__iter_k65) (bruijn pattern-stack 9 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k61, env)}),
      VGetArg(upenv, 9-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k65, env)}),
      VGetArg(upenv, 9-1, 2)
    );
}
 }
}
static void _V0match__iter_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 14 14) (close _V0match__iter_k60) (bruijn ##x.157 0 0))
V_CALL(VGetArg(upenv, 14-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k60, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.65 0 0) ((bruijn error 13 2) (bruijn ##k.49 7 0) (##string ##string.293)) ((bruijn car 13 4) (close _V0match__iter_k59) (bruijn pattern-stack 7 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D293.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k59, env)}),
      VGetArg(upenv, 7-1, 2)
    );
}
 }
}
static void _V0match__iter_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn vector? 12 10) (close _V0match__iter_k58) (bruijn ##x.158 0 0))
V_CALL(VGetArg(upenv, 12-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k58, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.54 0 0) ((bruijn car 11 4) (close _V0match__iter_k52) (bruijn pattern-stack 5 2)) ((bruijn car 11 4) (close _V0match__iter_k57) (bruijn pattern-stack 5 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k52, env)}),
      VGetArg(upenv, 5-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 11-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k57, env)}),
      VGetArg(upenv, 5-1, 2)
    );
}
 }
}
static void _V0match__iter_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol? 10 11) (close _V0match__iter_k51) (bruijn ##x.159 0 0))
V_CALL(VGetArg(upenv, 10-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k51, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.51 0 0) ((bruijn cdr 9 19) (close _V0match__iter_k48) (bruijn expr-stack 3 1)) ((bruijn car 9 4) (close _V0match__iter_k50) (bruijn pattern-stack 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k48, env)}),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 9-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k50, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0match__iter_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 5 2) (close _V0match__iter_k47) (bruijn ##x.160 0 0) (quote _))
V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k47, env)}),
      _var0,
      VEncodePointer(&_V0_U.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__iter_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.50 0 0) ((bruijn ##k.49 1 0) (bruijn success-expr 1 3)) ((bruijn car 7 4) (close _V0match__iter_k46) (bruijn pattern-stack 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[3]
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k46, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0match__iter_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0match__iter_lambda9, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_lambda9, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 6 14) (close _V0match__iter_k45) (bruijn pattern-stack 0 2))
V_CALL(VGetArg(upenv, 6-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k45, env)}),
      _var2
    );
 }
}
static void _V0transform__match_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0transform__match_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0transform__match_k27) (bruijn match-iter 1 2) (close _V0match__iter_lambda9))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0transform__match_k27, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_lambda9, env)})
    );
 }
}
static void _V0match__ellipses_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k134, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.161 21 0) (##inline ##sys.cons (quote call-with-values) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (##inline ##sys.cons (quote call/cc) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 14 0) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (quote loop) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn expr 12 0) (##inline ##sys.cons (bruijn ##x.237 11 0) (quote ()))) (bruijn ##x.231 10 0)) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.not) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn expr 12 0) (quote ()))) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 14 0) (##inline ##sys.cons (bruijn expr 12 0) (bruijn ##x.224 9 0))) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-values) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (##inline ##sys.cons (quote call/cc) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (bruijn k2 13 0) (quote ())) (##inline ##sys.cons (bruijn ##x.200 5 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 14 0) (##inline ##sys.cons (bruijn expr 12 0) (bruijn ##x.204 4 0))) (quote ()))))) (quote ()))) (quote ())))) (##inline ##sys.cons (quote loop) (quote ())))) (quote ())))))) (quote ())))) (quote ()))) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (quote tail-expr) (bruijn variables 16 0)) (##inline ##sys.cons (bruijn ##x.169 0 0) (quote ())))) (quote ())))))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VInlineCons(
VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(upenv, 14-1, 0),
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V0loop.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(upenv, 12-1, 0),
      VInlineCons(
VGetArg(upenv, 11-1, 0),
      VNULL
    )

    )
,
      VGetArg(upenv, 10-1, 0)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dnot.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dpair_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 12-1, 0),
      VNULL
    )

    )
,
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VGetArg(upenv, 14-1, 0),
      VInlineCons(
VGetArg(upenv, 12-1, 0),
      VGetArg(upenv, 9-1, 0)
    )

    )
,
      VNULL
    )

    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VNULL,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VGetArg(upenv, 13-1, 0),
      VNULL
    )
,
      VInlineCons(
VGetArg(upenv, 5-1, 0),
      VInlineCons(
VInlineCons(
VGetArg(upenv, 14-1, 0),
      VInlineCons(
VGetArg(upenv, 12-1, 0),
      upenv->up->up->up->vars[0]
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
,
      VNULL
    )

    )

    )
,
      VInlineCons(
VEncodePointer(&_V0loop.sym, VPOINTER_OTHER),
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
VInlineCons(
VEncodePointer(&_V0tail__expr.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 0)
    )
,
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
static void _V0match__ellipses_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 21 2) (close _V0match__ellipses_k134) (bruijn ##x.170 1 0) (bruijn ##x.171 0 0) (bruijn success-expr 20 3))
V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k134, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 20-1, 3)
    );
 }
}
static void _V0match__ellipses_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 24 15) (close _V0match__ellipses_k133) (bruijn tail-pattern 17 0) (bruijn pattern-stack 16 0))
V_CALL(VGetArg(upenv, 24-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k133, env)}),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 0)
    );
 }
}
static void _V0match__ellipses_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 23 15) (close _V0match__ellipses_k132) (quote tail-expr) (bruijn ##x.172 0 0))
V_CALL(VGetArg(upenv, 23-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k132, env)}),
      VEncodePointer(&_V0tail__expr.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0match__ellipses_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 22 19) (close _V0match__ellipses_k131) (bruijn expr-stack 17 1))
V_CALL(VGetArg(upenv, 22-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k131, env)}),
      VGetArg(upenv, 17-1, 1)
    );
 }
}
static void _V0match__ellipses_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0match__ellipses_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.205 0 0) (##inline ##sys.cons (quote reverse) (##inline ##sys.cons (bruijn sym 0 1) (quote ()))))
V_CALL(_var0, runtime,
      VInlineCons(
VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VNULL
    )

    )

    );
 }
}
static void _V0match__ellipses_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 21 1) (close _V0match__ellipses_k130) (close _V0match__ellipses_lambda11) (bruijn syms 10 0))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k130, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_lambda11, env)}),
      VGetArg(upenv, 10-1, 0)
    );
 }
}
static void _V0match__ellipses_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 16 2) (close _V0match__ellipses_k129) (bruijn ##x.207 2 0) (bruijn ##x.208 1 0) (##inline ##sys.cons (bruijn k2 7 0) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn expr 6 0) (quote ()))) (bruijn ##x.212 0 0))))
V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k129, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      VInlineCons(
VGetArg(upenv, 7-1, 0),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 6-1, 0),
      VNULL
    )

    )
,
      _var0
    )

    )

    );
 }
}
static void _V0match__ellipses_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0match__ellipses_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_lambda12, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##k.213 0 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn var 0 1) (##inline ##sys.cons (bruijn sym 0 2) (quote ())))))
V_CALL(_var0, runtime,
      VInlineCons(
VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER),
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
static void _V0match__ellipses_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 19 1) (close _V0match__ellipses_k128) (close _V0match__ellipses_lambda12) (bruijn variables 9 0) (bruijn syms 8 0))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k128, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_lambda12, env)}),
      VGetArg(upenv, 9-1, 0),
      VGetArg(upenv, 8-1, 0)
    );
 }
}
static void _V0match__ellipses_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 18 17) (close _V0match__ellipses_k127) (bruijn pattern 12 0))
V_CALL(VGetArg(upenv, 18-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k127, env)}),
      VGetArg(upenv, 12-1, 0)
    );
 }
}
static void _V0match__ellipses_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 17 17) (close _V0match__ellipses_k126) (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn expr 3 0) (quote ()))))
V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k126, env)}),
      VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[0],
      VNULL
    )

    )

    );
 }
}
static void _V0match__ellipses_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0match__ellipses_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.225 0 0) (##inline ##sys.cons (quote reverse) (##inline ##sys.cons (bruijn sym 0 1) (quote ()))))
V_CALL(_var0, runtime,
      VInlineCons(
VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER),
      VInlineCons(
_var1,
      VNULL
    )

    )

    );
 }
}
static void _V0match__ellipses_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 16 1) (close _V0match__ellipses_k125) (close _V0match__ellipses_lambda13) (bruijn syms 5 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k125, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_lambda13, env)}),
      VGetArg(upenv, 5-1, 0)
    );
 }
}
static void _V0match__ellipses_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VError("Not enough arguments to _V0match__ellipses_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.232 0 0) (##inline ##sys.cons (bruijn sym 0 1) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (quote ()) (quote ()))) (quote ()))))
V_CALL(_var0, runtime,
      VInlineCons(
_var1,
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

    );
 }
}
static void _V0match__ellipses_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 15 1) (close _V0match__ellipses_k124) (close _V0match__ellipses_lambda14) (bruijn syms 4 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k124, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_lambda14, env)}),
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0match__ellipses_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 14 4) (close _V0match__ellipses_k123) (bruijn expr-stack 9 1))
V_CALL(VGetArg(upenv, 14-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k123, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0match__ellipses_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gensym 13 20) (close _V0match__ellipses_k122) (##string ##string.295))
V_CALL(VGetArg(upenv, 13-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k122, env)}),
      VEncodePointer(&_V10string_D295.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__ellipses_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gensym 12 20) (close _V0match__ellipses_k121) (##string ##string.292))
V_CALL(VGetArg(upenv, 12-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k121, env)}),
      VEncodePointer(&_V10string_D292.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__ellipses_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gensym 11 20) (close _V0match__ellipses_k120) (##string ##string.292))
V_CALL(VGetArg(upenv, 11-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k120, env)}),
      VEncodePointer(&_V10string_D292.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__ellipses_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 10 1) (close _V0match__ellipses_k119) (bruijn gensym 10 20) (bruijn variables 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k119, env)}),
      VGetArg(upenv, 10-1, 20),
      _var0
    );
 }
}
static void _V0match__ellipses_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gather-variables 8 1) (close _V0match__ellipses_k118) (bruijn ##x.238 0 0) (bruijn eqv? 6 2))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k118, env)}),
      _var0,
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0match__ellipses_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 8 17) (close _V0match__ellipses_k117) (bruijn pattern 2 0))
V_CALL(VGetArg(upenv, 8-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k117, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0match__ellipses_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 7 19) (close _V0match__ellipses_k116) (bruijn pattern-stack 2 2))
V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k116, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0match__ellipses_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddar 6 6) (close _V0match__ellipses_k115) (bruijn pattern-stack 1 2))
V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k115, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0match__ellipses_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VError("Not enough arguments to _V0match__ellipses_lambda10, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_lambda10, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn caar 5 18) (close _V0match__ellipses_k114) (bruijn pattern-stack 0 2))
V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k114, env)}),
      _var2
    );
 }
}
static void _V0transform__match_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V0transform__match_lambda5, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V0transform__match_k26) (bruijn match-ellipses 0 1) (close _V0match__ellipses_lambda10))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0transform__match_k26, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_lambda10, env)})
    );
 }
}
static void _V0transform__match_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0transform__match_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0transform__match_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0transform__match_lambda5) (bruijn ##k.7 0 0) #f #f)
V_CALL_FUNC(_V0transform__match_lambda5, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void match_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close match_k25) (bruijn transform-match 1 2) (close _V0transform__match_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k25, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0transform__match_lambda4, env)})
    );
 }
}
static void _V0gather__variables_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k138, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 5 1) (bruijn ##k.239 4 0) (bruijn ##x.242 0 0) (bruijn eqv? 4 2))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0gather__variables_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k141, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 7 1) (bruijn ##k.239 6 0) (bruijn ##x.244 0 0) (bruijn eqv? 6 2))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0gather__variables_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k146, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 12 15) (bruijn ##k.239 10 0) (bruijn ##x.246 2 0) (bruijn ##x.247 0 0))
V_CALL(VGetArg(upenv, 12-1, 15), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0gather__variables_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gather-variables 10 1) (close _V0gather__variables_k146) (bruijn ##x.248 0 0) (bruijn eqv? 9 2))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k146, env)}),
      _var0,
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0gather__variables_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 10 19) (close _V0gather__variables_k145) (bruijn pattern 8 1))
V_CALL(VGetArg(upenv, 10-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k145, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0gather__variables_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k151, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 13 1) (bruijn ##k.239 12 0) (bruijn ##x.251 0 0) (bruijn eqv? 12 2))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0,
      VGetArg(upenv, 12-1, 2)
    );
 }
}
static void _V0gather__variables_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k155, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 15 2) (bruijn ##k.260 1 0) (bruijn ##x.261 0 0) (quote quote))
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0gather__variables_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.259 1 0) ((bruijn caar 16 18) (close _V0gather__variables_k155) (bruijn pattern 14 1)) ((bruijn ##k.260 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k155, env)}),
      VGetArg(upenv, 14-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0gather__variables_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k157, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 16 1) (bruijn ##k.239 15 0) (bruijn ##x.253 0 0) (bruijn eqv? 15 2))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 15-1, 0),
      _var0,
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0gather__variables_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k160, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 18 1) (bruijn ##k.239 17 0) (##inline ##sys.cons (bruijn ##x.255 2 0) (##inline ##sys.cons (bruijn ##x.257 1 0) (bruijn ##x.258 0 0))) (bruijn eqv? 17 2))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 17-1, 0),
      VInlineCons(
upenv->up->vars[0],
      VInlineCons(
upenv->vars[0],
      _var0
    )

    )
,
      VGetArg(upenv, 17-1, 2)
    );
 }
}
static void _V0gather__variables_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 18 19) (close _V0gather__variables_k160) (bruijn pattern 16 1))
V_CALL(VGetArg(upenv, 18-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k160, env)}),
      VGetArg(upenv, 16-1, 1)
    );
 }
}
static void _V0gather__variables_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 17 16) (close _V0gather__variables_k159) (bruijn pattern 15 1))
V_CALL(VGetArg(upenv, 17-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k159, env)}),
      VGetArg(upenv, 15-1, 1)
    );
 }
}
static void _V0gather__variables_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.252 0 0) ((bruijn cdr 16 19) (close _V0gather__variables_k157) (bruijn pattern 14 1)) ((bruijn caar 16 18) (close _V0gather__variables_k158) (bruijn pattern 14 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k157, env)}),
      VGetArg(upenv, 14-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k158, env)}),
      VGetArg(upenv, 14-1, 1)
    );
}
 }
}
static void _V0gather__variables_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0gather__variables_k154) (close _V0gather__variables_k156))
V_CALL_FUNC(_V0gather__variables_k154, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k156, env)})
    );
 }
}
static void _V0gather__variables_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 14 3) (close _V0gather__variables_k153) (bruijn ##x.262 0 0))
V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k153, env)}),
      _var0
    );
 }
}
static void _V0gather__variables_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.250 0 0) ((bruijn cdr 13 19) (close _V0gather__variables_k151) (bruijn pattern 11 1)) ((bruijn car 13 4) (close _V0gather__variables_k152) (bruijn pattern 11 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k151, env)}),
      VGetArg(upenv, 11-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k152, env)}),
      VGetArg(upenv, 11-1, 1)
    );
}
 }
}
static void _V0gather__variables_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn atom? 12 8) (close _V0gather__variables_k150) (bruijn ##x.263 0 0))
V_CALL(VGetArg(upenv, 12-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k150, env)}),
      _var0
    );
 }
}
static void _V0gather__variables_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.249 0 0) ((bruijn error 11 2) (bruijn ##k.239 9 0) (##string ##string.293)) ((bruijn car 11 4) (close _V0gather__variables_k149) (bruijn pattern 9 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VGetArg(upenv, 9-1, 0),
      VEncodePointer(&_V10string_D293.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 11-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k149, env)}),
      VGetArg(upenv, 9-1, 1)
    );
}
 }
}
static void _V0gather__variables_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn vector? 10 10) (close _V0gather__variables_k148) (bruijn ##x.264 0 0))
V_CALL(VGetArg(upenv, 10-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k148, env)}),
      _var0
    );
 }
}
static void _V0gather__variables_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.245 0 0) ((bruijn car 9 4) (close _V0gather__variables_k144) (bruijn pattern 7 1)) ((bruijn car 9 4) (close _V0gather__variables_k147) (bruijn pattern 7 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k144, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 9-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k147, env)}),
      VGetArg(upenv, 7-1, 1)
    );
}
 }
}
static void _V0gather__variables_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol? 8 11) (close _V0gather__variables_k143) (bruijn ##x.265 0 0))
V_CALL(VGetArg(upenv, 8-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k143, env)}),
      _var0
    );
 }
}
static void _V0gather__variables_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.243 0 0) ((bruijn cdr 7 19) (close _V0gather__variables_k141) (bruijn pattern 5 1)) ((bruijn car 7 4) (close _V0gather__variables_k142) (bruijn pattern 5 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k141, env)}),
      VGetArg(upenv, 5-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k142, env)}),
      VGetArg(upenv, 5-1, 1)
    );
}
 }
}
static void _V0gather__variables_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 4 2) (close _V0gather__variables_k140) (bruijn ##x.266 0 0) (quote ...))
V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k140, env)}),
      _var0,
      VEncodePointer(&_V0_D_D_D.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0gather__variables_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.241 0 0) ((bruijn cdr 5 19) (close _V0gather__variables_k138) (bruijn pattern 3 1)) ((bruijn car 5 4) (close _V0gather__variables_k139) (bruijn pattern 3 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k138, env)}),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k139, env)}),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0gather__variables_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 2 2) (close _V0gather__variables_k137) (bruijn ##x.267 0 0) (quote _))
V_CALL(upenv->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k137, env)}),
      _var0,
      VEncodePointer(&_V0_U.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0gather__variables_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.240 0 0) ((bruijn ##k.239 1 0) (quote ())) ((bruijn car 3 4) (close _V0gather__variables_k136) (bruijn pattern 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL
    );
} else {
V_CALL(upenv->up->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k136, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0gather__variables_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VError("Not enough arguments to _V0gather__variables_lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 2 14) (close _V0gather__variables_k135) (bruijn pattern 0 1))
V_CALL(upenv->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k135, env)}),
      _var1
    );
 }
}
static void match_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)match_lambda3, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close match_k24) (bruijn gather-variables 0 1) (close _V0gather__variables_lambda15))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k24, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_lambda15, env)})
    );
 }
}
static void match_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20) {
 V_GC_CHECK2_VARARGS((VFunc)match_lambda2, runtime, upenv, 21, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20) {
  struct { VEnv env; VWORD argv[21]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 21; env->var_len = 21; env->up = upenv;
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
  // ((close match_lambda3) (bruijn ##k.2 0 0) #f #f)
V_CALL_FUNC(match_lambda3, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void match_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close match_lambda2) (bruijn ##k.1 23 0) (bruijn ##x.268 19 0) (bruijn ##x.269 18 0) (bruijn ##x.270 17 0) (bruijn ##x.271 16 0) (bruijn ##x.272 15 0) (bruijn ##x.273 14 0) (bruijn ##x.274 13 0) (bruijn ##x.275 12 0) (bruijn ##x.276 11 0) (bruijn ##x.277 10 0) (bruijn ##x.278 9 0) (bruijn ##x.279 8 0) (bruijn ##x.280 7 0) (bruijn ##x.281 6 0) (bruijn ##x.282 5 0) (bruijn ##x.283 4 0) (bruijn ##x.284 3 0) (bruijn ##x.285 2 0) (bruijn ##x.286 1 0) (bruijn ##x.287 0 0))
V_CALL_FUNC(match_lambda2, env, runtime,
      VGetArg(upenv, 23-1, 0),
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
static void match_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close match_k23) (quote gensym))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k23, env)}),
      VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close match_k22) (quote cdr))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k22, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close match_k21) (quote caar))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k21, env)}),
      VEncodePointer(&_V0caar.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close match_k20) (quote list))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k20, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close match_k19) (quote cdar))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k19, env)}),
      VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close match_k18) (quote cons))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k18, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close match_k17) (quote null?))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k17, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close match_k16) (quote cddr))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k16, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close match_k15) (quote cadr))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k15, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close match_k14) (quote symbol?))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k14, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close match_k13) (quote vector?))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k13, env)}),
      VEncodePointer(&_V0vector_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close match_k12) (quote string?))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k12, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close match_k11) (quote atom?))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k11, env)}),
      VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close match_k10) (quote not))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k10, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close match_k9) (quote cddar))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k9, env)}),
      VEncodePointer(&_V0cddar.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close match_k8) (quote cadar))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k8, env)}),
      VEncodePointer(&_V0cadar.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close match_k7) (quote car))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k7, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close match_k6) (quote pair?))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k6, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close match_k5) (quote error))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k5, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close match_k4) (quote map))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k4, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close match_k3) (##string ##string.296) (bruijn ##x.288 1 0) (bruijn ##x.289 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k3, env)}),
      VEncodePointer(&_V10string_D296.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0
    );
 }
}
static void match_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close match_k2) (##string ##string.297))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k2, env)}),
      VEncodePointer(&_V10string_D297.sym, VPOINTER_OTHER)
    );
 }
}
static void match_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to match_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)match_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close match_k1) (##string ##string.298))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)match_k1, env)}),
      VEncodePointer(&_V10string_D298.sym, VPOINTER_OTHER)
    );
 }
}
VFunc match = (VFunc)match_lambda1;
