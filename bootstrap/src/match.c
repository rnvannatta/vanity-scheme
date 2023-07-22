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
static struct { VBlob sym; char bytes[21]; } _V10string_D315 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[6]; } _V10string_D314 = { { VSTRING, 6 }, "utils" };
static struct { VBlob sym; char bytes[6]; } _V10string_D313 = { { VSTRING, 6 }, "match" };
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
static struct { VBlob sym; char bytes[4]; } _V0_D_D_D = { { VSYMBOL, 4 }, "..." };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dcdr = { { VSYMBOL, 10 }, "##sys.cdr" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dcar = { { VSYMBOL, 10 }, "##sys.car" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dpair_Q = { { VSYMBOL, 12 }, "##sys.pair\?" };
static struct { VBlob sym; char bytes[5]; } _V10string_D312 = { { VSTRING, 5 }, "expr" };
static struct { VBlob sym; char bytes[16]; } _V10string_D311 = { { VSTRING, 16 }, "malformed quote" };
static struct { VBlob sym; char bytes[6]; } _V0quote = { { VSYMBOL, 6 }, "quote" };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Deq_Q = { { VSYMBOL, 10 }, "##sys.eq\?" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dnull_Q = { { VSYMBOL, 12 }, "##sys.null\?" };
static struct { VBlob sym; char bytes[3]; } _V0if = { { VSYMBOL, 3 }, "if" };
static struct { VBlob sym; char bytes[20]; } _V10string_D310 = { { VSTRING, 20 }, "not implemented yet" };
static struct { VBlob sym; char bytes[3]; } _V10string_D309 = { { VSTRING, 3 }, "kk" };
static struct { VBlob sym; char bytes[6]; } _V10string_D308 = { { VSTRING, 6 }, "input" };
static struct { VBlob sym; char bytes[4]; } _V0let = { { VSYMBOL, 4 }, "let" };
static struct { VBlob sym; char bytes[7]; } _V0lambda = { { VSYMBOL, 7 }, "lambda" };
static struct { VBlob sym; char bytes[8]; } _V0call_Wcc = { { VSYMBOL, 8 }, "call/cc" };
static struct { VBlob sym; char bytes[5]; } _V0else = { { VSYMBOL, 5 }, "else" };
static struct { VBlob sym; char bytes[6]; } _V0begin = { { VSYMBOL, 6 }, "begin" };
static struct { VBlob sym; char bytes[17]; } _V10string_D307 = { { VSTRING, 17 }, "no matching case" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[16]; } _V0transform__match = { { VSYMBOL, 16 }, "transform-match" };
static void match_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k25, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.4 2 0) (##inline ##sys.cons (##inline ##sys.cons (quote transform-match) (bruijn transform-match 2 2)) (quote ())))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
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
 static VDebugInfo dbg = { "_V0transform__match_k32" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0transform__match_k32, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 1) (bruijn ##k.22 2 0) (bruijn ##x.24 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[1]), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0transform__match_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0transform__match_k31" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0transform__match_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 12 13) (close _V0transform__match_k32) (bruijn expr 9 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0transform__match_k32, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0loop_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k36" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k36, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.25 4 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 7 1) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (bruijn ##x.33 0 0)) (quote ()))) (quote ())))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[0]), runtime,
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
 static VDebugInfo dbg = { "_V0loop_k43" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k43, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 22 15) (bruijn ##k.25 10 0) (bruijn ##x.34 2 0) (bruijn ##x.35 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 15)), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k42" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 10 1) (close _V0loop_k43) (bruijn ##x.36 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k43, env)}),
      _var0
    );
 }
}
static void _V0loop_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k41" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 20 19) (close _V0loop_k42) (bruijn patterns 8 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k42, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0loop_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k40" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 15 2) (close _V0loop_k41) (bruijn ##x.37 3 0) (bruijn ##x.38 1 0) (##inline ##sys.cons (bruijn k 10 1) (##inline ##sys.cons (##inline ##sys.cons (quote begin) (bruijn ##x.42 0 0)) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k41, env)}),
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
 static VDebugInfo dbg = { "_V0loop_k39" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 18 16) (close _V0loop_k40) (bruijn patterns 6 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k40, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0loop_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 17 17) (close _V0loop_k39) (bruijn ##x.43 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k39, env)}),
      _var0
    );
 }
}
static void _V0loop_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k37" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caar 16 18) (close _V0loop_k38) (bruijn patterns 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k38, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0loop_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k35" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.29 0 0) ((bruijn cdar 15 16) (close _V0loop_k36) (bruijn patterns 3 1)) ((bruijn list 15 17) (close _V0loop_k37) (bruijn input 6 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k36, env)}),
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k37, env)}),
      VGetArg(upenv, 6-1, 2)
    );
}
 }
}
static void _V0loop_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k34" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 11 2) (close _V0loop_k35) (bruijn ##x.44 0 0) (quote else))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k35, env)}),
      _var0,
      VEncodePointer(&_V0else.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k33" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.26 0 0) ((bruijn ##k.25 1 0) (##inline ##sys.qcons (##inline ##sys.qcons (quote error) (##inline ##sys.qcons (quote (##string ##string.307)) (quote ()))) (quote ()))) ((bruijn caar 13 18) (close _V0loop_k34) (bruijn patterns 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D307.sym, VPOINTER_OTHER),
      VNULL
    )

    )
,
      VNULL
    )

    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k34, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda9" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 12 14) (close _V0loop_k33) (bruijn patterns 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k33, env)}),
      _var1
    );
 }
}
static void _V0transform__match_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0transform__match_lambda8" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0transform__match_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0transform__match_k31) (bruijn loop 0 1) (close _V0loop_lambda9))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0transform__match_k31, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda9, env)})
    );
 }
}
static void _V0transform__match_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0transform__match_k44" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0transform__match_k44, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.12 2 0) (##inline ##sys.cons (quote call/cc) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 2 1) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn input 2 2) (##inline ##sys.cons (bruijn ##x.47 1 0) (quote ()))) (quote ())) (bruijn ##x.21 0 0))) (quote ())))) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[0]), runtime,
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
 static VDebugInfo dbg = { "_V0transform__match_k30" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0transform__match_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0transform__match_lambda8) (close _V0transform__match_k44) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0transform__match_lambda8, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0transform__match_k44, env)}),
      VEncodeBool(false)
    );
 }
}
static void _V0transform__match_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0transform__match_lambda7" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0transform__match_lambda7, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn cadr 9 12) (close _V0transform__match_k30) (bruijn expr 6 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0transform__match_k30, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0transform__match_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0transform__match_k29" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0transform__match_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0transform__match_lambda7) (bruijn ##k.9 4 0) (bruijn ##x.48 1 0) (bruijn ##x.49 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0transform__match_lambda7, env)}, runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0transform__match_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0transform__match_k28" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0transform__match_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gensym 7 20) (close _V0transform__match_k29) (##string ##string.308))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0transform__match_k29, env)}),
      VEncodePointer(&_V10string_D308.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0transform__match_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0transform__match_k27" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0transform__match_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gensym 6 20) (close _V0transform__match_k28) (##string ##string.309))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0transform__match_k28, env)}),
      VEncodePointer(&_V10string_D309.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__iter_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k49" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k49, runtime, upenv, 1, argc, _var0) {
  // ((bruijn match-iter 7 2) (bruijn ##k.50 5 0) (bruijn ##x.53 1 0) (bruijn ##x.54 0 0) (bruijn success-expr 5 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 2)), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 3)
    );
 }
}
static void _V0match__iter_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k48" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 10 19) (close _V0match__iter_k49) (bruijn pattern-stack 4 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k49, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0match__iter_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k56" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k56, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.50 10 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn ##x.63 4 0) (##inline ##sys.cons (bruijn ##x.65 3 0) (quote ()))) (quote ())) (##inline ##sys.cons (bruijn ##x.59 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 0)), runtime,
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
 static VDebugInfo dbg = { "_V0match__iter_k55" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 11 2) (close _V0match__iter_k56) (bruijn ##x.60 1 0) (bruijn ##x.61 0 0) (bruijn success-expr 9 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k56, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 9-1, 3)
    );
 }
}
static void _V0match__iter_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k54" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 14 19) (close _V0match__iter_k55) (bruijn pattern-stack 8 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k55, env)}),
      VGetArg(upenv, 8-1, 2)
    );
 }
}
static void _V0match__iter_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k53" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 13 19) (close _V0match__iter_k54) (bruijn expr-stack 7 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k54, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0match__iter_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k52" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 12 4) (close _V0match__iter_k53) (bruijn expr-stack 6 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k53, env)}),
      VGetArg(upenv, 6-1, 1)
    );
 }
}
static void _V0match__iter_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k64" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k64, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.50 13 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.null?) (##inline ##sys.cons (bruijn ##x.75 3 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.71 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 0)), runtime,
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
 static VDebugInfo dbg = { "_V0match__iter_k63" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 14 2) (close _V0match__iter_k64) (bruijn ##x.72 1 0) (bruijn ##x.73 0 0) (bruijn success-expr 12 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k64, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 12-1, 3)
    );
 }
}
static void _V0match__iter_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k62" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 17 19) (close _V0match__iter_k63) (bruijn pattern-stack 11 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k63, env)}),
      VGetArg(upenv, 11-1, 2)
    );
 }
}
static void _V0match__iter_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k61" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 16 19) (close _V0match__iter_k62) (bruijn expr-stack 10 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k62, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0match__iter_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k73" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k73, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.50 18 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.eq?) (##inline ##sys.cons (bruijn ##x.85 4 0) (##inline ##sys.cons (bruijn ##x.87 3 0) (quote ())))) (##inline ##sys.cons (bruijn ##x.81 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 0)), runtime,
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
 static VDebugInfo dbg = { "_V0match__iter_k72" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 19 2) (close _V0match__iter_k73) (bruijn ##x.82 1 0) (bruijn ##x.83 0 0) (bruijn success-expr 17 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k73, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 17-1, 3)
    );
 }
}
static void _V0match__iter_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k71" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 22 19) (close _V0match__iter_k72) (bruijn pattern-stack 16 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k72, env)}),
      VGetArg(upenv, 16-1, 2)
    );
 }
}
static void _V0match__iter_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k70" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 21 19) (close _V0match__iter_k71) (bruijn expr-stack 15 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k71, env)}),
      VGetArg(upenv, 15-1, 1)
    );
 }
}
static void _V0match__iter_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k69" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 20 4) (close _V0match__iter_k70) (bruijn expr-stack 14 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k70, env)}),
      VGetArg(upenv, 14-1, 1)
    );
 }
}
static void _V0match__iter_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k86" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k86, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.50 26 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn ##x.101 4 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.99 3 0) (quote ())))) (##inline ##sys.cons (bruijn ##x.93 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 0)), runtime,
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
static void _V0match__iter_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k85" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 27 2) (close _V0match__iter_k86) (bruijn ##x.94 1 0) (bruijn ##x.95 0 0) (bruijn success-expr 25 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k86, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 25-1, 3)
    );
 }
}
static void _V0match__iter_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k84" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 30 19) (close _V0match__iter_k85) (bruijn pattern-stack 24 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k85, env)}),
      VGetArg(upenv, 24-1, 2)
    );
 }
}
static void _V0match__iter_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k83" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 29 19) (close _V0match__iter_k84) (bruijn expr-stack 23 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k84, env)}),
      VGetArg(upenv, 23-1, 1)
    );
 }
}
static void _V0match__iter_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k82" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 28 4) (close _V0match__iter_k83) (bruijn expr-stack 22 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k83, env)}),
      VGetArg(upenv, 22-1, 1)
    );
 }
}
static void _V0match__iter_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k81" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadar 27 5) (close _V0match__iter_k82) (bruijn pattern-stack 21 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k82, env)}),
      VGetArg(upenv, 21-1, 2)
    );
 }
}
static void _V0match__iter_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k91" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k91, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.50 25 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn ##x.101 4 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.99 3 0) (quote ())))) (##inline ##sys.cons (bruijn ##x.93 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 0)), runtime,
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
static void _V0match__iter_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k90" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 26 2) (close _V0match__iter_k91) (bruijn ##x.94 1 0) (bruijn ##x.95 0 0) (bruijn success-expr 24 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k91, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 24-1, 3)
    );
 }
}
static void _V0match__iter_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k89" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 29 19) (close _V0match__iter_k90) (bruijn pattern-stack 23 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k90, env)}),
      VGetArg(upenv, 23-1, 2)
    );
 }
}
static void _V0match__iter_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k88" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 28 19) (close _V0match__iter_k89) (bruijn expr-stack 22 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k89, env)}),
      VGetArg(upenv, 22-1, 1)
    );
 }
}
static void _V0match__iter_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k87" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 27 4) (close _V0match__iter_k88) (bruijn expr-stack 21 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k88, env)}),
      VGetArg(upenv, 21-1, 1)
    );
 }
}
static void _V0match__iter_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k100" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k100, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.50 29 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn ##x.101 4 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.99 3 0) (quote ())))) (##inline ##sys.cons (bruijn ##x.93 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 0)), runtime,
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
static void _V0match__iter_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k99" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 30 2) (close _V0match__iter_k100) (bruijn ##x.94 1 0) (bruijn ##x.95 0 0) (bruijn success-expr 28 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k100, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 28-1, 3)
    );
 }
}
static void _V0match__iter_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k98" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 33 19) (close _V0match__iter_k99) (bruijn pattern-stack 27 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k99, env)}),
      VGetArg(upenv, 27-1, 2)
    );
 }
}
static void _V0match__iter_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k97" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 32 19) (close _V0match__iter_k98) (bruijn expr-stack 26 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k98, env)}),
      VGetArg(upenv, 26-1, 1)
    );
 }
}
static void _V0match__iter_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k96" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 31 4) (close _V0match__iter_k97) (bruijn expr-stack 25 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k97, env)}),
      VGetArg(upenv, 25-1, 1)
    );
 }
}
static void _V0match__iter_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k95" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadar 30 5) (close _V0match__iter_k96) (bruijn pattern-stack 24 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k96, env)}),
      VGetArg(upenv, 24-1, 2)
    );
 }
}
static void _V0match__iter_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k105" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k105, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.50 28 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn ##x.101 4 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.99 3 0) (quote ())))) (##inline ##sys.cons (bruijn ##x.93 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 0)), runtime,
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
static void _V0match__iter_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k104" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 29 2) (close _V0match__iter_k105) (bruijn ##x.94 1 0) (bruijn ##x.95 0 0) (bruijn success-expr 27 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k105, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 27-1, 3)
    );
 }
}
static void _V0match__iter_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k103" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 32 19) (close _V0match__iter_k104) (bruijn pattern-stack 26 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k104, env)}),
      VGetArg(upenv, 26-1, 2)
    );
 }
}
static void _V0match__iter_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k102" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 31 19) (close _V0match__iter_k103) (bruijn expr-stack 25 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k103, env)}),
      VGetArg(upenv, 25-1, 1)
    );
 }
}
static void _V0match__iter_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k101" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 30 4) (close _V0match__iter_k102) (bruijn expr-stack 24 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k102, env)}),
      VGetArg(upenv, 24-1, 1)
    );
 }
}
static void _V0match__iter_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k94" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.102 0 0) ((bruijn error 29 2) (close _V0match__iter_k95) (##string ##string.311)) ((bruijn cadar 29 5) (close _V0match__iter_k101) (bruijn pattern-stack 23 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k95, env)}),
      VEncodePointer(&_V10string_D311.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k101, env)}),
      VGetArg(upenv, 23-1, 2)
    );
}
 }
}
static void _V0match__iter_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k93" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 28 7) (close _V0match__iter_k94) (bruijn ##x.104 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k94, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k92" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 27 14) (close _V0match__iter_k93) (bruijn ##x.105 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k93, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k80" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.103 0 0) (if (bruijn ##p.103 0 0) ((bruijn error 26 2) (close _V0match__iter_k81) (##string ##string.311)) ((bruijn cadar 26 5) (close _V0match__iter_k87) (bruijn pattern-stack 20 2))) ((bruijn cddar 26 6) (close _V0match__iter_k92) (bruijn pattern-stack 20 2)))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k81, env)}),
      VEncodePointer(&_V10string_D311.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k87, env)}),
      VGetArg(upenv, 20-1, 2)
    );
}
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k92, env)}),
      VGetArg(upenv, 20-1, 2)
    );
}
 }
}
static void _V0match__iter_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k79" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 25 7) (close _V0match__iter_k80) (bruijn ##x.106 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k80, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k78" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 24 3) (close _V0match__iter_k79) (bruijn ##x.107 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k79, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k116" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k116, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.109 4 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 4 1) (##inline ##sys.cons (bruijn ##x.118 3 0) (quote ()))) (quote ())) (##inline ##sys.cons (bruijn ##x.113 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[0]), runtime,
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
upenv->up->up->up->vars[1],
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
static void _V0match__iter_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k115" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-ellipses 30 1) (close _V0match__iter_k116) (bruijn ##x.114 0 0) (bruijn pattern-stack 28 2) (bruijn success-expr 28 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k116, env)}),
      _var0,
      VGetArg(upenv, 28-1, 2),
      VGetArg(upenv, 28-1, 3)
    );
 }
}
static void _V0match__iter_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k114" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 33 15) (close _V0match__iter_k115) (bruijn sym 2 1) (bruijn ##x.115 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k115, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0match__iter_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k113" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 32 19) (close _V0match__iter_k114) (bruijn expr-stack 26 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k114, env)}),
      VGetArg(upenv, 26-1, 1)
    );
 }
}
static void _V0match__iter_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__iter_lambda11" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 31 4) (close _V0match__iter_k113) (bruijn expr-stack 25 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k113, env)}),
      VGetArg(upenv, 25-1, 1)
    );
 }
}
static void _V0match__iter_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k112" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_lambda11) (bruijn ##k.50 24 0) (bruijn ##x.119 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_lambda11, env)}, runtime,
      VGetArg(upenv, 24-1, 0),
      _var0
    );
 }
}
static void _V0match__iter_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k125" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k125, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.121 6 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 1) (##inline ##sys.cons (bruijn ##x.145 5 0) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn sym 6 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.129 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 0)), runtime,
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(upenv, 6-1, 1),
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
VGetArg(upenv, 6-1, 1),
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
static void _V0match__iter_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k124" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 34 2) (close _V0match__iter_k125) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (bruijn ##x.139 3 0))) (##inline ##sys.cons (bruijn ##x.132 2 0) (##inline ##sys.cons (bruijn ##x.134 1 0) (bruijn ##x.135 0 0))) (bruijn success-expr 32 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k125, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
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
      VGetArg(upenv, 32-1, 3)
    );
 }
}
static void _V0match__iter_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k123" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 37 19) (close _V0match__iter_k124) (bruijn pattern-stack 31 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 37-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k124, env)}),
      VGetArg(upenv, 31-1, 2)
    );
 }
}
static void _V0match__iter_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k122" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 36 16) (close _V0match__iter_k123) (bruijn pattern-stack 30 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 36-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k123, env)}),
      VGetArg(upenv, 30-1, 2)
    );
 }
}
static void _V0match__iter_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k121" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caar 35 18) (close _V0match__iter_k122) (bruijn pattern-stack 29 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k122, env)}),
      VGetArg(upenv, 29-1, 2)
    );
 }
}
static void _V0match__iter_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k120" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 34 19) (close _V0match__iter_k121) (bruijn expr-stack 28 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k121, env)}),
      VGetArg(upenv, 28-1, 1)
    );
 }
}
static void _V0match__iter_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__iter_lambda12" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 33 4) (close _V0match__iter_k120) (bruijn expr-stack 27 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k120, env)}),
      VGetArg(upenv, 27-1, 1)
    );
 }
}
static void _V0match__iter_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k119" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_lambda12) (bruijn ##k.50 26 0) (bruijn ##x.146 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_lambda12, env)}, runtime,
      VGetArg(upenv, 26-1, 0),
      _var0
    );
 }
}
static void _V0match__iter_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k118" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.120 0 0) ((bruijn gensym 31 20) (close _V0match__iter_k119) (##string ##string.312)) ((bruijn error 31 2) (bruijn ##k.50 25 0) (##string ##string.310)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k119, env)}),
      VEncodePointer(&_V10string_D312.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 2)), runtime,
      VGetArg(upenv, 25-1, 0),
      VEncodePointer(&_V10string_D310.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0match__iter_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k117" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 30 3) (close _V0match__iter_k118) (bruijn ##x.147 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k118, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k111" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.108 0 0) ((bruijn gensym 29 20) (close _V0match__iter_k112) (##string ##string.312)) ((bruijn car 29 4) (close _V0match__iter_k117) (bruijn pattern-stack 23 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k112, env)}),
      VEncodePointer(&_V10string_D312.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k117, env)}),
      VGetArg(upenv, 23-1, 2)
    );
}
 }
}
static void _V0match__iter_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k110" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 25 2) (close _V0match__iter_k111) (bruijn ##x.150 0 0) (quote ...))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k111, env)}),
      _var0,
      VEncodePointer(&_V0_D_D_D.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__iter_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k134" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k134, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.121 6 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 1) (##inline ##sys.cons (bruijn ##x.145 5 0) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn sym 6 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.129 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 0)), runtime,
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(upenv, 6-1, 1),
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
VGetArg(upenv, 6-1, 1),
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
static void _V0match__iter_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k133" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 32 2) (close _V0match__iter_k134) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (bruijn ##x.139 3 0))) (##inline ##sys.cons (bruijn ##x.132 2 0) (##inline ##sys.cons (bruijn ##x.134 1 0) (bruijn ##x.135 0 0))) (bruijn success-expr 30 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k134, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
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
      VGetArg(upenv, 30-1, 3)
    );
 }
}
static void _V0match__iter_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k132" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 35 19) (close _V0match__iter_k133) (bruijn pattern-stack 29 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k133, env)}),
      VGetArg(upenv, 29-1, 2)
    );
 }
}
static void _V0match__iter_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k131" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 34 16) (close _V0match__iter_k132) (bruijn pattern-stack 28 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k132, env)}),
      VGetArg(upenv, 28-1, 2)
    );
 }
}
static void _V0match__iter_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k130" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caar 33 18) (close _V0match__iter_k131) (bruijn pattern-stack 27 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k131, env)}),
      VGetArg(upenv, 27-1, 2)
    );
 }
}
static void _V0match__iter_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k129" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 32 19) (close _V0match__iter_k130) (bruijn expr-stack 26 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k130, env)}),
      VGetArg(upenv, 26-1, 1)
    );
 }
}
static void _V0match__iter_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__iter_lambda13" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 31 4) (close _V0match__iter_k129) (bruijn expr-stack 25 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k129, env)}),
      VGetArg(upenv, 25-1, 1)
    );
 }
}
static void _V0match__iter_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k128" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_lambda13) (bruijn ##k.50 24 0) (bruijn ##x.146 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_lambda13, env)}, runtime,
      VGetArg(upenv, 24-1, 0),
      _var0
    );
 }
}
static void _V0match__iter_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k127" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.120 0 0) ((bruijn gensym 29 20) (close _V0match__iter_k128) (##string ##string.312)) ((bruijn error 29 2) (bruijn ##k.50 23 0) (##string ##string.310)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k128, env)}),
      VEncodePointer(&_V10string_D312.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 2)), runtime,
      VGetArg(upenv, 23-1, 0),
      VEncodePointer(&_V10string_D310.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0match__iter_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k126" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 28 3) (close _V0match__iter_k127) (bruijn ##x.147 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k127, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k109" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.149 0 0) ((bruijn cadar 27 5) (close _V0match__iter_k110) (bruijn pattern-stack 21 2)) ((bruijn car 27 4) (close _V0match__iter_k126) (bruijn pattern-stack 21 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k110, env)}),
      VGetArg(upenv, 21-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k126, env)}),
      VGetArg(upenv, 21-1, 2)
    );
}
 }
}
static void _V0match__iter_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k108" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 26 3) (close _V0match__iter_k109) (bruijn ##x.151 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k109, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k143" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k143, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.121 6 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 1) (##inline ##sys.cons (bruijn ##x.145 5 0) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn sym 6 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.129 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 0)), runtime,
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(upenv, 6-1, 1),
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
VGetArg(upenv, 6-1, 1),
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
static void _V0match__iter_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k142" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 30 2) (close _V0match__iter_k143) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (bruijn ##x.139 3 0))) (##inline ##sys.cons (bruijn ##x.132 2 0) (##inline ##sys.cons (bruijn ##x.134 1 0) (bruijn ##x.135 0 0))) (bruijn success-expr 28 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k143, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
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
      VGetArg(upenv, 28-1, 3)
    );
 }
}
static void _V0match__iter_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k141" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 33 19) (close _V0match__iter_k142) (bruijn pattern-stack 27 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k142, env)}),
      VGetArg(upenv, 27-1, 2)
    );
 }
}
static void _V0match__iter_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k140" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 32 16) (close _V0match__iter_k141) (bruijn pattern-stack 26 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k141, env)}),
      VGetArg(upenv, 26-1, 2)
    );
 }
}
static void _V0match__iter_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k139" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caar 31 18) (close _V0match__iter_k140) (bruijn pattern-stack 25 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k140, env)}),
      VGetArg(upenv, 25-1, 2)
    );
 }
}
static void _V0match__iter_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k138" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 30 19) (close _V0match__iter_k139) (bruijn expr-stack 24 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k139, env)}),
      VGetArg(upenv, 24-1, 1)
    );
 }
}
static void _V0match__iter_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__iter_lambda14" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 29 4) (close _V0match__iter_k138) (bruijn expr-stack 23 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k138, env)}),
      VGetArg(upenv, 23-1, 1)
    );
 }
}
static void _V0match__iter_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k137" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_lambda14) (bruijn ##k.50 22 0) (bruijn ##x.146 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_lambda14, env)}, runtime,
      VGetArg(upenv, 22-1, 0),
      _var0
    );
 }
}
static void _V0match__iter_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k136" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.120 0 0) ((bruijn gensym 27 20) (close _V0match__iter_k137) (##string ##string.312)) ((bruijn error 27 2) (bruijn ##k.50 21 0) (##string ##string.310)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k137, env)}),
      VEncodePointer(&_V10string_D312.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 2)), runtime,
      VGetArg(upenv, 21-1, 0),
      VEncodePointer(&_V10string_D310.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0match__iter_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k135" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 26 3) (close _V0match__iter_k136) (bruijn ##x.147 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k136, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k107" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.148 0 0) ((bruijn cdar 25 16) (close _V0match__iter_k108) (bruijn pattern-stack 19 2)) ((bruijn car 25 4) (close _V0match__iter_k135) (bruijn pattern-stack 19 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k108, env)}),
      VGetArg(upenv, 19-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k135, env)}),
      VGetArg(upenv, 19-1, 2)
    );
}
 }
}
static void _V0match__iter_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k106" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 24 3) (close _V0match__iter_k107) (bruijn ##x.152 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k107, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k77" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.88 0 0) ((bruijn cdar 23 16) (close _V0match__iter_k78) (bruijn pattern-stack 17 2)) ((bruijn car 23 4) (close _V0match__iter_k106) (bruijn pattern-stack 17 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k78, env)}),
      VGetArg(upenv, 17-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k106, env)}),
      VGetArg(upenv, 17-1, 2)
    );
}
 }
}
static void _V0match__iter_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k76" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 19 2) (close _V0match__iter_k77) (bruijn ##x.154 0 0) (quote quote))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k77, env)}),
      _var0,
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__iter_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k154" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k154, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.109 4 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 4 1) (##inline ##sys.cons (bruijn ##x.118 3 0) (quote ()))) (quote ())) (##inline ##sys.cons (bruijn ##x.113 0 0) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[0]), runtime,
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
upenv->up->up->up->vars[1],
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
static void _V0match__iter_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k153" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-ellipses 28 1) (close _V0match__iter_k154) (bruijn ##x.114 0 0) (bruijn pattern-stack 26 2) (bruijn success-expr 26 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k154, env)}),
      _var0,
      VGetArg(upenv, 26-1, 2),
      VGetArg(upenv, 26-1, 3)
    );
 }
}
static void _V0match__iter_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k152" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 31 15) (close _V0match__iter_k153) (bruijn sym 2 1) (bruijn ##x.115 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k153, env)}),
      upenv->up->vars[1],
      _var0
    );
 }
}
static void _V0match__iter_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k151" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 30 19) (close _V0match__iter_k152) (bruijn expr-stack 24 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k152, env)}),
      VGetArg(upenv, 24-1, 1)
    );
 }
}
static void _V0match__iter_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__iter_lambda15" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 29 4) (close _V0match__iter_k151) (bruijn expr-stack 23 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k151, env)}),
      VGetArg(upenv, 23-1, 1)
    );
 }
}
static void _V0match__iter_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k150" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_lambda15) (bruijn ##k.50 22 0) (bruijn ##x.119 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_lambda15, env)}, runtime,
      VGetArg(upenv, 22-1, 0),
      _var0
    );
 }
}
static void _V0match__iter_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k163" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k163, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.121 6 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 1) (##inline ##sys.cons (bruijn ##x.145 5 0) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn sym 6 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.129 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 0)), runtime,
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(upenv, 6-1, 1),
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
VGetArg(upenv, 6-1, 1),
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
static void _V0match__iter_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k162" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 32 2) (close _V0match__iter_k163) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (bruijn ##x.139 3 0))) (##inline ##sys.cons (bruijn ##x.132 2 0) (##inline ##sys.cons (bruijn ##x.134 1 0) (bruijn ##x.135 0 0))) (bruijn success-expr 30 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k163, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
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
      VGetArg(upenv, 30-1, 3)
    );
 }
}
static void _V0match__iter_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k161" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 35 19) (close _V0match__iter_k162) (bruijn pattern-stack 29 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 35-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k162, env)}),
      VGetArg(upenv, 29-1, 2)
    );
 }
}
static void _V0match__iter_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k160" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 34 16) (close _V0match__iter_k161) (bruijn pattern-stack 28 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k161, env)}),
      VGetArg(upenv, 28-1, 2)
    );
 }
}
static void _V0match__iter_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k159" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caar 33 18) (close _V0match__iter_k160) (bruijn pattern-stack 27 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k160, env)}),
      VGetArg(upenv, 27-1, 2)
    );
 }
}
static void _V0match__iter_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k158" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 32 19) (close _V0match__iter_k159) (bruijn expr-stack 26 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k159, env)}),
      VGetArg(upenv, 26-1, 1)
    );
 }
}
static void _V0match__iter_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__iter_lambda16" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 31 4) (close _V0match__iter_k158) (bruijn expr-stack 25 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k158, env)}),
      VGetArg(upenv, 25-1, 1)
    );
 }
}
static void _V0match__iter_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k157" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_lambda16) (bruijn ##k.50 24 0) (bruijn ##x.146 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_lambda16, env)}, runtime,
      VGetArg(upenv, 24-1, 0),
      _var0
    );
 }
}
static void _V0match__iter_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k156" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.120 0 0) ((bruijn gensym 29 20) (close _V0match__iter_k157) (##string ##string.312)) ((bruijn error 29 2) (bruijn ##k.50 23 0) (##string ##string.310)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k157, env)}),
      VEncodePointer(&_V10string_D312.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 2)), runtime,
      VGetArg(upenv, 23-1, 0),
      VEncodePointer(&_V10string_D310.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0match__iter_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k155" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 28 3) (close _V0match__iter_k156) (bruijn ##x.147 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k156, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k149" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.108 0 0) ((bruijn gensym 27 20) (close _V0match__iter_k150) (##string ##string.312)) ((bruijn car 27 4) (close _V0match__iter_k155) (bruijn pattern-stack 21 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k150, env)}),
      VEncodePointer(&_V10string_D312.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k155, env)}),
      VGetArg(upenv, 21-1, 2)
    );
}
 }
}
static void _V0match__iter_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k148" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 23 2) (close _V0match__iter_k149) (bruijn ##x.150 0 0) (quote ...))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k149, env)}),
      _var0,
      VEncodePointer(&_V0_D_D_D.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__iter_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k172" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k172, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.121 6 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 1) (##inline ##sys.cons (bruijn ##x.145 5 0) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn sym 6 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.129 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 0)), runtime,
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(upenv, 6-1, 1),
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
VGetArg(upenv, 6-1, 1),
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
static void _V0match__iter_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k171" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 30 2) (close _V0match__iter_k172) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (bruijn ##x.139 3 0))) (##inline ##sys.cons (bruijn ##x.132 2 0) (##inline ##sys.cons (bruijn ##x.134 1 0) (bruijn ##x.135 0 0))) (bruijn success-expr 28 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k172, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
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
      VGetArg(upenv, 28-1, 3)
    );
 }
}
static void _V0match__iter_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k170" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 33 19) (close _V0match__iter_k171) (bruijn pattern-stack 27 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k171, env)}),
      VGetArg(upenv, 27-1, 2)
    );
 }
}
static void _V0match__iter_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k169" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 32 16) (close _V0match__iter_k170) (bruijn pattern-stack 26 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k170, env)}),
      VGetArg(upenv, 26-1, 2)
    );
 }
}
static void _V0match__iter_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k168" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caar 31 18) (close _V0match__iter_k169) (bruijn pattern-stack 25 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k169, env)}),
      VGetArg(upenv, 25-1, 2)
    );
 }
}
static void _V0match__iter_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k167" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 30 19) (close _V0match__iter_k168) (bruijn expr-stack 24 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k168, env)}),
      VGetArg(upenv, 24-1, 1)
    );
 }
}
static void _V0match__iter_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__iter_lambda17" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 29 4) (close _V0match__iter_k167) (bruijn expr-stack 23 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k167, env)}),
      VGetArg(upenv, 23-1, 1)
    );
 }
}
static void _V0match__iter_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k166" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_lambda17) (bruijn ##k.50 22 0) (bruijn ##x.146 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_lambda17, env)}, runtime,
      VGetArg(upenv, 22-1, 0),
      _var0
    );
 }
}
static void _V0match__iter_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k165" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.120 0 0) ((bruijn gensym 27 20) (close _V0match__iter_k166) (##string ##string.312)) ((bruijn error 27 2) (bruijn ##k.50 21 0) (##string ##string.310)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k166, env)}),
      VEncodePointer(&_V10string_D312.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 2)), runtime,
      VGetArg(upenv, 21-1, 0),
      VEncodePointer(&_V10string_D310.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0match__iter_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k164" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 26 3) (close _V0match__iter_k165) (bruijn ##x.147 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k165, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k147" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.149 0 0) ((bruijn cadar 25 5) (close _V0match__iter_k148) (bruijn pattern-stack 19 2)) ((bruijn car 25 4) (close _V0match__iter_k164) (bruijn pattern-stack 19 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k148, env)}),
      VGetArg(upenv, 19-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k164, env)}),
      VGetArg(upenv, 19-1, 2)
    );
}
 }
}
static void _V0match__iter_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k146" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 24 3) (close _V0match__iter_k147) (bruijn ##x.151 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k147, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k181" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k181, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.121 6 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 1) (##inline ##sys.cons (bruijn ##x.145 5 0) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn sym 6 1) (quote ()))) (##inline ##sys.cons (bruijn ##x.129 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 0)), runtime,
      VInlineCons(
VEncodePointer(&_V0let.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VInlineCons(
VGetArg(upenv, 6-1, 1),
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
VGetArg(upenv, 6-1, 1),
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
static void _V0match__iter_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k180" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 28 2) (close _V0match__iter_k181) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn sym 5 1) (quote ()))) (bruijn ##x.139 3 0))) (##inline ##sys.cons (bruijn ##x.132 2 0) (##inline ##sys.cons (bruijn ##x.134 1 0) (bruijn ##x.135 0 0))) (bruijn success-expr 26 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k181, env)}),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 1),
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
      VGetArg(upenv, 26-1, 3)
    );
 }
}
static void _V0match__iter_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k179" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 31 19) (close _V0match__iter_k180) (bruijn pattern-stack 25 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k180, env)}),
      VGetArg(upenv, 25-1, 2)
    );
 }
}
static void _V0match__iter_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k178" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 30 16) (close _V0match__iter_k179) (bruijn pattern-stack 24 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k179, env)}),
      VGetArg(upenv, 24-1, 2)
    );
 }
}
static void _V0match__iter_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k177" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caar 29 18) (close _V0match__iter_k178) (bruijn pattern-stack 23 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k178, env)}),
      VGetArg(upenv, 23-1, 2)
    );
 }
}
static void _V0match__iter_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k176" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 28 19) (close _V0match__iter_k177) (bruijn expr-stack 22 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k177, env)}),
      VGetArg(upenv, 22-1, 1)
    );
 }
}
static void _V0match__iter_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__iter_lambda18" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 27 4) (close _V0match__iter_k176) (bruijn expr-stack 21 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k176, env)}),
      VGetArg(upenv, 21-1, 1)
    );
 }
}
static void _V0match__iter_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k175" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_lambda18) (bruijn ##k.50 20 0) (bruijn ##x.146 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_lambda18, env)}, runtime,
      VGetArg(upenv, 20-1, 0),
      _var0
    );
 }
}
static void _V0match__iter_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k174" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.120 0 0) ((bruijn gensym 25 20) (close _V0match__iter_k175) (##string ##string.312)) ((bruijn error 25 2) (bruijn ##k.50 19 0) (##string ##string.310)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k175, env)}),
      VEncodePointer(&_V10string_D312.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 2)), runtime,
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V10string_D310.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0match__iter_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k173" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 24 3) (close _V0match__iter_k174) (bruijn ##x.147 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k174, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k145" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.148 0 0) ((bruijn cdar 23 16) (close _V0match__iter_k146) (bruijn pattern-stack 17 2)) ((bruijn car 23 4) (close _V0match__iter_k173) (bruijn pattern-stack 17 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k146, env)}),
      VGetArg(upenv, 17-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k173, env)}),
      VGetArg(upenv, 17-1, 2)
    );
}
 }
}
static void _V0match__iter_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k144" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 22 3) (close _V0match__iter_k145) (bruijn ##x.152 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k145, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k75" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.153 0 0) ((bruijn caar 21 18) (close _V0match__iter_k76) (bruijn pattern-stack 15 2)) ((bruijn car 21 4) (close _V0match__iter_k144) (bruijn pattern-stack 15 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k76, env)}),
      VGetArg(upenv, 15-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k144, env)}),
      VGetArg(upenv, 15-1, 2)
    );
}
 }
}
static void _V0match__iter_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k74" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 20 3) (close _V0match__iter_k75) (bruijn ##x.155 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k75, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k68" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.77 0 0) ((bruijn car 19 4) (close _V0match__iter_k69) (bruijn pattern-stack 13 2)) ((bruijn car 19 4) (close _V0match__iter_k74) (bruijn pattern-stack 13 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k69, env)}),
      VGetArg(upenv, 13-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k74, env)}),
      VGetArg(upenv, 13-1, 2)
    );
}
 }
}
static void _V0match__iter_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k67" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn atom? 18 8) (close _V0match__iter_k68) (bruijn ##x.156 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k68, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k66" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.76 0 0) ((bruijn error 17 2) (bruijn ##k.50 11 0) (##string ##string.310)) ((bruijn car 17 4) (close _V0match__iter_k67) (bruijn pattern-stack 11 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 2)), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D310.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k67, env)}),
      VGetArg(upenv, 11-1, 2)
    );
}
 }
}
static void _V0match__iter_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k65" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string? 16 9) (close _V0match__iter_k66) (bruijn ##x.157 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k66, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k60" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.67 0 0) ((bruijn car 15 4) (close _V0match__iter_k61) (bruijn expr-stack 9 1)) ((bruijn car 15 4) (close _V0match__iter_k65) (bruijn pattern-stack 9 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k61, env)}),
      VGetArg(upenv, 9-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k65, env)}),
      VGetArg(upenv, 9-1, 2)
    );
}
 }
}
static void _V0match__iter_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k59" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 14 14) (close _V0match__iter_k60) (bruijn ##x.158 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k60, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k58" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.66 0 0) ((bruijn error 13 2) (bruijn ##k.50 7 0) (##string ##string.310)) ((bruijn car 13 4) (close _V0match__iter_k59) (bruijn pattern-stack 7 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 2)), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D310.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k59, env)}),
      VGetArg(upenv, 7-1, 2)
    );
}
 }
}
static void _V0match__iter_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k57" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn vector? 12 10) (close _V0match__iter_k58) (bruijn ##x.159 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k58, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k51" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.55 0 0) ((bruijn car 11 4) (close _V0match__iter_k52) (bruijn pattern-stack 5 2)) ((bruijn car 11 4) (close _V0match__iter_k57) (bruijn pattern-stack 5 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k52, env)}),
      VGetArg(upenv, 5-1, 2)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k57, env)}),
      VGetArg(upenv, 5-1, 2)
    );
}
 }
}
static void _V0match__iter_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k50" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol? 10 11) (close _V0match__iter_k51) (bruijn ##x.160 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k51, env)}),
      _var0
    );
 }
}
static void _V0match__iter_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k47" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.52 0 0) ((bruijn cdr 9 19) (close _V0match__iter_k48) (bruijn expr-stack 3 1)) ((bruijn car 9 4) (close _V0match__iter_k50) (bruijn pattern-stack 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k48, env)}),
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k50, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0match__iter_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k46" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 5 2) (close _V0match__iter_k47) (bruijn ##x.161 0 0) (quote _))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k47, env)}),
      _var0,
      VEncodePointer(&_V0_U.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__iter_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k45" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.51 0 0) ((bruijn ##k.50 1 0) (bruijn success-expr 1 3)) ((bruijn car 7 4) (close _V0match__iter_k46) (bruijn pattern-stack 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      upenv->vars[3]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k46, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0match__iter_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0match__iter_lambda10" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0match__iter_lambda10, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__iter_lambda10, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 6 14) (close _V0match__iter_k45) (bruijn pattern-stack 0 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_k45, env)}),
      _var2
    );
 }
}
static void _V0transform__match_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0transform__match_k26" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0transform__match_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0transform__match_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0transform__match_k27) (bruijn match-iter 1 2) (close _V0match__iter_lambda10))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0transform__match_k27, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__iter_lambda10, env)})
    );
 }
}
static void _V0match__ellipses_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k202" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k202, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.170 12 0) (##inline ##sys.cons (quote call-with-values) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (##inline ##sys.cons (quote call/cc) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 16 1) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (quote loop) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn expr 12 1) (##inline ##sys.cons (bruijn ##x.246 11 0) (quote ()))) (bruijn ##x.240 10 0)) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.not) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn expr 12 1) (quote ()))) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 16 1) (##inline ##sys.cons (bruijn expr 12 1) (bruijn ##x.233 9 0))) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-values) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (##inline ##sys.cons (quote call/cc) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (bruijn k2 14 1) (quote ())) (##inline ##sys.cons (bruijn ##x.209 5 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 16 1) (##inline ##sys.cons (bruijn expr 12 1) (bruijn ##x.213 4 0))) (quote ()))))) (quote ()))) (quote ())))) (##inline ##sys.cons (quote loop) (quote ())))) (quote ())))))) (quote ())))) (quote ()))) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (quote tail-expr) (bruijn variables 20 1)) (##inline ##sys.cons (bruijn ##x.178 0 0) (quote ())))) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 0)), runtime,
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
VGetArg(upenv, 16-1, 1),
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
VGetArg(upenv, 12-1, 1),
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
VGetArg(upenv, 12-1, 1),
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
VGetArg(upenv, 16-1, 1),
      VInlineCons(
VGetArg(upenv, 12-1, 1),
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
VGetArg(upenv, 14-1, 1),
      VNULL
    )
,
      VInlineCons(
VGetArg(upenv, 5-1, 0),
      VInlineCons(
VInlineCons(
VGetArg(upenv, 16-1, 1),
      VInlineCons(
VGetArg(upenv, 12-1, 1),
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
      VGetArg(upenv, 20-1, 1)
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
static void _V0match__ellipses_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k201" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 29 2) (close _V0match__ellipses_k202) (bruijn ##x.179 1 0) (bruijn ##x.180 0 0) (bruijn success-expr 28 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k202, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 28-1, 3)
    );
 }
}
static void _V0match__ellipses_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k200" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 32 15) (close _V0match__ellipses_k201) (bruijn tail-pattern 23 1) (bruijn pattern-stack 21 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k201, env)}),
      VGetArg(upenv, 23-1, 1),
      VGetArg(upenv, 21-1, 1)
    );
 }
}
static void _V0match__ellipses_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k199" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 31 15) (close _V0match__ellipses_k200) (quote tail-expr) (bruijn ##x.181 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 15)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k200, env)}),
      VEncodePointer(&_V0tail__expr.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0match__ellipses_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k198" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 30 19) (close _V0match__ellipses_k199) (bruijn expr-stack 25 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k199, env)}),
      VGetArg(upenv, 25-1, 1)
    );
 }
}
static void _V0match__ellipses_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda28" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0match__ellipses_lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.214 0 0) (##inline ##sys.cons (quote reverse) (##inline ##sys.cons (bruijn sym 0 1) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
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
static void _V0match__ellipses_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k197" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 29 1) (close _V0match__ellipses_k198) (close _V0match__ellipses_lambda28) (bruijn syms 13 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k198, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_lambda28, env)}),
      VGetArg(upenv, 13-1, 1)
    );
 }
}
static void _V0match__ellipses_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k196" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 24 2) (close _V0match__ellipses_k197) (bruijn ##x.216 2 0) (bruijn ##x.217 1 0) (##inline ##sys.cons (bruijn k2 8 1) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn expr 6 1) (quote ()))) (bruijn ##x.221 0 0))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k197, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      VInlineCons(
VGetArg(upenv, 8-1, 1),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 6-1, 1),
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
static void _V0match__ellipses_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda29" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0match__ellipses_lambda29, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_lambda29, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##k.222 0 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn var 0 1) (##inline ##sys.cons (bruijn sym 0 2) (quote ())))))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
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
static void _V0match__ellipses_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k195" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 27 1) (close _V0match__ellipses_k196) (close _V0match__ellipses_lambda29) (bruijn variables 13 1) (bruijn syms 11 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k196, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_lambda29, env)}),
      VGetArg(upenv, 13-1, 1),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0match__ellipses_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k194" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 26 17) (close _V0match__ellipses_k195) (bruijn pattern 19 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k195, env)}),
      VGetArg(upenv, 19-1, 1)
    );
 }
}
static void _V0match__ellipses_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k193" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 25 17) (close _V0match__ellipses_k194) (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn expr 3 1) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k194, env)}),
      VInlineCons(
VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->vars[1],
      VNULL
    )

    )

    );
 }
}
static void _V0match__ellipses_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda30" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0match__ellipses_lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.234 0 0) (##inline ##sys.cons (quote reverse) (##inline ##sys.cons (bruijn sym 0 1) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
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
static void _V0match__ellipses_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k192" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 24 1) (close _V0match__ellipses_k193) (close _V0match__ellipses_lambda30) (bruijn syms 8 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k193, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_lambda30, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0match__ellipses_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda31" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0match__ellipses_lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.241 0 0) (##inline ##sys.cons (bruijn sym 0 1) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (quote ()) (quote ()))) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
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
static void _V0match__ellipses_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k191" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 23 1) (close _V0match__ellipses_k192) (close _V0match__ellipses_lambda31) (bruijn syms 7 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k192, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_lambda31, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0match__ellipses_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda27" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 22 4) (close _V0match__ellipses_k191) (bruijn expr-stack 17 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k191, env)}),
      VGetArg(upenv, 17-1, 1)
    );
 }
}
static void _V0match__ellipses_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k190" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__ellipses_lambda27) (bruijn ##k.169 1 0) (bruijn ##x.247 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_lambda27, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0match__ellipses_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda26" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn gensym 20 20) (close _V0match__ellipses_k190) (##string ##string.312))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k190, env)}),
      VEncodePointer(&_V10string_D312.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__ellipses_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k189" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__ellipses_lambda26) (bruijn ##k.168 1 0) (bruijn ##x.248 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_lambda26, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0match__ellipses_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda25" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn gensym 18 20) (close _V0match__ellipses_k189) (##string ##string.309))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k189, env)}),
      VEncodePointer(&_V10string_D309.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__ellipses_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k188" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__ellipses_lambda25) (bruijn ##k.167 1 0) (bruijn ##x.249 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_lambda25, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0match__ellipses_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn gensym 16 20) (close _V0match__ellipses_k188) (##string ##string.309))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k188, env)}),
      VEncodePointer(&_V10string_D309.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__ellipses_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k187" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__ellipses_lambda24) (bruijn ##k.166 1 0) (bruijn ##x.250 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_lambda24, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0match__ellipses_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda23" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 14 1) (close _V0match__ellipses_k187) (bruijn gensym 14 20) (bruijn variables 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k187, env)}),
      VGetArg(upenv, 14-1, 20),
      _var1
    );
 }
}
static void _V0match__ellipses_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k186" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__ellipses_lambda23) (bruijn ##k.165 2 0) (bruijn ##x.251 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_lambda23, env)}, runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0match__ellipses_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k185" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gather-variables 11 1) (close _V0match__ellipses_k186) (bruijn ##x.252 0 0) (bruijn eqv? 9 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k186, env)}),
      _var0,
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0match__ellipses_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda22" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn list 11 17) (close _V0match__ellipses_k185) (bruijn pattern 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k185, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0match__ellipses_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k184" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__ellipses_lambda22) (bruijn ##k.164 1 0) (bruijn ##x.253 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_lambda22, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0match__ellipses_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda21" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 9 19) (close _V0match__ellipses_k184) (bruijn pattern-stack 4 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k184, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0match__ellipses_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k183" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__ellipses_lambda21) (bruijn ##k.163 1 0) (bruijn ##x.254 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_lambda21, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0match__ellipses_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda20" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cddar 7 6) (close _V0match__ellipses_k183) (bruijn pattern-stack 2 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k183, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0match__ellipses_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k182" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__ellipses_lambda20) (bruijn ##k.162 1 0) (bruijn ##x.255 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_lambda20, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0match__ellipses_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda19" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0match__ellipses_lambda19, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0match__ellipses_lambda19, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn caar 5 18) (close _V0match__ellipses_k182) (bruijn pattern-stack 0 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_k182, env)}),
      _var2
    );
 }
}
static void _V0transform__match_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0transform__match_lambda6" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0transform__match_lambda6, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V0transform__match_k26) (bruijn match-ellipses 0 1) (close _V0match__ellipses_lambda19))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0transform__match_k26, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0match__ellipses_lambda19, env)})
    );
 }
}
static void _V0transform__match_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0transform__match_lambda5" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0transform__match_lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0transform__match_lambda5, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0transform__match_lambda6) (bruijn ##k.8 0 0) #f #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0transform__match_lambda6, env)}, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void match_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k24" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close match_k25) (bruijn transform-match 1 2) (close _V0transform__match_lambda5))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k25, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0transform__match_lambda5, env)})
    );
 }
}
static void _V0gather__variables_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k206" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k206, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 5 1) (bruijn ##k.256 4 0) (bruijn ##x.259 0 0) (bruijn eqv? 4 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0gather__variables_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k209" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k209, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 7 1) (bruijn ##k.256 6 0) (bruijn ##x.261 0 0) (bruijn eqv? 6 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0gather__variables_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k214" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k214, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 12 15) (bruijn ##k.256 10 0) (bruijn ##x.263 2 0) (bruijn ##x.264 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 15)), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0gather__variables_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k213" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gather-variables 10 1) (close _V0gather__variables_k214) (bruijn ##x.265 0 0) (bruijn eqv? 9 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k214, env)}),
      _var0,
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0gather__variables_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k212" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 10 19) (close _V0gather__variables_k213) (bruijn pattern 8 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k213, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0gather__variables_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k219" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k219, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 13 1) (bruijn ##k.256 12 0) (bruijn ##x.268 0 0) (bruijn eqv? 12 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0,
      VGetArg(upenv, 12-1, 2)
    );
 }
}
static void _V0gather__variables_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k224" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k224, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 17 1) (bruijn ##k.256 16 0) (bruijn ##x.270 0 0) (bruijn eqv? 16 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      VGetArg(upenv, 16-1, 0),
      _var0,
      VGetArg(upenv, 16-1, 2)
    );
 }
}
static void _V0gather__variables_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k227" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k227, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 19 1) (bruijn ##k.256 18 0) (##inline ##sys.cons (bruijn ##x.272 2 0) (##inline ##sys.cons (bruijn ##x.274 1 0) (bruijn ##x.275 0 0))) (bruijn eqv? 18 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 1)), runtime,
      VGetArg(upenv, 18-1, 0),
      VInlineCons(
upenv->up->vars[0],
      VInlineCons(
upenv->vars[0],
      _var0
    )

    )
,
      VGetArg(upenv, 18-1, 2)
    );
 }
}
static void _V0gather__variables_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k226" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 19 19) (close _V0gather__variables_k227) (bruijn pattern 17 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k227, env)}),
      VGetArg(upenv, 17-1, 1)
    );
 }
}
static void _V0gather__variables_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k225" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 18 16) (close _V0gather__variables_k226) (bruijn pattern 16 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k226, env)}),
      VGetArg(upenv, 16-1, 1)
    );
 }
}
static void _V0gather__variables_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k223" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.269 0 0) ((bruijn cdr 17 19) (close _V0gather__variables_k224) (bruijn pattern 15 1)) ((bruijn caar 17 18) (close _V0gather__variables_k225) (bruijn pattern 15 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k224, env)}),
      VGetArg(upenv, 15-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k225, env)}),
      VGetArg(upenv, 15-1, 1)
    );
}
 }
}
static void _V0gather__variables_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k222" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 14 2) (close _V0gather__variables_k223) (bruijn ##x.277 0 0) (quote quote))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k223, env)}),
      _var0,
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0gather__variables_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k230" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k230, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 17 1) (bruijn ##k.256 16 0) (##inline ##sys.cons (bruijn ##x.272 2 0) (##inline ##sys.cons (bruijn ##x.274 1 0) (bruijn ##x.275 0 0))) (bruijn eqv? 16 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      VGetArg(upenv, 16-1, 0),
      VInlineCons(
upenv->up->vars[0],
      VInlineCons(
upenv->vars[0],
      _var0
    )

    )
,
      VGetArg(upenv, 16-1, 2)
    );
 }
}
static void _V0gather__variables_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k229" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 17 19) (close _V0gather__variables_k230) (bruijn pattern 15 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k230, env)}),
      VGetArg(upenv, 15-1, 1)
    );
 }
}
static void _V0gather__variables_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k228" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 16 16) (close _V0gather__variables_k229) (bruijn pattern 14 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k229, env)}),
      VGetArg(upenv, 14-1, 1)
    );
 }
}
static void _V0gather__variables_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k221" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.276 0 0) ((bruijn caar 15 18) (close _V0gather__variables_k222) (bruijn pattern 13 1)) ((bruijn caar 15 18) (close _V0gather__variables_k228) (bruijn pattern 13 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k222, env)}),
      VGetArg(upenv, 13-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 18)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k228, env)}),
      VGetArg(upenv, 13-1, 1)
    );
}
 }
}
static void _V0gather__variables_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k220" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 14 3) (close _V0gather__variables_k221) (bruijn ##x.278 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k221, env)}),
      _var0
    );
 }
}
static void _V0gather__variables_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k218" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.267 0 0) ((bruijn cdr 13 19) (close _V0gather__variables_k219) (bruijn pattern 11 1)) ((bruijn car 13 4) (close _V0gather__variables_k220) (bruijn pattern 11 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k219, env)}),
      VGetArg(upenv, 11-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k220, env)}),
      VGetArg(upenv, 11-1, 1)
    );
}
 }
}
static void _V0gather__variables_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k217" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn atom? 12 8) (close _V0gather__variables_k218) (bruijn ##x.279 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k218, env)}),
      _var0
    );
 }
}
static void _V0gather__variables_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k216" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.266 0 0) ((bruijn error 11 2) (bruijn ##k.256 9 0) (##string ##string.310)) ((bruijn car 11 4) (close _V0gather__variables_k217) (bruijn pattern 9 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 2)), runtime,
      VGetArg(upenv, 9-1, 0),
      VEncodePointer(&_V10string_D310.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k217, env)}),
      VGetArg(upenv, 9-1, 1)
    );
}
 }
}
static void _V0gather__variables_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k215" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn vector? 10 10) (close _V0gather__variables_k216) (bruijn ##x.280 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 10)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k216, env)}),
      _var0
    );
 }
}
static void _V0gather__variables_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k211" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.262 0 0) ((bruijn car 9 4) (close _V0gather__variables_k212) (bruijn pattern 7 1)) ((bruijn car 9 4) (close _V0gather__variables_k215) (bruijn pattern 7 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k212, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k215, env)}),
      VGetArg(upenv, 7-1, 1)
    );
}
 }
}
static void _V0gather__variables_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k210" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol? 8 11) (close _V0gather__variables_k211) (bruijn ##x.281 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k211, env)}),
      _var0
    );
 }
}
static void _V0gather__variables_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k208" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.260 0 0) ((bruijn cdr 7 19) (close _V0gather__variables_k209) (bruijn pattern 5 1)) ((bruijn car 7 4) (close _V0gather__variables_k210) (bruijn pattern 5 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k209, env)}),
      VGetArg(upenv, 5-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k210, env)}),
      VGetArg(upenv, 5-1, 1)
    );
}
 }
}
static void _V0gather__variables_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k207" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 4 2) (close _V0gather__variables_k208) (bruijn ##x.282 0 0) (quote ...))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[2]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k208, env)}),
      _var0,
      VEncodePointer(&_V0_D_D_D.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0gather__variables_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k205" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.258 0 0) ((bruijn cdr 5 19) (close _V0gather__variables_k206) (bruijn pattern 3 1)) ((bruijn car 5 4) (close _V0gather__variables_k207) (bruijn pattern 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k206, env)}),
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k207, env)}),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0gather__variables_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k204" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 2 2) (close _V0gather__variables_k205) (bruijn ##x.283 0 0) (quote _))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[2]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k205, env)}),
      _var0,
      VEncodePointer(&_V0_U.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0gather__variables_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k203" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.257 0 0) ((bruijn ##k.256 1 0) (quote ())) ((bruijn car 3 4) (close _V0gather__variables_k204) (bruijn pattern 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VNULL
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[4]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k204, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0gather__variables_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0gather__variables_lambda32" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0gather__variables_lambda32, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0gather__variables_lambda32, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 2 14) (close _V0gather__variables_k203) (bruijn pattern 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[14]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_k203, env)}),
      _var1
    );
 }
}
static void match_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "match_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)match_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close match_k24) (bruijn gather-variables 0 1) (close _V0gather__variables_lambda32))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k24, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0gather__variables_lambda32, env)})
    );
 }
}
static void match_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20) {
 static VDebugInfo dbg = { "match_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)match_lambda3, runtime, upenv, 21, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20) {
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
  // ((close match_lambda4) (bruijn ##k.3 0 0) #f #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)match_lambda4, env)}, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void match_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k23" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close match_lambda3) (bruijn ##k.2 20 0) (bruijn ##x.284 19 0) (bruijn ##x.285 18 0) (bruijn ##x.286 17 0) (bruijn ##x.287 16 0) (bruijn ##x.288 15 0) (bruijn ##x.289 14 0) (bruijn ##x.290 13 0) (bruijn ##x.291 12 0) (bruijn ##x.292 11 0) (bruijn ##x.293 10 0) (bruijn ##x.294 9 0) (bruijn ##x.295 8 0) (bruijn ##x.296 7 0) (bruijn ##x.297 6 0) (bruijn ##x.298 5 0) (bruijn ##x.299 4 0) (bruijn ##x.300 3 0) (bruijn ##x.301 2 0) (bruijn ##x.302 1 0) (bruijn ##x.303 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)match_lambda3, env)}, runtime,
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
static void match_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 1) (close match_k23) (quote gensym))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k23, env)}),
      VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 1) (close match_k22) (quote cdr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k22, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k20" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 1) (close match_k21) (quote caar))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k21, env)}),
      VEncodePointer(&_V0caar.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 1) (close match_k20) (quote list))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k20, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 1) (close match_k19) (quote cdar))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k19, env)}),
      VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 1) (close match_k18) (quote cons))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k18, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 1) (close match_k17) (quote null?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k17, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 1) (close match_k16) (quote cddr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k16, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 1) (close match_k15) (quote cadr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k15, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 1) (close match_k14) (quote symbol?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k14, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 1) (close match_k13) (quote vector?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k13, env)}),
      VEncodePointer(&_V0vector_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 1) (close match_k12) (quote string?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k12, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 1) (close match_k11) (quote atom?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k11, env)}),
      VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 1) (close match_k10) (quote not))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k10, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 1) (close match_k9) (quote cddar))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k9, env)}),
      VEncodePointer(&_V0cddar.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k7" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 1) (close match_k8) (quote cadar))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k8, env)}),
      VEncodePointer(&_V0cadar.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k6" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 1) (close match_k7) (quote car))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k7, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k5" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 1) (close match_k6) (quote pair?))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k6, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k4" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 1) (close match_k5) (quote error))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k5, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 }
}
static void match_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "match_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)match_lambda2, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##vcore.import 0 1) (close match_k4) (quote map))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k4, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void match_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k3" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close match_lambda2) (bruijn ##k.1 3 0) (bruijn ##x.304 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)match_lambda2, env)}, runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void match_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k2" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close match_k3) (##string ##string.313) (bruijn ##x.305 1 0) (bruijn ##x.306 0 0))
    V_CALL_FUNC2(VMakeImport2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k3, env)}),
      VEncodePointer(&_V10string_D313.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0
    );
 }
}
static void match_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_k1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close match_k2) (##string ##string.314))
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k2, env)}),
      VEncodePointer(&_V10string_D314.sym, VPOINTER_OTHER)
    );
 }
}
static void match_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "match_lambda1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to match_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)match_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close match_k1) (##string ##string.315))
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)match_k1, env)}),
      VEncodePointer(&_V10string_D315.sym, VPOINTER_OTHER)
    );
 }
}
VFunc2 match = (VFunc2)match_lambda1;
