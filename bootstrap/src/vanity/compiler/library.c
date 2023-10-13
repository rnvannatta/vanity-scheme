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
static struct { VBlob sym; char bytes[21]; } _V10string_D213 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D212 = { { VSTRING, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[35]; } _V10string_D211 = { { VSTRING, 35 }, "_V0vanity_V0compiler_V0library_V20" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[8]; } _V0call_Wcc = { { VSYMBOL, 8 }, "call/cc" };
static struct { VBlob sym; char bytes[7]; } _V0append = { { VSYMBOL, 7 }, "append" };
static struct { VBlob sym; char bytes[7]; } _V0equal_Q = { { VSYMBOL, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[8]; } _V0sprintf = { { VSYMBOL, 8 }, "sprintf" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[5]; } _V0fold = { { VSYMBOL, 5 }, "fold" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[14]; } _V0string__length = { { VSYMBOL, 14 }, "string-length" };
static struct { VBlob sym; char bytes[2]; } _V0_G = { { VSYMBOL, 2 }, ">" };
static struct { VBlob sym; char bytes[15]; } _V0symbol___Gstring = { { VSYMBOL, 15 }, "symbol->string" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[2]; } _V0_L = { { VSYMBOL, 2 }, "<" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[11]; } _V0string__ref = { { VSYMBOL, 11 }, "string-ref" };
static struct { VBlob sym; char bytes[3]; } _V0_L_E = { { VSYMBOL, 3 }, "<=" };
static struct { VBlob sym; char bytes[14]; } _V0char___Ginteger = { { VSYMBOL, 14 }, "char->integer" };
static struct { VBlob sym; char bytes[6]; } _V0assoc = { { VSYMBOL, 6 }, "assoc" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[11]; } _V0close__port = { { VSYMBOL, 11 }, "close-port" };
static struct { VBlob sym; char bytes[9]; } _V0read__all = { { VSYMBOL, 9 }, "read-all" };
static struct { VBlob sym; char bytes[23]; } _V0search__open__input__file = { { VSYMBOL, 23 }, "search-open-input-file" };
static struct { VBlob sym; char bytes[44]; } _V10string_D210 = { { VSTRING, 44 }, "library header must only have one statement" };
static struct { VBlob sym; char bytes[23]; } _V10string_D209 = { { VSTRING, 23 }, "unable to find library" };
static struct { VBlob sym; char bytes[27]; } _V10string_D208 = { { VSTRING, 27 }, "library already registered" };
static struct { VBlob sym; char bytes[8]; } _V10string_D207 = { { VSTRING, 8 }, "~A.scmh" };
static struct { VBlob sym; char bytes[6]; } _V10string_D206 = { { VSTRING, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[2]; } _V10string_D205 = { { VSTRING, 2 }, "." };
static struct { VBlob sym; char bytes[14]; } _V0inline__export = { { VSYMBOL, 14 }, "inline-export" };
static struct { VBlob sym; char bytes[14]; } _V0inline__import = { { VSYMBOL, 14 }, "inline-import" };
static struct { VBlob sym; char bytes[7]; } _V0export = { { VSYMBOL, 7 }, "export" };
static struct { VBlob sym; char bytes[25]; } _V0define__library__interface = { { VSYMBOL, 25 }, "define-library-interface" };
static struct { VBlob sym; char bytes[20]; } _V10string_D204 = { { VSTRING, 20 }, "not a valid library" };
static struct { VBlob sym; char bytes[15]; } _V0define__library = { { VSYMBOL, 15 }, "define-library" };
static struct { VBlob sym; char bytes[7]; } _V0import = { { VSYMBOL, 7 }, "import" };
static struct { VBlob sym; char bytes[20]; } _V0gather__dependencies = { { VSYMBOL, 20 }, "gather-dependencies" };
static struct { VBlob sym; char bytes[13]; } _V0import___Gpath = { { VSYMBOL, 13 }, "import->path" };
static struct { VBlob sym; char bytes[16]; } _V0import__basepath = { { VSYMBOL, 16 }, "import-basepath" };
static struct { VBlob sym; char bytes[14]; } _V0valid__import_Q = { { VSYMBOL, 14 }, "valid-import\?" };
static struct { VBlob sym; char bytes[20]; } _V0header__from__library = { { VSYMBOL, 20 }, "header-from-library" };
static struct { VBlob sym; char bytes[28]; } _V0register__library__interface_B = { { VSYMBOL, 28 }, "register-library-interface!" };
static struct { VBlob sym; char bytes[24]; } _V0find__library__interface_B = { { VSYMBOL, 24 }, "find-library-interface!" };
static void _V0vanity_V0compiler_V0library_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k42" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k42, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.17 13 0) (##inline ##sys.cons (##inline ##sys.cons (quote find-library-interface!) (bruijn find-library-interface! 13 4)) (##inline ##sys.cons (##inline ##sys.cons (quote register-library-interface!) (bruijn register-library-interface! 13 3)) (##inline ##sys.cons (##inline ##sys.cons (quote header-from-library) (bruijn header-from-library 13 12)) (##inline ##sys.cons (##inline ##sys.cons (quote valid-import?) (bruijn valid-import? 13 9)) (##inline ##sys.cons (##inline ##sys.cons (quote import-basepath) (bruijn import-basepath 13 11)) (##inline ##sys.cons (##inline ##sys.cons (quote import->path) (bruijn import->path 13 10)) (##inline ##sys.cons (##inline ##sys.cons (quote gather-dependencies) (bruijn gather-dependencies 13 13)) (quote ())))))))))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0find__library__interface_B.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 4)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0register__library__interface_B.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 3)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0header__from__library.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 12)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0valid__import_Q.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 9)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0import__basepath.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 11)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0import___Gpath.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 10)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0gather__dependencies.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 13)
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

    );
 }
}
static void _V0gather__dependencies_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k48" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k48, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.10 6 1) (bruijn ##k.60 4 0) (bruijn ##x.63 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0gather__dependencies_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k47" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append 21 3) (close _V0gather__dependencies_k48) (##inline ##sys.cdr (bruijn ##expr.12 3 1)) (bruijn ##x.64 0 0))
V_CALL(VGetArg(upenv, 21-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k48, env)}),
      VInlineCdr(
upenv->up->up->vars[1]
    )
,
      _var0
    );
 }
}
static void _V0gather__dependencies_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k46" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gather-dependencies 19 13) (close _V0gather__dependencies_k47) (bruijn ##x.65 0 0))
V_CALL(VGetArg(upenv, 19-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k47, env)}),
      _var0
    );
 }
}
static void _V0gather__dependencies_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k45" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.62 0 0) ((bruijn cdr 19 5) (close _V0gather__dependencies_k46) (bruijn statements 5 1)) ((bruijn ##k.60 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k46, env)}),
      VGetArg(upenv, 5-1, 1)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0gather__dependencies_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gather__dependencies_lambda6" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.12 0 1)) ((bruijn equal? 18 4) (close _V0gather__dependencies_k45) (quote import) (##inline ##sys.car (bruijn ##expr.12 0 1))) ((bruijn ##k.60 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k45, env)}),
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
static void _V0gather__dependencies_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k55" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k55, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.10 9 1) (bruijn ##k.51 6 0) (bruijn ##x.55 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0
    );
 }
}
static void _V0gather__dependencies_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k54" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn append 24 3) (close _V0gather__dependencies_k55) (bruijn ##x.56 2 0) (bruijn ##x.57 0 0))
V_CALL(VGetArg(upenv, 24-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k55, env)}),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0gather__dependencies_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k53" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gather-dependencies 22 13) (close _V0gather__dependencies_k54) (bruijn ##x.58 0 0))
V_CALL(VGetArg(upenv, 22-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k54, env)}),
      _var0
    );
 }
}
static void _V0gather__dependencies_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k52" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 22 5) (close _V0gather__dependencies_k53) (bruijn statements 8 1))
V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k53, env)}),
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0gather__dependencies_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k51" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.14 0 0)) ((bruijn gather-dependencies 20 13) (close _V0gather__dependencies_k52) (##inline ##sys.cdr (bruijn ##expr.14 0 0))) ((bruijn ##k.51 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k52, env)}),
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
static void _V0gather__dependencies_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k50" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.53 0 0) ((close _V0gather__dependencies_k51) (##inline ##sys.cdr (bruijn ##expr.13 1 1))) ((bruijn ##k.51 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0gather__dependencies_k51, env, runtime,
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
static void _V0gather__dependencies_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gather__dependencies_lambda7" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.13 0 1)) ((bruijn equal? 19 4) (close _V0gather__dependencies_k50) (quote define-library) (##inline ##sys.car (bruijn ##expr.13 0 1))) ((bruijn ##k.51 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k50, env)}),
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
static void _V0gather__dependencies_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k58" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k58, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.10 5 1) (bruijn ##k.46 5 0) (bruijn ##x.49 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0gather__dependencies_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k57" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn gather-dependencies 19 13) (close _V0gather__dependencies_k58) (bruijn ##x.50 0 0))
V_CALL(VGetArg(upenv, 19-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k58, env)}),
      _var0
    );
 }
}
static void _V0gather__dependencies_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k56" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 19 5) (close _V0gather__dependencies_k57) (bruijn statements 5 1))
V_CALL(VGetArg(upenv, 19-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k57, env)}),
      VGetArg(upenv, 5-1, 1)
    );
 }
}
static void _V0gather__dependencies_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k49" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0gather__dependencies_lambda7) (close _V0gather__dependencies_k56) (bruijn ##input.11 1 0))
V_CALL_FUNC(_V0gather__dependencies_lambda7, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k56, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0gather__dependencies_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k44" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0gather__dependencies_lambda6) (close _V0gather__dependencies_k49) (bruijn ##input.11 0 0))
V_CALL_FUNC(_V0gather__dependencies_lambda6, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k49, env)}),
      _var0
    );
 }
}
static void _V0gather__dependencies_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gather__dependencies_lambda5" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gather__dependencies_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 16 6) (close _V0gather__dependencies_k44) (bruijn statements 2 1))
V_CALL(VGetArg(upenv, 16-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k44, env)}),
      upenv->up->vars[1]
    );
 }
}
static void _V0gather__dependencies_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0gather__dependencies_k43" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0gather__dependencies_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.45 0 0) ((bruijn ##k.44 1 0) (quote ())) ((bruijn call/cc 15 2) (bruijn ##k.44 1 0) (close _V0gather__dependencies_lambda5)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL
    );
} else {
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_lambda5, env)})
    );
}
 }
}
static void _V0gather__dependencies_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0gather__dependencies_lambda4" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0gather__dependencies_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0gather__dependencies_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 14 1) (close _V0gather__dependencies_k43) (bruijn statements 0 1))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_k43, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k41" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0library_V20_k42) (bruijn gather-dependencies 12 13) (close _V0gather__dependencies_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k42, env)}),
      VEncodeInt(12l), VEncodeInt(13l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0gather__dependencies_lambda4, env)})
    );
 }
}
static void _V0header__from__library_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0header__from__library_k62" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0header__from__library_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0header__from__library_k62, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.5 5 1) (bruijn ##k.79 3 0) (bruijn ##x.83 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void _V0header__from__library_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0header__from__library_k61" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0header__from__library_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0header__from__library_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.8 0 0)) ((bruijn iter 6 1) (close _V0header__from__library_k62) (quote ()) (quote ()) (##inline ##sys.cdr (bruijn ##expr.8 0 0))) ((bruijn ##k.79 2 0) #f))
if(VDecodeBool(
VInlinePairP(
_var0
    )
)) {
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0header__from__library_k62, env)}),
      VNULL,
      VNULL,
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
static void _V0header__from__library_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0header__from__library_k60" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0header__from__library_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0header__from__library_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.81 0 0) ((close _V0header__from__library_k61) (##inline ##sys.cdr (bruijn ##expr.7 1 1))) ((bruijn ##k.79 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0header__from__library_k61, env, runtime,
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
static void _V0header__from__library_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0header__from__library_lambda12" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0header__from__library_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.7 0 1)) ((bruijn equal? 18 4) (close _V0header__from__library_k60) (quote define-library) (##inline ##sys.car (bruijn ##expr.7 0 1))) ((bruijn ##k.79 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 18-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0header__from__library_k60, env)}),
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
static void _V0header__from__library_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0header__from__library_k65" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0header__from__library_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0header__from__library_k65, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.5 5 1) (bruijn ##k.74 2 0) (bruijn ##x.77 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0header__from__library_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0header__from__library_k64" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0header__from__library_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0header__from__library_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.76 0 0) ((bruijn error 20 8) (close _V0header__from__library_k65) (##string ##string.204) (bruijn lib 7 1)) ((bruijn ##k.74 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0header__from__library_k65, env)}),
      VEncodePointer(&_V10string_D204.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 1)
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0header__from__library_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0header__from__library_lambda13" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0header__from__library_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.9 0 1)) ((bruijn equal? 19 4) (close _V0header__from__library_k64) (quote define-library) (##inline ##sys.car (bruijn ##expr.9 0 1))) ((bruijn ##k.74 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0header__from__library_k64, env)}),
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
static void _V0header__from__library_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0header__from__library_k66" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0header__from__library_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0header__from__library_k66, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.5 3 1) (bruijn ##k.71 2 0) #f)
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0header__from__library_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0header__from__library_k63" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0header__from__library_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0header__from__library_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0header__from__library_lambda13) (close _V0header__from__library_k66) (bruijn ##input.6 1 1))
V_CALL_FUNC(_V0header__from__library_lambda13, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0header__from__library_k66, env)}),
      upenv->vars[1]
    );
 }
}
static void _V0header__from__library_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0header__from__library_lambda11" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0header__from__library_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0header__from__library_lambda12) (close _V0header__from__library_k63) (bruijn ##input.6 0 1))
V_CALL_FUNC(_V0header__from__library_lambda12, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0header__from__library_k63, env)}),
      _var1
    );
 }
}
static void _V0header__from__library_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0header__from__library_lambda10" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0header__from__library_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0header__from__library_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0header__from__library_lambda11) (bruijn ##k.70 0 0) (bruijn lib 3 1))
V_CALL_FUNC(_V0header__from__library_lambda11, env, runtime,
      _var0,
      upenv->up->up->vars[1]
    );
 }
}
static void _V0header__from__library_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0header__from__library_k59" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0header__from__library_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0header__from__library_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn call/cc 15 2) (bruijn ##k.68 1 0) (close _V0header__from__library_lambda10))
V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0header__from__library_lambda10, env)})
    );
 }
}
static void _V0iter_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k68" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k68, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.85 2 0) (##inline ##sys.cons (quote define-library-interface) (##inline ##sys.cons (bruijn ##x.88 0 0) (##inline ##sys.cons (##inline ##sys.cons (quote import) (bruijn imports 2 2)) (##inline ##sys.cons (##inline ##sys.cons (quote export) (bruijn exports 2 1)) (##inline ##sys.cons (##inline ##sys.cons (quote inline-import) (quote ())) (##inline ##sys.cons (##inline ##sys.cons (quote inline-export) (quote ())) (quote ()))))))))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
VEncodePointer(&_V0define__library__interface.sym, VPOINTER_OTHER),
      VInlineCons(
_var0,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0import.sym, VPOINTER_OTHER),
      upenv->up->vars[2]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0export.sym, VPOINTER_OTHER),
      upenv->up->vars[1]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0inline__import.sym, VPOINTER_OTHER),
      VNULL
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0inline__export.sym, VPOINTER_OTHER),
      VNULL
    )
,
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
static void _V0iter_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k73" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k73, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 6 1) (bruijn ##k.109 4 0) (bruijn ##x.112 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k72" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 8 1) (close _V0iter_k73) (bruijn ##x.113 1 0) (bruijn imports 7 2) (bruijn ##x.114 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k73, env)}),
      upenv->vars[0],
      VGetArg(upenv, 7-1, 2),
      _var0
    );
 }
}
static void _V0iter_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k71" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 21 5) (close _V0iter_k72) (bruijn rest 6 3))
V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k72, env)}),
      VGetArg(upenv, 6-1, 3)
    );
 }
}
static void _V0iter_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k70" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.111 0 0) ((bruijn append 20 3) (close _V0iter_k71) (bruijn exports 5 1) (##inline ##sys.cdr (bruijn ##expr.3 1 1))) ((bruijn ##k.109 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k71, env)}),
      VGetArg(upenv, 5-1, 1),
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
static void _V0iter_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda16" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.3 0 1)) ((bruijn equal? 19 4) (close _V0iter_k70) (quote export) (##inline ##sys.car (bruijn ##expr.3 0 1))) ((bruijn ##k.109 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k70, env)}),
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
static void _V0iter_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k78" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k78, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 7 1) (bruijn ##k.102 4 0) (bruijn ##x.105 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0
    );
 }
}
static void _V0iter_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k77" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 9 1) (close _V0iter_k78) (bruijn exports 8 1) (bruijn ##x.106 1 0) (bruijn ##x.107 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k78, env)}),
      VGetArg(upenv, 8-1, 1),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0iter_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k76" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 22 5) (close _V0iter_k77) (bruijn rest 7 3))
V_CALL(VGetArg(upenv, 22-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k77, env)}),
      VGetArg(upenv, 7-1, 3)
    );
 }
}
static void _V0iter_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k75" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.104 0 0) ((bruijn append 21 3) (close _V0iter_k76) (bruijn imports 6 2) (##inline ##sys.cdr (bruijn ##expr.4 1 1))) ((bruijn ##k.102 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k76, env)}),
      VGetArg(upenv, 6-1, 2),
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
static void _V0iter_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda17" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 1)) ((bruijn equal? 20 4) (close _V0iter_k75) (quote import) (##inline ##sys.car (bruijn ##expr.4 0 1))) ((bruijn ##k.102 0 0) #f))
if(VDecodeBool(
VInlinePairP(
_var1
    )
)) {
V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k75, env)}),
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
static void _V0iter_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k81" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k81, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 5 1) (bruijn ##k.97 5 0) (bruijn ##x.100 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0iter_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k80" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn iter 7 1) (close _V0iter_k81) (bruijn exports 6 1) (bruijn imports 6 2) (bruijn ##x.101 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k81, env)}),
      VGetArg(upenv, 6-1, 1),
      VGetArg(upenv, 6-1, 2),
      _var0
    );
 }
}
static void _V0iter_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k79" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 20 5) (close _V0iter_k80) (bruijn rest 5 3))
V_CALL(VGetArg(upenv, 20-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k80, env)}),
      VGetArg(upenv, 5-1, 3)
    );
 }
}
static void _V0iter_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k74" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda17) (close _V0iter_k79) (bruijn ##input.2 1 0))
V_CALL_FUNC(_V0iter_lambda17, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k79, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0iter_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k69" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0iter_lambda16) (close _V0iter_k74) (bruijn ##input.2 0 0))
V_CALL_FUNC(_V0iter_lambda16, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k74, env)}),
      _var0
    );
 }
}
static void _V0iter_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0iter_lambda15" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0iter_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn car 17 6) (close _V0iter_k69) (bruijn rest 2 3))
V_CALL(VGetArg(upenv, 17-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k69, env)}),
      upenv->up->vars[3]
    );
 }
}
static void _V0iter_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k67" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.86 0 0) ((bruijn cadr 16 7) (close _V0iter_k68) (bruijn lib 3 1)) ((bruijn call/cc 16 2) (bruijn ##k.85 1 0) (close _V0iter_lambda15)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k68, env)}),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda15, env)})
    );
}
 }
}
static void _V0iter_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0iter_lambda14" };
 VRecordCall(&dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0iter_lambda14, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda14, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 15 1) (close _V0iter_k67) (bruijn rest 0 3))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k67, env)}),
      _var3
    );
 }
}
static void _V0header__from__library_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0header__from__library_lambda9" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0header__from__library_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0header__from__library_k59) (bruijn iter 0 1) (close _V0iter_lambda14))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0header__from__library_k59, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda14, env)})
    );
 }
}
static void _V0header__from__library_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0header__from__library_lambda8" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0header__from__library_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0header__from__library_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0header__from__library_lambda9) (bruijn ##k.67 0 0) #f)
V_CALL_FUNC(_V0header__from__library_lambda9, env, runtime,
      _var0,
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k40" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0library_V20_k41) (bruijn header-from-library 11 12) (close _V0header__from__library_lambda8))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k41, env)}),
      VEncodeInt(11l), VEncodeInt(12l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0header__from__library_lambda8, env)})
    );
 }
}
static void _V0import__basepath_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0import__basepath_k86" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0import__basepath_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0import__basepath_k86, runtime, upenv, 1, argc, _var0) {
  // ((bruijn sprintf 17 9) (bruijn ##k.116 5 0) (##string ##string.206) (bruijn ##x.118 2 0) (bruijn ##x.119 0 0))
V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D206.sym, VPOINTER_OTHER),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0import__basepath_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0import__basepath_k85" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0import__basepath_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0import__basepath_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn import-basepath 15 11) (close _V0import__basepath_k86) (bruijn ##x.120 0 0))
V_CALL(VGetArg(upenv, 15-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0import__basepath_k86, env)}),
      _var0
    );
 }
}
static void _V0import__basepath_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0import__basepath_k84" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0import__basepath_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0import__basepath_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 15 5) (close _V0import__basepath_k85) (bruijn import 3 1))
V_CALL(VGetArg(upenv, 15-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0import__basepath_k85, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0import__basepath_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0import__basepath_k83" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0import__basepath_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0import__basepath_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.117 0 0) ((bruijn ##k.116 2 0) (##string ##string.205)) ((bruijn car 14 6) (close _V0import__basepath_k84) (bruijn import 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10string_D205.sym, VPOINTER_OTHER)
    );
} else {
V_CALL(VGetArg(upenv, 14-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0import__basepath_k84, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0import__basepath_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0import__basepath_k82" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0import__basepath_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0import__basepath_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 13 1) (close _V0import__basepath_k83) (bruijn ##x.121 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0import__basepath_k83, env)}),
      _var0
    );
 }
}
static void _V0import__basepath_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0import__basepath_lambda18" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0import__basepath_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0import__basepath_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 12 5) (close _V0import__basepath_k82) (bruijn import 0 1))
V_CALL(VGetArg(upenv, 12-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0import__basepath_k82, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k39" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0library_V20_k40) (bruijn import-basepath 10 11) (close _V0import__basepath_lambda18))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k40, env)}),
      VEncodeInt(10l), VEncodeInt(11l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0import__basepath_lambda18, env)})
    );
 }
}
static void _V0import___Gpath_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0import___Gpath_k89" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0import___Gpath_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0import___Gpath_k89, runtime, upenv, 1, argc, _var0) {
  // ((bruijn sprintf 14 9) (bruijn ##k.122 3 0) (##string ##string.207) (bruijn ##x.124 0 0))
V_CALL(VGetArg(upenv, 14-1, 9), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D207.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0import___Gpath_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0import___Gpath_k92" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0import___Gpath_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0import___Gpath_k92, runtime, upenv, 1, argc, _var0) {
  // ((bruijn sprintf 16 9) (bruijn ##k.122 5 0) (##string ##string.206) (bruijn ##x.125 2 0) (bruijn ##x.126 0 0))
V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10string_D206.sym, VPOINTER_OTHER),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0import___Gpath_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0import___Gpath_k91" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0import___Gpath_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0import___Gpath_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn import->path 14 10) (close _V0import___Gpath_k92) (bruijn ##x.127 0 0))
V_CALL(VGetArg(upenv, 14-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0import___Gpath_k92, env)}),
      _var0
    );
 }
}
static void _V0import___Gpath_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0import___Gpath_k90" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0import___Gpath_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0import___Gpath_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 14 5) (close _V0import___Gpath_k91) (bruijn import 3 1))
V_CALL(VGetArg(upenv, 14-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0import___Gpath_k91, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0import___Gpath_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0import___Gpath_k88" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0import___Gpath_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0import___Gpath_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.123 0 0) ((bruijn car 13 6) (close _V0import___Gpath_k89) (bruijn import 2 1)) ((bruijn car 13 6) (close _V0import___Gpath_k90) (bruijn import 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0import___Gpath_k89, env)}),
      upenv->up->vars[1]
    );
} else {
V_CALL(VGetArg(upenv, 13-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0import___Gpath_k90, env)}),
      upenv->up->vars[1]
    );
}
 }
}
static void _V0import___Gpath_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0import___Gpath_k87" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0import___Gpath_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0import___Gpath_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn null? 12 1) (close _V0import___Gpath_k88) (bruijn ##x.128 0 0))
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0import___Gpath_k88, env)}),
      _var0
    );
 }
}
static void _V0import___Gpath_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0import___Gpath_lambda19" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0import___Gpath_lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0import___Gpath_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 11 5) (close _V0import___Gpath_k87) (bruijn import 0 1))
V_CALL(VGetArg(upenv, 11-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0import___Gpath_k87, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k38" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0library_V20_k39) (bruijn import->path 9 10) (close _V0import___Gpath_lambda19))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k39, env)}),
      VEncodeInt(9l), VEncodeInt(10l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0import___Gpath_lambda19, env)})
    );
 }
}
static void _V0valid__import_Q_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__import_Q_k94" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__import_Q_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__import_Q_k94, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fold 12 11) (bruijn ##k.129 2 0) (bruijn andf 11 7) #t (bruijn ##x.131 0 0))
V_CALL(VGetArg(upenv, 12-1, 11), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 11-1, 7),
      VEncodeBool(true),
      _var0
    );
 }
}
static void _V0valid__import_Q_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__import_Q_k93" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__import_Q_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__import_Q_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.130 0 0) ((bruijn map 11 10) (close _V0valid__import_Q_k94) (bruijn valid-import-element? 10 8) (bruijn import 1 1)) ((bruijn ##k.129 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__import_Q_k94, env)}),
      VGetArg(upenv, 10-1, 8),
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0valid__import_Q_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0valid__import_Q_lambda20" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0valid__import_Q_lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__import_Q_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 10 12) (close _V0valid__import_Q_k93) (bruijn import 0 1))
V_CALL(VGetArg(upenv, 10-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__import_Q_k93, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k37" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0library_V20_k38) (bruijn valid-import? 8 9) (close _V0valid__import_Q_lambda20))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k38, env)}),
      VEncodeInt(8l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__import_Q_lambda20, env)})
    );
 }
}
static void _V0valid__import__element_Q_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__import__element_Q_k99" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__import__element_Q_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__import__element_Q_k99, runtime, upenv, 1, argc, _var0) {
  // ((bruijn alphanumeric? 13 6) (bruijn ##k.132 5 0) (bruijn ##x.135 0 0))
V_CALL(VGetArg(upenv, 13-1, 6), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0valid__import__element_Q_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__import__element_Q_k98" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__import__element_Q_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__import__element_Q_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.134 0 0) ((bruijn symbol->string 13 15) (close _V0valid__import__element_Q_k99) (bruijn x 4 1)) ((bruijn ##k.132 4 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__import__element_Q_k99, env)}),
      upenv->up->up->up->vars[1]
    );
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0valid__import__element_Q_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__import__element_Q_k97" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__import__element_Q_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__import__element_Q_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn > 12 14) (close _V0valid__import__element_Q_k98) (bruijn ##x.136 0 0) 0)
V_CALL(VGetArg(upenv, 12-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__import__element_Q_k98, env)}),
      _var0,
      VEncodeInt(0l)
    );
 }
}
static void _V0valid__import__element_Q_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__import__element_Q_k96" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__import__element_Q_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__import__element_Q_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn string-length 11 13) (close _V0valid__import__element_Q_k97) (bruijn ##x.137 0 0))
V_CALL(VGetArg(upenv, 11-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__import__element_Q_k97, env)}),
      _var0
    );
 }
}
static void _V0valid__import__element_Q_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__import__element_Q_k95" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__import__element_Q_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__import__element_Q_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.133 0 0) ((bruijn symbol->string 10 15) (close _V0valid__import__element_Q_k96) (bruijn x 1 1)) ((bruijn ##k.132 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__import__element_Q_k96, env)}),
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0valid__import__element_Q_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0valid__import__element_Q_lambda21" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0valid__import__element_Q_lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__import__element_Q_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 9 16) (close _V0valid__import__element_Q_k95) (bruijn x 0 1))
V_CALL(VGetArg(upenv, 9-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__import__element_Q_k95, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k36" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0library_V20_k37) (bruijn valid-import-element? 7 8) (close _V0valid__import__element_Q_lambda21))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k37, env)}),
      VEncodeInt(7l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__import__element_Q_lambda21, env)})
    );
 }
}
static void _V0andf_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0andf_lambda22" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0andf_lambda22, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0andf_lambda22, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn a 0 1) ((bruijn ##k.138 0 0) (bruijn b 0 2)) ((bruijn ##k.138 0 0) #f))
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
static void _V0vanity_V0compiler_V0library_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k35" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0library_V20_k36) (bruijn andf 6 7) (close _V0andf_lambda22))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k36, env)}),
      VEncodeInt(6l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0andf_lambda22, env)})
    );
 }
}
static void _V0alphanumeric_Q_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0alphanumeric_Q_k101" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0alphanumeric_Q_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alphanumeric_Q_k101, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 1) (bruijn ##k.140 1 0) 0)
V_CALL(upenv->vars[1], runtime,
      upenv->vars[0],
      VEncodeInt(0l)
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k105, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 1) (bruijn ##k.142 4 0) (bruijn ##x.145 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->up->vars[0],
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.144 0 0) ((bruijn + 13 18) (close _V0loop_k105) (bruijn i 3 1) 1) ((bruijn ##k.142 3 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k105, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l)
    );
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false)
    );
}
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn alphanumeric-char? 11 5) (close _V0loop_k104) (bruijn ##x.146 0 0))
V_CALL(VGetArg(upenv, 11-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k104, env)}),
      _var0
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
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.143 0 0) ((bruijn string-ref 11 19) (close _V0loop_k103) (bruijn str 4 1) (bruijn i 1 1)) ((bruijn ##k.142 1 0) #t))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k103, env)}),
      upenv->up->up->up->vars[1],
      upenv->vars[1]
    );
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true)
    );
}
 }
}
static void _V0loop_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda25" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 10 17) (close _V0loop_k102) (bruijn i 0 1) (bruijn len 2 0))
V_CALL(VGetArg(upenv, 10-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k102, env)}),
      _var1,
      upenv->up->vars[0]
    );
 }
}
static void _V0alphanumeric_Q_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0alphanumeric_Q_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0alphanumeric_Q_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (close _V0alphanumeric_Q_k101) (bruijn loop 0 1) (close _V0loop_lambda25))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alphanumeric_Q_k101, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda25, env)})
    );
 }
}
static void _V0alphanumeric_Q_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0alphanumeric_Q_k100" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0alphanumeric_Q_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alphanumeric_Q_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0alphanumeric_Q_lambda24) (bruijn ##k.139 1 0) #f)
V_CALL_FUNC(_V0alphanumeric_Q_lambda24, env, runtime,
      upenv->vars[0],
      VEncodeBool(false)
    );
 }
}
static void _V0alphanumeric_Q_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0alphanumeric_Q_lambda23" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0alphanumeric_Q_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alphanumeric_Q_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string-length 7 13) (close _V0alphanumeric_Q_k100) (bruijn str 0 1))
V_CALL(VGetArg(upenv, 7-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alphanumeric_Q_k100, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k34" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0library_V20_k35) (bruijn alphanumeric? 5 6) (close _V0alphanumeric_Q_lambda23))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k35, env)}),
      VEncodeInt(5l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alphanumeric_Q_lambda23, env)})
    );
 }
}
static void _V0alphanumeric__char_Q_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0alphanumeric__char_Q_k114" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0alphanumeric__char_Q_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alphanumeric__char_Q_k114, runtime, upenv, 1, argc, _var0) {
  // ((bruijn <= 15 20) (bruijn ##k.147 9 0) (bruijn ##x.150 1 0) (bruijn i 8 0) (bruijn ##x.151 0 0))
V_CALL(VGetArg(upenv, 15-1, 20), runtime,
      VGetArg(upenv, 9-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 8-1, 0),
      _var0
    );
 }
}
static void _V0alphanumeric__char_Q_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0alphanumeric__char_Q_k113" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0alphanumeric__char_Q_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alphanumeric__char_Q_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn char->integer 14 21) (close _V0alphanumeric__char_Q_k114) #\9)
V_CALL(VGetArg(upenv, 14-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alphanumeric__char_Q_k114, env)}),
      VEncodeChar('9')
    );
 }
}
static void _V0alphanumeric__char_Q_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0alphanumeric__char_Q_k112" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0alphanumeric__char_Q_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alphanumeric__char_Q_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.149 0 0) ((bruijn ##k.147 7 0) (bruijn ##p.149 0 0)) ((bruijn char->integer 13 21) (close _V0alphanumeric__char_Q_k113) #\0))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 13-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alphanumeric__char_Q_k113, env)}),
      VEncodeChar('0')
    );
}
 }
}
static void _V0alphanumeric__char_Q_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0alphanumeric__char_Q_k111" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0alphanumeric__char_Q_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alphanumeric__char_Q_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn <= 12 20) (close _V0alphanumeric__char_Q_k112) (bruijn ##x.152 1 0) (bruijn i 5 0) (bruijn ##x.153 0 0))
V_CALL(VGetArg(upenv, 12-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alphanumeric__char_Q_k112, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 0),
      _var0
    );
 }
}
static void _V0alphanumeric__char_Q_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0alphanumeric__char_Q_k110" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0alphanumeric__char_Q_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alphanumeric__char_Q_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn char->integer 11 21) (close _V0alphanumeric__char_Q_k111) #\Z)
V_CALL(VGetArg(upenv, 11-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alphanumeric__char_Q_k111, env)}),
      VEncodeChar('Z')
    );
 }
}
static void _V0alphanumeric__char_Q_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0alphanumeric__char_Q_k109" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0alphanumeric__char_Q_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alphanumeric__char_Q_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.148 0 0) ((bruijn ##k.147 4 0) (bruijn ##p.148 0 0)) ((bruijn char->integer 10 21) (close _V0alphanumeric__char_Q_k110) #\A))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 10-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alphanumeric__char_Q_k110, env)}),
      VEncodeChar('A')
    );
}
 }
}
static void _V0alphanumeric__char_Q_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0alphanumeric__char_Q_k108" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0alphanumeric__char_Q_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alphanumeric__char_Q_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn <= 9 20) (close _V0alphanumeric__char_Q_k109) (bruijn ##x.154 1 0) (bruijn i 2 0) (bruijn ##x.155 0 0))
V_CALL(VGetArg(upenv, 9-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alphanumeric__char_Q_k109, env)}),
      upenv->vars[0],
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0alphanumeric__char_Q_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0alphanumeric__char_Q_k107" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0alphanumeric__char_Q_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alphanumeric__char_Q_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn char->integer 8 21) (close _V0alphanumeric__char_Q_k108) #\z)
V_CALL(VGetArg(upenv, 8-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alphanumeric__char_Q_k108, env)}),
      VEncodeChar('z')
    );
 }
}
static void _V0alphanumeric__char_Q_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0alphanumeric__char_Q_k106" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0alphanumeric__char_Q_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alphanumeric__char_Q_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn char->integer 7 21) (close _V0alphanumeric__char_Q_k107) #\a)
V_CALL(VGetArg(upenv, 7-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alphanumeric__char_Q_k107, env)}),
      VEncodeChar('a')
    );
 }
}
static void _V0alphanumeric__char_Q_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0alphanumeric__char_Q_lambda26" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0alphanumeric__char_Q_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0alphanumeric__char_Q_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn char->integer 6 21) (close _V0alphanumeric__char_Q_k106) (bruijn c 0 1))
V_CALL(VGetArg(upenv, 6-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alphanumeric__char_Q_k106, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k33" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0library_V20_k34) (bruijn alphanumeric-char? 4 5) (close _V0alphanumeric__char_Q_lambda26))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k34, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0alphanumeric__char_Q_lambda26, env)})
    );
 }
}
static void _V0find__library__interface_B_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0find__library__interface_B_k115" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0find__library__interface_B_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__library__interface_B_k115, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn lookup 0 0) ((bruijn cdr 6 5) (bruijn ##k.156 1 0) (bruijn lookup 0 0)) ((bruijn load-library-interface 5 2) (bruijn ##k.156 1 0) (bruijn import 1 1) (bruijn paths 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 5), runtime,
      upenv->vars[0],
      _var0
    );
} else {
V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]
    );
}
 }
}
static void _V0find__library__interface_B_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0find__library__interface_B_lambda27" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0find__library__interface_B_lambda27, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0find__library__interface_B_lambda27, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn assoc 5 22) (close _V0find__library__interface_B_k115) (bruijn import 0 1) (bruijn library-interfaces 4 1))
V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__library__interface_B_k115, env)}),
      _var1,
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k32" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0library_V20_k33) (bruijn find-library-interface! 3 4) (close _V0find__library__interface_B_lambda27))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k33, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0find__library__interface_B_lambda27, env)})
    );
 }
}
static void _V0register__library__interface_B_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0register__library__interface_B_k119" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0register__library__interface_B_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0register__library__interface_B_k119, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 8 8) (bruijn ##k.163 1 0) (##string ##string.208) (bruijn ##x.164 0 0))
V_CALL(VGetArg(upenv, 8-1, 8), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D208.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void _V0register__library__interface_B_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0register__library__interface_B_k118" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0register__library__interface_B_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0register__library__interface_B_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.162 1 0) ((bruijn cadr 7 7) (close _V0register__library__interface_B_k119) (bruijn lib 3 1)) ((bruijn ##k.163 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 7-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0register__library__interface_B_k119, env)}),
      upenv->up->up->vars[1]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0register__library__interface_B_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0register__library__interface_B_k123" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0register__library__interface_B_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0register__library__interface_B_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (bruijn ##k.157 6 0) (bruijn library-interfaces 9 1) (bruijn ##x.159 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(9l), VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0register__library__interface_B_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0register__library__interface_B_k122" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0register__library__interface_B_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0register__library__interface_B_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 9 23) (close _V0register__library__interface_B_k123) (bruijn ##x.160 0 0) (bruijn library-interfaces 8 1))
V_CALL(VGetArg(upenv, 9-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0register__library__interface_B_k123, env)}),
      _var0,
      VGetArg(upenv, 8-1, 1)
    );
 }
}
static void _V0register__library__interface_B_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0register__library__interface_B_k121" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0register__library__interface_B_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0register__library__interface_B_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cons 8 23) (close _V0register__library__interface_B_k122) (bruijn ##x.161 0 0) (bruijn lib 4 1))
V_CALL(VGetArg(upenv, 8-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0register__library__interface_B_k122, env)}),
      _var0,
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0register__library__interface_B_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0register__library__interface_B_k120" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0register__library__interface_B_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0register__library__interface_B_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cadr 7 7) (close _V0register__library__interface_B_k121) (bruijn lib 3 1))
V_CALL(VGetArg(upenv, 7-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0register__library__interface_B_k121, env)}),
      upenv->up->up->vars[1]
    );
 }
}
static void _V0register__library__interface_B_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0register__library__interface_B_k117" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0register__library__interface_B_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0register__library__interface_B_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0register__library__interface_B_k118) (close _V0register__library__interface_B_k120))
V_CALL_FUNC(_V0register__library__interface_B_k118, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0register__library__interface_B_k120, env)})
    );
 }
}
static void _V0register__library__interface_B_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0register__library__interface_B_k116" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0register__library__interface_B_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0register__library__interface_B_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn assoc 5 22) (close _V0register__library__interface_B_k117) (bruijn ##x.165 0 0) (bruijn library-interfaces 4 1))
V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0register__library__interface_B_k117, env)}),
      _var0,
      upenv->up->up->up->vars[1]
    );
 }
}
static void _V0register__library__interface_B_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0register__library__interface_B_lambda28" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0register__library__interface_B_lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0register__library__interface_B_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cadr 4 7) (close _V0register__library__interface_B_k116) (bruijn lib 0 1))
V_CALL(upenv->up->up->up->vars[7], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0register__library__interface_B_k116, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k31" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0library_V20_k32) (bruijn register-library-interface! 2 3) (close _V0register__library__interface_B_lambda28))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k32, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0register__library__interface_B_lambda28, env)})
    );
 }
}
static void _V0load__library__interface_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0load__library__interface_k126" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0load__library__interface_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0load__library__interface_k126, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn fd 1 0) ((bruijn read-all 6 25) (bruijn ##k.174 0 0) (bruijn fd 1 0)) ((bruijn error 6 8) (bruijn ##k.174 0 0) (##string ##string.209) (bruijn import 3 1)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 6-1, 25), runtime,
      _var0,
      upenv->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 6-1, 8), runtime,
      _var0,
      VEncodePointer(&_V10string_D209.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]
    );
}
 }
}
static void _V0load__library__interface_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0load__library__interface_k130" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0load__library__interface_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0load__library__interface_k130, runtime, upenv, 1, argc, _var0) {
  // ((bruijn null? 9 1) (bruijn ##k.172 1 0) (bruijn ##x.173 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0load__library__interface_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0load__library__interface_k129" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0load__library__interface_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0load__library__interface_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.171 1 0) ((bruijn cdr 8 5) (close _V0load__library__interface_k130) (bruijn parse 2 0)) ((bruijn ##k.172 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0load__library__interface_k130, env)}),
      upenv->up->vars[0]
    );
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false)
    );
}
 }
}
static void _V0load__library__interface_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0load__library__interface_k132" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0load__library__interface_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0load__library__interface_k132, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.169 1 0) ((bruijn car 9 6) (bruijn ##k.170 0 0) (bruijn parse 3 0)) ((bruijn error 9 8) (bruijn ##k.170 0 0) (##string ##string.210)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 9-1, 6), runtime,
      _var0,
      upenv->up->up->vars[0]
    );
} else {
V_CALL(VGetArg(upenv, 9-1, 8), runtime,
      _var0,
      VEncodePointer(&_V10string_D210.sym, VPOINTER_OTHER)
    );
}
 }
}
static void _V0load__library__interface_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0load__library__interface_k135" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0load__library__interface_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0load__library__interface_k135, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.166 8 0) (bruijn parse 2 0))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      upenv->up->vars[0]
    );
 }
}
static void _V0load__library__interface_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0load__library__interface_k134" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0load__library__interface_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0load__library__interface_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn register-library-interface! 9 3) (close _V0load__library__interface_k135) (bruijn parse 1 0))
V_CALL(VGetArg(upenv, 9-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0load__library__interface_k135, env)}),
      upenv->vars[0]
    );
 }
}
static void _V0load__library__interface_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0load__library__interface_k133" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0load__library__interface_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0load__library__interface_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn close-port 9 24) (close _V0load__library__interface_k134) (bruijn fd 4 0))
V_CALL(VGetArg(upenv, 9-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0load__library__interface_k134, env)}),
      upenv->up->up->up->vars[0]
    );
 }
}
static void _V0load__library__interface_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0load__library__interface_k131" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0load__library__interface_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0load__library__interface_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0load__library__interface_k132) (close _V0load__library__interface_k133))
V_CALL_FUNC(_V0load__library__interface_k132, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0load__library__interface_k133, env)})
    );
 }
}
static void _V0load__library__interface_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0load__library__interface_k128" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0load__library__interface_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0load__library__interface_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0load__library__interface_k129) (close _V0load__library__interface_k131))
V_CALL_FUNC(_V0load__library__interface_k129, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0load__library__interface_k131, env)})
    );
 }
}
static void _V0load__library__interface_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0load__library__interface_k127" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0load__library__interface_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0load__library__interface_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn pair? 6 12) (close _V0load__library__interface_k128) (bruijn parse 0 0))
V_CALL(VGetArg(upenv, 6-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0load__library__interface_k128, env)}),
      _var0
    );
 }
}
static void _V0load__library__interface_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0load__library__interface_k125" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0load__library__interface_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0load__library__interface_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0load__library__interface_k126) (close _V0load__library__interface_k127))
V_CALL_FUNC(_V0load__library__interface_k126, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0load__library__interface_k127, env)})
    );
 }
}
static void _V0load__library__interface_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0load__library__interface_k124" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0load__library__interface_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0load__library__interface_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn search-open-input-file 4 26) (close _V0load__library__interface_k125) (bruijn ##x.175 0 0) (bruijn paths 1 2))
V_CALL(upenv->up->up->up->vars[26], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0load__library__interface_k125, env)}),
      _var0,
      upenv->vars[2]
    );
 }
}
static void _V0load__library__interface_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0load__library__interface_lambda29" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0load__library__interface_lambda29, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0load__library__interface_lambda29, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn import->path 2 10) (close _V0load__library__interface_k124) (bruijn import 0 1))
V_CALL(upenv->up->vars[10], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0load__library__interface_k124, env)}),
      _var1
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k30" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0library_V20_k31) (bruijn load-library-interface 1 2) (close _V0load__library__interface_lambda29))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k31, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0load__library__interface_lambda29, env)})
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_lambda3, runtime, upenv, 14, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13) {
  struct { VEnv env; VWORD argv[14]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 14; env->var_len = 14; env->up = upenv;
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
  // (set! (close _V0vanity_V0compiler_V0library_V20_k30) (bruijn library-interfaces 0 1) (quote ()))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k30, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VNULL
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_lambda2, runtime, upenv, 27, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26) {
  struct { VEnv env; VWORD argv[27]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 27; env->var_len = 27; env->up = upenv;
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
  // ((close _V0vanity_V0compiler_V0library_V20_lambda3) (bruijn ##k.16 0 0) #f #f #f #f #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(_V0vanity_V0compiler_V0library_V20_lambda3, env, runtime,
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
      VEncodeBool(false)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k29" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0library_V20_lambda2) (bruijn ##k.15 29 0) (bruijn ##x.176 25 0) (bruijn ##x.177 24 0) (bruijn ##x.178 23 0) (bruijn ##x.179 22 0) (bruijn ##x.180 21 0) (bruijn ##x.181 20 0) (bruijn ##x.182 19 0) (bruijn ##x.183 18 0) (bruijn ##x.184 17 0) (bruijn ##x.185 16 0) (bruijn ##x.186 15 0) (bruijn ##x.187 14 0) (bruijn ##x.188 13 0) (bruijn ##x.189 12 0) (bruijn ##x.190 11 0) (bruijn ##x.191 10 0) (bruijn ##x.192 9 0) (bruijn ##x.193 8 0) (bruijn ##x.194 7 0) (bruijn ##x.195 6 0) (bruijn ##x.196 5 0) (bruijn ##x.197 4 0) (bruijn ##x.198 3 0) (bruijn ##x.199 2 0) (bruijn ##x.200 1 0) (bruijn ##x.201 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0library_V20_lambda2, env, runtime,
      VGetArg(upenv, 29-1, 0),
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
static void _V0vanity_V0compiler_V0library_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k28" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close _V0vanity_V0compiler_V0library_V20_k29) (quote search-open-input-file))
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k29, env)}),
      VEncodePointer(&_V0search__open__input__file.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k27" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close _V0vanity_V0compiler_V0library_V20_k28) (quote read-all))
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k28, env)}),
      VEncodePointer(&_V0read__all.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k26" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close _V0vanity_V0compiler_V0library_V20_k27) (quote close-port))
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k27, env)}),
      VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k25" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0compiler_V0library_V20_k26) (quote cons))
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k26, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k24" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0compiler_V0library_V20_k25) (quote assoc))
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k25, env)}),
      VEncodePointer(&_V0assoc.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k23" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0compiler_V0library_V20_k24) (quote char->integer))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k24, env)}),
      VEncodePointer(&_V0char___Ginteger.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0library_V20_k23) (quote <=))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k23, env)}),
      VEncodePointer(&_V0_L_E.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0library_V20_k22) (quote string-ref))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k22, env)}),
      VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k20" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0library_V20_k21) (quote +))
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k21, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0library_V20_k20) (quote <))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k20, env)}),
      VEncodePointer(&_V0_L.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0library_V20_k19) (quote symbol?))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k19, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0library_V20_k18) (quote symbol->string))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k18, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0library_V20_k17) (quote >))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k17, env)}),
      VEncodePointer(&_V0_G.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0library_V20_k16) (quote string-length))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k16, env)}),
      VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0library_V20_k15) (quote pair?))
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k15, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0library_V20_k14) (quote fold))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k14, env)}),
      VEncodePointer(&_V0fold.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0library_V20_k13) (quote map))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k13, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0library_V20_k12) (quote sprintf))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k12, env)}),
      VEncodePointer(&_V0sprintf.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0library_V20_k11) (quote error))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k11, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0library_V20_k10) (quote cadr))
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k10, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0library_V20_k9) (quote car))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k9, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k7" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0library_V20_k8) (quote cdr))
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k8, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k6" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0library_V20_k7) (quote equal?))
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k7, env)}),
      VEncodePointer(&_V0equal_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k5" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0library_V20_k6) (quote append))
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k6, env)}),
      VEncodePointer(&_V0append.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k4" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0library_V20_k5) (quote call/cc))
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k5, env)}),
      VEncodePointer(&_V0call_Wcc.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k3" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0library_V20_k4) (quote null?))
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k4, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k2" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0library_V20_k3) (##string ##string.211) (bruijn ##x.202 1 0) (bruijn ##x.203 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k3, env)}),
      VEncodePointer(&_V10string_D211.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_k1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_k2) (##string ##string.212))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k2, env)}),
      VEncodePointer(&_V10string_D212.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0library_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_lambda1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0library_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_k1) (##string ##string.213))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k1, env)}),
      VEncodePointer(&_V10string_D213.sym, VPOINTER_OTHER)
    );
 }
}
VFunc _V0vanity_V0compiler_V0library_V20 = (VFunc)_V0vanity_V0compiler_V0library_V20_lambda1;
