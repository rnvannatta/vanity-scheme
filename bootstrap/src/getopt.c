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
static struct { VBlob sym; char bytes[21]; } _V10string_D182 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[7]; } _V10string_D181 = { { VSTRING, 7 }, "getopt" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[15]; } _V0symbol___Gstring = { { VSYMBOL, 15 }, "symbol->string" };
static struct { VBlob sym; char bytes[13]; } _V0string___Glist = { { VSYMBOL, 13 }, "string->list" };
static struct { VBlob sym; char bytes[5]; } _V0memq = { { VSYMBOL, 5 }, "memq" };
static struct { VBlob sym; char bytes[2]; } _V0_L = { { VSYMBOL, 2 }, "<" };
static struct { VBlob sym; char bytes[6]; } _V0assoc = { { VSYMBOL, 6 }, "assoc" };
static struct { VBlob sym; char bytes[6]; } _V0caddr = { { VSYMBOL, 6 }, "caddr" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[5]; } _V0cddr = { { VSYMBOL, 5 }, "cddr" };
static struct { VBlob sym; char bytes[4]; } _V0not = { { VSYMBOL, 4 }, "not" };
static struct { VBlob sym; char bytes[7]; } _V0values = { { VSYMBOL, 7 }, "values" };
static struct { VBlob sym; char bytes[4]; } _V0eq_Q = { { VSYMBOL, 4 }, "eq\?" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[17]; } _V0call__with__values = { { VSYMBOL, 17 }, "call-with-values" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[11]; } _V0string__ref = { { VSYMBOL, 11 }, "string-ref" };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[10]; } _V0substring = { { VSYMBOL, 10 }, "substring" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[2]; } _V0_E = { { VSYMBOL, 2 }, "=" };
static struct { VBlob sym; char bytes[14]; } _V0string__length = { { VSYMBOL, 14 }, "string-length" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[1]; } _V10string_D180 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[3]; } _V10string_D179 = { { VSTRING, 3 }, "--" };
static struct { VBlob sym; char bytes[7]; } _V0getopt = { { VSYMBOL, 7 }, "getopt" };
static void getopt_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k31" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k31, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.4 1 0) (##inline ##sys.cons (##inline ##sys.cons (quote getopt) (bruijn getopt 1 1)) (quote ())))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0getopt.sym, VPOINTER_OTHER),
      upenv->vars[1]
    )
,
      VNULL
    )

    );
 }
}
static void _V0getopt_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt_k40" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt_k40, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter 9 6) (bruijn ##k.8 9 0) (bruijn ##x.15 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 6)), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0
    );
 }
}
static void _V0getopt_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt_k39" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 11 28) (close _V0getopt_k40) (bruijn args 9 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt_k40, env)}),
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0iter_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda8" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn cons 20 19) (bruijn ##k.20 0 0) #f (bruijn e 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 19)), runtime,
      _var0,
      VEncodeBool(false),
      _var1
    );
 }
}
static void _V0iter_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k48" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 19 24) (bruijn ##k.16 8 0) (close _V0iter_lambda8) (bruijn ##x.21 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 24)), runtime,
      VGetArg(upenv, 8-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_lambda8, env)}),
      _var0
    );
 }
}
static void _V0iter_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k47" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.19 0 0) ((bruijn cdr 18 28) (close _V0iter_k48) (bruijn args 7 1)) ((bruijn getopt-long 15 5) (bruijn ##k.16 7 0) (bruijn args 7 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k48, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 5)), runtime,
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 7-1, 1)
    );
}
 }
}
static void _V0iter_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k46" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 17 25) (close _V0iter_k47) (bruijn ##x.22 0 0) 2)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 25)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k47, env)}),
      _var0,
      VEncodeInt(2l)
    );
 }
}
static void _V0iter_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k45" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 16 26) (close _V0iter_k46) (bruijn ##x.23 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k46, env)}),
      _var0
    );
 }
}
static void _V0iter_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k55" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k55, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 22 19) (bruijn ##k.16 11 0) (bruijn ##x.25 2 0) (bruijn ##x.26 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 19)), runtime,
      VGetArg(upenv, 11-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k54" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 18 6) (close _V0iter_k55) (bruijn ##x.27 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k55, env)}),
      _var0
    );
 }
}
static void _V0iter_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k53" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 20 28) (close _V0iter_k54) (bruijn args 9 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k54, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0iter_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k52" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 19 19) (close _V0iter_k53) #t (bruijn ##x.28 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k53, env)}),
      VEncodeBool(true),
      _var0
    );
 }
}
static void _V0iter_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k51" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.24 0 0) ((bruijn getopt-short 15 4) (bruijn ##k.16 7 0) (bruijn args 7 1) (bruijn opts 15 3)) ((bruijn car 18 20) (close _V0iter_k52) (bruijn args 7 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 4)), runtime,
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 15-1, 3)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k52, env)}),
      VGetArg(upenv, 7-1, 1)
    );
}
 }
}
static void _V0iter_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k50" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn equal? 17 22) (close _V0iter_k51) (bruijn ##x.29 0 0) #\-)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 22)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k51, env)}),
      _var0,
      VEncodeChar('-')
    );
 }
}
static void _V0iter_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k49" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-ref 16 21) (close _V0iter_k50) (bruijn ##x.30 0 0) 0)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 21)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k50, env)}),
      _var0,
      VEncodeInt(0l)
    );
 }
}
static void _V0iter_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k44" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.18 0 0) ((bruijn car 15 20) (close _V0iter_k45) (bruijn args 4 1)) ((bruijn car 15 20) (close _V0iter_k49) (bruijn args 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k45, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k49, env)}),
      upenv->up->up->up->vars[1]
    );
}
 }
}
static void _V0iter_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k43" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn equal? 14 22) (close _V0iter_k44) (bruijn ##x.31 0 0) (##string ##string.179))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 22)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k44, env)}),
      _var0,
      VEncodePointer(&_V10string_D179.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0iter_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k42" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substring 13 23) (close _V0iter_k43) (bruijn ##x.32 0 0) 0 2)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 23)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k43, env)}),
      _var0,
      VEncodeInt(0l),
      VEncodeInt(2l)
    );
 }
}
static void _V0iter_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k41" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.17 0 0) ((bruijn ##k.16 1 0) (quote ())) ((bruijn car 12 20) (close _V0iter_k42) (bruijn args 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VNULL
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k42, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0iter_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda7" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0iter_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 11 27) (close _V0iter_k41) (bruijn args 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 27)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_k41, env)}),
      _var1
    );
 }
}
static void _V0getopt_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt_k38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0getopt_k39) (bruijn iter 7 6) (close _V0iter_lambda7))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt_k39, env)}),
      VEncodeInt(7l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0iter_lambda7, env)})
    );
 }
}
static void _V0getopt__long_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k58" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k58, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.37 1 0) 2)
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      VEncodeInt(2l)
    );
 }
}
static void _V0loop_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k60" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k60, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 19 15) (bruijn ##k.39 2 0) (bruijn ##x.41 0 0) (##string ##string.180))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 15)), runtime,
      upenv->up->vars[0],
      _var0,
      VEncodePointer(&_V10string_D180.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0loop_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k65" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k65, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 23 15) (bruijn ##k.39 6 0) (bruijn ##x.43 2 0) (bruijn ##x.44 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 15)), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k64" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substring 22 23) (close _V0loop_k65) (bruijn arg 9 1) (bruijn ##x.45 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 23)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k65, env)}),
      VGetArg(upenv, 9-1, 1),
      _var0
    );
 }
}
static void _V0loop_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k63" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 21 17) (close _V0loop_k64) (bruijn i 4 1) 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k64, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k66" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k66, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.39 4 0) (bruijn ##x.46 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k62" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.42 0 0) ((bruijn substring 20 23) (close _V0loop_k63) (bruijn arg 7 1) 0 (bruijn i 3 1)) ((bruijn + 20 17) (close _V0loop_k66) (bruijn i 3 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 23)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k63, env)}),
      VGetArg(upenv, 7-1, 1),
      VEncodeInt(0l),
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k66, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
}
 }
}
static void _V0loop_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k61" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn eq? 19 16) (close _V0loop_k62) (bruijn ##x.47 0 0) #\=)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k62, env)}),
      _var0,
      VEncodeChar('=')
    );
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
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.40 0 0) ((bruijn substring 18 23) (close _V0loop_k60) (bruijn arg 5 1) 0 (bruijn i 1 1)) ((bruijn string-ref 18 21) (close _V0loop_k61) (bruijn arg 5 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 23)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k60, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(0l),
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 21)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k61, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda14" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn = 17 25) (close _V0loop_k59) (bruijn i 0 1) (bruijn len 2 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 25)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k59, env)}),
      _var1,
      upenv->up->vars[1]
    );
 }
}
static void _V0getopt__long_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0getopt__long_lambda13" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0getopt__long_k58) (bruijn loop 0 1) (close _V0loop_lambda14))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k58, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda14, env)})
    );
 }
}
static void _V0getopt__long_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0getopt__long_lambda12" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0getopt__long_lambda13) (bruijn ##k.36 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_lambda13, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0getopt__long_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k57" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0getopt__long_lambda12) (bruijn ##k.35 1 0) (bruijn ##x.48 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_lambda12, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0getopt__long_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0getopt__long_lambda11" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string-length 13 26) (close _V0getopt__long_k57) (bruijn arg 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k57, env)}),
      _var1
    );
 }
}
static void _V0getopt__long_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k56" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0getopt__long_lambda11) (bruijn ##k.34 1 0) (bruijn ##x.49 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_lambda11, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0getopt__long_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_lambda10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_lambda10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 11 20) (close _V0getopt__long_k56) (bruijn args 1 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k56, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0getopt__long_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k73" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k73, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 19 19) (bruijn ##k.51 5 0) (bruijn ##x.53 2 0) (bruijn ##x.54 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 19)), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0getopt__long_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k72" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 15 6) (close _V0getopt__long_k73) (bruijn ##x.55 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k73, env)}),
      _var0
    );
 }
}
static void _V0getopt__long_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k71" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 17 28) (close _V0getopt__long_k72) (bruijn args 7 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k72, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0getopt__long_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k70" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 16 19) (close _V0getopt__long_k71) #\? (bruijn ##x.56 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k71, env)}),
      VEncodeChar('?'),
      _var0
    );
 }
}
static void _V0getopt__long_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k79" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k79, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 21 19) (bruijn ##k.51 7 0) (bruijn ##x.58 2 0) (bruijn ##x.59 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 19)), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0getopt__long_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k78" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 17 6) (close _V0getopt__long_k79) (bruijn ##x.60 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k79, env)}),
      _var0
    );
 }
}
static void _V0getopt__long_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k77" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 19 28) (close _V0getopt__long_k78) (bruijn args 9 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k78, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0getopt__long_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k76" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 18 19) (close _V0getopt__long_k77) (bruijn ##x.61 0 0) #f)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k77, env)}),
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0getopt__long_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k85" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 23 19) (bruijn ##k.51 9 0) (bruijn ##x.63 2 0) (bruijn ##x.64 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 19)), runtime,
      VGetArg(upenv, 9-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0getopt__long_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k84" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 19 6) (close _V0getopt__long_k85) (bruijn ##x.65 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k85, env)}),
      _var0
    );
 }
}
static void _V0getopt__long_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k83" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 21 28) (close _V0getopt__long_k84) (bruijn args 11 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k84, env)}),
      VGetArg(upenv, 11-1, 1)
    );
 }
}
static void _V0getopt__long_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k82" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 20 19) (close _V0getopt__long_k83) (bruijn ##x.66 0 0) (bruijn val 9 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k83, env)}),
      _var0,
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0getopt__long_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k92" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k92, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 26 19) (bruijn ##k.51 12 0) (bruijn ##x.68 2 0) (bruijn ##x.69 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 19)), runtime,
      VGetArg(upenv, 12-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0getopt__long_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k91" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 22 6) (close _V0getopt__long_k92) (bruijn ##x.70 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k92, env)}),
      _var0
    );
 }
}
static void _V0getopt__long_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k90" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 24 13) (close _V0getopt__long_k91) (bruijn args 14 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k91, env)}),
      VGetArg(upenv, 14-1, 1)
    );
 }
}
static void _V0getopt__long_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k89" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 23 19) (close _V0getopt__long_k90) (bruijn ##x.71 1 0) (bruijn ##x.72 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k90, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0getopt__long_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k88" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 22 12) (close _V0getopt__long_k89) (bruijn args 12 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k89, env)}),
      VGetArg(upenv, 12-1, 1)
    );
 }
}
static void _V0getopt__long_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k94" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k94, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list 23 10) (bruijn ##k.51 9 0) (bruijn ##x.73 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 10)), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0
    );
 }
}
static void _V0getopt__long_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k93" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 22 19) (close _V0getopt__long_k94) #\: (bruijn ##x.74 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k94, env)}),
      VEncodeChar(':'),
      _var0
    );
 }
}
static void _V0getopt__long_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k87" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.67 0 0) ((bruijn caddr 21 9) (close _V0getopt__long_k88) (bruijn ass 7 1)) ((bruijn caddr 21 9) (close _V0getopt__long_k93) (bruijn ass 7 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k88, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k93, env)}),
      VGetArg(upenv, 7-1, 1)
    );
}
 }
}
static void _V0getopt__long_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k86" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 20 11) (close _V0getopt__long_k87) (bruijn ##x.75 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k87, env)}),
      _var0
    );
 }
}
static void _V0getopt__long_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k81" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.62 0 0) ((bruijn caddr 19 9) (close _V0getopt__long_k82) (bruijn ass 5 1)) ((bruijn cdr 19 28) (close _V0getopt__long_k86) (bruijn args 9 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k82, env)}),
      VGetArg(upenv, 5-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k86, env)}),
      VGetArg(upenv, 9-1, 1)
    );
}
 }
}
static void _V0getopt__long_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k80" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 18 14) (close _V0getopt__long_k81) (bruijn ##x.76 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k81, env)}),
      _var0
    );
 }
}
static void _V0getopt__long_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k75" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.57 0 0) ((bruijn caddr 17 9) (close _V0getopt__long_k76) (bruijn ass 3 1)) ((bruijn equal? 17 22) (close _V0getopt__long_k80) (bruijn val 6 2) (##string ##string.180)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 9)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k76, env)}),
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 22)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k80, env)}),
      VGetArg(upenv, 6-1, 2),
      VEncodePointer(&_V10string_D180.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0getopt__long_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k74" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 16 14) (close _V0getopt__long_k75) (bruijn ##x.77 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k75, env)}),
      _var0
    );
 }
}
static void _V0getopt__long_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k69" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.52 0 0) ((bruijn substring 15 23) (close _V0getopt__long_k70) (bruijn arg 4 1) 2) ((bruijn cadr 15 12) (close _V0getopt__long_k74) (bruijn ass 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 23)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k70, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(2l)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k74, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0getopt__long_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0getopt__long_lambda16" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn not 14 14) (close _V0getopt__long_k69) (bruijn ass 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k69, env)}),
      _var1
    );
 }
}
static void _V0getopt__long_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k68" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0getopt__long_lambda16) (bruijn ##k.50 2 0) (bruijn ##x.78 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_lambda16, env)}, runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0getopt__long_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__long_k67" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__long_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn assoc 12 8) (close _V0getopt__long_k68) (bruijn ##x.79 0 0) (bruijn longs 9 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 8)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k68, env)}),
      _var0,
      VGetArg(upenv, 9-1, 2)
    );
 }
}
static void _V0getopt__long_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0getopt__long_lambda15" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0getopt__long_lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn substring 11 23) (close _V0getopt__long_k67) (bruijn arg 0 1) 2)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 23)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_k67, env)}),
      _var1,
      VEncodeInt(2l)
    );
 }
}
static void _V0getopt__long_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0getopt__long_lambda9" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0getopt__long_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__long_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 10 18) (bruijn ##k.33 0 0) (close _V0getopt__long_lambda10) (close _V0getopt__long_lambda15))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 18)), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_lambda10, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_lambda15, env)})
    );
 }
}
static void _V0getopt_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt_k37" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0getopt_k38) (bruijn getopt-long 6 5) (close _V0getopt__long_lambda9))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt_k38, env)}),
      VEncodeInt(6l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__long_lambda9, env)})
    );
 }
}
static void _V0getopt__short_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__short_k97" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__short_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__short_k97, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.83 1 0) 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      upenv->vars[0],
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k105" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k105, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 24 19) (bruijn ##k.87 5 0) (bruijn ##x.89 2 0) (bruijn ##x.90 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 19)), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k104" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 20 6) (close _V0loop_k105) (bruijn ##x.91 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k105, env)}),
      _var0
    );
 }
}
static void _V0loop_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k103" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 22 28) (close _V0loop_k104) (bruijn args 13 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k104, env)}),
      VGetArg(upenv, 13-1, 1)
    );
 }
}
static void _V0loop_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k102" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 21 19) (close _V0loop_k103) #\? (bruijn ##x.92 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k103, env)}),
      VEncodeChar('?'),
      _var0
    );
 }
}
static void _V0loop_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k114" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k114, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 29 19) (bruijn ##k.87 10 0) (bruijn ##x.94 2 0) (bruijn ##x.95 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 19)), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->up->vars[0],
      _var0
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 14 1) (close _V0loop_k114) (bruijn ##x.96 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k114, env)}),
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
  // ((bruijn + 27 17) (close _V0loop_k113) (bruijn i 12 1) 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k113, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodeInt(1l)
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
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 26 19) (close _V0loop_k112) (bruijn ##x.97 0 0) #f)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k112, env)}),
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0loop_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k123" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k123, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 34 19) (bruijn ##k.87 15 0) (bruijn ##x.99 2 0) (bruijn ##x.100 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 19)), runtime,
      VGetArg(upenv, 15-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k122" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 30 6) (close _V0loop_k123) (bruijn ##x.101 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k123, env)}),
      _var0
    );
 }
}
static void _V0loop_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k121" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 32 28) (close _V0loop_k122) (bruijn args 23 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k122, env)}),
      VGetArg(upenv, 23-1, 1)
    );
 }
}
static void _V0loop_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k120" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 31 19) (close _V0loop_k121) (bruijn ##x.102 2 0) (bruijn ##x.103 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k121, env)}),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k119" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substring 30 23) (close _V0loop_k120) (bruijn arg 19 1) (bruijn ##x.104 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 23)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k120, env)}),
      VGetArg(upenv, 19-1, 1),
      _var0
    );
 }
}
static void _V0loop_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k118" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 29 17) (close _V0loop_k119) (bruijn i 14 1) 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k119, env)}),
      VGetArg(upenv, 14-1, 1),
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k128" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k128, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list 33 10) (bruijn ##k.87 14 0) (bruijn ##x.106 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 10)), runtime,
      VGetArg(upenv, 14-1, 0),
      _var0
    );
 }
}
static void _V0loop_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k127" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 32 19) (close _V0loop_k128) #\: (bruijn ##x.107 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k128, env)}),
      VEncodeChar(':'),
      _var0
    );
 }
}
static void _V0loop_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k133" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k133, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 36 19) (bruijn ##k.87 17 0) (bruijn ##x.108 2 0) (bruijn ##x.109 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 36-1, 19)), runtime,
      VGetArg(upenv, 17-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k132" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 32 6) (close _V0loop_k133) (bruijn ##x.110 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k133, env)}),
      _var0
    );
 }
}
static void _V0loop_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k131" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 34 13) (close _V0loop_k132) (bruijn args 25 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k132, env)}),
      VGetArg(upenv, 25-1, 1)
    );
 }
}
static void _V0loop_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k130" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 33 19) (close _V0loop_k131) (bruijn ##x.111 1 0) (bruijn ##x.112 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 33-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k131, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k129" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 32 12) (close _V0loop_k130) (bruijn args 23 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k130, env)}),
      VGetArg(upenv, 23-1, 1)
    );
 }
}
static void _V0loop_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k126" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.105 0 0) ((bruijn car 31 20) (close _V0loop_k127) (bruijn mem 12 1)) ((bruijn car 31 20) (close _V0loop_k129) (bruijn mem 12 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k127, env)}),
      VGetArg(upenv, 12-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k129, env)}),
      VGetArg(upenv, 12-1, 1)
    );
}
 }
}
static void _V0loop_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k125" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 30 14) (close _V0loop_k126) (bruijn ##x.113 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k126, env)}),
      _var0
    );
 }
}
static void _V0loop_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k124" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 29 11) (close _V0loop_k125) (bruijn ##x.114 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k125, env)}),
      _var0
    );
 }
}
static void _V0loop_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k117" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.98 0 0) ((bruijn car 28 20) (close _V0loop_k118) (bruijn mem 9 1)) ((bruijn cdr 28 28) (close _V0loop_k124) (bruijn args 19 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k118, env)}),
      VGetArg(upenv, 9-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k124, env)}),
      VGetArg(upenv, 19-1, 1)
    );
}
 }
}
static void _V0loop_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k116" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 27 14) (close _V0loop_k117) (bruijn ##x.115 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k117, env)}),
      _var0
    );
 }
}
static void _V0loop_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k115" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 26 25) (close _V0loop_k116) (bruijn len 13 1) (bruijn ##x.116 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 25)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k116, env)}),
      VGetArg(upenv, 13-1, 1),
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
  // (if (bruijn ##p.93 0 0) ((bruijn car 25 20) (close _V0loop_k111) (bruijn mem 6 1)) ((bruijn + 25 17) (close _V0loop_k115) (bruijn i 10 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k111, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k115, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodeInt(1l)
    );
}
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
  // ((bruijn not 24 14) (close _V0loop_k110) (bruijn ##x.117 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k110, env)}),
      _var0
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
  // ((bruijn eq? 23 16) (close _V0loop_k109) (bruijn ##x.119 0 0) #\:)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 16)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k109, env)}),
      _var0,
      VEncodeChar(':')
    );
 }
}
static void _V0loop_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k138" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k138, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 27 19) (bruijn ##k.87 8 0) (bruijn ##x.94 2 0) (bruijn ##x.95 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 19)), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k137" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn loop 12 1) (close _V0loop_k138) (bruijn ##x.96 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k138, env)}),
      _var0
    );
 }
}
static void _V0loop_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k136" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 25 17) (close _V0loop_k137) (bruijn i 10 1) 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k137, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k135" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 24 19) (close _V0loop_k136) (bruijn ##x.97 0 0) #f)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k136, env)}),
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0loop_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k147" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k147, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 32 19) (bruijn ##k.87 13 0) (bruijn ##x.99 2 0) (bruijn ##x.100 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 19)), runtime,
      VGetArg(upenv, 13-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k146" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 28 6) (close _V0loop_k147) (bruijn ##x.101 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k147, env)}),
      _var0
    );
 }
}
static void _V0loop_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k145" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 30 28) (close _V0loop_k146) (bruijn args 21 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k146, env)}),
      VGetArg(upenv, 21-1, 1)
    );
 }
}
static void _V0loop_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k144" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 29 19) (close _V0loop_k145) (bruijn ##x.102 2 0) (bruijn ##x.103 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k145, env)}),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k143" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn substring 28 23) (close _V0loop_k144) (bruijn arg 17 1) (bruijn ##x.104 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 23)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k144, env)}),
      VGetArg(upenv, 17-1, 1),
      _var0
    );
 }
}
static void _V0loop_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k142" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn + 27 17) (close _V0loop_k143) (bruijn i 12 1) 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k143, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodeInt(1l)
    );
 }
}
static void _V0loop_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k152" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k152, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list 31 10) (bruijn ##k.87 12 0) (bruijn ##x.106 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 10)), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0
    );
 }
}
static void _V0loop_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k151" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 30 19) (close _V0loop_k152) #\: (bruijn ##x.107 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k152, env)}),
      VEncodeChar(':'),
      _var0
    );
 }
}
static void _V0loop_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k157" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k157, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 34 19) (bruijn ##k.87 15 0) (bruijn ##x.108 2 0) (bruijn ##x.109 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 34-1, 19)), runtime,
      VGetArg(upenv, 15-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k156" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 30 6) (close _V0loop_k157) (bruijn ##x.110 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k157, env)}),
      _var0
    );
 }
}
static void _V0loop_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k155" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cddr 32 13) (close _V0loop_k156) (bruijn args 23 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 32-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k156, env)}),
      VGetArg(upenv, 23-1, 1)
    );
 }
}
static void _V0loop_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k154" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 31 19) (close _V0loop_k155) (bruijn ##x.111 1 0) (bruijn ##x.112 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 31-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k155, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0loop_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k153" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 30 12) (close _V0loop_k154) (bruijn args 21 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 30-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k154, env)}),
      VGetArg(upenv, 21-1, 1)
    );
 }
}
static void _V0loop_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k150" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.105 0 0) ((bruijn car 29 20) (close _V0loop_k151) (bruijn mem 10 1)) ((bruijn car 29 20) (close _V0loop_k153) (bruijn mem 10 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k151, env)}),
      VGetArg(upenv, 10-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 29-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k153, env)}),
      VGetArg(upenv, 10-1, 1)
    );
}
 }
}
static void _V0loop_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k149" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 28 14) (close _V0loop_k150) (bruijn ##x.113 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 28-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k150, env)}),
      _var0
    );
 }
}
static void _V0loop_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k148" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 27 11) (close _V0loop_k149) (bruijn ##x.114 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k149, env)}),
      _var0
    );
 }
}
static void _V0loop_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k141" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.98 0 0) ((bruijn car 26 20) (close _V0loop_k142) (bruijn mem 7 1)) ((bruijn cdr 26 28) (close _V0loop_k148) (bruijn args 17 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k142, env)}),
      VGetArg(upenv, 7-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k148, env)}),
      VGetArg(upenv, 17-1, 1)
    );
}
 }
}
static void _V0loop_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k140" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn not 25 14) (close _V0loop_k141) (bruijn ##x.115 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k141, env)}),
      _var0
    );
 }
}
static void _V0loop_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k139" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn = 24 25) (close _V0loop_k140) (bruijn len 11 1) (bruijn ##x.116 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 25)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k140, env)}),
      VGetArg(upenv, 11-1, 1),
      _var0
    );
 }
}
static void _V0loop_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k134" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.93 0 0) ((bruijn car 23 20) (close _V0loop_k135) (bruijn mem 4 1)) ((bruijn + 23 17) (close _V0loop_k139) (bruijn i 8 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k135, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 17)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k139, env)}),
      VGetArg(upenv, 8-1, 1),
      VEncodeInt(1l)
    );
}
 }
}
static void _V0loop_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k107" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.118 0 0) ((bruijn cadr 22 12) (close _V0loop_k108) (bruijn mem 3 1)) ((bruijn not 22 14) (close _V0loop_k134) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k108, env)}),
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k134, env)}),
      VEncodeBool(false)
    );
}
 }
}
static void _V0loop_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k106" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 21 11) (close _V0loop_k107) (bruijn ##x.120 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 11)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k107, env)}),
      _var0
    );
 }
}
static void _V0loop_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k101" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.88 0 0) ((bruijn substring 20 23) (close _V0loop_k102) (bruijn arg 9 1) (bruijn i 5 1)) ((bruijn cdr 20 28) (close _V0loop_k106) (bruijn mem 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 23)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k102, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 5-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k106, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0loop_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda22" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn not 19 14) (close _V0loop_k101) (bruijn mem 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 14)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k101, env)}),
      _var1
    );
 }
}
static void _V0loop_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k100" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0loop_lambda22) (bruijn ##k.85 3 0) (bruijn ##x.121 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda22, env)}, runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k99" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn memq 17 6) (close _V0loop_k100) (bruijn ##x.122 0 0) (bruijn opts 8 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 6)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k100, env)}),
      _var0,
      VGetArg(upenv, 8-1, 2)
    );
 }
}
static void _V0loop_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k158" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k158, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter 14 6) (bruijn ##k.85 2 0) (bruijn ##x.123 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 6)), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0loop_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k98" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.86 0 0) ((bruijn string-ref 16 21) (close _V0loop_k99) (bruijn arg 5 1) (bruijn i 1 1)) ((bruijn cdr 16 28) (close _V0loop_k158) (bruijn args 7 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 21)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k99, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k158, env)}),
      VGetArg(upenv, 7-1, 1)
    );
}
 }
}
static void _V0loop_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda21" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0loop_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 15 7) (close _V0loop_k98) (bruijn i 0 1) (bruijn len 2 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_k98, env)}),
      _var1,
      upenv->up->vars[1]
    );
 }
}
static void _V0getopt__short_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0getopt__short_lambda20" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__short_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0getopt__short_k97) (bruijn loop 0 1) (close _V0loop_lambda21))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__short_k97, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0loop_lambda21, env)})
    );
 }
}
static void _V0getopt__short_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0getopt__short_lambda19" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__short_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0getopt__short_lambda20) (bruijn ##k.82 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__short_lambda20, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0getopt__short_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__short_k96" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__short_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__short_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0getopt__short_lambda19) (bruijn ##k.81 1 0) (bruijn ##x.124 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__short_lambda19, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0getopt__short_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0getopt__short_lambda18" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__short_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string-length 11 26) (close _V0getopt__short_k96) (bruijn arg 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 26)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__short_k96, env)}),
      _var1
    );
 }
}
static void _V0getopt__short_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt__short_k95" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt__short_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__short_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0getopt__short_lambda18) (bruijn ##k.80 1 0) (bruijn ##x.125 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__short_lambda18, env)}, runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0getopt__short_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0getopt__short_lambda17" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0getopt__short_lambda17, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt__short_lambda17, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn car 9 20) (close _V0getopt__short_k95) (bruijn args 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__short_k95, env)}),
      _var1
    );
 }
}
static void _V0getopt_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt_k36" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0getopt_k37) (bruijn getopt-short 5 4) (close _V0getopt__short_lambda17))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt_k37, env)}),
      VEncodeInt(5l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt__short_lambda17, env)})
    );
 }
}
static void _V0getopt_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt_k35" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0getopt_k36) (bruijn opts 4 3) (bruijn ##x.126 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt_k36, env)}),
      VEncodeInt(4l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0getopt_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt_k34" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string->list 6 5) (close _V0getopt_k35) (bruijn optstring 4 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt_k35, env)}),
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0getopt_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt_k33" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0getopt_k34) (bruijn longs 2 2) (bruijn ##x.127 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt_k34, env)}),
      VEncodeInt(2l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V0getopt_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0getopt_k32" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0getopt_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn map 4 24) (close _V0getopt_k33) (bruijn decode-longopt 1 1) (bruijn longopts 2 3))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[24]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt_k33, env)}),
      upenv->vars[1],
      upenv->up->vars[3]
    );
 }
}
static void _V0decode__longopt_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k160" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k160, runtime, upenv, 1, argc, _var0) {
  // ((bruijn decode-longopt 3 1) (bruijn ##k.128 2 0) (bruijn ##x.130 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0decode__longopt_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k166" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k166, runtime, upenv, 1, argc, _var0) {
  // ((bruijn decode-longopt 8 1) (bruijn ##k.128 7 0) (bruijn ##x.132 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0
    );
 }
}
static void _V0decode__longopt_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k165" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 10 19) (close _V0decode__longopt_k166) (bruijn ##x.133 1 0) (bruijn ##x.134 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 19)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k166, env)}),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0decode__longopt_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k164" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 9 28) (close _V0decode__longopt_k165) (bruijn longopt 5 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k165, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0decode__longopt_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k163" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol->string 8 4) (close _V0decode__longopt_k164) (bruijn ##x.135 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k164, env)}),
      _var0
    );
 }
}
static void _V0decode__longopt_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k172" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k172, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list 13 10) (bruijn ##k.128 9 0) (bruijn ##x.138 2 0) #f (bruijn ##x.139 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 10)), runtime,
      VGetArg(upenv, 9-1, 0),
      upenv->up->vars[0],
      VEncodeBool(false),
      _var0
    );
 }
}
static void _V0decode__longopt_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k171" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string->symbol 12 1) (close _V0decode__longopt_k172) (bruijn ##x.140 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k172, env)}),
      _var0
    );
 }
}
static void _V0decode__longopt_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k170" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 11 20) (close _V0decode__longopt_k171) (bruijn longopt 7 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k171, env)}),
      VGetArg(upenv, 7-1, 1)
    );
 }
}
static void _V0decode__longopt_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k178" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k178, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list 16 10) (bruijn ##k.128 12 0) (bruijn ##x.142 3 0) (bruijn ##x.143 2 0) (bruijn ##x.144 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 10)), runtime,
      VGetArg(upenv, 12-1, 0),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0decode__longopt_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k177" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string->symbol 15 1) (close _V0decode__longopt_k178) (bruijn ##x.145 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k178, env)}),
      _var0
    );
 }
}
static void _V0decode__longopt_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k176" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn car 14 20) (close _V0decode__longopt_k177) (bruijn longopt 10 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k177, env)}),
      VGetArg(upenv, 10-1, 1)
    );
 }
}
static void _V0decode__longopt_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k175" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 13 12) (close _V0decode__longopt_k176) (bruijn longopt 9 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 12)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k176, env)}),
      VGetArg(upenv, 9-1, 1)
    );
 }
}
static void _V0decode__longopt_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k174" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.141 0 0) ((bruijn car 12 20) (close _V0decode__longopt_k175) (bruijn longopt 8 1)) ((bruijn ##k.128 8 0) (bruijn longopt 8 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k175, env)}),
      VGetArg(upenv, 8-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 0)), runtime,
      VGetArg(upenv, 8-1, 1)
    );
}
 }
}
static void _V0decode__longopt_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k173" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 11 27) (close _V0decode__longopt_k174) (bruijn ##x.146 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 27)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k174, env)}),
      _var0
    );
 }
}
static void _V0decode__longopt_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k169" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.137 0 0) ((bruijn car 10 20) (close _V0decode__longopt_k170) (bruijn longopt 6 1)) ((bruijn cddr 10 13) (close _V0decode__longopt_k173) (bruijn longopt 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k170, env)}),
      VGetArg(upenv, 6-1, 1)
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 13)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k173, env)}),
      VGetArg(upenv, 6-1, 1)
    );
}
 }
}
static void _V0decode__longopt_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k168" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 9 27) (close _V0decode__longopt_k169) (bruijn ##x.147 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 27)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k169, env)}),
      _var0
    );
 }
}
static void _V0decode__longopt_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k167" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.136 0 0) ((bruijn list 8 10) (bruijn ##k.128 4 0) (bruijn longopt 4 1) #f (bruijn longopt 4 1)) ((bruijn cdr 8 28) (close _V0decode__longopt_k168) (bruijn longopt 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 10)), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      VEncodeBool(false),
      upenv->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 28)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k168, env)}),
      upenv->up->up->up->vars[1]
    );
}
 }
}
static void _V0decode__longopt_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k162" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.131 0 0) ((bruijn car 7 20) (close _V0decode__longopt_k163) (bruijn longopt 3 1)) ((bruijn string? 7 2) (close _V0decode__longopt_k167) (bruijn longopt 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k163, env)}),
      upenv->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 2)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k167, env)}),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0decode__longopt_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k161" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn symbol? 6 3) (close _V0decode__longopt_k162) (bruijn ##x.148 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k162, env)}),
      _var0
    );
 }
}
static void _V0decode__longopt_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0decode__longopt_k159" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0decode__longopt_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.129 0 0) ((bruijn symbol->string 5 4) (close _V0decode__longopt_k160) (bruijn longopt 1 1)) ((bruijn car 5 20) (close _V0decode__longopt_k161) (bruijn longopt 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 4)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k160, env)}),
      upenv->vars[1]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 20)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k161, env)}),
      upenv->vars[1]
    );
}
 }
}
static void _V0decode__longopt_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0decode__longopt_lambda23" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0decode__longopt_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0decode__longopt_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 4 3) (close _V0decode__longopt_k159) (bruijn longopt 0 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[3]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_k159, env)}),
      _var1
    );
 }
}
static void _V0getopt_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 static VDebugInfo dbg = { "_V0getopt_lambda6" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt_lambda6, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
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
  // (set! (close _V0getopt_k32) (bruijn decode-longopt 0 1) (close _V0decode__longopt_lambda23))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt_k32, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0decode__longopt_lambda23, env)})
    );
 }
}
static void _V0getopt_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0getopt_lambda5" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0getopt_lambda5, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0getopt_lambda5, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0getopt_lambda6) (bruijn ##k.7 0 0) #f #f #f #f #f #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)_V0getopt_lambda6, env)}, runtime,
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
static void getopt_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "getopt_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)getopt_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close getopt_k31) (bruijn getopt 0 1) (close _V0getopt_lambda5))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k31, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0getopt_lambda5, env)})
    );
 }
}
static void getopt_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28) {
 static VDebugInfo dbg = { "getopt_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)getopt_lambda3, runtime, upenv, 29, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28) {
  struct { VEnv env; VWORD argv[29]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 29; env->var_len = 29; env->up = upenv;
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
  // ((close getopt_lambda4) (bruijn ##k.3 0 0) #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)getopt_lambda4, env)}, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void getopt_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k30" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close getopt_lambda3) (bruijn ##k.2 28 0) (bruijn ##x.149 27 0) (bruijn ##x.150 26 0) (bruijn ##x.151 25 0) (bruijn ##x.152 24 0) (bruijn ##x.153 23 0) (bruijn ##x.154 22 0) (bruijn ##x.155 21 0) (bruijn ##x.156 20 0) (bruijn ##x.157 19 0) (bruijn ##x.158 18 0) (bruijn ##x.159 17 0) (bruijn ##x.160 16 0) (bruijn ##x.161 15 0) (bruijn ##x.162 14 0) (bruijn ##x.163 13 0) (bruijn ##x.164 12 0) (bruijn ##x.165 11 0) (bruijn ##x.166 10 0) (bruijn ##x.167 9 0) (bruijn ##x.168 8 0) (bruijn ##x.169 7 0) (bruijn ##x.170 6 0) (bruijn ##x.171 5 0) (bruijn ##x.172 4 0) (bruijn ##x.173 3 0) (bruijn ##x.174 2 0) (bruijn ##x.175 1 0) (bruijn ##x.176 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)getopt_lambda3, env)}, runtime,
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
static void getopt_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k29" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 1) (close getopt_k30) (quote cdr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 27-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k30, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k28" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 1) (close getopt_k29) (quote null?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 26-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k29, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k27" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 1) (close getopt_k28) (quote string-length))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 25-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k28, env)}),
      VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k26" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 1) (close getopt_k27) (quote =))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 24-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k27, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 1) (close getopt_k26) (quote map))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 23-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k26, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k24" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 1) (close getopt_k25) (quote substring))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 22-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k25, env)}),
      VEncodePointer(&_V0substring.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k23" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 1) (close getopt_k24) (quote equal?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 21-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k24, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 1) (close getopt_k23) (quote string-ref))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 20-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k23, env)}),
      VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 1) (close getopt_k22) (quote car))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 19-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k22, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k20" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 1) (close getopt_k21) (quote cons))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 18-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k21, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 1) (close getopt_k20) (quote call-with-values))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 17-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k20, env)}),
      VEncodePointer(&_V0call__with__values.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 1) (close getopt_k19) (quote +))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 16-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k19, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 1) (close getopt_k18) (quote eq?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 15-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k18, env)}),
      VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 1) (close getopt_k17) (quote values))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 14-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k17, env)}),
      VEncodePointer(&_V0values.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 1) (close getopt_k16) (quote not))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 13-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k16, env)}),
      VEncodePointer(&_V0not.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 1) (close getopt_k15) (quote cddr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 12-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k15, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 1) (close getopt_k14) (quote cadr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 11-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k14, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 1) (close getopt_k13) (quote pair?))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 10-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k13, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 1) (close getopt_k12) (quote list))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 9-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k12, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 1) (close getopt_k11) (quote caddr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k11, env)}),
      VEncodePointer(&_V0caddr.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 1) (close getopt_k10) (quote assoc))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k10, env)}),
      VEncodePointer(&_V0assoc.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 1) (close getopt_k9) (quote <))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k9, env)}),
      VEncodePointer(&_V0_L.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k7" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 1) (close getopt_k8) (quote memq))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k8, env)}),
      VEncodePointer(&_V0memq.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k6" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 1) (close getopt_k7) (quote string->list))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k7, env)}),
      VEncodePointer(&_V0string___Glist.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k5" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 1) (close getopt_k6) (quote symbol->string))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k6, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k4" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 1) (close getopt_k5) (quote symbol?))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k5, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k3" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 1) (close getopt_k4) (quote string?))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k4, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "getopt_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)getopt_lambda2, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##vcore.import 0 1) (close getopt_k3) (quote string->symbol))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k3, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 }
}
static void getopt_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k2" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close getopt_lambda2) (bruijn ##k.1 2 0) (bruijn ##x.177 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)getopt_lambda2, env)}, runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void getopt_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_k1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close getopt_k2) (##string ##string.181) (bruijn ##x.178 0 0))
    V_CALL_FUNC2(VMakeImport2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k2, env)}),
      VEncodePointer(&_V10string_D181.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void getopt_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "getopt_lambda1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to getopt_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)getopt_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close getopt_k1) (##string ##string.182))
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)getopt_k1, env)}),
      VEncodePointer(&_V10string_D182.sym, VPOINTER_OTHER)
    );
 }
}
VFunc2 getopt = (VFunc2)getopt_lambda1;
