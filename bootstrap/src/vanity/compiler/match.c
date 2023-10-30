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
static struct { VBlob sym; char bytes[21]; } _V10string_D318 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D317 = { { VSTRING, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D316 = { { VSTRING, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[15]; } _V0compiler__error = { { VSYMBOL, 15 }, "compiler-error" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
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
static struct { VBlob sym; char bytes[30]; } _V10string_D315 = { { VSTRING, 30 }, "unknown form in match pattern" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dcdr = { { VSYMBOL, 10 }, "##sys.cdr" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dcar = { { VSYMBOL, 10 }, "##sys.car" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dpair_Q = { { VSYMBOL, 12 }, "##sys.pair\?" };
static struct { VBlob sym; char bytes[5]; } _V10string_D314 = { { VSTRING, 5 }, "expr" };
static struct { VBlob sym; char bytes[4]; } _V0_D_D_D = { { VSYMBOL, 4 }, "..." };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[16]; } _V10string_D313 = { { VSTRING, 16 }, "malformed quote" };
static struct { VBlob sym; char bytes[6]; } _V0quote = { { VSYMBOL, 6 }, "quote" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Deq_Q = { { VSYMBOL, 10 }, "##sys.eq\?" };
static struct { VBlob sym; char bytes[13]; } _V10sys_Dblob_E_Q = { { VSYMBOL, 13 }, "##sys.blob=\?" };
static struct { VBlob sym; char bytes[14]; } _V10sys_Dstring_Q = { { VSYMBOL, 14 }, "##sys.string\?" };
static struct { VBlob sym; char bytes[4]; } _V0and = { { VSYMBOL, 4 }, "and" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dnull_Q = { { VSYMBOL, 12 }, "##sys.null\?" };
static struct { VBlob sym; char bytes[3]; } _V0if = { { VSYMBOL, 3 }, "if" };
static struct { VBlob sym; char bytes[39]; } _V10string_D312 = { { VSTRING, 39 }, "vectors in matches not implemented yet" };
static struct { VBlob sym; char bytes[3]; } _V10string_D311 = { { VSTRING, 3 }, "kk" };
static struct { VBlob sym; char bytes[6]; } _V10string_D310 = { { VSTRING, 6 }, "input" };
static struct { VBlob sym; char bytes[4]; } _V0let = { { VSYMBOL, 4 }, "let" };
static struct { VBlob sym; char bytes[7]; } _V0lambda = { { VSYMBOL, 7 }, "lambda" };
static struct { VBlob sym; char bytes[8]; } _V0call_Wcc = { { VSYMBOL, 8 }, "call/cc" };
static struct { VBlob sym; char bytes[5]; } _V0else = { { VSYMBOL, 5 }, "else" };
static struct { VBlob sym; char bytes[6]; } _V0begin = { { VSYMBOL, 6 }, "begin" };
static struct { VBlob sym; char bytes[26]; } _V10string_D309 = { { VSTRING, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[16]; } _V0transform__match = { { VSYMBOL, 16 }, "transform-match" };
static void _V0vanity_V0compiler_V0match_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k25, runtime, upenv, 1, argc, _var0) {
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
 static VDebugInfo dbg = { "_V0transform__match_k32" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0transform__match_k31" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0loop_k36" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0loop_k43" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0loop_k42" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0loop_k41" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0loop_k40" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0loop_k39" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0loop_k38" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0loop_k37" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0loop_k35" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0loop_k34" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0loop_k33" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.25 0 0) ((bruijn ##k.24 1 0) (##inline ##sys.cons (##inline ##sys.cons (quote error) (##inline ##sys.cons (quote (##string ##string.309)) (quote ()))) (quote ()))) ((bruijn caar 13 18) (close _V0loop_k34) (bruijn patterns 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0error.sym, VPOINTER_OTHER),
      VInlineCons(
VEncodePointer(&_V10string_D309.sym, VPOINTER_OTHER),
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
 static VDebugInfo dbg = { "_V0loop_lambda8" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0transform__match_lambda7" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0transform__match_k44" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0transform__match_k30" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0transform__match_lambda6" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0transform__match_k29" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0transform__match_k28" };
 VRecordCall(&dbg);
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
  // ((bruijn gensym 7 20) (close _V0transform__match_k29) (##string ##string.310))
V_CALL(VGetArg(upenv, 7-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0transform__match_k29, env)}),
      VEncodePointer(&_V10string_D310.sym, VPOINTER_OTHER)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0transform__match_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gensym 6 20) (close _V0transform__match_k28) (##string ##string.311))
V_CALL(VGetArg(upenv, 6-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0transform__match_k28, env)}),
      VEncodePointer(&_V10string_D311.sym, VPOINTER_OTHER)
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
 static VDebugInfo dbg = { "_V0match__iter_k48" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0match__iter_k56" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0match__iter_k55" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0match__iter_k54" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0match__iter_k53" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0match__iter_k52" };
 VRecordCall(&dbg);
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
  // ((bruijn car 12 2) (close _V0match__iter_k53) (bruijn expr-stack 6 1))
V_CALL(VGetArg(upenv, 12-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k53, env)}),
      VGetArg(upenv, 6-1, 1)
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k59, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 14 3) (bruijn ##k.49 8 0) (##string ##string.312) (bruijn ##x.66 0 0))
V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10string_D312.sym, VPOINTER_OTHER),
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k65, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.49 13 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.null?) (##inline ##sys.cons (bruijn ##x.75 3 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.71 0 0) (quote ())))))
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
static void _V0match__iter_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k64" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 14 2) (close _V0match__iter_k65) (bruijn ##x.72 1 0) (bruijn ##x.73 0 0) (bruijn success-expr 12 3))
V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k65, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 12-1, 3)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 17 19) (close _V0match__iter_k64) (bruijn pattern-stack 11 2))
V_CALL(VGetArg(upenv, 17-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k64, env)}),
      VGetArg(upenv, 11-1, 2)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 16 19) (close _V0match__iter_k63) (bruijn expr-stack 10 1))
V_CALL(VGetArg(upenv, 16-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k63, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k73, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.49 17 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote and) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.string?) (##inline ##sys.cons (bruijn ##x.92 5 0) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.blob=?) (##inline ##sys.cons (bruijn ##x.88 4 0) (##inline ##sys.cons (bruijn ##x.90 3 0) (quote ())))) (quote ())))) (##inline ##sys.cons (bruijn ##x.80 0 0) (quote ())))))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VInlineCons(
VEncodePointer(&_V0if.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0and.sym, VPOINTER_OTHER),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dstring_Q.sym, VPOINTER_OTHER),
      VInlineCons(
VGetArg(upenv, 5-1, 0),
      VNULL
    )

    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V10sys_Dblob_E_Q.sym, VPOINTER_OTHER),
      VInlineCons(
upenv->up->up->up->vars[0],
      VInlineCons(
upenv->up->up->vars[0],
      VNULL
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 18 2) (close _V0match__iter_k73) (bruijn ##x.81 1 0) (bruijn ##x.82 0 0) (bruijn success-expr 16 3))
V_CALL(VGetArg(upenv, 18-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k73, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 16-1, 3)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 21 19) (close _V0match__iter_k72) (bruijn pattern-stack 15 2))
V_CALL(VGetArg(upenv, 21-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k72, env)}),
      VGetArg(upenv, 15-1, 2)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 20 19) (close _V0match__iter_k71) (bruijn expr-stack 14 1))
V_CALL(VGetArg(upenv, 20-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k71, env)}),
      VGetArg(upenv, 14-1, 1)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 19 2) (close _V0match__iter_k70) (bruijn expr-stack 13 1))
V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k70, env)}),
      VGetArg(upenv, 13-1, 1)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 18 2) (close _V0match__iter_k69) (bruijn pattern-stack 12 2))
V_CALL(VGetArg(upenv, 18-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k69, env)}),
      VGetArg(upenv, 12-1, 2)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k80, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.49 18 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.eq?) (##inline ##sys.cons (bruijn ##x.101 4 0) (##inline ##sys.cons (bruijn ##x.103 3 0) (quote ())))) (##inline ##sys.cons (bruijn ##x.97 0 0) (quote ())))))
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
static void _V0match__iter_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k79" };
 VRecordCall(&dbg);
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
  // ((bruijn match-iter 19 2) (close _V0match__iter_k80) (bruijn ##x.98 1 0) (bruijn ##x.99 0 0) (bruijn success-expr 17 3))
V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k80, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 17-1, 3)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 22 19) (close _V0match__iter_k79) (bruijn pattern-stack 16 2))
V_CALL(VGetArg(upenv, 22-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k79, env)}),
      VGetArg(upenv, 16-1, 2)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 21 19) (close _V0match__iter_k78) (bruijn expr-stack 15 1))
V_CALL(VGetArg(upenv, 21-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k78, env)}),
      VGetArg(upenv, 15-1, 1)
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 20 2) (close _V0match__iter_k77) (bruijn expr-stack 14 1))
V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k77, env)}),
      VGetArg(upenv, 14-1, 1)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k84, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 20 2) (bruijn ##k.170 1 0) (bruijn ##x.171 0 0) (quote quote))
V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.169 1 0) ((bruijn caar 22 18) (close _V0match__iter_k84) (bruijn pattern-stack 16 2)) ((bruijn ##k.170 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 22-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k84, env)}),
      VGetArg(upenv, 16-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k91, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 28 7) (bruijn ##k.121 2 0) (bruijn ##x.122 0 0))
V_CALL(VGetArg(upenv, 28-1, 7), runtime,
      upenv->up->vars[0],
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 27 14) (close _V0match__iter_k91) (bruijn ##x.123 0 0))
V_CALL(VGetArg(upenv, 27-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k91, env)}),
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.120 1 0) ((bruijn ##k.121 0 0) (bruijn ##p.120 1 0)) ((bruijn cddar 26 6) (close _V0match__iter_k90) (bruijn pattern-stack 20 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 26-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k90, env)}),
      VGetArg(upenv, 20-1, 2)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k93, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.118 1 0) ((bruijn compiler-error 27 3) (bruijn ##k.119 0 0) (##string ##string.313)) ((bruijn ##k.119 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 27-1, 3), runtime,
      _var0,
      VEncodePointer(&_V10string_D313.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k99, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.49 26 0) (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote equal?) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (bruijn ##x.117 4 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.115 3 0) (quote ())))) (##inline ##sys.cons (bruijn ##x.109 0 0) (quote ())))))
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
static void _V0match__iter_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k98" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 27 2) (close _V0match__iter_k99) (bruijn ##x.110 1 0) (bruijn ##x.111 0 0) (bruijn success-expr 25 3))
V_CALL(VGetArg(upenv, 27-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k99, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 25-1, 3)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 30 19) (close _V0match__iter_k98) (bruijn pattern-stack 24 2))
V_CALL(VGetArg(upenv, 30-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k98, env)}),
      VGetArg(upenv, 24-1, 2)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 29 19) (close _V0match__iter_k97) (bruijn expr-stack 23 1))
V_CALL(VGetArg(upenv, 29-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k97, env)}),
      VGetArg(upenv, 23-1, 1)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 28 2) (close _V0match__iter_k96) (bruijn expr-stack 22 1))
V_CALL(VGetArg(upenv, 28-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k96, env)}),
      VGetArg(upenv, 22-1, 1)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadar 27 5) (close _V0match__iter_k95) (bruijn pattern-stack 21 2))
V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k95, env)}),
      VGetArg(upenv, 21-1, 2)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_k93) (close _V0match__iter_k94))
V_CALL_FUNC(_V0match__iter_k93, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k94, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_k89) (close _V0match__iter_k92))
V_CALL_FUNC(_V0match__iter_k89, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k92, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 24 7) (close _V0match__iter_k88) (bruijn ##x.124 0 0))
V_CALL(VGetArg(upenv, 24-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k88, env)}),
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 23 4) (close _V0match__iter_k87) (bruijn ##x.125 0 0))
V_CALL(VGetArg(upenv, 23-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k87, env)}),
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k105, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 25 2) (bruijn ##k.164 3 0) (bruijn ##x.166 0 0) (quote ...))
V_CALL(VGetArg(upenv, 25-1, 2), runtime,
      upenv->up->up->vars[0],
      _var0,
      VEncodePointer(&_V0_D_D_D.sym, VPOINTER_OTHER)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.165 0 0) ((bruijn cadar 27 5) (close _V0match__iter_k105) (bruijn pattern-stack 21 2)) ((bruijn ##k.164 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 27-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k105, env)}),
      VGetArg(upenv, 21-1, 2)
    );
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 26 4) (close _V0match__iter_k104) (bruijn ##x.167 0 0))
V_CALL(VGetArg(upenv, 26-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k104, env)}),
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.163 1 0) ((bruijn cdar 25 16) (close _V0match__iter_k103) (bruijn pattern-stack 19 2)) ((bruijn ##k.164 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 25-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k103, env)}),
      VGetArg(upenv, 19-1, 2)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k111, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.49 24 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 4 0) (##inline ##sys.cons (bruijn ##x.135 3 0) (quote ()))) (quote ())) (##inline ##sys.cons (bruijn ##x.130 0 0) (quote ())))))
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
static void _V0match__iter_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k110" };
 VRecordCall(&dbg);
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
  // ((bruijn match-ellipses 25 1) (close _V0match__iter_k111) (bruijn ##x.131 0 0) (bruijn pattern-stack 23 2) (bruijn success-expr 23 3))
V_CALL(VGetArg(upenv, 25-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k111, env)}),
      _var0,
      VGetArg(upenv, 23-1, 2),
      VGetArg(upenv, 23-1, 3)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 28 15) (close _V0match__iter_k110) (bruijn sym 2 0) (bruijn ##x.132 0 0))
V_CALL(VGetArg(upenv, 28-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k110, env)}),
      upenv->up->vars[0],
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 27 19) (close _V0match__iter_k109) (bruijn expr-stack 21 1))
V_CALL(VGetArg(upenv, 27-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k109, env)}),
      VGetArg(upenv, 21-1, 1)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 26 2) (close _V0match__iter_k108) (bruijn expr-stack 20 1))
V_CALL(VGetArg(upenv, 26-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k108, env)}),
      VGetArg(upenv, 20-1, 1)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k120, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.49 28 0) (##inline ##sys.cons (quote let) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn sym 6 0) (##inline ##sys.cons (bruijn ##x.160 5 0) (quote ()))) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn sym 6 0) (quote ()))) (##inline ##sys.cons (bruijn ##x.144 0 0) (quote ())))) (quote ())))))
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
static void _V0match__iter_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k119" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 29 2) (close _V0match__iter_k120) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn sym 5 0) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn sym 5 0) (quote ()))) (bruijn ##x.154 3 0))) (##inline ##sys.cons (bruijn ##x.147 2 0) (##inline ##sys.cons (bruijn ##x.149 1 0) (bruijn ##x.150 0 0))) (bruijn success-expr 27 3))
V_CALL(VGetArg(upenv, 29-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k120, env)}),
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
static void _V0match__iter_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__iter_k118" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__iter_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 32 19) (close _V0match__iter_k119) (bruijn pattern-stack 26 2))
V_CALL(VGetArg(upenv, 32-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k119, env)}),
      VGetArg(upenv, 26-1, 2)
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 31 16) (close _V0match__iter_k118) (bruijn pattern-stack 25 2))
V_CALL(VGetArg(upenv, 31-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k118, env)}),
      VGetArg(upenv, 25-1, 2)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn caar 30 18) (close _V0match__iter_k117) (bruijn pattern-stack 24 2))
V_CALL(VGetArg(upenv, 30-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k117, env)}),
      VGetArg(upenv, 24-1, 2)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 29 19) (close _V0match__iter_k116) (bruijn expr-stack 23 1))
V_CALL(VGetArg(upenv, 29-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k116, env)}),
      VGetArg(upenv, 23-1, 1)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 28 2) (close _V0match__iter_k115) (bruijn expr-stack 22 1))
V_CALL(VGetArg(upenv, 28-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k115, env)}),
      VGetArg(upenv, 22-1, 1)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k121, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 28 3) (bruijn ##k.49 22 0) (##string ##string.315) (bruijn ##x.161 0 0))
V_CALL(VGetArg(upenv, 28-1, 3), runtime,
      VGetArg(upenv, 22-1, 0),
      VEncodePointer(&_V10string_D315.sym, VPOINTER_OTHER),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.136 0 0) ((bruijn gensym 27 20) (close _V0match__iter_k114) (##string ##string.314)) ((bruijn car 27 2) (close _V0match__iter_k121) (bruijn pattern-stack 21 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 27-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k114, env)}),
      VEncodePointer(&_V10string_D314.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 27-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k121, env)}),
      VGetArg(upenv, 21-1, 2)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 26 4) (close _V0match__iter_k113) (bruijn ##x.162 0 0))
V_CALL(VGetArg(upenv, 26-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k113, env)}),
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.126 0 0) ((bruijn gensym 25 20) (close _V0match__iter_k107) (##string ##string.314)) ((bruijn car 25 2) (close _V0match__iter_k112) (bruijn pattern-stack 19 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k107, env)}),
      VEncodePointer(&_V10string_D314.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 25-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k112, env)}),
      VGetArg(upenv, 19-1, 2)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_k102) (close _V0match__iter_k106))
V_CALL_FUNC(_V0match__iter_k102, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k106, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 23 4) (close _V0match__iter_k101) (bruijn ##x.168 0 0))
V_CALL(VGetArg(upenv, 23-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k101, env)}),
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.104 0 0) ((bruijn cdar 22 16) (close _V0match__iter_k86) (bruijn pattern-stack 16 2)) ((bruijn car 22 2) (close _V0match__iter_k100) (bruijn pattern-stack 16 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k86, env)}),
      VGetArg(upenv, 16-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 22-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k100, env)}),
      VGetArg(upenv, 16-1, 2)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0match__iter_k83) (close _V0match__iter_k85))
V_CALL_FUNC(_V0match__iter_k83, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k85, env)})
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 20 4) (close _V0match__iter_k82) (bruijn ##x.172 0 0))
V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k82, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.93 0 0) ((bruijn car 19 2) (close _V0match__iter_k76) (bruijn pattern-stack 13 2)) ((bruijn car 19 2) (close _V0match__iter_k81) (bruijn pattern-stack 13 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k76, env)}),
      VGetArg(upenv, 13-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 19-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k81, env)}),
      VGetArg(upenv, 13-1, 2)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn atom? 18 8) (close _V0match__iter_k75) (bruijn ##x.173 0 0))
V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k75, env)}),
      _var0
    );
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.76 0 0) ((bruijn car 17 2) (close _V0match__iter_k68) (bruijn expr-stack 11 1)) ((bruijn car 17 2) (close _V0match__iter_k74) (bruijn pattern-stack 11 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k68, env)}),
      VGetArg(upenv, 11-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k74, env)}),
      VGetArg(upenv, 11-1, 2)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string? 16 9) (close _V0match__iter_k67) (bruijn ##x.174 0 0))
V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k67, env)}),
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.67 0 0) ((bruijn car 15 2) (close _V0match__iter_k62) (bruijn expr-stack 9 1)) ((bruijn car 15 2) (close _V0match__iter_k66) (bruijn pattern-stack 9 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k62, env)}),
      VGetArg(upenv, 9-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k66, env)}),
      VGetArg(upenv, 9-1, 2)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 14 14) (close _V0match__iter_k61) (bruijn ##x.175 0 0))
V_CALL(VGetArg(upenv, 14-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k61, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.65 0 0) ((bruijn car 13 2) (close _V0match__iter_k59) (bruijn pattern-stack 7 2)) ((bruijn car 13 2) (close _V0match__iter_k60) (bruijn pattern-stack 7 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k59, env)}),
      VGetArg(upenv, 7-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k60, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn vector? 12 10) (close _V0match__iter_k58) (bruijn ##x.176 0 0))
V_CALL(VGetArg(upenv, 12-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k58, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.54 0 0) ((bruijn car 11 2) (close _V0match__iter_k52) (bruijn pattern-stack 5 2)) ((bruijn car 11 2) (close _V0match__iter_k57) (bruijn pattern-stack 5 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k52, env)}),
      VGetArg(upenv, 5-1, 2)
    );
} else {
V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k57, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol? 10 11) (close _V0match__iter_k51) (bruijn ##x.177 0 0))
V_CALL(VGetArg(upenv, 10-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k51, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.51 0 0) ((bruijn cdr 9 19) (close _V0match__iter_k48) (bruijn expr-stack 3 1)) ((bruijn car 9 2) (close _V0match__iter_k50) (bruijn pattern-stack 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k48, env)}),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k50, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eqv? 5 2) (close _V0match__iter_k47) (bruijn ##x.178 0 0) (quote _))
V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k47, env)}),
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
 V_GC_CHECK2_VARARGS((VFunc)_V0match__iter_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.50 0 0) ((bruijn ##k.49 1 0) (bruijn success-expr 1 3)) ((bruijn car 7 2) (close _V0match__iter_k46) (bruijn pattern-stack 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[3]
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__iter_k46, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0match__iter_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0match__iter_lambda9" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0transform__match_k26" };
 VRecordCall(&dbg);
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
static void _V0match__ellipses_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k142" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k142, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.179 21 0) (##inline ##sys.cons (quote call-with-values) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (##inline ##sys.cons (quote call/cc) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 14 0) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote let) (##inline ##sys.cons (quote loop) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn expr 12 0) (##inline ##sys.cons (bruijn ##x.255 11 0) (quote ()))) (bruijn ##x.249 10 0)) (##inline ##sys.cons (##inline ##sys.cons (quote if) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.not) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.pair?) (##inline ##sys.cons (bruijn expr 12 0) (quote ()))) (quote ()))) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 14 0) (##inline ##sys.cons (bruijn expr 12 0) (bruijn ##x.242 9 0))) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote call-with-values) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (quote ()) (##inline ##sys.cons (##inline ##sys.cons (quote call/cc) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (bruijn k2 13 0) (quote ())) (##inline ##sys.cons (bruijn ##x.218 5 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn k 14 0) (##inline ##sys.cons (bruijn expr 12 0) (bruijn ##x.222 4 0))) (quote ()))))) (quote ()))) (quote ())))) (##inline ##sys.cons (quote loop) (quote ())))) (quote ())))))) (quote ())))) (quote ()))) (quote ())))) (##inline ##sys.cons (##inline ##sys.cons (quote lambda) (##inline ##sys.cons (##inline ##sys.cons (quote tail-expr) (bruijn variables 16 0)) (##inline ##sys.cons (bruijn ##x.187 0 0) (quote ())))) (quote ())))))
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
static void _V0match__ellipses_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k141" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 21 2) (close _V0match__ellipses_k142) (bruijn ##x.188 1 0) (bruijn ##x.189 0 0) (bruijn success-expr 20 3))
V_CALL(VGetArg(upenv, 21-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k142, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 20-1, 3)
    );
 }
}
static void _V0match__ellipses_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k140" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 24 15) (close _V0match__ellipses_k141) (bruijn tail-pattern 17 0) (bruijn pattern-stack 16 0))
V_CALL(VGetArg(upenv, 24-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k141, env)}),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 0)
    );
 }
}
static void _V0match__ellipses_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k139" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 23 15) (close _V0match__ellipses_k140) (quote tail-expr) (bruijn ##x.190 0 0))
V_CALL(VGetArg(upenv, 23-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k140, env)}),
      VEncodePointer(&_V0tail__expr.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0match__ellipses_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k138" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 22 19) (close _V0match__ellipses_k139) (bruijn expr-stack 17 1))
V_CALL(VGetArg(upenv, 22-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k139, env)}),
      VGetArg(upenv, 17-1, 1)
    );
 }
}
static void _V0match__ellipses_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda11" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0match__ellipses_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.223 0 0) (##inline ##sys.cons (quote reverse) (##inline ##sys.cons (bruijn sym 0 1) (quote ()))))
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
static void _V0match__ellipses_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k137" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 21 1) (close _V0match__ellipses_k138) (close _V0match__ellipses_lambda11) (bruijn syms 10 0))
V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k138, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_lambda11, env)}),
      VGetArg(upenv, 10-1, 0)
    );
 }
}
static void _V0match__ellipses_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k136" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn match-iter 16 2) (close _V0match__ellipses_k137) (bruijn ##x.225 2 0) (bruijn ##x.226 1 0) (##inline ##sys.cons (bruijn k2 7 0) (##inline ##sys.cons (##inline ##sys.cons (quote ##sys.cdr) (##inline ##sys.cons (bruijn expr 6 0) (quote ()))) (bruijn ##x.230 0 0))))
V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k137, env)}),
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
 static VDebugInfo dbg = { "_V0match__ellipses_lambda12" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0match__ellipses_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_lambda12, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##k.231 0 0) (##inline ##sys.cons (quote ##sys.cons) (##inline ##sys.cons (bruijn var 0 1) (##inline ##sys.cons (bruijn sym 0 2) (quote ())))))
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
static void _V0match__ellipses_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k135" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 19 1) (close _V0match__ellipses_k136) (close _V0match__ellipses_lambda12) (bruijn variables 9 0) (bruijn syms 8 0))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k136, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_lambda12, env)}),
      VGetArg(upenv, 9-1, 0),
      VGetArg(upenv, 8-1, 0)
    );
 }
}
static void _V0match__ellipses_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k134" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0match__ellipses_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn list 18 17) (close _V0match__ellipses_k135) (bruijn pattern 12 0))
V_CALL(VGetArg(upenv, 18-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k135, env)}),
      VGetArg(upenv, 12-1, 0)
    );
 }
}
static void _V0match__ellipses_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k133" };
 VRecordCall(&dbg);
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
  // ((bruijn list 17 17) (close _V0match__ellipses_k134) (##inline ##sys.cons (quote ##sys.car) (##inline ##sys.cons (bruijn expr 3 0) (quote ()))))
V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k134, env)}),
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
 static VDebugInfo dbg = { "_V0match__ellipses_lambda13" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0match__ellipses_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.243 0 0) (##inline ##sys.cons (quote reverse) (##inline ##sys.cons (bruijn sym 0 1) (quote ()))))
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
static void _V0match__ellipses_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k132" };
 VRecordCall(&dbg);
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
  // ((bruijn map 16 1) (close _V0match__ellipses_k133) (close _V0match__ellipses_lambda13) (bruijn syms 5 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k133, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_lambda13, env)}),
      VGetArg(upenv, 5-1, 0)
    );
 }
}
static void _V0match__ellipses_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda14" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0match__ellipses_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0match__ellipses_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.250 0 0) (##inline ##sys.cons (bruijn sym 0 1) (##inline ##sys.cons (##inline ##sys.cons (quote quote) (##inline ##sys.cons (quote ()) (quote ()))) (quote ()))))
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
static void _V0match__ellipses_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k131" };
 VRecordCall(&dbg);
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
  // ((bruijn map 15 1) (close _V0match__ellipses_k132) (close _V0match__ellipses_lambda14) (bruijn syms 4 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k132, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_lambda14, env)}),
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0match__ellipses_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k130" };
 VRecordCall(&dbg);
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
  // ((bruijn car 14 2) (close _V0match__ellipses_k131) (bruijn expr-stack 9 1))
V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k131, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0match__ellipses_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k129" };
 VRecordCall(&dbg);
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
  // ((bruijn gensym 13 20) (close _V0match__ellipses_k130) (##string ##string.314))
V_CALL(VGetArg(upenv, 13-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k130, env)}),
      VEncodePointer(&_V10string_D314.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__ellipses_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k128" };
 VRecordCall(&dbg);
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
  // ((bruijn gensym 12 20) (close _V0match__ellipses_k129) (##string ##string.311))
V_CALL(VGetArg(upenv, 12-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k129, env)}),
      VEncodePointer(&_V10string_D311.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__ellipses_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k127" };
 VRecordCall(&dbg);
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
  // ((bruijn gensym 11 20) (close _V0match__ellipses_k128) (##string ##string.311))
V_CALL(VGetArg(upenv, 11-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k128, env)}),
      VEncodePointer(&_V10string_D311.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0match__ellipses_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k126" };
 VRecordCall(&dbg);
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
  // ((bruijn map 10 1) (close _V0match__ellipses_k127) (bruijn gensym 10 20) (bruijn variables 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k127, env)}),
      VGetArg(upenv, 10-1, 20),
      _var0
    );
 }
}
static void _V0match__ellipses_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k125" };
 VRecordCall(&dbg);
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
  // ((bruijn gather-variables 8 1) (close _V0match__ellipses_k126) (bruijn ##x.256 0 0) (bruijn eqv? 6 2))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k126, env)}),
      _var0,
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0match__ellipses_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k124" };
 VRecordCall(&dbg);
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
  // ((bruijn list 8 17) (close _V0match__ellipses_k125) (bruijn pattern 2 0))
V_CALL(VGetArg(upenv, 8-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k125, env)}),
      upenv->up->vars[0]
    );
 }
}
static void _V0match__ellipses_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k123" };
 VRecordCall(&dbg);
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
  // ((bruijn cdr 7 19) (close _V0match__ellipses_k124) (bruijn pattern-stack 2 2))
V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k124, env)}),
      upenv->up->vars[2]
    );
 }
}
static void _V0match__ellipses_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0match__ellipses_k122" };
 VRecordCall(&dbg);
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
  // ((bruijn cddar 6 6) (close _V0match__ellipses_k123) (bruijn pattern-stack 1 2))
V_CALL(VGetArg(upenv, 6-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k123, env)}),
      upenv->vars[2]
    );
 }
}
static void _V0match__ellipses_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0match__ellipses_lambda10" };
 VRecordCall(&dbg);
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
  // ((bruijn caar 5 18) (close _V0match__ellipses_k122) (bruijn pattern-stack 0 2))
V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0match__ellipses_k122, env)}),
      _var2
    );
 }
}
static void _V0transform__match_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0transform__match_lambda5" };
 VRecordCall(&dbg);
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
 static VDebugInfo dbg = { "_V0transform__match_lambda4" };
 VRecordCall(&dbg);
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
static void _V0vanity_V0compiler_V0match_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k24" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0match_V20_k25) (bruijn transform-match 1 2) (close _V0transform__match_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k25, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0transform__match_lambda4, env)})
    );
 }
}
static void _V0gather__variables_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k146" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k146, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 5 1) (bruijn ##k.257 4 0) (bruijn ##x.260 0 0) (bruijn eqv? 4 2))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0gather__variables_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k149" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k149, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 7 1) (bruijn ##k.257 6 0) (bruijn ##x.262 0 0) (bruijn eqv? 6 2))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 6-1, 2)
    );
 }
}
static void _V0gather__variables_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k154" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k154, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 12 15) (bruijn ##k.257 10 0) (bruijn ##x.264 2 0) (bruijn ##x.265 0 0))
V_CALL(VGetArg(upenv, 12-1, 15), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0gather__variables_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k153" };
 VRecordCall(&dbg);
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
  // ((bruijn gather-variables 10 1) (close _V0gather__variables_k154) (bruijn ##x.266 0 0) (bruijn eqv? 9 2))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k154, env)}),
      _var0,
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0gather__variables_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k152" };
 VRecordCall(&dbg);
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
  // ((bruijn cdr 10 19) (close _V0gather__variables_k153) (bruijn pattern 8 1))
V_CALL(VGetArg(upenv, 10-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k153, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0gather__variables_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k157" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k157, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 12 3) (bruijn ##k.257 10 0) (##string ##string.312) (bruijn ##x.268 0 0))
V_CALL(VGetArg(upenv, 12-1, 3), runtime,
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10string_D312.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0gather__variables_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k160" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k160, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 13 1) (bruijn ##k.257 12 0) (bruijn ##x.270 0 0) (bruijn eqv? 12 2))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0,
      VGetArg(upenv, 12-1, 2)
    );
 }
}
static void _V0gather__variables_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k164" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 15 2) (bruijn ##k.279 1 0) (bruijn ##x.280 0 0) (quote quote))
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0gather__variables_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k163" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.278 1 0) ((bruijn caar 16 18) (close _V0gather__variables_k164) (bruijn pattern 14 1)) ((bruijn ##k.279 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k164, env)}),
      VGetArg(upenv, 14-1, 1)
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0gather__variables_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k166" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k166, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 16 1) (bruijn ##k.257 15 0) (bruijn ##x.272 0 0) (bruijn eqv? 15 2))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 15-1, 0),
      _var0,
      VGetArg(upenv, 15-1, 2)
    );
 }
}
static void _V0gather__variables_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k169" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k169, runtime, upenv, 1, argc, _var0) {
  // ((bruijn gather-variables 18 1) (bruijn ##k.257 17 0) (##inline ##sys.cons (bruijn ##x.274 2 0) (##inline ##sys.cons (bruijn ##x.276 1 0) (bruijn ##x.277 0 0))) (bruijn eqv? 17 2))
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
static void _V0gather__variables_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k168" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 18 19) (close _V0gather__variables_k169) (bruijn pattern 16 1))
V_CALL(VGetArg(upenv, 18-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k169, env)}),
      VGetArg(upenv, 16-1, 1)
    );
 }
}
static void _V0gather__variables_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k167" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdar 17 16) (close _V0gather__variables_k168) (bruijn pattern 15 1))
V_CALL(VGetArg(upenv, 17-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k168, env)}),
      VGetArg(upenv, 15-1, 1)
    );
 }
}
static void _V0gather__variables_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k165" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.271 0 0) ((bruijn cdr 16 19) (close _V0gather__variables_k166) (bruijn pattern 14 1)) ((bruijn caar 16 18) (close _V0gather__variables_k167) (bruijn pattern 14 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k166, env)}),
      VGetArg(upenv, 14-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k167, env)}),
      VGetArg(upenv, 14-1, 1)
    );
}
 }
}
static void _V0gather__variables_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k162" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0gather__variables_k163) (close _V0gather__variables_k165))
V_CALL_FUNC(_V0gather__variables_k163, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k165, env)})
    );
 }
}
static void _V0gather__variables_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k161" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 14 4) (close _V0gather__variables_k162) (bruijn ##x.281 0 0))
V_CALL(VGetArg(upenv, 14-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k162, env)}),
      _var0
    );
 }
}
static void _V0gather__variables_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k159" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.269 0 0) ((bruijn cdr 13 19) (close _V0gather__variables_k160) (bruijn pattern 11 1)) ((bruijn car 13 2) (close _V0gather__variables_k161) (bruijn pattern 11 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k160, env)}),
      VGetArg(upenv, 11-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k161, env)}),
      VGetArg(upenv, 11-1, 1)
    );
}
 }
}
static void _V0gather__variables_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k158" };
 VRecordCall(&dbg);
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
  // ((bruijn atom? 12 8) (close _V0gather__variables_k159) (bruijn ##x.282 0 0))
V_CALL(VGetArg(upenv, 12-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k159, env)}),
      _var0
    );
 }
}
static void _V0gather__variables_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k156" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.267 0 0) ((bruijn car 11 2) (close _V0gather__variables_k157) (bruijn pattern 9 1)) ((bruijn car 11 2) (close _V0gather__variables_k158) (bruijn pattern 9 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k157, env)}),
      VGetArg(upenv, 9-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k158, env)}),
      VGetArg(upenv, 9-1, 1)
    );
}
 }
}
static void _V0gather__variables_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k155" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn vector? 10 10) (close _V0gather__variables_k156) (bruijn ##x.283 0 0))
V_CALL(VGetArg(upenv, 10-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k156, env)}),
      _var0
    );
 }
}
static void _V0gather__variables_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k151" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__variables_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__variables_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.263 0 0) ((bruijn car 9 2) (close _V0gather__variables_k152) (bruijn pattern 7 1)) ((bruijn car 9 2) (close _V0gather__variables_k155) (bruijn pattern 7 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k152, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 9-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k155, env)}),
      VGetArg(upenv, 7-1, 1)
    );
}
 }
}
static void _V0gather__variables_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k150" };
 VRecordCall(&dbg);
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
  // ((bruijn symbol? 8 11) (close _V0gather__variables_k151) (bruijn ##x.284 0 0))
V_CALL(VGetArg(upenv, 8-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k151, env)}),
      _var0
    );
 }
}
static void _V0gather__variables_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k148" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.261 0 0) ((bruijn cdr 7 19) (close _V0gather__variables_k149) (bruijn pattern 5 1)) ((bruijn car 7 2) (close _V0gather__variables_k150) (bruijn pattern 5 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k149, env)}),
      VGetArg(upenv, 5-1, 1)
    );
} else {
V_CALL(VGetArg(upenv, 7-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k150, env)}),
      VGetArg(upenv, 5-1, 1)
    );
}
 }
}
static void _V0gather__variables_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k147" };
 VRecordCall(&dbg);
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
  // ((bruijn eqv? 4 2) (close _V0gather__variables_k148) (bruijn ##x.285 0 0) (quote ...))
V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k148, env)}),
      _var0,
      VEncodePointer(&_V0_D_D_D.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0gather__variables_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k145" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.259 0 0) ((bruijn cdr 5 19) (close _V0gather__variables_k146) (bruijn pattern 3 1)) ((bruijn car 5 2) (close _V0gather__variables_k147) (bruijn pattern 3 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k146, env)}),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k147, env)}),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0gather__variables_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k144" };
 VRecordCall(&dbg);
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
  // ((bruijn eqv? 2 2) (close _V0gather__variables_k145) (bruijn ##x.286 0 0) (quote _))
V_CALL(upenv->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k145, env)}),
      _var0,
      VEncodePointer(&_V0_U.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0gather__variables_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__variables_k143" };
 VRecordCall(&dbg);
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
  // (if (bruijn ##p.258 0 0) ((bruijn ##k.257 1 0) (quote ())) ((bruijn car 3 2) (close _V0gather__variables_k144) (bruijn pattern 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL
    );
} else {
V_CALL(upenv->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k144, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0gather__variables_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0gather__variables_lambda15" };
 VRecordCall(&dbg);
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
  // ((bruijn null? 2 14) (close _V0gather__variables_k143) (bruijn pattern 0 1))
V_CALL(upenv->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_k143, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda3, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V0vanity_V0compiler_V0match_V20_k24) (bruijn gather-variables 0 1) (close _V0gather__variables_lambda15))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k24, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__variables_lambda15, env)})
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda2, runtime, upenv, 21, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20) {
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
  // ((close _V0vanity_V0compiler_V0match_V20_lambda3) (bruijn ##k.2 0 0) #f #f)
V_CALL_FUNC(_V0vanity_V0compiler_V0match_V20_lambda3, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k23" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0match_V20_lambda2) (bruijn ##k.1 23 0) (bruijn ##x.287 19 0) (bruijn ##x.288 18 0) (bruijn ##x.289 17 0) (bruijn ##x.290 16 0) (bruijn ##x.291 15 0) (bruijn ##x.292 14 0) (bruijn ##x.293 13 0) (bruijn ##x.294 12 0) (bruijn ##x.295 11 0) (bruijn ##x.296 10 0) (bruijn ##x.297 9 0) (bruijn ##x.298 8 0) (bruijn ##x.299 7 0) (bruijn ##x.300 6 0) (bruijn ##x.301 5 0) (bruijn ##x.302 4 0) (bruijn ##x.303 3 0) (bruijn ##x.304 2 0) (bruijn ##x.305 1 0) (bruijn ##x.306 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0match_V20_lambda2, env, runtime,
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
static void _V0vanity_V0compiler_V0match_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0match_V20_k23) (quote gensym))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k23, env)}),
      VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0match_V20_k22) (quote cdr))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k22, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k20" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0match_V20_k21) (quote caar))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k21, env)}),
      VEncodePointer(&_V0caar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0match_V20_k20) (quote list))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k20, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0match_V20_k19) (quote cdar))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k19, env)}),
      VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0match_V20_k18) (quote cons))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k18, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0match_V20_k17) (quote null?))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k17, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0match_V20_k16) (quote cddr))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k16, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0match_V20_k15) (quote cadr))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k15, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0match_V20_k14) (quote symbol?))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k14, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0match_V20_k13) (quote vector?))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k13, env)}),
      VEncodePointer(&_V0vector_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0match_V20_k12) (quote string?))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k12, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0match_V20_k11) (quote atom?))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k11, env)}),
      VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0match_V20_k10) (quote not))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k10, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0match_V20_k9) (quote cddar))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k9, env)}),
      VEncodePointer(&_V0cddar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k7" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0match_V20_k8) (quote cadar))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k8, env)}),
      VEncodePointer(&_V0cadar.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k6" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0match_V20_k7) (quote pair?))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k7, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k5" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0match_V20_k6) (quote compiler-error))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k6, env)}),
      VEncodePointer(&_V0compiler__error.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k4" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0match_V20_k5) (quote car))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k5, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k3" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0match_V20_k4) (quote map))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k4, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k2" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0match_V20_k3) (##string ##string.316) (bruijn ##x.307 1 0) (bruijn ##x.308 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k3, env)}),
      VEncodePointer(&_V10string_D316.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_k1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_k2) (##string ##string.317))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k2, env)}),
      VEncodePointer(&_V10string_D317.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0match_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_lambda1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0match_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0match_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_k1) (##string ##string.318))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k1, env)}),
      VEncodePointer(&_V10string_D318.sym, VPOINTER_OTHER)
    );
 }
}
VFunc _V0vanity_V0compiler_V0match_V20 = (VFunc)_V0vanity_V0compiler_V0match_V20_lambda1;
